<?php
/**
 * @file
 * nems_core.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function nems_core_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'accept translation jobs'.
  $permissions['accept translation jobs'] = array(
    'name' => 'accept translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editorial team member' => 'editorial team member',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'add terms in classification'.
  $permissions['add terms in classification'] = array(
    'name' => 'add terms in classification',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'editorial team member' => 'editorial team member',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu_token'.
  $permissions['administer menu_token'] = array(
    'name' => 'administer menu_token',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'menu_token',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer translation tasks'.
  $permissions['administer translation tasks'] = array(
    'name' => 'administer translation tasks',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'tmgmt_local',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer workbench moderation'.
  $permissions['administer workbench moderation'] = array(
    'name' => 'administer workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass workbench moderation'.
  $permissions['bypass workbench moderation'] = array(
    'name' => 'bypass workbench moderation',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create translation jobs'.
  $permissions['create translation jobs'] = array(
    'name' => 'create translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'editorial team member' => 'editorial team member',
      'webmaster' => 'webmaster',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in classification'.
  $permissions['delete terms in classification'] = array(
    'name' => 'delete terms in classification',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in classification'.
  $permissions['edit terms in classification'] = array(
    'name' => 'edit terms in classification',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'moderate content from draft to expired'.
  $permissions['moderate content from draft to expired'] = array(
    'name' => 'moderate content from draft to expired',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to published'.
  $permissions['moderate content from draft to published'] = array(
    'name' => 'moderate content from draft to published',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from draft to validated'.
  $permissions['moderate content from draft to validated'] = array(
    'name' => 'moderate content from draft to validated',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to draft'.
  $permissions['moderate content from expired to draft'] = array(
    'name' => 'moderate content from expired to draft',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to needs_review'.
  $permissions['moderate content from expired to needs_review'] = array(
    'name' => 'moderate content from expired to needs_review',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to published'.
  $permissions['moderate content from expired to published'] = array(
    'name' => 'moderate content from expired to published',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from expired to validated'.
  $permissions['moderate content from expired to validated'] = array(
    'name' => 'moderate content from expired to validated',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from needs_review to expired'.
  $permissions['moderate content from needs_review to expired'] = array(
    'name' => 'moderate content from needs_review to expired',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to draft'.
  $permissions['moderate content from published to draft'] = array(
    'name' => 'moderate content from published to draft',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to expired'.
  $permissions['moderate content from published to expired'] = array(
    'name' => 'moderate content from published to expired',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to needs_review'.
  $permissions['moderate content from published to needs_review'] = array(
    'name' => 'moderate content from published to needs_review',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from published to validated'.
  $permissions['moderate content from published to validated'] = array(
    'name' => 'moderate content from published to validated',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from validated to draft'.
  $permissions['moderate content from validated to draft'] = array(
    'name' => 'moderate content from validated to draft',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from validated to expired'.
  $permissions['moderate content from validated to expired'] = array(
    'name' => 'moderate content from validated to expired',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'moderate content from validated to needs_review'.
  $permissions['moderate content from validated to needs_review'] = array(
    'name' => 'moderate content from validated to needs_review',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'workbench_moderation',
  );

  // Exported permission: 'multisite_workbench_moderation_view_bulk_update'.
  $permissions['multisite_workbench_moderation_view_bulk_update'] = array(
    'name' => 'multisite_workbench_moderation_view_bulk_update',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'multisite_workbench_moderation_view',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'editorial team member' => 'editorial team member',
      'webmaster' => 'webmaster',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'submit translation jobs'.
  $permissions['submit translation jobs'] = array(
    'name' => 'submit translation jobs',
    'roles' => array(
      'administrator' => 'administrator',
      'editorial team member' => 'editorial team member',
      'webmaster' => 'webmaster',
    ),
    'module' => 'tmgmt',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'version management edits'.
  $permissions['version management edits'] = array(
    'name' => 'version management edits',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'version_management',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'scheduler',
  );

  return $permissions;
}
