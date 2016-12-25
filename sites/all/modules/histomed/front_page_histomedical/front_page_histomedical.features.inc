<?php
/**
 * @file
 * front_page_histomedical.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function front_page_histomedical_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
