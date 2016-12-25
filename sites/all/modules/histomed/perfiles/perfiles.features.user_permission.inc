<?php
/**
 * @file
 * perfiles.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function perfiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create event_calendar content'.
  $permissions['create event_calendar content'] = array(
    'name' => 'create event_calendar content',
    'roles' => array(
      'medico' => 'medico',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any medico profile'.
  $permissions['edit any medico profile'] = array(
    'name' => 'edit any medico profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own medico profile'.
  $permissions['edit own medico profile'] = array(
    'name' => 'edit own medico profile',
    'roles' => array(
      'medico' => 'medico',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'user',
  );

  // Exported permission: 'upload files use template 1'.
  $permissions['upload files use template 1'] = array(
    'name' => 'upload files use template 1',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'ocupload',
  );

  // Exported permission: 'upload files use template 2'.
  $permissions['upload files use template 2'] = array(
    'name' => 'upload files use template 2',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'ocupload',
  );

  // Exported permission: 'upload files use template 3'.
  $permissions['upload files use template 3'] = array(
    'name' => 'upload files use template 3',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'ocupload',
  );

  // Exported permission: 'view any medico profile'.
  $permissions['view any medico profile'] = array(
    'name' => 'view any medico profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own medico profile'.
  $permissions['view own medico profile'] = array(
    'name' => 'view own medico profile',
    'roles' => array(
      'medico' => 'medico',
    ),
    'module' => 'profile2',
  );

  return $permissions;
}
