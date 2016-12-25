<?php
/**
 * @file
 * seguridad.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function seguridad_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_log';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'event_log';
  $view->human_name = 'Content log';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Actividad reciente';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p style="text-align: center;">No hay actividad para mostrar en esta vista</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Event log: Log event ID */
  $handler->display->display_options['fields']['lid']['id'] = 'lid';
  $handler->display->display_options['fields']['lid']['table'] = 'event_log';
  $handler->display->display_options['fields']['lid']['field'] = 'lid';
  /* Field: Event log: Event timestamp */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'event_log';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Event log: Numeric reference */
  $handler->display->display_options['fields']['ref_numeric']['id'] = 'ref_numeric';
  $handler->display->display_options['fields']['ref_numeric']['table'] = 'event_log';
  $handler->display->display_options['fields']['ref_numeric']['field'] = 'ref_numeric';
  /* Field: Event log: Operation */
  $handler->display->display_options['fields']['operation']['id'] = 'operation';
  $handler->display->display_options['fields']['operation']['table'] = 'event_log';
  $handler->display->display_options['fields']['operation']['field'] = 'operation';
  $handler->display->display_options['fields']['operation']['label'] = 'Operación';
  /* Field: Event log: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'event_log';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Tipo';
  /* Field: Event log: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'event_log';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'Usuario que hizo el cambio';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>En esta página podrá ver la actividad sobre sus archivos. Si nota actividad no realizada por usted por favor póngase en contacto inmediatamente con el <a href="/soporte-tecnico">departamento de soporte</a>.</p>
<p>Por favor tome en cuenta qué, si las fechas y hora de sus actividades no coinciden con su tiempo real puede deberse a que no ha configurado correctamente su <b>Zona Horaria</b>. Si este es el caso, puede configurarlo <a href="user/[uid]/edit">aquí<a>.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Event log: Event log record reference to node.nid */
  $handler->display->display_options['relationships']['ref_numeric_node_nid']['id'] = 'ref_numeric_node_nid';
  $handler->display->display_options['relationships']['ref_numeric_node_nid']['table'] = 'event_log';
  $handler->display->display_options['relationships']['ref_numeric_node_nid']['field'] = 'ref_numeric_node_nid';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'ref_numeric_node_nid';
  $handler->display->display_options['relationships']['uid']['label'] = 'node author';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Event log: Author */
  $handler->display->display_options['relationships']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['relationships']['uid_1']['table'] = 'event_log';
  $handler->display->display_options['relationships']['uid_1']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid_1']['label'] = 'event author';
  $handler->display->display_options['relationships']['uid_1']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Event log: Event timestamp */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'event_log';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha y hora';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Event log: Operation */
  $handler->display->display_options['fields']['operation']['id'] = 'operation';
  $handler->display->display_options['fields']['operation']['table'] = 'event_log';
  $handler->display->display_options['fields']['operation']['field'] = 'operation';
  $handler->display->display_options['fields']['operation']['label'] = 'Operación';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid_1';
  $handler->display->display_options['fields']['name_1']['label'] = 'Usuario';
  $handler->display->display_options['fields']['name_1']['link_to_user'] = FALSE;
  /* Field: Field: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['relationship'] = 'ref_numeric_node_nid';
  $handler->display->display_options['fields']['field_apellido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'ref_numeric_node_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Archivo';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1] [field_apellido]';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Event log: Event timestamp */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'event_log';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  $handler->display->display_options['path'] = 'log-de-actividades';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Actividad reciente';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['content_log'] = array(
    t('Master'),
    t('Actividad reciente'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<p style="text-align: center;">No hay actividad para mostrar en esta vista</p>'),
    t('Log event ID'),
    t('.'),
    t(','),
    t('Event timestamp'),
    t('Numeric reference'),
    t('Operación'),
    t('Tipo'),
    t('Usuario que hizo el cambio'),
    t('Page'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<p>En esta página podrá ver la actividad sobre sus archivos. Si nota actividad no realizada por usted por favor póngase en contacto inmediatamente con el <a href="/soporte-tecnico">departamento de soporte</a>.</p>
<p>Por favor tome en cuenta qué, si las fechas y hora de sus actividades no coinciden con su tiempo real puede deberse a que no ha configurado correctamente su <b>Zona Horaria</b>. Si este es el caso, puede configurarlo <a href="user/[uid]/edit">aquí<a>.</p>'),
    t('Event log record reference to node.nid'),
    t('node author'),
    t('event author'),
    t('Fecha y hora'),
    t('Usuario'),
    t('Apellido'),
    t('Archivo'),
    t('[title_1] [field_apellido]'),
  );
  $export['content_log'] = $view;

  return $export;
}
