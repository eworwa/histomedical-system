<?php
/**
 * @file
 * publicidad.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function publicidad_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['simpleads-ad_groups_28644'] = array(
    'cache' => -1,
    'css_class' => 'bloque-publicidad-content-top',
    'custom' => 0,
    'delta' => 'ad_groups_28644',
    'module' => 'simpleads',
    'node_types' => array(),
    'pages' => 'imprimir/*',
    'roles' => array(
      'usuario registrado' => 2,
    ),
    'themes' => array(
      'at_histomedical' => array(
        'region' => 'two_50_top',
        'status' => 1,
        'theme' => 'at_histomedical',
        'weight' => -34,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'histomed_sys' => array(
        'region' => 'banner2',
        'status' => 1,
        'theme' => 'histomed_sys',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
