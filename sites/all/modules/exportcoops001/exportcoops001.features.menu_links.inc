<?php
/**
 * @file
 * exportcoops001.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function exportcoops001_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_cerrar-sesin:user/logout.
  $menu_links['main-menu_cerrar-sesin:user/logout'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'CERRAR SESIÓN',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          2 => 2,
          3 => 3,
        ),
        'hide' => array(
          1 => 1,
        ),
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_cerrar-sesin:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contacto:node/4.
  $menu_links['main-menu_contacto:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'CONTACTO',
    'options' => array(
      'attributes' => array(
        'title' => 'Enviános tus dudas e inquietudes',
      ),
      'identifier' => 'main-menu_contacto:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_ingresar-a-mi-cuenta:user/login.
  $menu_links['main-menu_ingresar-a-mi-cuenta:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'INGRESAR A MI CUENTA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'roles_for_menu' => array(
        'show' => array(
          1 => 1,
        ),
        'hide' => array(
          2 => 2,
          3 => 3,
        ),
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_ingresar-a-mi-cuenta:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'INICIO',
    'options' => array(
      'attributes' => array(
        'title' => '',
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
  // Exported menu link: main-menu_noticias:noticias.
  $menu_links['main-menu_noticias:noticias'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'noticias',
    'router_path' => 'noticias',
    'link_title' => 'NOTICIAS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          1 => 1,
          2 => 2,
        ),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_noticias:noticias',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_nueva-noticia:node/add/noticia.
  $menu_links['main-menu_nueva-noticia:node/add/noticia'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/noticia',
    'router_path' => 'node/add/noticia',
    'link_title' => 'NUEVA NOTICIA',
    'options' => array(
      'attributes' => array(
        'title' => 'Permite subir una nueva noticia al sitio',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          5 => 5,
        ),
        'hide' => array(
          1 => 1,
          3 => 3,
        ),
      ),
      'identifier' => 'main-menu_nueva-noticia:node/add/noticia',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_noticias:noticias',
  );
  // Exported menu link: main-menu_quienes-somos:node/8.
  $menu_links['main-menu_quienes-somos:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'QUIENES SOMOS',
    'options' => array(
      'attributes' => array(),
      'roles_for_menu' => array(
        'show' => array(),
        'hide' => array(),
      ),
      'identifier' => 'main-menu_quienes-somos:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_bienvenido-current-username:<front>.
  $menu_links['user-menu_bienvenido-current-username:<front>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'BIENVENIDO [current-user:name]!',
    'options' => array(
      'menu_token_link_path' => '<nolink>',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_uuid' => '<front>',
      'roles_for_menu' => array(
        'show' => array(
          2 => 2,
        ),
        'hide' => array(),
      ),
      'identifier' => 'user-menu_bienvenido-current-username:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_mis-reservas:menutoken/57d03ea0e86a0.
  $menu_links['user-menu_mis-reservas:menutoken/57d03ea0e86a0'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/57d03ea0e86a0',
    'router_path' => 'menutoken/%',
    'link_title' => 'Mis Reservas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_path' => 'mis_reservas/3/[current-user:uid]',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'menu_token_link_uuid' => 'mis_reservas/3/[user:uid]',
      'roles_for_menu' => array(
        'show' => array(
          2 => 2,
        ),
        'hide' => array(),
      ),
      'identifier' => 'user-menu_mis-reservas:menutoken/57d03ea0e86a0',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_nueva-canasta:node/add/canasta-solidaria.
  $menu_links['user-menu_nueva-canasta:node/add/canasta-solidaria'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/canasta-solidaria',
    'router_path' => 'node/add/canasta-solidaria',
    'link_title' => 'Nueva Canasta',
    'options' => array(
      'attributes' => array(
        'title' => 'Permite dar de alta una nueva Canasta.',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          4 => 4,
        ),
        'hide' => array(
          1 => 1,
          3 => 3,
          5 => 5,
        ),
      ),
      'identifier' => 'user-menu_nueva-canasta:node/add/canasta-solidaria',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_nueva-noticia:node/add/noticia.
  $menu_links['user-menu_nueva-noticia:node/add/noticia'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/add/noticia',
    'router_path' => 'node/add/noticia',
    'link_title' => 'Nueva Noticia',
    'options' => array(
      'attributes' => array(
        'title' => 'Permite subir una nueva noticia al sitio',
      ),
      'alter' => TRUE,
      'roles_for_menu' => array(
        'show' => array(
          5 => 5,
        ),
        'hide' => array(
          1 => 1,
          3 => 3,
        ),
      ),
      'identifier' => 'user-menu_nueva-noticia:node/add/noticia',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
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
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: user-menu_ver-canastas:lista-de-canastas.
  $menu_links['user-menu_ver-canastas:lista-de-canastas'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'lista-de-canastas',
    'router_path' => 'lista-de-canastas',
    'link_title' => 'Ver Canastas',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          4 => 4,
        ),
        'hide' => array(
          1 => 1,
          3 => 3,
          5 => 5,
        ),
      ),
      'attributes' => array(
        'title' => 'Permite editar el listado de canastas disponibles.',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_ver-canastas:lista-de-canastas',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_ver-envos-:node/3/webform-results.
  $menu_links['user-menu_ver-envos-:node/3/webform-results'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/3/webform-results',
    'router_path' => 'node/%/webform-results',
    'link_title' => 'Ver Envíos ',
    'options' => array(
      'roles_for_menu' => array(
        'show' => array(
          4 => 4,
        ),
        'hide' => array(
          1 => 1,
          3 => 3,
          5 => 5,
        ),
      ),
      'attributes' => array(
        'title' => 'Permite ver los envíos recibidos',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_ver-envos-:node/3/webform-results',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('BIENVENIDO [current-user:name]!');
  t('CERRAR SESIÓN');
  t('CONTACTO');
  t('INGRESAR A MI CUENTA');
  t('INICIO');
  t('Log out');
  t('Mis Reservas');
  t('NOTICIAS');
  t('NUEVA NOTICIA');
  t('Nueva Canasta');
  t('Nueva Noticia');
  t('QUIENES SOMOS');
  t('User account');
  t('Ver Canastas');
  t('Ver Envíos ');

  return $menu_links;
}
