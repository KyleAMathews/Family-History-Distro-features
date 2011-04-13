<?php
/**
 * @file
 * journal.features.menu_links.inc
 */

/**
 * Implementation of hook_menu_default_menu_links().
 */
function journal_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-content-types:journals
  $menu_links['menu-content-types:journals'] = array(
    'menu_name' => 'menu-content-types',
    'link_path' => 'journals',
    'router_path' => 'journals',
    'link_title' => 'Journals',
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
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Journals');


  return $menu_links;
}
