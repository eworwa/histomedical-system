<?php
/**
 * @file
 * consulta_medica.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function consulta_medica_block_class_features_default_class() {
  return array(
    'menu:menu-men-opciones-de-impresi-n' => array(
      'module' => 'menu',
      'delta' => 'menu-men-opciones-de-impresi-n',
      'css_classes' => 'art-button',
    ),
    'views:consultas-block_5' => array(
      'module' => 'views',
      'delta' => 'consultas-block_5',
      'css_classes' => 'art-postcontent',
    ),
    'views:consultas-block_6' => array(
      'module' => 'views',
      'delta' => 'consultas-block_6',
      'css_classes' => 'art-postcontent',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function consulta_medica_ctools_plugin_api($module = NULL, $api = NULL) {
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
function consulta_medica_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function consulta_medica_node_info() {
  $items = array(
    'consulta' => array(
      'name' => t('Consulta'),
      'base' => 'node_content',
      'description' => t('Define una consulta médica realizada a un paciente.'),
      'has_title' => '1',
      'title_label' => t('Motivo de la Consulta'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
