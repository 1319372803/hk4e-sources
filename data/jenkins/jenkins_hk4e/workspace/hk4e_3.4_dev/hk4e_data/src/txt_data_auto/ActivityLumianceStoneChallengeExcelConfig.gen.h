// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityLumianceStoneChallengeExcelConfig.gen.h

// Line 17: range 0000000012ECAD60-0000000012ECAE93
void __cdecl data::LuminanceStoneChallengeStageExcelConfig::LuminanceStoneChallengeStageExcelConfig(
        data::LuminanceStoneChallengeStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LuminanceStoneChallengeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LuminanceStoneChallengeStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  std::vector<unsigned int>::vector(&this->related_cond_id);
  std::vector<unsigned int>::vector(&this->watcher_list);
  std::vector<unsigned int>::vector(&this->quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->bundle_id, v3);
  }
  this->bundle_id = 0;
};

// Line 17: range 00000000133A78F4-00000000133A7B35
void __cdecl data::LuminanceStoneChallengeStageExcelConfig::LuminanceStoneChallengeStageExcelConfig(
        data::LuminanceStoneChallengeStageExcelConfig *const this,
        const data::LuminanceStoneChallengeStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_quest_list; // rsi
  uint32_t bundle_id; // ecx
  char v10; // al
  const data::LuminanceStoneChallengeStageExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LuminanceStoneChallengeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LuminanceStoneChallengeStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->day_index);
  }
  day_index = v11->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  std::vector<unsigned int>::vector(&this->related_cond_id, &v11->related_cond_id);
  std::vector<unsigned int>::vector(&this->watcher_list, &v11->watcher_list);
  p_quest_list = &v11->quest_list;
  std::vector<unsigned int>::vector(&this->quest_list, &v11->quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->bundle_id);
  }
  bundle_id = v11->bundle_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->bundle_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_quest_list) = v10 != 0;
    __asan_report_store4(&this->bundle_id, p_quest_list);
  }
  this->bundle_id = bundle_id;
};

// Line 20: range 00000000134228D2-0000000013422943
void __cdecl data::LuminanceStoneChallengeStageExcelConfig::~LuminanceStoneChallengeStageExcelConfig(
        data::LuminanceStoneChallengeStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LuminanceStoneChallengeStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LuminanceStoneChallengeStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->quest_list);
  std::vector<unsigned int>::~vector(&this->watcher_list);
  std::vector<unsigned int>::~vector(&this->related_cond_id);
};

// Line 20: range 0000000013422944-000000001342296E
void __cdecl data::LuminanceStoneChallengeStageExcelConfig::~LuminanceStoneChallengeStageExcelConfig(
        data::LuminanceStoneChallengeStageExcelConfig *const this)
{
  data::LuminanceStoneChallengeStageExcelConfig::~LuminanceStoneChallengeStageExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 36: range 0000000012ECAE94-0000000012ECB03B
void __cdecl data::LuminanceStoneChallengeOverallExcelConfig::LuminanceStoneChallengeOverallExcelConfig(
        data::LuminanceStoneChallengeOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LuminanceStoneChallengeOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LuminanceStoneChallengeOverallExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->final_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->final_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->final_stage_id, v3);
  }
  this->final_stage_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->final_gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->final_gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->final_gallery_id, v4);
  }
  this->final_gallery_id = 0;
  std::vector<unsigned int>::vector(&this->parent_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview_id, v4);
  }
  this->reward_preview_id = 0;
  std::string::basic_string(&this->gallery_rule_desc);
};

// Line 36: range 00000000133A7532-00000000133A783D
void __cdecl data::LuminanceStoneChallengeOverallExcelConfig::LuminanceStoneChallengeOverallExcelConfig(
        data::LuminanceStoneChallengeOverallExcelConfig *const this,
        const data::LuminanceStoneChallengeOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t final_stage_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t final_gallery_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_parent_quest_id_list; // rsi
  uint32_t reward_preview_id; // ecx
  char v15; // al
  const data::LuminanceStoneChallengeOverallExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LuminanceStoneChallengeOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LuminanceStoneChallengeOverallExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->activity_id);
  }
  activity_id = v16->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v16->final_stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->final_stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->final_stage_id);
  }
  final_stage_id = v16->final_stage_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->final_stage_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->final_stage_id, v5);
  }
  this->final_stage_id = final_stage_id;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->final_gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->final_gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->final_gallery_id);
  }
  final_gallery_id = v16->final_gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->final_gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->final_gallery_id, v10);
  }
  this->final_gallery_id = final_gallery_id;
  p_parent_quest_id_list = &v16->parent_quest_id_list;
  std::vector<unsigned int>::vector(&this->parent_quest_id_list, &v16->parent_quest_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->reward_preview_id);
  }
  reward_preview_id = v16->reward_preview_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_parent_quest_id_list) = v15 != 0;
    __asan_report_store4(&this->reward_preview_id, p_parent_quest_id_list);
  }
  this->reward_preview_id = reward_preview_id;
  std::string::basic_string(&this->gallery_rule_desc, &v16->gallery_rule_desc);
};

// Line 39: range 0000000013422844-00000000134228A5
void __cdecl data::LuminanceStoneChallengeOverallExcelConfig::~LuminanceStoneChallengeOverallExcelConfig(
        data::LuminanceStoneChallengeOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LuminanceStoneChallengeOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LuminanceStoneChallengeOverallExcelConfig = v2;
  std::string::~string(&this->gallery_rule_desc);
  std::vector<unsigned int>::~vector(&this->parent_quest_id_list);
};

// Line 39: range 00000000134228A6-00000000134228D0
void __cdecl data::LuminanceStoneChallengeOverallExcelConfig::~LuminanceStoneChallengeOverallExcelConfig(
        data::LuminanceStoneChallengeOverallExcelConfig *const this)
{
  data::LuminanceStoneChallengeOverallExcelConfig::~LuminanceStoneChallengeOverallExcelConfig(this);
  operator delete(this, 0x58uLL);
};
