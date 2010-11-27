<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function letter_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:letters
  $menu_links['main-menu:letters'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'letters',
    'router_path' => 'letters',
    'link_title' => 'Letters',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all letters',
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
  t('Letters');


  return $menu_links;
}
