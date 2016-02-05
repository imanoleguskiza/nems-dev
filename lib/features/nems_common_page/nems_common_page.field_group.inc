<?php
/**
 * @file
 * nems_common_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_common_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|common_page|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'common_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '3',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-description field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_description|node|common_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|common_page|form';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'common_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '5',
    'children' => array(
      0 => 'field_see_also_items',
      1 => 'field_downloads_items',
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
  $export['group_links|node|common_page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|node|common_page|form';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'common_page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '4',
    'children' => array(
      0 => 'field_carousel_items',
      1 => 'field_gallery_items',
      2 => 'field_video_gallery_items',
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
  $export['group_multimedia|node|common_page|form'] = $field_group;

  return $export;
}