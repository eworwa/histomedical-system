<?php
/**
 * @file
 * cita_medica.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cita_medica_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete any event_calendar content'.
  $permissions['delete any event_calendar content'] = array(
    'name' => 'delete any event_calendar content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_calendar content'.
  $permissions['delete own event_calendar content'] = array(
    'name' => 'delete own event_calendar content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event_calendar content'.
  $permissions['edit any event_calendar content'] = array(
    'name' => 'edit any event_calendar content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event_calendar content'.
  $permissions['edit own event_calendar content'] = array(
    'name' => 'edit own event_calendar content',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
