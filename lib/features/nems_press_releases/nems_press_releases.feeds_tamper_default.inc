<?php
/**
 * @file
 * nems_press_releases.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function nems_press_releases_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'europa_eu_rapid_-xpathparser_1-strtotime';
  $feeds_tamper->importer = 'europa_eu_rapid_';
  $feeds_tamper->source = 'xpathparser:11';
  $feeds_tamper->plugin_id = 'strtotime';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'String to Unix timestamp';
  $export['europa_eu_rapid_-xpathparser_1-strtotime'] = $feeds_tamper;

  return $export;
}
