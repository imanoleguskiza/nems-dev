<?php
/**
 * @file
 * nems_news.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nems_news_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nems_news_category'.
  $field_bases['field_nems_news_category'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_news_category',
    'foreign keys' => array(
      'taxonomy_term_data' => array(
        'columns' => array(
          'target_id' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 1,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'nems_categories',
        ),
      ),
      'target_type' => 'taxonomy_term',
    ),
    'translatable' => 1,
    'type' => 'entityreference',
  );

  return $field_bases;
}
