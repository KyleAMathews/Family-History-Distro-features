<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function letter_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'letters';
  $context->description = 'Letters context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'letter' => 'letter',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'Letters' => 'Letters',
        'Letters:page_1' => 'Letters:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'letters',
    'menu' => 'letters',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Letters context');
  t('content_context');
  $export['letters'] = $context;

  return $export;
}
