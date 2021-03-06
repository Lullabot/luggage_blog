<?php
/**
 * @file
 * luggage_blog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function luggage_blog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'blog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'blog';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'lug_blog' => 'lug_blog',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Blog';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_lug_blog_author']['id'] = 'field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['field'] = 'field_lug_blog_author';
  $handler->display->display_options['fields']['field_lug_blog_author']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_lug_blog_author']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author (field_lug_blog_author) */
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['id'] = 'field_lug_blog_author_target_id';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['field'] = 'field_lug_blog_author_target_id';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['title'] = '%1';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['validate']['type'] = 'blog';
  $handler->display->display_options['path'] = 'blog';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Blog';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Block My Recent Posts */
  $handler = $view->new_display('block', 'Block My Recent Posts', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Blog Posts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Author (field_lug_blog_author) */
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['id'] = 'field_lug_blog_author_target_id';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['table'] = 'field_data_field_lug_blog_author';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['field'] = 'field_lug_blog_author_target_id';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_lug_blog_author_target_id']['summary_options']['items_per_page'] = '25';
  $export['blog'] = $view;

  return $export;
}
