<?php
/**
 * @file
 * consulta_medica.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function consulta_medica_default_rules_configuration() {
  $items = array();
  $items['rules_editar_nodo'] = entity_import('rules_config', '{ "rules_editar_nodo" : {
      "LABEL" : "Editar nodo",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "button_field", "rules" ],
      "ON" : { "button_field_clicked" : [] },
      "IF" : [
        { "button_field_compare_button" : {
            "clicked_field" : [ "field" ],
            "comparison_field_name" : "field_editar"
          }
        },
        { "entity_is_of_type" : { "entity" : [ "entity" ], "type" : "node" } }
      ],
      "DO" : [ { "redirect" : { "url" : [ "entity:edit-url" ] } } ]
    }
  }');
  return $items;
}
