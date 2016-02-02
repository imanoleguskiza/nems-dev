<?php
/**
 * @file
 * nems_publications.views_default.inc.
 */

/**
 * Implements hook_views_default_views().
 */
function nems_publications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['css_class'] = 'page-publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: external url */
  $handler->display->display_options['fields']['field_nems_core_external_url']['id'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['ui_name'] = 'external url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['type'] = 'link_absolute';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['text'] = '<h3><a href="[field_nems_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_core_date']['id'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['field'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['label'] = 'Publication date';
  $handler->display->display_options['fields']['field_nems_core_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_nems_publication_file']['id'] = 'field_nems_publication_file';
  $handler->display->display_options['fields']['field_nems_publication_file']['table'] = 'field_data_field_nems_publication_file';
  $handler->display->display_options['fields']['field_nems_publication_file']['field'] = 'field_nems_publication_file';
  $handler->display->display_options['fields']['field_nems_publication_file']['label'] = '';
  $handler->display->display_options['fields']['field_nems_publication_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_publication_file']['click_sort_column'] = 'fid';
  /* Sort criterion: Content: Date (field_nems_core_date) */
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['id'] = 'field_nems_core_date_value_1';
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['field'] = 'field_nems_core_date_value';
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['order'] = 'DESC';
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
    'nems_publication' => 'nems_publication',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: external url */
  $handler->display->display_options['fields']['field_nems_core_external_url']['id'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['ui_name'] = 'external url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['type'] = 'link_absolute';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['text'] = '<h3><a href="[field_nems_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_core_date']['id'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['field'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: File */
  $handler->display->display_options['fields']['field_nems_publication_file']['id'] = 'field_nems_publication_file';
  $handler->display->display_options['fields']['field_nems_publication_file']['table'] = 'field_data_field_nems_publication_file';
  $handler->display->display_options['fields']['field_nems_publication_file']['field'] = 'field_nems_publication_file';
  $handler->display->display_options['fields']['field_nems_publication_file']['label'] = '';
  $handler->display->display_options['fields']['field_nems_publication_file']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_publication_file']['click_sort_column'] = 'fid';
  $handler->display->display_options['path'] = 'publications';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: external link */
  $handler->display->display_options['fields']['field_nems_core_external_url']['id'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['ui_name'] = 'external link';
  $handler->display->display_options['fields']['field_nems_core_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_core_external_url']['type'] = 'link_absolute';
  /* Field: Field: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Field: External Url */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['text'] = '<h3><a href="[field_nems_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $export['nems_publications'] = $view;

  return $export;
}
