<?php
/**
 * @file
 * nems_slider.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_slider_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any slider bean'.
  $permissions['create any slider bean'] = array(
    'name' => 'create any slider bean',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create nems_slide content'.
  $permissions['create nems_slide content'] = array(
    'name' => 'create nems_slide content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any nems_slide content'.
  $permissions['delete any nems_slide content'] = array(
    'name' => 'delete any nems_slide content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any slider bean'.
  $permissions['delete any slider bean'] = array(
    'name' => 'delete any slider bean',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete own nems_slide content'.
  $permissions['delete own nems_slide content'] = array(
    'name' => 'delete own nems_slide content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any nems_slide content'.
  $permissions['edit any nems_slide content'] = array(
    'name' => 'edit any nems_slide content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any slider bean'.
  $permissions['edit any slider bean'] = array(
    'name' => 'edit any slider bean',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit own nems_slide content'.
  $permissions['edit own nems_slide content'] = array(
    'name' => 'edit own nems_slide content',
    'roles' => array(
      'contributor' => 'contributor',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any slider bean'.
  $permissions['view any slider bean'] = array(
    'name' => 'view any slider bean',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
