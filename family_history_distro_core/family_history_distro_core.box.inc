<?php
/**
 * @file
 * family_history_distro_core.box.inc
 */

/**
 * Implementation of hook_default_box().
 */
function family_history_distro_core_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'content_type_menu';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Base for content type dropdown menu';
  $box->options = array(
    'body' => array(
      'value' => '<span class="toggle-me">Other content <span class="down-arrow">&#9660;</span></span>',
      'format' => 'full_html',
    ),
  );
  $export['content_type_menu'] = $box;

  return $export;
}
