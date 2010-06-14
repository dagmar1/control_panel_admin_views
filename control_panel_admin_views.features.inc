<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function control_panel_admin_views_user_default_permissions() {
  module_load_include('inc', 'control_panel_admin_views', 'control_panel_admin_views.defaults');
  $args = func_get_args();
  return call_user_func_array('_control_panel_admin_views_user_default_permissions', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function control_panel_admin_views_views_default_views() {
  module_load_include('inc', 'control_panel_admin_views', 'control_panel_admin_views.features.views');
  $args = func_get_args();
  return call_user_func_array('_control_panel_admin_views_views_default_views', $args);
}
