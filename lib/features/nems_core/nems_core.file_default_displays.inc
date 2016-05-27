<?php
/**
 * @file
 * nems_core.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function nems_core_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['document__wysiwyg__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'document__wysiwyg__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = '';
  $export['document__wysiwyg__file_field_file_table'] = $file_display;

  return $export;
}
