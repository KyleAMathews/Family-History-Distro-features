<?php
/**
 * @file
 * patriarchal_blessing.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function patriarchal_blessing_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:patriarchal-blessings
  $menu_links['menu-content-types:patriarchal-blessings'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'patriarchal-blessings',
    'router_path' => 'patriarchal-blessings',
    'link_title' => 'Patriarchal Blessings',
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
    'weight' => '-43',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Patriarchal Blessings');


  return $menu_links;
}
