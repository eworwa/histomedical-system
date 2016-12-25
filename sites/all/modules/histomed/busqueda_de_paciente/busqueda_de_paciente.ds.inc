<?php
/**
 * @file
 * busqueda_de_paciente.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function busqueda_de_paciente_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|paciente|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'paciente';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'node_link' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Ver historia médica',
        'wrapper' => '',
        'class' => '',
      ),
    ),
  );
  $export['node|paciente|search_result'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function busqueda_de_paciente_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|paciente|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'paciente';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_3col_equal_width';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_nid',
      ),
      'middle' => array(
        0 => 'title',
        1 => 'field_apellido',
        2 => 'field_sexo',
      ),
      'right' => array(
        0 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_nid' => 'left',
      'title' => 'middle',
      'field_apellido' => 'middle',
      'field_sexo' => 'middle',
      'node_link' => 'right',
    ),
    'classes' => array(),
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|paciente|search_result'] = $ds_layout;

  return $export;
}
