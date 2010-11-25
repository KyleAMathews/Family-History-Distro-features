<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function letter_ctools_plugin_api() {
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
function letter_node_info() {
  $items = array(
    'letter' => array(
      'name' => t('Letter'),
      'base' => 'node_content',
      'description' => t('Historical letters'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('This is only to be used for historical letters'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function letter_views_api() {
  return array(
    'api' => '3.0-alpha1',
  );
}
