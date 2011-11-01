<?php
/**
 * @file
 * patriarchal_blessing.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function patriarchal_blessing_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'patriarchal_blessings';
  $context->description = 'Patriarchal blessings context';
  $context->tag = 'content_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'patriarchal_blessing' => 'patriarchal_blessing',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'patriarchal_blessings' => 'patriarchal_blessings',
        'patriarchal_blessings:page_1' => 'patriarchal_blessings:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'patriarchal-blessings',
    'menu' => 'patriarchal-blessings',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Patriarchal blessings context');
  t('content_context');
  $export['patriarchal_blessings'] = $context;

  return $export;
}
