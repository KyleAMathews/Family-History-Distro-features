<?php
/**
 * @file
 * patriarchal_blessing.strongarm.inc
 */

/**
 * Implementation of hook_strongarm().
 */
function patriarchal_blessing_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_patriarchal_blessing';
  $strongarm->value = '2';
  $export['comment_anonymous_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_patriarchal_blessing';
  $strongarm->value = '3';
  $export['comment_controls_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_patriarchal_blessing';
  $strongarm->value = 1;
  $export['comment_default_mode_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_patriarchal_blessing';
  $strongarm->value = '1';
  $export['comment_default_order_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_patriarchal_blessing';
  $strongarm->value = '50';
  $export['comment_default_per_page_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_patriarchal_blessing';
  $strongarm->value = '1';
  $export['comment_form_location_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_patriarchal_blessing';
  $strongarm->value = '2';
  $export['comment_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_patriarchal_blessing';
  $strongarm->value = 1;
  $export['comment_preview_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_patriarchal_blessing';
  $strongarm->value = '1';
  $export['comment_subject_field_patriarchal_blessing'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_patriarchal_blessing';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
    2 => 'revision',
  );
  $export['node_options_patriarchal_blessing'] = $strongarm;

  return $export;
}
