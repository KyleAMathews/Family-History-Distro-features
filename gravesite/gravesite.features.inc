<?php
/**
 * @file
 * gravesite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gravesite_ctools_plugin_api() {
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
function gravesite_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function gravesite_node_info() {
  $items = array(
    'gravesite' => array(
      'name' => t('Gravesite'),
      'base' => 'node_content',
      'description' => t('A gravesite contains pictures and maps of ancestor\'s gravesites'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
