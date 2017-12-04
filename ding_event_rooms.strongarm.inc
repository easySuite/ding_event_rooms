<?php
/**
 * @file
 * ding_event_rooms.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ding_event_rooms_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_event_rooms_random';
  $strongarm->value = '';
  $export['ding_event_rooms_random'] = $strongarm;

  return $export;
}
