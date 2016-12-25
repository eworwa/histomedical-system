<?php
/**
 * @file
 * paciente.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function paciente_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create paciente content'.
  $permissions['create paciente content'] = array(
    'name' => 'create paciente content',
    'roles' => array(
      'asistente médico' => 'asistente médico',
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any paciente content'.
  $permissions['delete any paciente content'] = array(
    'name' => 'delete any paciente content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own paciente content'.
  $permissions['delete own paciente content'] = array(
    'name' => 'delete own paciente content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any paciente content'.
  $permissions['edit any paciente content'] = array(
    'name' => 'edit any paciente content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own paciente content'.
  $permissions['edit own paciente content'] = array(
    'name' => 'edit own paciente content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
