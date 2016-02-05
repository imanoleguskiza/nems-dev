<?php
/**
 * @file
 * nems_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nems_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
