<?php

/**
 * @file
 * Administrative page for Inline Form Errors module.
 */

/**
 * Form constructor for the inline_form_errors settings form.
 *
 * @see inline_form_errors_menu()
 * @ingroup forms
 */
function inline_form_errors_admin_settings($form, &$form_state) {
  $config = config('inline_form_errors.settings');

  $form['#config'] = 'inline_form_errors.settings';

  $form['combine_top_error_messages'] = array(
    '#type' => 'checkbox',
    '#title' => t('Combine the error messages at the top into one message'),
    '#description' => t('If enabled, the message at the top of the page will appear like this: <em>"2 errors have been found: ..."</em> with anchor links to each inline error next to the field.'),
    '#default_value' => $config->get('combine_top_error_messages'),
  );

  return system_settings_form($form);
}
