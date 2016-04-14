<?php
/**
 * @file
 * nems_gallery.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function nems_gallery_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-nems_carousel-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nems_carousel-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'europaeu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'europaeu_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-nems_gallery-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'nems_gallery-block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'ec_resp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'ec_resp',
        'weight' => 0,
      ),
      'europaeu_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'europaeu_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
