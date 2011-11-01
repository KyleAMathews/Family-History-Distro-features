<?php
/**
 * @file
 * biography.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function biography_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'biographies';
  $context->description = 'Biography context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'biography' => 'biography',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'biography' => 'biography',
        'biography:page_1' => 'biography:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'biographies',
    'menu' => 'biographies',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Biography context');
  t('content_context');
  $export['biographies'] = $context;

  return $export;
}
