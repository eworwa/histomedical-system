<?php
/**
 * @file
 * comercial.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function comercial_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'cl_billing_cycle'.
  $field_bases['cl_billing_cycle'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cl_billing_cycle',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(),
      'target_type' => 'cl_billing_cycle',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'cl_billing_cycle_type'.
  $field_bases['cl_billing_cycle_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cl_billing_cycle_type',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(),
      'target_type' => 'cl_billing_cycle_type',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'cl_billing_end'.
  $field_bases['cl_billing_end'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cl_billing_end',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'cl_billing_license'.
  $field_bases['cl_billing_license'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cl_billing_license',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(),
      'target_type' => 'commerce_license',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'cl_billing_start'.
  $field_bases['cl_billing_start'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cl_billing_start',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'cl_billing_type'.
  $field_bases['cl_billing_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cl_billing_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'prepaid' => 'Prepaid',
        'postpaid' => 'Postpaid',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'cl_schedule_changes'.
  $field_bases['cl_schedule_changes'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_type' => 'commerce_product',
    'entity_types' => array(),
    'field_name' => 'cl_schedule_changes',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'commerce_license_billing_allowed_schedule_values',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'cle_api_key'.
  $field_bases['cle_api_key'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cle_api_key',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'cle_name'.
  $field_bases['cle_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'cle_name',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'commerce_cardonfile_profile'.
  $field_bases['commerce_cardonfile_profile'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_cardonfile',
    ),
    'field_name' => 'commerce_cardonfile_profile',
    'indexes' => array(
      'profile_id' => array(
        0 => 'profile_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_customer',
    'settings' => array(
      'options_list_limit' => 50,
      'profile_type' => 'billing',
    ),
    'translatable' => 0,
    'type' => 'commerce_customer_profile_reference',
  );

  // Exported field_base: 'commerce_customer_address'.
  $field_bases['commerce_customer_address'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_customer_profile',
    ),
    'field_name' => 'commerce_customer_address',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'addressfield',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'addressfield',
  );

  // Exported field_base: 'commerce_customer_billing'.
  $field_bases['commerce_customer_billing'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
    ),
    'field_name' => 'commerce_customer_billing',
    'indexes' => array(
      'profile_id' => array(
        0 => 'profile_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_customer',
    'settings' => array(
      'options_list_limit' => 50,
      'profile2_private' => FALSE,
      'profile_type' => 'billing',
    ),
    'translatable' => 0,
    'type' => 'commerce_customer_profile_reference',
  );

  // Exported field_base: 'commerce_display_path'.
  $field_bases['commerce_display_path'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_display_path',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 1,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'commerce_license'.
  $field_bases['commerce_license'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'commerce_license',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(),
      'target_type' => 'commerce_license',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'commerce_license_duration'.
  $field_bases['commerce_license_duration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'commerce_license_duration',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'commerce_license_role'.
  $field_bases['commerce_license_role'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'commerce_license_role',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'commerce_license_role_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'commerce_license_type'.
  $field_bases['commerce_license_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'commerce_license_type',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(),
      'allowed_values_function' => 'commerce_license_types_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'commerce_line_items'.
  $field_bases['commerce_line_items'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
    ),
    'field_name' => 'commerce_line_items',
    'indexes' => array(
      'line_item_id' => array(
        0 => 'line_item_id',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_line_item',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'commerce_line_item_reference',
  );

  // Exported field_base: 'commerce_order_total'.
  $field_bases['commerce_order_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_order',
    ),
    'field_name' => 'commerce_order_total',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_price'.
  $field_bases['commerce_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_product',
    ),
    'field_name' => 'commerce_price',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_product'.
  $field_bases['commerce_product'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_product',
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_product_reference',
    'settings' => array(
      'options_list_limit' => NULL,
    ),
    'translatable' => 0,
    'type' => 'commerce_product_reference',
  );

  // Exported field_base: 'commerce_total'.
  $field_bases['commerce_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_total',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'commerce_unit_price'.
  $field_bases['commerce_unit_price'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'commerce_line_item',
    ),
    'field_name' => 'commerce_unit_price',
    'indexes' => array(
      'currency_price' => array(
        0 => 'amount',
        1 => 'currency_code',
      ),
    ),
    'locked' => 1,
    'module' => 'commerce_price',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'commerce_price',
  );

  // Exported field_base: 'field_licencias'.
  $field_bases['field_licencias'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_licencias',
    'indexes' => array(
      'product_id' => array(
        0 => 'product_id',
      ),
    ),
    'locked' => 0,
    'module' => 'commerce_product_reference',
    'settings' => array(
      'options_list_limit' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'commerce_product_reference',
  );

  // Exported field_base: 'field_pais'.
  $field_bases['field_pais'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_pais',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'AF' => 'Afganistán',
        'AL' => 'Albania',
        'DE' => 'Alemania',
        'AD' => 'Andorra',
        'AO' => 'Angola',
        'AI' => 'Anguila',
        'AG' => 'Antigua y Barbuda',
        'AN' => 'Antillas Holandesas',
        'AQ' => 'Antártida',
        'SA' => 'Arabia Saudí',
        'DZ' => 'Argelia',
        'AR' => 'Argentina',
        'AM' => 'Armenia',
        'AW' => 'Aruba',
        'AU' => 'Australia',
        'AT' => 'Austria',
        'AZ' => 'Azerbaiyán',
        'BS' => 'Bahamas',
        'BH' => 'Bahrein',
        'BD' => 'Bangladesh',
        'BB' => 'Barbados',
        'BZ' => 'Belice',
        'BJ' => 'Benin',
        'BM' => 'Bermudas',
        'BY' => 'Bielorrusia',
        'BO' => 'Bolivia',
        'BA' => 'Bosnia Herzegovina',
        'BW' => 'Botsuana',
        'BR' => 'Brasil',
        'BN' => 'Brunei',
        'BG' => 'Bulgaria',
        'BF' => 'Burkina Faso',
        'BI' => 'Burundi',
        'BT' => 'Bután',
        'BE' => 'Bélgica',
        'CV' => 'Cabo Verde',
        'KH' => 'Camboya',
        'CM' => 'Camerún',
        'CA' => 'Canadá',
        'TD' => 'Chad',
        'CL' => 'Chile',
        'CN' => 'China',
        'CY' => 'Chipre',
        'CO' => 'Colombia',
        'KM' => 'Comoras',
        'CG' => 'Congo (Brazzaville)',
        'CD' => 'Congo (Kinshasa)',
        'KP' => 'Corea del Norte',
        'KR' => 'Corea del Sur',
        'CI' => 'Costa de Marfil',
        'CR' => 'Costa Rica',
        'HR' => 'Croacia',
        'CU' => 'Cuba',
        'CW' => 'Curazao',
        'DK' => 'Dinamarca',
        'DM' => 'Dominica',
        'EC' => 'Ecuador',
        'EG' => 'Egipto',
        'LB' => 'El Líbano',
        'SV' => 'El Salvador',
        'VA' => 'El Vaticano',
        'AE' => 'Emiratos Árabes Unidos',
        'ER' => 'Eritrea',
        'SK' => 'Eslovaquia',
        'SI' => 'Eslovenia',
        'ES' => 'España',
        'US' => 'Estados Unidos',
        'EE' => 'Estonia',
        'ET' => 'Etiopía',
        'PH' => 'Filipinas',
        'FI' => 'Finlandia',
        'FJ' => 'Fiyi',
        'FR' => 'Francia',
        'GA' => 'Gabón',
        'GM' => 'Gambia',
        'GE' => 'Georgia',
        'GH' => 'Ghana',
        'GI' => 'Gibraltar',
        'GD' => 'Granada',
        'GR' => 'Grecia',
        'GL' => 'Groenlandia',
        'GP' => 'Guadalupe',
        'GU' => 'Guam',
        'GT' => 'Guatemala',
        'GY' => 'Guayana',
        'GF' => 'Guayana Francesa',
        'GG' => 'Guernsey',
        'GN' => 'Guinea',
        'GW' => 'Guinea-Bissau',
        'GQ' => 'Guinea Ecuatorial',
        'HT' => 'Haití',
        'HN' => 'Honduras',
        'HU' => 'Hungría',
        'ID' => 'Indonesia',
        'IQ' => 'Irak',
        'IE' => 'Irlanda',
        'IR' => 'Irán',
        'BV' => 'Isla Bouvet',
        'IM' => 'Isla de Man',
        'CX' => 'Isla de Navidad',
        'NF' => 'Isla de Norfolk',
        'IS' => 'Islandia',
        'AX' => 'Islas Aland',
        'KY' => 'Islas Caimán',
        'CC' => 'Islas Cocos',
        'CK' => 'Islas Cook',
        'FO' => 'Islas Feroe',
        'GS' => 'Islas Georgias del Sur y Sandwich del Sur',
        'HM' => 'Islas Heard y McDonald',
        'FK' => 'Islas Malvinas/Falkland',
        'MP' => 'Islas Marianas del Norte',
        'MH' => 'Islas Marshall',
        'SB' => 'Islas Salomón',
        'TC' => 'Islas Turcas y Caicos',
        'UM' => 'Islas Ultramarinas de Estados Unidos',
        'VG' => 'Islas Vírgenes Británicas',
        'VI' => 'Islas Vírgenes de los Estados Unidos',
        'IL' => 'Israel',
        'IT' => 'Italia',
        'JM' => 'Jamaica',
        'JP' => 'Japón',
        'JE' => 'Jersey',
        'JO' => 'Jordania',
        'KZ' => 'Kazajastán',
        'KE' => 'Kenia',
        'KG' => 'Kirguistán',
        'KI' => 'Kiribati',
        'KW' => 'Kuwait',
        'IN' => 'La India',
        'MQ' => 'La Martinica',
        'LA' => 'Laos',
        'LS' => 'Lesotho',
        'LV' => 'Letonia',
        'LR' => 'Liberia',
        'LY' => 'Libia',
        'LI' => 'Liechtenstein',
        'LT' => 'Lituania',
        'LU' => 'Luxemburgo',
        'MK' => 'Macedonia',
        'MG' => 'Madagascar',
        'MY' => 'Malasia',
        'MW' => 'Malaui',
        'MV' => 'Maldivas',
        'ML' => 'Mali',
        'MT' => 'Malta',
        'MA' => 'Marruecos',
        'MU' => 'Mauricio',
        'MR' => 'Mauritania',
        'YT' => 'Mayotte',
        'FM' => 'Micronesia',
        'MD' => 'Moldavia',
        'MN' => 'Mongolia',
        'ME' => 'Montenegro',
        'MS' => 'Montserrat',
        'MZ' => 'Mozambique',
        'MM' => 'Myanmar',
        'MX' => 'México',
        'MC' => 'Mónaco',
        'NA' => 'Namibia',
        'NR' => 'Nauru',
        'NP' => 'Nepal',
        'NI' => 'Nicaragua',
        'NG' => 'Nigeria',
        'NU' => 'Niue',
        'NO' => 'Noruega',
        'NC' => 'Nueva Caledonia',
        'NZ' => 'Nueva Zelanda',
        'NE' => 'Níger',
        'OM' => 'Omán',
        'PK' => 'Pakistán',
        'PW' => 'Palau',
        'PA' => 'Panamá',
        'PG' => 'Papúa Nueva Guinea',
        'PY' => 'Paraguay',
        'NL' => 'Países Bajos',
        'PE' => 'Perú',
        'PN' => 'Pitcairn',
        'PF' => 'Polinesia Francesa',
        'PL' => 'Polonia',
        'PT' => 'Portugal',
        'PR' => 'Puerto Rico',
        'QA' => 'Qatar',
        'HK' => 'R.A.E. de Hong Kong, China',
        'MO' => 'R.A.E. de Macao, China',
        'GB' => 'Reino Unido',
        'CF' => 'República Centroafricana',
        'CZ' => 'República Checa',
        'DO' => 'República Dominicana',
        'RE' => 'Reunión',
        'RW' => 'Ruanda',
        'RO' => 'Rumanía',
        'RU' => 'Rusia',
        'WS' => 'Samoa',
        'AS' => 'Samoa americana',
        'BL' => 'San Bartolomé',
        'KN' => 'San Cristóbal y Nieves',
        'SM' => 'San Marino',
        'MF' => 'San Martín (parte francesa)',
        'PM' => 'San Pedro y Miguelón',
        'SH' => 'Santa Helena',
        'LC' => 'Santa Lucía',
        'ST' => 'Santo Tomé y Príncipe',
        'VC' => 'San Vicente y las Granadinas',
        'SN' => 'Senegal',
        'RS' => 'Serbia',
        'SC' => 'Seychelles',
        'SL' => 'Sierra Leona',
        'SG' => 'Singapur',
        'SY' => 'Siria',
        'SO' => 'Somalia',
        'LK' => 'Sri Lanka',
        'SZ' => 'Suazilandia',
        'SD' => 'Sudán',
        'SE' => 'Suecia',
        'CH' => 'Suiza',
        'SR' => 'Surinam',
        'ZA' => 'Suráfrica',
        'SJ' => 'Svalbard y Jan Mayen',
        'EH' => 'Sáhara Occidental',
        'TH' => 'Tailandia',
        'TW' => 'Taiwán',
        'TZ' => 'Tanzania',
        'TJ' => 'Tayikistán',
        'IO' => 'Territorio Británico del Océano Índico',
        'PS' => 'Territorio Palestino',
        'TF' => 'Tierras Australes y Antárticas Francesas',
        'TL' => 'Timor-Leste',
        'TG' => 'Togo',
        'TK' => 'Tokelau',
        'TO' => 'Tonga',
        'TT' => 'Trinidad y Tobago',
        'TM' => 'Turkmenistán',
        'TR' => 'Turquía',
        'TV' => 'Tuvalu',
        'TN' => 'Túnez',
        'UA' => 'Ucrania',
        'UG' => 'Uganda',
        'UY' => 'Uruguay',
        'UZ' => 'Uzbekistán',
        'VU' => 'Vanuatu',
        'VE' => 'Venezuela',
        'VN' => 'Vietnam',
        'WF' => 'Wallis y Futuna',
        'YE' => 'Yemen',
        'DJ' => 'Yibuti',
        'ZM' => 'Zambia',
        'ZW' => 'Zimbabue',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'num_renewals'.
  $field_bases['num_renewals'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'num_renewals',
    'indexes' => array(),
    'locked' => 1,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'pce_async'.
  $field_bases['pce_async'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'pce_async',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Synchronous',
        1 => 'Asynchronous',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'pce_period'.
  $field_bases['pce_period'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'pce_period',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'hour' => 'Hour',
        'day' => 'Day',
        'week' => 'Week',
        'month' => 'Month',
        'quarter' => 'Quarter',
        'half-year' => 'Half-year',
        'year' => 'Year',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'sync_status'.
  $field_bases['sync_status'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'sync_status',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 1,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'N/D',
        1 => 'Needs synchronization',
        2 => 'Synchronized',
        3 => 'Synchronization failed',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
