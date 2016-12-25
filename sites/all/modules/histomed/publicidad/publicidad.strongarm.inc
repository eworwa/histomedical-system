<?php
/**
 * @file
 * publicidad.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function publicidad_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_simpleads';
  $strongarm->value = 1;
  $export['comment_simpleads'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_simpleads';
  $strongarm->value = array();
  $export['menu_options_simpleads'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_simpleads';
  $strongarm->value = array();
  $export['node_options_simpleads'] = $strongarm;

  return $export;
}
