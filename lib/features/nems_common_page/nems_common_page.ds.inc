<?php
/**
 * @file
 * nems_common_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function nems_common_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|common_page|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'common_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'nems_block_field_carousel' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nems_block_field_gallery' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'nems_block_field_video' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|common_page|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function nems_common_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|common_page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'common_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'nems_block_field_gallery',
        2 => 'nems_block_field_carousel',
        3 => 'nems_block_field_video',
        4 => 'field_see_also_items',
        5 => 'field_downloads_items',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'nems_block_field_gallery' => 'ds_content',
      'nems_block_field_carousel' => 'ds_content',
      'nems_block_field_video' => 'ds_content',
      'field_see_also_items' => 'ds_content',
      'field_downloads_items' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|common_page|default'] = $ds_layout;

  return $export;
}
