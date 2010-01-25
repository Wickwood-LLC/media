<?php
// $Id$

/**
 * @file Contains the variables used by media and their defaults.
 */

/**
 *  Wrapper for variable_get() that uses the Media variable registry.
 *
 *  @param string $name
 *    The variable name to retrieve. Note that it will be namespaced by
 *    pre-pending 'media_', as to avoid variable collisions with other modules.
 *  @param unknown $default
 *    An optional default variable to return if the variable hasn't been set
 *    yet. Note that within this module, all variables should already be set
 *    in the media_variable_default() function.
 *  @return unknown
 *    Returns the stored variable or its default.
 *
 *  @see media_variable_set()
 *  @see media_variable_del()
 *  @see media_variable_default()
 */
function media_variable_get($name, $default = NULL) {
  // Allow for an override of the default.
  // Useful when a variable is required (like $path), but namespacing still desired.
  if (!isset($default)) {
    $default = media_variable_default($name);
  }
  // Namespace all variables
  $variable_name = 'media_' . $name;
  return variable_get($variable_name, $default);
}

/**
 *  Wrapper for variable_set() that uses the Media variable registry.
 *
 *  @param string $name
 *    The variable name to set. Note that it will be namespaced by
 *    pre-pending 'media_', as to avoid variable collisions with other modules.
 *  @param unknown $value
 *    The value for which to set the variable.
 *  @return unknown
 *    Returns the stored variable after setting.
 *
 *  @see media_variable_get()
 *  @see media_variable_del()
 *  @see media_variable_default()
 */
function media_variable_set($name, $value) {
  $variable_name = 'media_' . $name;
  return variable_set($variable_name, $value);
}

/**
 *  Wrapper for variable_del() that uses the Media variable registry.
 *
 *  @param string $name
 *    The variable name to delete. Note that it will be namespaced by
 *    pre-pending 'media_', as to avoid variable collisions with other modules.
 *
 *  @see media_variable_get()
 *  @see media_variable_set()
 *  @see media_variable_default()
 */
function media_variable_del($name) {
  $variable_name = 'media_' . $name;
  variable_del($variable_name);
}

/**
 *  The default variables within the Media namespace.
 *
 *  @param string $name
 *    Optional variable name to retrieve the default. Note that it has not yet
 *    been pre-pended with the 'media_' namespace at this time.
 *  @return unknown
 *    The default value of this variable, if it's been set, or NULL, unless
 *    $name is NULL, in which case we return an array of all default values.
 *
 *  @see media_variable_get()
 *  @see media_variable_set()
 *  @see media_variable_del()
 */
function media_variable_default($name = NULL) {
  static $defaults;

  if (!isset($defaults)) {
    $defaults = array();

    $defaults['wysiwyg_title'] = 'Media Browser';
    $defaults['wysiwyg_icon_title'] = 'Add Media';
    $defaults['wysiwyg_default_view_mode'] = 'media_large';
    // Name of the theme to use in media popup dialogs
    $defaults['dialog_get_theme_name'] = 'seven';
    $defaults['file_extensions'] = '';
    $defaults['max_filesize'] = '';
    $defaults['debug'] = FALSE;

    $defaults['file_list_size'] = 10;

    // The list of media types in the system... Should be a table probably
    $defaults['types'] = array();
    // Used in media.xml.inc
    $defaults['xml_cache_expire'] = 3600;
    // Was in cruft.inc $defaults['media_file_progress_image'] = '';
  }

  if (!isset($name)) {
    return $defaults;
  }

  if (isset($defaults[$name])) {
    return $defaults[$name];
  }
}