<?php
/**
 * @file
 * nems_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function nems_homepage_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => 0,
    'children' => array(
      0 => 'title_field',
      1 => 'title',
      2 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $export['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_metadata|node|page|form';
  $field_group->group_name = 'group_page_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => 10,
    'children' => array(
      0 => 'field_tags',
      1 => 'language',
      2 => 'og_group_ref',
      3 => 'group_content_access',
      4 => 'scheduler_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-metadata field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $export['group_page_metadata|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_add_blocks_content|node|nems_homepage_additional_block|form';
  $field_group->group_name = 'group_nems_add_blocks_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_homepage_additional_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_nems_homepage_external_url',
      2 => 'field_nems_homepage_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-add-blocks-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_add_blocks_content|node|nems_homepage_additional_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_add_blocks_metadata|node|nems_homepage_additional_block|form';
  $field_group->group_name = 'group_nems_add_blocks_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_homepage_additional_block';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-add-blocks-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_add_blocks_metadata|node|nems_homepage_additional_block|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_bean_ql_content|bean|nems_homepage_quicklinks|form';
  $field_group->group_name = 'group_nems_bean_ql_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_quicklinks';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_nems_homepage_abstract',
      1 => 'field_nems_homepage_image',
      2 => 'field_nems_homepage_reference',
      3 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-bean-ql-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_bean_ql_content|bean|nems_homepage_quicklinks|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_bean_ql_other|bean|nems_homepage_quicklinks|form';
  $field_group->group_name = 'group_nems_bean_ql_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_quicklinks';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '2',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
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
  $field_groups['group_nems_bean_ql_other|bean|nems_homepage_quicklinks|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_homepage_more_info|node|page|form';
  $field_group->group_name = 'group_nems_homepage_more_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_nems_homepage_mi_body',
      1 => 'field_nems_homepage_mi_link',
      2 => 'field_nems_homepage_mi_title',
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
  $field_groups['group_nems_homepage_more_info|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_cp_content|node|nems_contact_point|form';
  $field_group->group_name = 'group_nems_cp_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_contact_point';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      3 => 'field_nems_cp_type',
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
  $export['group_nems_cp_content|node|nems_contact_point|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_cp_meta|node|nems_contact_point|form';
  $field_group->group_name = 'group_nems_cp_meta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_contact_point';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'path',
      1 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-cp-meta field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_nems_cp_meta|node|nems_contact_point|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_homepage_content|node|nems_homepage|form';
  $field_group->group_name = 'group_nems_homepage_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_nems_homepage_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-homepage-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_homepage_content|node|nems_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_homepage_metadata|node|nems_homepage|form';
  $field_group->group_name = 'group_nems_homepage_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'path',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-homepage-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_homepage_metadata|node|nems_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_page_content|node|page|form';
  $field_group->group_name = 'group_nems_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_nems_homepage_image',
      3 => 'field_json_object',
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
  $field_groups['group_nems_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_page_metadata|node|page|form';
  $field_group->group_name = 'group_nems_page_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '4',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_meta_classification',
      2 => 'field_meta_description',
      3 => 'path',
      4 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-page-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_page_metadata|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_page_og|node|page|form';
  $field_group->group_name = 'group_nems_page_og';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organic Groups',
    'weight' => '5',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'group_content_access',
      2 => 'field_core_user_tasks',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-page-og field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_page_og|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_page_related_content|node|page|form';
  $field_group->group_name = 'group_nems_page_related_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_nems_homepage_related_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-page-related-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_page_related_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_content|bean|nems_homepage_sb_right_blue_button|form';
  $field_group->group_name = 'group_nems_rightcol_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_blue_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_nems_homepage_external_url',
      1 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-rightcol-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_rightcol_content|bean|nems_homepage_sb_right_blue_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_content|bean|nems_homepage_sb_right_free_content|form';
  $field_group->group_name = 'group_nems_rightcol_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_free_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_nems_homepage_abstract',
      1 => 'field_nems_homepage_mi_link',
      2 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-rightcol-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_rightcol_content|bean|nems_homepage_sb_right_free_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_content|bean|nems_homepage_sb_right_image_link|form';
  $field_group->group_name = 'group_nems_rightcol_content';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'field_nems_homepage_external_url',
      1 => 'field_nems_homepage_image',
      2 => 'title_field',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-rightcol-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_rightcol_content|bean|nems_homepage_sb_right_image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_other|bean|nems_homepage_sb_right_blue_button|form';
  $field_group->group_name = 'group_nems_rightcol_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_blue_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '3',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-rightcol-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_rightcol_other|bean|nems_homepage_sb_right_blue_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_other|bean|nems_homepage_sb_right_free_content|form';
  $field_group->group_name = 'group_nems_rightcol_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_free_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '3',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-rightcol-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_rightcol_other|bean|nems_homepage_sb_right_free_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_other|bean|nems_homepage_sb_right_image_link|form';
  $field_group->group_name = 'group_nems_rightcol_other';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Other',
    'weight' => '3',
    'children' => array(
      0 => 'revision',
      1 => 'view_mode',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-rightcol-other field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_rightcol_other|bean|nems_homepage_sb_right_image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_position|bean|nems_homepage_sb_right_blue_button|form';
  $field_group->group_name = 'group_nems_rightcol_position';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_blue_button';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position',
    'weight' => '2',
    'children' => array(
      0 => 'field_nems_rightcol_position',
      1 => 'field_nems_rightcol_weight',
      2 => 'field_nems_homepage_reference',
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
  $field_groups['group_nems_rightcol_position|bean|nems_homepage_sb_right_blue_button|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_position|bean|nems_homepage_sb_right_free_content|form';
  $field_group->group_name = 'group_nems_rightcol_position';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_free_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position',
    'weight' => '2',
    'children' => array(
      0 => 'field_nems_rightcol_position',
      1 => 'field_nems_rightcol_weight',
      2 => 'field_nems_homepage_reference',
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
  $field_groups['group_nems_rightcol_position|bean|nems_homepage_sb_right_free_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_rightcol_position|bean|nems_homepage_sb_right_image_link|form';
  $field_group->group_name = 'group_nems_rightcol_position';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'nems_homepage_sb_right_image_link';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Position',
    'weight' => '2',
    'children' => array(
      0 => 'field_nems_rightcol_position',
      1 => 'field_nems_rightcol_weight',
      2 => 'field_nems_homepage_reference',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Position',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-nems-rightcol-position field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_nems_rightcol_position|bean|nems_homepage_sb_right_image_link|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_slide_footer_content|node|nems_slide_footer|form';
  $field_group->group_name = 'group_nems_slide_footer_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_slide_footer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'title_field',
      1 => 'body',
      2 => 'field_nems_homepage_external_url',
      3 => 'field_nems_homepage_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-slide-footer-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_slide_footer_content|node|nems_slide_footer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_slide_footer_metadata|node|nems_slide_footer|form';
  $field_group->group_name = 'group_nems_slide_footer_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_slide_footer';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '2',
    'children' => array(
      0 => 'field_meta_classification',
      1 => 'language',
      2 => 'path',
      3 => 'field_meta_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-slide-footer-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_slide_footer_metadata|node|nems_slide_footer|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_slide_hp_content|node|nems_slide_homepage|form';
  $field_group->group_name = 'group_nems_slide_hp_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_slide_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'title_field',
      1 => 'body',
      2 => 'field_nems_homepage_date',
      3 => 'field_nems_homepage_external_url',
      4 => 'field_nems_homepage_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-nems-slide-hp-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_nems_slide_hp_content|node|nems_slide_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nems_slide_hp_metadata|node|nems_slide_homepage|form';
  $field_group->group_name = 'group_nems_slide_hp_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'nems_slide_homepage';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'path',
      1 => 'language',
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
  $field_groups['group_nems_slide_hp_metadata|node|nems_slide_homepage|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => 0,
    'children' => array(
      0 => 'title_field',
      1 => 'title',
      2 => 'body',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-content field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_metadata|node|page|form';
  $field_group->group_name = 'group_page_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => 10,
    'children' => array(
      0 => 'field_tags',
      1 => 'language',
      2 => 'og_group_ref',
      3 => 'group_content_access',
      4 => 'scheduler_settings',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => 'group-page-metadata field-group-tab',
        'required_fields' => TRUE,
      ),
    ),
  );
  $field_groups['group_page_metadata|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Metadata');
  t('More Info');
  t('Organic Groups');
  t('Other');
  t('Position');
  t('Related Content');

  return $field_groups;
}
