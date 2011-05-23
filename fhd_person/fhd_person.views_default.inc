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
  $handler->display->display_options['title'] = 'Person Page';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Person: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name_1']['empty_zero'] = 0;
  /* Field: Person: Sex */
  $handler->display->display_options['fields']['sex']['id'] = 'sex';
  $handler->display->display_options['fields']['sex']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['sex']['field'] = 'sex';
  /* Field: Person: Birth_date */
  $handler->display->display_options['fields']['birth_date_1']['id'] = 'birth_date_1';
  $handler->display->display_options['fields']['birth_date_1']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['birth_date_1']['field'] = 'birth_date';
  $handler->display->display_options['fields']['birth_date_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['birth_date_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['birth_date_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['birth_date_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['birth_date_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['birth_date_1']['format_plural'] = 0;
  /* Field: Person: Birth_place */
  $handler->display->display_options['fields']['birth_place_1']['id'] = 'birth_place_1';
  $handler->display->display_options['fields']['birth_place_1']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['birth_place_1']['field'] = 'birth_place';
  $handler->display->display_options['fields']['birth_place_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['birth_place_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['birth_place_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['birth_place_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['birth_place_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['birth_place_1']['empty_zero'] = 0;
  /* Field: Person: Burial_date */
  $handler->display->display_options['fields']['burial_date']['id'] = 'burial_date';
  $handler->display->display_options['fields']['burial_date']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['burial_date']['field'] = 'burial_date';
  $handler->display->display_options['fields']['burial_date']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['external'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['burial_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['burial_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['burial_date']['alter']['strip_tags'] = 0;
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
  $handler->display->display_options['fields']['burial_place']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['burial_place']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['burial_place']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['burial_place']['alter']['strip_tags'] = 0;
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
  $handler->display->display_options['fields']['death_date']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['death_date']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['death_date']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['death_date']['alter']['strip_tags'] = 0;
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
  $handler->display->display_options['fields']['death_place']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['death_place']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['death_place']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['death_place']['alter']['html'] = 0;
  $handler->display->display_options['fields']['death_place']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['death_place']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['death_place']['hide_empty'] = 0;
  $handler->display->display_options['fields']['death_place']['empty_zero'] = 0;
  /* Field: Person: Gedcom_id */
  $handler->display->display_options['fields']['gedcom_id']['id'] = 'gedcom_id';
  $handler->display->display_options['fields']['gedcom_id']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['gedcom_id']['field'] = 'gedcom_id';
  $handler->display->display_options['fields']['gedcom_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['gedcom_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['gedcom_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['gedcom_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['gedcom_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['gedcom_id']['empty_zero'] = 0;
  /* Field: Person: Person ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'fhd_person';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
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
  $translatables['person_page_views'] = array(
    t('Master'),
    t('Person Page'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Name'),
    t('Sex'),
    t('Birth_date'),
    t('.'),
    t(','),
    t('Birth_place'),
    t('Burial_date'),
    t('Burial_place'),
    t('Death_date'),
    t('Death_place'),
    t('Gedcom_id'),
    t('Person ID'),
    t('All'),
    t('Page'),
  );
  $export['person_page_views'] = $view;

  return $export;
}
