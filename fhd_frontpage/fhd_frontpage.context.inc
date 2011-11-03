<?php
/**
 * @file
 * fhd_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fhd_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = 'Context for frontpage';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-box-9196a7e4' => array(
          'module' => 'boxes',
          'delta' => 'box-9196a7e4',
          'region' => 'content',
          'weight' => '-10',
        ),
        'fhd_frontpage-fhd_frontpage_promoted_people' => array(
          'module' => 'fhd_frontpage',
          'delta' => 'fhd_frontpage_promoted_people',
          'region' => 'content',
          'weight' => '-9',
        ),
        'fhd_frontpage-fhd_frontpage_top_surnames' => array(
          'module' => 'fhd_frontpage',
          'delta' => 'fhd_frontpage_top_surnames',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for frontpage');
  $export['frontpage'] = $context;

  return $export;
}
