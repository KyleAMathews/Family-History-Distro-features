<?php
/**
 * @file
 * family_history_distro_core.context.inc
 */

/**
 * Implementation of hook_context_default_contexts().
 */
function family_history_distro_core_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = 'global contexts';
  $context->tag = 'global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'menu-menu-content-types' => array(
          'module' => 'menu',
          'delta' => 'menu-content-types',
          'region' => 'header',
          'weight' => '-10',
        ),
        'boxes-content_type_menu' => array(
          'module' => 'boxes',
          'delta' => 'content_type_menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('global');
  t('global contexts');
  $export['global'] = $context;

  return $export;
}
