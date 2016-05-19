<?php
/**
 * @file
 * nems_core.features.block_access.inc
 */

/**
 * Implements hook_block_access_defaults().
 */
function nems_core_block_access_defaults() {
  $block_access = array();

  // Exported Block Access settings for module bean
  $block_access['bean'] = array(
    'webmaster' => array(
      0 => 'config',
      1 => 'config_body',
      2 => 'config_desc',
      3 => 'config_lang',
      4 => 'config_page_visibility',
      5 => 'config_region',
      6 => 'config_role_visibility',
      7 => 'config_title',
      8 => 'config_type_visibility',
      9 => 'config_user_visibility',
      10 => 'delete',
      11 => 'disable',
      12 => 'dreg_content_bottom',
      13 => 'dreg_dashboard_inactive',
      14 => 'dreg_dashboard_main',
      15 => 'dreg_dashboard_sidebar',
      16 => 'dreg_featured',
      17 => 'dreg_footer',
      18 => 'dreg_header_right',
      19 => 'dreg_header_top',
      20 => 'dreg_help',
      21 => 'dreg_tools',
      22 => 'enable',
      23 => 'move',
      24 => 'view',
    ),
  );

  // Exported Block Access settings for module bean
  $block_access['bean'] = array(
    'webmaster' => array(
      0 => 'config',
      1 => 'config_body',
      2 => 'config_desc',
      3 => 'config_lang',
      4 => 'config_page_visibility',
      5 => 'config_region',
      6 => 'config_role_visibility',
      7 => 'config_title',
      8 => 'config_type_visibility',
      9 => 'config_user_visibility',
      10 => 'delete',
      11 => 'disable',
      12 => 'dreg_content_bottom',
      13 => 'dreg_dashboard_inactive',
      14 => 'dreg_dashboard_main',
      15 => 'dreg_dashboard_sidebar',
      16 => 'dreg_featured',
      17 => 'dreg_footer',
      18 => 'dreg_header_right',
      19 => 'dreg_header_top',
      20 => 'dreg_help',
      21 => 'dreg_tools',
      22 => 'enable',
      23 => 'move',
      24 => 'view',
    ),
  );

  // Exported Block Access settings for module bean
  $block_access['system'] = array(
    'webmaster' => array(
      0 => 'config',
      1 => 'config_body',
      2 => 'config_desc',
      3 => 'config_lang',
      4 => 'config_page_visibility',
      5 => 'config_region',
      6 => 'config_role_visibility',
      7 => 'config_title',
      8 => 'config_type_visibility',
      9 => 'config_user_visibility',
      10 => 'delete',
      11 => 'disable',
      12 => 'dreg_content_bottom',
      13 => 'dreg_dashboard_inactive',
      14 => 'dreg_dashboard_main',
      15 => 'dreg_dashboard_sidebar',
      16 => 'dreg_footer',
      17 => 'dreg_header_right',
      18 => 'dreg_header_top',
      19 => 'dreg_help',
      20 => 'dreg_tools',
      21 => 'enable',
      22 => 'move',
      23 => 'view',
    ),
  );

  // Exported Block Access settings for module bean
  $block_access['menu_block'] = array(
    'webmaster' => array(
      0 => 'config',
      1 => 'config_body',
      2 => 'config_desc',
      3 => 'config_lang',
      4 => 'config_page_visibility',
      5 => 'config_region',
      6 => 'config_role_visibility',
      7 => 'config_title',
      8 => 'config_type_visibility',
      9 => 'config_user_visibility',
      10 => 'delete',
      11 => 'disable',
      12 => 'dreg_content_bottom',
      13 => 'dreg_dashboard_inactive',
      14 => 'dreg_dashboard_main',
      15 => 'dreg_dashboard_sidebar',
      16 => 'dreg_footer',
      17 => 'dreg_header_right',
      18 => 'dreg_header_top',
      19 => 'dreg_help',
      20 => 'dreg_tools',
      21 => 'enable',
      22 => 'move',
      23 => 'view',
    ),
  );

  return $block_access;
}
