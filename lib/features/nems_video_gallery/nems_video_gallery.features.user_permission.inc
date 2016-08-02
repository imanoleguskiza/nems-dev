<?php
/**
 * @file
 * nems_video_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_video_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'add terms in nems_video_gallery_categories'.
  $permissions['add terms in nems_video_gallery_categories'] = array(
    'name' => 'add terms in nems_video_gallery_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'create video_gallery content'.
  $permissions['create video_gallery content'] = array(
    'name' => 'create video_gallery content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any video_gallery content'.
  $permissions['delete any video_gallery content'] = array(
    'name' => 'delete any video_gallery content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own video_gallery content'.
  $permissions['delete own video_gallery content'] = array(
    'name' => 'delete own video_gallery content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in nems_video_gallery_categories'.
  $permissions['delete terms in nems_video_gallery_categories'] = array(
    'name' => 'delete terms in nems_video_gallery_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any video_gallery content'.
  $permissions['edit any video_gallery content'] = array(
    'name' => 'edit any video_gallery content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own video_gallery content'.
  $permissions['edit own video_gallery content'] = array(
    'name' => 'edit own video_gallery content',
    'roles' => array(
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in nems_video_gallery_categories'.
  $permissions['edit terms in nems_video_gallery_categories'] = array(
    'name' => 'edit terms in nems_video_gallery_categories',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
