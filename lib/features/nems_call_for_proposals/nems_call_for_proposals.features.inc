<?php
/**
 * @file
 * nems_call_for_proposals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nems_call_for_proposals_ctools_plugin_api($module = NULL, $api = NULL) {
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
function nems_call_for_proposals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function nems_call_for_proposals_node_info() {
  $items = array(
    'nems_call_for_proposals' => array(
      'name' => t('Call for proposals'),
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
