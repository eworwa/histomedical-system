<?php
/**
 * @file
 * avisos_legales.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function avisos_legales_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'entity_legal_document_text'.
  $field_bases['entity_legal_document_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'entity_legal_document_version',
    ),
    'field_name' => 'entity_legal_document_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 1,
    'type' => 'text_with_summary',
  );

  return $field_bases;
}
