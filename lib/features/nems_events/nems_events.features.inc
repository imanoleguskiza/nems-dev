<?php
/**
 * @file
 * nems_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nems_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nems_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function nems_events_image_default_styles() {
  $styles = array();

  // Exported image style: thumbs_events_listing__width__250px_.
  $styles['thumbs_events_listing__width__250px_'] = array(
    'label' => 'Thumbs events listing [Width: 250px]',
    'effects' => array(
      5 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function nems_events_node_info() {
  $items = array(
    'nems_event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
