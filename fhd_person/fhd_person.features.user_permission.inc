<?php
/**
 * @file
 * fhd_person.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function fhd_person_user_default_permissions() {
  $permissions = array();

  // Exported permission: adminster content-person mappings
  $permissions['adminster content-person mappings'] = array(
    'name' => 'adminster content-person mappings',
    'roles' => array(
      0 => 'authenticated user',
    ),
    'module' => 'fhd_person_mapping',
  );

  return $permissions;
}
