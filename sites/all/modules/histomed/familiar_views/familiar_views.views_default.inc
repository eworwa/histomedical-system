<?php
/**
 * @file
 * familiar_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function familiar_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'familiares';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Familiares';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Familiares de Paciente';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primera';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_parentesco' => 'field_parentesco',
    'field_edad' => 'field_edad',
    'field_vivo' => 'field_vivo',
    'field_causa_de_defuncion' => 'field_causa_de_defuncion',
    'field_observaciones' => 'field_observaciones',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parentesco' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_edad' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_vivo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_causa_de_defuncion' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_observaciones' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<a class="art-button" href="/node/add/familiar?field_paciente=!1">Agregar Familiar</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>El paciente no posee familiares registrados en el sistema.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_paciente_target_id']['id'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['table'] = 'field_data_field_paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['field'] = 'field_paciente_target_id';
  $handler->display->display_options['relationships']['field_paciente_target_id']['label'] = 'Familiares de Paciente';
  $handler->display->display_options['relationships']['field_paciente_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Nombre y Apellido';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_parentesco']['id'] = 'field_parentesco';
  $handler->display->display_options['fields']['field_parentesco']['table'] = 'field_data_field_parentesco';
  $handler->display->display_options['fields']['field_parentesco']['field'] = 'field_parentesco';
  $handler->display->display_options['fields']['field_parentesco']['label'] = 'Parentesco';
  $handler->display->display_options['fields']['field_parentesco']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_edad']['id'] = 'field_edad';
  $handler->display->display_options['fields']['field_edad']['table'] = 'field_data_field_edad';
  $handler->display->display_options['fields']['field_edad']['field'] = 'field_edad';
  $handler->display->display_options['fields']['field_edad']['label'] = 'Edad';
  $handler->display->display_options['fields']['field_edad']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_vivo']['id'] = 'field_vivo';
  $handler->display->display_options['fields']['field_vivo']['table'] = 'field_data_field_vivo';
  $handler->display->display_options['fields']['field_vivo']['field'] = 'field_vivo';
  $handler->display->display_options['fields']['field_vivo']['label'] = 'Fallecido';
  $handler->display->display_options['fields']['field_vivo']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_causa_de_defuncion']['id'] = 'field_causa_de_defuncion';
  $handler->display->display_options['fields']['field_causa_de_defuncion']['table'] = 'field_data_field_causa_de_defuncion';
  $handler->display->display_options['fields']['field_causa_de_defuncion']['field'] = 'field_causa_de_defuncion';
  $handler->display->display_options['fields']['field_causa_de_defuncion']['label'] = 'Causa de defunción';
  $handler->display->display_options['fields']['field_causa_de_defuncion']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_causa_de_defuncion']['empty'] = 'No aplica';
  $handler->display->display_options['fields']['field_causa_de_defuncion']['hide_alter_empty'] = FALSE;
  /* Field: Content: Observaciones */
  $handler->display->display_options['fields']['field_observaciones']['id'] = 'field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['table'] = 'field_data_field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['field'] = 'field_observaciones';
  $handler->display->display_options['fields']['field_observaciones']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_observaciones']['empty'] = 'No tiene observaciones';
  $handler->display->display_options['fields']['field_observaciones']['settings'] = array(
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Opciones';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '[edit_node]/[delete_node]';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'familiar' => 'familiar',
  );
  $translatables['familiares'] = array(
    t('Master'),
    t('Familiares de Paciente'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« primera'),
    t('‹ anterior'),
    t('siguiente ›'),
    t('última »'),
    t('<a class="art-button" href="/node/add/familiar?field_paciente=!1">Agregar Familiar</a>'),
    t('<p>El paciente no posee familiares registrados en el sistema.</p>'),
    t('Nombre y Apellido'),
    t('Parentesco'),
    t('Edad'),
    t('Fallecido'),
    t('Causa de defunción'),
    t('No aplica'),
    t('Observaciones'),
    t('No tiene observaciones'),
    t('Opciones'),
    t('[edit_node]/[delete_node]'),
    t('Todo(s)'),
  );
  $export['familiares'] = $view;

  return $export;
}
