<?php
/**
 * @file
 * persona_de_contacto.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function persona_de_contacto_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_personas_de_contacto'
  $field_bases['field_personas_de_contacto'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_personas_de_contacto',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'persona_de_contacto' => 'persona_de_contacto',
        ),
      ),
      'profile2_private' => FALSE,
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
