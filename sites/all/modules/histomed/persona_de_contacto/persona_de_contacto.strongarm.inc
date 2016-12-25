<?php
/**
 * @file
 * persona_de_contacto.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function persona_de_contacto_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_persona_de_contacto';
  $strongarm->value = '[node:field_nombre] [node:field_apellido]';
  $export['ant_pattern_persona_de_contacto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_persona_de_contacto';
  $strongarm->value = '1';
  $export['ant_persona_de_contacto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_persona_de_contacto';
  $strongarm->value = 0;
  $export['ant_php_persona_de_contacto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_persona_de_contacto';
  $strongarm->value = '0';
  $export['language_content_type_persona_de_contacto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_persona_de_contacto';
  $strongarm->value = array();
  $export['menu_options_persona_de_contacto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_persona_de_contacto';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_persona_de_contacto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_persona_de_contacto';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_persona_de_contacto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_persona_de_contacto';
  $strongarm->value = 0;
  $export['node_submitted_persona_de_contacto'] = $strongarm;

  return $export;
}
