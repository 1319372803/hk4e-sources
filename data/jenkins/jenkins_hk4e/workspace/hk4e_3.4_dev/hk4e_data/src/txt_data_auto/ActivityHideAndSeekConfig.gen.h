// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityHideAndSeekConfig.gen.h

// Line 67: range 0000000012EC9B18-0000000012EC9DCC
void __cdecl data::ActivityHideAndSeekBasicConfig::ActivityHideAndSeekBasicConfig(
        data::ActivityHideAndSeekBasicConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityHideAndSeekBasicConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityHideAndSeekBasicConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->match_id, v4);
  }
  this->match_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->draft_id, v4);
  }
  this->draft_id = 0;
  std::vector<unsigned int>::vector(&this->skill_list);
  std::vector<unsigned int>::vector(&this->map_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_item_id, v4);
  }
  this->score_item_id = 0;
  std::vector<std::string>::vector(&this->transfer_list);
  if ( *(char *)(((unsigned __int64)&this->is_punish_disappear >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_punish_disappear, v4, &this->is_punish_disappear);
  this->is_punish_disappear = 0;
  v5 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_punish_disappear_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_punish_disappear_time, v5);
  }
  this->first_punish_disappear_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->repeat_punish_disappear_time, v5);
  }
  this->repeat_punish_disappear_time = 0;
};

// Line 67: range 00000000133BA796-00000000133BACB6
void __cdecl data::ActivityHideAndSeekBasicConfig::ActivityHideAndSeekBasicConfig(
        data::ActivityHideAndSeekBasicConfig *const this,
        const data::ActivityHideAndSeekBasicConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t gallery_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t match_id; // ecx
  char v12; // dl
  uint32_t draft_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_map_list; // rsi
  uint32_t score_item_id; // ecx
  char v17; // al
  std::vector<std::string> *p_transfer_list; // rsi
  bool is_punish_disappear; // cl
  char v20; // al
  __int64 v21; // rsi
  uint32_t first_punish_disappear_time; // ecx
  char v23; // dl
  uint32_t repeat_punish_disappear_time; // ecx
  char v25; // al
  const data::ActivityHideAndSeekBasicConfig *v26; // [rsp+0h] [rbp-20h]

  v26 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityHideAndSeekBasicConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityHideAndSeekBasicConfig = v2;
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
  v5 = (((_BYTE)v26 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->activity_id);
  }
  activity_id = v26->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->gallery_id);
  }
  gallery_id = v26->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  v10 = (((_BYTE)v26 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->match_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->match_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->match_id);
  }
  match_id = v26->match_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->match_id, v10);
  }
  this->match_id = match_id;
  if ( *(_BYTE *)(((unsigned __int64)&v26->draft_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->draft_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->draft_id);
  }
  draft_id = v26->draft_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->draft_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->draft_id, v10);
  }
  this->draft_id = draft_id;
  std::vector<unsigned int>::vector(&this->skill_list, &v26->skill_list);
  p_map_list = &v26->map_list;
  std::vector<unsigned int>::vector(&this->map_list, &v26->map_list);
  if ( *(_BYTE *)(((unsigned __int64)&v26->score_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->score_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->score_item_id);
  }
  score_item_id = v26->score_item_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->score_item_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_map_list) = v17 != 0;
    __asan_report_store4(&this->score_item_id, p_map_list);
  }
  this->score_item_id = score_item_id;
  p_transfer_list = &v26->transfer_list;
  std::vector<std::string>::vector(&this->transfer_list, &v26->transfer_list);
  if ( *(char *)(((unsigned __int64)&v26->is_punish_disappear >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v26->is_punish_disappear, p_transfer_list, &v26->is_punish_disappear);
  is_punish_disappear = v26->is_punish_disappear;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_punish_disappear >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_transfer_list) = v20 != 0;
    __asan_report_store1(&this->is_punish_disappear, p_transfer_list, &this->is_punish_disappear);
  }
  this->is_punish_disappear = is_punish_disappear;
  v21 = (((_BYTE)v26 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->first_punish_disappear_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->first_punish_disappear_time);
  }
  first_punish_disappear_time = v26->first_punish_disappear_time;
  v23 = *(_BYTE *)(((unsigned __int64)&this->first_punish_disappear_time >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->first_punish_disappear_time, v21);
  }
  this->first_punish_disappear_time = first_punish_disappear_time;
  if ( *(_BYTE *)(((unsigned __int64)&v26->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->repeat_punish_disappear_time);
  }
  repeat_punish_disappear_time = v26->repeat_punish_disappear_time;
  v25 = *(_BYTE *)(((unsigned __int64)&this->repeat_punish_disappear_time >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->repeat_punish_disappear_time, v21);
  }
  this->repeat_punish_disappear_time = repeat_punish_disappear_time;
};

// Line 70: range 0000000013424E8E-0000000013424EFF
void __cdecl data::ActivityHideAndSeekBasicConfig::~ActivityHideAndSeekBasicConfig(
        data::ActivityHideAndSeekBasicConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityHideAndSeekBasicConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityHideAndSeekBasicConfig = v2;
  std::vector<std::string>::~vector(&this->transfer_list);
  std::vector<unsigned int>::~vector(&this->map_list);
  std::vector<unsigned int>::~vector(&this->skill_list);
};

// Line 70: range 0000000013424F00-0000000013424F2A
void __cdecl data::ActivityHideAndSeekBasicConfig::~ActivityHideAndSeekBasicConfig(
        data::ActivityHideAndSeekBasicConfig *const this)
{
  data::ActivityHideAndSeekBasicConfig::~ActivityHideAndSeekBasicConfig(this);
  operator delete(this, 0x80uLL);
};

// Line 92: range 00000000133BADF8-00000000133BB19B
void __cdecl data::HideAndSeekSkillExcelConfig::HideAndSeekSkillExcelConfig(
        data::HideAndSeekSkillExcelConfig *const this,
        const data::HideAndSeekSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t challenge_id; // ecx
  char v7; // dl
  uint32_t skill_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::HIDE_AND_SEEK_SKILL_CATEGORY skill_category; // ecx
  char v12; // dl
  data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY skill_sub_category; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool is_default; // cl
  char v18; // dl
  __int64 v19; // rdx
  uint32_t gallery_ability_group_index; // ecx
  char v21; // al
  const data::HideAndSeekSkillExcelConfig *v22; // [rsp+0h] [rbp-10h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::HideAndSeekSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_HideAndSeekSkillExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v22->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->challenge_id);
  }
  challenge_id = v22->challenge_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->challenge_id, v5);
  }
  this->challenge_id = challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&v22->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->skill_id);
  }
  skill_id = v22->skill_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->skill_id, v5);
  }
  this->skill_id = skill_id;
  v10 = (((_BYTE)v22 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->skill_category >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->skill_category >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->skill_category);
  }
  skill_category = v22->skill_category;
  v12 = *(_BYTE *)(((unsigned __int64)&this->skill_category >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->skill_category, v10);
  }
  this->skill_category = skill_category;
  if ( *(_BYTE *)(((unsigned __int64)&v22->skill_sub_category >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->skill_sub_category >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->skill_sub_category);
  }
  skill_sub_category = v22->skill_sub_category;
  v14 = *(_BYTE *)(((unsigned __int64)&this->skill_sub_category >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->skill_sub_category, v10);
  }
  this->skill_sub_category = skill_sub_category;
  v15 = ((_BYTE)v22 + 28) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&v22->is_default >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&v22->is_default >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&v22->is_default, v15, v16);
  is_default = v22->is_default;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_default >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_default, v15, v19);
  this->is_default = is_default;
  if ( *(_BYTE *)(((unsigned __int64)&v22->gallery_ability_group_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->gallery_ability_group_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->gallery_ability_group_index);
  }
  gallery_ability_group_index = v22->gallery_ability_group_index;
  v21 = *(_BYTE *)(((unsigned __int64)&this->gallery_ability_group_index >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(v15) = v21 != 0;
    __asan_report_store4(&this->gallery_ability_group_index, v15);
  }
  this->gallery_ability_group_index = gallery_ability_group_index;
};

// Line 95: range 0000000013424E20-0000000013424E61
void __cdecl data::HideAndSeekSkillExcelConfig::~HideAndSeekSkillExcelConfig(
        data::HideAndSeekSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HideAndSeekSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_HideAndSeekSkillExcelConfig = v2;
};

// Line 95: range 0000000013424E62-0000000013424E8C
void __cdecl data::HideAndSeekSkillExcelConfig::~HideAndSeekSkillExcelConfig(
        data::HideAndSeekSkillExcelConfig *const this)
{
  data::HideAndSeekSkillExcelConfig::~HideAndSeekSkillExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 112: range 0000000012EC9F30-0000000012ECA05F
void __cdecl data::HideAndSeekMatchExcelConfig::HideAndSeekMatchExcelConfig(
        data::HideAndSeekMatchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::MatchLimitExcelConfig::MatchLimitExcelConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::HideAndSeekMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchLimitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v1);
  }
  this->scene_id = 0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v3);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->transport_point_list);
  std::vector<unsigned int>::vector(&this->duration_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
};

// Line 112: range 00000000133BB2DC-00000000133BB511
void __cdecl data::HideAndSeekMatchExcelConfig::HideAndSeekMatchExcelConfig(
        data::HideAndSeekMatchExcelConfig *const this,
        const data::HideAndSeekMatchExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t scene_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t group_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_duration_list; // rsi
  uint32_t gallery_id; // ecx
  char v10; // al
  const data::HideAndSeekMatchExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  data::MatchLimitExcelConfig::MatchLimitExcelConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::HideAndSeekMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MatchLimitExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->scene_id, a2);
  }
  this->scene_id = scene_id;
  v5 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->group_id);
  }
  group_id = v11->group_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->transport_point_list, &v11->transport_point_list);
  p_duration_list = &v11->duration_list;
  std::vector<unsigned int>::vector(&this->duration_list, &v11->duration_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->gallery_id);
  }
  gallery_id = v11->gallery_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_duration_list) = v10 != 0;
    __asan_report_store4(&this->gallery_id, p_duration_list);
  }
  this->gallery_id = gallery_id;
};

// Line 116: range 0000000013424D86-0000000013424DF3
void __cdecl data::HideAndSeekMatchExcelConfig::~HideAndSeekMatchExcelConfig(
        data::HideAndSeekMatchExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::HideAndSeekMatchExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MatchLimitExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->duration_list);
  std::vector<unsigned int>::~vector(&this->transport_point_list);
  data::MatchLimitExcelConfig::~MatchLimitExcelConfig(this);
};

// Line 116: range 0000000013424DF4-0000000013424E1E
void __cdecl data::HideAndSeekMatchExcelConfig::~HideAndSeekMatchExcelConfig(
        data::HideAndSeekMatchExcelConfig *const this)
{
  data::HideAndSeekMatchExcelConfig::~HideAndSeekMatchExcelConfig(this);
  operator delete(this, 0x68uLL);
};
