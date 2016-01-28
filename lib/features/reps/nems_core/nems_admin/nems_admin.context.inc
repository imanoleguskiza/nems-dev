<?php
/**
 * @file
 * nems_admin.context.inc.
 */

/**
 * Implements hook_context_default_contexts().
 */
function nems_admin_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nems-admin';
  $context->description = 'Admin context for the NEMS';
  $context->tag = 'NEMS';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'admin/config/nems/menu' => 'admin/nems/menu',
        'admin/config/nems/menu/*' => 'admin/nems/menu/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'help',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin context for the NEMS');
  t('NEMS');
  $export['nems-admin'] = $context;

  return $export;
}
