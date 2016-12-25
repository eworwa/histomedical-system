<?php
/**
 * @file
 * front_page_histomedical.box.inc
 */

/**
 * Implements hook_default_box().
 */
function front_page_histomedical_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'mensaje_principal';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = '¡Tu tiempo es importante! (mensaje pagina principal)';
  $box->options = array(
    'body' => array(
      'value' => '¡Tu tiempo es importante!<br>
Organiza tu calendario, agiliza la información de tus pacientes, e invierte tu tiempo en lo que es realmente fundamental para tu negocio, desde cualquier lugar y en cualquier momento.
<br>
¡GRATIS el primer mes!',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['mensaje_principal'] = $box;

  return $export;
}
