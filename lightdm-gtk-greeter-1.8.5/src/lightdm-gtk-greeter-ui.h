/* automatically generated from lightdm-gtk-greeter.glade */
#ifdef __SUNPRO_C
#pragma align 4 (lightdm_gtk_greeter_ui)
#endif
#ifdef __GNUC__
static const char lightdm_gtk_greeter_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char lightdm_gtk_greeter_ui[] =
#endif
{
  "<?xml version=\"1.0\" encoding=\"UTF-8\"?><interface><requires lib=\"gt"
  "k+\" version=\"3.0\"/><object class=\"GtkAccelGroup\" id=\"a11y_accelgr"
  "oup\"/><object class=\"GtkAccelGroup\" id=\"power_accelgroup\"/><object"
  " class=\"GtkWindow\" id=\"panel_window\"><property name=\"name\">panel_"
  "window</property><property name=\"can_focus\">False</property><property"
  " name=\"decorated\">False</property><accel-groups><group name=\"a11y_ac"
  "celgroup\"/><group name=\"power_accelgroup\"/></accel-groups><child><ob"
  "ject class=\"GtkHBox\" id=\"box3\"><property name=\"visible\">True</pro"
  "perty><property name=\"can_focus\">False</property><property name=\"hom"
  "ogeneous\">True</property><child><object class=\"GtkLabel\" id=\"hostna"
  "me_label\"><property name=\"visible\">True</property><property name=\"c"
  "an_focus\">False</property><property name=\"halign\">start</property><p"
  "roperty name=\"xalign\">0</property><property name=\"xpad\">6</property"
  "><property name=\"label\">[hostname]</property></object><packing><prope"
  "rty name=\"expand\">False</property><property name=\"fill\">True</prope"
  "rty><property name=\"position\">0</property></packing></child><child><o"
  "bject class=\"GtkLabel\" id=\"clock_label\"><property name=\"can_focus\""
  ">False</property></object><packing><property name=\"expand\">False</pro"
  "perty><property name=\"fill\">True</property><property name=\"position\""
  ">1</property></packing></child><child><object class=\"GtkMenuBar\" id=\""
  "menubar\"><property name=\"name\">menubar</property><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">True</property><pro"
  "perty name=\"halign\">end</property><property name=\"pack_direction\">r"
  "tl</property><signal name=\"key-press-event\" handler=\"menubar_key_pre"
  "ss_cb\" swapped=\"no\"/><child><object class=\"GtkMenuItem\" id=\"power"
  "_menuitem\"><property name=\"visible\">True</property><property name=\""
  "can_focus\">True</property><child type=\"submenu\"><object class=\"GtkM"
  "enu\" id=\"power_menu\"><property name=\"visible\">True</property><prop"
  "erty name=\"can_focus\">False</property><property name=\"accel_group\">"
  "power_accelgroup</property><child><object class=\"GtkMenuItem\" id=\"su"
  "spend_menuitem\"><property name=\"visible\">True</property><property na"
  "me=\"can_focus\">False</property><property name=\"label\" translatable="
  "\"yes\">Suspend</property><signal name=\"activate\" handler=\"suspend_c"
  "b\" swapped=\"no\"/></object></child><child><object class=\"GtkMenuItem"
  "\" id=\"hibernate_menuitem\"><property name=\"visible\">True</property>"
  "<property name=\"can_focus\">False</property><property name=\"label\" t"
  "ranslatable=\"yes\">Hibernate</property><signal name=\"activate\" handl"
  "er=\"hibernate_cb\" swapped=\"no\"/></object></child><child><object cla"
  "ss=\"GtkMenuItem\" id=\"restart_menuitem\"><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">False</property><property na"
  "me=\"label\" translatable=\"yes\">Restart...</property><signal name=\"a"
  "ctivate\" handler=\"restart_cb\" swapped=\"no\"/></object></child><chil"
  "d><object class=\"GtkMenuItem\" id=\"shutdown_menuitem\"><property name"
  "=\"use_action_appearance\">False</property><property name=\"visible\">T"
  "rue</property><property name=\"can_focus\">False</property><property na"
  "me=\"accel_path\">&lt;Login&gt;/power/shutdown</property><property name"
  "=\"label\" translatable=\"yes\">Shut Down...</property><signal name=\"a"
  "ctivate\" handler=\"shutdown_cb\" swapped=\"no\"/></object></child></ob"
  "ject></child></object></child><child><object class=\"GtkMenuItem\" id=\""
  "a11y_menuitem\"><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">True</property><child type=\"submenu\"><object class=\""
  "GtkMenu\" id=\"a11y_menu\"><property name=\"visible\">True</property><p"
  "roperty name=\"can_focus\">False</property><property name=\"accel_group"
  "\">a11y_accelgroup</property><child><object class=\"GtkCheckMenuItem\" "
  "id=\"large_font_menuitem\"><property name=\"use_action_appearance\">Fal"
  "se</property><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"accel_path\">&lt;Login&gt;"
  "/a11y/font</property><property name=\"label\" translatable=\"yes\">Larg"
  "e Font</property><signal name=\"toggled\" handler=\"a11y_font_cb\" swap"
  "ped=\"no\"/></object></child><child><object class=\"GtkCheckMenuItem\" "
  "id=\"high_contrast_menuitem\"><property name=\"use_action_appearance\">"
  "False</property><property name=\"visible\">True</property><property nam"
  "e=\"can_focus\">False</property><property name=\"accel_path\">&lt;Login"
  "&gt;/a11y/contrast</property><property name=\"label\" translatable=\"ye"
  "s\">High Contrast</property><signal name=\"toggled\" handler=\"a11y_con"
  "trast_cb\" swapped=\"no\"/></object></child><child><object class=\"GtkC"
  "heckMenuItem\" id=\"keyboard_menuitem\"><property name=\"use_action_app"
  "earance\">False</property><property name=\"visible\">True</property><pr"
  "operty name=\"can_focus\">False</property><property name=\"accel_path\""
  ">&lt;Login&gt;/a11y/keyboard</property><property name=\"label\" transla"
  "table=\"yes\">On Screen Keyboard</property><property name=\"use_underli"
  "ne\">True</property><signal name=\"toggled\" handler=\"a11y_keyboard_cb"
  "\" swapped=\"no\"/></object></child></object></child></object></child><"
  "child><object class=\"GtkMenuItem\" id=\"language_menuitem\"><property "
  "name=\"visible\">True</property><property name=\"can_focus\">True</prop"
  "erty><property name=\"label\">[language_code]</property><child type=\"s"
  "ubmenu\"><object class=\"GtkMenu\" id=\"language_menu\"><property name="
  "\"visible\">True</property><property name=\"can_focus\">False</property"
  "></object></child></object></child><child><object class=\"GtkMenuItem\""
  " id=\"keyboard_layout_menuitem\"><property name=\"visible\">True</prope"
  "rty><property name=\"can_focus\">True</property><property name=\"label\""
  ">[keyboard_layout]</property><child type=\"submenu\"><object class=\"Gt"
  "kMenu\" id=\"keyboard_layout_menu\"><property name=\"visible\">True</pr"
  "operty><property name=\"can_focus\">False</property></object></child></"
  "object></child><child><object class=\"GtkMenuItem\" id=\"session_menuit"
  "em\"><property name=\"visible\">True</property><property name=\"can_foc"
  "us\">True</property><child type=\"submenu\"><object class=\"GtkMenu\" i"
  "d=\"session_menu\"><property name=\"visible\">True</property><property "
  "name=\"can_focus\">False</property></object></child></object></child></"
  "object><packing><property name=\"expand\">False</property><property nam"
  "e=\"fill\">True</property><property name=\"pack_type\">end</property><p"
  "roperty name=\"position\">2</property></packing></child></object></chil"
  "d></object><object class=\"GtkListStore\" id=\"user_liststore\"><column"
  "s><column type=\"gchararray\"/><column type=\"gchararray\"/><column typ"
  "e=\"gint\"/></columns></object><object class=\"GtkWindow\" id=\"login_w"
  "indow\"><property name=\"name\">login_window</property><property name=\""
  "can_focus\">False</property><property name=\"resizable\">False</propert"
  "y><property name=\"decorated\">False</property><accel-groups><group nam"
  "e=\"a11y_accelgroup\"/><group name=\"power_accelgroup\"/></accel-groups"
  "><signal name=\"key-press-event\" handler=\"login_window_key_press_cb\""
  " swapped=\"no\"/><child><object class=\"GtkVBox\" id=\"vbox2\"><propert"
  "y name=\"visible\">True</property><property name=\"can_focus\">False</p"
  "roperty><child><object class=\"GtkFrame\" id=\"content_frame\"><propert"
  "y name=\"name\">content_frame</property><property name=\"visible\">True"
  "</property><property name=\"can_focus\">False</property><property name="
  "\"label_xalign\">0</property><property name=\"shadow_type\">none</prope"
  "rty><child><object class=\"GtkTable\" id=\"table1\"><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">False</property><pr"
  "operty name=\"margin_left\">24</property><property name=\"margin_right\""
  ">24</property><property name=\"margin_top\">24</property><property name"
  "=\"n_rows\">3</property><property name=\"n_columns\">2</property><prope"
  "rty name=\"column_spacing\">18</property><property name=\"row_spacing\""
  ">6</property><child><object class=\"GtkComboBox\" id=\"user_combobox\">"
  "<property name=\"name\">user_combobox</property><property name=\"width_"
  "request\">200</property><property name=\"can_focus\">False</property><p"
  "roperty name=\"model\">user_liststore</property><signal name=\"changed\""
  " handler=\"user_combobox_active_changed_cb\" swapped=\"no\"/></object><"
  "packing><property name=\"left_attach\">1</property><property name=\"rig"
  "ht_attach\">2</property><property name=\"y_options\"/></packing></child"
  "><child><object class=\"GtkEntry\" id=\"password_entry\"><property name"
  "=\"name\">prompt_entry</property><property name=\"width_request\">200</"
  "property><property name=\"visible\">True</property><property name=\"can"
  "_focus\">True</property><property name=\"visibility\">False</property><"
  "property name=\"invisible_char\">\342\200\242</property><property name="
  "\"primary_icon_activatable\">False</property><property name=\"secondary"
  "_icon_activatable\">False</property><signal name=\"activate\" handler=\""
  "login_cb\" swapped=\"no\"/><signal name=\"key-press-event\" handler=\"p"
  "assword_key_press_cb\" swapped=\"no\"/></object><packing><property name"
  "=\"left_attach\">1</property><property name=\"right_attach\">2</propert"
  "y><property name=\"top_attach\">2</property><property name=\"bottom_att"
  "ach\">3</property><property name=\"y_options\"/></packing></child><chil"
  "d><object class=\"GtkEntry\" id=\"username_entry\"><property name=\"nam"
  "e\">prompt_entry</property><property name=\"can_focus\">True</property>"
  "<property name=\"no_show_all\">True</property><property name=\"invisibl"
  "e_char\">\342\200\242</property><signal name=\"focus-out-event\" handle"
  "r=\"username_focus_out_cb\" swapped=\"no\"/><signal name=\"key-press-ev"
  "ent\" handler=\"username_key_press_cb\" swapped=\"no\"/></object><packi"
  "ng><property name=\"left_attach\">1</property><property name=\"right_at"
  "tach\">2</property><property name=\"top_attach\">1</property><property "
  "name=\"bottom_attach\">2</property></packing></child><child><object cla"
  "ss=\"GtkFrame\" id=\"user_image_border\"><property name=\"name\">user_i"
  "mage_border</property><property name=\"visible\">True</property><proper"
  "ty name=\"can_focus\">False</property><property name=\"label_xalign\">0"
  "</property><property name=\"shadow_type\">none</property><child><object"
  " class=\"GtkImage\" id=\"user_image\"><property name=\"name\">user_imag"
  "e</property><property name=\"visible\">True</property><property name=\""
  "can_focus\">False</property><property name=\"pixel_size\">80</property>"
  "<property name=\"icon_name\">avatar-default</property></object></child>"
  "</object><packing><property name=\"bottom_attach\">3</property><propert"
  "y name=\"x_options\"/><property name=\"y_options\"/></packing></child><"
  "/object></child><child type=\"label_item\"><placeholder/></child></obje"
  "ct><packing><property name=\"expand\">True</property><property name=\"f"
  "ill\">True</property><property name=\"position\">0</property></packing>"
  "</child><child><object class=\"GtkAlignment\" id=\"infobar_compat\"><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Fal"
  "se</property><child><object class=\"GtkLabel\" id=\"message_label\"><pr"
  "operty name=\"visible\">True</property><property name=\"can_focus\">Fal"
  "se</property><property name=\"label\" comments=\"This is a placeholder "
  "string and will be replaced with a message from PAM\">[message]</proper"
  "ty></object></child></object><packing><property name=\"expand\">True</p"
  "roperty><property name=\"fill\">True</property><property name=\"positio"
  "n\">1</property></packing></child><child><object class=\"GtkFrame\" id="
  "\"buttonbox_frame\"><property name=\"name\">buttonbox_frame</property><"
  "property name=\"visible\">True</property><property name=\"can_focus\">F"
  "alse</property><property name=\"label_xalign\">0</property><property na"
  "me=\"shadow_type\">none</property><child><object class=\"GtkHBox\" id=\""
  "hbox2\"><property name=\"visible\">True</property><property name=\"can_"
  "focus\">False</property><property name=\"margin_left\">24</property><pr"
  "operty name=\"margin_right\">24</property><property name=\"margin_botto"
  "m\">24</property><child><object class=\"GtkButton\" id=\"login_button\""
  "><property name=\"label\" translatable=\"yes\">Log In</property><proper"
  "ty name=\"name\">login_button</property><property name=\"visible\">True"
  "</property><property name=\"can_focus\">True</property><property name=\""
  "receives_default\">True</property><signal name=\"clicked\" handler=\"lo"
  "gin_cb\" swapped=\"no\"/></object><packing><property name=\"expand\">Fa"
  "lse</property><property name=\"fill\">True</property><property name=\"p"
  "ack_type\">end</property><property name=\"position\">0</property></pack"
  "ing></child><child><object class=\"GtkButton\" id=\"cancel_button\"><pr"
  "operty name=\"label\" translatable=\"yes\">Cancel</property><property n"
  "ame=\"name\">cancel_button</property><property name=\"visible\">True</p"
  "roperty><property name=\"can_focus\">True</property><property name=\"re"
  "ceives_default\">True</property><signal name=\"clicked\" handler=\"canc"
  "el_cb\" swapped=\"no\"/></object><packing><property name=\"expand\">Fal"
  "se</property><property name=\"fill\">True</property><property name=\"po"
  "sition\">1</property></packing></child></object></child><child type=\"l"
  "abel_item\"><placeholder/></child></object><packing><property name=\"ex"
  "pand\">True</property><property name=\"fill\">True</property><property "
  "name=\"position\">2</property></packing></child></object></child></obje"
  "ct></interface>"
};

static const unsigned lightdm_gtk_greeter_ui_length = 12677u;

