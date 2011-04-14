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
  $context->name = 'content_blocks';
  $context->description = 'Context to control contextual blocks next to content';
  $context->tag = 'content';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'autobiography' => 'autobiography',
        'biography' => 'biography',
        'funeral' => 'funeral',
        'gravesite' => 'gravesite',
        'journal' => 'journal',
        'journal_entry' => 'journal_entry',
        'letter' => 'letter',
        'obituary' => 'obituary',
        'patriarchal_blessing' => 'patriarchal_blessing',
        'story' => 'story',
        'will' => 'will',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-metainfo-content_metainfo' => array(
          'module' => 'views',
          'delta' => 'metainfo-content_metainfo',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context to control contextual blocks next to content');
  t('content');
  $export['content_blocks'] = $context;

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
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'header',
          'weight' => '-10',
        ),
        'boxes-content_type_menu' => array(
          'module' => 'boxes',
          'delta' => 'content_type_menu',
          'region' => 'header',
          'weight' => '-10',
        ),
        'menu-menu-content-types' => array(
          'module' => 'menu',
          'delta' => 'menu-content-types',
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