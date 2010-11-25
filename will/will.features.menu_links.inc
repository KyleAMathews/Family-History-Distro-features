<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function will_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:wills
  $menu_links['primary-links:wills'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'wills',
    'router_path' => 'wills',
    'link_title' => 'Wills',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all Stories',
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
  t('Wills');


  return $menu_links;
}
