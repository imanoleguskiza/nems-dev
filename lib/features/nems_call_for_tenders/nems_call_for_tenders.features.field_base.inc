<?php
/**
 * @file
 * nems_call_for_tenders.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nems_call_for_tenders_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nems_tenders_status'.
  $field_bases['field_nems_tenders_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_tenders_status',
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
          'vocabulary' => 'nems_call_for_tenders_status',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
    ),
    'translatable' => 1,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
