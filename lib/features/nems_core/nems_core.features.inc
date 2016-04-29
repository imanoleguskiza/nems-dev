<?php
/**
 * @file
 * nems_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nems_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nems_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
