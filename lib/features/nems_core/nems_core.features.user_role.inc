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

  // Exported role: administrator.
  $roles['administrator'] = (object) array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: anonymous user.
  $roles['anonymous user'] = (object) array(
    'name' => 'anonymous user',
    'weight' => 0,
  );

  // Exported role: authenticated user.
  $roles['authenticated user'] = (object) array(
    'name' => 'authenticated user',
    'weight' => 1,
  );

  // Exported role: contributor.
  $roles['contributor'] = (object) array(
    'name' => 'contributor',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = (object) array(
    'name' => 'editor',
    'weight' => 4,
  );

  // Exported role: editorial team member.
  $roles['editorial team member'] = (object) array(
    'name' => 'editorial team member',
    'weight' => 2,
  );

  return $roles;
}
