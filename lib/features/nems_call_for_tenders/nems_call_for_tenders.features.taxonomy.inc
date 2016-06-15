<?php
/**
 * @file
 * nems_call_for_tenders.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nems_call_for_tenders_taxonomy_default_vocabularies() {
  return array(
    'nems_call_for_tenders_status' => (object) array(
      'name' => 'NEMS Call for tenders Status',
      'machine_name' => 'nems_call_for_tenders_status',
      'description' => 'Vocabulary Status for Call For tenders content types',
      'hierarchy' => 1,
      'module' => 'nems_call_for_tenders',
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
