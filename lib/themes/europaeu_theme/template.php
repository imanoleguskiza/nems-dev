<?php
/**
 * @file
 * Code for the template.php.
 */

/**
 * Implements theme_preprocess_html().
 */
function europaeu_theme_preprocess_html(&$vars) {
  drupal_add_js(drupal_get_path('theme', 'europaeu_theme') . '/js/scripts.js', array('scope' => 'footer', 'weight' => 20));
}

/**
 * Implements hook_preprocess_hook().
 */
function europaeu_theme_preprocess_tb_megamenu(&$vars) {
  $language_block = module_invoke('nexteuropa_europa_search', 'block_view', 'nexteuropa_europa_search_form');
  $vars['search_block'] = render($language_block['content']);
}

/**
 * Implemens hook_preprocess_hook().
 */
function europaeu_theme_preprocess_splash(&$vars) {
  $home_page = variable_get('site_frontpage', '');

  foreach ($vars['languages_list_array'] as $language) {
    $options['attributes']['lang'] = $language->language;
    $options['attributes']['hreflang'] = $language->language;
    $options['language'] = $language;
    $options['html'] = TRUE;
    $languages[transliteration_get($language->native)] = l(
      '<span class="langcode">' . $language->language . '</span>' .
      ' <span class="langdesc">' . $language->native . '</span>',
      $home_page,
      $options
    );
  }

  ksort($languages);
  $languages_list = theme('item_list', [
    'items' => $languages,
    'type' => 'ul',
  ]
  );
  $vars['icon'] = '';
  $vars['languages_list'] = $languages_list;
}


/**
 * Implements hook_page_alter().
 */
function europaeu_theme_page_alter(&$vars) {
  if (arg(0) == 'splash') {
    drupal_add_js(drupal_get_path('theme', 'europaeu_theme') . '/js/europaeu_splashscreen.js');

    foreach ($vars['featured'] as $key_component => &$component) {
      if (strpos($key_component, '#') === FALSE
        && $key_component != 'easy_breadcrumb_easy_breadcrumb') {
        $component['#printed'] = TRUE;
      }
      foreach ($vars['header_top'] as $key_component => &$component) {
        if (strpos($key_component, '#') === FALSE
          && $key_component != 'menu_menu-service-tools'
        ) {
          $component['#printed'] = TRUE;
        }
      }
    }
  }
}
