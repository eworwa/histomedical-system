<?php
/**
 * @file
 * historia_medica.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function historia_medica_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|historia_clinica|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'historia_clinica';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'boton_editar_historia_medica' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:17:"historias_medicas";}',
        'load_terms' => 0,
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
    'field_vacunas' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_alergias' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_accidentes' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_operaciones' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_antecedentes_familiares' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-col' => TRUE,
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
  );
  $export['node|historia_clinica|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|historia_clinica|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'historia_clinica';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Ver detalle',
        'wrapper' => 'div',
        'class' => 'art-button',
      ),
    ),
    'field_observaciones' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => '',
      ),
    ),
    'field_vacunas' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_alergias' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_accidentes' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_operaciones' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_registro_enfermedades' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
    'field_antecedentes_familiares' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'fi' => TRUE,
        'fi-el' => 'div',
        'fi-cl' => '',
      ),
    ),
  );
  $export['node|historia_clinica|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|historia_medica|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'historia_medica';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'boton_editar_historia_medica' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:15:{s:23:"override_pager_settings";i:0;s:9:"use_pager";i:0;s:14:"nodes_per_page";s:1:"0";s:8:"pager_id";s:1:"0";s:6:"offset";s:1:"0";s:9:"more_link";i:0;s:10:"feed_icons";i:0;s:10:"panel_args";i:0;s:12:"link_to_view";i:0;s:4:"args";s:0:"";s:3:"url";s:0:"";s:7:"display";s:7:"block_1";s:7:"context";a:1:{i:0;s:29:"argument_entity_id:node_1.nid";}s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";}s:4:"type";s:5:"views";s:7:"subtype";s:17:"historias_medicas";}',
        'load_terms' => 0,
      ),
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
      ),
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb' => 'Código de Historia Médica',
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
    'field_antecedentes_familiares' => array(
      'ft' => array(
        'func' => 'theme_ds_field_minimal',
        'lb-col' => TRUE,
      ),
    ),
    'field_vacunas' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_alergias' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_medicamentos' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_enfermedades' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_accidentes' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
    'field_operaciones' => array(
      'ft' => array(
        'func' => 'theme_ds_field_expert',
        'lb-el' => 'div',
        'lb-cl' => 'campo',
        'ow' => TRUE,
        'ow-el' => 'div',
        'ow-cl' => 'wrapper-campo',
        'fis' => TRUE,
        'fis-el' => 'ul',
        'fis-cl' => '',
        'fi' => TRUE,
        'fi-el' => 'li',
        'fi-cl' => '',
      ),
    ),
  );
  $export['node|historia_medica|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|historia_medica|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'historia_medica';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Ver más',
        'wrapper' => 'div',
        'class' => 'art-button',
      ),
    ),
    'field_vacunas' => array(
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
    'field_alergias' => array(
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
    'field_medicamentos' => array(
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
    'field_enfermedades' => array(
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
    'field_operaciones' => array(
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
  );
  $export['node|historia_medica|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|enfermedades_clinicas|token';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'enfermedades_clinicas';
  $ds_fieldsetting->view_mode = 'token';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'p',
        'class' => '',
      ),
    ),
  );
  $export['taxonomy_term|enfermedades_clinicas|token'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function historia_medica_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'boton_editar_historia_medica';
  $ds_field->label = 'Botón editar historia médica';
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
  $export['boton_editar_historia_medica'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function historia_medica_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|historia_clinica|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'historia_clinica';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_historia_medica',
        1 => 'boton_editar_historia_medica',
        2 => 'field_paciente',
        3 => 'group_botonera',
        4 => 'field_vacunas',
        5 => 'field_alergias',
        6 => 'field_registro_enfermedades',
        7 => 'field_accidentes',
        8 => 'field_operaciones',
        9 => 'field_observaciones',
        10 => 'field_antecedentes_familiares',
      ),
    ),
    'fields' => array(
      'group_historia_medica' => 'ds_content',
      'boton_editar_historia_medica' => 'ds_content',
      'field_paciente' => 'ds_content',
      'group_botonera' => 'ds_content',
      'field_vacunas' => 'ds_content',
      'field_alergias' => 'ds_content',
      'field_registro_enfermedades' => 'ds_content',
      'field_accidentes' => 'ds_content',
      'field_operaciones' => 'ds_content',
      'field_observaciones' => 'ds_content',
      'field_antecedentes_familiares' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|historia_clinica|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|historia_clinica|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'historia_clinica';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_vacunas',
        1 => 'field_alergias',
        2 => 'field_registro_enfermedades',
        3 => 'field_accidentes',
        4 => 'field_operaciones',
        5 => 'field_observaciones',
        6 => 'field_antecedentes_familiares',
        7 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_vacunas' => 'ds_content',
      'field_alergias' => 'ds_content',
      'field_registro_enfermedades' => 'ds_content',
      'field_accidentes' => 'ds_content',
      'field_operaciones' => 'ds_content',
      'field_observaciones' => 'ds_content',
      'field_antecedentes_familiares' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|historia_clinica|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|historia_medica|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'historia_medica';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'group_historia_medica',
        1 => 'boton_editar_historia_medica',
        2 => 'group_botonera',
        3 => 'field_paciente',
        4 => 'title',
        5 => 'field_accidentes',
        6 => 'field_operaciones',
        7 => 'field_enfermedades',
        8 => 'field_medicamentos',
        9 => 'field_alergias',
        10 => 'field_vacunas',
        11 => 'field_antecedentes_familiares',
        12 => 'field_observaciones',
      ),
    ),
    'fields' => array(
      'group_historia_medica' => 'ds_content',
      'boton_editar_historia_medica' => 'ds_content',
      'group_botonera' => 'ds_content',
      'field_paciente' => 'ds_content',
      'title' => 'ds_content',
      'field_accidentes' => 'ds_content',
      'field_operaciones' => 'ds_content',
      'field_enfermedades' => 'ds_content',
      'field_medicamentos' => 'ds_content',
      'field_alergias' => 'ds_content',
      'field_vacunas' => 'ds_content',
      'field_antecedentes_familiares' => 'ds_content',
      'field_observaciones' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|historia_medica|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|historia_medica|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'historia_medica';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_operaciones',
        1 => 'field_enfermedades',
        2 => 'field_alergias',
        3 => 'field_medicamentos',
        4 => 'field_vacunas',
        5 => 'node_link',
      ),
    ),
    'fields' => array(
      'field_operaciones' => 'ds_content',
      'field_enfermedades' => 'ds_content',
      'field_alergias' => 'ds_content',
      'field_medicamentos' => 'ds_content',
      'field_vacunas' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|historia_medica|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|enfermedades_clinicas|token';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'enfermedades_clinicas';
  $ds_layout->view_mode = 'token';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'hide_empty_regions' => 0,
    'hide_sidebars' => 0,
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
  );
  $export['taxonomy_term|enfermedades_clinicas|token'] = $ds_layout;

  return $export;
}
