<?php
/**
 * @file
 * avisos_legales.box.inc
 */

/**
 * Implements hook_default_box().
 */
function avisos_legales_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'positive_ssl';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Logo de certificado de seguridad Positive SSL';
  $box->options = array(
    'body' => array(
      'value' => '<p><a href="https://www.positivessl.com" style="font-family: arial; font-size: 10px; color: #212121; text-decoration: none;"><img alt="SSL Certificate" border="0" src="https://www.positivessl.com/images-new/PositiveSSL_tl_trans2.png" title="SSL Certificate"></a></p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['positive_ssl'] = $box;

  return $export;
}
