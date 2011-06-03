<?php

/**
 * Implementation of hook_content_default_fields().
 */
function os_gallery_content_default_fields() {
  $fields = array();

  // Exported field: field_gallery_image
  $fields['gallery-field_gallery_image'] = array(
    'field_name' => 'field_gallery_image',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'shadowbox_gallery___gallery-thumb___gallery-large',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'shadowbox_gallery___gallery-thumb___gallery-large',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'throbber',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => 'gallery-upload-preview',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_title' => 'imagefield_title',
        'imagefield_alt' => 'imagefield_alt',
        'imagefield_description' => 'imagefield_description',
        'node_title' => 0,
        'node_description' => 0,
        'taxonomy_1' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'label' => 'Images',
      'weight' => '-3',
      'description' => '',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Images');

  return $fields;
}
