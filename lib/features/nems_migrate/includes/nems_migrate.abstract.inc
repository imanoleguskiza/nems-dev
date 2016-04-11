<?php

/**
 * @file
 * Contains NemsMigrateAbstractMigration class.
 */

namespace Drupal\nems_migrate;

use Drupal\integration_migrate\MigrateItemJSON;
use Drupal\integration_migrate\AbstractMigration;

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
  public static function getFixturesPath() {
    return drupal_get_path('module', $module) . '/fixtures';
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
