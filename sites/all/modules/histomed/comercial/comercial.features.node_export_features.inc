<?php
/**
 * @file
 * comercial.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function comercial_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'277\',
      \'uid\' => \'1\',
      \'title\' => \'Licencia Mensual\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'c1903603-beb3-4613-b849-cfe7b7952d55\',
      \'ds_switch\' => \'\',
      \'nid\' => \'277\',
      \'type\' => \'licencia_display\',
      \'language\' => \'es\',
      \'created\' => \'1435006736\',
      \'changed\' => \'1435157931\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'5240ef49-2f4f-4223-aa61-0446f6a19d6d\',
      \'revision_timestamp\' => \'1435157931\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Con cargo mensual renovable automáticamente\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Con cargo mensual renovable automáticamente</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_licencias\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'1\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:0;s:7:"overlay";i:1;s:65:"commerce_paymill_client_id:commerce_payment_commerce_paymill:test";s:27:"client_6e77ff6334581a5154ee";}\',
      \'path\' => array(
        \'pid\' => \'28962\',
        \'source\' => \'node/277\',
        \'alias\' => \'content/licencia-mensual\',
        \'language\' => \'es\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'278\',
      \'uid\' => \'1\',
      \'title\' => \'Licencia Anual\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'0\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'76f47372-c876-49b1-8102-ad965483c0f0\',
      \'ds_switch\' => \'\',
      \'nid\' => \'278\',
      \'type\' => \'licencia_display\',
      \'language\' => \'es\',
      \'created\' => \'1435008227\',
      \'changed\' => \'1435157916\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'9ae546fa-8bb4-42b3-971b-7421f84a4e22\',
      \'revision_timestamp\' => \'1435157916\',
      \'revision_uid\' => \'1\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Ahorras un mes de uso\',
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ahorras un mes de uso</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'field_licencias\' => array(
        \'und\' => array(
          array(
            \'product_id\' => \'2\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'a:3:{s:7:"contact";i:0;s:7:"overlay";i:1;s:65:"commerce_paymill_client_id:commerce_payment_commerce_paymill:test";s:27:"client_6e77ff6334581a5154ee";}\',
      \'path\' => array(
        \'pid\' => \'28963\',
        \'source\' => \'node/278\',
        \'alias\' => \'content/licencia-anual\',
        \'language\' => \'es\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
