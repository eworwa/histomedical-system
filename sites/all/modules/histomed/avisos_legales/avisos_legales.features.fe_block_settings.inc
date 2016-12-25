<?php
/**
 * @file
 * avisos_legales.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function avisos_legales_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-positive_ssl'] = array(
    'cache' => -2,
    'css_class' => 'positive-ssl-logo',
    'custom' => 0,
    'delta' => 'positive_ssl',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => 'politicas-de-privacidad
aviso-de-cookies
aviso-legal',
    'roles' => array(
      'usuario anónimo' => 1,
    ),
    'themes' => array(
      'at_histomedical' => array(
        'region' => 'content_aside',
        'status' => 1,
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
        'region' => 'banner4',
        'status' => 1,
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
    'visibility' => 0,
  );

  $export['menu-menu-documentos-legales'] = array(
    'cache' => -1,
    'css_class' => 'art-postcontent',
    'custom' => 0,
    'delta' => 'menu-documentos-legales',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'politicas-de-privacidad
aviso-de-cookies
aviso-legal',
    'roles' => array(
      'usuario anónimo' => 1,
    ),
    'themes' => array(
      'at_histomedical' => array(
        'region' => 'content_aside',
        'status' => 1,
        'theme' => 'at_histomedical',
        'weight' => -31,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'histomed_sys' => array(
        'region' => 'banner4',
        'status' => 1,
        'theme' => 'histomed_sys',
        'weight' => -31,
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
