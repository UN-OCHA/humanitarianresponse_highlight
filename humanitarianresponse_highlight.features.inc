<?php
/**
 * @file
 * humanitarianresponse_highlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_highlight_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_highlight_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function humanitarianresponse_highlight_node_info() {
  $items = array(
    'highlight' => array(
      'name' => t('Highlight'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
