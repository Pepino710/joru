<?php

/**
 * @file
 * Contains a pre-process hook for 'html'.
 */

/**
 * Implements hook_preprocess_html().
 */
function joru_omega_preprocess_html(&$variables, $hook) {
  
  // Omega 4 zatím pro m? nepochopiteln? maže dynamické classes, které se vkládají do body a díky kterým je možné pohodln? stylovat layout, nebo? tyto classes informují o existenci ?i neexistenci sidebars.
  
  // Našt?stí jsem našel default drupal code pro template_preprocess_html, ze kterého jsem použil dynamické podmínky. Omega pracuje v šablon? s attribute array a nikoliv classes array - sice nevím pro?, ale zachovávám Omegy p?ístup a dynamické classes vkládám také do attribute array.
  
  // Add information about the number of sidebars.
  if (!empty($variables['page']['sidebar_first']) && !empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'two-sidebars';
    $variables['attributes_array']['class'][] = 'two-sidebars';
  }
  elseif (!empty($variables['page']['sidebar_first'])) {
    $variables['classes_array'][] = 'one-sidebar sidebar-first';
    $variables['attributes_array']['class'][] = 'one-sidebar sidebar-first';
  }
  elseif (!empty($variables['page']['sidebar_second'])) {
    $variables['classes_array'][] = 'one-sidebar sidebar-second';
    $variables['attributes_array']['class'][] = 'one-sidebar sidebar-second';
  }
  else {
    $variables['classes_array'][] = 'no-sidebars';
    $variables['attributes_array']['class'][] = 'no-sidebars';
  }  
}
