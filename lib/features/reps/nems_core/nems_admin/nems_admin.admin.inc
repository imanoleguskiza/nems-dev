<?php
/**
 * @file
 * Nems core administration page.
 */

/**
 * Nems core admin form.
 */
function _nems_admin_feedback($form, &$form_state) {
  $form['feedback_form_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Feedback form ID'),
    '#default_value' => variable_get('feedback_form_id', NULL),
    '#element_validate' => array('element_validate_number'),
  );

  $form['#validate'][] = '_nems_admin_feedback_validate';

  return system_settings_form($form);
}

/**
 * Nems core admin form.
 */
function _nems_admin_settings_twitter_webtools($form, &$form_state) {
  $form['twitter_webtools_config_screen'] = array(
    '#type' => 'textfield',
    '#title' => t('Screen name'),
    '#default_value' => variable_get('twitter_webtools_config_screen', NULL),
  );

  $form['twitter_webtools_config_nbr'] = array(
    '#type' => 'textfield',
    '#title' => t('Number of tweets'),
    '#default_value' => variable_get('twitter_webtools_config_nbr', NULL),
    '#element_validate' => array('element_validate_number'),
  );
  $form['#validate'][] = '_nems_admin_feedback_validate';

  return system_settings_form($form);
}

/**
 * Nems core admin form.
 */
function _nems_admin_settings_social($form, &$form_state) {
  $social_links = variable_get('social_media_links_platforms', array());
  $enabled = _nems_admin_retrieve_socials();

  $def = array();
  if (empty($social_links)) {
    foreach ($enabled as $social) {
      $def[$social]['platform_value'] = '';
      $def[$social]['weight'] = 0;
    }
  }
  else {
    foreach ($enabled as $social) {
      $def[$social]['platform_value'] = $social_links[$social]['platform_value'];
      $def[$social]['weight'] = $social_links[$social]['weight'];
    }
  }

  foreach ($enabled as $social) {
    $form['social_media'][$social] = array(
      '#markup' => '<strong>' . $social . '</strong>',
      '#weight' => $def[$social]['weight'],
    );

    $form['social_media'][$social]['platform_value'] = array(
      '#type' => 'textfield',
      '#title' => t('Url'),
      '#default_value' => $def[$social]['platform_value'],
      '#description' => t('Insert here your %social profile Url.', array('%social' => $social)),
    );

    $form['social_media'][$social]['weight'] = array(
      '#type' => 'weight',
      '#title' => t('Weight'),
      '#title_display' => 'invisible',
      '#default_value' => $def[$social]['weight'],
      '#attributes' => array('class' => array('social-links-weight')),
    );
  }

  // Sort the rows.
  uasort($form['social_media'], '_nems_admin_form_weight');

  // Maintain the structure.
  $form['social_media']['#tree'] = TRUE;

  // Theming function.
  $form['#theme'] = 'nems_admin_social';

  // Validate function.
  $form['#validate'][] = '_nems_admin_social_validate';

  // Submit handler.
  $form['#submit'][] = '_nems_admin_social_submit';

  return system_settings_form($form);
}

/**
 * Validate function for the nems admin settings.
 */
function _nems_admin_feedback_validate($form, &$form_state) {
  if (isset($form_state['values']) && isset($form_state['values']['feedback_form_id'])) {
    $value = $form_state['values']['feedback_form_id'];
    if ($value == '' || $value == 'NULL' || !is_numeric($value)) {
      form_error($form['feedback_form_id'], t('%name must be a number.', array('%name' => $form['feedback_form_id']['#title'])));
    }
  }
  elseif (isset($form_state['values']) && isset($form_state['values']['twitter_webtools_config_nbr'])) {
    $value = $form_state['values']['twitter_webtools_config_nbr'];
    if (in_array($value, array('', 'NULL')) || !is_numeric($value)) {
      form_error($form['twitter_webtools_config_nbr'], t('%name must be a number.', array('%name' => $form['twitter_webtools_config_nbr']['#title'])));
    }
  }
}

/**
 * Validation handler for social links.
 */
function _nems_admin_social_validate($form, &$form_state) {
  foreach ($form_state['values']['social_media'] as $key => $value) {
    $social[$key] = $value['platform_value'];
  }

  foreach ($social as $key => $value) {
    if ($value != '') {
      $test[$key] = valid_url($value, TRUE) ? $value : FALSE;
    }
    else {
      $test[$key] = '';
    }
  }

  if ($social !== $test) {
    $diff = array_diff($social, $test);
    if (!empty($diff)) {
      foreach ($diff as $key => $value) {
        $head = strip_tags($form['social_media'][$key]['#markup']);
        form_set_error("social_media][$key][platform_value", t('Check the value you entered for %social, %url is not a valid url.', array('%social' => $head, '%url' => $form_state['values']['social_media'][$key]['platform_value'])));
      }
    }
  }
}

/**
 * Submit handler for social links.
 */
function _nems_admin_social_submit($form, &$form_state) {
  $social = variable_get('social_media_links_platforms', array());

  foreach ($form_state['values']['social_media'] as $key => $value) {
    $social[$key] = $form_state['values']['social_media'][$key];
  }
  variable_set('social_media_links_platforms', $social);
}

/**
 * Helper function to format form values.
 */
function _nems_admin_format_values($items) {
  $old_values = array();
  foreach ($items as $key => $values) {
    $old_values[$key] = array();
    if (!empty($values['children'])) {
      foreach ($values['children'] as $mlid => $item) {
        $old_values[$key]['children'][$item['mlid']] = array(
          'link_title' => $item['link_title'],
          'weight' => $item['weight'],
          'delete' => 'Delete',
          'link_path' => $item['link_path'],
        );
      }
    }
  }
  return $old_values;
}
