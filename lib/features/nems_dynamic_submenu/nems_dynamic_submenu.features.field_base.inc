<?php
/**
 * @file
 * nems_dynamic_submenu.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nems_dynamic_submenu_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nems_dynamic_submenu'.
  $field_bases['field_nems_dynamic_submenu'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_dynamic_submenu',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Yes',
        0 => 'No',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
