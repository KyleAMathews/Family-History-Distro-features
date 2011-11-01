<?php
/**
 * @file
 * fhd_person.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function fhd_person_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'person_content';
  $view->description = 'Provide blocks to show content associated with a person';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Person content';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Autobiographies';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Person: Node */
  $handler->display->display_options['relationships']['nid']['id'] = 'nid';
  $handler->display->display_options['relationships']['nid']['table'] = 'fhd_content_person_mapping';
  $handler->display->display_options['relationships']['nid']['field'] = 'nid';
  $handler->display->display_options['relationships']['nid']['required'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Person: Person ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'fhd_content_person_mapping';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['relationship'] = 'nid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['pid']['default_argument_options']['code'] = '// Return the second arg, e.g. person/2018
$arg = (int) arg(1);
if (!empty($arg)) {
  return $arg;
}';
  $handler->display->display_options['arguments']['pid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['summary_options']['inline'] = 0;
  $handler->display->display_options['arguments']['pid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['pid']['not'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'autobiography' => 'autobiography',
  );

  /* Display: Person Stories Block */
  $handler = $view->new_display('block', 'Person Stories Block', 'person_stories_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Stories';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'story' => 'story',
  );

  /* Display: Person Autobiographies Block */
  $handler = $view->new_display('block', 'Person Autobiographies Block', 'person_autobiographies_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Autobiographies';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'autobiography' => 'autobiography',
  );

  /* Display: Person Obituaries Block */
  $handler = $view->new_display('block', 'Person Obituaries Block', 'person_obituaries_block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Obituaries';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'nid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'obituary' => 'obituary',
  );
  $export['person_content'] = $view;

  $view = new view;
  $view->name = 'person_page_views';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'fhd_person';
  $view->human_name = 'Person page';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Person Page - this is overridden in code w/ the name of the person';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Person: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['label'] = '';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  /* Field: Person: Birth_date */
  $handler->display->display_options['fields']['birth_date']['id'] = 'birth_date';
  $handler->display->display_options['fields']['birth_date']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['birth_date']['field'] = 'birth_date';
  $handler->display->display_options['fields']['birth_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['birth_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['birth_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['birth_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['birth_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['birth_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['birth_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['birth_date']['format_plural'] = 0;
  /* Field: Person: Birth_place */
  $handler->display->display_options['fields']['birth_place']['id'] = 'birth_place';
  $handler->display->display_options['fields']['birth_place']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['birth_place']['field'] = 'birth_place';
  $handler->display->display_options['fields']['birth_place']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['external'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['birth_place']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['birth_place']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['html'] = 0;
  $handler->display->display_options['fields']['birth_place']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['birth_place']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['birth_place']['hide_empty'] = 0;
  $handler->display->display_options['fields']['birth_place']['empty_zero'] = 0;
  /* Field: Person: Burial_date */
  $handler->display->display_options['fields']['burial_date']['id'] = 'burial_date';
  $handler->display->display_options['fields']['burial_date']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['burial_date']['field'] = 'burial_date';
  $handler->display->display_options['fields']['burial_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['burial_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['burial_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['burial_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['burial_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['burial_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['burial_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['burial_date']['format_plural'] = 0;
  /* Field: Person: Burial_place */
  $handler->display->display_options['fields']['burial_place']['id'] = 'burial_place';
  $handler->display->display_options['fields']['burial_place']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['burial_place']['field'] = 'burial_place';
  $handler->display->display_options['fields']['burial_place']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['external'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['burial_place']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['burial_place']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['html'] = 0;
  $handler->display->display_options['fields']['burial_place']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['burial_place']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['burial_place']['hide_empty'] = 0;
  $handler->display->display_options['fields']['burial_place']['empty_zero'] = 0;
  /* Field: Person: Death_date */
  $handler->display->display_options['fields']['death_date']['id'] = 'death_date';
  $handler->display->display_options['fields']['death_date']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['death_date']['field'] = 'death_date';
  $handler->display->display_options['fields']['death_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['death_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['death_date']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['html'] = 0;
  $handler->display->display_options['fields']['death_date']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['death_date']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['death_date']['hide_empty'] = 0;
  $handler->display->display_options['fields']['death_date']['empty_zero'] = 0;
  $handler->display->display_options['fields']['death_date']['format_plural'] = 0;
  /* Field: Person: Death_place */
  $handler->display->display_options['fields']['death_place']['id'] = 'death_place';
  $handler->display->display_options['fields']['death_place']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['death_place']['field'] = 'death_place';
  $handler->display->display_options['fields']['death_place']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['external'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['death_place']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['death_place']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['html'] = 0;
  $handler->display->display_options['fields']['death_place']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['death_place']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['death_place']['hide_empty'] = 0;
  $handler->display->display_options['fields']['death_place']['empty_zero'] = 0;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['family_search_id']['id'] = 'family_search_id';
  $handler->display->display_options['arguments']['family_search_id']['table'] = 'fhd_person';
  $handler->display->display_options['arguments']['family_search_id']['field'] = 'family_search_id';
  $handler->display->display_options['arguments']['family_search_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['family_search_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['family_search_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['family_search_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['family_search_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['family_search_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'person_page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Person: Person ID */
  $handler->display->display_options['arguments']['pid']['id'] = 'pid';
  $handler->display->display_options['arguments']['pid']['table'] = 'fhd_person';
  $handler->display->display_options['arguments']['pid']['field'] = 'pid';
  $handler->display->display_options['arguments']['pid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['pid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['pid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['pid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['pid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['pid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['pid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['pid']['not'] = 0;
  $handler->display->display_options['path'] = 'person/%';
  $export['person_page_views'] = $view;

  return $export;
}
