<?php
/**
 * @file
 * humanitarianresponse_highlight.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function humanitarianresponse_highlight_default_fe_block_settings() {
  $export = array();

  // bartik
  $theme = array();

  $theme['views-highlight-block_1'] = array(
    'cache' => -1,
    'module' => 'views',
    'delta' => 'highlight-block_1',
    'theme' => 'bartik',
    'pages' => '',
    'weight' => 0,
    'status' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'title' => '',
  );

  $theme['views-highlight-block_2'] = array(
    'cache' => -1,
    'module' => 'views',
    'delta' => 'highlight-block_2',
    'theme' => 'bartik',
    'pages' => '',
    'weight' => 0,
    'status' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'title' => '',
  );

  $theme['views-highlight-block_3'] = array(
    'cache' => -1,
    'module' => 'views',
    'delta' => 'highlight-block_3',
    'theme' => 'bartik',
    'pages' => '',
    'weight' => 0,
    'status' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'title' => '',
  );

  $export['bartik'] = $theme;

  // humanitarianresponse
  $theme = array();

  $theme['views-highlight-block_1'] = array(
    'cache' => -1,
    'module' => 'views',
    'delta' => 'highlight-block_1',
    'theme' => 'humanitarianresponse',
    'pages' => '',
    'weight' => 0,
    'status' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'title' => '',
  );

  $theme['views-highlight-block_2'] = array(
    'cache' => -1,
    'module' => 'views',
    'delta' => 'highlight-block_2',
    'theme' => 'humanitarianresponse',
    'pages' => '',
    'weight' => 0,
    'status' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'title' => '',
  );

  $theme['views-highlight-block_3'] = array(
    'cache' => -1,
    'module' => 'views',
    'delta' => 'highlight-block_3',
    'theme' => 'humanitarianresponse',
    'pages' => '',
    'weight' => 0,
    'status' => 0,
    'region' => '',
    'custom' => 0,
    'visibility' => 0,
    'title' => '',
  );

  $export['humanitarianresponse'] = $theme;

  // seven
  $theme = array();

  $theme['views-highlight-block_1'] = array(
    'module' => 'views',
    'delta' => 'highlight-block_1',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-highlight-block_2'] = array(
    'module' => 'views',
    'delta' => 'highlight-block_2',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $theme['views-highlight-block_3'] = array(
    'module' => 'views',
    'delta' => 'highlight-block_3',
    'theme' => 'seven',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
  );

  $export['seven'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
