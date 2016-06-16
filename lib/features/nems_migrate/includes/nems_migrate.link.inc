<?php

/**
 * @file
 * Contains NemsLinkMigration class.
 */

/**
 * Class NemsLinkMigration .
 */
class NemsLinkMigration extends NemsAbstractMigration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct('nems_migrate','links', $arguments);

    $this->setMap(new MigrateSQLMap(
      $this->getMachineName(),
      $this->getSourceKey(),
      MigrateDestinationNode::getKeySchema()
    ));
    $this->setDestination(new MigrateDestinationNode('nems_link', array('text_format' => 'full_html')));

    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('title_field', 'title');

    // Main fields.
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('field_nems_core_related_content', 'related_content');
    $this->addFieldMapping('field_nems_event_date', 'date');
    $this->addFieldMapping('field_nems_event_location', 'location');
    $this->addFieldMapping('field_nems_core_external_url', 'external_url');

    // Media fields.
    $this->addFieldMapping('field_main_link', 'link');
    $this->addFieldMapping('field_main_link:title', 'link_title');

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
    $this->addFieldMapping('field_nems_links_category', 'category')
      ->sourceMigration('NemsMigrateLinksCategory');
    $this->addFieldMapping('field_nems_links_category:source_type')
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
}
