<?php
/**
 * @file
 * crf_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function crf_core_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function crf_core_views_api() {
  $path = drupal_get_path('module', 'crf_core');
  return array(
    "api" => "3.0",
    'path' => $path . '/views',
    'template path' => $path . '/views',
  );
}
