<?php
/**
 * @file
 * perfiles.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function perfiles_default_rules_configuration() {
  $items = array();
  $items['rules_login_destination'] = entity_import('rules_config', '{ "rules_login_destination" : {
      "LABEL" : "Login destination",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "user_has_role" : {
            "account" : [ "account" ],
            "roles" : { "value" : { "4" : "4", "5" : "5" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [ { "redirect" : { "url" : "calendario-de-citas\\/mes" } } ]
    }
  }');
  $items['rules_notificacion_de_nueva_cuenta_de_usuario'] = entity_import('rules_config', '{ "rules_notificacion_de_nueva_cuenta_de_usuario" : {
      "LABEL" : "Notificaci\\u00f3n de nueva cuenta de usuario",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Histomedical" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : [ "site:mail" ],
            "subject" : "Nueva cuenta de usuario creada",
            "message" : "Se a creado una nueva cuenta de usuario con los datos\\r\\nNombre [account:field-nombre] [account:field-apellido]\\r\\nCorreo [account:mail]\\r\\nFecha [account:created]",
            "language" : [ "account:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
