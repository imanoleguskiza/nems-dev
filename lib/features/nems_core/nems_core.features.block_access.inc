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
      1 => 'disable',
      2 => 'enable',
      3 => 'move',
      4 => 'view',
    ),
  );

  // Exported Block Access settings for module block
  $block_access['block'] = array(
    'webmaster' => array(
      0 => 'delete',
      1 => 'disable',
      2 => 'enable',
      3 => 'move',
      4 => 'view',
    ),
  );

  return $block_access;
}
