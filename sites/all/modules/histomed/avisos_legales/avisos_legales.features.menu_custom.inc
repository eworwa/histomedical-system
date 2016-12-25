<?php
/**
 * @file
 * avisos_legales.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function avisos_legales_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-documentos-legales.
  $menus['menu-documentos-legales'] = array(
    'menu_name' => 'menu-documentos-legales',
    'title' => 'Documentos legales',
    'description' => 'Menú con enlace a documentos legales sobre el sistema.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Documentos legales');
  t('Menú con enlace a documentos legales sobre el sistema.');

  return $menus;
}
