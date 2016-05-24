<?php
/**
 * @file
 * nems_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nems_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nems_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nems_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Picture Gallery'),
      'base' => 'node_content',
      'description' => t('Content type for add a picture gallery functionality to the conten types'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
