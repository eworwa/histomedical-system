<?php
/**
 * @file
 * front_page_histomedical.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function front_page_histomedical_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-mensaje_principal'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mensaje_principal',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
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
    'visibility' => 0,
  );

  $export['delta_blocks-logo'] = array(
    'cache' => 8,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'logo',
    'module' => 'delta_blocks',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'usuario anónimo' => 1,
      'usuario registrado' => 2,
    ),
    'themes' => array(
      'at_histomedical' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'at_histomedical',
        'weight' => -36,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'histomed_sys' => array(
        'region' => 'art_header',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['formblock-user_register'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'user_register',
    'module' => 'formblock',
    'node_types' => array(),
    'pages' => '',
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
    'visibility' => 0,
  );

  $export['menu-menu-not-loged-in-users'] = array(
    'cache' => -1,
    'css_class' => 'art-postcontent',
    'custom' => 0,
    'delta' => 'menu-not-loged-in-users',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'politicas-de-privacidad
aviso-de-cookies
aviso-legal
<front>',
    'roles' => array(
      'usuario anónimo' => 1,
    ),
    'themes' => array(
      'at_histomedical' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'at_histomedical',
        'weight' => -33,
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
        'weight' => -33,
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

  $export['user-login'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => 'home',
    'roles' => array(),
    'themes' => array(
      'at_histomedical' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'at_histomedical',
        'weight' => -34,
      ),
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -8,
      ),
      'histomed_sys' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'histomed_sys',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
