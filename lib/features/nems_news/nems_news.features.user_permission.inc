<?php
/**
 * @file
 * nems_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nems_news content'.
  $permissions['create nems_news content'] = array(
    'name' => 'create nems_news content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_news content'.
  $permissions['delete any nems_news content'] = array(
    'name' => 'delete any nems_news content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_news content'.
  $permissions['delete own nems_news content'] = array(
    'name' => 'delete own nems_news content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nems_news content'.
  $permissions['edit any nems_news content'] = array(
    'name' => 'edit any nems_news content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_news content'.
  $permissions['edit own nems_news content'] = array(
    'name' => 'edit own nems_news content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
