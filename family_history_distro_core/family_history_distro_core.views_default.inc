<?php
/**
 * @file
 * family_history_distro_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function family_history_distro_core_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'metainfo';
  $view->description = 'Provides a block showing metainfo from the various content types';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'metainfo';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'metainfo';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Author or contributor */
  $handler->display->display_options['fields']['field_author_contributor']['id'] = 'field_author_contributor';
  $handler->display->display_options['fields']['field_author_contributor']['table'] = 'field_data_field_author_contributor';
  $handler->display->display_options['fields']['field_author_contributor']['field'] = 'field_author_contributor';
  $handler->display->display_options['fields']['field_author_contributor']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_author_contributor']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_author_contributor']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_author_contributor']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_author_contributor']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_author_contributor']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_author_contributor']['field_api_classes'] = 0;
  /* Field: Content: Date photo taken */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_date']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_date']['field_api_classes'] = 0;
  /* Field: Content: File attachments */
  $handler->display->display_options['fields']['file']['id'] = 'file';
  $handler->display->display_options['fields']['file']['table'] = 'field_data_file';
  $handler->display->display_options['fields']['file']['field'] = 'file';
  $handler->display->display_options['fields']['file']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['file']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['file']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['file']['alter']['external'] = 0;
  $handler->display->display_options['fields']['file']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['file']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['file']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['file']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['file']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['file']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['file']['alter']['html'] = 0;
  $handler->display->display_options['fields']['file']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['file']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['file']['hide_empty'] = 1;
  $handler->display->display_options['fields']['file']['empty_zero'] = 0;
  $handler->display->display_options['fields']['file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['file']['group_rows'] = 1;
  $handler->display->display_options['fields']['file']['delta_offset'] = '0';
  $handler->display->display_options['fields']['file']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['file']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'lat';
  $handler->display->display_options['fields']['field_location']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_location']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_location']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Field: Content: Source */
  $handler->display->display_options['fields']['field_source']['id'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['table'] = 'field_data_field_source';
  $handler->display->display_options['fields']['field_source']['field'] = 'field_source';
  $handler->display->display_options['fields']['field_source']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_source']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_source']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_source']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_source']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_source']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_source']['hide_empty'] = 1;
  $handler->display->display_options['fields']['field_source']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_source']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'content_metainfo');
  $export['metainfo'] = $view;

  return $export;
}
