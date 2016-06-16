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

  // Exported permission: 'delete terms in nems_links_categories'.
  $permissions['delete terms in nems_links_categories'] = array(
    'name' => 'delete terms in nems_links_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
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
