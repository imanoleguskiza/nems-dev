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

  // Exported Block Access settings for module system.
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
      12 => 'dreg_dashboard_inactive',
      13 => 'dreg_dashboard_main',
      14 => 'dreg_dashboard_sidebar',
      15 => 'dreg_footer',
      16 => 'dreg_header_right',
      17 => 'dreg_header_top',
      18 => 'dreg_help',
      19 => 'dreg_tools',
      20 => 'enable',
      21 => 'move',
      22 => 'view',
    ),
  );

  // Exported Block Access settings for module menu_block.
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
      12 => 'dreg_dashboard_inactive',
      13 => 'dreg_dashboard_main',
      14 => 'dreg_dashboard_sidebar',
      15 => 'dreg_footer',
      16 => 'dreg_header_right',
      17 => 'dreg_header_top',
      18 => 'dreg_help',
      19 => 'dreg_tools',
      20 => 'enable',
      21 => 'move',
      22 => 'view',
    ),
  );

  // Exported Block Access settings for module tb_megamenu.
  $block_access['tb_megamenu'] = array(
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
      12 => 'dreg_dashboard_inactive',
      13 => 'dreg_dashboard_main',
      14 => 'dreg_dashboard_sidebar',
      15 => 'dreg_footer',
      16 => 'dreg_header_right',
      17 => 'dreg_header_top',
      18 => 'dreg_help',
      19 => 'dreg_tools',
      20 => 'enable',
      21 => 'move',
      22 => 'view',
    ),
  );

  // Exported Block Access settings for module bean.
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
      12 => 'dreg_dashboard_inactive',
      13 => 'dreg_dashboard_main',
      14 => 'dreg_dashboard_sidebar',
      15 => 'dreg_footer',
      16 => 'dreg_header_right',
      17 => 'dreg_header_top',
      18 => 'dreg_help',
      19 => 'dreg_tools',
      20 => 'enable',
      21 => 'move',
      22 => 'view',
    ),
  );

  return $block_access;
}
