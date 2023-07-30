// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityPhotographExcelConfig.gen.h

// Line 17: range 0000000012ED2518-0000000012ED28D3
void __cdecl data::ActivityPhotographExcelConfig::ActivityPhotographExcelConfig(
        data::ActivityPhotographExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityPhotographExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPhotographExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->photo_pos_id_list);
  std::vector<unsigned int>::vector(&this->photo_useable_widget_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->fov_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fov_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fov_max, v3);
  }
  this->fov_max = 0.0;
  v4 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fov_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fov_min, v4);
  }
  this->fov_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov_default >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fov_default >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fov_default, v4);
  }
  this->fov_default = 0.0;
  v5 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_up >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_shift_up, v5);
  }
  this->camera_shift_up = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_shift_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_shift_down, v5);
  }
  this->camera_shift_down = 0.0;
  v6 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_left >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_shift_left, v6);
  }
  this->camera_shift_left = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_right >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_shift_right >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_shift_right, v6);
  }
  this->camera_shift_right = 0.0;
  v7 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_acception_mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_acception_mark_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_acception_mark_id, v7);
  }
  this->quest_acception_mark_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->push_tips_id, v7);
  }
  this->push_tips_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_pos_tip_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_pos_tip_offset >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_pos_tip_offset, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->camera_pos_tip_offset = 0.0;
  std::vector<unsigned int>::vector(&this->extra_tip_middle_quest1);
  std::vector<unsigned int>::vector(&this->extra_tip_middle_quest2);
  std::vector<unsigned int>::vector(&this->extra_tip_middle_quest3);
};

// Line 17: range 00000000133A9C22-00000000133AA34D
void __cdecl data::ActivityPhotographExcelConfig::ActivityPhotographExcelConfig(
        data::ActivityPhotographExcelConfig *const this,
        const data::ActivityPhotographExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  float fov_max; // xmm0_4
  float fov_min; // xmm0_4
  __int64 v10; // rsi
  float fov_default; // xmm0_4
  float camera_shift_up; // xmm0_4
  __int64 v13; // rsi
  float camera_shift_down; // xmm0_4
  float camera_shift_left; // xmm0_4
  __int64 v16; // rsi
  float camera_shift_right; // xmm0_4
  __int64 v18; // rsi
  uint32_t quest_acception_mark_id; // ecx
  char v20; // dl
  uint32_t push_tips_id; // ecx
  char v22; // al
  float camera_pos_tip_offset; // xmm0_4
  const data::ActivityPhotographExcelConfig *v24; // [rsp+0h] [rbp-20h]

  v24 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPhotographExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPhotographExcelConfig = v2;
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
  v5 = (((_BYTE)v24 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->activity_id);
  }
  activity_id = v24->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  std::vector<unsigned int>::vector(&this->photo_pos_id_list, &v24->photo_pos_id_list);
  std::vector<unsigned int>::vector(&this->photo_useable_widget_list, &v24->photo_useable_widget_list);
  if ( *(_BYTE *)(((unsigned __int64)&v24->fov_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->fov_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->fov_max);
  }
  fov_max = v24->fov_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fov_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fov_max, &v24->photo_useable_widget_list);
  }
  this->fov_max = fov_max;
  if ( *(_BYTE *)(((unsigned __int64)&v24->fov_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->fov_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->fov_min);
  }
  fov_min = v24->fov_min;
  v10 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fov_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fov_min, v10);
  }
  this->fov_min = fov_min;
  if ( *(_BYTE *)(((unsigned __int64)&v24->fov_default >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->fov_default >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->fov_default);
  }
  fov_default = v24->fov_default;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov_default >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fov_default >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fov_default, v10);
  }
  this->fov_default = fov_default;
  if ( *(_BYTE *)(((unsigned __int64)&v24->camera_shift_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->camera_shift_up >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->camera_shift_up);
  }
  camera_shift_up = v24->camera_shift_up;
  v13 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_up >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_up >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_shift_up, v13);
  }
  this->camera_shift_up = camera_shift_up;
  if ( *(_BYTE *)(((unsigned __int64)&v24->camera_shift_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->camera_shift_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->camera_shift_down);
  }
  camera_shift_down = v24->camera_shift_down;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_down >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_shift_down >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_shift_down, v13);
  }
  this->camera_shift_down = camera_shift_down;
  if ( *(_BYTE *)(((unsigned __int64)&v24->camera_shift_left >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->camera_shift_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->camera_shift_left);
  }
  camera_shift_left = v24->camera_shift_left;
  v16 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_left >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_shift_left >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_shift_left, v16);
  }
  this->camera_shift_left = camera_shift_left;
  if ( *(_BYTE *)(((unsigned __int64)&v24->camera_shift_right >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->camera_shift_right >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->camera_shift_right);
  }
  camera_shift_right = v24->camera_shift_right;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_shift_right >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->camera_shift_right >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->camera_shift_right, v16);
  }
  this->camera_shift_right = camera_shift_right;
  v18 = (((_BYTE)v24 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->quest_acception_mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->quest_acception_mark_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->quest_acception_mark_id);
  }
  quest_acception_mark_id = v24->quest_acception_mark_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->quest_acception_mark_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->quest_acception_mark_id, v18);
  }
  this->quest_acception_mark_id = quest_acception_mark_id;
  if ( *(_BYTE *)(((unsigned __int64)&v24->push_tips_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->push_tips_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->push_tips_id);
  }
  push_tips_id = v24->push_tips_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->push_tips_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->push_tips_id, v18);
  }
  this->push_tips_id = push_tips_id;
  if ( *(_BYTE *)(((unsigned __int64)&v24->camera_pos_tip_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->camera_pos_tip_offset >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->camera_pos_tip_offset);
  }
  camera_pos_tip_offset = v24->camera_pos_tip_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->camera_pos_tip_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->camera_pos_tip_offset >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->camera_pos_tip_offset, (((_BYTE)this + 100) & 7u) + 3);
  }
  this->camera_pos_tip_offset = camera_pos_tip_offset;
  std::vector<unsigned int>::vector(&this->extra_tip_middle_quest1, &v24->extra_tip_middle_quest1);
  std::vector<unsigned int>::vector(&this->extra_tip_middle_quest2, &v24->extra_tip_middle_quest2);
  std::vector<unsigned int>::vector(&this->extra_tip_middle_quest3, &v24->extra_tip_middle_quest3);
};

// Line 20: range 0000000013422C66-0000000013422CF9
void __cdecl data::ActivityPhotographExcelConfig::~ActivityPhotographExcelConfig(
        data::ActivityPhotographExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPhotographExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPhotographExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->extra_tip_middle_quest3);
  std::vector<unsigned int>::~vector(&this->extra_tip_middle_quest2);
  std::vector<unsigned int>::~vector(&this->extra_tip_middle_quest1);
  std::vector<unsigned int>::~vector(&this->photo_useable_widget_list);
  std::vector<unsigned int>::~vector(&this->photo_pos_id_list);
};

// Line 20: range 0000000013422CFA-0000000013422D24
void __cdecl data::ActivityPhotographExcelConfig::~ActivityPhotographExcelConfig(
        data::ActivityPhotographExcelConfig *const this)
{
  data::ActivityPhotographExcelConfig::~ActivityPhotographExcelConfig(this);
  operator delete(this, 0xB0uLL);
};

// Line 47: range 0000000012ED28D4-0000000012ED2B24
void __cdecl data::ActivityPhotographPosExcelConfig::ActivityPhotographPosExcelConfig(
        data::ActivityPhotographPosExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityPhotographPosExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPhotographPosExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_link_id, v3);
  }
  this->group_link_id = 0;
  std::string::basic_string(&this->pic_small);
  std::string::basic_string(&this->pic_big);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  v4 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->watcher_id, v4);
  }
  this->watcher_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  v5 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->red_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->red_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->red_point_id, v5);
  }
  this->red_point_id = 0;
  std::vector<std::string>::vector(&this->preset_preview_icon_girl);
  std::vector<std::string>::vector(&this->preset_preview_icon_boy);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v5);
  }
  this->scene_id = 0;
};

// Line 47: range 00000000133C6EF2-00000000133C7361
void __cdecl data::ActivityPhotographPosExcelConfig::ActivityPhotographPosExcelConfig(
        data::ActivityPhotographPosExcelConfig *const this,
        const data::ActivityPhotographPosExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_link_id; // ecx
  char v7; // dl
  std::string *p_pic_big; // rsi
  uint32_t open_day; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t watcher_id; // ecx
  char v13; // dl
  uint32_t gallery_id; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t red_point_id; // ecx
  char v18; // dl
  std::vector<std::string> *p_preset_preview_icon_boy; // rsi
  uint32_t scene_id; // ecx
  char v21; // al
  const data::ActivityPhotographPosExcelConfig *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityPhotographPosExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityPhotographPosExcelConfig = v2;
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
  v5 = (((_BYTE)v22 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->group_link_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->group_link_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->group_link_id);
  }
  group_link_id = v22->group_link_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_link_id, v5);
  }
  this->group_link_id = group_link_id;
  std::string::basic_string(&this->pic_small, &v22->pic_small);
  p_pic_big = &v22->pic_big;
  std::string::basic_string(&this->pic_big, &v22->pic_big);
  if ( *(_BYTE *)(((unsigned __int64)&v22->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->open_day);
  }
  open_day = v22->open_day;
  v10 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_pic_big) = v10 != 0;
    __asan_report_store4(&this->open_day, p_pic_big);
  }
  this->open_day = open_day;
  v11 = (((_BYTE)v22 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->watcher_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->watcher_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->watcher_id);
  }
  watcher_id = v22->watcher_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->watcher_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->watcher_id, v11);
  }
  this->watcher_id = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&v22->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->gallery_id);
  }
  gallery_id = v22->gallery_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v11) = v15 != 0;
    __asan_report_store4(&this->gallery_id, v11);
  }
  this->gallery_id = gallery_id;
  v16 = (((_BYTE)v22 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->red_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->red_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->red_point_id);
  }
  red_point_id = v22->red_point_id;
  v18 = *(_BYTE *)(((unsigned __int64)&this->red_point_id >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->red_point_id, v16);
  }
  this->red_point_id = red_point_id;
  std::vector<std::string>::vector(&this->preset_preview_icon_girl, &v22->preset_preview_icon_girl);
  p_preset_preview_icon_boy = &v22->preset_preview_icon_boy;
  std::vector<std::string>::vector(&this->preset_preview_icon_boy, &v22->preset_preview_icon_boy);
  if ( *(_BYTE *)(((unsigned __int64)&v22->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->scene_id);
  }
  scene_id = v22->scene_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(p_preset_preview_icon_boy) = v21 != 0;
    __asan_report_store4(&this->scene_id, p_preset_preview_icon_boy);
  }
  this->scene_id = scene_id;
};

// Line 50: range 0000000013422BB8-0000000013422C39
void __cdecl data::ActivityPhotographPosExcelConfig::~ActivityPhotographPosExcelConfig(
        data::ActivityPhotographPosExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityPhotographPosExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityPhotographPosExcelConfig = v2;
  std::vector<std::string>::~vector(&this->preset_preview_icon_boy);
  std::vector<std::string>::~vector(&this->preset_preview_icon_girl);
  std::string::~string(&this->pic_big);
  std::string::~string(&this->pic_small);
};

// Line 50: range 0000000013422C3A-0000000013422C64
void __cdecl data::ActivityPhotographPosExcelConfig::~ActivityPhotographPosExcelConfig(
        data::ActivityPhotographPosExcelConfig *const this)
{
  data::ActivityPhotographPosExcelConfig::~ActivityPhotographPosExcelConfig(this);
  operator delete(this, 0x98uLL);
};
