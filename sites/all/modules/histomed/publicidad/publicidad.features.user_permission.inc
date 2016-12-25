<?php
/**
 * @file
 * publicidad.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function publicidad_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create simpleads content'.
  $permissions['create simpleads content'] = array(
    'name' => 'create simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any simpleads content'.
  $permissions['delete any simpleads content'] = array(
    'name' => 'delete any simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own simpleads content'.
  $permissions['delete own simpleads content'] = array(
    'name' => 'delete own simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any simpleads content'.
  $permissions['edit any simpleads content'] = array(
    'name' => 'edit any simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own simpleads content'.
  $permissions['edit own simpleads content'] = array(
    'name' => 'edit own simpleads content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
