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

  // Exported Block Access settings for module views
  $block_access['views'] = array(
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
      10 => 'disable',
      11 => 'enable',
      12 => 'move',
      13 => 'view',
    ),
  );

  // Exported Block Access settings for module block
  $block_access['block'] = array(
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
      12 => 'enable',
      13 => 'move',
      14 => 'view',
    ),
  );

  return $block_access;
}
