<?php
/**
 * @file
 * nems_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS picture gallery';
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
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'image_carousel';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '[body]';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Content: Image (field_nems_gallery_image:fid) */
  $handler->display->display_options['relationships']['field_nems_gallery_image_fid']['id'] = 'field_nems_gallery_image_fid';
  $handler->display->display_options['relationships']['field_nems_gallery_image_fid']['table'] = 'field_data_field_nems_gallery_image';
  $handler->display->display_options['relationships']['field_nems_gallery_image_fid']['field'] = 'field_nems_gallery_image_fid';
  $handler->display->display_options['relationships']['field_nems_gallery_image_fid']['required'] = TRUE;
  /* Field: File: Path */
  $handler->display->display_options['fields']['uri']['id'] = 'uri';
  $handler->display->display_options['fields']['uri']['table'] = 'file_managed';
  $handler->display->display_options['fields']['uri']['field'] = 'uri';
  $handler->display->display_options['fields']['uri']['relationship'] = 'field_nems_gallery_image_fid';
  $handler->display->display_options['fields']['uri']['label'] = '';
  $handler->display->display_options['fields']['uri']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uri']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uri']['file_download_path'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_gallery_image']['id'] = 'field_nems_gallery_image';
  $handler->display->display_options['fields']['field_nems_gallery_image']['table'] = 'field_data_field_nems_gallery_image';
  $handler->display->display_options['fields']['field_nems_gallery_image']['field'] = 'field_nems_gallery_image';
  $handler->display->display_options['fields']['field_nems_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_gallery_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_nems_gallery_image']['alter']['path'] = '[uri]';
  $handler->display->display_options['fields']['field_nems_gallery_image']['alter']['alt'] = '[field_nems_gallery_image-title]';
  $handler->display->display_options['fields']['field_nems_gallery_image']['alter']['rel'] = 'group_gallery';
  $handler->display->display_options['fields']['field_nems_gallery_image']['alter']['link_class'] = 'fancybox';
  $handler->display->display_options['fields']['field_nems_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_gallery_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_nems_gallery_image']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_nems_gallery_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_nems_gallery_image']['delta_offset'] = '0';
  /* Field: File: Title Text */
  $handler->display->display_options['fields']['field_file_image_title_text']['id'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['table'] = 'field_data_field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['field'] = 'field_file_image_title_text';
  $handler->display->display_options['fields']['field_file_image_title_text']['relationship'] = 'field_nems_gallery_image_fid';
  $handler->display->display_options['fields']['field_file_image_title_text']['label'] = '';
  $handler->display->display_options['fields']['field_file_image_title_text']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Image (field_nems_gallery_image:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_nems_gallery_image';
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

  /* Display: Picture carousel */
  $handler = $view->new_display('entity_view', 'Picture carousel', 'picture_carousel');
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'gallery',
  );

  /* Display: List of galleries */
  $handler = $view->new_display('block', 'List of galleries', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '7';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« ';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_gallery_image']['id'] = 'field_nems_gallery_image';
  $handler->display->display_options['fields']['field_nems_gallery_image']['table'] = 'field_data_field_nems_gallery_image';
  $handler->display->display_options['fields']['field_nems_gallery_image']['field'] = 'field_nems_gallery_image';
  $handler->display->display_options['fields']['field_nems_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_gallery_image']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_nems_gallery_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_nems_gallery_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Picture Gallery Category */
  $handler->display->display_options['fields']['field_nems_gallery_category']['id'] = 'field_nems_gallery_category';
  $handler->display->display_options['fields']['field_nems_gallery_category']['table'] = 'field_data_field_nems_gallery_category';
  $handler->display->display_options['fields']['field_nems_gallery_category']['field'] = 'field_nems_gallery_category';
  $handler->display->display_options['fields']['field_nems_gallery_category']['label'] = '';
  $handler->display->display_options['fields']['field_nems_gallery_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_gallery_category']['type'] = 'ds_taxonomy_separator';
  $handler->display->display_options['fields']['field_nems_gallery_category']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Publication date (field_article_publication_date) */
  $handler->display->display_options['sorts']['field_article_publication_date_value']['id'] = 'field_article_publication_date_value';
  $handler->display->display_options['sorts']['field_article_publication_date_value']['table'] = 'field_data_field_article_publication_date';
  $handler->display->display_options['sorts']['field_article_publication_date_value']['field'] = 'field_article_publication_date_value';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );
  $export['nems_gallery'] = $view;

  return $export;
}
