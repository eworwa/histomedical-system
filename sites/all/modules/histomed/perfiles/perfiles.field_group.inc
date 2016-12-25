<?php
/**
 * @file
 * perfiles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function perfiles_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_opciones_avanzadas|user|user|form';
  $field_group->group_name = 'group_opciones_avanzadas';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Opciones Avanzadas',
    'weight' => '5',
    'children' => array(
      0 => 'overlay_control',
      1 => 'locale',
      2 => 'wysiwyg',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Opciones Avanzadas',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'user_user_form_group_opciones_avanzadas',
        'classes' => 'capa-oculta',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_opciones_avanzadas|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Opciones Avanzadas');

  return $field_groups;
}
