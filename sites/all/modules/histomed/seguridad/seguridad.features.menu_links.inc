<?php
/**
 * @file
 * seguridad.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function seguridad_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_actividad-reciente:content-log
  $menu_links['main-menu_actividad-reciente:content-log'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'content-log',
    'router_path' => 'content-log',
    'link_title' => 'Actividad reciente',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-consultas',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_actividad-reciente:content-log',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Actividad reciente');


  return $menu_links;
}
