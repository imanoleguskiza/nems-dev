<?php
/**
 * @file
 * nems_vacancy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_vacancy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in nems_call_vacancy_status'.
  $permissions['add terms in nems_call_vacancy_status'] = array(
    'name' => 'add terms in nems_call_vacancy_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create nems_vacancy content'.
  $permissions['create nems_vacancy content'] = array(
    'name' => 'create nems_vacancy content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_vacancy content'.
  $permissions['delete any nems_vacancy content'] = array(
    'name' => 'delete any nems_vacancy content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own nems_vacancy content'.
  $permissions['delete own nems_vacancy content'] = array(
    'name' => 'delete own nems_vacancy content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_call_vacancy_status'.
  $permissions['delete terms in nems_call_vacancy_status'] = array(
    'name' => 'delete terms in nems_call_vacancy_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any nems_vacancy content'.
  $permissions['edit any nems_vacancy content'] = array(
    'name' => 'edit any nems_vacancy content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own nems_vacancy content'.
  $permissions['edit own nems_vacancy content'] = array(
    'name' => 'edit own nems_vacancy content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_call_vacancy_status'.
  $permissions['edit terms in nems_call_vacancy_status'] = array(
    'name' => 'edit terms in nems_call_vacancy_status',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
