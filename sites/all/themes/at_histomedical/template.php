<?php

// AT Histomedical
function at_histomedical_preprocess(&$vars) {
  if (!array_key_exists('adaptivetheme', list_themes())) {
    drupal_set_message(t('Error! <a href="!link">AT Core</a> base theme not found. Please install and enable Adaptivetheme Core.', array('!link' => 'http://drupal.org/project/adaptivetheme')), 'error', false);
  }
}

/**
 * Override or insert variables into the html template.
 */
function at_histomedical_preprocess_html(&$vars) {

  global $theme_key;

  $theme_name = 'at_histomedical';
  $path_to_theme = drupal_get_path('theme', $theme_name);

  // Add a class for the active color scheme
  if (module_exists('color')) {
    $class = check_plain(get_color_scheme_name($theme_key));
    $vars['classes_array'][] = 'color-scheme-' . drupal_html_class($class);
  }

  // Add class for the active theme
  $vars['classes_array'][] = drupal_html_class($theme_key);

  // Add browser and platform classes
  $vars['classes_array'][] = css_browser_selector();

  // Add theme settings classes
  $settings_array = array(
    'body_background',
    'header_layout',
    'menu_bullets',
    'main_menu_alignment',
    'corner_radius_form_input_text',
    'corner_radius_form_input_submit',
  );
  foreach ($settings_array as $setting) {
    $vars['classes_array'][] = at_get_setting($setting);
  }

  // Special case for PIE htc rounded corners, not all themes include this
  if (at_get_setting('ie_corners') == 1) {
    drupal_add_css($path_to_theme . '/css/ie-htc.css', array(
      'group' => CSS_THEME,
      'browsers' => array(
        'IE' => 'lte IE 8',
        '!IE' => FALSE,
        ),
      'preprocess' => FALSE,
      )
    );
  }

  // Custom settings for AT Histomedical
  // Content displays
  $show_frontpage_grid = at_get_setting('content_display_grids_frontpage') == 1 ? TRUE : FALSE;
  $show_taxopage_grid = at_get_setting('content_display_grids_taxonomy_pages') == 1 ? TRUE : FALSE;
  if ($show_frontpage_grid == TRUE || $show_taxopage_grid == TRUE) {drupal_add_js($path_to_theme . '/scripts/equalheights.js');}
  if ($show_frontpage_grid == TRUE) {
    $cols_fpg = at_get_setting('content_display_grids_frontpage_colcount');
    $vars['classes_array'][] = $cols_fpg;
    drupal_add_js($path_to_theme . '/scripts/eq.fp.grid.js');
  }
  if ($show_taxopage_grid == TRUE) {
    $cols_tpg = at_get_setting('content_display_grids_taxonomy_pages_colcount');
    $vars['classes_array'][] = $cols_tpg;
    drupal_add_js($path_to_theme . '/scripts/eq.tp.grid.js');
  }

  // Do stuff for the slideshow
  if (at_get_setting('show_slideshow') == 1) {
    // Add some js and css
    drupal_add_css($path_to_theme . '/css/styles.slideshow.css', array(
      'preprocess' => TRUE,
      'group' => CSS_THEME,
      'media' => 'screen',
      'every_page' => TRUE,
      )
    );
    drupal_add_js($path_to_theme . '/scripts/jquery.flexslider-min.js');
    drupal_add_js($path_to_theme . '/scripts/slider.options.js');

    // Add some classes to do evil hiding of elements with CSS...
    if (at_get_setting('show_slideshow_navigation_controls') == 0) {
      $vars['classes_array'][] = 'hide-ss-nav';
    }
    if (at_get_setting('show_slideshow_direction_controls') == 0) {
      $vars['classes_array'][] = 'hide-ss-dir';
    }

    // Write some evil inline CSS in the head, oh er..
    $slideshow_width = check_plain(at_get_setting('slideshow_width'));
    $slideshow_css = '.flexible-slideshow,.flexible-slideshow .article-inner,.flexible-slideshow .article-content,.flexslider {max-width: ' .  $slideshow_width . 'px;}';
    drupal_add_css($slideshow_css, array(
      'group' => CSS_DEFAULT,
      'type' => 'inline',
      )
    );
  }

  // Draw stuff
  drupal_add_js($path_to_theme . '/scripts/draw.js');

  //add libraries font_awesome and jquery-uid
  if ($librarie = libraries_load('font_awesome')) {
    $path = libraries_get_path('font_awesome');
    drupal_add_css($path . '/' . $librarie['files']['css']['font']);
  }
}

/**
 * Override or insert variables into the html template.
 */
function at_histomedical_process_html(&$vars) {
  // Hook the color module
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}

/**
 * Override or insert variables into the page template.
 */
function at_histomedical_process_page(&$vars) {

  // Hook the color module
  if (module_exists('color')) {
    _color_page_alter($vars);
  }

  // We some extra classes to support the fancy branding layouts
  $branding_classes = array();
  $branding_classes[] = $vars['site_logo'] ? 'with-logo' : 'no-logo';
  $branding_classes[] = !$vars['hide_site_name'] ? 'with-site-name' : 'site-name-hidden';
  $branding_classes[] = $vars['site_slogan'] ? 'with-site-slogan' : 'no-slogan';
  $vars['branding_classes'] = implode(' ', $branding_classes);

  // Draw toggle text
  $toggle_text = at_get_setting('toggle_text') ? at_get_setting('toggle_text') : t('More info');
  $vars['draw_link'] = '<a class="draw-toggle" href="#">' . check_plain($toggle_text) . '</a>';
}

/**
 * Override or insert variables into the node template.
 */
function at_histomedical_preprocess_node(&$vars) {

  // Remove the inline class
  $vars['content']['links']['#attributes']['class'] = 'links';

  // Clearfix node content wrapper
  $vars['content_attributes_array']['class'][] = 'clearfix';

  // Add class if user picture exists
  if ($vars['user_picture']) {
    $vars['header_attributes_array']['class'][] = 'with-picture';
  }

  // Add classes for the slideshow node type
  if (at_get_setting('show_slideshow') == 1) {
    if ($vars['node']->type == 'slideshow') {
      $vars['classes_array'][] = 'flexible-slideshow';
      if (at_get_setting('hide_slideshow_node_title') == 1) {
        $vars['title_attributes_array']['class'][] = 'element-invisible';
      }
    }
  }

  // Content grids - nuke links off teasers if in a content_display
  if ($vars['view_mode'] == 'teaser') {
    $show_frontpage_grid = at_get_setting('content_display_grids_frontpage') == 1 ? TRUE : FALSE;
    $show_taxopage_grid = at_get_setting('content_display_grids_taxonomy_pages') == 1 ? TRUE : FALSE;
    if ($show_frontpage_grid == TRUE || $show_taxopage_grid == TRUE) {
      unset($vars['content']['links']);
    }
  }
}

/**
 * Override or insert variables into the comment template.
 */
function at_histomedical_preprocess_comment(&$vars) {

  // Remove the inline class
  $vars['content']['links']['#attributes']['class'] = 'links';

  // Picture classes for the header
  if ($vars['picture']) {
    $vars['header_attributes_array']['class'][] = 'with-picture';
  }
}

/**
 * Override or insert variables into the block template
 */
function at_histomedical_preprocess_block(&$vars) {
  if ($vars['block']->module == 'superfish' || $vars['block']->module == 'nice_menu') {
    $vars['content_attributes_array']['class'][] = 'clearfix';
  }
  if (!$vars['block']->subject) {
    $vars['content_attributes_array']['class'][] = 'no-title';
  }
  if ($vars['block']->region == 'menu_bar' || $vars['block']->region == 'menu_bar_top') {
    $vars['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Override or insert variables into the field template.
 */
function at_histomedical_preprocess_field(&$vars) {
  // Vars and settings for the slideshow, we theme this directly in the field template
  $vars['show_slideshow_caption'] = FALSE;
  if (at_get_setting('show_slideshow_caption') == TRUE) {
   $vars['show_slideshow_caption'] = TRUE;
  }
}

/**
 * Returns HTML for a fieldset.
 */
function at_histomedical_fieldset($vars) {

  $element = $vars['element'];
  element_set_attributes($element, array('id'));
  _form_set_class($element, array('form-wrapper'));

  $output = '<fieldset' . drupal_attributes($element['#attributes']) . '>';

  // add a class to the fieldset wrapper if a legend exists, in some instances they do not
  $class = "without-legend";

  if (!empty($element['#title'])) {

    // Always wrap fieldset legends in a SPAN for CSS positioning.
    $output .= '<legend><span class="fieldset-legend">' . $element['#title'] . '</span></legend>';

    // Add a class to the fieldset wrapper if a legend exists, in some instances they do not
    $class = 'with-legend';
  }

  $output .= '<div class="fieldset-wrapper ' . $class  . '">';

  if (!empty($element['#description'])) {
    $output .= '<div class="fieldset-description">' . $element['#description'] . '</div>';
  }

  $output .= $element['#children'];

  if (isset($element['#value'])) {
    $output .= $element['#value'];
  }

  $output .= '</div>';
  $output .= "</fieldset>\n";

  return $output;
}

/**
 * Implements hook_libraries_info().
 */
function at_histomedical_libraries_info() {
  $libraries = array();
  $libraries['font_awesome'] = array(
    'name' => 'Font Awesome',
    'download url' => 'https://github.com/FortAwesome/Font-Awesome/archive/master.zip',
      'files' => array(
        'css' => array(
        'font' =>  'css/font-awesome.css',
      ),
    ),
  );
  return $libraries;
}
