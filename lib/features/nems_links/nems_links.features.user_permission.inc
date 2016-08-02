<?php
/**
 * @file
 * nems_links.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_links_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in nems_links_categories'.
  $permissions['add terms in nems_links_categories'] = array(
    'name' => 'add terms in nems_links_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create nems_link content'.
  $permissions['create nems_link content'] = array(
    'name' => 'create nems_link content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_link content'.
  $permissions['delete any nems_link content'] = array(
    'name' => 'delete any nems_link content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_link content'.
  $permissions['delete own nems_link content'] = array(
    'name' => 'delete own nems_link content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_links_categories'.
  $permissions['delete terms in nems_links_categories'] = array(
    'name' => 'delete terms in nems_links_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any nems_link content'.
  $permissions['edit any nems_link content'] = array(
    'name' => 'edit any nems_link content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_link content'.
  $permissions['edit own nems_link content'] = array(
    'name' => 'edit own nems_link content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_links_categories'.
  $permissions['edit terms in nems_links_categories'] = array(
    'name' => 'edit terms in nems_links_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
