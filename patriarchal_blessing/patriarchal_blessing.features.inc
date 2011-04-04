<?php
/**
 * @file
 * patriarchal_blessing.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function patriarchal_blessing_ctools_plugin_api() {
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
function patriarchal_blessing_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => 3.0);
  }
}

/**
 * Implementation of hook_node_info().
 */
function patriarchal_blessing_node_info() {
  $items = array(
    'patriarchal_blessing' => array(
      'name' => t('Patriarchal Blessing'),
      'base' => 'node_content',
      'description' => t('For all patriarchal blessings '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
