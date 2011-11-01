<?php
/**
 * @file
 * gravesite.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function gravesite_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'gravesites';
  $context->description = 'Gravesites context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'gravesite' => 'gravesite',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'gravesite' => 'gravesite',
        'gravesite:page_1' => 'gravesite:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'gravesites',
    'menu' => 'gravesites',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Gravesites context');
  t('content_context');
  $export['gravesites'] = $context;

  return $export;
}
