<?php
/**
 * @file
 * busqueda_de_paciente.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function busqueda_de_paciente_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'busqueda_pacientes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_indice_pacientes';
  $view->human_name = 'Busqueda Pacientes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Búsqueda de Pacientes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Buscar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'filtered_html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="node/add/paciente" class="art-button">Nuevo Paciente</a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = '<p>No se encontraron pacientes registrados con los criterios de búsqueda especificados. Puede realizar una nueva búsqueda, o registrar un nuevo paciente.</p>';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_indice_pacientes';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'search_api_index_indice_pacientes';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['label'] = '';
  $handler->display->display_options['fields']['field_apellido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_indice_pacientes';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre y Apellido';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title] [field_apellido]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Documento de Identidad */
  $handler->display->display_options['fields']['field_numero_identidad']['id'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['table'] = 'search_api_index_indice_pacientes';
  $handler->display->display_options['fields']['field_numero_identidad']['field'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_numero_identidad']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Indexed Node: Género */
  $handler->display->display_options['fields']['field_sexo']['id'] = 'field_sexo';
  $handler->display->display_options['fields']['field_sexo']['table'] = 'search_api_index_indice_pacientes';
  $handler->display->display_options['fields']['field_sexo']['field'] = 'field_sexo';
  $handler->display->display_options['fields']['field_sexo']['element_label_colon'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_indice_pacientes';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'NOT';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Introduzca el documento de identidad, nombre y/o apellido del paciente a buscar';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['mode'] = 'filter';

  /* Display: Busqueda de Pacientes */
  $handler = $view->new_display('page', 'Busqueda de Pacientes', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'busqueda-pacientes';
  $translatables['busqueda_pacientes'] = array(
    t('Master'),
    t('Búsqueda de Pacientes'),
    t('more'),
    t('Buscar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<a href="node/add/paciente" class="art-button">Nuevo Paciente</a>'),
    t('<p>No se encontraron pacientes registrados con los criterios de búsqueda especificados. Puede realizar una nueva búsqueda, o registrar un nuevo paciente.</p>'),
    t('Nombre y Apellido'),
    t('[title] [field_apellido]'),
    t('Documento de Identidad'),
    t('Género'),
    t('Introduzca el documento de identidad, nombre y/o apellido del paciente a buscar'),
    t('Busqueda de Pacientes'),
  );
  $export['busqueda_pacientes'] = $view;

  return $export;
}
