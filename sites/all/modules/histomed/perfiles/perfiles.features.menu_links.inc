<?php
/**
 * @file
 * perfiles.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function perfiles_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_actividad-reciente:log-de-actividades.
  $menu_links['main-menu_actividad-reciente:log-de-actividades'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'log-de-actividades',
    'router_path' => 'log-de-actividades',
    'link_title' => 'Actividad reciente',
    'options' => array(
      'identifier' => 'main-menu_actividad-reciente:log-de-actividades',
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-consultas',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ayuda:<firstchild>.
  $menu_links['main-menu_ayuda:<firstchild>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'Ayuda',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-ayuda',
        ),
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_ayuda:<firstchild>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_calendario-de-citas:calendario-de-citas/mes.
  $menu_links['main-menu_calendario-de-citas:calendario-de-citas/mes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'calendario-de-citas/mes',
    'router_path' => 'calendario-de-citas/mes',
    'link_title' => 'Calendario de citas',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-calendario',
          1 => 'menu-item-gris',
        ),
      ),
      'identifier' => 'main-menu_calendario-de-citas:calendario-de-citas/mes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pacientes:<firstchild>',
  );
  // Exported menu link: main-menu_confirmar-rcipe-mdico:confirmar-recipe-medico.
  $menu_links['main-menu_confirmar-rcipe-mdico:confirmar-recipe-medico'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'confirmar-recipe-medico',
    'router_path' => 'confirmar-recipe-medico',
    'link_title' => 'Confirmar récipe médico',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-laboratorio',
        ),
      ),
      'identifier' => 'main-menu_confirmar-rcipe-mdico:confirmar-recipe-medico',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'public://menu_icons/menu_icon_1532.jpg',
        'image_style' => 'menu_icon',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-casa',
        ),
      ),
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_mi-cuenta:<firstchild>.
  $menu_links['main-menu_mi-cuenta:<firstchild>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'Mi cuenta',
    'options' => array(
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-mi_cuenta',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mi-cuenta:<firstchild>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: main-menu_mi-suscripcin:mi-suscripcion.
  $menu_links['main-menu_mi-suscripcin:mi-suscripcion'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mi-suscripcion',
    'router_path' => 'mi-suscripcion',
    'link_title' => 'Mi suscripción',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-contactos',
          1 => 'menu-item-gris',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_mi-suscripcin:mi-suscripcion',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_mi-cuenta:<firstchild>',
  );
  // Exported menu link: main-menu_mis-consultas:mis-consultas.
  $menu_links['main-menu_mis-consultas:mis-consultas'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mis-consultas',
    'router_path' => 'mis-consultas',
    'link_title' => 'Mis consultas',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-consultas',
          1 => 'menu-item-gris',
        ),
      ),
      'identifier' => 'main-menu_mis-consultas:mis-consultas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pacientes:<firstchild>',
  );
  // Exported menu link: main-menu_mis-pacientes:mis-pacientes.
  $menu_links['main-menu_mis-pacientes:mis-pacientes'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mis-pacientes',
    'router_path' => 'mis-pacientes',
    'link_title' => 'Mis pacientes',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-contactos',
          1 => 'menu-item-gris',
        ),
      ),
      'identifier' => 'main-menu_mis-pacientes:mis-pacientes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pacientes:<firstchild>',
  );
  // Exported menu link: main-menu_pacientes:<firstchild>.
  $menu_links['main-menu_pacientes:<firstchild>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<firstchild>',
    'router_path' => '<firstchild>',
    'link_title' => 'Pacientes',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-pacientes',
        ),
      ),
      'alter' => TRUE,
      'unaltered_hidden' => 0,
      'identifier' => 'main-menu_pacientes:<firstchild>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_panel-de-control:node/184.
  $menu_links['main-menu_panel-de-control:node/184'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/184',
    'router_path' => 'node/%',
    'link_title' => 'Panel de Control',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-computador',
        ),
      ),
      'identifier' => 'main-menu_panel-de-control:node/184',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_preguntas-frecuentes:preguntas-frecuentes-top.
  $menu_links['main-menu_preguntas-frecuentes:preguntas-frecuentes-top'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'preguntas-frecuentes-top',
    'router_path' => 'preguntas-frecuentes-top',
    'link_title' => 'Preguntas frecuentes',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-preguntas',
          1 => 'menu-item-gris',
        ),
      ),
      'identifier' => 'main-menu_preguntas-frecuentes:preguntas-frecuentes-top',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ayuda:<firstchild>',
  );
  // Exported menu link: main-menu_realizar-consulta-mdica:node/add/consulta.
  $menu_links['main-menu_realizar-consulta-mdica:node/add/consulta'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/consulta',
    'router_path' => 'node/add/consulta',
    'link_title' => 'Realizar consulta médica',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-hoja',
          1 => 'menu-item-gris',
        ),
      ),
      'identifier' => 'main-menu_realizar-consulta-mdica:node/add/consulta',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pacientes:<firstchild>',
  );
  // Exported menu link: main-menu_registrar-historia-clnica:node/add/historia-clinica.
  $menu_links['main-menu_registrar-historia-clnica:node/add/historia-clinica'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/historia-clinica',
    'router_path' => 'node/add/historia-clinica',
    'link_title' => 'Registrar historia clínica',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'identifier' => 'main-menu_registrar-historia-clnica:node/add/historia-clinica',
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-teclado',
          1 => 'menu-item-gris',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pacientes:<firstchild>',
  );
  // Exported menu link: main-menu_registrar-paciente:node/add/paciente.
  $menu_links['main-menu_registrar-paciente:node/add/paciente'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/paciente',
    'router_path' => 'node/add/paciente',
    'link_title' => 'Registrar paciente',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-clip',
          1 => 'menu-item-gris',
        ),
      ),
      'identifier' => 'main-menu_registrar-paciente:node/add/paciente',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pacientes:<firstchild>',
  );
  // Exported menu link: main-menu_salir:user/logout.
  $menu_links['main-menu_salir:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Salir',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-salir',
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_salir:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
  );
  // Exported menu link: main-menu_soporte-tcnico:node/196.
  $menu_links['main-menu_soporte-tcnico:node/196'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/196',
    'router_path' => 'node/%',
    'link_title' => 'Soporte técnico',
    'options' => array(
      'identifier' => 'main-menu_soporte-tcnico:node/196',
      'attributes' => array(
        'title' => 'Soporte técnico',
        'class' => array(
          0 => 'menu-item-audifono',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: main-menu_usuarios:administracion/usuarios.
  $menu_links['main-menu_usuarios:administracion/usuarios'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'administracion/usuarios',
    'router_path' => 'administracion/usuarios',
    'link_title' => 'Usuarios',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-usuarios',
        ),
      ),
      'identifier' => 'main-menu_usuarios:administracion/usuarios',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_video-tutoriales:http://www.youtube.com/channel/UCdD6OdpfWjkzufX3T_jpTkg.
  $menu_links['main-menu_video-tutoriales:http://www.youtube.com/channel/UCdD6OdpfWjkzufX3T_jpTkg'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.youtube.com/channel/UCdD6OdpfWjkzufX3T_jpTkg',
    'router_path' => '',
    'link_title' => 'Video tutoriales',
    'options' => array(
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'sites/all/modules/menu_icons/images/default_icon.png',
        'image_style' => 'medium',
      ),
      'attributes' => array(
        'class' => array(
          0 => 'menu-item-video',
          1 => 'menu-item-gris',
        ),
        'target' => '_blank',
      ),
      'identifier' => 'main-menu_video-tutoriales:http://www.youtube.com/channel/UCdD6OdpfWjkzufX3T_jpTkg',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_ayuda:<firstchild>',
  );
  // Exported menu link: menu-not-loged-in-users_crear-cuenta-no-mdico:user/register.
  $menu_links['menu-not-loged-in-users_crear-cuenta-no-mdico:user/register'] = array(
    'menu_name' => 'menu-not-loged-in-users',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Crear cuenta NO médico',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-not-loged-in-users_crear-cuenta-no-mdico:user/register',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-not-loged-in-users_iniciar-sesin:<front>.
  $menu_links['menu-not-loged-in-users_iniciar-sesin:<front>'] = array(
    'menu_name' => 'menu-not-loged-in-users',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Iniciar sesión',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-not-loged-in-users_iniciar-sesin:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-not-loged-in-users_nueva-contrasea:user/password.
  $menu_links['menu-not-loged-in-users_nueva-contrasea:user/password'] = array(
    'menu_name' => 'menu-not-loged-in-users',
    'link_path' => 'user/password',
    'router_path' => 'user/password',
    'link_title' => 'Nueva contraseña',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-not-loged-in-users_nueva-contrasea:user/password',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-not-loged-in-users_registrarme:medico/register.
  $menu_links['menu-not-loged-in-users_registrarme:medico/register'] = array(
    'menu_name' => 'menu-not-loged-in-users',
    'link_path' => 'medico/register',
    'router_path' => 'medico/register',
    'link_title' => 'Registrarme',
    'options' => array(
      'identifier' => 'menu-not-loged-in-users_registrarme:medico/register',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-15',
        ),
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'public://menu_icons/menu_icon_15.png',
        'image_style' => 'medium',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu_icon',
          1 => 'menu-2',
        ),
      ),
      'menu_icon' => array(
        'enable' => 0,
        'path' => 'public://menu_icons/menu_icon_2.png',
        'image_style' => 'large',
      ),
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Actividad reciente');
  t('Ayuda');
  t('Calendario de citas');
  t('Confirmar récipe médico');
  t('Crear cuenta NO médico');
  t('Iniciar sesión');
  t('Inicio');
  t('Log out');
  t('Mi cuenta');
  t('Mi suscripción');
  t('Mis consultas');
  t('Mis pacientes');
  t('Nueva contraseña');
  t('Pacientes');
  t('Panel de Control');
  t('Preguntas frecuentes');
  t('Realizar consulta médica');
  t('Registrar historia clínica');
  t('Registrar paciente');
  t('Registrarme');
  t('Salir');
  t('Soporte técnico');
  t('User account');
  t('Usuarios');
  t('Video tutoriales');

  return $menu_links;
}
