<?php
/**
 * @file
 * consulta_medica.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function consulta_medica_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|consulta|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'consulta';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'medico_autor_consulta' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:2:"30";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_3";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"consultas";}',
        'load_terms' => 0,
      ),
    ),
    'menu_opciones_consulta' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:2:"30";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_4";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"consultas";}',
        'load_terms' => 0,
      ),
    ),
    'paciente_de_consulta' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:1;s:14:"nodes_per_page";s:2:"30";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_2";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:9:"consultas";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'inline',
      'format' => 'ds_post_date_long',
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Fecha de la Consulta',
        'ow' => TRUE,
        'ow-el' => 'p',
        'ow-cl' => '',
      ),
    ),
    'field_adjuntos' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
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
    'field_tratamiento' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
    'field_especialidad' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_examenes' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_intervenciones_quirurgicas' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_editar' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => '',
      ),
    ),
    'group_datos_paciente' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
      ),
    ),
  );
  $export['node|consulta|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function consulta_medica_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'medico_autor_consulta';
  $ds_field->label = 'Médico autor de Consulta';
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
  $export['medico_autor_consulta'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'menu_opciones_consulta';
  $ds_field->label = 'Menú opciones consulta';
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
  $export['menu_opciones_consulta'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'paciente_de_consulta';
  $ds_field->label = 'Paciente de Consulta';
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
  $export['paciente_de_consulta'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function consulta_medica_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_detalles_de_habito|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_detalles_de_habito';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_3col_equal_width';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_habito',
      ),
      'middle' => array(
        0 => 'field_cantidad',
      ),
      'right' => array(
        0 => 'field_frecuencia',
      ),
    ),
    'fields' => array(
      'field_habito' => 'left',
      'field_cantidad' => 'middle',
      'field_frecuencia' => 'right',
    ),
    'classes' => array(
      'left' => array(
        'art-postcontent' => 'art-postcontent',
      ),
      'middle' => array(
        'art-postcontent' => 'art-postcontent',
      ),
      'right' => array(
        'art-postcontent' => 'art-postcontent',
      ),
    ),
  );
  $export['field_collection_item|field_detalles_de_habito|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_historial_menstrual|full';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_historial_menstrual';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'header' => array(
        0 => 'field_ultima_menstruacion',
        1 => 'field_tipo_de_menstruacion',
      ),
      'left' => array(
        0 => 'field_cantidad_embarazos',
      ),
      'right' => array(
        0 => 'field_cantidad_de_partos',
        1 => 'field_cantidad_de_cesareas',
        2 => 'field_cantidad_abortos',
      ),
    ),
    'fields' => array(
      'field_ultima_menstruacion' => 'header',
      'field_tipo_de_menstruacion' => 'header',
      'field_cantidad_embarazos' => 'left',
      'field_cantidad_de_partos' => 'right',
      'field_cantidad_de_cesareas' => 'right',
      'field_cantidad_abortos' => 'right',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_historial_menstrual|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_tratamiento|inline';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_tratamiento';
  $ds_layout->view_mode = 'inline';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'left' => array(
        0 => 'field_medicamentos',
      ),
      'right' => array(
        0 => 'field_indicacion',
      ),
    ),
    'fields' => array(
      'field_medicamentos' => 'left',
      'field_indicacion' => 'right',
    ),
    'classes' => array(),
  );
  $export['field_collection_item|field_tratamiento|inline'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|consulta|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'consulta';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'group_opciones_impresion',
        3 => 'field_enfermedad_actual',
        4 => 'paciente_de_consulta',
        5 => 'medico_autor_consulta',
        6 => 'menu_opciones_consulta',
        7 => 'group_datos_paciente',
        8 => 'field_peso',
        9 => 'field_estatura',
        10 => 'group_datos_medico',
        11 => 'field_tiene_habitos',
        12 => 'group_detalle_consulta',
        13 => 'field_detalles_de_habito',
        14 => 'group_grupo_botonera',
        15 => 'field_adjuntos',
        16 => 'field_paciente',
        17 => 'field_impresion_diagnostica',
        18 => 'field_editar',
        19 => 'field_tratamiento',
        20 => 'field_examenes',
        21 => 'field_intervenciones_quirurgicas',
        22 => 'field_especialidad',
        23 => 'field_fecha_consulta_de_control',
        24 => 'field_reposo',
        25 => 'field_observaciones',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'group_opciones_impresion' => 'ds_content',
      'field_enfermedad_actual' => 'ds_content',
      'paciente_de_consulta' => 'ds_content',
      'medico_autor_consulta' => 'ds_content',
      'menu_opciones_consulta' => 'ds_content',
      'group_datos_paciente' => 'ds_content',
      'field_peso' => 'ds_content',
      'field_estatura' => 'ds_content',
      'group_datos_medico' => 'ds_content',
      'field_tiene_habitos' => 'ds_content',
      'group_detalle_consulta' => 'ds_content',
      'field_detalles_de_habito' => 'ds_content',
      'group_grupo_botonera' => 'ds_content',
      'field_adjuntos' => 'ds_content',
      'field_paciente' => 'ds_content',
      'field_impresion_diagnostica' => 'ds_content',
      'field_editar' => 'ds_content',
      'field_tratamiento' => 'ds_content',
      'field_examenes' => 'ds_content',
      'field_intervenciones_quirurgicas' => 'ds_content',
      'field_especialidad' => 'ds_content',
      'field_fecha_consulta_de_control' => 'ds_content',
      'field_reposo' => 'ds_content',
      'field_observaciones' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|consulta|full'] = $ds_layout;

  return $export;
}
