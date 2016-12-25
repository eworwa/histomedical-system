<?php
/**
 * @file
 * paciente.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function paciente_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_nin|full';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_nin';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'field_nin_prefijo' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
  );
  $export['field_collection_item|field_nin|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_nin|inline';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_nin';
  $ds_fieldsetting->view_mode = 'inline';
  $ds_fieldsetting->settings = array(
    'field_nin_prefijo' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => '',
        'fis' => TRUE,
        'fis-el' => 'span',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'span',
        'fi-cl' => '',
      ),
    ),
    'field_nin_numero' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'span',
        'ow-cl' => '',
        'fis' => TRUE,
        'fis-el' => 'span',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'span',
        'fi-cl' => '',
      ),
    ),
  );
  $export['field_collection_item|field_nin|inline'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|paciente|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'paciente';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'boton_editar_paciente' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"pacientes";}',
        'load_terms' => 0,
      ),
    ),
    'consultas' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:2:"30";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:2:{i:0;s:29:"argument_entity_id:node_1.nid";i:1;s:36:"argument_entity_id:node_1.field-sexo";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"consultas";}',
        'load_terms' => 0,
      ),
    ),
    'historia_medica' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:5:"block";s:7:"context";a:2:{i:0;s:29:"argument_entity_id:node_1.nid";i:1;s:36:"argument_entity_id:node_1.field-sexo";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:17:"historias_medicas";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
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
    'field_sexo' => array(
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
    'field_email' => array(
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
    'field_fecha_de_nacimiento' => array(
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
    'field_numero_identidad' => array(
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
    'field_telefono' => array(
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
    'field_pais_nacimiento' => array(
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
    'field_telefono_2' => array(
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
  $export['node|paciente|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function paciente_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'boton_editar_paciente';
  $ds_field->label = 'Botón editar paciente';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
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
  $export['boton_editar_paciente'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'consultas';
  $ds_field->label = 'Consultas';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
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
  $export['consultas'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'historia_medica';
  $ds_field->label = 'Historia Médica';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
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
  $export['historia_medica'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function paciente_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_nin|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_nin';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_nin_prefijo',
        1 => 'field_nin_numero',
      ),
    ),
    'fields' => array(
      'field_nin_prefijo' => 'ds_content',
      'field_nin_numero' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_nin|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_nin|inline';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_nin';
  $ds_layout->view_mode = 'inline';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_nin_prefijo',
        1 => 'field_nin_numero',
      ),
    ),
    'fields' => array(
      'field_nin_prefijo' => 'ds_content',
      'field_nin_numero' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_nin|inline'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|paciente|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'paciente';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'consultas',
        1 => 'group_datos_personales',
        2 => 'group_datos_clinicos',
        3 => 'group_consultas',
        4 => 'historia_medica',
        5 => 'field_numero_identidad',
        6 => 'title',
        7 => 'field_sexo',
        8 => 'field_fecha_de_nacimiento',
        9 => 'field_telefono',
        10 => 'field_telefono_2',
        11 => 'field_email',
        12 => 'field_pais_nacimiento',
        13 => 'field_direcci_n_actual',
        14 => 'boton_editar_paciente',
      ),
    ),
    'fields' => array(
      'consultas' => 'ds_content',
      'group_datos_personales' => 'ds_content',
      'group_datos_clinicos' => 'ds_content',
      'group_consultas' => 'ds_content',
      'historia_medica' => 'ds_content',
      'field_numero_identidad' => 'ds_content',
      'title' => 'ds_content',
      'field_sexo' => 'ds_content',
      'field_fecha_de_nacimiento' => 'ds_content',
      'field_telefono' => 'ds_content',
      'field_telefono_2' => 'ds_content',
      'field_email' => 'ds_content',
      'field_pais_nacimiento' => 'ds_content',
      'field_direcci_n_actual' => 'ds_content',
      'boton_editar_paciente' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|paciente|full'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function paciente_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'inline';
  $ds_view_mode->label = 'Inline';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['inline'] = $ds_view_mode;

  return $export;
}
