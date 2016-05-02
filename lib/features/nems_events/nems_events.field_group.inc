<?php
/**
 * @file
 * nems_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_events_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_events_category|node|nems_event|form';
  $field_group->group_name = 'group_events_category';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Events Category',
    'weight' => '5',
    'children' => array(
      0 => 'field_event_category',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-events-category field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_events_category|node|nems_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_external_link|node|nems_event|form';
  $field_group->group_name = 'group_external_link';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'External Link',
    'weight' => '7',
    'children' => array(
      0 => 'field_nems_core_external_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-external-link field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_external_link|node|nems_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_event_content|node|nems_event|form';
  $field_group->group_name = 'group_nems_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_nems_core_image',
      2 => 'field_nems_event_date',
      3 => 'field_nems_event_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-event-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_event_content|node|nems_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_event_rel|node|nems_event|form';
  $field_group->group_name = 'group_nems_event_rel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related content',
    'weight' => '10',
    'children' => array(
      0 => 'field_nems_core_related_links',
      1 => 'field_nems_core_related_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-event-rel field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_event_rel|node|nems_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_files|node|nems_event|form';
  $field_group->group_name = 'group_nems_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Upload files',
    'weight' => '8',
    'children' => array(
      0 => 'field_nems_core_file',
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
  $field_groups['group_nems_files|node|nems_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|nems_event|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '11',
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
  $field_groups['group_tags|node|nems_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Events Category');
  t('External Link');
  t('Related content');
  t('Tags');
  t('Upload files');

  return $field_groups;
}
