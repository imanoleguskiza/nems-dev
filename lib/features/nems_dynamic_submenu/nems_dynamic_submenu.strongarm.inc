<?php
/**
 * @file
 * nems_dynamic_submenu.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nems_dynamic_submenu_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tocify_context';
  $strongarm->value = '.field-name-body';
  $export['tocify_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tocify_selectors';
  $strongarm->value = 'h2:not([class="element-invisible"]), h3';
  $export['tocify_selectors'] = $strongarm;

  return $export;
}
