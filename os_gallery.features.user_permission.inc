<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function os_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: access taxonomy images
  $permissions['access taxonomy images'] = array(
    'name' => 'access taxonomy images',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  // Exported permission: administer taxonomy images
  $permissions['administer taxonomy images'] = array(
    'name' => 'administer taxonomy images',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  // Exported permission: can disable taxonomy images
  $permissions['can disable taxonomy images'] = array(
    'name' => 'can disable taxonomy images',
    'roles' => array(
      '0' => 'webmaster',
    ),
  );

  // Exported permission: create gallery content
  $permissions['create gallery content'] = array(
    'name' => 'create gallery content',
    'roles' => array(),
  );

  // Exported permission: delete any gallery content
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(),
  );

  // Exported permission: edit any gallery content
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(),
  );

  // Exported permission: edit captions
  $permissions['edit captions'] = array(
    'name' => 'edit captions',
    'roles' => array(),
  );

  // Exported permission: mass upload images
  $permissions['mass upload images'] = array(
    'name' => 'mass upload images',
    'roles' => array(),
  );

  return $permissions;
}
