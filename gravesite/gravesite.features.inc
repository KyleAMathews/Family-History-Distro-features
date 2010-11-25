<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function gravesite_ctools_plugin_api() {
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

/**
 * Implementation of hook_views_api().
 */
function gravesite_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
