<?php
/**
 * @file
 * traducciones_espanol.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function traducciones_espanol_locale_default_languages() {
  $languages = array();

  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => 0,
  );
  return $languages;
}
