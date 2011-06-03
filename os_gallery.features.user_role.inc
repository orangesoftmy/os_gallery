<?php

/**
 * Implementation of hook_user_default_roles().
 */
function os_gallery_user_default_roles() {
  $roles = array();

  // Exported role: webmaster
  $roles['webmaster'] = array(
    'name' => 'webmaster',
  );

  return $roles;
}
