<?php
/**
 * @file
 * will.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function will_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wills';
  $context->description = 'Wills context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'will' => 'will',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'will' => 'will',
        'will:page_1' => 'will:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'wills',
    'menu' => 'wills',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Wills context');
  t('content_context');
  $export['wills'] = $context;

  return $export;
}
