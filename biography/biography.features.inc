<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function biography_ctools_plugin_api() {
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
function biography_node_info() {
  $items = array(
    'biography' => array(
      'name' => t('Biography'),
      'base' => 'node_content',
      'description' => t('Personal stories written about a subject by another'),
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
function biography_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
