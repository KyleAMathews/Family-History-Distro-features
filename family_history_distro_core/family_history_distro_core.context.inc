<?php
/**
 * @file
 * family_history_distro_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
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
        'fhd_person_mapping-fhd_person_mapping_people' => array(
          'module' => 'fhd_person_mapping',
          'delta' => 'fhd_person_mapping_people',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-metainfo-content_metainfo' => array(
          'module' => 'views',
          'delta' => 'metainfo-content_metainfo',
          'region' => 'sidebar_second',
          'weight' => '-9',
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
  $context->name = 'frontpage';
  $context->description = 'Context for frontpage';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-box-9196a7e4' => array(
          'module' => 'boxes',
          'delta' => 'box-9196a7e4',
          'region' => 'content',
          'weight' => '-19',
        ),
        'fhd_person-fhd_person_promoted_people' => array(
          'module' => 'fhd_person',
          'delta' => 'fhd_person_promoted_people',
          'region' => 'content',
          'weight' => '-18',
        ),
        'fhd_person-fhd_person_top_surnames' => array(
          'module' => 'fhd_person',
          'delta' => 'fhd_person_top_surnames',
          'region' => 'content',
          'weight' => '-17',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Context for frontpage');
  $export['frontpage'] = $context;

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
