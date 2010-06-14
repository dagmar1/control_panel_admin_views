<?php

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _control_panel_admin_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer comments as administrator
  $permissions[] = array(
    'name' => 'administer comments as administrator',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer comments as editor
  $permissions[] = array(
    'name' => 'administer comments as editor',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer comments as moderator
  $permissions[] = array(
    'name' => 'administer comments as moderator',
    'roles' => array(
      '0' => 'moderator',
    ),
  );

  // Exported permission: administer content as administrator
  $permissions[] = array(
    'name' => 'administer content as administrator',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer content as editor
  $permissions[] = array(
    'name' => 'administer content as editor',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer content as moderator
  $permissions[] = array(
    'name' => 'administer content as moderator',
    'roles' => array(
      '0' => 'moderator',
    ),
  );

  // Exported permission: administer users as administrator
  $permissions[] = array(
    'name' => 'administer users as administrator',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: administer users as editor
  $permissions[] = array(
    'name' => 'administer users as editor',
    'roles' => array(
      '0' => 'editor',
    ),
  );

  // Exported permission: administer users as moderator
  $permissions[] = array(
    'name' => 'administer users as moderator',
    'roles' => array(
      '0' => 'moderator',
    ),
  );

  return $permissions;
}
