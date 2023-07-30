// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityVintageExcelConfig.gen.h

// Line 65: range 0000000013BD93AE-0000000013BD9647
void __cdecl data::ActivityVintageDataExcelConfig::ActivityVintageDataExcelConfig(
        data::ActivityVintageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview_id, v3);
  }
  this->reward_preview_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pre_chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_pre_chapter_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_pre_chapter_id, v4);
  }
  this->first_pre_chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->second_pre_chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->second_pre_chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->second_pre_chapter_id, v4);
  }
  this->second_pre_chapter_id = 0;
  std::vector<unsigned int>::vector(&this->weapon_watcher_ids);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pre_main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_pre_main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_pre_main_quest_id, v4);
  }
  this->first_pre_main_quest_id = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->second_pre_main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->second_pre_main_quest_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->second_pre_main_quest_id, v5);
  }
  this->second_pre_main_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_heat >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_heat >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_heat, v5);
  }
  this->max_heat = 0;
  v6 = ((_BYTE)this + 68) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_quest_isolated >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_quest_isolated >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_quest_isolated, v6, v7);
  this->is_quest_isolated = 0;
};

// Line 65: range 0000000014194426-00000000141948DE
void __cdecl data::ActivityVintageDataExcelConfig::ActivityVintageDataExcelConfig(
        data::ActivityVintageDataExcelConfig *const this,
        const data::ActivityVintageDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t reward_preview_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t first_pre_chapter_id; // ecx
  char v12; // dl
  uint32_t second_pre_chapter_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_weapon_watcher_ids; // rsi
  uint32_t first_pre_main_quest_id; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t second_pre_main_quest_id; // ecx
  char v20; // dl
  uint32_t max_heat; // ecx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_quest_isolated; // cl
  char v26; // dl
  __int64 v27; // rdx
  const data::ActivityVintageDataExcelConfig *v28; // [rsp+0h] [rbp-10h]

  v28 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintageDataExcelConfig = v2;
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
  v5 = (((_BYTE)v28 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->activity_id);
  }
  activity_id = v28->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->reward_preview_id);
  }
  reward_preview_id = v28->reward_preview_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_preview_id, v5);
  }
  this->reward_preview_id = reward_preview_id;
  v10 = (((_BYTE)v28 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->first_pre_chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->first_pre_chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->first_pre_chapter_id);
  }
  first_pre_chapter_id = v28->first_pre_chapter_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->first_pre_chapter_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->first_pre_chapter_id, v10);
  }
  this->first_pre_chapter_id = first_pre_chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->second_pre_chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->second_pre_chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->second_pre_chapter_id);
  }
  second_pre_chapter_id = v28->second_pre_chapter_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->second_pre_chapter_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->second_pre_chapter_id, v10);
  }
  this->second_pre_chapter_id = second_pre_chapter_id;
  p_weapon_watcher_ids = &v28->weapon_watcher_ids;
  std::vector<unsigned int>::vector(&this->weapon_watcher_ids, &v28->weapon_watcher_ids);
  if ( *(_BYTE *)(((unsigned __int64)&v28->first_pre_main_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->first_pre_main_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->first_pre_main_quest_id);
  }
  first_pre_main_quest_id = v28->first_pre_main_quest_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->first_pre_main_quest_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_weapon_watcher_ids) = v17 != 0;
    __asan_report_store4(&this->first_pre_main_quest_id, p_weapon_watcher_ids);
  }
  this->first_pre_main_quest_id = first_pre_main_quest_id;
  v18 = (((_BYTE)v28 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->second_pre_main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->second_pre_main_quest_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->second_pre_main_quest_id);
  }
  second_pre_main_quest_id = v28->second_pre_main_quest_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->second_pre_main_quest_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->second_pre_main_quest_id, v18);
  }
  this->second_pre_main_quest_id = second_pre_main_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->max_heat >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->max_heat >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->max_heat);
  }
  max_heat = v28->max_heat;
  v22 = *(_BYTE *)(((unsigned __int64)&this->max_heat >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->max_heat, v18);
  }
  this->max_heat = max_heat;
  v23 = ((_BYTE)v28 + 68) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&v28->is_quest_isolated >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&v28->is_quest_isolated >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&v28->is_quest_isolated, v23, v24);
  is_quest_isolated = v28->is_quest_isolated;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_quest_isolated >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->is_quest_isolated, v23, v27);
  this->is_quest_isolated = is_quest_isolated;
};

// Line 68: range 00000000142A29D6-00000000142A2A27
void __cdecl data::ActivityVintageDataExcelConfig::~ActivityVintageDataExcelConfig(
        data::ActivityVintageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->weapon_watcher_ids);
};

// Line 68: range 00000000142A2A28-00000000142A2A52
void __cdecl data::ActivityVintageDataExcelConfig::~ActivityVintageDataExcelConfig(
        data::ActivityVintageDataExcelConfig *const this)
{
  data::ActivityVintageDataExcelConfig::~ActivityVintageDataExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 88: range 0000000014194A20-0000000014194C59
void __cdecl data::ActivityVintageQuestDataExcelConfig::ActivityVintageQuestDataExcelConfig(
        data::ActivityVintageQuestDataExcelConfig *const this,
        const data::ActivityVintageQuestDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t quest_id; // ecx
  char v7; // dl
  uint32_t pre_quest_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t open_index; // ecx
  char v12; // dl
  const data::ActivityVintageQuestDataExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageQuestDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintageQuestDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->quest_id);
  }
  quest_id = v13->quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->pre_quest_id);
  }
  pre_quest_id = v13->pre_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->pre_quest_id, v5);
  }
  this->pre_quest_id = pre_quest_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->open_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->open_index);
  }
  open_index = v13->open_index;
  v12 = *(_BYTE *)(((unsigned __int64)&this->open_index >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->open_index, v10);
  }
  this->open_index = open_index;
};

// Line 91: range 00000000142A2968-00000000142A29A9
void __cdecl data::ActivityVintageQuestDataExcelConfig::~ActivityVintageQuestDataExcelConfig(
        data::ActivityVintageQuestDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageQuestDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageQuestDataExcelConfig = v2;
};

// Line 91: range 00000000142A29AA-00000000142A29D4
void __cdecl data::ActivityVintageQuestDataExcelConfig::~ActivityVintageQuestDataExcelConfig(
        data::ActivityVintageQuestDataExcelConfig *const this)
{
  data::ActivityVintageQuestDataExcelConfig::~ActivityVintageQuestDataExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 94: range 00000000133CFD10-00000000133CFEA7
void __cdecl data::ActivityVintagePresentExcelConfig::ActivityVintagePresentExcelConfig(
        data::ActivityVintagePresentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintagePresentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintagePresentExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->present_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->present_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->present_id, v1);
  }
  this->present_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_order, v3);
  }
  this->open_order = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->group_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_id, v3);
  }
  this->reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->present_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->present_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->present_type, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->present_type = PRESENT_TYPE_NONE;
};

// Line 105: range 0000000014194D9A-0000000014194FD3
void __cdecl data::ActivityVintagePlayTypeExcelConfig::ActivityVintagePlayTypeExcelConfig(
        data::ActivityVintagePlayTypeExcelConfig *const this,
        const data::ActivityVintagePlayTypeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  uint32_t open_cond; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t guide_quest_id; // ecx
  char v12; // dl
  const data::ActivityVintagePlayTypeExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintagePlayTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintagePlayTypeExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->open_day);
  }
  open_day = v13->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_cond >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->open_cond >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->open_cond);
  }
  open_cond = v13->open_cond;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_cond >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_cond, v5);
  }
  this->open_cond = open_cond;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->guide_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->guide_quest_id);
  }
  guide_quest_id = v13->guide_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->guide_quest_id, v10);
  }
  this->guide_quest_id = guide_quest_id;
};

// Line 108: range 00000000142A28FA-00000000142A293B
void __cdecl data::ActivityVintagePlayTypeExcelConfig::~ActivityVintagePlayTypeExcelConfig(
        data::ActivityVintagePlayTypeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintagePlayTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintagePlayTypeExcelConfig = v2;
};

// Line 108: range 00000000142A293C-00000000142A2966
void __cdecl data::ActivityVintagePlayTypeExcelConfig::~ActivityVintagePlayTypeExcelConfig(
        data::ActivityVintagePlayTypeExcelConfig *const this)
{
  data::ActivityVintagePlayTypeExcelConfig::~ActivityVintagePlayTypeExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 122: range 0000000013BD9648-0000000013BD98D9
void __cdecl data::ActivityVintageHuntingExcelConfig::ActivityVintageHuntingExcelConfig(
        data::ActivityVintageHuntingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageHuntingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageHuntingExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_order, v3);
  }
  this->open_order = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_trigger_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->quest_trigger_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->quest_trigger_id, v4);
  }
  this->quest_trigger_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_quest_id, v4);
  }
  this->guide_quest_id = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v5);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->point_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->point_id = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list);
  std::vector<unsigned int>::vector(&this->group_bundle_id_list);
  std::vector<unsigned int>::vector(&this->watcher_ids);
  std::vector<unsigned int>::vector(&this->boar_score_list);
};

// Line 122: range 0000000014195114-00000000141955FE
void __cdecl data::ActivityVintageHuntingExcelConfig::ActivityVintageHuntingExcelConfig(
        data::ActivityVintageHuntingExcelConfig *const this,
        const data::ActivityVintageHuntingExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_order; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t quest_trigger_id; // ecx
  char v12; // dl
  uint32_t guide_quest_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t gallery_id; // ecx
  char v17; // dl
  uint32_t group_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t point_id; // ecx
  char v22; // dl
  const data::ActivityVintageHuntingExcelConfig *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageHuntingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintageHuntingExcelConfig = v2;
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
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->open_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->open_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->open_order);
  }
  open_order = v23->open_order;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_order, v5);
  }
  this->open_order = open_order;
  if ( *(_BYTE *)(((unsigned __int64)&v23->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->open_day);
  }
  open_day = v23->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->quest_trigger_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->quest_trigger_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->quest_trigger_id);
  }
  quest_trigger_id = v23->quest_trigger_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->quest_trigger_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->quest_trigger_id, v10);
  }
  this->quest_trigger_id = quest_trigger_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->guide_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->guide_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->guide_quest_id);
  }
  guide_quest_id = v23->guide_quest_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->guide_quest_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->guide_quest_id, v10);
  }
  this->guide_quest_id = guide_quest_id;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->gallery_id);
  }
  gallery_id = v23->gallery_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->gallery_id, v15);
  }
  this->gallery_id = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->group_id);
  }
  group_id = v23->group_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->group_id, v15);
  }
  this->group_id = group_id;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->point_id);
  }
  point_id = v23->point_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->point_id, v20);
  }
  this->point_id = point_id;
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list, &v23->trial_avatar_id_list);
  std::vector<unsigned int>::vector(&this->group_bundle_id_list, &v23->group_bundle_id_list);
  std::vector<unsigned int>::vector(&this->watcher_ids, &v23->watcher_ids);
  std::vector<unsigned int>::vector(&this->boar_score_list, &v23->boar_score_list);
};

// Line 125: range 00000000142A28CE-00000000142A28F8
void __cdecl data::ActivityVintageHuntingExcelConfig::~ActivityVintageHuntingExcelConfig(
        data::ActivityVintageHuntingExcelConfig *const this)
{
  data::ActivityVintageHuntingExcelConfig::~ActivityVintageHuntingExcelConfig(this);
  operator delete(this, 0x88uLL);
};

// Line 125: range 00000000142A284C-00000000142A28CD
void __cdecl data::ActivityVintageHuntingExcelConfig::~ActivityVintageHuntingExcelConfig(
        data::ActivityVintageHuntingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageHuntingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageHuntingExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->boar_score_list);
  std::vector<unsigned int>::~vector(&this->watcher_ids);
  std::vector<unsigned int>::~vector(&this->group_bundle_id_list);
  std::vector<unsigned int>::~vector(&this->trial_avatar_id_list);
};

// Line 147: range 0000000013BD98DA-0000000013BD9969
void __cdecl data::ActivityVintageHuntingMonsterExcelConfig::ActivityVintageHuntingMonsterExcelConfig(
        data::ActivityVintageHuntingMonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageHuntingMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageHuntingMonsterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->monster_id_list);
};

// Line 147: range 0000000014195740-0000000014195815
void __cdecl data::ActivityVintageHuntingMonsterExcelConfig::ActivityVintageHuntingMonsterExcelConfig(
        data::ActivityVintageHuntingMonsterExcelConfig *const this,
        const data::ActivityVintageHuntingMonsterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ActivityVintageHuntingMonsterExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageHuntingMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintageHuntingMonsterExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->monster_id_list, &v5->monster_id_list);
};

// Line 150: range 00000000142A27CE-00000000142A281F
void __cdecl data::ActivityVintageHuntingMonsterExcelConfig::~ActivityVintageHuntingMonsterExcelConfig(
        data::ActivityVintageHuntingMonsterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageHuntingMonsterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageHuntingMonsterExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->monster_id_list);
};

// Line 150: range 00000000142A2820-00000000142A284A
void __cdecl data::ActivityVintageHuntingMonsterExcelConfig::~ActivityVintageHuntingMonsterExcelConfig(
        data::ActivityVintageHuntingMonsterExcelConfig *const this)
{
  data::ActivityVintageHuntingMonsterExcelConfig::~ActivityVintageHuntingMonsterExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 162: range 0000000014195942-0000000014195C0B
void __cdecl data::ActivityVintagePresentExcelConfig::ActivityVintagePresentExcelConfig(
        data::ActivityVintagePresentExcelConfig *const this,
        const data::ActivityVintagePresentExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t present_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_order; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  std::vector<unsigned int> *p_group_id_list; // rsi
  uint32_t reward_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  data::PresentType present_type; // ecx
  char v15; // dl
  const data::ActivityVintagePresentExcelConfig *v16; // [rsp+0h] [rbp-10h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintagePresentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintagePresentExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->present_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->present_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->present_id);
  }
  present_id = a2->present_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->present_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->present_id, a2);
  }
  this->present_id = present_id;
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->open_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->open_order);
  }
  open_order = v16->open_order;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_order, v5);
  }
  this->open_order = open_order;
  if ( *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->open_day);
  }
  open_day = v16->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  p_group_id_list = &v16->group_id_list;
  std::vector<unsigned int>::vector(&this->group_id_list, &v16->group_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->reward_id);
  }
  reward_id = v16->reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_group_id_list) = v12 != 0;
    __asan_report_store4(&this->reward_id, p_group_id_list);
  }
  this->reward_id = reward_id;
  v13 = (((_BYTE)v16 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->present_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->present_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->present_type);
  }
  present_type = v16->present_type;
  v15 = *(_BYTE *)(((unsigned __int64)&this->present_type >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->present_type, v13);
  }
  this->present_type = present_type;
};

// Line 165: range 00000000132F7FD6-00000000132F8000
void __cdecl data::ActivityVintagePresentExcelConfig::~ActivityVintagePresentExcelConfig(
        data::ActivityVintagePresentExcelConfig *const this)
{
  data::ActivityVintagePresentExcelConfig::~ActivityVintagePresentExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 165: range 00000000132F7F84-00000000132F7FD5
void __cdecl data::ActivityVintagePresentExcelConfig::~ActivityVintagePresentExcelConfig(
        data::ActivityVintagePresentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintagePresentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintagePresentExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->group_id_list);
};

// Line 181: range 0000000013BD996A-0000000013BD9A19
void __cdecl data::ActivityVintageDecoExcelConfig::ActivityVintageDecoExcelConfig(
        data::ActivityVintageDecoExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageDecoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageDecoExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->edit_group_id_list);
  std::vector<unsigned int>::vector(&this->watcher_ids);
  std::vector<unsigned int>::vector(&this->furniture_ids);
};

// Line 181: range 0000000014195CDA-0000000014195E21
void __cdecl data::ActivityVintageDecoExcelConfig::ActivityVintageDecoExcelConfig(
        data::ActivityVintageDecoExcelConfig *const this,
        const data::ActivityVintageDecoExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ActivityVintageDecoExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageDecoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintageDecoExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->edit_group_id_list, &v5->edit_group_id_list);
  std::vector<unsigned int>::vector(&this->watcher_ids, &v5->watcher_ids);
  std::vector<unsigned int>::vector(&this->furniture_ids, &v5->furniture_ids);
};

// Line 184: range 00000000142A27A2-00000000142A27CC
void __cdecl data::ActivityVintageDecoExcelConfig::~ActivityVintageDecoExcelConfig(
        data::ActivityVintageDecoExcelConfig *const this)
{
  data::ActivityVintageDecoExcelConfig::~ActivityVintageDecoExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 184: range 00000000142A2730-00000000142A27A1
void __cdecl data::ActivityVintageDecoExcelConfig::~ActivityVintageDecoExcelConfig(
        data::ActivityVintageDecoExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageDecoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageDecoExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->furniture_ids);
  std::vector<unsigned int>::~vector(&this->watcher_ids);
  std::vector<unsigned int>::~vector(&this->edit_group_id_list);
};

// Line 198: range 0000000013BD9A1A-0000000013BD9BF7
void __cdecl data::ActivityVintageCampChallengeExcelConfig::ActivityVintageCampChallengeExcelConfig(
        data::ActivityVintageCampChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageCampChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageCampChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_order, v3);
  }
  this->open_order = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_stage_id, v4);
  }
  this->open_stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_bundle_id, v4);
  }
  this->group_bundle_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reward_id, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->reward_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_ids);
};

// Line 198: range 0000000014195F62-00000000141962B0
void __cdecl data::ActivityVintageCampChallengeExcelConfig::ActivityVintageCampChallengeExcelConfig(
        data::ActivityVintageCampChallengeExcelConfig *const this,
        const data::ActivityVintageCampChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_order; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t open_stage_id; // ecx
  char v12; // dl
  uint32_t group_bundle_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t reward_id; // ecx
  char v17; // dl
  const data::ActivityVintageCampChallengeExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageCampChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityVintageCampChallengeExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->open_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->open_order);
  }
  open_order = v18->open_order;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_order >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_order, v5);
  }
  this->open_order = open_order;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->open_day);
  }
  open_day = v18->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->open_stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->open_stage_id);
  }
  open_stage_id = v18->open_stage_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->open_stage_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->open_stage_id, v10);
  }
  this->open_stage_id = open_stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->group_bundle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->group_bundle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->group_bundle_id);
  }
  group_bundle_id = v18->group_bundle_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->group_bundle_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->group_bundle_id, v10);
  }
  this->group_bundle_id = group_bundle_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->reward_id);
  }
  reward_id = v18->reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->reward_id, v15);
  }
  this->reward_id = reward_id;
  std::vector<unsigned int>::vector(&this->watcher_ids, &v18->watcher_ids);
};

// Line 201: range 00000000142A2704-00000000142A272E
void __cdecl data::ActivityVintageCampChallengeExcelConfig::~ActivityVintageCampChallengeExcelConfig(
        data::ActivityVintageCampChallengeExcelConfig *const this)
{
  data::ActivityVintageCampChallengeExcelConfig::~ActivityVintageCampChallengeExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 201: range 00000000142A26B2-00000000142A2703
void __cdecl data::ActivityVintageCampChallengeExcelConfig::~ActivityVintageCampChallengeExcelConfig(
        data::ActivityVintageCampChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityVintageCampChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityVintageCampChallengeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_ids);
};
