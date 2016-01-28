<?php
/**
 * @file
 * nems_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nems_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nems-homepage';
  $context->description = '';
  $context->tag = 'NEMS';
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
        'views-nems_sliders-block' => array(
          'module' => 'views',
          'delta' => 'nems_sliders-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-nems_news-block' => array(
          'module' => 'views',
          'delta' => 'nems_news-block',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-nems_events-block' => array(
          'module' => 'views',
          'delta' => 'nems_events-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-nems_videos-block' => array(
          'module' => 'views',
          'delta' => 'nems_videos-block',
          'region' => 'content',
          'weight' => '-5',
        ),
        'views-nems_publications-block' => array(
          'module' => 'views',
          'delta' => 'nems_publications-block',
          'region' => 'content',
          'weight' => '-4',
        ),
        'views-nems_sliders-block_1' => array(
          'module' => 'views',
          'delta' => 'nems_sliders-block_1',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('NEMS');
  $export['nems-homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nems-sitewide';
  $context->description = 'Nems sitewide used on every page';
  $context->tag = 'NEMS';
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
        'menu-menu-nems-services' => array(
          'module' => 'menu',
          'delta' => 'menu-nems-services',
          'region' => 'header_top',
          'weight' => '-10',
        ),
        'locale-language' => array(
          'module' => 'locale',
          'delta' => 'language',
          'region' => 'header_top',
          'weight' => '-9',
        ),
        'easy_breadcrumb-easy_breadcrumb' => array(
          'module' => 'easy_breadcrumb',
          'delta' => 'easy_breadcrumb',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'featured',
          'weight' => '-9',
        ),
        'nexteuropa_europa_search-nexteuropa_europa_search_form' => array(
          'module' => 'nexteuropa_europa_search',
          'delta' => 'nexteuropa_europa_search_form',
          'region' => 'sidebar_right',
          'weight' => '-10',
        ),
        'social_media_links-social-media-links' => array(
          'module' => 'social_media_links',
          'delta' => 'social-media-links',
          'region' => 'sidebar_right',
          'weight' => '-8',
        ),
        'nems_core-nems_core_feedback_form' => array(
          'module' => 'nems_core',
          'delta' => 'nems_core_feedback_form',
          'region' => 'sidebar_right',
          'weight' => '2',
        ),
        'cce_basic_config-footer_ipg' => array(
          'module' => 'cce_basic_config',
          'delta' => 'footer_ipg',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('NEMS');
  t('Nems sitewide used on every page');
  $export['nems-sitewide'] = $context;

  return $export;
}
