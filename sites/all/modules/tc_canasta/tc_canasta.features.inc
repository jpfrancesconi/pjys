<?php
/**
 * @file
 * tc_canasta.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tc_canasta_node_info() {
  $items = array(
    'canasta_solidaria' => array(
      'name' => t('Canasta Solidaria'),
      'base' => 'node_content',
      'description' => t('Permite representar una canasta de productos que podrá ser reservada por los usuarios registrador del sitio para su posterior retiro y pago.'),
      'has_title' => '1',
      'title_label' => t('Titulo'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
