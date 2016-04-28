<?php
/**
 * @file
 * nems_homepage.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nems_homepage_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nems_homepage_abstract'.
  $field_bases['field_nems_homepage_abstract'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_abstract',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_nems_homepage_date'.
  $field_bases['field_nems_homepage_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_date',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datestamp',
  );

  // Exported field_base: 'field_nems_homepage_external_url'.
  $field_bases['field_nems_homepage_external_url'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_external_url',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_nems_homepage_file'.
  $field_bases['field_nems_homepage_file'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_file',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'file',
  );

  // Exported field_base: 'field_nems_homepage_image'.
  $field_bases['field_nems_homepage_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 1,
    'type' => 'image',
  );

  // Exported field_base: 'field_nems_homepage_mi_body'.
  $field_bases['field_nems_homepage_mi_body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_mi_body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_nems_homepage_mi_link'.
  $field_bases['field_nems_homepage_mi_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_mi_link',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_nems_homepage_mi_title'.
  $field_bases['field_nems_homepage_mi_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_mi_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 1,
    'type' => 'text',
  );

  // Exported field_base: 'field_nems_homepage_reference'.
  $field_bases['field_nems_homepage_reference'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'nems_homepage_additional_block' => 'nems_homepage_additional_block',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 1,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_nems_homepage_links'.
  $field_bases['field_nems_homepage_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_links',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 1,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_nems_homepage_video'.
  $field_bases['field_nems_homepage_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_homepage_video',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 1,
    'module' => 'mediafield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'media',
  );

  // Exported field_base: 'field_nems_cp_type'.
  $field_bases['field_nems_cp_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_cp_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 1,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'nems_contact_point_categories',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_nems_rightcol_position'.
  $field_bases['field_nems_rightcol_position'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_rightcol_position',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Bottom section',
        1 => 'Top section',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_nems_rightcol_weight'.
  $field_bases['field_nems_rightcol_weight'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_rightcol_weight',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 1,
        2 => 2,
        3 => 3,
        4 => 4,
        5 => 5,
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'list_integer',
  );

  return $field_bases;
}
