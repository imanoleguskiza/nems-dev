<?php
/**
 * @file
 * Api for the nems core feature.
 */

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
function _nems_homepage_create_node($type, $title, $path = 'node', $lang = LANGUAGE_NONE, $menu = NULL) {
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
