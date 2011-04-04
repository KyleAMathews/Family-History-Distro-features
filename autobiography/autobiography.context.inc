<?php
/**
 * @file
 * autobiography.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function autobiography_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'autobiography';
  $context->description = 'Autobiography context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'autobiography' => 'autobiography',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'autobiography' => 'autobiography',
        'autobiography:page_1' => 'autobiography:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'autobiographies',
    'menu' => 'autobiographies',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Autobiography context');
  t('content_context');
  $export['autobiography'] = $context;

  return $export;
}
