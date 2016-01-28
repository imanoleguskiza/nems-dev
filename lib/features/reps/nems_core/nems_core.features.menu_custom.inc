<?php
/**
 * @file
 * Nems_core.features.menu_custom.inc.
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nems_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-nems-services.
  $menus['menu-nems-services'] = array(
    'menu_name' => 'menu-nems-services',
    'title' => 'NEMS service tools',
    'description' => '',
    'language' => LANGUAGE_NONE,
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('NEMS service tools');

  return $menus;
}
