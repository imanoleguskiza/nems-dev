<?php
/**
 * @file
 * nems_publications.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_publications_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_publication_content|node|nems_publication|form';
  $field_group->group_name = 'group_nems_publication_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_nems_core_date',
      2 => 'field_nems_core_external_url',
      3 => 'field_nems_core_image',
      4 => 'field_nems_publication_file',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-publication-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_publication_content|node|nems_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_publication_metadata|node|nems_publication|form';
  $field_group->group_name = 'group_nems_publication_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_meta_classification',
      1 => 'field_meta_description',
      2 => 'path',
      3 => 'rabbit_hole',
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
  $field_groups['group_nems_publication_metadata|node|nems_publication|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|nems_publication|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_publication';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '3',
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
  $field_groups['group_tags|node|nems_publication|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');
  t('Tags');

  return $field_groups;
}
