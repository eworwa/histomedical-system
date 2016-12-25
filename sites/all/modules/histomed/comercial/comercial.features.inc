<?php
/**
 * @file
 * comercial.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function comercial_commerce_product_default_types() {
  $items = array(
    'licencia' => array(
      'type' => 'licencia',
      'name' => 'Licencia',
      'description' => 'Licencia de uso del sistema, con período de validez.',
      'help' => '',
      'revision' => 1,
    ),
    'product' => array(
      'type' => 'product',
      'name' => 'Product',
      'description' => 'A basic product type.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_rates().
 */
function comercial_commerce_tax_default_rates() {
  $items = array(
    'iva' => array(
      'name' => 'iva',
      'display_title' => 'IVA',
      'description' => '',
      'rate' => '.21',
      'type' => 'vat',
      'rules_component' => 'commerce_tax_rate_iva',
      'default_rules_component' => 1,
      'price_component' => 'tax|iva',
      'calculation_callback' => 'commerce_tax_rate_calculate',
      'module' => 'commerce_tax_ui',
      'title' => 'IVA',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_tax_default_types().
 */
function comercial_commerce_tax_default_types() {
  $items = array(
    'vat' => array(
      'name' => 'vat',
      'display_title' => 'VAT',
      'description' => 'A basic type for taxes that display inclusive with product prices.',
      'display_inclusive' => 1,
      'round_mode' => 1,
      'rule' => 'commerce_tax_type_vat',
      'module' => 'commerce_tax_ui',
      'title' => 'VAT',
      'admin_list' => TRUE,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function comercial_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function comercial_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function comercial_node_info() {
  $items = array(
    'licencia_display' => array(
      'name' => t('Licencia Display'),
      'base' => 'node_content',
      'description' => t('Tipo de contenido que representa una licencia de uso del sistema.'),
      'has_title' => '1',
      'title_label' => t('Nombre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
