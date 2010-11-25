<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function will_user_default_permissions() {
  $permissions = array();

  // Exported permission: create will content
  $permissions['create will content'] = array(
    'name' => 'create will content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: delete any will content
  $permissions['delete any will content'] = array(
    'name' => 'delete any will content',
    'roles' => array(),
  );

  // Exported permission: delete own will content
  $permissions['delete own will content'] = array(
    'name' => 'delete own will content',
    'roles' => array(),
  );

  // Exported permission: edit any will content
  $permissions['edit any will content'] = array(
    'name' => 'edit any will content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: edit own will content
  $permissions['edit own will content'] = array(
    'name' => 'edit own will content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  return $permissions;
}
