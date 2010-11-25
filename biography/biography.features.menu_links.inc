<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function biography_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:biographies
  $menu_links['primary-links:biographies'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'biographies',
    'router_path' => 'biographies',
    'link_title' => 'Biographies',
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
  t('Biographies');


  return $menu_links;
}
