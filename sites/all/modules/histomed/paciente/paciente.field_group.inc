<?php
/**
 * @file
 * paciente.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function paciente_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_consultas|node|paciente|full';
  $field_group->group_name = 'group_consultas';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Consultas',
    'weight' => '2',
    'children' => array(
      0 => 'consultas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Consultas',
      'instance_settings' => array(
        'classes' => ' group-consultas field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_consultas|node|paciente|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_clinicos|node|paciente|full';
  $field_group->group_name = 'group_datos_clinicos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Antecedentes Médicos',
    'weight' => '1',
    'children' => array(
      0 => 'historia_medica',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Antecedentes Médicos',
      'instance_settings' => array(
        'classes' => ' group-datos-clinicos field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_datos_clinicos|node|paciente|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_paciente|node|paciente|form';
  $field_group->group_name = 'group_datos_paciente';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos del Paciente',
    'weight' => '0',
    'children' => array(
      0 => 'group_info_personal',
      1 => 'group_info_socioeconomica',
      2 => 'group_info_contacto',
      3 => 'group_info_personas_contacto',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Datos del Paciente',
      'instance_settings' => array(
        'classes' => 'group-datos-paciente field-group-htabs',
      ),
    ),
  );
  $field_groups['group_datos_paciente|node|paciente|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_personales|node|paciente|default';
  $field_group->group_name = 'group_datos_personales';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Personales',
    'weight' => '1',
    'children' => array(
      0 => 'field_nid',
      1 => 'field_apellido',
      2 => 'field_sexo',
      3 => 'field_telefono_local',
      4 => 'field_telefono_celular',
      5 => 'field_email',
      6 => 'field_nivel_educacion',
      7 => 'field_ocupacion',
      8 => 'field_religion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos Personales',
      'instance_settings' => array(
        'classes' => ' group-datos-personales field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_datos_personales|node|paciente|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_personales|node|paciente|full';
  $field_group->group_name = 'group_datos_personales';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos Personales',
    'weight' => '0',
    'children' => array(
      0 => 'field_sexo',
      1 => 'field_email',
      2 => 'field_fecha_de_nacimiento',
      3 => 'field_numero_identidad',
      4 => 'field_telefono',
      5 => 'field_pais_nacimiento',
      6 => 'field_telefono_2',
      7 => 'field_direcci_n_actual',
      8 => 'boton_editar_paciente',
      9 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos Personales',
      'instance_settings' => array(
        'classes' => ' group-datos-personales field-group-htab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_datos_personales|node|paciente|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_contacto|node|paciente|form';
  $field_group->group_name = 'group_info_contacto';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_datos_paciente';
  $field_group->data = array(
    'label' => 'Información de Contacto',
    'weight' => '2',
    'children' => array(
      0 => 'field_email',
      1 => 'field_telefono',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info_contacto|node|paciente|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_personal|node|paciente|form';
  $field_group->group_name = 'group_info_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_datos_paciente';
  $field_group->data = array(
    'label' => 'Información Personal',
    'weight' => '1',
    'children' => array(
      0 => 'field_apellido',
      1 => 'field_sexo',
      2 => 'field_fecha_de_nacimiento',
      3 => 'field_numero_identidad',
      4 => 'field_foto',
      5 => 'field_nombre',
      6 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Información Personal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info_personal|node|paciente|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_socioeconomica|node|paciente|form';
  $field_group->group_name = 'group_info_socioeconomica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'paciente';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_datos_paciente';
  $field_group->data = array(
    'label' => 'Información Socio Económica',
    'weight' => '3',
    'children' => array(
      0 => 'field_nivel_educacion',
      1 => 'field_religion',
      2 => 'field_profesion',
      3 => 'field_ocupacion',
      4 => 'field_lugar_de_residencia',
      5 => 'field_pais_nacimiento',
      6 => 'field_pais_residencia',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info_socioeconomica|node|paciente|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Antecedentes Médicos');
  t('Consultas');
  t('Datos Personales');
  t('Datos del Paciente');
  t('Información Personal');
  t('Información Socio Económica');
  t('Información de Contacto');

  return $field_groups;
}
