<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function story_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:stories
  $menu_links['primary-links:stories'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'stories',
    'router_path' => 'stories',
    'link_title' => 'Stories',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all Stories',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Stories');


  return $menu_links;
}
