<?php
/**
 * @file
 * family_history_distro_core.box.inc
 */

/**
 * Implements hook_default_box().
 */
function family_history_distro_core_default_box() {
  $export = array();

  $box = new stdClass;
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-9196a7e4';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'About this site';
  $box->options = array(
    'body' => array(
      'value' => '<h1>About This Site</h1>

We grew up listening to bedtime stories from our parents. We heard stories of Dad spending summers in Antimony and living with the Parson’s in Rexburg. We heard from Mom of Aunt Bessie and the Libbey farm in Maine. With Grandparents on both sides interested in genealogy, there was a rich supply of stories to be told.

As we grew up we found these stories hard to access in written form. Copies of stories were tucked away in peoples home, but mostly we were not where the stories were. Without those stories, all that is left is dates and places. Our ancestors have lived productive, interesting, and successful lives. We could have made photo copies, but this would have only helped us. For about the same amount of work, we could put the stories on a web site and be of benefit to the entire family. So that is what we have done. We want to make our ancestors come alive in our memories. This website provides a place where these stories of our ancestors’ lives can be collected and organized.',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['box-9196a7e4'] = $box;

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
