<?php
/**
 * @file
 * nems_call_for_externals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nems_call_for_externals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nems_call_for_externals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nems_call_for_externals_node_info() {
  $items = array(
    'nems_call_for_externals' => array(
      'name' => t('Call For External Experts'),
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
