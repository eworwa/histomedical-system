<?php
/**
 * @file
 * comercial.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function comercial_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access checkout'.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer card data'.
  $permissions['administer card data'] = array(
    'name' => 'administer card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'administer checkout'.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: 'administer commerce_customer_profile entities'.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'administer commerce_order entities'.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'administer commerce_product entities'.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer licenses'.
  $permissions['administer licenses'] = array(
    'name' => 'administer licenses',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_license',
  );

  // Exported permission: 'administer line item types'.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer line items'.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: 'administer payment methods'.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer payments'.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'administer product pricing'.
  $permissions['administer product pricing'] = array(
    'name' => 'administer product pricing',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product_pricing_ui',
  );

  // Exported permission: 'administer product types'.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'administer taxes'.
  $permissions['administer taxes'] = array(
    'name' => 'administer taxes',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_tax_ui',
  );

  // Exported permission: 'capture paymill payments'.
  $permissions['capture paymill payments'] = array(
    'name' => 'capture paymill payments',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_paymill',
  );

  // Exported permission: 'configure cardonfile'.
  $permissions['configure cardonfile'] = array(
    'name' => 'configure cardonfile',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'configure order settings'.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'configure store'.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce',
  );

  // Exported permission: 'create any card data'.
  $permissions['create any card data'] = array(
    'name' => 'create any card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create commerce_customer_profile entities'.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_customer_profile entities of bundle billing'.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'create commerce_order entities'.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle commerce_order'.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_order entities of bundle recurring'.
  $permissions['create commerce_order entities of bundle recurring'] = array(
    'name' => 'create commerce_order entities of bundle recurring',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'create commerce_product entities'.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle licencia'.
  $permissions['create commerce_product entities of bundle licencia'] = array(
    'name' => 'create commerce_product entities of bundle licencia',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create commerce_product entities of bundle product'.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create own card data'.
  $permissions['create own card data'] = array(
    'name' => 'create own card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'create payments'.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'delete any card data'.
  $permissions['delete any card data'] = array(
    'name' => 'delete any card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete own card data'.
  $permissions['delete own card data'] = array(
    'name' => 'delete own card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'delete payments'.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'edit any card data'.
  $permissions['edit any card data'] = array(
    'name' => 'edit any card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit any commerce_customer_profile entity'.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_customer_profile entity of bundle billing'.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit any commerce_order entity'.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle commerce_order'.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_order entity of bundle recurring'.
  $permissions['edit any commerce_order entity of bundle recurring'] = array(
    'name' => 'edit any commerce_order entity of bundle recurring',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit any commerce_product entity'.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle licencia'.
  $permissions['edit any commerce_product entity of bundle licencia'] = array(
    'name' => 'edit any commerce_product entity of bundle licencia',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any commerce_product entity of bundle product'.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own card data'.
  $permissions['edit own card data'] = array(
    'name' => 'edit own card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'edit own commerce_customer_profile entities'.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_customer_profile entities of bundle billing'.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'edit own commerce_order entities'.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle commerce_order'.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_order entities of bundle recurring'.
  $permissions['edit own commerce_order entities of bundle recurring'] = array(
    'name' => 'edit own commerce_order entities of bundle recurring',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'edit own commerce_product entities'.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle licencia'.
  $permissions['edit own commerce_product entities of bundle licencia'] = array(
    'name' => 'edit own commerce_product entities of bundle licencia',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own commerce_product entities of bundle product'.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'update payments'.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: 'view any card data'.
  $permissions['view any card data'] = array(
    'name' => 'view any card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view any commerce_customer_profile entity'.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_customer_profile entity of bundle billing'.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle commerce_order'.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_order entity of bundle recurring'.
  $permissions['view any commerce_order entity of bundle recurring'] = array(
    'name' => 'view any commerce_order entity of bundle recurring',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view any commerce_product entity'.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle licencia'.
  $permissions['view any commerce_product entity of bundle licencia'] = array(
    'name' => 'view any commerce_product entity of bundle licencia',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own card data'.
  $permissions['view own card data'] = array(
    'name' => 'view own card data',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_cardonfile',
  );

  // Exported permission: 'view own commerce_customer_profile entities'.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_customer_profile entities of bundle billing'.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      'medico' => 'medico',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: 'view own commerce_order entities'.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle commerce_order'.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_order entities of bundle recurring'.
  $permissions['view own commerce_order entities of bundle recurring'] = array(
    'name' => 'view own commerce_order entities of bundle recurring',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: 'view own commerce_product entities'.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle licencia'.
  $permissions['view own commerce_product entities of bundle licencia'] = array(
    'name' => 'view own commerce_product entities of bundle licencia',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle product'.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own licenses'.
  $permissions['view own licenses'] = array(
    'name' => 'view own licenses',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_license',
  );

  // Exported permission: 'view payments'.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'commerce_payment',
  );

  return $permissions;
}
