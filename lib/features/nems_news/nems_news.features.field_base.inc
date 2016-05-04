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
          'vocabulary' => 'nems_news_categories',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
