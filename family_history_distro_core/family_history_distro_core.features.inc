<?php
/**
 * @file
 * family_history_distro_core.features.inc
 */

/**
 * Implementation of hook_ctools_plugin_api().
 */
function family_history_distro_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}
