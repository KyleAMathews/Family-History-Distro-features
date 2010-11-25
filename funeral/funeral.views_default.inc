<?php

/**
 * Implementation of hook_views_default_views().
 */
function funeral_views_default_views() {
  $views = array();

  // Exported view: funeral
  $view = new view;
  $view->name = 'funeral';
  $view->description = 'Lists funerals';
  $view->tag = 'content_type';
  $view->base_table = 'node';
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  
/* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Funerals';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = 1;
  $handler->display->display_options['row_options']['comments'] = 0;
  /* Filter: Node: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funeral' => 'funeral',
  );
  
/* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'funerals';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Funerals';
  $handler->display->display_options['menu']['description'] = 'Listing of all Funerals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  return $views;
}
