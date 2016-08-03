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

  // Exported permission: 'add terms in nems_call_for_externals_status'.
  $permissions['add terms in nems_call_for_externals_status'] = array(
    'name' => 'add terms in nems_call_for_externals_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create nems_call_for_externals content'.
  $permissions['create nems_call_for_externals content'] = array(
    'name' => 'create nems_call_for_externals content',
    'roles' => array(
      'contributor' => 'contributor',
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
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_call_for_externals_status'.
  $permissions['delete terms in nems_call_for_externals_status'] = array(
    'name' => 'delete terms in nems_call_for_externals_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
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
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_call_for_externals_status'.
  $permissions['edit terms in nems_call_for_externals_status'] = array(
    'name' => 'edit terms in nems_call_for_externals_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
