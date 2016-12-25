<?php
/**
 * @file
 * paciente.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function paciente_block_class_features_default_class() {
  return array(
    'views:pacientes-block_2' => array(
      'module' => 'views',
      'delta' => 'pacientes-block_2',
      'css_classes' => 'art-postcontent',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function paciente_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function paciente_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function paciente_image_default_styles() {
  $styles = array();

  // Exported image style: foto_perfil.
  $styles['foto_perfil'] = array(
    'label' => 'foto_perfil',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 130,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function paciente_node_info() {
  $items = array(
    'paciente' => array(
      'name' => t('Paciente'),
      'base' => 'node_content',
      'description' => t('Define un paciente.'),
      'has_title' => '1',
      'title_label' => t('Nombre completo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
