<?php
/**
 * @file
 * nems_call_for_proposals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_call_for_proposals_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in nems_call_for_proposals_status'.
  $permissions['add terms in nems_call_for_proposals_status'] = array(
    'name' => 'add terms in nems_call_for_proposals_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create nems_call_for_proposals content'.
  $permissions['create nems_call_for_proposals content'] = array(
    'name' => 'create nems_call_for_proposals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_call_for_proposals content'.
  $permissions['delete any nems_call_for_proposals content'] = array(
    'name' => 'delete any nems_call_for_proposals content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_call_for_proposals content'.
  $permissions['delete own nems_call_for_proposals content'] = array(
    'name' => 'delete own nems_call_for_proposals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_call_for_proposals_status'.
  $permissions['delete terms in nems_call_for_proposals_status'] = array(
    'name' => 'delete terms in nems_call_for_proposals_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any nems_call_for_proposals content'.
  $permissions['edit any nems_call_for_proposals content'] = array(
    'name' => 'edit any nems_call_for_proposals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_call_for_proposals content'.
  $permissions['edit own nems_call_for_proposals content'] = array(
    'name' => 'edit own nems_call_for_proposals content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_call_for_proposals_status'.
  $permissions['edit terms in nems_call_for_proposals_status'] = array(
    'name' => 'edit terms in nems_call_for_proposals_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
