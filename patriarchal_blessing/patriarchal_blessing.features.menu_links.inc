<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function patriarchal_blessing_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:patriarchal-blessings
  $menu_links['main-menu:patriarchal-blessings'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'patriarchal-blessings',
    'router_path' => 'patriarchal-blessings',
    'link_title' => 'Patriarchal blessings',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all patriarchal blessings',
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
  t('Patriarchal blessings');


  return $menu_links;
}
