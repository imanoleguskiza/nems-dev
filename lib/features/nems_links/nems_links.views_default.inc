<?php
/**
 * @file
 * nems_links.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_links_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'links';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Links';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Links';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'filemime' => 'filemime',
  );
  /* Relationship: Content: Main file (field_main_file:fid) */
  $handler->display->display_options['relationships']['field_main_file_fid']['id'] = 'field_main_file_fid';
  $handler->display->display_options['relationships']['field_main_file_fid']['table'] = 'field_data_field_main_file';
  $handler->display->display_options['relationships']['field_main_file_fid']['field'] = 'field_main_file_fid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Main file */
  $handler->display->display_options['fields']['field_main_file']['id'] = 'field_main_file';
  $handler->display->display_options['fields']['field_main_file']['table'] = 'field_data_field_main_file';
  $handler->display->display_options['fields']['field_main_file']['field'] = 'field_main_file';
  $handler->display->display_options['fields']['field_main_file']['label'] = '';
  $handler->display->display_options['fields']['field_main_file']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_main_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_main_file']['type'] = 'file_url_plain';
  /* Field: File: Mime type */
  $handler->display->display_options['fields']['filemime']['id'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filemime']['field'] = 'filemime';
  $handler->display->display_options['fields']['filemime']['relationship'] = 'field_main_file_fid';
  $handler->display->display_options['fields']['filemime']['label'] = '';
  $handler->display->display_options['fields']['filemime']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filemime']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filemime']['filemime_image'] = TRUE;
  /* Field: Content: Main link */
  $handler->display->display_options['fields']['field_main_link']['id'] = 'field_main_link';
  $handler->display->display_options['fields']['field_main_link']['table'] = 'field_data_field_main_link';
  $handler->display->display_options['fields']['field_main_link']['field'] = 'field_main_link';
  $handler->display->display_options['fields']['field_main_link']['label'] = '';
  $handler->display->display_options['fields']['field_main_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_main_link']['alter']['text'] = '<a href=[field_main_link]>[title_field]</a>';
  $handler->display->display_options['fields']['field_main_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_link']['empty'] = '[filemime]<a href=[field_main_file]>[title_field]</a>';
  $handler->display->display_options['fields']['field_main_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_main_link']['type'] = 'link_absolute';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'link' => 'link',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['links'] = $view;

  return $export;
}
