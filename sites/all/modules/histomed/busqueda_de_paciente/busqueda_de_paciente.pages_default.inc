<?php
/**
 * @file
 * busqueda_de_paciente.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function busqueda_de_paciente_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'search_node_panel_context';
  $handler->task = 'search';
  $handler->subtask = 'node';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel Búsqueda',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '17444d23-2efb-4676-a649-426649a5c35c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3442e895-e7e3-4ce4-8b80-1254b534ba14';
    $pane->panel = 'center';
    $pane->type = 'search_result';
    $pane->subtype = 'search_result';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'node',
      'log' => 1,
      'override_empty' => 0,
      'empty_title' => '',
      'empty' => '',
      'empty_format' => 'plain_text',
      'override_no_key' => 0,
      'no_key_title' => '',
      'no_key' => '',
      'no_key_format' => 'plain_text',
      'context' => 'argument_string_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3442e895-e7e3-4ce4-8b80-1254b534ba14';
    $display->content['new-3442e895-e7e3-4ce4-8b80-1254b534ba14'] = $pane;
    $display->panels['center'][0] = 'new-3442e895-e7e3-4ce4-8b80-1254b534ba14';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-3442e895-e7e3-4ce4-8b80-1254b534ba14';
  $handler->conf['display'] = $display;
  $export['search_node_panel_context'] = $handler;

  return $export;
}
