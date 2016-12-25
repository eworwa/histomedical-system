<?php
/**
 * @file
 * comercial.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function comercial_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'comprar_licencia';
  $view->description = 'Listado de licencias para ser compradas por los usuarios del sistema.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Comprar Licencia';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Comprar Licencia';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<article class="art-post art-article art-postcontent"><div class="rounded-corner-box" style="clear: both;"><p>Al adquirir una licencia de Histomedical disfrutas de</p><ul><li>Soporte técnico especializado</li><li>Disponibilidad 24/7 de tu información</li><li>Seguridad, cumplimiento de LOPD y Certificado de Seguridad</li><li>Adaptación de Histomedical a tus necesidades</li></ul><p>Si tienes alguna duda antes de comprar,&nbsp;<a href="http://www.dev.histomedical.com/soporte-tecnico">contáctanos</a>&nbsp;y con gusto te ayudaremos</p></div><br></article>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_licencias_product_id']['id'] = 'field_licencias_product_id';
  $handler->display->display_options['relationships']['field_licencias_product_id']['table'] = 'field_data_field_licencias';
  $handler->display->display_options['relationships']['field_licencias_product_id']['field'] = 'field_licencias_product_id';
  $handler->display->display_options['relationships']['field_licencias_product_id']['label'] = 'Referencia a licencias';
  $handler->display->display_options['relationships']['field_licencias_product_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'licencia_display' => 'licencia_display',
  );

  /* Display: Página Comprar Licencias */
  $handler = $view->new_display('page', 'Página Comprar Licencias', 'page_comprar_licencias');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Commerce Product: Precio (commerce_price:amount) */
  $handler->display->display_options['sorts']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['sorts']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['sorts']['commerce_price_amount']['relationship'] = 'field_licencias_product_id';
  $handler->display->display_options['path'] = 'comprar-licencia';
  $handler->display->display_options['menu']['title'] = 'Comprar Licencia';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['comprar_licencia'] = array(
    t('Master'),
    t('Comprar Licencia'),
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
    t('<article class="art-post art-article art-postcontent"><div class="rounded-corner-box" style="clear: both;"><p>Al adquirir una licencia de Histomedical disfrutas de</p><ul><li>Soporte técnico especializado</li><li>Disponibilidad 24/7 de tu información</li><li>Seguridad, cumplimiento de LOPD y Certificado de Seguridad</li><li>Adaptación de Histomedical a tus necesidades</li></ul><p>Si tienes alguna duda antes de comprar,&nbsp;<a href="http://www.dev.histomedical.com/soporte-tecnico">contáctanos</a>&nbsp;y con gusto te ayudaremos</p></div><br></article>'),
    t('Referencia a licencias'),
    t('Página Comprar Licencias'),
  );
  $export['comprar_licencia'] = $view;

  $view = new view();
  $view->name = 'user_suscription';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_license';
  $view->human_name = 'User suscription';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mi Suscripción';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="rounded-corner-box">
<div class=""><p>
Tu licencia se renovará automáticamente una vez alcanzado la fecha de vencimiento. Si deseas cancelar tu suscripción automática envíanos un mensaje al <a href="/soporte-tecnico">departamento de soporte</a>.
</p></div>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Commerce License: Owner uid */
  $handler->display->display_options['relationships']['owner']['id'] = 'owner';
  $handler->display->display_options['relationships']['owner']['table'] = 'commerce_license';
  $handler->display->display_options['relationships']['owner']['field'] = 'owner';
  $handler->display->display_options['relationships']['owner']['label'] = 'Usuario';
  $handler->display->display_options['relationships']['owner']['required'] = TRUE;
  /* Relationship: Commerce License: Product product_id */
  $handler->display->display_options['relationships']['product']['id'] = 'product';
  $handler->display->display_options['relationships']['product']['table'] = 'commerce_license';
  $handler->display->display_options['relationships']['product']['field'] = 'product';
  $handler->display->display_options['relationships']['product']['label'] = 'Producto de Comercio';
  $handler->display->display_options['relationships']['product']['required'] = TRUE;
  /* Field: Commerce License: License ID */
  $handler->display->display_options['fields']['license_id']['id'] = 'license_id';
  $handler->display->display_options['fields']['license_id']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['license_id']['field'] = 'license_id';
  /* Field: Commerce License: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Estado';
  /* Field: Commerce License: Expires */
  $handler->display->display_options['fields']['expires']['id'] = 'expires';
  $handler->display->display_options['fields']['expires']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['expires']['field'] = 'expires';
  /* Field: Commerce License: Granted */
  $handler->display->display_options['fields']['granted']['id'] = 'granted';
  $handler->display->display_options['fields']['granted']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['granted']['field'] = 'granted';
  /* Field: Commerce Product: Precio */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'product';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'product';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['relationship'] = 'reverse_commerce_license_commerce_line_item';
  $handler->display->display_options['fields']['order_id']['label'] = 'ID del pedido';

  /* Display: Page User Suscription */
  $handler = $view->new_display('page', 'Page User Suscription', 'page');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own licenses';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = TRUE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'comprar_licencia:page_comprar_licencias';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Commerce License: License ID */
  $handler->display->display_options['fields']['license_id']['id'] = 'license_id';
  $handler->display->display_options['fields']['license_id']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['license_id']['field'] = 'license_id';
  $handler->display->display_options['fields']['license_id']['exclude'] = TRUE;
  /* Field: Commerce License: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Estado';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  /* Field: Commerce License: Expires */
  $handler->display->display_options['fields']['expires']['id'] = 'expires';
  $handler->display->display_options['fields']['expires']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['expires']['field'] = 'expires';
  $handler->display->display_options['fields']['expires']['exclude'] = TRUE;
  $handler->display->display_options['fields']['expires']['date_format'] = 'long';
  $handler->display->display_options['fields']['expires']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['expires']['format_date_sql'] = 0;
  /* Field: Commerce License: Granted */
  $handler->display->display_options['fields']['granted']['id'] = 'granted';
  $handler->display->display_options['fields']['granted']['table'] = 'commerce_license';
  $handler->display->display_options['fields']['granted']['field'] = 'granted';
  $handler->display->display_options['fields']['granted']['exclude'] = TRUE;
  $handler->display->display_options['fields']['granted']['date_format'] = 'long';
  $handler->display->display_options['fields']['granted']['second_date_format'] = 'long';
  $handler->display->display_options['fields']['granted']['format_date_sql'] = 0;
  /* Field: Commerce Product: Precio */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'product';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
    'empty_fields_handler' => '',
    'empty_fields_emptyfieldtext_empty_text' => '',
  );
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'product';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="rounded-corner-box">
<p class="custom-title">[title]</p>
<p class="">Precio [commerce_price]</p>
<p class="">Estado [status]</p>
<p class="">Expira el [expires]</p>
<p class="">Obtenida el [granted]</p>
</div>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Commerce License: Granted */
  $handler->display->display_options['sorts']['granted']['id'] = 'granted';
  $handler->display->display_options['sorts']['granted']['table'] = 'commerce_license';
  $handler->display->display_options['sorts']['granted']['field'] = 'granted';
  $handler->display->display_options['sorts']['granted']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'owner';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Commerce License: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_license';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['path'] = 'mi-suscripcion';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Mi suscripción';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['user_suscription'] = array(
    t('Master'),
    t('Mi Suscripción'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<div class="rounded-corner-box">
<div class=""><p>
Tu licencia se renovará automáticamente una vez alcanzado la fecha de vencimiento. Si deseas cancelar tu suscripción automática envíanos un mensaje al <a href="/soporte-tecnico">departamento de soporte</a>.
</p></div>
</div>'),
    t('Usuario'),
    t('Producto de Comercio'),
    t('License ID'),
    t('.'),
    t(','),
    t('Estado'),
    t('Expires'),
    t('Granted'),
    t('ID del pedido'),
    t('Page User Suscription'),
    t('Precio'),
    t('<div class="rounded-corner-box">
<p class="custom-title">[title]</p>
<p class="">Precio [commerce_price]</p>
<p class="">Estado [status]</p>
<p class="">Expira el [expires]</p>
<p class="">Obtenida el [granted]</p>
</div>'),
  );
  $export['user_suscription'] = $view;

  return $export;
}
