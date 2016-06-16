<?php

/**
 * @file
 * Contains NemsMigrateAbstractMigration class.
 */

namespace Drupal\nems_migrate;

/**
 * Class NemsMenuAbstractMigrations.
 */
abstract class NemsMenuAbstractMigration extends NemsAbstractMigration {

  /**
   * Constructor of the migrate class for Menus.
   *
   * @param string $migration_key
   *   Key identifying the folder containing the datas to migrate.
   * @param array $arguments
   *   Properties of the migration class.
   */
  public function __construct($migration_key, $arguments = array()) {
    parent::__construct($migration_key, $arguments);

    $this->addFieldMapping('link_path', 'link');
    $this->addFieldMapping('link_title', 'title');
    $this->addFieldMapping('weight', 'weight');
    $this->addFieldMapping('customized', 'customized')->defaultValue(1);
    $this->addFieldMapping('language', 'default_language')->defaultValue('und');
  }

  /**
   * Set Translation for menu item.
   */
  public function complete($item, \stdClass $source_row) {
    $this->menuTranslations($item, $source_row);

    // Update a link to be external.
    db_update('menu_links')
      ->fields(array(
        'external' => 1,
      ))
      ->condition('mlid', $item->mlid)
      ->execute();
  }

  /**
   * Save field translations for the specified menu item.
   *
   * @param \stdClass $item
   *   Item to translate.
   * @param \stdClass $source_row
   *   Source info for the translation.
   */
  public function menuTranslations(\stdClass $item, \stdClass $source_row) {
    foreach ($source_row->getAvailableLanguages() as $language) {
      if ($language != $source_row->getDefaultLanguage()) {
        $source_row->setSourceValues($language);
        $mlid = $item->mlid;
        $translation = $source_row->title;
        $name = 'menu:item:' . $mlid . ':title';
        i18n_string_translation_update($name, $translation, $language);
      }
    }
  }

  /**
   * Create Stub.
   */
  protected function createStub(Migration $migration, array $source_id) {
    $item = array(
      'link_path' => '<front>',
      'link_title' => t('Stub for @id', array('@id' => $source_id[0])),
      'menu_name' => 'main-menu',
      'weight' => 0,
      'expanded' => 0,
    );

    // On saving, the $item is passed by reference and hence
    // is given other properties, including the item ID.
    $item_id = menu_link_save($item);
    if ($item_id) {
      return array($item_id);
    }
    else {
      return FALSE;
    }
  }

}

