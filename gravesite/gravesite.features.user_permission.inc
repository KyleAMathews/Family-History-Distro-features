<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function gravesite_user_default_permissions() {
  $permissions = array();

  // Exported permission: create gravesite content
  $permissions['create gravesite content'] = array(
    'name' => 'create gravesite content',
    'roles' => array(),
  );

  // Exported permission: delete any gravesite content
  $permissions['delete any gravesite content'] = array(
    'name' => 'delete any gravesite content',
    'roles' => array(),
  );

  // Exported permission: delete own gravesite content
  $permissions['delete own gravesite content'] = array(
    'name' => 'delete own gravesite content',
    'roles' => array(),
  );

  // Exported permission: edit any gravesite content
  $permissions['edit any gravesite content'] = array(
    'name' => 'edit any gravesite content',
    'roles' => array(),
  );

  // Exported permission: edit own gravesite content
  $permissions['edit own gravesite content'] = array(
    'name' => 'edit own gravesite content',
    'roles' => array(),
  );

  return $permissions;
}
