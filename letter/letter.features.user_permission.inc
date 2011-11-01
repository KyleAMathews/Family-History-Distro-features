<?php
/**
 * @file
 * letter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function letter_user_default_permissions() {
  $permissions = array();

  // Exported permission: create letter content
  $permissions['create letter content'] = array(
    'name' => 'create letter content',
    'roles' => array(),
  );

  // Exported permission: delete any letter content
  $permissions['delete any letter content'] = array(
    'name' => 'delete any letter content',
    'roles' => array(),
  );

  // Exported permission: delete own letter content
  $permissions['delete own letter content'] = array(
    'name' => 'delete own letter content',
    'roles' => array(),
  );

  // Exported permission: edit any letter content
  $permissions['edit any letter content'] = array(
    'name' => 'edit any letter content',
    'roles' => array(),
  );

  // Exported permission: edit own letter content
  $permissions['edit own letter content'] = array(
    'name' => 'edit own letter content',
    'roles' => array(),
  );

  return $permissions;
}
