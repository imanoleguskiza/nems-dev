<?php
/**
 * @file
 * nems_call_for_externals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_call_for_externals_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nems_call_for_externals content'.
  $permissions['create nems_call_for_externals content'] = array(
    'name' => 'create nems_call_for_externals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_call_for_externals content'.
  $permissions['delete any nems_call_for_externals content'] = array(
    'name' => 'delete any nems_call_for_externals content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_call_for_externals content'.
  $permissions['delete own nems_call_for_externals content'] = array(
    'name' => 'delete own nems_call_for_externals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nems_call_for_externals content'.
  $permissions['edit any nems_call_for_externals content'] = array(
    'name' => 'edit any nems_call_for_externals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_call_for_externals content'.
  $permissions['edit own nems_call_for_externals content'] = array(
    'name' => 'edit own nems_call_for_externals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
