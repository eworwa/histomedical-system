<?php
/**
 * @file
 * consulta_medica.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function consulta_medica_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_conducta_a_seguir|node|consulta|form';
  $field_group->group_name = 'group_conducta_a_seguir';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recomendaciones adicionales',
    'weight' => '9',
    'children' => array(
      0 => 'field_reposo',
      1 => 'field_especialidad',
      2 => 'field_examenes',
      3 => 'field_intervenciones_quirurgicas',
      4 => 'field_fecha_consulta_de_control',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Recomendaciones adicionales',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-conducta-a-seguir field-group-fieldset',
        'description' => '<p>Aquí podrá indicar recomendaciones adicionales para su paciente, como realización de exámenes, consulta médica en otra especialidad, reposo médico, e incluso indicar una fecha para una futura consulte médica.</p>
<p>Todos los campos son opcionales, y aparecerán en la impresión del informe médico.</p>',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_conducta_a_seguir|node|consulta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_medico|node|consulta|full';
  $field_group->group_name = 'group_datos_medico';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos del Médico',
    'weight' => '3',
    'children' => array(
      0 => 'medico_autor_consulta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos del Médico',
      'instance_settings' => array(
        'classes' => 'fieldset-detalle-consulta group-datos-medico field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_datos_medico|node|consulta|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_datos_paciente|node|consulta|full';
  $field_group->group_name = 'group_datos_paciente';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Datos del Paciente',
    'weight' => '2',
    'children' => array(
      0 => 'paciente_de_consulta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Datos del Paciente',
      'instance_settings' => array(
        'classes' => 'fieldset-detalle-consulta group-datos-paciente field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_datos_paciente|node|consulta|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_detalle_consulta|node|consulta|full';
  $field_group->group_name = 'group_detalle_consulta';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Detalle de la Consulta Médica',
    'weight' => '4',
    'children' => array(
      0 => 'field_observaciones',
      1 => 'field_peso',
      2 => 'field_adjuntos',
      3 => 'field_estatura',
      4 => 'field_detalles_de_habito',
      5 => 'field_tiene_habitos',
      6 => 'field_enfermedad_actual',
      7 => 'field_reposo',
      8 => 'field_tratamiento',
      9 => 'field_especialidad',
      10 => 'field_impresion_diagnostica',
      11 => 'field_examenes',
      12 => 'field_intervenciones_quirurgicas',
      13 => 'field_fecha_consulta_de_control',
      14 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Detalle de la Consulta Médica',
      'instance_settings' => array(
        'classes' => 'fieldset-detalle-consulta group-detalle-consulta field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_detalle_consulta|node|consulta|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exploracion_complementaria|node|consulta|form';
  $field_group->group_name = 'group_exploracion_complementaria';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exploración complementaria',
    'weight' => '4',
    'children' => array(
      0 => 'field_adjuntos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Exploración complementaria',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-exploracion-complementaria field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_exploracion_complementaria|node|consulta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exploracion_fisica|node|consulta|form';
  $field_group->group_name = 'group_exploracion_fisica';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exploración física',
    'weight' => '3',
    'children' => array(
      0 => 'field_peso',
      1 => 'field_estatura',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Exploración física',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-exploracion-fisica field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_exploracion_fisica|node|consulta|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_grupo_botonera|node|consulta|full';
  $field_group->group_name = 'group_grupo_botonera';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grupo Botonera',
    'weight' => '5',
    'children' => array(
      0 => 'field_paciente',
      1 => 'field_editar',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Grupo Botonera',
      'instance_settings' => array(
        'classes' => 'botonera-consulta group-botonera field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_consulta_full_group_grupo_botonera',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_grupo_botonera|node|consulta|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opciones_impresion|node|consulta|full';
  $field_group->group_name = 'group_opciones_impresion';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'consulta';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Opciones de Impresión',
    'weight' => '1',
    'children' => array(
      0 => 'menu_opciones_consulta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Opciones de Impresión',
      'instance_settings' => array(
        'classes' => ' group-opciones-impresion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_opciones_impresion|node|consulta|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Datos del Médico');
  t('Datos del Paciente');
  t('Detalle de la Consulta Médica');
  t('Exploración complementaria');
  t('Exploración física');
  t('Grupo Botonera');
  t('Opciones de Impresión');
  t('Recomendaciones adicionales');

  return $field_groups;
}
