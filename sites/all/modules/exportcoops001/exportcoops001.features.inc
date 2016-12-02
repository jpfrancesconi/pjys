<?php
/**
 * @file
 * exportcoops001.features.inc
 */

/**
 * Implements hook_views_api().
 */
function exportcoops001_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function exportcoops001_node_info() {
  $items = array(
    'canasta_solidaria' => array(
      'name' => t('Canasta Solidaria'),
      'base' => 'node_content',
      'description' => t('Permite representar una canasta de productos que podrá ser reservada por los usuarios registrador del sitio para su posterior retiro y pago.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
    'noticia' => array(
      'name' => t('Noticia'),
      'base' => 'node_content',
      'description' => t('Novedades y noticias publicables en el Sitio.'),
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
    'quienes_somos' => array(
      'name' => t('Quienes somos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Título'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
