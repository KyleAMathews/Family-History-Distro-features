<?php
/**
 * @file
 * journal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function journal_ctools_plugin_api() {
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
function journal_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function journal_node_info() {
  $items = array(
    'journal' => array(
      'name' => t('Journal'),
      'base' => 'node_content',
      'description' => t('A journal is a single entry made by an ancestor in their journal'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
