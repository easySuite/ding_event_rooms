<?php
/**
 * @file
 * ding_event_rooms.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ding_event_rooms_taxonomy_default_vocabularies() {
  return array(
    'rooms' => array(
      'name' => 'Rooms',
      'machine_name' => 'rooms',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
