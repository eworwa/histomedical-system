<?php
/**
 * @file
 * persona_de_contacto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function persona_de_contacto_ctools_plugin_api($module = NULL, $api = NULL) {
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
function persona_de_contacto_node_info() {
  $items = array(
    'persona_de_contacto' => array(
      'name' => t('Persona de Contacto'),
      'base' => 'node_content',
      'description' => t('Persona de contacto relacionada con un paciente. En caso de emergencia llamar a ésta persona.'),
      'has_title' => '1',
      'title_label' => t('Nombre completo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
