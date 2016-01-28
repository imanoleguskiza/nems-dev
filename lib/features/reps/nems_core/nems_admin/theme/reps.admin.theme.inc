<?php
/**
 * @file
 * Theme functions for the NEMS admin interface.
 */

/**
 * Theme function.
 */
function theme_nems_admin_social($variables) {
  $form = $variables['form'];
  $rows = array();

  foreach (element_children($form['social_media']) as $element) {
    $rows[] = array(
      'data' => array(
        drupal_render($form['social_media'][$element]),
        drupal_render($form['social_media'][$element]['platform_value']),
        drupal_render($form['social_media'][$element]['weight']),
      ),
      'class' => array('draggable'),
    );
  }

  $header = array(t('Social network'), t('url'), t('position'));
  $table_id = 'social-links-order';
  $output = theme('table', array(
    'header' => $header,
    'rows' => $rows,
    'attributes' => array('id' => $table_id),
  ));

  $output .= drupal_render_children($form);

  drupal_add_tabledrag('social-links-order', 'order', 'sibling', 'social-links-weight');

  return $output;
}
