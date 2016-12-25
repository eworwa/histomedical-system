<?php
/**
 * @file
 * persona_de_contacto.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function persona_de_contacto_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_persona_contacto|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_persona_contacto';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_nombre' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_apellido' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div ',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_telefono_celular' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_parentesco' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
  );
  $export['field_collection_item|field_persona_contacto|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|persona_de_contacto|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'persona_de_contacto';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
      'ft' => array(
        'lb' => 'Nombre',
      ),
    ),
  );
  $export['node|persona_de_contacto|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function persona_de_contacto_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_persona_contacto|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_persona_contacto';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_nombre',
        1 => 'field_parentesco',
      ),
      'right' => array(
        0 => 'field_apellido',
        1 => 'field_telefono_celular',
      ),
    ),
    'fields' => array(
      'field_nombre' => 'left',
      'field_parentesco' => 'left',
      'field_apellido' => 'right',
      'field_telefono_celular' => 'right',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_persona_contacto|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|persona_de_contacto|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'persona_de_contacto';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_4col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'first' => array(
        0 => 'title',
      ),
      'second' => array(
        0 => 'field_apellido',
      ),
      'third' => array(
        0 => 'field_parentesco',
      ),
      'fourth' => array(
        0 => 'field_telefono',
      ),
    ),
    'fields' => array(
      'title' => 'first',
      'field_apellido' => 'second',
      'field_parentesco' => 'third',
      'field_telefono' => 'fourth',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|persona_de_contacto|full'] = $ds_layout;

  return $export;
}
