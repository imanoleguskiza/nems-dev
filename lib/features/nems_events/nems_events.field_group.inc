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
  $field_group->identifier = 'group_nems_event_content|node|nems_event|form';
  $field_group->group_name = 'group_nems_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_nems_core_abstract',
      2 => 'field_nems_core_external_url',
      3 => 'field_nems_core_image',
      4 => 'field_nems_event_date',
      5 => 'field_nems_event_location',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_nems_core_file',
      1 => 'field_nems_core_related_links',
      2 => 'field_nems_core_related_video',
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
  $field_group->identifier = 'group_nems_metadata|node|nems_event|form';
  $field_group->group_name = 'group_nems_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_meta_classification',
      1 => 'field_meta_description',
      2 => 'field_tags',
      3 => 'path',
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
  $field_groups['group_nems_metadata|node|nems_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');
  t('Related content');

  return $field_groups;
}
