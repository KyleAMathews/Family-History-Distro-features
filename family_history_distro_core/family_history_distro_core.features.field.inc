<?php
/**
 * @file
 * family_history_distro_core.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function family_history_distro_core_field_default_fields() {
  $fields = array();

  // Exported field: 'node-story-field_location'
  $fields['node-story-field_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(),
      'indexes' => array(
        'lat' => array(
          0 => 'lat',
        ),
        'lng' => array(
          0 => 'lng',
        ),
      ),
      'module' => 'geolocation',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'geolocation_latlng',
    ),
    'field_instance' => array(
      'bundle' => 'story',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Add locations mentioned in this story.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '18',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Location',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'geolocation_googlemaps',
        'settings' => array(),
        'type' => 'geolocation_googlemap',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add locations mentioned in this story.');
  t('Location');

  return $fields;
}
