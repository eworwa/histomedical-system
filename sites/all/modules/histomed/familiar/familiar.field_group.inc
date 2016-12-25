<?php
/**
 * @file
 * familiar.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function familiar_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_familiar|node|familiar|full';
  $field_group->group_name = 'group_datos_familiar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'familiar';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos del Familiar',
    'weight' => '0',
    'children' => array(
      0 => 'field_parentesco',
      1 => 'field_vivo',
      2 => 'field_observaciones',
      3 => 'field_causa_de_defuncion',
      4 => 'field_edad',
      5 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos del Familiar',
      'instance_settings' => array(
        'classes' => ' group-datos-familiar field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_datos_familiar|node|familiar|full'] = $field_group;

  return $export;
}
