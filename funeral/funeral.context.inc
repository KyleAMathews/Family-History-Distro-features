<?php
/**
 * @file
 * funeral.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function funeral_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'funerals';
  $context->description = 'Funerals context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'funeral' => 'funeral',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'funeral' => 'funeral',
        'funeral:page_1' => 'funeral:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'funerals',
    'menu' => 'funerals',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Funerals context');
  t('content_context');
  $export['funerals'] = $context;

  return $export;
}
