<?php
/**
 * @file
 * front_page_histomedical.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function front_page_histomedical_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pagina_principal_usuario_anonimos_';
  $page->task = 'page';
  $page->admin_title = 'pagina principal (usuario anonimos)';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pagina_principal_usuario_anonimos___panel';
  $handler->task = 'page';
  $handler->subtask = 'pagina_principal_usuario_anonimos_';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'pagina principal',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'page-home-site',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b220a4eb-9886-45e9-af3f-98bb7d1c3ac1';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_pagina_principal_usuario_anonimos___panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6d83065b-9a79-484a-b00f-1080f8877c27';
  $pane->panel = 'two_50_first';
  $pane->type = 'block';
  $pane->subtype = 'boxes-mensaje_principal';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'message-text-info-site',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6d83065b-9a79-484a-b00f-1080f8877c27';
  $display->content['new-6d83065b-9a79-484a-b00f-1080f8877c27'] = $pane;
  $display->panels['two_50_first'][0] = 'new-6d83065b-9a79-484a-b00f-1080f8877c27';
  $pane = new stdClass();
  $pane->pid = 'new-69897d84-750e-4244-a627-789770cf788c';
  $pane->panel = 'two_50_second';
  $pane->type = 'block';
  $pane->subtype = 'formblock-user_register';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '69897d84-750e-4244-a627-789770cf788c';
  $display->content['new-69897d84-750e-4244-a627-789770cf788c'] = $pane;
  $display->panels['two_50_second'][0] = 'new-69897d84-750e-4244-a627-789770cf788c';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-69897d84-750e-4244-a627-789770cf788c';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pagina_principal_usuario_anonimos_'] = $page;

  return $pages;

}
