<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function funeral_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:funerals
  $menu_links['primary-links:funerals'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'funerals',
    'router_path' => 'funerals',
    'link_title' => 'Funerals',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all Funerals',
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
  t('Funerals');


  return $menu_links;
}
