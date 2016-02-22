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
  $view->name = 'latest_press_releases';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Latest press releases';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Latest press releases</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_date']['id'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['field'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_date']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_latest_press_releases');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_date']['id'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['field'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_press_release_date']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['label'] = '';
  $handler->display->display_options['fields']['title_field']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title_field']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title_field']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title_field']['element_label_colon'] = FALSE;
  $export['latest_press_releases'] = $view;

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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_by_topic']['id'] = 'field_press_release_by_topic';
  $handler->display->display_options['fields']['field_press_release_by_topic']['table'] = 'field_data_field_press_release_by_topic';
  $handler->display->display_options['fields']['field_press_release_by_topic']['field'] = 'field_press_release_by_topic';
  $handler->display->display_options['fields']['field_press_release_by_topic']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_by_topic']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_date']['id'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['field'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_date']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_by_source']['id'] = 'field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['field'] = 'field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_by_source']['element_label_colon'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['field_press_release_date_value']['id'] = 'field_press_release_date_value';
  $handler->display->display_options['sorts']['field_press_release_date_value']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['sorts']['field_press_release_date_value']['field'] = 'field_press_release_date_value';
  $handler->display->display_options['sorts']['field_press_release_date_value']['order'] = 'DESC';
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

  /* Display: Press releases */
  $handler = $view->new_display('page', 'Press releases', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press releases';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['id'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['table'] = 'field_data_field_press_release_by_topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['field'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['label'] = 'By topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['identifier'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['id'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['field'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['label'] = 'By source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['identifier'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_date_value']['id'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['filters']['field_press_release_date_value']['field'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['operator_id'] = 'field_press_release_date_value_op';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['operator'] = 'field_press_release_date_value_op';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['identifier'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['path'] = 'press-releases/today';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Today';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-press-release-tabs';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Press releases */
  $handler = $view->new_display('page', 'Press releases', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press releases';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['id'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['table'] = 'field_data_field_press_release_by_topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['field'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['label'] = 'By topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['identifier'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['id'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['field'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['value'] = array(
    36 => '36',
    37 => '37',
    39 => '39',
    41 => '41',
    42 => '42',
    38 => '38',
    43 => '43',
    40 => '40',
    51 => '51',
    44 => '44',
    45 => '45',
    52 => '52',
    46 => '46',
  );
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['label'] = 'By source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['identifier'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_date_value']['id'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['filters']['field_press_release_date_value']['field'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_press_release_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['operator_id'] = 'field_press_release_date_value_op';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['operator'] = 'field_press_release_date_value_op';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['identifier'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['path'] = 'press-releases/last-seven-days';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Last 7 days';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'menu-press-release-tabs';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Press releases */
  $handler = $view->new_display('page', 'Press releases', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press releases';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['id'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['table'] = 'field_data_field_press_release_by_topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['field'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['label'] = 'By topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['identifier'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['id'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['field'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['label'] = 'By source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['identifier'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_date_value']['id'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['filters']['field_press_release_date_value']['field'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_press_release_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['operator_id'] = 'field_press_release_date_value_op';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['label'] = 'Date';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['operator'] = 'field_press_release_date_value_op';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['identifier'] = 'field_press_release_date_value';
  $handler->display->display_options['filters']['field_press_release_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['path'] = 'press-releases/last-thirty-days';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Last 30 days';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'menu-press-release-tabs';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Latest press releases block */
  $handler = $view->new_display('block', 'Latest press releases block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Latest press releases block';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-default';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_by_topic']['id'] = 'field_press_release_by_topic';
  $handler->display->display_options['fields']['field_press_release_by_topic']['table'] = 'field_data_field_press_release_by_topic';
  $handler->display->display_options['fields']['field_press_release_by_topic']['field'] = 'field_press_release_by_topic';
  $handler->display->display_options['fields']['field_press_release_by_topic']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_by_topic']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_press_release_by_topic']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_date']['id'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['field'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_press_release_date']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_by_source']['id'] = 'field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['field'] = 'field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_by_source']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_press_release_by_source']['element_label_colon'] = FALSE;
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

  /* Display: Press releases */
  $handler = $view->new_display('page', 'Press releases', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Press releases';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'list-default';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['id'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['table'] = 'field_data_field_press_release_by_topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['field'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['label'] = 'By topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['operator'] = 'field_press_release_by_topic_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['identifier'] = 'field_press_release_by_topic_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['id'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['field'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['group'] = 1;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator_id'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['label'] = 'By source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['operator'] = 'field_press_release_by_source_tid_i18n_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['identifier'] = 'field_press_release_by_source_tid_i18n';
  $handler->display->display_options['filters']['field_press_release_by_source_tid_i18n']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['filters']['language']['group'] = 1;
  $handler->display->display_options['path'] = 'press-releases-all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Press releases';
  $handler->display->display_options['menu']['weight'] = '-3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Feed Press Releases */
  $handler = $view->new_display('feed', 'Feed Press Releases', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'EUROPA - EU Newsroom - Latest press releases and statements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'feed_1';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['style_options']['uses_fields'] = TRUE;
  $handler->display->display_options['style_options']['description'] = 'Press releases';
  $handler->display->display_options['row_plugin'] = 'rss_fields';
  $handler->display->display_options['row_options']['title_field'] = 'title_field_et';
  $handler->display->display_options['row_options']['link_field'] = 'field_press_release_main_link_et';
  $handler->display->display_options['row_options']['description_field'] = 'body_et';
  $handler->display->display_options['row_options']['creator_field'] = 'field_press_release_by_source';
  $handler->display->display_options['row_options']['date_field'] = 'field_press_release_date';
  $handler->display->display_options['row_options']['guid_field_options'] = array(
    'guid_field' => 'field_press_release_main_link_et',
    'guid_field_is_permalink' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['body_et']['id'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body_et']['field'] = 'body_et';
  $handler->display->display_options['fields']['body_et']['label'] = '';
  $handler->display->display_options['fields']['body_et']['element_label_colon'] = FALSE;
  /* Field: Entity translation: Main link: translated */
  $handler->display->display_options['fields']['field_press_release_main_link_et']['id'] = 'field_press_release_main_link_et';
  $handler->display->display_options['fields']['field_press_release_main_link_et']['table'] = 'field_data_field_press_release_main_link';
  $handler->display->display_options['fields']['field_press_release_main_link_et']['field'] = 'field_press_release_main_link_et';
  $handler->display->display_options['fields']['field_press_release_main_link_et']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_main_link_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_main_link_et']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_press_release_main_link_et']['type'] = 'link_plain';
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_by_source']['id'] = 'field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['field'] = 'field_press_release_by_source';
  $handler->display->display_options['fields']['field_press_release_by_source']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_by_source']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_press_release_date']['id'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['table'] = 'field_data_field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['field'] = 'field_press_release_date';
  $handler->display->display_options['fields']['field_press_release_date']['label'] = '';
  $handler->display->display_options['fields']['field_press_release_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_press_release_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_press_release_date']['element_default_classes'] = FALSE;
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
    'press_releases' => 'press_releases',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['id'] = 'field_press_release_by_source_tid';
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['table'] = 'field_data_field_press_release_by_source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['field'] = 'field_press_release_by_source_tid';
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['expose']['operator_id'] = 'field_press_release_by_source_tid_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['expose']['label'] = 'By source';
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['expose']['operator'] = 'field_press_release_by_source_tid_op';
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['expose']['identifier'] = 'field_press_release_by_source_tid';
  $handler->display->display_options['filters']['field_press_release_by_source_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['id'] = 'field_press_release_by_topic_tid';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['table'] = 'field_data_field_press_release_by_topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['field'] = 'field_press_release_by_topic_tid';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['expose']['operator_id'] = 'field_press_release_by_topic_tid_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['expose']['label'] = 'By topic';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['expose']['operator'] = 'field_press_release_by_topic_tid_op';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['expose']['identifier'] = 'field_press_release_by_topic_tid';
  $handler->display->display_options['filters']['field_press_release_by_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
    6 => 0,
  );
  /* Filter criterion: Content: Title (title_field:language) */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'field_data_title_field';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );
  $handler->display->display_options['path'] = 'press-releases.xml';
  $handler->display->display_options['sitename_title'] = 0;
  $export['press_releases_'] = $view;

  return $export;
}
