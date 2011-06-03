<?php

/**
 * Implementation of hook_strongarm().
 */
function os_gallery_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_gallery';
  $strongarm->value = 0;

  $export['comment_anonymous_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_gallery';
  $strongarm->value = '3';

  $export['comment_controls_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_gallery';
  $strongarm->value = '4';

  $export['comment_default_mode_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_gallery';
  $strongarm->value = '1';

  $export['comment_default_order_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_gallery';
  $strongarm->value = '50';

  $export['comment_default_per_page_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_gallery';
  $strongarm->value = '0';

  $export['comment_form_location_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_gallery';
  $strongarm->value = '0';

  $export['comment_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_gallery';
  $strongarm->value = '1';

  $export['comment_preview_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_gallery';
  $strongarm->value = '1';

  $export['comment_subject_field_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_gallery';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-3',
    'revision_information' => '1',
    'author' => '0',
    'options' => '2',
    'comment_settings' => '3',
    'menu' => '-1',
    'taxonomy' => '-4',
  );

  $export['content_extra_weights_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-1';
  $strongarm->value = array(
    'config_id' => 'taxonomy-1',
    'save_lineage' => 0,
    'enforce_deepest' => 0,
    'entity_count' => 0,
    'require_entity' => 0,
    'resizable' => 0,
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
        1 => '',
        2 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'Selected Categories',
      'limit' => 0,
      'reset_hs' => 1,
    ),
    'editability' => array(
      'status' => 1,
      'item_types' => array(
        0 => '',
        1 => '',
        2 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
        1 => 1,
        2 => 1,
      ),
      'allow_new_levels' => 1,
      'max_levels' => 3,
    ),
  );

  $export['hs_config_taxonomy-1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_gallery';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_gallery'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shadowbox_title_text_gallery_field_gallery_image';
  $strongarm->value = '0';

  $export['shadowbox_title_text_gallery_field_gallery_image'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_hierarchical_select_1';
  $strongarm->value = 1;

  $export['taxonomy_hierarchical_select_1'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_image_imagecache_preset';
  $strongarm->value = 'gallery-thumb';

  $export['taxonomy_image_imagecache_preset'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_override_selector';
  $strongarm->value = TRUE;

  $export['taxonomy_override_selector'] = $strongarm;
  return $export;
}
