<?php
/**
 * @file
 * nems_call_for_externals.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_call_for_externals_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_editorial_team|node|nems_call_for_externals|form';
  $field_group->group_name = 'group_editorial_team';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_call_for_externals';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Editorial team',
    'weight' => '6',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_editorial_team|node|nems_call_for_externals|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_externals_content|node|nems_call_for_externals|form';
  $field_group->group_name = 'group_externals_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_call_for_externals';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_nems_deadline',
      2 => 'field_nems_externals_status',
      3 => 'field_nems_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-externals-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_externals_content|node|nems_call_for_externals|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_files|node|nems_call_for_externals|form';
  $field_group->group_name = 'group_nems_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_call_for_externals';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Upload files',
    'weight' => '4',
    'children' => array(
      0 => 'field_nems_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-files field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_files|node|nems_call_for_externals|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|nems_call_for_externals|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_call_for_externals';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '5',
    'children' => array(
      0 => 'field_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tags field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tags|node|nems_call_for_externals|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Editorial team');
  t('Tags');
  t('Upload files');

  return $field_groups;
}
