<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function patriarchal_blessing_user_default_permissions() {
  $permissions = array();

  // Exported permission: create patriarchal_blessing content
  $permissions['create patriarchal_blessing content'] = array(
    'name' => 'create patriarchal_blessing content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: delete any patriarchal_blessing content
  $permissions['delete any patriarchal_blessing content'] = array(
    'name' => 'delete any patriarchal_blessing content',
    'roles' => array(),
  );

  // Exported permission: delete own patriarchal_blessing content
  $permissions['delete own patriarchal_blessing content'] = array(
    'name' => 'delete own patriarchal_blessing content',
    'roles' => array(),
  );

  // Exported permission: edit any patriarchal_blessing content
  $permissions['edit any patriarchal_blessing content'] = array(
    'name' => 'edit any patriarchal_blessing content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  // Exported permission: edit own patriarchal_blessing content
  $permissions['edit own patriarchal_blessing content'] = array(
    'name' => 'edit own patriarchal_blessing content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'can add and edit pages',
    ),
  );

  return $permissions;
}
