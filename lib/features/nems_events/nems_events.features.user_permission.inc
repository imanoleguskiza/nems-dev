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

  // Exported permission: 'add terms in nems_events_categories'.
  $permissions['add terms in nems_events_categories'] = array(
    'name' => 'add terms in nems_events_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create nems_event content'.
  $permissions['create nems_event content'] = array(
    'name' => 'create nems_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_event content'.
  $permissions['delete any nems_event content'] = array(
    'name' => 'delete any nems_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_event content'.
  $permissions['delete own nems_event content'] = array(
    'name' => 'delete own nems_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_events_categories'.
  $permissions['delete terms in nems_events_categories'] = array(
    'name' => 'delete terms in nems_events_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any nems_event content'.
  $permissions['edit any nems_event content'] = array(
    'name' => 'edit any nems_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_event content'.
  $permissions['edit own nems_event content'] = array(
    'name' => 'edit own nems_event content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_events_categories'.
  $permissions['edit terms in nems_events_categories'] = array(
    'name' => 'edit terms in nems_events_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
