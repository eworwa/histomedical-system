<?php
/**
 * @file
 * seguridad.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function seguridad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "password_policy" && $api == "default_password_policy") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function seguridad_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
