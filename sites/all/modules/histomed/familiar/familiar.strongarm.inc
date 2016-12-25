<?php
/**
 * @file
 * familiar.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function familiar_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_familiar';
  $strongarm->value = '1';
  $export['ant_familiar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_familiar';
  $strongarm->value = '[node:field_nombre] [node:field_apellido]';
  $export['ant_pattern_familiar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_familiar';
  $strongarm->value = 0;
  $export['ant_php_familiar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_familiar';
  $strongarm->value = '0';
  $export['language_content_type_familiar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_familiar';
  $strongarm->value = array();
  $export['menu_options_familiar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_familiar';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_familiar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_familiar';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_familiar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_familiar';
  $strongarm->value = 0;
  $export['node_submitted_familiar'] = $strongarm;

  return $export;
}
