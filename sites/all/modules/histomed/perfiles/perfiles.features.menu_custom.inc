<?php
/**
 * @file
 * perfiles.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function perfiles_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-not-loged-in-users.
  $menus['menu-not-loged-in-users'] = array(
    'menu_name' => 'menu-not-loged-in-users',
    'title' => 'Not loged in users menu',
    'description' => 'Menú con opciones para usuarios no registrados/ingresados en el sistema.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Menú con opciones para usuarios no registrados/ingresados en el sistema.');
  t('Not loged in users menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');

  return $menus;
}
