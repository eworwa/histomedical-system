<?php
/**
 * @file
 * comercial.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function comercial_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cart',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'checkout*',
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

  return $export;
}
