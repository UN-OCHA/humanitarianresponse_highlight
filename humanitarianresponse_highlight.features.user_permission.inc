<?php
/**
 * @file
 * humanitarianresponse_highlight.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_highlight_user_default_permissions() {
  $permissions = array();

  // Exported permission: create highlight content.
  $permissions['create highlight content'] = array(
    'name' => 'create highlight content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own highlight content.
  $permissions['delete own highlight content'] = array(
    'name' => 'delete own highlight content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own highlight content.
  $permissions['edit own highlight content'] = array(
    'name' => 'edit own highlight content',
    'roles' => array(
      0 => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
