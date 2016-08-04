<?php
/**
 * @file
 * nems_common_page.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_common_page_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create common_page content'.
  $permissions['create common_page content'] = array(
    'name' => 'create common_page content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any common_page content'.
  $permissions['delete any common_page content'] = array(
    'name' => 'delete any common_page content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own common_page content'.
  $permissions['delete own common_page content'] = array(
    'name' => 'delete own common_page content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any common_page content'.
  $permissions['edit any common_page content'] = array(
    'name' => 'edit any common_page content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own common_page content'.
  $permissions['edit own common_page content'] = array(
    'name' => 'edit own common_page content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
