<?php

/**
 * @file
 * Contains a pre-process hook for 'html'.
 */

/**
 * Implements hook_preprocess_html().
 */
function joru_omega_preprocess_html(&$variables, $hook) {
  
  // Omega 4 zat�m pro m? nepochopiteln? ma�e dynamick� classes, kter� se vkl�daj� do body a d�ky kter�m je mo�n� pohodln? stylovat layout, nebo? tyto classes informuj� o existenci ?i neexistenci sidebars.
  
  // Na�t?st� jsem na�el default drupal code pro template_preprocess_html, ze kter�ho jsem pou�il dynamick� podm�nky. Omega pracuje v �ablon? s attribute array a nikoliv classes array - sice nev�m pro?, ale zachov�v�m Omegy p?�stup a dynamick� classes vkl�d�m tak� do attribute array.
  
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
