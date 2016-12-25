<?php
/**
 * @file
 * persona_de_contacto.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function persona_de_contacto_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_personas_contacto|node|paciente|form';
  $field_group->group_name = 'group_info_personas_contacto';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_datos_paciente';
  $field_group->data = array(
    'label' => 'Personas de contacto',
    'weight' => '4',
    'children' => array(
      0 => 'field_personas_de_contacto',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personas de contacto',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-info-personas-contacto field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_info_personas_contacto|node|paciente|form'] = $field_group;

  return $export;
}
