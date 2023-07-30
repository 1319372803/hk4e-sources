// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityGearExcelConfig.gen.h

// Line 17: range 0000000012EC5640-0000000012EC588B
void __cdecl data::ActivityGearExcelConfig::ActivityGearExcelConfig(data::ActivityGearExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->gear_level_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_tooth_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_tooth_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_tooth_length, v3);
  }
  this->gear_tooth_length = 0.0;
  v4 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_thickness >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gear_thickness >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gear_thickness, v4);
  }
  this->gear_thickness = 0.0;
  std::string::basic_string(&this->shaft_select_effect);
  std::string::basic_string(&this->shaft_tip_effect);
  std::string::basic_string(&this->end_gear_success_effect);
  std::string::basic_string(&this->cover_up_effect);
  std::string::basic_string(&this->gear_place_effect);
  if ( *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->push_tips_id, v4);
  }
  this->push_tips_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_tip_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_tip_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_tip_delay, v4);
  }
  this->player_tip_delay = 0.0;
};

// Line 17: range 00000000133B3794-00000000133B3C37
void __cdecl data::ActivityGearExcelConfig::ActivityGearExcelConfig(
        data::ActivityGearExcelConfig *const this,
        const data::ActivityGearExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  float gear_tooth_length; // xmm0_4
  float gear_thickness; // xmm0_4
  std::string *p_gear_place_effect; // rsi
  uint32_t push_tips_id; // ecx
  char v12; // al
  float player_tip_delay; // xmm0_4
  const data::ActivityGearExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGearExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->activity_id);
  }
  activity_id = v14->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  std::vector<unsigned int>::vector(&this->gear_level_id_list, &v14->gear_level_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v14->gear_tooth_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->gear_tooth_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->gear_tooth_length);
  }
  gear_tooth_length = v14->gear_tooth_length;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_tooth_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gear_tooth_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gear_tooth_length, &v14->gear_level_id_list);
  }
  this->gear_tooth_length = gear_tooth_length;
  if ( *(_BYTE *)(((unsigned __int64)&v14->gear_thickness >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->gear_thickness >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->gear_thickness);
  }
  gear_thickness = v14->gear_thickness;
  if ( *(_BYTE *)(((unsigned __int64)&this->gear_thickness >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gear_thickness >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gear_thickness, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->gear_thickness = gear_thickness;
  std::string::basic_string(&this->shaft_select_effect, &v14->shaft_select_effect);
  std::string::basic_string(&this->shaft_tip_effect, &v14->shaft_tip_effect);
  std::string::basic_string(&this->end_gear_success_effect, &v14->end_gear_success_effect);
  std::string::basic_string(&this->cover_up_effect, &v14->cover_up_effect);
  p_gear_place_effect = &v14->gear_place_effect;
  std::string::basic_string(&this->gear_place_effect, &v14->gear_place_effect);
  if ( *(_BYTE *)(((unsigned __int64)&v14->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->push_tips_id);
  }
  push_tips_id = v14->push_tips_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_gear_place_effect) = v12 != 0;
    __asan_report_store4(&this->push_tips_id, p_gear_place_effect);
  }
  this->push_tips_id = push_tips_id;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v14->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v14->player_tip_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->player_tip_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->player_tip_delay);
  }
  player_tip_delay = v14->player_tip_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_tip_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->player_tip_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->player_tip_delay, &v14->watcher_id_list);
  }
  this->player_tip_delay = player_tip_delay;
};

// Line 20: range 0000000013422818-0000000013422842
void __cdecl data::ActivityGearExcelConfig::~ActivityGearExcelConfig(data::ActivityGearExcelConfig *const this)
{
  data::ActivityGearExcelConfig::~ActivityGearExcelConfig(this);
  operator delete(this, 0xF8uLL);
};

// Line 20: range 0000000013422760-0000000013422817
void __cdecl data::ActivityGearExcelConfig::~ActivityGearExcelConfig(data::ActivityGearExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
  std::string::~string(&this->gear_place_effect);
  std::string::~string(&this->cover_up_effect);
  std::string::~string(&this->end_gear_success_effect);
  std::string::~string(&this->shaft_tip_effect);
  std::string::~string(&this->shaft_select_effect);
  std::vector<unsigned int>::~vector(&this->gear_level_id_list);
};

// Line 43: range 0000000012EC588C-0000000012EC5A23
void __cdecl data::ActivityGearLevelExcelConfig::ActivityGearLevelExcelConfig(
        data::ActivityGearLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->provided_gears);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day_index, v1);
  }
  this->open_day_index = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->watcher_id, v3);
  }
  this->watcher_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->redpoint_id_sub_page >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->redpoint_id_sub_page >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->redpoint_id_sub_page, v3);
  }
  this->redpoint_id_sub_page = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->redpoint_id_level_select >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->redpoint_id_level_select >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->redpoint_id_level_select, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->redpoint_id_level_select = 0;
};

// Line 43: range 00000000133B3D78-00000000133B4041
void __cdecl data::ActivityGearLevelExcelConfig::ActivityGearLevelExcelConfig(
        data::ActivityGearLevelExcelConfig *const this,
        const data::ActivityGearLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_provided_gears; // rsi
  uint32_t open_day_index; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t watcher_id; // ecx
  char v10; // dl
  uint32_t redpoint_id_sub_page; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t redpoint_id_level_select; // ecx
  char v15; // dl
  const data::ActivityGearLevelExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGearLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGearLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  p_provided_gears = &v16->provided_gears;
  std::vector<unsigned int>::vector(&this->provided_gears, &v16->provided_gears);
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->open_day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->open_day_index);
  }
  open_day_index = v16->open_day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_provided_gears) = v7 != 0;
    __asan_report_store4(&this->open_day_index, p_provided_gears);
  }
  this->open_day_index = open_day_index;
  v8 = (((_BYTE)v16 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->watcher_id);
  }
  watcher_id = v16->watcher_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->watcher_id, v8);
  }
  this->watcher_id = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->redpoint_id_sub_page >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->redpoint_id_sub_page >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->redpoint_id_sub_page);
  }
  redpoint_id_sub_page = v16->redpoint_id_sub_page;
  v12 = *(_BYTE *)(((unsigned __int64)&this->redpoint_id_sub_page >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->redpoint_id_sub_page, v8);
  }
  this->redpoint_id_sub_page = redpoint_id_sub_page;
  v13 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->redpoint_id_level_select >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->redpoint_id_level_select >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->redpoint_id_level_select);
  }
  redpoint_id_level_select = v16->redpoint_id_level_select;
  v15 = *(_BYTE *)(((unsigned __int64)&this->redpoint_id_level_select >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->redpoint_id_level_select, v13);
  }
  this->redpoint_id_level_select = redpoint_id_level_select;
};

// Line 46: range 0000000013422734-000000001342275E
void __cdecl data::ActivityGearLevelExcelConfig::~ActivityGearLevelExcelConfig(
        data::ActivityGearLevelExcelConfig *const this)
{
  data::ActivityGearLevelExcelConfig::~ActivityGearLevelExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 46: range 00000000134226E2-0000000013422733
void __cdecl data::ActivityGearLevelExcelConfig::~ActivityGearLevelExcelConfig(
        data::ActivityGearLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->provided_gears);
};

// Line 62: range 0000000012EC5A24-0000000012EC5B79
void __cdecl data::ActivityGearGadgetGearExcelConfig::ActivityGearGadgetGearExcelConfig(
        data::ActivityGearGadgetGearExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearGadgetGearExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  std::vector<float>::vector(&this->gear_radius);
  std::vector<unsigned int>::vector(&this->gear_tooth_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = 0;
  std::string::basic_string(&this->gear_can_not_place_effect);
  std::string::basic_string(&this->gear_place_effect);
  std::string::basic_string(&this->cover_up_effect);
};

// Line 62: range 00000000133B4182-00000000133B4428
void __cdecl data::ActivityGearGadgetGearExcelConfig::ActivityGearGadgetGearExcelConfig(
        data::ActivityGearGadgetGearExcelConfig *const this,
        const data::ActivityGearGadgetGearExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_gear_tooth_count; // rsi
  uint32_t material_id; // ecx
  char v10; // al
  const data::ActivityGearGadgetGearExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGearGadgetGearExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->gadget_id);
  }
  gadget_id = v11->gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  std::vector<float>::vector(&this->gear_radius, &v11->gear_radius);
  p_gear_tooth_count = &v11->gear_tooth_count;
  std::vector<unsigned int>::vector(&this->gear_tooth_count, &v11->gear_tooth_count);
  if ( *(_BYTE *)(((unsigned __int64)&v11->material_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->material_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->material_id);
  }
  material_id = v11->material_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_gear_tooth_count) = v10 != 0;
    __asan_report_store4(&this->material_id, p_gear_tooth_count);
  }
  this->material_id = material_id;
  std::string::basic_string(&this->gear_can_not_place_effect, &v11->gear_can_not_place_effect);
  std::string::basic_string(&this->gear_place_effect, &v11->gear_place_effect);
  std::string::basic_string(&this->cover_up_effect, &v11->cover_up_effect);
};

// Line 65: range 0000000013422622-00000000134226B5
void __cdecl data::ActivityGearGadgetGearExcelConfig::~ActivityGearGadgetGearExcelConfig(
        data::ActivityGearGadgetGearExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetGearExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearGadgetGearExcelConfig = v2;
  std::string::~string(&this->cover_up_effect);
  std::string::~string(&this->gear_place_effect);
  std::string::~string(&this->gear_can_not_place_effect);
  std::vector<unsigned int>::~vector(&this->gear_tooth_count);
  std::vector<float>::~vector(&this->gear_radius);
};

// Line 65: range 00000000134226B6-00000000134226E0
void __cdecl data::ActivityGearGadgetGearExcelConfig::~ActivityGearGadgetGearExcelConfig(
        data::ActivityGearGadgetGearExcelConfig *const this)
{
  data::ActivityGearGadgetGearExcelConfig::~ActivityGearGadgetGearExcelConfig(this);
  operator delete(this, 0xA8uLL);
};

// Line 83: range 0000000012EC5B7A-0000000012EC5CDF
void __cdecl data::ActivityGearGadgetShaftExcelConfig::ActivityGearGadgetShaftExcelConfig(
        data::ActivityGearGadgetShaftExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetShaftExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearGadgetShaftExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v3);
  }
  this->radius = 0.0;
  std::vector<float>::vector(&this->layer_offset_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->can_not_place_tip_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_not_place_tip_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_not_place_tip_offset, v3);
  }
  this->can_not_place_tip_offset = 0.0;
  std::vector<float>::vector(&this->clench_rate);
};

// Line 83: range 00000000133B456A-00000000133B47F6
void __cdecl data::ActivityGearGadgetShaftExcelConfig::ActivityGearGadgetShaftExcelConfig(
        data::ActivityGearGadgetShaftExcelConfig *const this,
        const data::ActivityGearGadgetShaftExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_id; // ecx
  char v7; // dl
  float radius; // xmm0_4
  float can_not_place_tip_offset; // xmm0_4
  const data::ActivityGearGadgetShaftExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetShaftExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGearGadgetShaftExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->gadget_id);
  }
  gadget_id = v10->gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->gadget_id, v5);
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->radius);
  }
  radius = v10->radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->radius, v5);
  }
  this->radius = radius;
  std::vector<float>::vector(&this->layer_offset_list, &v10->layer_offset_list);
  if ( *(_BYTE *)(((unsigned __int64)&v10->can_not_place_tip_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->can_not_place_tip_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->can_not_place_tip_offset);
  }
  can_not_place_tip_offset = v10->can_not_place_tip_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->can_not_place_tip_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->can_not_place_tip_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->can_not_place_tip_offset, &v10->layer_offset_list);
  }
  this->can_not_place_tip_offset = can_not_place_tip_offset;
  std::vector<float>::vector(&this->clench_rate, &v10->clench_rate);
};

// Line 86: range 00000000134225F6-0000000013422620
void __cdecl data::ActivityGearGadgetShaftExcelConfig::~ActivityGearGadgetShaftExcelConfig(
        data::ActivityGearGadgetShaftExcelConfig *const this)
{
  data::ActivityGearGadgetShaftExcelConfig::~ActivityGearGadgetShaftExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 86: range 0000000013422594-00000000134225F5
void __cdecl data::ActivityGearGadgetShaftExcelConfig::~ActivityGearGadgetShaftExcelConfig(
        data::ActivityGearGadgetShaftExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetShaftExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearGadgetShaftExcelConfig = v2;
  std::vector<float>::~vector(&this->clench_rate);
  std::vector<float>::~vector(&this->layer_offset_list);
};

// Line 102: range 0000000012EC5CE0-0000000012EC5E59
void __cdecl data::ActivityGearJigsawExcelConfig::ActivityGearJigsawExcelConfig(
        data::ActivityGearJigsawExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearJigsawExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearJigsawExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_quest_id, v3);
  }
  this->main_quest_id = 0;
  std::string::basic_string(&this->place_pos_select_effect);
  std::string::basic_string(&this->cover_up_effect);
  std::string::basic_string(&this->rotate_effect);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_state_trigger_id, v3);
  }
  this->quest_state_trigger_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->push_tips_id, (((_BYTE)this + 116) & 7u) + 3);
  }
  this->push_tips_id = 0;
};

// Line 102: range 00000000133B4938-00000000133B4BFE
void __cdecl data::ActivityGearJigsawExcelConfig::ActivityGearJigsawExcelConfig(
        data::ActivityGearJigsawExcelConfig *const this,
        const data::ActivityGearJigsawExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t main_quest_id; // ecx
  char v7; // dl
  std::string *p_rotate_effect; // rsi
  uint32_t quest_state_trigger_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t push_tips_id; // ecx
  char v13; // dl
  const data::ActivityGearJigsawExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGearJigsawExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGearJigsawExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->main_quest_id);
  }
  main_quest_id = v14->main_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->main_quest_id, v5);
  }
  this->main_quest_id = main_quest_id;
  std::string::basic_string(&this->place_pos_select_effect, &v14->place_pos_select_effect);
  std::string::basic_string(&this->cover_up_effect, &v14->cover_up_effect);
  p_rotate_effect = &v14->rotate_effect;
  std::string::basic_string(&this->rotate_effect, &v14->rotate_effect);
  if ( *(_BYTE *)(((unsigned __int64)&v14->quest_state_trigger_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->quest_state_trigger_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->quest_state_trigger_id);
  }
  quest_state_trigger_id = v14->quest_state_trigger_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->quest_state_trigger_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_rotate_effect) = v10 != 0;
    __asan_report_store4(&this->quest_state_trigger_id, p_rotate_effect);
  }
  this->quest_state_trigger_id = quest_state_trigger_id;
  v11 = (((_BYTE)v14 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->push_tips_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->push_tips_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->push_tips_id);
  }
  push_tips_id = v14->push_tips_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->push_tips_id, v11);
  }
  this->push_tips_id = push_tips_id;
};

// Line 105: range 0000000013422568-0000000013422592
void __cdecl data::ActivityGearJigsawExcelConfig::~ActivityGearJigsawExcelConfig(
        data::ActivityGearJigsawExcelConfig *const this)
{
  data::ActivityGearJigsawExcelConfig::~ActivityGearJigsawExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 105: range 00000000134224F6-0000000013422567
void __cdecl data::ActivityGearJigsawExcelConfig::~ActivityGearJigsawExcelConfig(
        data::ActivityGearJigsawExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearJigsawExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearJigsawExcelConfig = v2;
  std::string::~string(&this->rotate_effect);
  std::string::~string(&this->cover_up_effect);
  std::string::~string(&this->place_pos_select_effect);
};

// Line 122: range 0000000012EC5E5A-0000000012EC5FB3
void __cdecl data::ActivityGearGadgetJigsawExcelConfig::ActivityGearGadgetJigsawExcelConfig(
        data::ActivityGearGadgetJigsawExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetJigsawExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearGadgetJigsawExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_id, v3);
  }
  this->gadget_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->place_pos_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->place_pos_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->place_pos_id, v3);
  }
  this->place_pos_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->material_id = 0;
  std::string::basic_string(&this->rotate_effect);
};

// Line 122: range 00000000133B4D40-00000000133B4F94
void __cdecl data::ActivityGearGadgetJigsawExcelConfig::ActivityGearGadgetJigsawExcelConfig(
        data::ActivityGearGadgetJigsawExcelConfig *const this,
        const data::ActivityGearGadgetJigsawExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gadget_id; // ecx
  char v7; // dl
  uint32_t place_pos_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t material_id; // ecx
  char v12; // dl
  const data::ActivityGearGadgetJigsawExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetJigsawExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityGearGadgetJigsawExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gadget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gadget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gadget_id);
  }
  gadget_id = v13->gadget_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gadget_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gadget_id, v5);
  }
  this->gadget_id = gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->place_pos_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->place_pos_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->place_pos_id);
  }
  place_pos_id = v13->place_pos_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->place_pos_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->place_pos_id, v5);
  }
  this->place_pos_id = place_pos_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->material_id);
  }
  material_id = v13->material_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->material_id, v10);
  }
  this->material_id = material_id;
  std::string::basic_string(&this->rotate_effect, &v13->rotate_effect);
};

// Line 125: range 00000000134224CA-00000000134224F4
void __cdecl data::ActivityGearGadgetJigsawExcelConfig::~ActivityGearGadgetJigsawExcelConfig(
        data::ActivityGearGadgetJigsawExcelConfig *const this)
{
  data::ActivityGearGadgetJigsawExcelConfig::~ActivityGearGadgetJigsawExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 125: range 0000000013422478-00000000134224C9
void __cdecl data::ActivityGearGadgetJigsawExcelConfig::~ActivityGearGadgetJigsawExcelConfig(
        data::ActivityGearGadgetJigsawExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityGearGadgetJigsawExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityGearGadgetJigsawExcelConfig = v2;
  std::string::~string(&this->rotate_effect);
};
