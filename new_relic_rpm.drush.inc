<?php
/**
 * @file
 * New Relic RPM Drush integration.
 */

/**
 * Implements hook_drush_init().
 */
function new_relic_rpm_drush_init() {
  drush_bootstrap(DRUSH_BOOTSTRAP_DRUPAL_FULL);
  // Make sure we have access to the needed functions.
  require_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'new_relic_rpm') . '/new_relic_rpm.module';
  // Set job state
  new_relic_rpm_set_job_state(variable_get('new_relic_rpm_track_drush', 'norm'));
}
