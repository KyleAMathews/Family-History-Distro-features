<?php
/**
 * @file
 * funeral.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function funeral_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function funeral_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
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
