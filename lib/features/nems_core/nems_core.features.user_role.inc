<?php
/**
 * @file
 * nems_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function nems_core_user_default_roles() {
  $roles = array();

  // Exported role: webmaster.
  $roles['webmaster'] = (object) array(
    'name' => 'webmaster',
    'weight' => 5,
  );

  return $roles;
}
