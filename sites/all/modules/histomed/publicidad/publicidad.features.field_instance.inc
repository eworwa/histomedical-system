<?php
/**
 * @file
 * publicidad.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function publicidad_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-simpleads-field_ad_category'.
  $field_instances['node-simpleads-field_ad_category'] = array(
    'bundle' => 'simpleads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_category',
    'label' => 'Ad Group',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_end_date'.
  $field_instances['node-simpleads-field_ad_end_date'] = array(
    'bundle' => 'simpleads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allowed date formats: now, tomorrow, next week, 10 September 2011, +1 day, +1 week, +1 year, +1 week 2 days 4 hours 2 seconds, next Monday, last Friday, mm/dd/yyyy hh:mm am/pm',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_end_date',
    'label' => 'Fecha Final',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_flash'.
  $field_instances['node-simpleads-field_ad_flash'] = array(
    'bundle' => 'simpleads',
    'deleted' => 0,
    'description' => 'Upload Flash file for this Ad.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'file_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'file',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'file_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_flash',
    'label' => 'Ad Flash',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => FALSE,
      'description_field' => 0,
      'file_directory' => 'field/flash',
      'file_extensions' => 'swf',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_image'.
  $field_instances['node-simpleads-field_ad_image'] = array(
    'bundle' => 'simpleads',
    'deleted' => 0,
    'description' => 'Upload an image for this Ad.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_image',
    'label' => 'Ad Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => TRUE,
      'default_image' => 0,
      'file_directory' => 'field/image',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_start_date'.
  $field_instances['node-simpleads-field_ad_start_date'] = array(
    'bundle' => 'simpleads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Allowed date formats: now, tomorrow, next week, 10 September 2011, +1 day, +1 week, +1 year, +1 week 2 days 4 hours 2 seconds, next Monday, last Friday, mm/dd/yyyy hh:mm am/pm',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_start_date',
    'label' => 'Active Date',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_status'.
  $field_instances['node-simpleads-field_ad_status'] = array(
    'bundle' => 'simpleads',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Please use this field to show or hide ads even if the ad is active and published.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_status',
    'label' => 'Estado',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_text'.
  $field_instances['node-simpleads-field_ad_text'] = array(
    'bundle' => 'simpleads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter your text ad. If you would like to embed media, please configure WYSIWYG editor and input format settings.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_text',
    'label' => 'Text Ad',
    'required' => FALSE,
    'settings' => array(
      'rows' => 5,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_type'.
  $field_instances['node-simpleads-field_ad_type'] = array(
    'bundle' => 'simpleads',
    'default_value' => array(
      0 => array(
        'value' => 'graphic',
      ),
    ),
    'deleted' => 0,
    'description' => 'Please select Ad type.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_type',
    'label' => 'Ad Type',
    'required' => TRUE,
    'settings' => array(
      'allowed_values' => array(
        'graphic' => 'Image Ad',
        'text' => 'Text Ad',
        'flash' => 'Flash Ad',
      ),
      'user_register_form' => FALSE,
    ),
    'user_register_form' => FALSE,
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_url'.
  $field_instances['node-simpleads-field_ad_url'] = array(
    'bundle' => 'simpleads',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_url',
    'label' => 'URL Address',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-simpleads-field_ad_url_taget'.
  $field_instances['node-simpleads-field_ad_url_taget'] = array(
    'bundle' => 'simpleads',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'empty_fields_emptyfieldtext_empty_text' => '',
          'empty_fields_handler' => '',
        ),
        'type' => 'list_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_ad_url_taget',
    'label' => 'Link Target',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'display_label' => 0,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Active Date');
  t('Ad Flash');
  t('Ad Group');
  t('Ad Image');
  t('Ad Type');
  t('Allowed date formats: now, tomorrow, next week, 10 September 2011, +1 day, +1 week, +1 year, +1 week 2 days 4 hours 2 seconds, next Monday, last Friday, mm/dd/yyyy hh:mm am/pm');
  t('Enter your text ad. If you would like to embed media, please configure WYSIWYG editor and input format settings.');
  t('Estado');
  t('Fecha Final');
  t('Link Target');
  t('Please select Ad type.');
  t('Please use this field to show or hide ads even if the ad is active and published.');
  t('Text Ad');
  t('URL Address');
  t('Upload Flash file for this Ad.');
  t('Upload an image for this Ad.');

  return $field_instances;
}
