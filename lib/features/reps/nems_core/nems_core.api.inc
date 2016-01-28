<?php
/**
 * @file
 * Api for the nems core feature.
 */

/**
 * Helper function to get the system path of aliased links.
 *
 * @param string $link
 *   The link to be handled.
 *
 * @return string
 *   The link, revisited.
 */
function _nems_core_menu_link($link, $lang = FALSE) {
  global $base_url;
  $lang = $lang ? $lang : LANGUAGE_NONE;
  if ($link != '<front>' &&  $link != '<nolink>') {
    $source = drupal_lookup_path('source', $link, $lang);
    if (!$source) {
      $view = drupal_valid_path($link);
      if ($view) {
        return $link;
      }
      else {
        $link = url($link, array('absolute' => TRUE));
      }
    }
    else {
      $link = $source;
    }
  }

  return $link;
}

/**
 * Add system languages.
 *
 * @param array $languages
 *   Array of languages codes.
 */
function _nems_core_add_languages($languages = array()) {
  // Enabling languages. TO BE MOVED!
  if (module_exists('locale')) {
    include_once DRUPAL_ROOT . '/includes/locale.inc';
    if (!empty($languages)) {
      foreach ($languages as $lang) {
        locale_add_language($lang);
      }
    }
  }
}

/**
 * Disable system languages.
 *
 * @param array $languages
 *   Array of languages codes.
 */
function _nems_core_disable_languages($languages = array()) {
  $langs = language_list();
  foreach ($languages as $lang) {
    if (isset($langs[$lang])) {
      db_update('languages')
        ->fields(array('enabled' => 0))
        ->condition('language', $lang, '=')
        ->execute();
    }
  }
}

/**
 * Create menu links.
 *
 * @param string $menu
 *   Menu name.
 * @param string $link
 *   The raw link.
 * @param string $plid
 *   The parent item mlid.
 * @param string $title
 *   The link title.
 * @param string $module
 *   Module machine name.
 * @param string $weight
 *   Weight of the menu item.
 * @param string $lang
 *   Lang code sanitized.
 * @param string $tsid
 *   Translations set id.
 * @param string $nolink
 *   Items without links.
 * @param string $logs
 *   The logs directory path.
 *
 * @return int
 *   The mlid of the created menu item.
 */
function _nems_core_menu_item($menu, $link, $plid, $title, $module, $weight, $lang = 'en', $tsid = NULL, $nolink = FALSE, $logs = FALSE) {
  $link = _nems_core_menu_link($link, $lang);
  $plid = ($plid > 0) ? $plid : 0;

  $item = array(
    'menu_name' => $menu,
    'module' => $module,
    'customized' => 1,
    'language' => $lang,
    'plid' => $plid,
    'enabled' => 1,
    'expanded' => 1,
    'link_path' => $link,
    'locked' => TRUE,
    'link_title' => $title,
    'hidden' => 0,
    'weight' => $weight,
    'i18n_menu' => 1,
    'options' => array('title' => $link),
  );

  menu_link_save($item);

  return $item['mlid'];

}

/**
 * Create a node placeholder of a given type.
 *
 * @param string $type
 *   Content type machine name.
 * @param string $title
 *   Node title.
 * @param string $menu
 *   Menu machine name, if specified the node will receive
 *   a menu item attached to the specified menu having
 *   with the node's title as label.
 *
 * @return string
 *   Return nid.
 */
function _nems_core_create_node($type, $title, $path = 'node', $lang = LANGUAGE_NONE, $menu = NULL) {
  $node = new stdClass();
  $node->type = $type;
  node_object_prepare($node);
  $node->uid = 1;
  $node->title = $title;
  $node->language = $lang;
  $node->path['alias'] = $path;
  $node->path['pathauto'] = 0;

  if ($menu) {
    $node->menu['plid'] = 0;
    $node->menu['menu_name'] = $menu;
    $node->menu['enabled'] = 1;
    $node->menu['link_title'] = $title;
    $node->menu['description'] = '';
  }
  node_save($node);

  return $node->nid;
}

/**
 * Helper function to delete menu, menu links, taxonomies.
 */
function _nems_core_delete($name, $type = 'menu', $op = 'items') {
  switch ($type) {
    case 'menu':
      if ($op == 'items') {
        menu_delete_links($name);
      }
      else {
        menu_delete(array('menu_name' => $name));
      }
      break;

    case 'vocabulary':
      if ($op == 'items') {
        $voc = taxonomy_vocabulary_machine_name_load($name);
        if (!empty($voc)) {
          $terms = taxonomy_get_tree($voc->vid);
          foreach ($terms as $term) {
            taxonomy_term_delete($term->tid);
          }
        }
      }
      else {
        $voc = taxonomy_vocabulary_machine_name_load($name);
        if (!empty($voc)) {
          taxonomy_vocabulary_delete($voc->vid);
        }
      }
      break;

    case 'node':
      $node_type = array($name);
      $query = new EntityFieldQuery();
      $query->entityCondition('entity_type', 'node')
        ->propertyCondition('type', $node_type, 'IN');
      $result = $query->execute();
      foreach ($result['node'] as $node) {
        node_delete($node->nid);
      }
      break;
  }
}

/**
 * Helper function to get the mlid basing on the link name.
 */
function _nems_core_menu_item_name_get($name, $voc) {
  $mlid = db_select('menu_links', 'ml')
    ->fields('ml', array('mlid'))
    ->condition('link_title', $name)
    ->condition('menu_name', $voc)
    ->execute()
    ->fetchField();

  if (is_numeric($mlid)) {
    return $mlid;
  }
  else {
    return FALSE;
  }
}
