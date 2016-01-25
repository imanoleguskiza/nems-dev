<?php
/**
 * @file
 * nems_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nems_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_nems_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'disable_dropdown_menu' => 0,
    'enable_interinstitutional_theme' => 1,
    'collapsiblock_block' => 'div.block',
    'collapsiblock_title' => 'div.panel-heading',
    'collapsiblock_content' => 'div.panel-body ',
    'ec_resp_base_theme_of_subtheme' => '',
  );
  $export['theme_nems_theme_settings'] = $strongarm;

  return $export;
}
