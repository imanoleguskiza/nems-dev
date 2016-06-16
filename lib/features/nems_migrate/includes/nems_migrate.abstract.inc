<?php

/**
 * @file
 * Contains NemsMigrateAbstractMigration class.
 */

use Drupal\integration_migrate\MigrateItemJSON;
use Drupal\integration_migrate\AbstractMigration;

class MigrateNemsFileFieldHandler extends MigrateFileFieldBaseHandler {
  public function __construct() {
    $this->registerTypes(array('file'));
  }

  /**
   * Implementation of MigrateFieldHandler::prepare().
   *
   * Prepare file data for saving as a Field API file field.
   *
   * @return array
   *  Field API array suitable for inserting in the destination object.
   */
  public function prepare($entity, array $field_info, array $instance, array $values) {
    if (isset($values['arguments'])) {
      $arguments = $values['arguments'];
      unset($values['arguments']);
    }
    else {
      $arguments = array();
    }

    $language = $this->getFieldLanguage($entity, $field_info, $arguments);
    $migration = Migration::currentMigration();

    // One can override the source class via CLI or drushrc.php (the
    // option is named file_function for historical reasons)
    if ($migration->getOption('file_function')) {
      $file_class = $migration->getOption('file_function');
    }
    elseif (!empty($arguments['file_class'])) {
      $file_class = $arguments['file_class'];
    }
    else {
      $file_class = 'MigrateFileUri';
    }

    // If a destination directory (relative to the Drupal public files directory)
    // is not explicitly provided, use the default for the field.
    if (empty($arguments['destination_dir'])) {
      $arguments['destination_dir'] = $this->destinationDir($field_info, $instance);
    }

    $return = array();

    // Note that what $value represents depends on the file class -
    // MigrateFileUri expects a filespec/URI, MigrateFileFid expects a file ID,
    // etc.
    foreach ($values as $delta => $value) {
      if ($value) {
        // Handle potentially multiple arguments
        $instance_arguments = array();
        foreach ($arguments as $key => $argument) {
          // For a scalar argument, pass it directly
          if (!is_array($argument)) {
            $instance_arguments[$key] = $argument;
          }
          else {
            if (isset($argument[$delta])) {
              $instance_arguments[$key] = $argument[$delta];
            }
            else {
              $migration->saveMessage(
                t('No data for subfield %key at row %delta for field %field',
                  array('%key' => $key, '%delta' => $delta, '%field' => $field_info['field_name'])),
                Migration::MESSAGE_WARNING);
            }
          }
        }
        // If the parent entity doesn't have an explicit uid, give ownership
        // to the anonymous account
        $owner = isset($entity->uid) ? $entity->uid : 0;
        // Call the MigrateFileInterface implementation to do the real work
        $source = new $file_class($instance_arguments);
        $file = $source->processFile($value, $owner);

        // Assuming we got back a valid file ID, build the proper field
        // array out of it. We assume that if we did not get back a fid, the
        // MigrateFile class has saved a message indicating why.
        if ($file) {
          _nems_migrate_add_mapping($value, file_create_url($file->uri));
          $field_array = array('fid' => $file->fid);
          $return[$language][] = $this->buildFieldArray($field_array, $instance_arguments, $delta);
        }
      }
    }

    return $return;
  }

  /**
   * Implementation of MigrateFieldHandler::fields().
   * Note that file and image fields support slightly different field lists.
   *
   * @param $type
   *  The file field type - 'file' or 'image'
   * @param $instance
   *  Instance info for the field.
   * @param Migration $migration
   *  The migration context for the parent field. We can look at the mappings
   *  and determine which subfields are relevant.
   * @return array
   */
  public function fields($type, $instance, $migration = NULL) {
    $fields = parent::fields($type, $instance, $migration);
    $fields += array(
      'description' => t('Subfield: <a href="@doc">String to be used as the ' .
          'description value</a>',
        array('@doc' => 'http://drupal.org/node/1224042#description')),
      'display' => t('Subfield: <a href="@doc">String to be used as the ' .
          'display value</a>',
        array('@doc' => 'http://drupal.org/node/1224042#display')),
    );
    return $fields;
  }

  /**
   * Implementation of MigrateFileFieldBaseHandler::buildFieldArray().
   */
  protected function buildFieldArray($field_array, $arguments, $delta) {
    if (isset($arguments['description'])) {
      if (is_array($arguments['description'])) {
        $field_array['description'] = $arguments['description'][$delta];
      }
      else {
        $field_array['description'] = $arguments['description'];
      }
    }
    else {
      $field_array['description'] = '';
    }

    if (isset($arguments['display'])) {
      if (is_array($arguments['display'])) {
        $field_array['display'] = $arguments['display'][$delta];
      }
      else {
        $field_array['display'] = $arguments['display'];
      }
    }
    else {
      $field_array['display'] = 1;
    }
    return $field_array;
  }
}

class MigrateNemsImageFieldHandler extends MigrateFileFieldBaseHandler {
  public function __construct() {
    $this->registerTypes(array('image'));
  }

    /**
   * Implementation of MigrateFieldHandler::prepare().
   *
   * Prepare file data for saving as a Field API file field.
   *
   * @return array
   *  Field API array suitable for inserting in the destination object.
   */
  public function prepare($entity, array $field_info, array $instance, array $values) {
    if (isset($values['arguments'])) {
      $arguments = $values['arguments'];
      unset($values['arguments']);
    }
    else {
      $arguments = array();
    }

    $language = $this->getFieldLanguage($entity, $field_info, $arguments);
    $migration = Migration::currentMigration();

    // One can override the source class via CLI or drushrc.php (the
    // option is named file_function for historical reasons)
    if ($migration->getOption('file_function')) {
      $file_class = $migration->getOption('file_function');
    }
    elseif (!empty($arguments['file_class'])) {
      $file_class = $arguments['file_class'];
    }
    else {
      $file_class = 'MigrateFileUri';
    }

    // If a destination directory (relative to the Drupal public files directory)
    // is not explicitly provided, use the default for the field.
    if (empty($arguments['destination_dir'])) {
      $arguments['destination_dir'] = $this->destinationDir($field_info, $instance);
    }

    $return = array();

    // Note that what $value represents depends on the file class -
    // MigrateFileUri expects a filespec/URI, MigrateFileFid expects a file ID,
    // etc.
    foreach ($values as $delta => $value) {
      if ($value) {
        // Handle potentially multiple arguments
        $instance_arguments = array();
        foreach ($arguments as $key => $argument) {
          // For a scalar argument, pass it directly
          if (!is_array($argument)) {
            $instance_arguments[$key] = $argument;
          }
          else {
            if (isset($argument[$delta])) {
              $instance_arguments[$key] = $argument[$delta];
            }
            else {
              $migration->saveMessage(
                t('No data for subfield %key at row %delta for field %field',
                  array('%key' => $key, '%delta' => $delta, '%field' => $field_info['field_name'])),
                Migration::MESSAGE_WARNING);
            }
          }
        }
        // If the parent entity doesn't have an explicit uid, give ownership
        // to the anonymous account
        $owner = isset($entity->uid) ? $entity->uid : 0;
        // Call the MigrateFileInterface implementation to do the real work
        $source = new $file_class($instance_arguments);
        $file = $source->processFile($value, $owner);

        // Assuming we got back a valid file ID, build the proper field
        // array out of it. We assume that if we did not get back a fid, the
        // MigrateFile class has saved a message indicating why.
        if ($file) {
          _nems_migrate_add_mapping($value, file_create_url($file->uri));
          $field_array = array('fid' => $file->fid);
          $return[$language][] = $this->buildFieldArray($field_array, $instance_arguments, $delta);
        }
      }
    }

    return $return;
  }

  /**
   * Implementation of MigrateFieldHandler::fields().
   * Note that file and image fields support slightly different field lists.
   *
   * @param $type
   *  The file field type - 'file' or 'image'
   * @param $instance
   *  Instance info for the field.
   * @param Migration $migration
   *  The migration context for the parent field. We can look at the mappings
   *  and determine which subfields are relevant.
   * @return array
   */
  public function fields($type, $instance, $migration = NULL) {
    $fields = parent::fields($type, $instance, $migration);
    $fields += array(
      'alt' => t('Subfield: <a href="@doc">String to be used as the alt ' .
          'value</a>',
        array('@doc' => 'http://drupal.org/node/1224042#alt')),
      'title' => t('Subfield: <a href="@doc">String to be used as the title ' .
          'value</a>',
        array('@doc' => 'http://drupal.org/node/1224042#title')),
    );
    return $fields;
  }

  /**
   * Implementation of MigrateFileFieldBaseHandler::buildFieldArray().
   */
  protected function buildFieldArray($field_array, $arguments, $delta) {
    if (isset($arguments['alt'])) {
      if (is_array($arguments['alt'])) {
        $field_array['alt'] = $arguments['alt'][$delta];
      }
      else {
        $field_array['alt'] = $arguments['alt'];
      }
    }
    if (isset($arguments['title'])) {
      if (is_array($arguments['title'])) {
        $field_array['title'] = $arguments['title'][$delta];
      }
      else {
        $field_array['title'] = $arguments['title'];
      }
    }
    return $field_array;
  }
}

/**
 * Class IntegrationTestAbstractMigration.
 */
abstract class NemsAbstractMigration extends AbstractMigration {

  /**
   * Define source key, to be used in setMap().
   *
   * @return array
   *    Get default source key definition.
   */
  public function getSourceKey() {
    return array(
      '_id' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
      ),
    );
  }

  /**
   * Constructor.
   *
   * @param string $type
   *    Document type, used to identify the correct fixture directory.
   * @param mixed $arguments
   *    Default constructor arguments.
   */
  public function __construct($module, $type, $arguments) {
    parent::__construct($arguments);

    $base_path = self::getFixturesPath($module) . '/' . $type;
    $this->setSource(new MigrateSourceList(
      new \MigrateListJSON($base_path . '/list.json'),
      new MigrateItemJSON($base_path . '/document-:id.json', array()),
      array()
    ));

    $this->addFieldMapping('metatag_description', 'meta_description');
    $this->addFieldMapping('metatag_keywords', 'meta_keywords');
    $this->addFieldMapping('metatag_title', 'meta_title');
  }

  /**
   * Return Consumer tests fixtures path.
   *
   * @return string
   *    Fixtures path.
   */
  public static function getFixturesPath($module) {
    return drupal_get_path('module', $module) . '/fixtures';
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow(&$row) {
    if (isset($row->meta_keywords) && is_array($row->meta_keywords)) {
      $row->meta_keywords = implode(', ', $row->meta_keywords);
    }
  }

  /**
   * Implements Migration::complete() callback.
   *
   * @param object $entity
   *    Entity object.
   * @param \stdClass $source_row
   *    Source row, as expected by Migrate class.
   */
  public function complete($entity, \stdClass $source_row) {
    parent::complete($entity, $source_row);
    // Set the publication through workbench_moderation when enabled.
    if (isset($entity->workbench_moderation)) {
      workbench_moderation_moderate($entity, 'published');
    }
    foreach ($source_row->getAvailableLanguages() as $language) {
      if ($language != $source_row->getDefaultLanguage()) {
        $entity_type = $this->getDestination()->getEntityType();
        // Generate aliases for the translations.
        if (module_exists('pathauto') && is_callable('pathauto_' . $entity_type . '_update_alias')) {
          call_user_func('pathauto_' . $entity_type . '_update_alias', $entity, 'update', array('language' => $language));
        }
      }
    }
  }
}
