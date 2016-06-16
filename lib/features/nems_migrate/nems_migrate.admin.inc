<?php
/**
 * @file
 * Administration forms for the NEMS Migrate feature.
 */

/**
 * Form construction for the NEMS Migrate settings form.
 */
function nems_migrate_settings_form() {
  $form = array();

  $form['nems_migrate_source_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Source migration URL'),
    '#default_value' => variable_get('nems_migrate_source_url', ''),
    '#description' => t("The base URL of the source migration without trailing slash at the end. e.g. 'http://europa.eu'"),
    '#required' => TRUE,
  );

  return system_settings_form($form);
}
