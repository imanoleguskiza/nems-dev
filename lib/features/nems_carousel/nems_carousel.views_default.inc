<?php
/**
 * @file
 * nems_carousel.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_carousel_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_carousel';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS carousel';
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
  $handler->display->display_options['style_plugin'] = 'owlcarousel';
  $handler->display->display_options['style_options']['instance'] = 'owlcarousel_settings_nems-carousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h2 class="field-content">[title_field]</h2>
[body]';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Content: Image carousel (field_image_carousel:fid) */
  $handler->display->display_options['relationships']['field_image_carousel_fid']['id'] = 'field_image_carousel_fid';
  $handler->display->display_options['relationships']['field_image_carousel_fid']['table'] = 'field_data_field_image_carousel';
  $handler->display->display_options['relationships']['field_image_carousel_fid']['field'] = 'field_image_carousel_fid';
  $handler->display->display_options['relationships']['field_image_carousel_fid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_carousel_items_node']['id'] = 'reverse_field_carousel_items_node';
  $handler->display->display_options['relationships']['reverse_field_carousel_items_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_carousel_items_node']['field'] = 'reverse_field_carousel_items_node';
  $handler->display->display_options['relationships']['reverse_field_carousel_items_node']['required'] = TRUE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_image_carousel_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Image carousel */
  $handler->display->display_options['fields']['field_image_carousel']['id'] = 'field_image_carousel';
  $handler->display->display_options['fields']['field_image_carousel']['table'] = 'field_data_field_image_carousel';
  $handler->display->display_options['fields']['field_image_carousel']['field'] = 'field_image_carousel';
  $handler->display->display_options['fields']['field_image_carousel']['label'] = '';
  $handler->display->display_options['fields']['field_image_carousel']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image_carousel']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['field_image_carousel']['alter']['alt'] = '[field_image_carousel-title]';
  $handler->display->display_options['fields']['field_image_carousel']['alter']['rel'] = 'group_carousel';
  $handler->display->display_options['fields']['field_image_carousel']['alter']['link_class'] = 'fancybox';
  $handler->display->display_options['fields']['field_image_carousel']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_carousel']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_carousel']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image_carousel']['settings'] = array(
    'colorbox_node_style' => 'large',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_image_carousel']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_image_carousel']['delta_offset'] = '0';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_image_carousel_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Image carousel (field_image_carousel:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_image_carousel';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_carousel_items_node';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nems_carousel'] = $view;

  return $export;
}
