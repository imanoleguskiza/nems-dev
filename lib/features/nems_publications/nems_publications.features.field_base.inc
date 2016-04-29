<?php
/**
 * @file
 * nems_publications.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function nems_publications_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_nems_publication_file'.
  $field_bases['field_nems_publication_file'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nems_publication_file',
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

  return $field_bases;
}
