<?php
/**
 * @file
 * nems_call_for_proposals.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function nems_call_for_proposals_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_nems_call_for_proposals';
  $strongarm->value = '0';
  $export['comment_anonymous_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['comment_default_mode_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_nems_call_for_proposals';
  $strongarm->value = '50';
  $export['comment_default_per_page_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['comment_form_location_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_nems_call_for_proposals';
  $strongarm->value = '1';
  $export['comment_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_nems_call_for_proposals';
  $strongarm->value = '1';
  $export['comment_preview_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['comment_subject_field_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__nems_call_for_proposals';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '4',
        ),
        'path' => array(
          'weight' => '2',
        ),
        'language' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['i18n_node_extended_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_nems_call_for_proposals';
  $strongarm->value = array();
  $export['i18n_node_options_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_nems_call_for_proposals';
  $strongarm->value = array();
  $export['i18n_sync_node_type_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_nems_call_for_proposals';
  $strongarm->value = '4';
  $export['language_content_type_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_nems_call_for_proposals';
  $strongarm->value = array();
  $export['menu_options_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_nems_call_for_proposals';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_nems_call_for_proposals';
  $strongarm->value = array(
    0 => 'moderation',
    1 => 'revision',
  );
  $export['node_options_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_nems_call_for_proposals';
  $strongarm->value = '1';
  $export['node_preview_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_nems_call_for_proposals';
  $strongarm->value = 0;
  $export['node_submitted_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_moderation_state_nems_call_for_proposals';
  $strongarm->value = 'published';
  $export['scheduler_publish_moderation_state_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['scheduler_publish_revision_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['scheduler_unpublish_enable_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_moderation_state_nems_call_for_proposals';
  $strongarm->value = 'expired';
  $export['scheduler_unpublish_moderation_state_nems_call_for_proposals'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_nems_call_for_proposals';
  $strongarm->value = 1;
  $export['scheduler_unpublish_revision_nems_call_for_proposals'] = $strongarm;

  return $export;
}
