<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function autobiography_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:autobiographies
  $menu_links['main-menu:autobiographies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'autobiographies',
    'router_path' => 'autobiographies',
    'link_title' => 'Autobiographies',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all Biographies',
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
  t('Autobiographies');


  return $menu_links;
}
