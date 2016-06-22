<?php
/**
 * @file
 * nems_common_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nems_common_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nems_downloads_items'.
  $field_bases['field_nems_downloads_items'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_downloads_items',
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

  // Exported field_base: 'field_nems_see_also_items'.
  $field_bases['field_nems_see_also_items'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_see_also_items',
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

  return $field_bases;
}
