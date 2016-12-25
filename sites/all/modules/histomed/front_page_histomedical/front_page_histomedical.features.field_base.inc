<?php
/**
 * @file
 * front_page_histomedical.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function front_page_histomedical_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_documentos_legales'.
  $field_bases['field_documentos_legales'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_documentos_legales',
    'field_permissions' => array(
      'type' => 2,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'markup',
    'settings' => array(
      'markup' => array(
        'format' => 'full_html',
        'value' => '<div class="description">Al hacer clic en "Crear nueva cuenta", aceptas nuestra<a href="politicas-de-privacidad" target="_blank"> Políticas de Privacidad</a> y confirmas que leíste nuestro<a href="aviso-legal" target="_blank"> Aviso Legal,</a> incluido el uso de <a href="aviso-de-cookies" target="_blank">Uso de Cookies.</a></div>',
      ),
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'markup',
  );

  return $field_bases;
}
