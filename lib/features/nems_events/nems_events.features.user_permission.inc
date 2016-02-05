<?php
/**
 * @file
 * nems_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create nems_event content'.
  $permissions['create nems_event content'] = array(
    'name' => 'create nems_event content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_event content'.
  $permissions['delete any nems_event content'] = array(
    'name' => 'delete any nems_event content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_event content'.
  $permissions['delete own nems_event content'] = array(
    'name' => 'delete own nems_event content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nems_event content'.
  $permissions['edit any nems_event content'] = array(
    'name' => 'edit any nems_event content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_event content'.
  $permissions['edit own nems_event content'] = array(
    'name' => 'edit own nems_event content',
    'roles' => array(
      'NEMS Administrator' => 'NEMS Administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
