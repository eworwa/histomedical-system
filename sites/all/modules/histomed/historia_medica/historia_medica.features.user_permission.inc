<?php
/**
 * @file
 * historia_medica.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function historia_medica_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create historia_clinica content'.
  $permissions['create historia_clinica content'] = array(
    'name' => 'create historia_clinica content',
    'roles' => array(
      'medico' => 'medico',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any historia_clinica content'.
  $permissions['delete any historia_clinica content'] = array(
    'name' => 'delete any historia_clinica content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own historia_clinica content'.
  $permissions['delete own historia_clinica content'] = array(
    'name' => 'delete own historia_clinica content',
    'roles' => array(
      'medico' => 'medico',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in enfermedades_clinicas'.
  $permissions['delete terms in enfermedades_clinicas'] = array(
    'name' => 'delete terms in enfermedades_clinicas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any historia_clinica content'.
  $permissions['edit any historia_clinica content'] = array(
    'name' => 'edit any historia_clinica content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own historia_clinica content'.
  $permissions['edit own historia_clinica content'] = array(
    'name' => 'edit own historia_clinica content',
    'roles' => array(
      'medico' => 'medico',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in enfermedades_clinicas'.
  $permissions['edit terms in enfermedades_clinicas'] = array(
    'name' => 'edit terms in enfermedades_clinicas',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
