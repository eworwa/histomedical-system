<?php
/**
 * @file
 * consulta_medica.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function consulta_medica_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create consulta content'.
  $permissions['create consulta content'] = array(
    'name' => 'create consulta content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any consulta content'.
  $permissions['delete any consulta content'] = array(
    'name' => 'delete any consulta content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own consulta content'.
  $permissions['delete own consulta content'] = array(
    'name' => 'delete own consulta content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any consulta content'.
  $permissions['edit any consulta content'] = array(
    'name' => 'edit any consulta content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own consulta content'.
  $permissions['edit own consulta content'] = array(
    'name' => 'edit own consulta content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
