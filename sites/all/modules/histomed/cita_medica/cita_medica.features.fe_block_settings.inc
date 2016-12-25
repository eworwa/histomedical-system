<?php
/**
 * @file
 * cita_medica.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cita_medica_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-citas-bloque_proximas_citas'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'citas-bloque_proximas_citas',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
calendario-de-citas*',
    'roles' => array(),
    'themes' => array(
      'at_histomedical' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'at_histomedical',
        'weight' => -32,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'histomed_sys' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'histomed_sys',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
