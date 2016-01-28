<?php
/**
 * @file
 * nems_admin.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nems_admin_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_pages';
  $strongarm->value = 'admin/*';
  $export['admin_language_pages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_translate_admin_menu';
  $strongarm->value = '1';
  $export['admin_language_translate_admin_menu'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_language_visibility';
  $strongarm->value = '1';
  $export['admin_language_visibility'] = $strongarm;

  return $export;
}
