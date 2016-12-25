<?php
/**
 * @file
 * perfiles.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function perfiles_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-medico-field_especialidad'.
  $field_instances['profile2-medico-field_especialidad'] = array(
    'bundle' => 'medico',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Puede seleccionar más de una especialidad médica',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'profile2',
    'field_name' => 'field_especialidad',
    'label' => 'Especialidad',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'taxonomy_container',
      'settings' => array(
        'multiple_select_size' => 5,
      ),
      'type' => 'taxonomy_container',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Especialidad');
  t('Puede seleccionar más de una especialidad médica');

  return $field_instances;
}
