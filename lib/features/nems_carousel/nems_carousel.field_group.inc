<?php
/**
 * @file
 * nems_carousel.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_carousel_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_carousel|node|carousel|form';
  $field_group->group_name = 'group_carousel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'carousel';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '4',
    'children' => array(
      0 => 'field_image_carousel',
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
  $export['group_carousel|node|carousel|form'] = $field_group;

  return $export;
}
