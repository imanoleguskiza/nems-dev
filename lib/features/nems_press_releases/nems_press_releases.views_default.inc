<?php
/**
 * @file
 * nems_press_releases.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_press_releases_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'press_releases_';
  $view->description = '';
  $view->tag = 'nems';
  $view->base_table = 'node';
  $view->human_name = 'Press releases';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Last 30 days';
  $handler->display->display_options['css_class'] = 'list-default';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Items';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '1, 2, 3, 5, 10, 20, 50';
  $handler->display->display_options['pager']['options']['tags']['first'] = '«';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹';
  $handler->display->display_options['pager']['options']['tags']['next'] = '›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '»';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No press releases available for your selection.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Content: Main link */
  $handler->display->display_options['fields']['field_press_release_main_link']['id'] = 'field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['table'] = 'field_data_field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['field'] = 'field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['text'] = '<a href="[field_press_release_main_link]">[title_field]</a>';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['path'] = '[field_press_release_main_link] ';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['alt'] = '[title_field]';
  $handler->display->display_options['fields']['field_press_release_main_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_main_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_press_release_main_link']['type'] = 'link_absolute';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'hour';
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
    'press_releases' => 'press_releases',
  );

  /* Display: Press Releases home block */
  $handler = $view->new_display('block', 'Press Releases home block', 'block_ps_home');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest press releases block';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-default';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Content: Main link */
  $handler->display->display_options['fields']['field_press_release_main_link']['id'] = 'field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['table'] = 'field_data_field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['field'] = 'field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['text'] = '<a href="[field_press_release_main_link]">[title_field]</a>';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['path'] = '[field_press_release_main_link] ';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['alt'] = '[title_field]';
  $handler->display->display_options['fields']['field_press_release_main_link']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_press_release_main_link']['element_class'] = 'list-title';
  $handler->display->display_options['fields']['field_press_release_main_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_main_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_press_release_main_link']['type'] = 'link_absolute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'press_releases' => 'press_releases',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: All Press Releases list */
  $handler = $view->new_display('block', 'All Press Releases list', 'block_ps_full_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest press releases block';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-default';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  /* Field: Content: Main link */
  $handler->display->display_options['fields']['field_press_release_main_link']['id'] = 'field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['table'] = 'field_data_field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['field'] = 'field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['text'] = '<a href="[field_press_release_main_link]">[title_field]</a>';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['path'] = '[field_press_release_main_link] ';
  $handler->display->display_options['fields']['field_press_release_main_link']['alter']['alt'] = '[title_field]';
  $handler->display->display_options['fields']['field_press_release_main_link']['element_type'] = 'h2';
  $handler->display->display_options['fields']['field_press_release_main_link']['element_class'] = 'list-title';
  $handler->display->display_options['fields']['field_press_release_main_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_main_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_press_release_main_link']['type'] = 'link_absolute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'press_releases' => 'press_releases',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $export['press_releases_'] = $view;

  return $export;
}
