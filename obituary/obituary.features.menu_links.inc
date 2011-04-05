<?php
/**
 * @file
 * obituary.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function obituary_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:obituaries
  $menu_links['menu-content-types:obituaries'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'obituaries',
    'router_path' => 'obituaries',
    'link_title' => 'Obituaries',
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
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Obituaries');


  return $menu_links;
}
