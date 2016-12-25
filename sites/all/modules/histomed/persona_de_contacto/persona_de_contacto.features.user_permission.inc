<?php
/**
 * @file
 * persona_de_contacto.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function persona_de_contacto_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create persona_de_contacto content'.
  $permissions['create persona_de_contacto content'] = array(
    'name' => 'create persona_de_contacto content',
    'roles' => array(
      'medico' => 'medico',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any persona_de_contacto content'.
  $permissions['delete any persona_de_contacto content'] = array(
    'name' => 'delete any persona_de_contacto content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own persona_de_contacto content'.
  $permissions['delete own persona_de_contacto content'] = array(
    'name' => 'delete own persona_de_contacto content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any persona_de_contacto content'.
  $permissions['edit any persona_de_contacto content'] = array(
    'name' => 'edit any persona_de_contacto content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own persona_de_contacto content'.
  $permissions['edit own persona_de_contacto content'] = array(
    'name' => 'edit own persona_de_contacto content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
