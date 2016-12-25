<?php
/**
 * @file
 * cita_medica.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function cita_medica_taxonomy_default_vocabularies() {
  return array(
    'event_calendar_status' => array(
      'name' => 'Estatus de Eventos',
      'machine_name' => 'event_calendar_status',
      'description' => 'Descripción',
      'hierarchy' => 0,
      'module' => 'event_calendar',
      'weight' => 1,
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
