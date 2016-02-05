<?php
/**
 * @file
 * nems_events.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_events_field_group_info() {
  $export = array();

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
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'body',
      2 => 'field_nems_core_abstract',
      3 => 'field_nems_core_external_url',
      4 => 'field_nems_core_image',
      5 => 'field_nems_event_date',
      6 => 'field_nems_event_location',
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
  $export['group_nems_event_content|node|nems_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_event_metadata|node|nems_event|form';
  $field_group->group_name = 'group_nems_event_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_meta_classification',
      2 => 'path',
      3 => 'language',
      4 => 'field_meta_description',
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
  $export['group_nems_event_metadata|node|nems_event|form'] = $field_group;

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
    'weight' => '1',
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
  $export['group_nems_event_rel|node|nems_event|form'] = $field_group;

  return $export;
}
