<?php
/**
 * @file
 * nems_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nems_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_format_just_Y';
  $strongarm->value = 'Y';
  $export['date_format_just_Y'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_without_year';
  $strongarm->value = 'l, F j';
  $export['date_views_day_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_with_year';
  $strongarm->value = 'l, F j, Y';
  $export['date_views_day_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_without_year';
  $strongarm->value = 'F';
  $export['date_views_month_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_with_year';
  $strongarm->value = 'F Y';
  $export['date_views_month_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_without_year';
  $strongarm->value = 'F j';
  $export['date_views_week_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_with_year';
  $strongarm->value = 'F j, Y';
  $export['date_views_week_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_css';
  $strongarm->value = 1;
  $export['site_map_css'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_page_title';
  $strongarm->value = 'Sitemap';
  $export['site_map_page_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_front';
  $strongarm->value = 0;
  $export['site_map_show_front'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_map_show_menus';
  $strongarm->value = array(
    'main-menu' => 'main-menu',
    'menu-breadcrumb-menu' => 0,
    'menu-flexslider-example' => 0,
    'management' => 0,
    'navigation' => 0,
    'menu-nems-services' => 0,
    'menu-service-tools' => 0,
    'user-menu' => 0,
  );
  $export['site_map_show_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_nems_theme_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'disable_dropdown_menu' => 0,
    'enable_interinstitutional_theme' => 1,
    'collapsiblock_block' => 'div.block',
    'collapsiblock_title' => 'div.panel-heading',
    'collapsiblock_content' => 'div.panel-body ',
    'ec_resp_base_theme_of_subtheme' => '',
  );
  $export['theme_nems_theme_settings'] = $strongarm;

  return $export;
}
