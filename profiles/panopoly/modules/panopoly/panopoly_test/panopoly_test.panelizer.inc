<?php
/**
 * @file
 * panopoly_test.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function panopoly_test_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_test_landing_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_test_landing_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '9d26a711-39c5-4ef6-a421-e2feb7d9e4e3';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_test_landing_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_test_page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_test_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = 'page-page';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = '';
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = '';
  $display = new panels_display();
  $display->layout = 'bryant';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'column1' => NULL,
      'column2' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '16346c80-6fcf-4cee-bf7a-9c0173fc2916';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => 'content',
        'image_style' => 'panopoly_image_half',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '34b4f35e-bc4b-4819-905c-6b6bf84bffe1';
    $display->content['new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1'] = $pane;
    $display->panels['contentmain'][0] = 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1';
    $pane = new stdClass();
    $pane->pid = 'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => '250',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '59cafe99-f0a0-4a3a-a13f-8f108d69d18b';
    $display->content['new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b'] = $pane;
    $display->panels['contentmain'][1] = 'new-59cafe99-f0a0-4a3a-a13f-8f108d69d18b';
    $pane = new stdClass();
    $pane->pid = 'new-f3bf9c22-9b22-41d2-a57e-110951093871';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'featured',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'f3bf9c22-9b22-41d2-a57e-110951093871';
    $display->content['new-f3bf9c22-9b22-41d2-a57e-110951093871'] = $pane;
    $display->panels['contentmain'][2] = 'new-f3bf9c22-9b22-41d2-a57e-110951093871';
    $pane = new stdClass();
    $pane->pid = 'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1';
    $pane->panel = 'sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '2',
      'follow' => 0,
      'depth' => 0,
      'expanded' => 1,
      'sort' => 0,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1';
    $display->content['new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1'] = $pane;
    $display->panels['sidebar'][0] = 'new-c755a7a9-2c4c-4f7e-a0f7-fc3a3c87ddd1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-34b4f35e-bc4b-4819-905c-6b6bf84bffe1';
  $panelizer->display = $display;
  $export['node:panopoly_test_page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_test_page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_test_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = 'page-default';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '742e0840-b53b-4c71-8c79-3afd1c4e6c6e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a9d6fd53-ab5d-420b-925e-3d4f9f32bf17';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_link' => '',
        'image_style' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9d6fd53-ab5d-420b-925e-3d4f9f32bf17';
    $display->content['new-a9d6fd53-ab5d-420b-925e-3d4f9f32bf17'] = $pane;
    $display->panels['contentmain'][0] = 'new-a9d6fd53-ab5d-420b-925e-3d4f9f32bf17';
    $pane = new stdClass();
    $pane->pid = 'new-628c321f-d9c9-4c85-8218-f1532aa3ed5e';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '628c321f-d9c9-4c85-8218-f1532aa3ed5e';
    $display->content['new-628c321f-d9c9-4c85-8218-f1532aa3ed5e'] = $pane;
    $display->panels['contentmain'][1] = 'new-628c321f-d9c9-4c85-8218-f1532aa3ed5e';
    $pane = new stdClass();
    $pane->pid = 'new-c911e563-4be5-4005-b080-70f63356f95f';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'c911e563-4be5-4005-b080-70f63356f95f';
    $display->content['new-c911e563-4be5-4005-b080-70f63356f95f'] = $pane;
    $display->panels['contentmain'][2] = 'new-c911e563-4be5-4005-b080-70f63356f95f';
    $pane = new stdClass();
    $pane->pid = 'new-b66aaba2-12c0-4fbb-b0ab-5d8114a78369';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'b66aaba2-12c0-4fbb-b0ab-5d8114a78369';
    $display->content['new-b66aaba2-12c0-4fbb-b0ab-5d8114a78369'] = $pane;
    $display->panels['contentmain'][3] = 'new-b66aaba2-12c0-4fbb-b0ab-5d8114a78369';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-628c321f-d9c9-4c85-8218-f1532aa3ed5e';
  $panelizer->display = $display;
  $export['node:panopoly_test_page:default:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_test_page:default:featured';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_test_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'featured';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'radix_boxton';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'contentmain' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'be546dbe-de6d-4e5c-9a27-3571573b18ca';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4aaf93c9-afec-43f1-ac84-056daca83759';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4aaf93c9-afec-43f1-ac84-056daca83759';
    $display->content['new-4aaf93c9-afec-43f1-ac84-056daca83759'] = $pane;
    $display->panels['contentmain'][0] = 'new-4aaf93c9-afec-43f1-ac84-056daca83759';
    $pane = new stdClass();
    $pane->pid = 'new-2d87f171-b66f-417f-846a-17cdf8d4b185';
    $pane->panel = 'contentmain';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'markup' => 'none',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2d87f171-b66f-417f-846a-17cdf8d4b185';
    $display->content['new-2d87f171-b66f-417f-846a-17cdf8d4b185'] = $pane;
    $display->panels['contentmain'][1] = 'new-2d87f171-b66f-417f-846a-17cdf8d4b185';
    $pane = new stdClass();
    $pane->pid = 'new-d01aaec3-a61f-4769-87be-b841ff568af1';
    $pane->panel = 'contentmain';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd01aaec3-a61f-4769-87be-b841ff568af1';
    $display->content['new-d01aaec3-a61f-4769-87be-b841ff568af1'] = $pane;
    $display->panels['contentmain'][2] = 'new-d01aaec3-a61f-4769-87be-b841ff568af1';
    $pane = new stdClass();
    $pane->pid = 'new-43dc2b41-4d88-4a68-a4cb-d9f3b062472d';
    $pane->panel = 'contentmain';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'featured',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '43dc2b41-4d88-4a68-a4cb-d9f3b062472d';
    $display->content['new-43dc2b41-4d88-4a68-a4cb-d9f3b062472d'] = $pane;
    $display->panels['contentmain'][3] = 'new-43dc2b41-4d88-4a68-a4cb-d9f3b062472d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:panopoly_test_page:default:featured'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:panopoly_test_page:default:teaser';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'panopoly_test_page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'teaser';
  $panelizer->css_class = 'page-teaser';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'b249be91-2e59-4b92-80ac-256ea1c22000';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1a29748d-961a-4c68-ac8a-fd0487599ea7';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1a29748d-961a-4c68-ac8a-fd0487599ea7';
    $display->content['new-1a29748d-961a-4c68-ac8a-fd0487599ea7'] = $pane;
    $display->panels['center'][0] = 'new-1a29748d-961a-4c68-ac8a-fd0487599ea7';
    $pane = new stdClass();
    $pane->pid = 'new-5a11a330-5d60-48a7-8990-70cdf1c5e76d';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_summary_or_trimmed',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'trim_length' => 600,
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5a11a330-5d60-48a7-8990-70cdf1c5e76d';
    $display->content['new-5a11a330-5d60-48a7-8990-70cdf1c5e76d'] = $pane;
    $display->panels['center'][1] = 'new-5a11a330-5d60-48a7-8990-70cdf1c5e76d';
    $pane = new stdClass();
    $pane->pid = 'new-81940446-a77c-4133-b348-71a49da13a8f';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'teaser',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '81940446-a77c-4133-b348-71a49da13a8f';
    $display->content['new-81940446-a77c-4133-b348-71a49da13a8f'] = $pane;
    $display->panels['center'][2] = 'new-81940446-a77c-4133-b348-71a49da13a8f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1a29748d-961a-4c68-ac8a-fd0487599ea7';
  $panelizer->display = $display;
  $export['node:panopoly_test_page:default:teaser'] = $panelizer;

  return $export;
}
