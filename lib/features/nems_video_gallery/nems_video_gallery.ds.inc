<?php
/**
 * @file
 * nems_video_gallery.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function nems_video_gallery_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'nems_block_field_video';
  $ds_field->label = 'Video gallery';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|nems_video_gallery-block',
    'block_render' => '1',
  );
  $export['nems_block_field_video'] = $ds_field;

  return $export;
}
