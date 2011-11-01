<?php
/**
 * @file
 * fhd_person.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fhd_person_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'person_page';
  $context->description = 'Setup blocks on person pages';
  $context->tag = 'person';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'person/*' => 'person/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'fhd_person_mapping-fhd_person_tagged_nodes' => array(
          'module' => 'fhd_person_mapping',
          'delta' => 'fhd_person_tagged_nodes',
          'region' => 'post_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Setup blocks on person pages');
  t('person');
  $export['person_page'] = $context;

  return $export;
}
