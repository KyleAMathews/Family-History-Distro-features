<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function journal_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:journals
  $menu_links['primary-links:journals'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'journals',
    'router_path' => 'journals',
    'link_title' => 'Journals',
    'options' => array(
      'attributes' => array(
        'title' => 'Listing of all Journals',
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
  t('Journals');


  return $menu_links;
}
