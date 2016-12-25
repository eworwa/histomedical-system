<?php
/**
 * @file
 * consulta_medica.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function consulta_medica_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'consultas';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Consultas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mis Consultas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_apellido' => 'field_apellido',
    'title_1' => 'title_1',
    'created' => 'created',
    'title' => 'title',
    'field_enfermedad_actual' => 'field_enfermedad_actual',
    'field_impresion_diagnostica' => 'field_impresion_diagnostica',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_apellido' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_enfermedad_actual' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_impresion_diagnostica' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Ud. no tiene consultas registradas en el sistema. Para agregar una nueva consulta utilice el formulario de búsqueda de arriba, localice el paciente al cual le realizará la consulta médica y haga clic en la opción para agregar una nueva consulta.</p>
<p>Si el paciente al cual le realizará la consulta médica no se encuentra registrado en el sistema, utilice el siguiente botón para registrarlo.</p>
<p><a href="node/add/paciente" class="art-button">Registrar nuevo paciente</a></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autor';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Observaciones */
  $handler->display->display_options['fields']['field_observaciones']['id'] = 'field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['table'] = 'field_data_field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['field'] = 'field_observaciones';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['group_type'] = 'max';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';

  /* Display: Página Mis Consultas */
  $handler = $view->new_display('page', 'Página Mis Consultas', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'pagina-mis-consultas';
  $handler->display->display_options['display_description'] = 'Listado de consultas realizadas por un médico';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'bvt_tables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'created' => 'created',
    'title' => 'title',
    'field_enfermedad_actual' => 'field_enfermedad_actual',
    'field_impresion_diagnostica' => 'field_impresion_diagnostica',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'header_column' => 0,
      'responsify_priority' => '3',
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'header_column' => 0,
      'responsify_priority' => '1',
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'header_column' => 0,
      'responsify_priority' => '2',
    ),
    'field_enfermedad_actual' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'header_column' => 0,
      'responsify_priority' => '0',
    ),
    'field_impresion_diagnostica' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
      'header_column' => 0,
      'responsify_priority' => '1',
    ),
  );
  $handler->display->display_options['style_options']['responsify'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autor';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'Paciente de Consulta';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Nombre del Paciente';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha de la Consulta';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Motivo de la Consulta';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Anamnesis/Enfermedad actual */
  $handler->display->display_options['fields']['field_enfermedad_actual']['id'] = 'field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['table'] = 'field_data_field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['field'] = 'field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['label'] = 'Enfermedad actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_enfermedad_actual']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_enfermedad_actual']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_enfermedad_actual']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Diagnóstico */
  $handler->display->display_options['fields']['field_impresion_diagnostica']['id'] = 'field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['table'] = 'field_data_field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['field'] = 'field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['label'] = 'Impresión diagnóstica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_impresion_diagnostica']['empty'] = 'No se realizó ningún diagnóstico';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['type'] = 'taxonomy_token';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_impresion_diagnostica']['group_column'] = 'target_id';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['multi_type'] = 'ul';
  $handler->display->display_options['path'] = 'mis-consultas';

  /* Display: Bloque Consultas de Paciente */
  $handler = $view->new_display('block', 'Bloque Consultas de Paciente', 'block_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a class="art-button" href="/node/add/consulta?field_paciente=!1&edit%5Bfield_sexo%5D[und]=%2">Realizar Consulta Médica</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>El paciente no presenta consultas médicas registradas en el sistema.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'Consultas de Paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha de la Consulta';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Motivo de la Consulta';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Anamnesis/Enfermedad actual */
  $handler->display->display_options['fields']['field_enfermedad_actual']['id'] = 'field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['table'] = 'field_data_field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['field'] = 'field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['label'] = 'Enfermedad actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_enfermedad_actual']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_enfermedad_actual']['element_label_colon'] = FALSE;
  /* Field: Content: Diagnóstico */
  $handler->display->display_options['fields']['field_impresion_diagnostica']['id'] = 'field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['table'] = 'field_data_field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['field'] = 'field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['label'] = 'Impresión diagnóstica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_impresion_diagnostica']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_impresion_diagnostica']['empty'] = 'No se realizó ningún diagnóstico';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['type'] = 'taxonomy_token';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_impresion_diagnostica']['group_column'] = 'value';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Bloque Consultas de Paciente';

  /* Display: Bloque Paciente de Consulta */
  $handler = $view->new_display('block', 'Bloque Paciente de Consulta', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_nin' => 'field_nin',
    'field_apellido' => 'field_apellido',
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Datos del paciente no disponibles.</p>
<p>Por favor reportar éste incidente al <a href="/soporte">equipo de soporte técnico</a></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'Paciente de Consulta';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre completo';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Bloque Paciente de Consulta';

  /* Display: Bloque Médico autor de Consulta */
  $handler = $view->new_display('block', 'Bloque Médico autor de Consulta', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_apellido' => 'field_apellido',
    'field_nombre' => 'field_nombre',
    'field_especialidad_medica' => 'field_especialidad_medica',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Datos del Médico no disponibles.</p>
<p>Por favor reportar éste incidente al <a href="/soporte">equipo de soporte técnico</a></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_apellido']['element_label_class'] = 'label-inline';
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_nombre']['element_label_class'] = 'label-inline';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_especialidad_medica']['id'] = 'field_especialidad_medica';
  $handler->display->display_options['fields']['field_especialidad_medica']['table'] = 'field_data_field_especialidad_medica';
  $handler->display->display_options['fields']['field_especialidad_medica']['field'] = 'field_especialidad_medica';
  $handler->display->display_options['fields']['field_especialidad_medica']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_especialidad_medica']['label'] = 'Especialidad Médica';
  $handler->display->display_options['fields']['field_especialidad_medica']['element_label_class'] = 'label-inline';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'consulta' => 'consulta',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['block_description'] = 'Bloque Médico autor de Consulta';

  /* Display: Menú Opciones Consulta */
  $handler = $view->new_display('block', 'Menú Opciones Consulta', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Opciones de Impresión';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'menu-impresion';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Prescripción médica */
  $handler->display->display_options['fields']['field_tratamiento']['id'] = 'field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['table'] = 'field_data_field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['field'] = 'field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['ui_name'] = 'Prescripción médica';
  $handler->display->display_options['fields']['field_tratamiento']['label'] = '';
  $handler->display->display_options['fields']['field_tratamiento']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tratamiento']['alter']['text'] = 'Prescripción Médica';
  $handler->display->display_options['fields']['field_tratamiento']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_tratamiento']['alter']['path'] = 'imprimir/prescripcion-medica/!1';
  $handler->display->display_options['fields']['field_tratamiento']['alter']['rel'] = 'lightframe';
  $handler->display->display_options['fields']['field_tratamiento']['alter']['link_class'] = 'art-button';
  $handler->display->display_options['fields']['field_tratamiento']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tratamiento']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_tratamiento']['type'] = 'field_collection_list';
  $handler->display->display_options['fields']['field_tratamiento']['settings'] = array(
    'edit' => 'Editar',
    'delete' => 'Eliminar',
    'add' => 'Agregar',
    'description' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_tratamiento']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_tratamiento']['delta_offset'] = '0';
  /* Field: Justificante médico */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['ui_name'] = 'Justificante médico';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = 'Justificante Médico';
  $handler->display->display_options['fields']['created']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['path'] = 'imprimir/justificante-medico/!1';
  $handler->display->display_options['fields']['created']['alter']['rel'] = 'lightframe';
  $handler->display->display_options['fields']['created']['alter']['link_class'] = 'art-button';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  /* Field: Informe médico */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['ui_name'] = 'Informe médico';
  $handler->display->display_options['fields']['created_1']['label'] = '';
  $handler->display->display_options['fields']['created_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['text'] = 'Informe Médico';
  $handler->display->display_options['fields']['created_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['created_1']['alter']['path'] = 'imprimir/informe-medico/!1';
  $handler->display->display_options['fields']['created_1']['alter']['rel'] = 'lightframe';
  $handler->display->display_options['fields']['created_1']['alter']['link_class'] = 'art-button';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['format_date_sql'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Menú Opciones Consulta';

  /* Display: Página Prescripción Médica */
  $handler = $view->new_display('page', 'Página Prescripción Médica', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vista Preliminar de Impresión de Prescripción Médica';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Firma del médico';
  $handler->display->display_options['footer']['area']['content'] = '<br>
<p style="text-align: center;">________________________</p>
<p style="text-align: center;">Firma</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autor';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_apellido']['label'] = '';
  $handler->display->display_options['fields']['field_apellido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido']['element_label_colon'] = FALSE;
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_nombre']['label'] = 'Dr(a)';
  $handler->display->display_options['fields']['field_nombre']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nombre']['alter']['text'] = '[field_apellido], [field_nombre]';
  $handler->display->display_options['fields']['field_nombre']['element_label_class'] = 'label-inline';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre del Paciente';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Documento de Identidad */
  $handler->display->display_options['fields']['field_numero_identidad']['id'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['table'] = 'field_data_field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['field'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['field_numero_identidad']['label'] = 'Documento de identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_numero_identidad']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_numero_identidad']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Código de validación farmaceutica';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_class'] = 'label-inline';
  /* Field: Field: Tratamientos */
  $handler->display->display_options['fields']['field_tratamiento']['id'] = 'field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['table'] = 'field_data_field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['field'] = 'field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['label'] = 'Tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_tratamiento']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_tratamiento']['settings'] = array(
    'view_mode' => 'token',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_tratamiento']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_tratamiento']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'imprimir/prescripcion-medica';
  $handler->display->display_options['menu']['title'] = 'Récipe Médico';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-men-opciones-de-impresi-n';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Página Justificante Médico */
  $handler = $view->new_display('page', 'Página Justificante Médico', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vista Preliminar de Impresión de Justificante Médico';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br>
<p style="text-align: center;">________________________</p>
<p style="text-align: center;">Firma</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>No se puede generar la Asistencia a Consulta Médica, Por favor contactar con el <a href="/soporte">Equipo de Soporte</a>.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autor';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_apellido']['label'] = '';
  $handler->display->display_options['fields']['field_apellido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido']['element_label_colon'] = FALSE;
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_nombre']['label'] = 'Dr(a)';
  $handler->display->display_options['fields']['field_nombre']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nombre']['alter']['text'] = '[field_apellido], [field_nombre]';
  $handler->display->display_options['fields']['field_nombre']['element_label_class'] = 'label-inline';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'l, d \\d\\e F \\d\\e Y';
  /* Field: Content: Documento de Identidad */
  $handler->display->display_options['fields']['field_numero_identidad']['id'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['table'] = 'field_data_field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['field'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['field_numero_identidad']['label'] = '';
  $handler->display->display_options['fields']['field_numero_identidad']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_numero_identidad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_numero_identidad']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<p>Por medio de la presente se hace constar que <b>[title]</b>, portador del documento de identidad N° <b>[field_numero_identidad]</b>, asistió a consulta médica el día <b>[created]</b>.</p>
<p>Constancia que se emite a solicitud del paciente.</p>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'imprimir/justificante-medico';

  /* Display: Página Mis Pacientes */
  $handler = $view->new_display('page', 'Página Mis Pacientes', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mis Pacientes';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['display_description'] = 'Listado de pacientes atendidos por un médico particular.';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autor';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'Paciente de Consulta';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['field_apellido']['label'] = '';
  $handler->display->display_options['fields']['field_apellido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Nombre del Paciente';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1] [field_apellido]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Género */
  $handler->display->display_options['fields']['field_sexo']['id'] = 'field_sexo';
  $handler->display->display_options['fields']['field_sexo']['table'] = 'field_data_field_sexo';
  $handler->display->display_options['fields']['field_sexo']['field'] = 'field_sexo';
  $handler->display->display_options['fields']['field_sexo']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['field_sexo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sexo']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'max';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha de última consulta';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['format_date_sql'] = 0;
  $handler->display->display_options['path'] = 'mis-pacientes';

  /* Display: Página Informe Médico */
  $handler = $view->new_display('page', 'Página Informe Médico', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vista Preliminar de Impresión de Informe Médico';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h1>Informe Médico</h1>';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<br>
<p style="text-align: center;">________________________</p>
<p style="text-align: center;">Firma</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autor';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Apellido */
  $handler->display->display_options['fields']['field_apellido']['id'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_apellido']['label'] = '';
  $handler->display->display_options['fields']['field_apellido']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido']['element_label_colon'] = FALSE;
  /* Field: Field: Nombre */
  $handler->display->display_options['fields']['field_nombre']['id'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['table'] = 'field_data_field_nombre';
  $handler->display->display_options['fields']['field_nombre']['field'] = 'field_nombre';
  $handler->display->display_options['fields']['field_nombre']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_nombre']['label'] = 'Dr(a)';
  $handler->display->display_options['fields']['field_nombre']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nombre']['alter']['text'] = '[field_apellido], [field_nombre]';
  $handler->display->display_options['fields']['field_nombre']['element_label_class'] = 'label-inline';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre del Paciente';
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Documento de Identidad */
  $handler->display->display_options['fields']['field_numero_identidad']['id'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['table'] = 'field_data_field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['field'] = 'field_numero_identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['field_numero_identidad']['label'] = 'Documento de identidad';
  $handler->display->display_options['fields']['field_numero_identidad']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_numero_identidad']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_numero_identidad']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Motivo de la consulta';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Anamnesis/Enfermedad actual */
  $handler->display->display_options['fields']['field_enfermedad_actual']['id'] = 'field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['table'] = 'field_data_field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['field'] = 'field_enfermedad_actual';
  $handler->display->display_options['fields']['field_enfermedad_actual']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_enfermedad_actual']['empty'] = 'No se especificó ninguna enfermendad';
  $handler->display->display_options['fields']['field_enfermedad_actual']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Diagnóstico */
  $handler->display->display_options['fields']['field_impresion_diagnostica']['id'] = 'field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['table'] = 'field_data_field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['field'] = 'field_impresion_diagnostica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['empty'] = 'No se realizó una impresión diagnóstica';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['type'] = 'taxonomy_token';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_impresion_diagnostica']['group_column'] = 'target_id';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_impresion_diagnostica']['multi_type'] = 'ul';
  /* Field: Field: Tratamientos */
  $handler->display->display_options['fields']['field_tratamiento']['id'] = 'field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['table'] = 'field_data_field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['field'] = 'field_tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['label'] = 'Tratamiento';
  $handler->display->display_options['fields']['field_tratamiento']['type'] = 'field_collection_table_view';
  $handler->display->display_options['fields']['field_tratamiento']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
    'empty' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_tratamiento']['delta_offset'] = '0';
  /* Field: Field: Especialidad */
  $handler->display->display_options['fields']['field_especialidad']['id'] = 'field_especialidad';
  $handler->display->display_options['fields']['field_especialidad']['table'] = 'field_data_field_especialidad';
  $handler->display->display_options['fields']['field_especialidad']['field'] = 'field_especialidad';
  $handler->display->display_options['fields']['field_especialidad']['label'] = 'Remisión a otras especialidades médicas';
  $handler->display->display_options['fields']['field_especialidad']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_especialidad']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_especialidad']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_especialidad']['multi_type'] = 'ul';
  /* Field: Content: Exámenes */
  $handler->display->display_options['fields']['field_examenes']['id'] = 'field_examenes';
  $handler->display->display_options['fields']['field_examenes']['table'] = 'field_data_field_examenes';
  $handler->display->display_options['fields']['field_examenes']['field'] = 'field_examenes';
  $handler->display->display_options['fields']['field_examenes']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_examenes']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_examenes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_examenes']['multi_type'] = 'ul';
  /* Field: Content: Intervenciones quirúrgicas */
  $handler->display->display_options['fields']['field_intervenciones_quirurgicas']['id'] = 'field_intervenciones_quirurgicas';
  $handler->display->display_options['fields']['field_intervenciones_quirurgicas']['table'] = 'field_data_field_intervenciones_quirurgicas';
  $handler->display->display_options['fields']['field_intervenciones_quirurgicas']['field'] = 'field_intervenciones_quirurgicas';
  $handler->display->display_options['fields']['field_intervenciones_quirurgicas']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_intervenciones_quirurgicas']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['fields']['field_intervenciones_quirurgicas']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_intervenciones_quirurgicas']['multi_type'] = 'ul';
  /* Field: Content: Baja médica */
  $handler->display->display_options['fields']['field_reposo']['id'] = 'field_reposo';
  $handler->display->display_options['fields']['field_reposo']['table'] = 'field_data_field_reposo';
  $handler->display->display_options['fields']['field_reposo']['field'] = 'field_reposo';
  $handler->display->display_options['fields']['field_reposo']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Observaciones */
  $handler->display->display_options['fields']['field_observaciones']['id'] = 'field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['table'] = 'field_data_field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['field'] = 'field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['element_label_class'] = 'label-inline';
  $handler->display->display_options['fields']['field_observaciones']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_observaciones']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'access denied';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Todo(s)';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'imprimir/informe-medico';

  /* Display: Últimas consultas realizadas */
  $handler = $view->new_display('block', 'Últimas consultas realizadas', 'bloque_ultimas_consultas_realizadas');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Últimas consultas realizadas';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Más';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>Usted no ha realizado consultas médicas</p>
<p>Para realizar una nueva consulta médica haga clic <a href="/node/add/consulta">aquí</a></p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['label'] = 'autor';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Apellido */
  $handler->display->display_options['fields']['field_apellido_1']['id'] = 'field_apellido_1';
  $handler->display->display_options['fields']['field_apellido_1']['table'] = 'field_data_field_apellido';
  $handler->display->display_options['fields']['field_apellido_1']['field'] = 'field_apellido';
  $handler->display->display_options['fields']['field_apellido_1']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['field_apellido_1']['label'] = '';
  $handler->display->display_options['fields']['field_apellido_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_apellido_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_apellido_1']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_paciente_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1] [field_apellido_1]';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Motivo';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['block_description'] = 'Últimas consultas realizadas';
  $translatables['consultas'] = array(
    t('Master'),
    t('Mis Consultas'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Elementos por página'),
    t('- Todos -'),
    t('Desplazamiento'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<p>Ud. no tiene consultas registradas en el sistema. Para agregar una nueva consulta utilice el formulario de búsqueda de arriba, localice el paciente al cual le realizará la consulta médica y haga clic en la opción para agregar una nueva consulta.</p>
<p>Si el paciente al cual le realizará la consulta médica no se encuentra registrado en el sistema, utilice el siguiente botón para registrarlo.</p>
<p><a href="node/add/paciente" class="art-button">Registrar nuevo paciente</a></p>'),
    t('autor'),
    t('Title'),
    t('Observaciones'),
    t('Página Mis Consultas'),
    t('Listado de consultas realizadas por un médico'),
    t('Paciente de Consulta'),
    t('Nombre del Paciente'),
    t('Fecha de la Consulta'),
    t('Motivo de la Consulta'),
    t('Enfermedad actual'),
    t('Impresión diagnóstica'),
    t('No se realizó ningún diagnóstico'),
    t('Bloque Consultas de Paciente'),
    t('<a class="art-button" href="/node/add/consulta?field_paciente=!1&edit%5Bfield_sexo%5D[und]=%2">Realizar Consulta Médica</a>'),
    t('<p>El paciente no presenta consultas médicas registradas en el sistema.</p>'),
    t('Consultas de Paciente'),
    t('Todo(s)'),
    t('Bloque Paciente de Consulta'),
    t('<p>Datos del paciente no disponibles.</p>
<p>Por favor reportar éste incidente al <a href="/soporte">equipo de soporte técnico</a></p>'),
    t('Nombre completo'),
    t('Bloque Médico autor de Consulta'),
    t('<p>Datos del Médico no disponibles.</p>
<p>Por favor reportar éste incidente al <a href="/soporte">equipo de soporte técnico</a></p>'),
    t('Apellido'),
    t('Nombre'),
    t('Especialidad Médica'),
    t('Menú Opciones Consulta'),
    t('Opciones de Impresión'),
    t('Prescripción Médica'),
    t('Justificante Médico'),
    t('Informe Médico'),
    t('Página Prescripción Médica'),
    t('Vista Preliminar de Impresión de Prescripción Médica'),
    t('Firma del médico'),
    t('<br>
<p style="text-align: center;">________________________</p>
<p style="text-align: center;">Firma</p>'),
    t('paciente'),
    t('Dr(a)'),
    t('[field_apellido], [field_nombre]'),
    t('Documento de identidad'),
    t('Código de validación farmaceutica'),
    t('Tratamiento'),
    t('Página Justificante Médico'),
    t('Vista Preliminar de Impresión de Justificante Médico'),
    t('<p>No se puede generar la Asistencia a Consulta Médica, Por favor contactar con el <a href="/soporte">Equipo de Soporte</a>.</p>'),
    t('<p>Por medio de la presente se hace constar que <b>[title]</b>, portador del documento de identidad N° <b>[field_numero_identidad]</b>, asistió a consulta médica el día <b>[created]</b>.</p>
<p>Constancia que se emite a solicitud del paciente.</p>'),
    t('Página Mis Pacientes'),
    t('Mis Pacientes'),
    t('Listado de pacientes atendidos por un médico particular.'),
    t('[title_1] [field_apellido]'),
    t('Género'),
    t('Fecha de última consulta'),
    t('Página Informe Médico'),
    t('Vista Preliminar de Impresión de Informe Médico'),
    t('<h1>Informe Médico</h1>'),
    t('Motivo de la consulta'),
    t('Anamnesis/Enfermedad actual'),
    t('No se especificó ninguna enfermendad'),
    t('Diagnóstico'),
    t('No se realizó una impresión diagnóstica'),
    t('Remisión a otras especialidades médicas'),
    t('Exámenes'),
    t('Intervenciones quirúrgicas'),
    t('Baja médica'),
    t('Últimas consultas realizadas'),
    t('Más'),
    t('<p>Usted no ha realizado consultas médicas</p>
<p>Para realizar una nueva consulta médica haga clic <a href="/node/add/consulta">aquí</a></p>'),
    t('[title_1] [field_apellido_1]'),
    t('Motivo'),
  );
  $export['consultas'] = $view;

  return $export;
}
