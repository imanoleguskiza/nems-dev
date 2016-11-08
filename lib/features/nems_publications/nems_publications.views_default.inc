<?php
/**
 * @file
 * nems_publications.views_default.inc
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
  /* Field: Content: Image */
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
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
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date (field_nems_core_date) */
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['id'] = 'field_nems_core_date_value_1';
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['field'] = 'field_nems_core_date_value';
  $handler->display->display_options['sorts']['field_nems_core_date_value_1']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '9';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
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

  /* Display: Publications list (Sharing any tags) */
  $handler = $view->new_display('block', 'Publications list (Sharing any tags)', 'block_pub_list_filters');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';

  /* Display: Publications simple list (Sharing any tags) */
  $handler = $view->new_display('block', 'Publications simple list (Sharing any tags)', 'block_pub_simple_filters');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '9';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;

  /* Display: Publications simple list (Sharing all tags) */
  $handler = $view->new_display('block', 'Publications simple list (Sharing all tags)', 'block_pub_simple_filters_all');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '9';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;

  /* Display: Publications list (Sharing all tags) */
  $handler = $view->new_display('block', 'Publications list (Sharing all tags)', 'block_pub_list_filters_all');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '9';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;

  /* Display: All Publications list */
  $handler = $view->new_display('block', 'All Publications list', 'block_pub_list_all');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: All Publications simple list */
  $handler = $view->new_display('block', 'All Publications simple list', 'block_pub_simple_all');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Publications Home block */
  $handler = $view->new_display('block', 'Publications Home block', 'block_pub_home');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
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
    'nems_publication' => 'nems_publication',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Publications list (Sharing all tags) float display */
  $handler = $view->new_display('block', 'Publications list (Sharing all tags) float display', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nems_core_image']['element_wrapper_class'] = 'nems_publications_image';
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_wrapper_class'] = 'nems_publications_external_link';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';

  /* Display: All Publications list float display */
  $handler = $view->new_display('block', 'All Publications list float display', 'block_2');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '4';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nems_core_image']['element_wrapper_class'] = 'nems_publications_image';
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_wrapper_class'] = 'nems_publications_external_link';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['arguments'] = FALSE;

  /* Display: Publications list (Sharing any tags) float display */
  $handler = $view->new_display('block', 'Publications list (Sharing any tags) float display', 'block_3');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Publications';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nems_core_image']['element_wrapper_class'] = 'nems_publications_image';
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'thumbnail',
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
  /* Field: Content: External Link */
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['id'] = 'field_nems_core_external_url_1';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['table'] = 'field_data_field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['field'] = 'field_nems_core_external_url';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_wrapper_class'] = 'nems_publications_external_link';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  $export['nems_publications'] = $view;

  return $export;
}
