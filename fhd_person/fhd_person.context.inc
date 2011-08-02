<?php
/**
 * @file
 * fhd_person.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
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
        'views-3a63e1b29233aeb21d9711e931c95510' => array(
          'module' => 'views',
          'delta' => '3a63e1b29233aeb21d9711e931c95510',
          'region' => 'post_content',
          'weight' => '-10',
        ),
        'views-9f29805af21664ad0802ca7760fe888a' => array(
          'module' => 'views',
          'delta' => '9f29805af21664ad0802ca7760fe888a',
          'region' => 'post_content',
          'weight' => '-9',
        ),
        'views-be9095815a1b7d180f379153a2790a12' => array(
          'module' => 'views',
          'delta' => 'be9095815a1b7d180f379153a2790a12',
          'region' => 'post_content',
          'weight' => '-8',
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
