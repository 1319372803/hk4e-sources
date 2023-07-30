// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLogoPage.h

// Line 19: range 0000000012166D30-0000000012166EE6
void __cdecl data::ConfigLogoPage::ConfigLogoPage(data::ConfigLogoPage *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->logo_file_name);
  if ( *(char *)(((unsigned __int64)&this->show_tip_text >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_tip_text, v1, &this->show_tip_text);
  this->show_tip_text = 0;
  std::string::basic_string(&this->tip_text_map_id);
  if ( *(char *)(((unsigned __int64)&this->show_tip_img_aw >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_tip_img_aw, v1, &this->show_tip_img_aw);
  this->show_tip_img_aw = 0;
  std::string::basic_string(&this->tip_img_awname);
  if ( *(char *)(((unsigned __int64)&this->show_warning_view >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_warning_view, v1, &this->show_warning_view);
  this->show_warning_view = 0;
  std::string::basic_string(&this->warning_title);
  std::string::basic_string(&this->warning_desc);
  if ( *(char *)(((unsigned __int64)&this->show_koran_tips_view >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->show_koran_tips_view, v1, &this->show_koran_tips_view);
  this->show_koran_tips_view = 0;
  std::string::basic_string(&this->koran_tips_desc);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 19: range 000000001263DE56-000000001263E22B
void __cdecl data::ConfigLogoPage::ConfigLogoPage(data::ConfigLogoPage *const this, const data::ConfigLogoPage *a2)
{
  std::string *p_logo_file_name; // rsi
  bool show_tip_text; // cl
  char v4; // al
  std::string *p_tip_text_map_id; // rsi
  bool show_tip_img_aw; // cl
  char v7; // al
  std::string *p_tip_img_awname; // rsi
  bool show_warning_view; // cl
  char v10; // al
  std::string *p_warning_desc; // rsi
  bool show_koran_tips_view; // cl
  char v13; // al
  std::string *p_koran_tips_desc; // rsi
  bool is_json_loaded; // cl
  char v16; // al

  std::string::basic_string(this, a2);
  p_logo_file_name = &a2->logo_file_name;
  std::string::basic_string(&this->logo_file_name, p_logo_file_name);
  if ( *(char *)(((unsigned __int64)&a2->show_tip_text >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->show_tip_text, p_logo_file_name, &a2->show_tip_text);
  show_tip_text = a2->show_tip_text;
  v4 = *(_BYTE *)(((unsigned __int64)&this->show_tip_text >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_logo_file_name) = v4 != 0;
    __asan_report_store1(&this->show_tip_text, p_logo_file_name, &this->show_tip_text);
  }
  this->show_tip_text = show_tip_text;
  p_tip_text_map_id = &a2->tip_text_map_id;
  std::string::basic_string(&this->tip_text_map_id, &a2->tip_text_map_id);
  if ( *(char *)(((unsigned __int64)&a2->show_tip_img_aw >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->show_tip_img_aw, p_tip_text_map_id, &a2->show_tip_img_aw);
  show_tip_img_aw = a2->show_tip_img_aw;
  v7 = *(_BYTE *)(((unsigned __int64)&this->show_tip_img_aw >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_tip_text_map_id) = v7 != 0;
    __asan_report_store1(&this->show_tip_img_aw, p_tip_text_map_id, &this->show_tip_img_aw);
  }
  this->show_tip_img_aw = show_tip_img_aw;
  p_tip_img_awname = &a2->tip_img_awname;
  std::string::basic_string(&this->tip_img_awname, &a2->tip_img_awname);
  if ( *(char *)(((unsigned __int64)&a2->show_warning_view >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->show_warning_view, p_tip_img_awname, &a2->show_warning_view);
  show_warning_view = a2->show_warning_view;
  v10 = *(_BYTE *)(((unsigned __int64)&this->show_warning_view >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_tip_img_awname) = v10 != 0;
    __asan_report_store1(&this->show_warning_view, p_tip_img_awname, &this->show_warning_view);
  }
  this->show_warning_view = show_warning_view;
  std::string::basic_string(&this->warning_title, &a2->warning_title);
  p_warning_desc = &a2->warning_desc;
  std::string::basic_string(&this->warning_desc, &a2->warning_desc);
  if ( *(char *)(((unsigned __int64)&a2->show_koran_tips_view >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->show_koran_tips_view, p_warning_desc, &a2->show_koran_tips_view);
  show_koran_tips_view = a2->show_koran_tips_view;
  v13 = *(_BYTE *)(((unsigned __int64)&this->show_koran_tips_view >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(p_warning_desc) = v13 != 0;
    __asan_report_store1(&this->show_koran_tips_view, p_warning_desc, &this->show_koran_tips_view);
  }
  this->show_koran_tips_view = show_koran_tips_view;
  p_koran_tips_desc = &a2->koran_tips_desc;
  std::string::basic_string(&this->koran_tips_desc, &a2->koran_tips_desc);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_koran_tips_desc, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(p_koran_tips_desc) = v16 != 0;
    __asan_report_store1(&this->is_json_loaded, p_koran_tips_desc, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 19: range 0000000012166EE8-0000000012166F68
void __cdecl data::ConfigLogoPage::~ConfigLogoPage(data::ConfigLogoPage *const this)
{
  std::string::~string(&this->koran_tips_desc);
  std::string::~string(&this->warning_desc);
  std::string::~string(&this->warning_title);
  std::string::~string(&this->tip_img_awname);
  std::string::~string(&this->tip_text_map_id);
  std::string::~string(&this->logo_file_name);
  std::string::~string(this);
};
