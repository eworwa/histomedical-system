<?php
/**
 * @file
 * perfiles.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function perfiles_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'boton_editar_perfil';
  $ds_field->label = 'Botón Editar Perfil';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['boton_editar_perfil'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'correo_electronico';
  $ds_field->label = 'Correo electrónico';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Eg: h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['correo_electronico'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function perfiles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_nombre',
        1 => 'field_apellido',
        2 => 'field_nin',
        3 => 'name',
        4 => 'correo_electronico',
        5 => 'field_especialidad_medica',
        6 => 'field_colegio_medico',
        7 => 'field_msas',
        8 => 'boton_editar_perfil',
      ),
    ),
    'fields' => array(
      'field_nombre' => 'ds_content',
      'field_apellido' => 'ds_content',
      'field_nin' => 'ds_content',
      'name' => 'ds_content',
      'correo_electronico' => 'ds_content',
      'field_especialidad_medica' => 'ds_content',
      'field_colegio_medico' => 'ds_content',
      'field_msas' => 'ds_content',
      'boton_editar_perfil' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'name',
      ),
    ),
    'fields' => array(
      'name' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['user|user|full'] = $ds_layout;

  return $export;
}
