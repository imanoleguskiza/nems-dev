<?php

/**
 * @file
 * Contains NemsPublicationMigration class.
 */

/**
 * Class NemsPublicationMigration .
 */
class NemsPublicationMigration extends NemsAbstractMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct('nems_migrate','events', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationNode::getKeySchema()
    ));
    $this->setDestination(new MigrateDestinationNode('nems_publication', array('text_format' => 'full_html')));

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('title_field', 'title');

    // Main fields.
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_nems_core_related_content', 'related_content');
    $this->addFieldMapping('field_nems_core_date', 'date');
    $this->addFieldMapping('field_nems_core_external_url', 'external_url');

    // Media fields.
    $this->addFieldMapping('field_nems_core_image',
        'image');
    $this->addFieldMapping('field_nems_core_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_nems_core_image:alt', 'image_alt');
    $this->addFieldMapping('field_nems_core_image:title', 'image_title');

    $this->addFieldMapping('field_nems_core_file',
        'file');
    $this->addFieldMapping('field_nems_core_file:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_nems_core_image:description', 'file_title');

    // Taxonomy fields.
    $this->addFieldMapping('field_tags', 'tags')
      ->sourceMigration('NemsMigrateTags');
    $this->addFieldMapping('field_tags:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_nems_publications_category', 'category')
      ->sourceMigration('NemsMigratePublicationsCategory');
    $this->addFieldMapping('field_nems_publications_category:source_type')
      ->defaultValue('tid');

    // Mapping default language is necessary for correct translation handling.
    $this->addFieldMapping('language', 'default_language');

    $this->addFieldMapping('promote')->defaultValue(FALSE);
    $this->addFieldMapping('status')->defaultValue(NODE_PUBLISHED);
  }

  /**
   * Implements prepareRow().
   */
  public function prepareRow(&$row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    // Process the body field.
    $row->body = _nems_migrate_import_contents_filter($row->body);
  }

  /**
   * Implements prepare().
   */
  public function prepare(&$entity, $row) {
    $alias = trim(_nems_migrate_path($row->original_url));
    $entity->path['pathauto'] = 0;
    if (isset($entity->nid)) {
      $path = array(
        'source' => "node/$entity->nid",
        'alias' => $alias,
        'language' => $entity->language,
      );
      path_save($path);
      unset($entity->path['alias']);
    }
    else {
      $entity->path['alias'] = $alias;
    }
  }


  /**
   * Implements complete().
   */
  public function complete($entity, \stdClass $source_row) {
    parent::complete($entity, $source_row);
    $alias = drupal_get_path_alias('node/' . $entity->nid);
    if (!empty($alias)) {
      $menu_info = db_select('menu_links', 'ml')
        ->condition('ml.link_path', $alias)
        ->condition('ml.menu_name', 'main-menu')
        ->fields('ml', array('mlid'))
        ->execute()
        ->fetchAll();
      if (count($menu_info) > 0) {
        foreach ($menu_info as $key => $value) {
          $menu_link_item = menu_link_load($menu_info[$key]->mlid);
          $menu_link_item['link_path'] = 'node/' . $entity->nid;
          menu_link_save($menu_link_item);
        }
      }
    }
  }

}
