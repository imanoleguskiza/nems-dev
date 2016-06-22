<?php
/**
 * @file
 * nems_call_for_externals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_call_for_externals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_call_for_externals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS Call For External Experts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NEMS Call For External Experts';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_nems_deadline' => 'field_nems_deadline',
    'field_nems_externals_status' => 'field_nems_externals_status',
    'field_nems_reference' => 'field_nems_reference',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nems_deadline' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nems_externals_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nems_reference' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'External experts';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Deadline */
  $handler->display->display_options['fields']['field_nems_deadline']['id'] = 'field_nems_deadline';
  $handler->display->display_options['fields']['field_nems_deadline']['table'] = 'field_data_field_nems_deadline';
  $handler->display->display_options['fields']['field_nems_deadline']['field'] = 'field_nems_deadline';
  $handler->display->display_options['fields']['field_nems_deadline']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_nems_deadline']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_nems_deadline']['delta_offset'] = '0';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_nems_externals_status']['id'] = 'field_nems_externals_status';
  $handler->display->display_options['fields']['field_nems_externals_status']['table'] = 'field_data_field_nems_externals_status';
  $handler->display->display_options['fields']['field_nems_externals_status']['field'] = 'field_nems_externals_status';
  /* Field: Content: Reference */
  $handler->display->display_options['fields']['field_nems_reference']['id'] = 'field_nems_reference';
  $handler->display->display_options['fields']['field_nems_reference']['table'] = 'field_data_field_nems_reference';
  $handler->display->display_options['fields']['field_nems_reference']['field'] = 'field_nems_reference';
  $handler->display->display_options['fields']['field_nems_reference']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_nems_reference']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_nems_reference']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '600',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Sort criterion: Content: Deadline (field_nems_deadline) */
  $handler->display->display_options['sorts']['field_nems_deadline_value']['id'] = 'field_nems_deadline_value';
  $handler->display->display_options['sorts']['field_nems_deadline_value']['table'] = 'field_data_field_nems_deadline';
  $handler->display->display_options['sorts']['field_nems_deadline_value']['field'] = 'field_nems_deadline_value';
  $handler->display->display_options['sorts']['field_nems_deadline_value']['order'] = 'DESC';
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
    'nems_call_for_externals' => 'nems_call_for_externals',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'External experts';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  /* Filter criterion: Content: Reference (field_nems_reference) */
  $handler->display->display_options['filters']['field_nems_reference_value']['id'] = 'field_nems_reference_value';
  $handler->display->display_options['filters']['field_nems_reference_value']['table'] = 'field_data_field_nems_reference';
  $handler->display->display_options['filters']['field_nems_reference_value']['field'] = 'field_nems_reference_value';
  $handler->display->display_options['filters']['field_nems_reference_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_nems_reference_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nems_reference_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nems_reference_value']['expose']['operator_id'] = 'field_nems_reference_value_op';
  $handler->display->display_options['filters']['field_nems_reference_value']['expose']['label'] = 'Reference';
  $handler->display->display_options['filters']['field_nems_reference_value']['expose']['operator'] = 'field_nems_reference_value_op';
  $handler->display->display_options['filters']['field_nems_reference_value']['expose']['identifier'] = 'field_nems_reference_value';
  $handler->display->display_options['filters']['field_nems_reference_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nems_call_for_externals'] = $view;

  return $export;
}
