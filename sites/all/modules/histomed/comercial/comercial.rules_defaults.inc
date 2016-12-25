<?php
/**
 * @file
 * comercial.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function comercial_default_rules_configuration() {
  $items = array();
  $items['commerce_tax_rate_iva'] = entity_import('rules_config', '{ "commerce_tax_rate_iva" : {
      "LABEL" : "Calcular IVA",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Tax", "vat" ],
      "REQUIRES" : [ "commerce_tax" ],
      "USES VARIABLES" : { "commerce_line_item" : { "label" : "L\\u00ednea de pedido", "type" : "commerce_line_item" } },
      "DO" : [
        { "commerce_tax_rate_apply" : {
            "USING" : {
              "commerce_line_item" : [ "commerce-line-item" ],
              "tax_rate_name" : "iva"
            },
            "PROVIDE" : { "applied_tax" : { "applied_tax" : "Applied tax" } }
          }
        }
      ]
    }
  }');
  $items['rules_add_to_cart_redirect_to_checkout'] = entity_import('rules_config', '{ "rules_add_to_cart_redirect_to_checkout" : {
      "LABEL" : "Add to cart redirect to checkout",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [
        { "redirect" : { "url" : "checkout" } },
        { "mail" : {
            "to" : "eworwa@wycsolutions.com, ycolucci@wycsolutions.com",
            "subject" : "Se ha agregado una licencia al carrito de compras",
            "message" : "Este mensaje es para notificar que un usuario de [site:name] ha agregado una licencia a su carrito de compras.\\r\\n\\r\\nEsto no significa que el usuario haya tratado de comprar una licencia, s\\u00f3lo que mostr\\u00f3 la intenci\\u00f3n de.",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_aviso_de_licencia_suspendida'] = entity_import('rules_config', '{ "rules_aviso_de_licencia_suspendida" : {
      "LABEL" : "Aviso de licencia suspendida",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "commerce", "rules", "rules_conditional" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "entity_exists" : {
            "type" : "commerce_license",
            "property" : "owner",
            "value" : [ "account" ]
          }
        }
      ],
      "DO" : [
        { "entity_query" : {
            "USING" : {
              "type" : "commerce_license",
              "property" : "owner",
              "value" : [ "account" ],
              "limit" : "1"
            },
            "PROVIDE" : { "entity_fetched" : { "licencia_de_usuario" : "Licencia de usuario" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "data_is" : { "data" : [ "licencia-de-usuario:0:status" ], "value" : "5" } },
              "DO" : [
                { "drupal_message" : {
                    "message" : "Su licencia de uso ha sido suspendida. Puede comunicarse con el \\u003Ca href=\\u0022\\/soporte-tecnico\\u0022\\u003Edepartamento de soporte\\u003C\\/a\\u003E para solventar esta situaci\\u00f3n.",
                    "type" : "warning"
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_aviso_licencia_expirada'] = entity_import('rules_config', '{ "rules_aviso_licencia_expirada" : {
      "LABEL" : "Aviso licencia expirada",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "simple_modal_overlay" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT user_has_role" : { "account" : [ "account" ], "roles" : { "value" : { "4" : "4" } } } }
      ],
      "DO" : [
        { "simple_modal_overlay_message" : {
            "title" : "Adquiere tu licencia de Histomedical",
            "content" : "\\u003Clink rel=\\u0022stylesheet\\u0022 type=\\u0022text\\/css\\u0022 href=\\u0022\\/sites\\/all\\/themes\\/histomed_sys\\/custom\\/overlay-message.css\\u0022 media=\\u0022screen\\u0022 \\/\\u003E\\r\\n\\r\\n\\u003Cdiv class=\\u0022imagenes-logos\\u0022 style=\\u0022float:left;width: 25%;\\u0022\\u003E\\r\\n    \\u003Cdiv id=\\u0022logo-histomedical\\u0022\\u003E\\u003Cimg src=\\u0022\\/sites\\/all\\/themes\\/histomed_sys\\/custom\\/images\\/logo-sistema-front.png\\u0022 style=\\u0022width: 110px;\\u0022 \\/\\u003E\\u003C\\/div\\u003E\\r\\n    \\u003Cdiv id=\\u0022logo-ssl\\u0022\\u003E\\u003Cimg src=\\u0022https:\\/\\/www.positivessl.com\\/images-new\\/PositiveSSL_tl_trans2.png\\u0022 \\/\\u003E\\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n\\u003Cdiv class=\\u0022informacion\\u0022 style=\\u0022float:right;width: 70%;\\u0022\\u003E\\r\\n    \\u003Cdiv id=\\u0022informacion\\u0022\\u003E\\r\\n        \\u003Cp\\u003ETu licencia Histomedical ha caducado.\\u003C\\/p\\u003E\\r\\n        \\u003Cp\\u003ESigue disfrutando de\\r\\n        \\u003Cul\\u003E\\r\\n            \\u003Cli\\u003ESoporte t\\u00e9cnico especializado\\u003C\\/li\\u003E\\r\\n            \\u003Cli\\u003EDisponibilidad 24\\/7 de tu informaci\\u00f3n\\u003C\\/li\\u003E\\r\\n            \\u003Cli\\u003ESeguridad, cumplimiento de LOPD y Certificado de Seguridad\\u003C\\/li\\u003E\\r\\n            \\u003Cli\\u003EAdaptaci\\u00f3n de Histomedical a tus necesidades\\u003C\\/li\\u003E\\r\\n        \\u003C\\/ul\\u003E\\r\\n        \\u003C\\/p\\u003E\\r\\n        \\u003Cdiv\\u003E\\u003Ca href=\\u0022\\/mi-suscripcion\\u0022 class=\\u0022art-button\\u0022\\u003EComprar mi licencia\\u003C\\/a\\u003E\\u003C\\/div\\u003E\\r\\n    \\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E\\r\\n\\u003Cdiv style=\\u0022clear:both;\\u0022\\u003E\\u003C\\/div\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_cancelar_eliminacion_de_rol_medico_tras_comprar_licencia'] = entity_import('rules_config', '{ "rules_cancelar_eliminacion_de_rol_medico_tras_comprar_licencia" : {
      "LABEL" : "Cancelar eliminaci\\u00f3n de rol m\\u00e9dico tras comprar licencia",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "rules", "rules_scheduler", "commerce_license" ],
      "ON" : { "commerce_license_insert" : [], "commerce_license_update" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-license:status" ], "value" : "2" } }
      ],
      "DO" : [
        { "schedule_delete" : {
            "component" : "rules_eliminar_rol_medico",
            "task" : "Eliminar rol m\\u00e9dico a usuario [commerce-license:owner:uid] - [commerce-license:owner:field-nombre] [commerce-license:owner:field-apellido]"
          }
        }
      ]
    }
  }');
  $items['rules_complete_checkout_redirect'] = entity_import('rules_config', '{ "rules_complete_checkout_redirect" : {
      "LABEL" : "Complete checkout redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "rules", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [ { "redirect" : { "url" : "\\/mi-suscripcion" } } ]
    }
  }');
  $items['rules_eliminar_rol_medico'] = entity_import('rules_config', '{ "rules_eliminar_rol_medico" : {
      "LABEL" : "Eliminar rol m\\u00e9dico",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "usuario" : { "label" : "Usuario", "type" : "user" } },
      "ACTION SET" : [
        { "user_remove_role" : { "account" : [ "usuario" ], "roles" : { "value" : { "4" : "4" } } } }
      ]
    }
  }');
  $items['rules_eliminar_rol_medico_a_usuario_cuando_se_elimina_licencia'] = entity_import('rules_config', '{ "rules_eliminar_rol_medico_a_usuario_cuando_se_elimina_licencia" : {
      "LABEL" : "Eliminar rol m\\u00e9dico a usuario cuando se elimina una licencia",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "rules", "commerce_license" ],
      "ON" : { "commerce_license_delete" : [] },
      "IF" : [
        { "data_is" : { "data" : [ "commerce-license:type" ], "value" : "role" } }
      ],
      "DO" : [
        { "user_remove_role" : {
            "account" : [ "commerce-license:owner" ],
            "roles" : { "value" : { "4" : "4" } }
          }
        }
      ]
    }
  }');
  $items['rules_empty_cart_before_adding_new_product'] = entity_import('rules_config', '{ "rules_empty_cart_before_adding_new_product" : {
      "LABEL" : "Empty cart before adding new product",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "commerce_cart" ],
      "ON" : { "commerce_cart_product_prepare" : [] },
      "DO" : [
        { "commerce_cart_empty" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_enviar_correo_vencimiento_proximo_de_licencia'] = entity_import('rules_config', '{ "rules_enviar_correo_vencimiento_proximo_de_licencia" : {
      "LABEL" : "Enviar correo vencimiento pr\\u00f3ximo de licencia",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "usuario" : { "label" : "Usuario", "type" : "user" } },
      "ACTION SET" : [
        { "mail" : {
            "to" : "[usuario:mail]",
            "subject" : "Su licencia de Histomedical est\\u00e1 pr\\u00f3xima a vencerse",
            "message" : "Hola [usuario:field-nombre] [usuario:field-apellido],\\r\\n\\r\\nTe recordamos que tu licencia de uso de Histomedical est\\u00e1 pr\\u00f3xima a vencerse, por lo que te recomendamos renovarla lo antes posible a fin de evitar interrupciones en tu servicio.\\r\\n\\r\\nPuedes renovar o adquirir una nueva licencia en la secci\\u00f3n \\u0027Mi Suscripci\\u00f3n\\u0027 de tu cuenta. Sigue el siguiente enlace para acceder\\r\\n\\r\\n[site:login-url]?destination=mi-suscripcion\\r\\n\\r\\nRecuerda que puedes adquirir una licencia mensual o anual, la que mejor se adapte a tus necesidades.\\r\\n\\r\\nSi tienes cualquier duda puedes comunicarte con nuestro departamento de soporte usando el siguiente enlace\\r\\n\\r\\n[site:url]soporte-tecnico\\r\\n\\r\\nSaludos.",
            "language" : [ "usuario:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_expira_rol_medico_tras_30_dias_de_registro'] = entity_import('rules_config', '{ "rules_expira_rol_medico_tras_30_dias_de_registro" : {
      "LABEL" : "Expira rol m\\u00e9dico tras 30 d\\u00edas de registro",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce", "Histomedical" ],
      "REQUIRES" : [ "rules", "rules_scheduler" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "schedule" : {
            "component" : "rules_eliminar_rol_medico",
            "date" : "+30 days",
            "identifier" : "Eliminar rol m\\u00e9dico a usuario [account:uid] - [account:field-nombre] [account:field-apellido]",
            "param_usuario" : [ "account" ]
          }
        }
      ]
    }
  }');
  return $items;
}
