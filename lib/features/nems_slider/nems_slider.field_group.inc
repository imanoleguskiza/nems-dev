<?php
/**
 * @file
 * nems_slider.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_slider_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_content|node|nems_slide|form';
  $field_group->group_name = 'group_slide_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_slide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_slide_link',
      2 => 'field_slide_image',
      3 => 'field_slide_date',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-slide-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_slide_content|node|nems_slide|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');

  return $field_groups;
}
