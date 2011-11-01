<?php
/**
 * @file
 * biography.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function biography_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:biographies
  $menu_links['menu-content-types:biographies'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'biographies',
    'router_path' => 'biographies',
    'link_title' => 'Biographies',
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
    'weight' => '-49',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Biographies');


  return $menu_links;
}
