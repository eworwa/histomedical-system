<?php
/**
 * @file
 * historia_medica.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function historia_medica_ctools_plugin_api($module = NULL, $api = NULL) {
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
 * Implements hook_node_info().
 */
function historia_medica_node_info() {
  $items = array(
    'historia_clinica' => array(
      'name' => t('Historia Clínica'),
      'base' => 'node_content',
      'description' => t('Define la historia clínica de un paciente. Solo puede ser completada por un Médico.'),
      'has_title' => '1',
      'title_label' => t('Código'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
