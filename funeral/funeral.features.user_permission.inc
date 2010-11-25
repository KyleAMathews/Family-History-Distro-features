<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function funeral_user_default_permissions() {
  $permissions = array();

  // Exported permission: create funeral content
  $permissions['create funeral content'] = array(
    'name' => 'create funeral content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: delete any funeral content
  $permissions['delete any funeral content'] = array(
    'name' => 'delete any funeral content',
    'roles' => array(),
  );

  // Exported permission: delete own funeral content
  $permissions['delete own funeral content'] = array(
    'name' => 'delete own funeral content',
    'roles' => array(),
  );

  // Exported permission: edit any funeral content
  $permissions['edit any funeral content'] = array(
    'name' => 'edit any funeral content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: edit own funeral content
  $permissions['edit own funeral content'] = array(
    'name' => 'edit own funeral content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  return $permissions;
}
