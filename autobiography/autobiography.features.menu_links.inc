<?php
/**
 * @file
 * autobiography.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function autobiography_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:autobiographies
  $menu_links['menu-content-types:autobiographies'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'autobiographies',
    'router_path' => 'autobiographies',
    'link_title' => 'Autobiographies',
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
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Autobiographies');


  return $menu_links;
}
