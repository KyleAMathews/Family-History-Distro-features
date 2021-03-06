<?php
/**
 * @file
 * funeral.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function funeral_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:funerals
  $menu_links['menu-content-types:funerals'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'funerals',
    'router_path' => 'funerals',
    'link_title' => 'Funerals',
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
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Funerals');


  return $menu_links;
}
