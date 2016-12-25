<?php
/**
 * @file
 * publicidad.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function publicidad_block_class_features_default_class() {
  return array(
    'simpleads:ad_groups_28644' => array(
      'module' => 'simpleads',
      'delta' => 'ad_groups_28644',
      'css_classes' => 'bloque-publicidad-content-top',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function publicidad_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
