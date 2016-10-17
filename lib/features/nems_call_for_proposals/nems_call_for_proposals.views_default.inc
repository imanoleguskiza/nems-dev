<?php
/**
 * @file
 * nems_call_for_proposals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_call_for_proposals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_call_for_proposals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS Call For Proposals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'NEMS Call For Proposals';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Calls for proposals';
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
  $handler->display->display_options['fields']['field_nems_proposals_status']['id'] = 'field_nems_proposals_status';
  $handler->display->display_options['fields']['field_nems_proposals_status']['table'] = 'field_data_field_nems_proposals_status';
  $handler->display->display_options['fields']['field_nems_proposals_status']['field'] = 'field_nems_proposals_status';
  $handler->display->display_options['fields']['field_nems_proposals_status']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Reference */
  $handler->display->display_options['fields']['field_nems_reference']['id'] = 'field_nems_reference';
  $handler->display->display_options['fields']['field_nems_reference']['table'] = 'field_data_field_nems_reference';
  $handler->display->display_options['fields']['field_nems_reference']['field'] = 'field_nems_reference';
  $handler->display->display_options['fields']['field_nems_reference']['type'] = 'text_plain';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
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
    'nems_call_for_proposals' => 'nems_call_for_proposals',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Contains';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_nems_reference' => 'field_nems_reference',
    'body' => 'body',
  );
  /* Filter criterion: Content: Deadline (field_nems_deadline) */
  $handler->display->display_options['filters']['field_nems_deadline_value']['id'] = 'field_nems_deadline_value';
  $handler->display->display_options['filters']['field_nems_deadline_value']['table'] = 'field_data_field_nems_deadline';
  $handler->display->display_options['filters']['field_nems_deadline_value']['field'] = 'field_nems_deadline_value';
  $handler->display->display_options['filters']['field_nems_deadline_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nems_deadline_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nems_deadline_value']['expose']['operator_id'] = 'field_nems_deadline_value_op';
  $handler->display->display_options['filters']['field_nems_deadline_value']['expose']['label'] = 'Deadline';
  $handler->display->display_options['filters']['field_nems_deadline_value']['expose']['operator'] = 'field_nems_deadline_value_op';
  $handler->display->display_options['filters']['field_nems_deadline_value']['expose']['identifier'] = 'field_nems_deadline_value';
  $handler->display->display_options['filters']['field_nems_deadline_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_nems_deadline_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_nems_deadline_value']['year_range'] = '-10:+10';
  /* Filter criterion: Content: Status (field_nems_proposals_status) */
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['id'] = 'field_nems_proposals_status_tid';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['table'] = 'field_data_field_nems_proposals_status';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['field'] = 'field_nems_proposals_status_tid';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['value'] = '';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['expose']['operator_id'] = 'field_nems_proposals_status_tid_op';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['expose']['operator'] = 'field_nems_proposals_status_tid_op';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['expose']['identifier'] = 'field_nems_proposals_status_tid';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
  );
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nems_proposals_status_tid']['vocabulary'] = 'nems_call_for_proposals_status';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['nems_call_for_proposals'] = $view;

  return $export;
}
