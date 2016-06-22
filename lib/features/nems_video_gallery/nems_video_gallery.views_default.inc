<?php
/**
 * @file
 * nems_video_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_video_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_video_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS video gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '[body]';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Content: Video item (field_nems_video_items:fid) */
  $handler->display->display_options['relationships']['field_nems_video_items_fid']['id'] = 'field_nems_video_items_fid';
  $handler->display->display_options['relationships']['field_nems_video_items_fid']['table'] = 'field_data_field_nems_video_items';
  $handler->display->display_options['relationships']['field_nems_video_items_fid']['field'] = 'field_nems_video_items_fid';
  $handler->display->display_options['relationships']['field_nems_video_items_fid']['required'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Video item */
  $handler->display->display_options['fields']['field_nems_video_items']['id'] = 'field_nems_video_items';
  $handler->display->display_options['fields']['field_nems_video_items']['table'] = 'field_data_field_nems_video_items';
  $handler->display->display_options['fields']['field_nems_video_items']['field'] = 'field_nems_video_items';
  $handler->display->display_options['fields']['field_nems_video_items']['label'] = '';
  $handler->display->display_options['fields']['field_nems_video_items']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_video_items']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_video_items']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_nems_video_items']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_nems_video_items']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nems_video_items']['delta_offset'] = '0';
  /* Field: File: Download link */
  $handler->display->display_options['fields']['download']['id'] = 'download';
  $handler->display->display_options['fields']['download']['table'] = 'file_managed';
  $handler->display->display_options['fields']['download']['field'] = 'download';
  $handler->display->display_options['fields']['download']['relationship'] = 'field_nems_video_items_fid';
  $handler->display->display_options['fields']['download']['label'] = '';
  $handler->display->display_options['fields']['download']['element_label_colon'] = FALSE;
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['relationship'] = 'field_nems_video_items_fid';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = FALSE;
  /* Field: File: Video Description */
  $handler->display->display_options['fields']['field_video_description']['id'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['table'] = 'field_data_field_video_description';
  $handler->display->display_options['fields']['field_video_description']['field'] = 'field_video_description';
  $handler->display->display_options['fields']['field_video_description']['relationship'] = 'field_nems_video_items_fid';
  $handler->display->display_options['fields']['field_video_description']['label'] = '';
  $handler->display->display_options['fields']['field_video_description']['element_label_colon'] = FALSE;
  /* Field: File: Video thumbnail */
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['id'] = 'field_nems_video_thumbnail';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['table'] = 'field_data_field_nems_video_thumbnail';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['field'] = 'field_nems_video_thumbnail';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['relationship'] = 'field_nems_video_items_fid';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['label'] = '';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['element_class'] = 'video-thumbnail hidden';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_video_thumbnail']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Video item (field_nems_video_items:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_nems_video_items';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_video_gallery_items_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Video gallery */
  $handler = $view->new_display('entity_view', 'Video gallery', 'video_carousel');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'video_carousel';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'video_gallery',
  );
  $export['nems_video_gallery'] = $view;

  return $export;
}
