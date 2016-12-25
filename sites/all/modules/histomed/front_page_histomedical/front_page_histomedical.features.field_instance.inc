<?php
/**
 * @file
 * front_page_histomedical.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function front_page_histomedical_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_documentos_legales'.
  $field_instances['user-user-field_documentos_legales'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'markup',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'markup_default',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_documentos_legales',
    'label' => 'Documentos legales',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'markup',
      'settings' => array(),
      'type' => 'markup',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Documentos legales');

  return $field_instances;
}
