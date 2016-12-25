<?php
/**
 * @file
 * perfiles.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function perfiles_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'body_class_webmaster_role';
  $context->description = 'Añade la clase css \'rol-webmaster\' al tag \'body\' de la página.';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'webmaster' => 'webmaster',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'rol-webmaster',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Añade la clase css \'rol-webmaster\' al tag \'body\' de la página.');
  $export['body_class_webmaster_role'] = $context;

  return $export;
}
