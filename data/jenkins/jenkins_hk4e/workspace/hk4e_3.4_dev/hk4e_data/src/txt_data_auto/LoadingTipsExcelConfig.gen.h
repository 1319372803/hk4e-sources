// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/LoadingTipsExcelConfig.gen.h

// Line 78: range 0000000014768B72-0000000014768D40
void __cdecl data::LoadingTipsExcelConfig::LoadingTipsExcelConfig(data::LoadingTipsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LoadingTipsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LoadingTipsExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->stage_id);
  std::string::basic_string(&this->start_time);
  std::string::basic_string(&this->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_level, v1);
  }
  this->min_level = 0;
  v3 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_level, v3);
  }
  this->max_level = 0;
  std::string::basic_string(&this->limit_open_state);
  std::string::basic_string(&this->pre_main_quest_ids);
  std::vector<unsigned int>::vector(&this->pre_quest_id_list);
  std::vector<unsigned int>::vector(&this->disable_quest_id_list);
  std::vector<unsigned int>::vector(&this->enable_dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
};

// Line 78: range 0000000014D4862E-0000000014D489FB
void __cdecl data::LoadingTipsExcelConfig::LoadingTipsExcelConfig(
        data::LoadingTipsExcelConfig *const this,
        const data::LoadingTipsExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_end_time; // rsi
  uint32_t min_level; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t max_level; // ecx
  char v10; // dl
  std::vector<unsigned int> *p_enable_dungeon_id; // rsi
  uint32_t weight; // ecx
  char v13; // al
  const data::LoadingTipsExcelConfig *v14; // [rsp+0h] [rbp-20h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LoadingTipsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LoadingTipsExcelConfig = v2;
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
  std::string::basic_string(&this->stage_id, &v14->stage_id);
  std::string::basic_string(&this->start_time, &v14->start_time);
  p_end_time = &v14->end_time;
  std::string::basic_string(&this->end_time, &v14->end_time);
  if ( *(_BYTE *)(((unsigned __int64)&v14->min_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->min_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->min_level);
  }
  min_level = v14->min_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->min_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_end_time) = v7 != 0;
    __asan_report_store4(&this->min_level, p_end_time);
  }
  this->min_level = min_level;
  v8 = (((_BYTE)v14 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->max_level);
  }
  max_level = v14->max_level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->max_level, v8);
  }
  this->max_level = max_level;
  std::string::basic_string(&this->limit_open_state, &v14->limit_open_state);
  std::string::basic_string(&this->pre_main_quest_ids, &v14->pre_main_quest_ids);
  std::vector<unsigned int>::vector(&this->pre_quest_id_list, &v14->pre_quest_id_list);
  std::vector<unsigned int>::vector(&this->disable_quest_id_list, &v14->disable_quest_id_list);
  p_enable_dungeon_id = &v14->enable_dungeon_id;
  std::vector<unsigned int>::vector(&this->enable_dungeon_id, &v14->enable_dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&v14->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->weight);
  }
  weight = v14->weight;
  v13 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(p_enable_dungeon_id) = v13 != 0;
    __asan_report_store4(&this->weight, p_enable_dungeon_id);
  }
  this->weight = weight;
};

// Line 81: range 0000000014DE7004-0000000014DE70CD
void __cdecl data::LoadingTipsExcelConfig::~LoadingTipsExcelConfig(data::LoadingTipsExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LoadingTipsExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LoadingTipsExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->enable_dungeon_id);
  std::vector<unsigned int>::~vector(&this->disable_quest_id_list);
  std::vector<unsigned int>::~vector(&this->pre_quest_id_list);
  std::string::~string(&this->pre_main_quest_ids);
  std::string::~string(&this->limit_open_state);
  std::string::~string(&this->end_time);
  std::string::~string(&this->start_time);
  std::string::~string(&this->stage_id);
};

// Line 81: range 0000000014DE70CE-0000000014DE70F8
void __cdecl data::LoadingTipsExcelConfig::~LoadingTipsExcelConfig(data::LoadingTipsExcelConfig *const this)
{
  data::LoadingTipsExcelConfig::~LoadingTipsExcelConfig(this);
  operator delete(this, 0x108uLL);
};

// Line 103: range 0000000014D48C06-0000000014D48CC0
void __cdecl data::LoadingSituationExcelConfig::LoadingSituationExcelConfig(
        data::LoadingSituationExcelConfig *const this,
        const data::LoadingSituationExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::LoadingSituationExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LoadingSituationExcelConfig = v2;
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
};

// Line 106: range 0000000014DE6F96-0000000014DE6FD7
void __cdecl data::LoadingSituationExcelConfig::~LoadingSituationExcelConfig(
        data::LoadingSituationExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LoadingSituationExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LoadingSituationExcelConfig = v2;
};

// Line 106: range 0000000014DE6FD8-0000000014DE7002
void __cdecl data::LoadingSituationExcelConfig::~LoadingSituationExcelConfig(
        data::LoadingSituationExcelConfig *const this)
{
  data::LoadingSituationExcelConfig::~LoadingSituationExcelConfig(this);
  operator delete(this, 0x10uLL);
};
