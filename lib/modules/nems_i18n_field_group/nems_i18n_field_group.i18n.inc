<?php
/**
 * @file
 * Implementation of Internationalization hooks.
 */

/**
 * Implements hook_i18n_string_info().
 */
function nems_i18n_field_group_i18n_string_info() {
  $info = array();

  $info['field_group'] = array(
    'title' => t('Field group'),
    // Properties for string translation.
    'string translation' => array(
      // Text group that will handle this object's strings.
      'textgroup' => 'field_group',
      // Object type property for string translation.
      'type' => 'field_group',
      // Table where the object is stored, to automate string lists.
      'table' => 'field_group',
      // Translatable properties of these objects.
      'properties' => array(
        'label' => t('Label'),
        'description' => t('Description'),
      ),
    ),
  );

  return $info;
}
