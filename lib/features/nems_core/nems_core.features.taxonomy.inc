<?php
/**
 * @file
 * nems_call_for_tenders.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nems_core_taxonomy_default_vocabularies() {
  return array(
    'nems_call_status' => (object) array(
      'name' => 'Nems Call Status',
      'machine_name' => 'nems_call_status',
      'description' => 'Status for Call for Tenders and Call for Proposals',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
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