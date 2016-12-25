<?php
/**
 * @file
 * actualizacion_2_11_3.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function actualizacion_2_11_3_default_rules_configuration() {
  $items = array();
  $items['rules_actualizar_campo_nombre_de_paciente'] = entity_import('rules_config', '{ "rules_actualizar_campo_nombre_de_paciente" : {
      "LABEL" : "Actualizar campo nombre de paciente",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "TAGS" : [ "System update" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "nodo" : { "label" : "Nodo", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_is_of_bundle" : {
                  "entity" : [ "nodo" ],
                  "type" : "node",
                  "bundle" : { "value" : { "paciente" : "paciente" } }
                }
              }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "nodo:field-nombre" ], "value" : [ "nodo:title" ] } }
            ],
            "LABEL" : "Actualizar campo nombre de paciente rule"
          }
        }
      ]
    }
  }');
  return $items;
}
