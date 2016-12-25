<?php
/**
 * @file
 * busqueda_de_paciente.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function busqueda_de_paciente_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'asistente médico' => 'asistente médico',
      'directivo' => 'directivo',
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'search',
  );

  return $permissions;
}
