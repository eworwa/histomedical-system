<?php
/**
 * @file
 * perfiles.features.inc
 */

/**
 * Implements hook_block_class_features_default_class().
 */
function perfiles_block_class_features_default_class() {
  return array(
    'menu:menu-not-loged-in-users' => array(
      'module' => 'menu',
      'delta' => 'menu-not-loged-in-users',
      'css_classes' => 'art-postcontent',
    ),
  );
}

/**
 * Implements hook_ctools_plugin_api().
 */
function perfiles_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function perfiles_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function perfiles_default_profile2_type() {
  $items = array();
  $items['medico'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "medico",
    "label" : "M\\u00e9dico",
    "weight" : "-5",
    "data" : { "registration" : 0 },
    "rdf_mapping" : []
  }');
  return $items;
}
