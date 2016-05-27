<?php
/**
 * @file
 * nems_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nems_events_taxonomy_default_vocabularies() {
  return array(
    'nems_events_categories' => (object) array(
      'name' => 'NEMS Events Categories',
      'machine_name' => 'nems_events_categories',
      'description' => 'Events Content Type Vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
      'language' => 'und',
      'i18n_mode' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
