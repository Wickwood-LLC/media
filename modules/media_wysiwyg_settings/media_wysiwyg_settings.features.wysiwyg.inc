<?php

/**
 * @file
 * media_wysiwyg_settings.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function media_wysiwyg_settings_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html.
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'JustifyRight' => 1,
          'JustifyBlock' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'TextColor' => 1,
          'BGColor' => 1,
          'Superscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Find' => 1,
          'Replace' => 1,
          'CreateDiv' => 1,
          'Maximize' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'theme' => 'advanced',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 1,
      'acf_allowed_content' => 'img[title,alt,src,data-cke-saved-src](wysiwyg-break,drupal-content);
video[width,height,controls,src,controlslist,data-delta,data-fid,data-media-element](*);
source[src,type,data-cke-saved-src];
audio[controls,src](*);
img[*](media-element,file-default);p[class](*);
h2[class,style](*);
h3[class,style](*);
h4[class,style](*);
h5[class,style](*);
h6[class,style](*);
div[class,style](*);
span[class,style](*);
code[class,style](*);',
      'css_setting' => 'theme',
      'css_theme' => '',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'mobile_disable' => 0,
      'forcePasteAsPlainText' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 0,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'version' => '4.14.0.8a12b04171',
    ),
    'name' => 'formatfiltered_html',
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html.
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'Underline' => 1,
          'Strike' => 1,
          'JustifyLeft' => 1,
          'JustifyCenter' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Outdent' => 1,
          'Indent' => 1,
          'Undo' => 1,
          'Redo' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Anchor' => 1,
          'Image' => 1,
          'BGColor' => 1,
          'Superscript' => 1,
          'Subscript' => 1,
          'Blockquote' => 1,
          'Source' => 1,
          'HorizontalRule' => 1,
          'Cut' => 1,
          'Copy' => 1,
          'Paste' => 1,
          'Font' => 1,
          'FontSize' => 1,
          'Styles' => 1,
          'Table' => 1,
          'Find' => 1,
          'Replace' => 1,
          'CreateDiv' => 1,
          'Iframe' => 1,
          'Maximize' => 1,
        ),
        'drupal' => array(
          'media' => 1,
        ),
      ),
      'theme' => 'advanced',
      'language' => 'en',
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 0,
      'acf_allowed_content' => 'img[title,alt,src,data-cke-saved-src](wysiwyg-break,drupal-content);
video[width,height,controls,src,controlslist,data-delta,data-fid,data-media-element](*);
source[src,type,data-cke-saved-src];
audio[controls,src](*);
img[*](media-element,file-default);p[class](*);
h2[class,style](*);
h3[class,style](*);
h4[class,style](*);
h5[class,style](*);
h6[class,style](*);
div[class,style](*);
span[class,style](*);
code[class,style](*);',
      'css_setting' => 'theme',
      'css_theme' => '',
      'css_path' => '',
      'stylesSet' => '',
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'mobile_disable' => 0,
      'forcePasteAsPlainText' => 0,
      'pasteFromWordPromptCleanup' => 0,
      'pasteFromWordRemoveFontStyles' => 0,
    ),
    'preferences' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'version' => '4.14.0.8a12b04171',
    ),
    'name' => 'formatfull_html',
    'rdf_mapping' => array(),
  );

  return $profiles;
}
