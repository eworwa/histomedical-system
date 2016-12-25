<?php
/**
 * @file
 * consulta_cita_medica_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function consulta_cita_medica_rule_default_rules_configuration() {
  $items = array();
  $items['rules_crear_cita_desde_consulta'] = entity_import('rules_config', '{ "rules_crear_cita_desde_consulta" : {
      "LABEL" : "Crear cita desde consulta",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : {
        "node_insert--consulta" : { "bundle" : "consulta" },
        "node_update--consulta" : { "bundle" : "consulta" }
      },
      "IF" : [
        { "NOT data_is_empty" : { "data" : [ "node:field-fecha-consulta-de-control" ] } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "event_calendar",
              "param_title" : "Titulo auto creado desde el tipo de contenido",
              "param_author" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-paciente" ],
            "value" : [ "node:field-paciente" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:event-calendar-date" ],
            "value" : [ "node:field-fecha-consulta-de-control" ]
          }
        }
      ]
    }
  }');
  return $items;
}
