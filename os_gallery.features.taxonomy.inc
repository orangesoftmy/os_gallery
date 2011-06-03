<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function os_gallery_taxonomy_default_vocabularies() {
  return array(
    'gallery' => array(
      'name' => 'Gallery Category',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '1',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_gallery',
      'weight' => '0',
      'nodes' => array(
        'gallery' => 'gallery',
      ),
    ),
  );
}
