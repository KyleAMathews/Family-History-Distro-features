<?php
/**
 * @file
 * obituary.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function obituary_user_default_permissions() {
  $permissions = array();

  // Exported permission: create obituary content
  $permissions['create obituary content'] = array(
    'name' => 'create obituary content',
    'roles' => array(),
  );

  // Exported permission: delete any obituary content
  $permissions['delete any obituary content'] = array(
    'name' => 'delete any obituary content',
    'roles' => array(),
  );

  // Exported permission: delete own obituary content
  $permissions['delete own obituary content'] = array(
    'name' => 'delete own obituary content',
    'roles' => array(),
  );

  // Exported permission: edit any obituary content
  $permissions['edit any obituary content'] = array(
    'name' => 'edit any obituary content',
    'roles' => array(),
  );

  // Exported permission: edit own obituary content
  $permissions['edit own obituary content'] = array(
    'name' => 'edit own obituary content',
    'roles' => array(),
  );

  return $permissions;
}
