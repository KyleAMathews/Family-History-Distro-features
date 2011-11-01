<?php
/**
 * @file
 * story.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function story_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'stories';
  $context->description = 'stories context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'story' => 'story',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'story' => 'story',
        'story:page_1' => 'story:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'stories',
    'menu' => 'stories',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('content_context');
  t('stories context');
  $export['stories'] = $context;

  return $export;
}
