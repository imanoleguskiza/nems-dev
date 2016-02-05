<?php
/**
 * @file
 * nems_downloads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nems_downloads_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function nems_downloads_node_info() {
  $items = array(
    'downloads' => array(
      'name' => t('Downloads'),
      'base' => 'node_content',
      'description' => t('Collection of Downloads links'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
