<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function obituary_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:obituaries
  $menu_links['main-menu:obituaries'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'obituaries',
    'router_path' => 'obituaries',
    'link_title' => 'Obituaries',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all obituaries',
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
  t('Obituaries');


  return $menu_links;
}
