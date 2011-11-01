<?php
/**
 * @file
 * biography.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function biography_user_default_permissions() {
  $permissions = array();

  // Exported permission: create biography content
  $permissions['create biography content'] = array(
    'name' => 'create biography content',
    'roles' => array(),
  );

  // Exported permission: delete any biography content
  $permissions['delete any biography content'] = array(
    'name' => 'delete any biography content',
    'roles' => array(),
  );

  // Exported permission: delete own biography content
  $permissions['delete own biography content'] = array(
    'name' => 'delete own biography content',
    'roles' => array(),
  );

  // Exported permission: edit any biography content
  $permissions['edit any biography content'] = array(
    'name' => 'edit any biography content',
    'roles' => array(),
  );

  // Exported permission: edit own biography content
  $permissions['edit own biography content'] = array(
    'name' => 'edit own biography content',
    'roles' => array(),
  );

  return $permissions;
}
