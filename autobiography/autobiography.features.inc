<?php
/**
 * @file
 * autobiography.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function autobiography_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function autobiography_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function autobiography_node_info() {
  $items = array(
    'autobiography' => array(
      'name' => t('Autobiography'),
      'base' => 'node_content',
      'description' => t('An autobiography is writing composed of stories and facts about the author\'s life. An autobiography should cover an extensive portion of the author\'s life. Shorter stories covering a single event or shorter period of the author\'s life should be added as a "story" not as an "autobiography."'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
