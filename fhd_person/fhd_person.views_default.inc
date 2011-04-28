<?php
/**
 * @file
 * fhd_person.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function fhd_person_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'person_page';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'fhd_person';
  $view->human_name = 'Person page';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Person_test_view';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Person: Person ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  /* Field: Person: Birth_date */
  $handler->display->display_options['fields']['birth_date']['id'] = 'birth_date';
  $handler->display->display_options['fields']['birth_date']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['birth_date']['field'] = 'birth_date';
  $handler->display->display_options['fields']['birth_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['birth_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['birth_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['birth_date']['alter']['strip_tags'] = 0;
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
  $handler->display->display_options['fields']['birth_place']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['birth_place']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['birth_place']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['birth_place']['alter']['html'] = 0;
  $handler->display->display_options['fields']['birth_place']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['birth_place']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['birth_place']['hide_empty'] = 0;
  $handler->display->display_options['fields']['birth_place']['empty_zero'] = 0;
  /* Field: Person: Family_search_id */
  $handler->display->display_options['fields']['family_search_id']['id'] = 'family_search_id';
  $handler->display->display_options['fields']['family_search_id']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['family_search_id']['field'] = 'family_search_id';
  $handler->display->display_options['fields']['family_search_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['family_search_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['family_search_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['family_search_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['family_search_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['family_search_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['family_search_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['family_search_id']['empty_zero'] = 0;
  /* Field: Person: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  /* Contextual filter: Person: Family_search_id */
  $handler->display->display_options['arguments']['family_search_id']['id'] = 'family_search_id';
  $handler->display->display_options['arguments']['family_search_id']['table'] = 'fhd_person';
  $handler->display->display_options['arguments']['family_search_id']['field'] = 'family_search_id';
  $handler->display->display_options['arguments']['family_search_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['family_search_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['family_search_id']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['family_search_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['family_search_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['family_search_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['family_search_id']['glossary'] = 0;
  $handler->display->display_options['arguments']['family_search_id']['limit'] = '0';
  $handler->display->display_options['arguments']['family_search_id']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['family_search_id']['break_phrase'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'person';
  $translatables['person_page'] = array(
    t('Master'),
    t('Person_test_view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Person ID'),
    t('.'),
    t(','),
    t('Birth_date'),
    t('Birth_place'),
    t('Family_search_id'),
    t('Name'),
    t('All'),
    t('Page'),
  );
  $export['person_page'] = $view;

  return $export;
}
