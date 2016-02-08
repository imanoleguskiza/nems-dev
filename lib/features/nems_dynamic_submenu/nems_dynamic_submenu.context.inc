<?php
/**
 * @file
 * nems_dynamic_submenu.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nems_dynamic_submenu_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dynamic_submenu';
  $context->description = 'Dynamic submenu navigation';
  $context->tag = 'dynamic_submenu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'contact/institutions-bodies' => 'contact/institutions-bodies',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tocify-tocify' => array(
          'module' => 'tocify',
          'delta' => 'tocify',
          'region' => 'sidebar_left',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Dynamic submenu navigation');
  t('dynamic_submenu');
  $export['dynamic_submenu'] = $context;

  return $export;
}
