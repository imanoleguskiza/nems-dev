<?php
/**
 * @file
 * nems_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['css_class'] = 'page-events';
  $handler->display->display_options['use_ajax'] = TRUE;
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
  /* Field: title not linked */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['ui_name'] = 'title not linked';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Title */
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
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['text'] = '<h3><a href="[field_nems_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date']['id'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_event_date']['alter']['text'] = '<div class="text-muted">[field_nems_event_date]</div>';
  $handler->display->display_options['fields']['field_nems_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_nems_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date_1']['id'] = 'field_nems_event_date_1';
  $handler->display->display_options['fields']['field_nems_event_date_1']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date_1']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_nems_event_date_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_nems_event_location']['id'] = 'field_nems_event_location';
  $handler->display->display_options['fields']['field_nems_event_location']['table'] = 'field_data_field_nems_event_location';
  $handler->display->display_options['fields']['field_nems_event_location']['field'] = 'field_nems_event_location';
  $handler->display->display_options['fields']['field_nems_event_location']['label'] = 'Venue';
  $handler->display->display_options['fields']['field_nems_event_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nems_event_location']['hide_alter_empty'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Sort criterion: Content: Sticky */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Content: Date -  start date (field_nems_event_date) */
  $handler->display->display_options['sorts']['field_nems_event_date_value']['id'] = 'field_nems_event_date_value';
  $handler->display->display_options['sorts']['field_nems_event_date_value']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['sorts']['field_nems_event_date_value']['field'] = 'field_nems_event_date_value';
  $handler->display->display_options['sorts']['field_nems_event_date_value']['order'] = 'DESC';
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
    'nems_event' => 'nems_event',
  );

  /* Display: Home page events block */
  $handler = $view->new_display('block', 'Home page events block', 'block_events_home');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['hide_empty'] = TRUE;
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
  /* Field: Content: Title */
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
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['alter']['text'] = '<h3><a href="[field_nems_core_external_url]">[title_field]</a></h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['empty'] = '<h3>[title_field_1]</h3>';
  $handler->display->display_options['fields']['field_nems_core_external_url_1']['click_sort_column'] = 'url';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date']['id'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_event_date']['alter']['text'] = '<div class="text-muted">[field_nems_event_date]</div>';
  $handler->display->display_options['fields']['field_nems_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_nems_event_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nems_event_date']['settings'] = array(
    'format_type' => 'event_date_format',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date_1']['id'] = 'field_nems_event_date_1';
  $handler->display->display_options['fields']['field_nems_event_date_1']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date_1']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date_1']['label'] = 'Time';
  $handler->display->display_options['fields']['field_nems_event_date_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nems_event_date_1']['settings'] = array(
    'format_type' => 'time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_nems_event_location']['id'] = 'field_nems_event_location';
  $handler->display->display_options['fields']['field_nems_event_location']['table'] = 'field_data_field_nems_event_location';
  $handler->display->display_options['fields']['field_nems_event_location']['field'] = 'field_nems_event_location';
  $handler->display->display_options['fields']['field_nems_event_location']['label'] = 'Venue';
  $handler->display->display_options['fields']['field_nems_event_location']['hide_empty'] = TRUE;

  /* Display: Events simple list */
  $handler = $view->new_display('block', 'Events simple list', 'block_events_simple');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Tags (field_tags) */
  $handler->display->display_options['relationships']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['relationships']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['label'] = 'Tags';
  /* Relationship: Taxonomy term: Content using Tags */
  $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['relationship'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['label'] = 'Contextual node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date']['id'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_tags_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Events simple list (filtered) */
  $handler = $view->new_display('block', 'Events simple list (filtered)', 'block_events_simple_filters');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Tags (field_tags) */
  $handler->display->display_options['relationships']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['relationships']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['label'] = 'Tags';
  /* Relationship: Taxonomy term: Content using Tags */
  $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['relationship'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['label'] = 'Contextual node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date']['id'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_tags_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'nems_event' => 'nems_event',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Contains';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title_field_1' => 'title_field_1',
    'body' => 'body',
  );

  /* Display: Events list */
  $handler = $view->new_display('block', 'Events list', 'block_events_list');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Tags (field_tags) */
  $handler->display->display_options['relationships']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['relationships']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['label'] = 'Tags';
  /* Relationship: Taxonomy term: Content using Tags */
  $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['relationship'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['label'] = 'Contextual node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_nems_core_image']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date']['id'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_tags_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Events list (filtered) */
  $handler = $view->new_display('block', 'Events list (filtered)', 'block_events_list_filters');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More events';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Tags (field_tags) */
  $handler->display->display_options['relationships']['field_tags_tid']['id'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['table'] = 'field_data_field_tags';
  $handler->display->display_options['relationships']['field_tags_tid']['field'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['field_tags_tid']['label'] = 'Tags';
  /* Relationship: Taxonomy term: Content using Tags */
  $handler->display->display_options['relationships']['reverse_field_tags_node']['id'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['field'] = 'reverse_field_tags_node';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['relationship'] = 'field_tags_tid';
  $handler->display->display_options['relationships']['reverse_field_tags_node']['label'] = 'Contextual node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_core_image']['id'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['field'] = 'field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image']['settings'] = array(
    'image_style' => 'media_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_nems_core_image']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field_1']['id'] = 'title_field_1';
  $handler->display->display_options['fields']['title_field_1']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_1']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field_1']['label'] = '';
  $handler->display->display_options['fields']['title_field_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_1']['link_to_entity'] = 1;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_event_date']['id'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['table'] = 'field_data_field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['field'] = 'field_nems_event_date';
  $handler->display->display_options['fields']['field_nems_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_tags_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'nems_event' => 'nems_event',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Contains';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title_field_1' => 'title_field_1',
    'body' => 'body',
  );
  $export['nems_events'] = $view;

  return $export;
}
