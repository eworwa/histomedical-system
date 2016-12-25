<?php
/**
 * @file
 * historia_medica.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function historia_medica_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_botonera|node|historia_medica|full';
  $field_group->group_name = 'group_botonera';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'historia_clinica';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_paciente',
      1 => 'boton_editar_historia_medica',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => 'botonera-historia-medica group-botonera field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_historia_medica_full_group_botonera',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_botonera|node|historia_medica|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_historia_medica|node|historia_medica|full';
  $field_group->group_name = 'group_historia_medica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'historia_clinica';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Historia Médica',
    'weight' => '0',
    'children' => array(
      0 => 'field_observaciones',
      1 => 'field_vacunas',
      2 => 'field_alergias',
      3 => 'field_accidentes',
      4 => 'field_operaciones',
      5 => 'field_registro_enfermedades',
      6 => 'field_antecedentes_familiares',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Historia Médica',
      'instance_settings' => array(
        'classes' => ' group-historia-medica field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_historia_medica|node|historia_medica|full'] = $field_group;

  return $export;
}
