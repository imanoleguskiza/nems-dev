<?php
/**
 * @file
 * nems_news.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_news_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'NEMS categories';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity translation: Name: translated */
  $handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
  $handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
  $handler->display->display_options['fields']['name_field_et']['label'] = '';
  $handler->display->display_options['fields']['name_field_et']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'nems_news_categories' => 'nems_news_categories',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name_field_et' => 'name_field_et',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['nems_categories'] = $view;

  $view = new view();
  $view->name = 'nems_news';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS News';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['css_class'] = 'page-news';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_core_date']['id'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['field'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_date']['element_class'] = 'label label-default label-small';
  $handler->display->display_options['fields']['field_nems_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Date (field_nems_core_date) */
  $handler->display->display_options['sorts']['field_nems_core_date_value']['id'] = 'field_nems_core_date_value';
  $handler->display->display_options['sorts']['field_nems_core_date_value']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['sorts']['field_nems_core_date_value']['field'] = 'field_nems_core_date_value';
  $handler->display->display_options['sorts']['field_nems_core_date_value']['order'] = 'DESC';
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
    'nems_news' => 'nems_news',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_nems_news_category_tid']['id'] = 'field_nems_news_category_tid';
  $handler->display->display_options['filters']['field_nems_news_category_tid']['table'] = 'field_data_field_nems_news_category';
  $handler->display->display_options['filters']['field_nems_news_category_tid']['field'] = 'field_nems_news_category_tid';
  $handler->display->display_options['filters']['field_nems_news_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nems_news_category_tid']['expose']['operator_id'] = 'field_nems_news_category_tid_op';
  $handler->display->display_options['filters']['field_nems_news_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_nems_news_category_tid']['expose']['operator'] = 'field_nems_news_category_tid_op';
  $handler->display->display_options['filters']['field_nems_news_category_tid']['expose']['identifier'] = 'field_nems_news_category_tid';
  $handler->display->display_options['filters']['field_nems_news_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );

  /* Display: Nems News Section */
  $handler = $view->new_display('page', 'Nems News Section', 'page');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: Image: translated */
  $handler->display->display_options['fields']['field_nems_core_image_et']['id'] = 'field_nems_core_image_et';
  $handler->display->display_options['fields']['field_nems_core_image_et']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image_et']['field'] = 'field_nems_core_image_et';
  $handler->display->display_options['fields']['field_nems_core_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_image_et']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image_et']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field_et']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_core_date']['id'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['field'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_date']['element_class'] = 'label label-default label-small';
  $handler->display->display_options['fields']['field_nems_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_nems_core_abstract']['id'] = 'field_nems_core_abstract';
  $handler->display->display_options['fields']['field_nems_core_abstract']['table'] = 'field_data_field_nems_core_abstract';
  $handler->display->display_options['fields']['field_nems_core_abstract']['field'] = 'field_nems_core_abstract';
  $handler->display->display_options['fields']['field_nems_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_abstract']['element_label_colon'] = FALSE;
  /* Field: Entity translation: Category: translated */
  $handler->display->display_options['fields']['field_nems_news_category_et']['id'] = 'field_nems_news_category_et';
  $handler->display->display_options['fields']['field_nems_news_category_et']['table'] = 'field_data_field_nems_news_category';
  $handler->display->display_options['fields']['field_nems_news_category_et']['field'] = 'field_nems_news_category_et';
  $handler->display->display_options['fields']['field_nems_news_category_et']['label'] = '';
  $handler->display->display_options['fields']['field_nems_news_category_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_news_category_et']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_nems_news_category_et']['delta_offset'] = '0';
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
    'nems_news' => 'nems_news',
  );
  /* Filter criterion: Content: Category (field_nems_news_category) */
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['id'] = 'field_nems_news_category_target_id';
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['table'] = 'field_data_field_nems_news_category';
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['field'] = 'field_nems_news_category_target_id';
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['expose']['operator_id'] = 'field_nems_news_category_target_id_op';
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['expose']['operator'] = 'field_nems_news_category_target_id_op';
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['expose']['identifier'] = 'field_nems_news_category_target_id';
  $handler->display->display_options['filters']['field_nems_news_category_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  /* Filter criterion: Search: Search Terms */
  $handler->display->display_options['filters']['keys']['id'] = 'keys';
  $handler->display->display_options['filters']['keys']['table'] = 'search_index';
  $handler->display->display_options['filters']['keys']['field'] = 'keys';
  $handler->display->display_options['filters']['keys']['exposed'] = TRUE;
  $handler->display->display_options['filters']['keys']['expose']['operator_id'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['operator'] = 'keys_op';
  $handler->display->display_options['filters']['keys']['expose']['identifier'] = 'keys';
  $handler->display->display_options['filters']['keys']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['keys']['remove_score'] = TRUE;
  $handler->display->display_options['path'] = 'news';

  /* Display: Home page news block */
  $handler = $view->new_display('block', 'Home page news block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'News';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-news';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More news';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entity translation: Image: translated */
  $handler->display->display_options['fields']['field_nems_core_image_et']['id'] = 'field_nems_core_image_et';
  $handler->display->display_options['fields']['field_nems_core_image_et']['table'] = 'field_data_field_nems_core_image';
  $handler->display->display_options['fields']['field_nems_core_image_et']['field'] = 'field_nems_core_image_et';
  $handler->display->display_options['fields']['field_nems_core_image_et']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_image_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_image_et']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_nems_core_image_et']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_core_image_et']['settings'] = array(
    'image_style' => 'homepage_thumbs',
    'image_link' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_field_et']['type'] = 'title_linked';
  $handler->display->display_options['fields']['title_field_et']['settings'] = array(
    'title_style' => 'h3',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_core_date']['id'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['table'] = 'field_data_field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['field'] = 'field_nems_core_date';
  $handler->display->display_options['fields']['field_nems_core_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_date']['element_class'] = 'label label-default label-small';
  $handler->display->display_options['fields']['field_nems_core_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_core_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Field: Abstract */
  $handler->display->display_options['fields']['field_nems_core_abstract']['id'] = 'field_nems_core_abstract';
  $handler->display->display_options['fields']['field_nems_core_abstract']['table'] = 'field_data_field_nems_core_abstract';
  $handler->display->display_options['fields']['field_nems_core_abstract']['field'] = 'field_nems_core_abstract';
  $handler->display->display_options['fields']['field_nems_core_abstract']['label'] = '';
  $handler->display->display_options['fields']['field_nems_core_abstract']['element_label_colon'] = FALSE;
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
    'nems_news' => 'nems_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: RSS Feed */
  $handler = $view->new_display('feed', 'RSS Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'nems_news' => 'nems_news',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'news/rss.xml';
  $export['nems_news'] = $view;

  return $export;
}
