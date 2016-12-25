<?php
/**
 * @file
 * perfiles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function perfiles_user_default_roles() {
  $roles = array();

  // Exported role: administrador de sistema.
  $roles['administrador de sistema'] = array(
    'name' => 'administrador de sistema',
    'weight' => 7,
  );

  // Exported role: asistente médico.
  $roles['asistente médico'] = array(
    'name' => 'asistente médico',
    'weight' => 4,
  );

  // Exported role: directivo.
  $roles['directivo'] = array(
    'name' => 'directivo',
    'weight' => 5,
  );

  // Exported role: farmaceuta.
  $roles['farmaceuta'] = array(
    'name' => 'farmaceuta',
    'weight' => 6,
  );

  // Exported role: medico.
  $roles['medico'] = array(
    'name' => 'medico',
    'weight' => 3,
  );

  return $roles;
}
