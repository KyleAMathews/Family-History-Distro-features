<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function funeral_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function funeral_node_info() {
  $items = array(
    'funeral' => array(
      'name' => t('Funeral'),
      'base' => 'node_content',
      'description' => t('A Funeral has information about funerals including who attended, where it occurred, and links the person\'s gravesite page and to talks given at the funeral'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function funeral_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
