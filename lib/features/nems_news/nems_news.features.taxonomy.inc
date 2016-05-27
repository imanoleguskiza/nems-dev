<?php
/**
 * @file
 * nems_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nems_news_taxonomy_default_vocabularies() {
  return array(
    'nems_news_categories' => (object) array(
      'name' => 'NEMS News Categories',
      'machine_name' => 'nems_news_categories',
      'description' => 'Categories for NEMS News Content Type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
