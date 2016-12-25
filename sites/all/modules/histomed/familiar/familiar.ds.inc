<?php
/**
 * @file
 * familiar.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function familiar_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|familiar|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'familiar';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'field_paciente' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => 'art-button',
      ),
    ),
  );
  $export['node|familiar|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function familiar_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|familiar|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'familiar';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_datos_familiar',
        1 => 'title',
        2 => 'field_parentesco',
        3 => 'field_edad',
        4 => 'field_vivo',
        5 => 'field_causa_de_defuncion',
        6 => 'field_observaciones',
        7 => 'field_paciente',
      ),
    ),
    'fields' => array(
      'group_datos_familiar' => 'ds_content',
      'title' => 'ds_content',
      'field_parentesco' => 'ds_content',
      'field_edad' => 'ds_content',
      'field_vivo' => 'ds_content',
      'field_causa_de_defuncion' => 'ds_content',
      'field_observaciones' => 'ds_content',
      'field_paciente' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|familiar|full'] = $ds_layout;

  return $export;
}
