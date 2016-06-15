<?php
/**
 * @file
 * nems_vacancy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nems_vacancy_taxonomy_default_vocabularies() {
  return array(
    'nems_call_vacancy_status' => (object) array(
      'name' => 'NEMS Call Vacancy Status',
      'machine_name' => 'nems_call_vacancy_status',
      'description' => 'Vocabulary Status for Vacancy content types',
      'hierarchy' => 1,
      'module' => 'nems_vacancy',
      'weight' => 1,
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
