<?php
/**
 * @file
 * exportcoops001.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function exportcoops001_user_default_roles() {
  $roles = array();

  // Exported role: administrador.
  $roles['administrador'] = array(
    'name' => 'administrador',
    'weight' => 3,
  );

  // Exported role: publicacion.
  $roles['publicacion'] = array(
    'name' => 'publicacion',
    'weight' => 4,
  );

  return $roles;
}
