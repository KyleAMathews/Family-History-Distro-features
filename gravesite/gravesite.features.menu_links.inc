<?php
/**
 * @file
 * gravesite.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function gravesite_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:gravesites
  $menu_links['menu-content-types:gravesites'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'gravesites',
    'router_path' => 'gravesites',
    'link_title' => 'Gravesites',
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
    'weight' => '-47',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gravesites');


  return $menu_links;
}
