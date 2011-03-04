<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function journal_user_default_permissions() {
  $permissions = array();

  // Exported permission: create journal content
  $permissions['create journal content'] = array(
    'name' => 'create journal content',
    'roles' => array(),
  );

  // Exported permission: create journal_entry content
  $permissions['create journal_entry content'] = array(
    'name' => 'create journal_entry content',
    'roles' => array(),
  );

  // Exported permission: delete any journal content
  $permissions['delete any journal content'] = array(
    'name' => 'delete any journal content',
    'roles' => array(),
  );

  // Exported permission: delete any journal_entry content
  $permissions['delete any journal_entry content'] = array(
    'name' => 'delete any journal_entry content',
    'roles' => array(),
  );

  // Exported permission: delete own journal content
  $permissions['delete own journal content'] = array(
    'name' => 'delete own journal content',
    'roles' => array(),
  );

  // Exported permission: delete own journal_entry content
  $permissions['delete own journal_entry content'] = array(
    'name' => 'delete own journal_entry content',
    'roles' => array(),
  );

  // Exported permission: edit any journal content
  $permissions['edit any journal content'] = array(
    'name' => 'edit any journal content',
    'roles' => array(),
  );

  // Exported permission: edit any journal_entry content
  $permissions['edit any journal_entry content'] = array(
    'name' => 'edit any journal_entry content',
    'roles' => array(),
  );

  // Exported permission: edit own journal content
  $permissions['edit own journal content'] = array(
    'name' => 'edit own journal content',
    'roles' => array(),
  );

  // Exported permission: edit own journal_entry content
  $permissions['edit own journal_entry content'] = array(
    'name' => 'edit own journal_entry content',
    'roles' => array(),
  );

  return $permissions;
}
