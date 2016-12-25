<?php
/**
 * @file
 * familiar.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function familiar_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create familiar content'.
  $permissions['create familiar content'] = array(
    'name' => 'create familiar content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any familiar content'.
  $permissions['delete any familiar content'] = array(
    'name' => 'delete any familiar content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own familiar content'.
  $permissions['delete own familiar content'] = array(
    'name' => 'delete own familiar content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any familiar content'.
  $permissions['edit any familiar content'] = array(
    'name' => 'edit any familiar content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own familiar content'.
  $permissions['edit own familiar content'] = array(
    'name' => 'edit own familiar content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
