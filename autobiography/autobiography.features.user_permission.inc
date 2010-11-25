<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function autobiography_user_default_permissions() {
  $permissions = array();

  // Exported permission: create autobiography content
  $permissions['create autobiography content'] = array(
    'name' => 'create autobiography content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: delete any autobiography content
  $permissions['delete any autobiography content'] = array(
    'name' => 'delete any autobiography content',
    'roles' => array(),
  );

  // Exported permission: delete own autobiography content
  $permissions['delete own autobiography content'] = array(
    'name' => 'delete own autobiography content',
    'roles' => array(),
  );

  // Exported permission: edit any autobiography content
  $permissions['edit any autobiography content'] = array(
    'name' => 'edit any autobiography content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: edit own autobiography content
  $permissions['edit own autobiography content'] = array(
    'name' => 'edit own autobiography content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  return $permissions;
}
