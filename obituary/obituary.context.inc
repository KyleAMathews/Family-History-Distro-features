<?php
/**
 * @file
 * obituary.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function obituary_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'obituaries';
  $context->description = 'Obituaries context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'obituary' => 'obituary',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'obituaries' => 'obituaries',
        'obituaries:page_1' => 'obituaries:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'obituaries',
    'menu' => 'obituaries',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Obituaries context');
  t('content_context');
  $export['obituaries'] = $context;

  return $export;
}
