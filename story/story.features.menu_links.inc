<?php
/**
 * @file
 * story.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function story_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:stories
  $menu_links['menu-content-types:stories'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'stories',
    'router_path' => 'stories',
    'link_title' => 'Stories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Stories');


  return $menu_links;
}
