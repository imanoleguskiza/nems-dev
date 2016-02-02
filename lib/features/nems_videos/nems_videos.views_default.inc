<?php
/**
 * @file
 * Nems_videos.views_default.inc.
 */

/**
 * Implements hook_views_default_views().
 */
function nems_videos_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_videos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS videos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['css_class'] = 'page-videos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'video_thumbs__209x156_',
    'image_link' => 'content',
  );
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 1;
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'nems_video' => 'nems_video',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Video';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: External Url: translated */
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['id'] = 'field_nems_core_external_url_et';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['field'] = 'field_nems_core_external_url_et';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['type'] = 'link_plain';
  /* Field: Entity translation: Image: translated */
  $handler->display->display_options['fields']['field_nems_core_image_et']['id'] = 'field_nems_core_image_et';
  $handler->display->display_options['fields']['field_nems_core_image_et']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image_et']['field'] = 'field_nems_core_image_et';
  $handler->display->display_options['fields']['field_nems_core_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image_et']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image_et']['settings'] = array(
    'image_style' => 'thumb_videos__209x156_',
    'image_link' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_nems_core_external_url_et]';
  $handler->display->display_options['fields']['title_field_et']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'news/videos';
  $handler->display->display_options['menu']['title'] = 'Videos';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-videos';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More videos';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: External Url: translated */
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['id'] = 'field_nems_core_external_url_et';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['field'] = 'field_nems_core_external_url_et';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_core_external_url_et']['type'] = 'link_plain';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'thumb_videos__209x156_',
    'image_link' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['alter']['text'] = '<a href="[path]" title="[title_field_et]" target="_blank">[title_field_et]</a>';
  $handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_nems_core_external_url_et]';
  $handler->display->display_options['fields']['title_field_et']['alter']['target'] = '_blank';
  $handler->display->display_options['fields']['title_field_et']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  $export['nems_videos'] = $view;

  return $export;
}
