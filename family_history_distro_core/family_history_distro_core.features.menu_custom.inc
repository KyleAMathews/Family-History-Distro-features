<?php
/**
 * @file
 * family_history_distro_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function family_history_distro_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-content-types
  $menus['menu-content-types'] = array(
    'menu_name' => 'menu-content-types',
    'title' => 'Content types',
    'description' => 'Menu for holding links to browse pages for each content type.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  t('Menu for holding links to browse pages for each content type.');


  return $menus;
}
