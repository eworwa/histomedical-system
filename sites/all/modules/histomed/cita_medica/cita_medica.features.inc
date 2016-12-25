<?php
/**
 * @file
 * cita_medica.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function cita_medica_block_class_features_default_class() {
  return array(
    'views:calendar-block_3' => array(
      'module' => 'views',
      'delta' => 'calendar-block_3',
      'css_classes' => 'art-postcontent',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function cita_medica_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cita_medica_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cita_medica_node_info() {
  $items = array(
    'event_calendar' => array(
      'name' => t('Cita'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido para crear citas.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
