<?php
/**
 * @file
 * nems_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function nems_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'nems_sliders';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'NEMS Sliders';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'slider-homepage';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'nems_homepage_flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_homepage_image']['id'] = 'field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['table'] = 'field_data_field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['field'] = 'field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_homepage_image']['settings'] = array(
    'image_style' => 'slider_homepage__342_x_272_',
    'image_link' => '',
  );
  /* Field: Content: External Url */
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['id'] = 'field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['table'] = 'field_data_field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['field'] = 'field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['type'] = 'link_absolute';
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_nems_homepage_external_url]';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'nems_slide_footer' => 'nems_slide_footer',
    'nems_slide_homepage' => 'nems_slide_homepage',
  );

  /* Display: Slider Homepage */
  $handler = $view->new_display('block', 'Slider Homepage', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Small image */
  $handler->display->display_options['fields']['field_nems_homepage_image']['id'] = 'field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['table'] = 'field_data_field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['field'] = 'field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['ui_name'] = 'Small image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_homepage_image']['settings'] = array(
    'image_style' => 'slider_homepage__342_x_272_',
    'image_link' => '',
  );
  /* Field: Large image */
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['id'] = 'field_nems_homepage_image_1';
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['table'] = 'field_data_field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['field'] = 'field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['ui_name'] = 'Large image';
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_homepage_image_1']['settings'] = array(
    'image_style' => 'slide_homepage_large__719x265_',
    'image_link' => '',
  );
  /* Field: Content: External Url */
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['id'] = 'field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['table'] = 'field_data_field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['field'] = 'field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['type'] = 'link_absolute';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_nems_homepage_date']['id'] = 'field_nems_homepage_date';
  $handler->display->display_options['fields']['field_nems_homepage_date']['table'] = 'field_data_field_nems_homepage_date';
  $handler->display->display_options['fields']['field_nems_homepage_date']['field'] = 'field_nems_homepage_date';
  $handler->display->display_options['fields']['field_nems_homepage_date']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_homepage_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Entity translation: Title: translated */
  $handler->display->display_options['fields']['title_field_et']['id'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field_et']['field'] = 'title_field_et';
  $handler->display->display_options['fields']['title_field_et']['label'] = '';
  $handler->display->display_options['fields']['title_field_et']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_field_et']['alter']['path'] = '[field_nems_homepage_external_url]';
  $handler->display->display_options['fields']['title_field_et']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="sliderImgSmall">[field_nems_homepage_image]
<div class="sliderContent">
<p class="sliderTitle"><a href="[field_nems_homepage_external_url]" target="_blank">[title_field_et]</a></p>
[body]
</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['empty'] = '<div class="sliderImgLarge">[field_nems_homepage_image_1]
<div class="content">
<p class="sliderDate">[field_nems_homepage_date]</p>
<p class="sliderTitle"><a href="[field_nems_homepage_external_url]" target="_blank">[title_field_et]</a></p>
</div>
</div>';
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'nems_slide_homepage' => 'nems_slide_homepage',
  );

  /* Display: Slider Footer */
  $handler = $view->new_display('block', 'Slider Footer', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'nems_footer_flexslider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: External Url */
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['id'] = 'field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['table'] = 'field_data_field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['field'] = 'field_nems_homepage_external_url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_nems_homepage_external_url']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_nems_homepage_image']['id'] = 'field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['table'] = 'field_data_field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['field'] = 'field_nems_homepage_image';
  $handler->display->display_options['fields']['field_nems_homepage_image']['label'] = '';
  $handler->display->display_options['fields']['field_nems_homepage_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_nems_homepage_image']['alter']['text'] = '<a href="[field_nems_homepage_external_url]">[field_nems_homepage_image]</a>';
  $handler->display->display_options['fields']['field_nems_homepage_image']['alter']['path'] = '[field_nems_homepage_external_url]';
  $handler->display->display_options['fields']['field_nems_homepage_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nems_homepage_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_nems_homepage_image']['settings'] = array(
    'image_style' => 'slider_footer__150x83_',
    'image_link' => '',
  );
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
    'nems_slide_footer' => 'nems_slide_footer',
  );
  $export['nems_sliders'] = $view;

  return $export;
}
