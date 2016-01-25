<?php
/**
 * @file
 * Drush helper for export .po files.
 */

/**
 * Implements hook_drush_command().
 */
function nems_multilingual_setup_drush_command() {
  $items['export-po-translations'] = array(
    'description' => dt('Export translations defined in the module'),
    'aliases' => array('epo'),
    'arguments' => array('module' => dt('Module with translations.json file')),
    'examples' => array('Standard example' => 'drush epo my_module'),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

/**
 * Implements hook_drush_help().
 */
function nems_multilingual_setup_drush_help($command) {
  switch ($command) {
    case 'drush:export-po-translations':
      return dt('Export translations defined on translations.json file');
  }
}

/**
 * Read the json file and export needed .po files.
 */
function drush_nems_multilingual_setup_export_po_translations($module = FALSE) {
  if ($module === FALSE) {
    return drush_set_error(dt('A module argument should be provided'));
  }

  $directory = drupal_get_path('module', $module) . '/translations/';
  $translations_file = 'translations.json';
  if (file_exists($directory . $translations_file)) {
    $json_content = json_decode(file_get_contents($directory . $translations_file));
    foreach ($json_content as $type => $items) {
      foreach (language_list() as $key_lang => $language) {
        if ($key_lang == 'en') {
          continue;
        }
        $strings = _locale_export_get_strings($language, $type);
        foreach ($strings as $key_string => $string) {
          if ($string) {
            if (!in_array($string['context'], $items)) {
              unset($strings[$key_string]);
            }
          }
        }
        $output = _locale_export_po_generate($key_lang, $strings);
        if (file_put_contents($directory . $type . '_' . $key_lang . '.po', $output)) {
          drush_print($module . ' language group exported ' . $type . ' for language ' . $key_lang);
        }
        else {
          drush_print($module . ' language group could not be written ' . $type . ' for language ' . $key_lang);
        }
      }
    }
  }
  else {
    drush_print(dt('translations.json file for specified module doesn\'t exist'));
  }
}
