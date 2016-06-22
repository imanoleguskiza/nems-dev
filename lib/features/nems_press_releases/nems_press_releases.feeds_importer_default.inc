<?php
/**
 * @file
 * nems_press_releases.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function nems_press_releases_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'europa_eu_rapid_';
  $feeds_importer->config = array(
    'name' => 'europa.eu/rapid/',
    'description' => 'http://europa.eu/rapid/search-result.htm?format=XML&dateRange=30d&exportSize=5000&oldUrl=true',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'language/code[text()="EN"]/following-sibling::title',
          'xpathparser:1' => 'language/code[text()="EN"]/following-sibling::title',
          'xpathparser:2' => 'language/code[text()="FR"]/following-sibling::title',
          'xpathparser:3' => 'language/code[text()="DE"]/following-sibling::title',
          'xpathparser:4' => 'language/code[text()="EN"]/following-sibling::description',
          'xpathparser:5' => 'language/code[text()="FR"]/following-sibling::description',
          'xpathparser:6' => 'language/code[text()="DE"]/following-sibling::description',
          'xpathparser:7' => 'language/code[text()="EN"]/following-sibling::url',
          'xpathparser:8' => 'language/code[text()="FR"]/following-sibling::url',
          'xpathparser:9' => 'language/code[text()="DE"]/following-sibling::url',
          'xpathparser:10' => 'keywords/keyword',
          'xpathparser:11' => 'id',
          'xpathparser:12' => 'date',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
        ),
        'context' => '//PressRelease',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title_field:et:en',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'title_field:et:fr',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'title_field:et:de',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'body:et:en',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'body:et:fr',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'body:et:de',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_nems_pr_main_link:url:et:en',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_nems_pr_main_link:url:et:fr',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_nems_pr_main_link:url:et:de',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_nems_pr_keywords',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'guid',
            'unique' => 1,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'press_releases',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '21600',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['europa_eu_rapid_'] = $feeds_importer;

  return $export;
}
