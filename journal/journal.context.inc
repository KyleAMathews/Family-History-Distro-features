<?php
/**
 * @file
 * journal.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function journal_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'journals';
  $context->description = 'Journals context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'journal' => 'journal',
        'journal_entry' => 'journal_entry',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'Journal' => 'Journal',
        'Journal:page_1' => 'Journal:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'journals',
    'menu' => 'journals',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Journals context');
  t('content_context');
  $export['journals'] = $context;

  return $export;
}
