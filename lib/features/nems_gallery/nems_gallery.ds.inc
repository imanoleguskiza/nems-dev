<?php
/**
 * @file
 * nems_gallery.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function nems_gallery_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'nems_block_field_gallery';
  $ds_field->label = 'Picture gallery';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|nems_gallery-block',
    'block_render' => '1',
  );
  $export['nems_block_field_gallery'] = $ds_field;

  return $export;
}
