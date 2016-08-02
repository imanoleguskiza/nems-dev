<?php
/**
 * @file
 * nems_call_for_proposals.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function nems_call_for_proposals_taxonomy_default_vocabularies() {
  return array(
    'nems_call_for_proposals_status' => (object) array(
      'name' => 'NEMS Call for proposals Status',
      'machine_name' => 'nems_call_for_proposals_status',
      'description' => 'Vocabulary Status for Call For Proposals content types',
      'hierarchy' => 1,
      'module' => 'nems_call_for_proposals',
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
