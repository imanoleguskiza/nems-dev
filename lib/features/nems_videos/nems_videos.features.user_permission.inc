<?php
/**
 * @file
 * nems_videos.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_videos_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nems_video content'.
  $permissions['create nems_video content'] = array(
    'name' => 'create nems_video content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_video content'.
  $permissions['delete any nems_video content'] = array(
    'name' => 'delete any nems_video content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_video content'.
  $permissions['delete own nems_video content'] = array(
    'name' => 'delete own nems_video content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nems_video content'.
  $permissions['edit any nems_video content'] = array(
    'name' => 'edit any nems_video content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_video content'.
  $permissions['edit own nems_video content'] = array(
    'name' => 'edit own nems_video content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
