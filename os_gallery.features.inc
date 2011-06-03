<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function os_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function os_gallery_imagecache_default_presets() {
  $items = array(
    'gallery-large' => array(
      'presetname' => 'gallery-large',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '550',
            'height' => '550',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'gallery-thumb' => array(
      'presetname' => 'gallery-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_aspect',
          'data' => array(
            'portrait' => 'gallery-thumb-vertical',
            'landscape' => 'gallery-thumb-horizontal',
            'ratio_adjustment' => '1',
          ),
        ),
      ),
    ),
    'gallery-thumb-horizontal' => array(
      'presetname' => 'gallery-thumb-horizontal',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '150',
            'height' => '',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '160',
              'height' => '160',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
    'gallery-thumb-vertical' => array(
      'presetname' => 'gallery-thumb-vertical',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '150',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => '',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '160',
              'height' => '160',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
    'upload-thumb' => array(
      'presetname' => 'upload-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '-10',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '100',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function os_gallery_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('Gallery'),
      'module' => 'features',
      'description' => t('Create your new gallery here'),
      'has_title' => '1',
      'title_label' => t('Gallery Title'),
      'has_body' => '1',
      'body_label' => t('Gallery Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function os_gallery_views_api() {
  return array(
    'api' => '2',
  );
}
