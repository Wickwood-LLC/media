<?php

/**
 * @file
 * The media browser style plugin.
 */

/**
// * Style plugin to render media items as an interactive grid for the media
// * browser.
 *
 * @ingroup views_style_plugins
 */
class media_views_plugin_style_media_browser extends views_plugin_style_list {

  // Stores the files loaded with pre_render.
  var $files = array();

  /**
   * Constructor to provide additional field to add.
   */
  function init(&$view, &$display, $options = NULL) {
    parent::init($view, $display, $options);
    $this->additional_fields['fid'] = 'fid';
  }

  /**
   * Set default options.
   */
  function option_definition() {
    $options = parent::option_definition();

    $options['type'] = array('default' => 'ul');
    $options['class'] = array('default' => 'media-list-thumbnails');
    $options['wrapper_class'] = array('default' => '');

    return $options;
  }

  // Prevents a problem with views when get_row_class() is not set
  function get_row_class($row_index) {
  }

  /**
   * Add the base field (fid) to the query.
   */
  function query() {
    dpm($this);
    $this->view->query->add_field($this->view->base_table, $this->view->base_field);
    return parent::query();
  }

}