<?php
/**
 * @file
 * consulta_medica.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function consulta_medica_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-3589272cc5c22067e18cef07b863faa1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '3589272cc5c22067e18cef07b863faa1',
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
        'weight' => 0,
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
        'weight' => 0,
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
