<?php
/**
 * @file
 * Admin settings form for databasics module.
 */

function databasics_settings_form($form, &$form_state) {

  $form['databasics_message'] = array(
    '#type' => 'textfield',
    '#title' => t('Message'),
    '#description' => t('Message to dispaly at bottom of content pages.'),
    '#default_value' => variable_get('databasics_message', 'You have viewed this page.'),
  );

  return system_settings_form($form);
}
