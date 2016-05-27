<?php
/**
 * @file
 * nems_publications.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_publications_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in nems_publications_categories'.
  $permissions['add terms in nems_publications_categories'] = array(
    'name' => 'add terms in nems_publications_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create nems_publication content'.
  $permissions['create nems_publication content'] = array(
    'name' => 'create nems_publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_publication content'.
  $permissions['delete any nems_publication content'] = array(
    'name' => 'delete any nems_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_publication content'.
  $permissions['delete own nems_publication content'] = array(
    'name' => 'delete own nems_publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_publications_categories'.
  $permissions['delete terms in nems_publications_categories'] = array(
    'name' => 'delete terms in nems_publications_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any nems_publication content'.
  $permissions['edit any nems_publication content'] = array(
    'name' => 'edit any nems_publication content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_publication content'.
  $permissions['edit own nems_publication content'] = array(
    'name' => 'edit own nems_publication content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_publications_categories'.
  $permissions['edit terms in nems_publications_categories'] = array(
    'name' => 'edit terms in nems_publications_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
