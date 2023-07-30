// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/QuestExcelConfig.gen.h

// Line 44: range 000000000F0414C4-000000000F041569
data::QuestCond *__cdecl data::QuestCond::operator=(data::QuestCond *const this, const data::QuestCond *a2)
{
  data::QuestCondType type; // ecx
  char v3; // al
  const data::QuestCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::operator=(&this->param, &v5->param);
  return this;
};

// Line 44: range 000000000F1A5F2E-000000000F1A6003
void __cdecl data::QuestCond::QuestCond(data::QuestCond *const this, const data::QuestCond *a2)
{
  int (**v2)(...); // rdx
  data::QuestCondType type; // ecx
  char v4; // al
  const data::QuestCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::vector(&this->param, &v5->param);
};

// Line 47: range 000000000F15D626-000000000F15D650
void __cdecl data::QuestCond::~QuestCond(data::QuestCond *const this)
{
  data::QuestCond::~QuestCond(this);
  operator delete(this, 0x28uLL);
};

// Line 47: range 000000000F15D5D4-000000000F15D625
void __cdecl data::QuestCond::~QuestCond(data::QuestCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestCond = v2;
  std::vector<int>::~vector(&this->param);
};

// Line 57: range 000000000F04AC90-000000000F04AD35
data::RandomQuestCond *__cdecl data::RandomQuestCond::operator=(
        data::RandomQuestCond *const this,
        const data::RandomQuestCond *a2)
{
  data::QuestCondType type; // ecx
  char v3; // al
  const data::RandomQuestCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::operator=(&this->param, &v5->param);
  return this;
};

// Line 57: range 000000000F18BB06-000000000F18BB95
void __cdecl data::RandomQuestCond::RandomQuestCond(data::RandomQuestCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = QUEST_COND_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 57: range 000000000F1A64EE-000000000F1A65C3
void __cdecl data::RandomQuestCond::RandomQuestCond(data::RandomQuestCond *const this, const data::RandomQuestCond *a2)
{
  int (**v2)(...); // rdx
  data::QuestCondType type; // ecx
  char v4; // al
  const data::RandomQuestCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomQuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 60: range 000000000F168C74-000000000F168CC5
void __cdecl data::RandomQuestCond::~RandomQuestCond(data::RandomQuestCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestCond = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 60: range 000000000F168CC6-000000000F168CF0
void __cdecl data::RandomQuestCond::~RandomQuestCond(data::RandomQuestCond *const this)
{
  data::RandomQuestCond::~RandomQuestCond(this);
  operator delete(this, 0x28uLL);
};

// Line 70: range 000000000F048D30-000000000F048DD5
data::TalkCond *__cdecl data::TalkCond::operator=(data::TalkCond *const this, const data::TalkCond *a2)
{
  data::QuestCondType type; // ecx
  char v3; // al
  const data::TalkCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::operator=(&this->param, &v5->param);
  return this;
};

// Line 70: range 000000000F18B500-000000000F18B58F
void __cdecl data::TalkCond::TalkCond(data::TalkCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TalkCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = QUEST_COND_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 73: range 000000000F165F4C-000000000F165F76
void __cdecl data::TalkCond::~TalkCond(data::TalkCond *const this)
{
  data::TalkCond::~TalkCond(this);
  operator delete(this, 0x28uLL);
};

// Line 73: range 000000000F165EFA-000000000F165F4B
void __cdecl data::TalkCond::~TalkCond(data::TalkCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TalkCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkCond = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 75: range 000000000F1A60E0-000000000F1A61B5
void __cdecl data::TalkCond::TalkCond(data::TalkCond *const this, const data::TalkCond *a2)
{
  int (**v2)(...); // rdx
  data::QuestCondType type; // ecx
  char v4; // al
  const data::TalkCond *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TalkCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TalkCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 83: range 000000000F041666-000000000F0417B6
data::QuestContent *__cdecl data::QuestContent::operator=(data::QuestContent *const this, const data::QuestContent *a2)
{
  data::QuestContentType type; // ecx
  char v3; // al
  std::string *p_param_str; // rsi
  uint32_t count; // ecx
  char v6; // al
  const data::QuestContent *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::operator=(&this->param, &v8->param);
  p_param_str = &v8->param_str;
  std::string::operator=(&this->param_str, &v8->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v6 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_param_str) = v6 != 0;
    __asan_report_store4(&this->count, p_param_str);
  }
  this->count = count;
  std::map<unsigned int,unsigned int>::operator=(&this->param_map, &v8->param_map);
  return this;
};

// Line 83: range 000000000F020794-000000000F020881
void __cdecl data::QuestContent::QuestContent(data::QuestContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = QUEST_CONTENT_NONE;
  std::vector<int>::vector(&this->param);
  std::string::basic_string(&this->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count, v1);
  }
  this->count = 0;
  std::map<unsigned int,unsigned int>::map(&this->param_map);
};

// Line 83: range 000000000F106B56-000000000F106D12
void __cdecl data::QuestContent::QuestContent(data::QuestContent *const this, const data::QuestContent *a2)
{
  int (**v2)(...); // rdx
  data::QuestContentType type; // ecx
  char v4; // al
  std::string *p_param_str; // rsi
  uint32_t count; // ecx
  char v7; // al
  const data::QuestContent *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<int>::vector(&this->param, &v8->param);
  p_param_str = &v8->param_str;
  std::string::basic_string(&this->param_str, &v8->param_str);
  if ( *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->count);
  }
  count = v8->count;
  v7 = *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_param_str) = v7 != 0;
    __asan_report_store4(&this->count, p_param_str);
  }
  this->count = count;
  std::map<unsigned int,unsigned int>::map(&this->param_map, &v8->param_map);
};

// Line 86: range 000000000F1C593A-000000000F1C5964
void __cdecl data::QuestContent::~QuestContent(data::QuestContent *const this)
{
  data::QuestContent::~QuestContent(this);
  operator delete(this, 0x80uLL);
};

// Line 86: range 000000000F1C58C8-000000000F1C5939
void __cdecl data::QuestContent::~QuestContent(data::QuestContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestContent = v2;
  std::map<unsigned int,unsigned int>::~map(&this->param_map);
  std::string::~string(&this->param_str);
  std::vector<int>::~vector(&this->param);
};

// Line 99: range 000000000F020912-000000000F020CE7
void __cdecl data::MainQuestExcelConfig::MainQuestExcelConfig(data::MainQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MainQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MainQuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->res_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->res_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->res_id, v3);
  }
  this->res_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->series >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->series >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->series, v3);
  }
  this->series = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v4);
  }
  this->type = AQ;
  if ( *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_mode, v4);
  }
  this->active_mode = PLAY_MODE_ALL;
  std::string::basic_string(&this->lua_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recommend_level, v4);
  }
  this->recommend_level = 0;
  v5 = ((_BYTE)this + 68) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->repeatable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->repeatable, v5, v6);
  this->repeatable = 0;
  std::vector<unsigned int>::vector(&this->child_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_rewind_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_rewind_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_rewind_quest, v5);
  }
  this->min_rewind_quest = 0;
  std::vector<unsigned int>::vector(&this->reward_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chapter_id, v5);
  }
  this->chapter_id = 0;
  v7 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->task_id, v7);
  }
  this->task_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v7);
  }
  this->activity_id = 0;
  v8 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_type, v8);
  }
  this->activity_type = NEW_ACTIVITY_GENERAL;
  if ( *(_BYTE *)(((unsigned __int64)&this->video_key >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->video_key, v8);
  this->video_key = 0LL;
  std::map<unsigned int,unsigned int>::map(&this->flow_min_rewind_order_map);
};

// Line 99: range 000000000F020882-000000000F020911
void __cdecl data::QuestExec::QuestExec(data::QuestExec *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestExec = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = QUEST_EXEC_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 99: range 000000000F106FAC-000000000F107081
void __cdecl data::QuestExec::QuestExec(data::QuestExec *const this, const data::QuestExec *a2)
{
  int (**v2)(...); // rdx
  data::QuestExecType type; // ecx
  char v4; // al
  const data::QuestExec *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestExec = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 102: range 000000000F1C589C-000000000F1C58C6
void __cdecl data::QuestExec::~QuestExec(data::QuestExec *const this)
{
  data::QuestExec::~QuestExec(this);
  operator delete(this, 0x28uLL);
};

// Line 102: range 000000000F1C584A-000000000F1C589B
void __cdecl data::QuestExec::~QuestExec(data::QuestExec *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestExec = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 112: range 000000000F18B6F2-000000000F18B781
void __cdecl data::TalkExec::TalkExec(data::TalkExec *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TalkExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkExec = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = TALK_EXEC_NONE;
  std::vector<std::string>::vector(&this->param);
};

// Line 112: range 000000000F1A6224-000000000F1A62F9
void __cdecl data::TalkExec::TalkExec(data::TalkExec *const this, const data::TalkExec *a2)
{
  int (**v2)(...); // rdx
  data::TalkExecType type; // ecx
  char v4; // al
  const data::TalkExec *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TalkExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TalkExec = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param, &v5->param);
};

// Line 115: range 000000000F165FE8-000000000F166039
void __cdecl data::TalkExec::~TalkExec(data::TalkExec *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TalkExec + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkExec = v2;
  std::vector<std::string>::~vector(&this->param);
};

// Line 115: range 000000000F16603A-000000000F166064
void __cdecl data::TalkExec::~TalkExec(data::TalkExec *const this)
{
  data::TalkExec::~TalkExec(this);
  operator delete(this, 0x28uLL);
};

// Line 125: range 000000000F0224AC-000000000F02270D
void __cdecl data::ChapterExcelConfig::ChapterExcelConfig(data::ChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChapterExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_quest_id, v3);
  }
  this->begin_quest_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->end_quest_id, v3);
  }
  this->end_quest_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->need_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->need_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->need_player_level, v4);
  }
  this->need_player_level = 0;
  std::string::basic_string(&this->need_begin_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&this->need_begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->need_begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->need_begin_time, v4);
  }
  this->need_begin_time = 0;
  v5 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_show_type, v5);
  }
  this->chapter_show_type = QUEST_SHOW;
  if ( *(_BYTE *)(((unsigned __int64)&this->related_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->related_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->related_activity_id, v5);
  }
  this->related_activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_activity_need_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->in_activity_need_player_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->in_activity_need_player_level, (((_BYTE)this + 68) & 7u) + 3);
  }
  this->in_activity_need_player_level = 0;
};

// Line 125: range 000000000F1A67FC-000000000F1A6C44
void __cdecl data::ChapterExcelConfig::ChapterExcelConfig(
        data::ChapterExcelConfig *const this,
        const data::ChapterExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t begin_quest_id; // ecx
  char v7; // dl
  uint32_t end_quest_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t need_player_level; // ecx
  char v12; // dl
  std::string *p_need_begin_time_str; // rsi
  uint32_t need_begin_time; // ecx
  char v15; // al
  __int64 v16; // rsi
  data::QuestShowType chapter_show_type; // ecx
  char v18; // dl
  uint32_t related_activity_id; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t in_activity_need_player_level; // ecx
  char v23; // dl
  const data::ChapterExcelConfig *v24; // [rsp+0h] [rbp-10h]

  v24 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ChapterExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v24->begin_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->begin_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->begin_quest_id);
  }
  begin_quest_id = v24->begin_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->begin_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->begin_quest_id, v5);
  }
  this->begin_quest_id = begin_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v24->end_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->end_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->end_quest_id);
  }
  end_quest_id = v24->end_quest_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->end_quest_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->end_quest_id, v5);
  }
  this->end_quest_id = end_quest_id;
  v10 = (((_BYTE)v24 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->need_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->need_player_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->need_player_level);
  }
  need_player_level = v24->need_player_level;
  v12 = *(_BYTE *)(((unsigned __int64)&this->need_player_level >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->need_player_level, v10);
  }
  this->need_player_level = need_player_level;
  p_need_begin_time_str = &v24->need_begin_time_str;
  std::string::basic_string(&this->need_begin_time_str, &v24->need_begin_time_str);
  if ( *(_BYTE *)(((unsigned __int64)&v24->need_begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->need_begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->need_begin_time);
  }
  need_begin_time = v24->need_begin_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->need_begin_time >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_need_begin_time_str) = v15 != 0;
    __asan_report_store4(&this->need_begin_time, p_need_begin_time_str);
  }
  this->need_begin_time = need_begin_time;
  v16 = (((_BYTE)v24 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->chapter_show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->chapter_show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->chapter_show_type);
  }
  chapter_show_type = v24->chapter_show_type;
  v18 = *(_BYTE *)(((unsigned __int64)&this->chapter_show_type >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->chapter_show_type, v16);
  }
  this->chapter_show_type = chapter_show_type;
  if ( *(_BYTE *)(((unsigned __int64)&v24->related_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v24->related_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v24->related_activity_id);
  }
  related_activity_id = v24->related_activity_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->related_activity_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->related_activity_id, v16);
  }
  this->related_activity_id = related_activity_id;
  v21 = (((_BYTE)v24 + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v24->in_activity_need_player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v24 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->in_activity_need_player_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v24->in_activity_need_player_level);
  }
  in_activity_need_player_level = v24->in_activity_need_player_level;
  v23 = *(_BYTE *)(((unsigned __int64)&this->in_activity_need_player_level >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 68) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->in_activity_need_player_level, v21);
  }
  this->in_activity_need_player_level = in_activity_need_player_level;
};

// Line 128: range 000000000F1C581E-000000000F1C5848
void __cdecl data::ChapterExcelConfig::~ChapterExcelConfig(data::ChapterExcelConfig *const this)
{
  data::ChapterExcelConfig::~ChapterExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 128: range 000000000F1C57CC-000000000F1C581D
void __cdecl data::ChapterExcelConfig::~ChapterExcelConfig(data::ChapterExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ChapterExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ChapterExcelConfig = v2;
  std::string::~string(&this->need_begin_time_str);
};

// Line 139: range 000000000F18B05A-000000000F18B0E9
void __cdecl data::QuestCond::QuestCond(data::QuestCond *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestCond + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestCond = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = QUEST_COND_NONE;
  std::vector<int>::vector(&this->param);
};

// Line 147: range 000000000F105E2C-000000000F106582
void __cdecl data::MainQuestExcelConfig::MainQuestExcelConfig(
        data::MainQuestExcelConfig *const this,
        const data::MainQuestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t res_id; // ecx
  char v7; // dl
  uint32_t series; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::QuestType type; // ecx
  char v12; // dl
  data::PlayMode active_mode; // ecx
  char v14; // al
  std::string *p_lua_path; // rsi
  uint32_t recommend_level; // ecx
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool repeatable; // cl
  char v21; // dl
  __int64 v22; // rdx
  std::vector<unsigned int> *p_child_quest_list; // rsi
  uint32_t min_rewind_quest; // ecx
  char v25; // al
  std::vector<unsigned int> *p_reward_id_list; // rsi
  uint32_t chapter_id; // ecx
  char v28; // al
  __int64 v29; // rsi
  uint32_t task_id; // ecx
  char v31; // dl
  uint32_t activity_id; // ecx
  char v33; // al
  __int64 v34; // rsi
  data::NewActivityType activity_type; // ecx
  char v36; // dl
  uint64_t video_key; // rdx
  const data::MainQuestExcelConfig *v38; // [rsp+0h] [rbp-20h]

  v38 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MainQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MainQuestExcelConfig = v2;
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
  v5 = (((_BYTE)v38 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->res_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->res_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->res_id);
  }
  res_id = v38->res_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->res_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->res_id, v5);
  }
  this->res_id = res_id;
  if ( *(_BYTE *)(((unsigned __int64)&v38->series >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->series >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->series);
  }
  series = v38->series;
  v9 = *(_BYTE *)(((unsigned __int64)&this->series >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->series, v5);
  }
  this->series = series;
  v10 = (((_BYTE)v38 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->type);
  }
  type = v38->type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->type, v10);
  }
  this->type = type;
  if ( *(_BYTE *)(((unsigned __int64)&v38->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->active_mode);
  }
  active_mode = v38->active_mode;
  v14 = *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->active_mode, v10);
  }
  this->active_mode = active_mode;
  p_lua_path = &v38->lua_path;
  std::string::basic_string(&this->lua_path, &v38->lua_path);
  if ( *(_BYTE *)(((unsigned __int64)&v38->recommend_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->recommend_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->recommend_level);
  }
  recommend_level = v38->recommend_level;
  v17 = *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_lua_path) = v17 != 0;
    __asan_report_store4(&this->recommend_level, p_lua_path);
  }
  this->recommend_level = recommend_level;
  v18 = ((_BYTE)v38 + 68) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v38->repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v38->repeatable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v38->repeatable, v18, v19);
  repeatable = v38->repeatable;
  v21 = *(_BYTE *)(((unsigned __int64)&this->repeatable >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 68) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->repeatable, v18, v22);
  this->repeatable = repeatable;
  p_child_quest_list = &v38->child_quest_list;
  std::vector<unsigned int>::vector(&this->child_quest_list, &v38->child_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&v38->min_rewind_quest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->min_rewind_quest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->min_rewind_quest);
  }
  min_rewind_quest = v38->min_rewind_quest;
  v25 = *(_BYTE *)(((unsigned __int64)&this->min_rewind_quest >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_child_quest_list) = v25 != 0;
    __asan_report_store4(&this->min_rewind_quest, p_child_quest_list);
  }
  this->min_rewind_quest = min_rewind_quest;
  p_reward_id_list = &v38->reward_id_list;
  std::vector<unsigned int>::vector(&this->reward_id_list, &v38->reward_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v38->chapter_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->chapter_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->chapter_id);
  }
  chapter_id = v38->chapter_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_reward_id_list) = v28 != 0;
    __asan_report_store4(&this->chapter_id, p_reward_id_list);
  }
  this->chapter_id = chapter_id;
  v29 = (((_BYTE)v38 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->task_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->task_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->task_id);
  }
  task_id = v38->task_id;
  v31 = *(_BYTE *)(((unsigned __int64)&this->task_id >> 3) + 0x7FFF8000);
  if ( v31 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v31 )
  {
    LOBYTE(v29) = v31 != 0;
    __asan_report_store4(&this->task_id, v29);
  }
  this->task_id = task_id;
  if ( *(_BYTE *)(((unsigned __int64)&v38->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v38->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v38->activity_id);
  }
  activity_id = v38->activity_id;
  v33 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v33 != 0 && v33 <= 3 )
  {
    LOBYTE(v29) = v33 != 0;
    __asan_report_store4(&this->activity_id, v29);
  }
  this->activity_id = activity_id;
  v34 = (((_BYTE)v38 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v38->activity_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v38 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v38->activity_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v38->activity_type);
  }
  activity_type = v38->activity_type;
  v36 = *(_BYTE *)(((unsigned __int64)&this->activity_type >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v36 != 0;
  if ( v36 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v36 )
    __asan_report_store4(&this->activity_type, v34);
  this->activity_type = activity_type;
  if ( *(_BYTE *)(((unsigned __int64)&v38->video_key >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v38->video_key);
  video_key = v38->video_key;
  if ( *(_BYTE *)(((unsigned __int64)&this->video_key >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->video_key, v34);
  this->video_key = video_key;
  std::map<unsigned int,unsigned int>::map(&this->flow_min_rewind_order_map, &v38->flow_min_rewind_order_map);
};

// Line 150: range 000000000F1C57A0-000000000F1C57CA
void __cdecl data::MainQuestExcelConfig::~MainQuestExcelConfig(data::MainQuestExcelConfig *const this)
{
  data::MainQuestExcelConfig::~MainQuestExcelConfig(this);
  operator delete(this, 0xC8uLL);
};

// Line 150: range 000000000F1C571C-000000000F1C579F
void __cdecl data::MainQuestExcelConfig::~MainQuestExcelConfig(data::MainQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MainQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MainQuestExcelConfig = v2;
  std::map<unsigned int,unsigned int>::~map(&this->flow_min_rewind_order_map);
  std::vector<unsigned int>::~vector(&this->reward_id_list);
  std::vector<unsigned int>::~vector(&this->child_quest_list);
  std::string::~string(&this->lua_path);
};

// Line 177: range 000000000F0201FA-000000000F020792
void __cdecl data::QuestExcelConfig::QuestExcelConfig(data::QuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_id, v1);
  }
  this->sub_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_id, v3);
  }
  this->main_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order, v3);
  }
  this->order = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_id_set, v4);
  }
  this->sub_id_set = 0;
  if ( *(char *)(((unsigned __int64)&this->is_mp_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_mp_block, v4, &this->is_mp_block);
  this->is_mp_block = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_type, v5);
  }
  this->show_type = QUEST_SHOW;
  if ( *(_BYTE *)(((unsigned __int64)&this->accept_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->accept_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->accept_cond_comb, v5);
  }
  this->accept_cond_comb = LOGIC_NONE;
  std::vector<data::QuestCond>::vector(&this->accept_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_cond_comb, v5);
  }
  this->finish_cond_comb = LOGIC_NONE;
  std::vector<data::QuestContent>::vector(&this->finish_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->fail_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fail_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fail_cond_comb, v5);
  }
  this->fail_cond_comb = LOGIC_NONE;
  std::vector<data::QuestContent>::vector(&this->fail_cond);
  data::QuestGuide::QuestGuide(&this->guide);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_guide, v5);
  }
  this->show_guide = QUEST_GUIDE_ITEM_ENABLE;
  v6 = ((_BYTE)this - 68) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->finish_parent, v6, v7);
  this->finish_parent = 0;
  v8 = ((_BYTE)this - 67) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->fail_parent, v8, v9);
  this->fail_parent = 0;
  v10 = ((_BYTE)this - 66) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_rewind, v10, v11);
  this->is_rewind = 0;
  std::vector<unsigned int>::vector(&this->quest_item_id_list);
  std::vector<unsigned int>::vector(&this->quest_item_num_list);
  std::vector<data::QuestExec>::vector(&this->finish_exec);
  std::vector<data::QuestExec>::vector(&this->fail_exec);
  std::vector<data::QuestExec>::vector(&this->begin_exec);
  std::vector<unsigned int>::vector(&this->exclusive_npc_list);
  std::vector<unsigned int>::vector(&this->shared_npc_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive_npc_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exclusive_npc_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exclusive_npc_priority, v10);
  }
  this->exclusive_npc_priority = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_list);
  std::string::basic_string(&this->ability_group_name);
  std::vector<std::string>::vector(&this->team_ability_group_list);
  std::vector<unsigned int>::vector(&this->exclusive_place_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->coop_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coop_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coop_point_id, v10);
  }
  this->coop_point_id = 0;
  std::vector<unsigned int>::vector(&this->coop_point_list);
  if ( *(char *)(((unsigned __int64)&this->is_refresh_single_mode_only >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_refresh_single_mode_only, v10, &this->is_refresh_single_mode_only);
  this->is_refresh_single_mode_only = 0;
  std::string::basic_string(&this->world_quest_flow_group_suite_map_str);
  std::map<unsigned int,unsigned int>::map(&this->world_quest_flow_group_suite_map);
};

// Line 177: range 000000000F104E42-000000000F105A30
void __cdecl data::QuestExcelConfig::QuestExcelConfig(
        data::QuestExcelConfig *const this,
        const data::QuestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sub_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t main_id; // ecx
  char v7; // dl
  int32_t order; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t sub_id_set; // ecx
  char v12; // dl
  bool is_mp_block; // cl
  char v14; // al
  __int64 v15; // rsi
  data::QuestShowType show_type; // ecx
  char v17; // dl
  data::LogicType accept_cond_comb; // ecx
  char v19; // al
  std::vector<data::QuestCond> *p_accept_cond; // rsi
  data::LogicType finish_cond_comb; // ecx
  char v22; // al
  std::vector<data::QuestContent> *p_finish_cond; // rsi
  data::LogicType fail_cond_comb; // ecx
  char v25; // al
  data::QuestGuide *p_guide; // rsi
  data::ShowQuestGuideType show_guide; // ecx
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool finish_parent; // cl
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  bool fail_parent; // cl
  char v37; // dl
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // rdx
  bool is_rewind; // cl
  char v42; // dl
  __int64 v43; // rdx
  std::vector<unsigned int> *p_shared_npc_list; // rsi
  uint32_t exclusive_npc_priority; // ecx
  char v46; // al
  std::vector<unsigned int> *p_exclusive_place_list; // rsi
  uint32_t coop_point_id; // ecx
  char v49; // al
  std::vector<unsigned int> *p_coop_point_list; // rsi
  bool is_refresh_single_mode_only; // cl
  char v52; // al
  const data::QuestExcelConfig *v53; // [rsp+0h] [rbp-20h]

  v53 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sub_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sub_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sub_id);
  }
  sub_id = a2->sub_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sub_id, a2);
  }
  this->sub_id = sub_id;
  v5 = (((_BYTE)v53 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->main_id);
  }
  main_id = v53->main_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->main_id, v5);
  }
  this->main_id = main_id;
  if ( *(_BYTE *)(((unsigned __int64)&v53->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->order);
  }
  order = v53->order;
  v9 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->order, v5);
  }
  this->order = order;
  v10 = (((_BYTE)v53 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->sub_id_set >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->sub_id_set >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->sub_id_set);
  }
  sub_id_set = v53->sub_id_set;
  v12 = *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v12 != 0;
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
    __asan_report_store4(&this->sub_id_set, v10);
  this->sub_id_set = sub_id_set;
  if ( *(char *)(((unsigned __int64)&v53->is_mp_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v53->is_mp_block, v10, &v53->is_mp_block);
  is_mp_block = v53->is_mp_block;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_mp_block >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store1(&this->is_mp_block, v10, &this->is_mp_block);
  }
  this->is_mp_block = is_mp_block;
  v15 = (((_BYTE)v53 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v53->show_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v53 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v53->show_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v53->show_type);
  }
  show_type = v53->show_type;
  v17 = *(_BYTE *)(((unsigned __int64)&this->show_type >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->show_type, v15);
  }
  this->show_type = show_type;
  if ( *(_BYTE *)(((unsigned __int64)&v53->accept_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->accept_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->accept_cond_comb);
  }
  accept_cond_comb = v53->accept_cond_comb;
  v19 = *(_BYTE *)(((unsigned __int64)&this->accept_cond_comb >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->accept_cond_comb, v15);
  }
  this->accept_cond_comb = accept_cond_comb;
  p_accept_cond = &v53->accept_cond;
  std::vector<data::QuestCond>::vector(&this->accept_cond, &v53->accept_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v53->finish_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->finish_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->finish_cond_comb);
  }
  finish_cond_comb = v53->finish_cond_comb;
  v22 = *(_BYTE *)(((unsigned __int64)&this->finish_cond_comb >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(p_accept_cond) = v22 != 0;
    __asan_report_store4(&this->finish_cond_comb, p_accept_cond);
  }
  this->finish_cond_comb = finish_cond_comb;
  p_finish_cond = &v53->finish_cond;
  std::vector<data::QuestContent>::vector(&this->finish_cond, &v53->finish_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v53->fail_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->fail_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->fail_cond_comb);
  }
  fail_cond_comb = v53->fail_cond_comb;
  v25 = *(_BYTE *)(((unsigned __int64)&this->fail_cond_comb >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_finish_cond) = v25 != 0;
    __asan_report_store4(&this->fail_cond_comb, p_finish_cond);
  }
  this->fail_cond_comb = fail_cond_comb;
  std::vector<data::QuestContent>::vector(&this->fail_cond, &v53->fail_cond);
  p_guide = &v53->guide;
  data::QuestGuide::QuestGuide(&this->guide, &v53->guide);
  if ( *(_BYTE *)(((unsigned __int64)&v53->show_guide >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->show_guide >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->show_guide);
  }
  show_guide = v53->show_guide;
  v28 = *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_guide) = v28 != 0;
    __asan_report_store4(&this->show_guide, p_guide);
  }
  this->show_guide = show_guide;
  v29 = ((_BYTE)v53 - 68) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&v53->finish_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&v53->finish_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&v53->finish_parent, v29, v30);
  finish_parent = v53->finish_parent;
  v32 = *(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this - 68) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->finish_parent, v29, v33);
  this->finish_parent = finish_parent;
  v34 = ((_BYTE)v53 - 67) & 7;
  v35 = (*(_BYTE *)(((unsigned __int64)&v53->fail_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v34 >= *(_BYTE *)(((unsigned __int64)&v53->fail_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v35 )
    __asan_report_load1(&v53->fail_parent, v34, v35);
  fail_parent = v53->fail_parent;
  v37 = *(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v37 != 0;
  v38 = (v37 != 0) & (unsigned __int8)((((unsigned __int8)this - 67) & 7) >= v37);
  if ( (_BYTE)v38 )
    __asan_report_store1(&this->fail_parent, v34, v38);
  this->fail_parent = fail_parent;
  v39 = ((_BYTE)v53 - 66) & 7;
  v40 = (*(_BYTE *)(((unsigned __int64)&v53->is_rewind >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v39 >= *(_BYTE *)(((unsigned __int64)&v53->is_rewind >> 3) + 0x7FFF8000));
  if ( (_BYTE)v40 )
    __asan_report_load1(&v53->is_rewind, v39, v40);
  is_rewind = v53->is_rewind;
  v42 = *(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000);
  LOBYTE(v39) = v42 != 0;
  v43 = (v42 != 0) & (unsigned __int8)((((unsigned __int8)this - 66) & 7) >= v42);
  if ( (_BYTE)v43 )
    __asan_report_store1(&this->is_rewind, v39, v43);
  this->is_rewind = is_rewind;
  std::vector<unsigned int>::vector(&this->quest_item_id_list, &v53->quest_item_id_list);
  std::vector<unsigned int>::vector(&this->quest_item_num_list, &v53->quest_item_num_list);
  std::vector<data::QuestExec>::vector(&this->finish_exec, &v53->finish_exec);
  std::vector<data::QuestExec>::vector(&this->fail_exec, &v53->fail_exec);
  std::vector<data::QuestExec>::vector(&this->begin_exec, &v53->begin_exec);
  std::vector<unsigned int>::vector(&this->exclusive_npc_list, &v53->exclusive_npc_list);
  p_shared_npc_list = &v53->shared_npc_list;
  std::vector<unsigned int>::vector(&this->shared_npc_list, &v53->shared_npc_list);
  if ( *(_BYTE *)(((unsigned __int64)&v53->exclusive_npc_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->exclusive_npc_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->exclusive_npc_priority);
  }
  exclusive_npc_priority = v53->exclusive_npc_priority;
  v46 = *(_BYTE *)(((unsigned __int64)&this->exclusive_npc_priority >> 3) + 0x7FFF8000);
  if ( v46 != 0 && v46 <= 3 )
  {
    LOBYTE(p_shared_npc_list) = v46 != 0;
    __asan_report_store4(&this->exclusive_npc_priority, p_shared_npc_list);
  }
  this->exclusive_npc_priority = exclusive_npc_priority;
  std::vector<unsigned int>::vector(&this->trial_avatar_list, &v53->trial_avatar_list);
  std::string::basic_string(&this->ability_group_name, &v53->ability_group_name);
  std::vector<std::string>::vector(&this->team_ability_group_list, &v53->team_ability_group_list);
  p_exclusive_place_list = &v53->exclusive_place_list;
  std::vector<unsigned int>::vector(&this->exclusive_place_list, &v53->exclusive_place_list);
  if ( *(_BYTE *)(((unsigned __int64)&v53->coop_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v53->coop_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v53->coop_point_id);
  }
  coop_point_id = v53->coop_point_id;
  v49 = *(_BYTE *)(((unsigned __int64)&this->coop_point_id >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(p_exclusive_place_list) = v49 != 0;
    __asan_report_store4(&this->coop_point_id, p_exclusive_place_list);
  }
  this->coop_point_id = coop_point_id;
  p_coop_point_list = &v53->coop_point_list;
  std::vector<unsigned int>::vector(&this->coop_point_list, &v53->coop_point_list);
  if ( *(char *)(((unsigned __int64)&v53->is_refresh_single_mode_only >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v53->is_refresh_single_mode_only, p_coop_point_list, &v53->is_refresh_single_mode_only);
  is_refresh_single_mode_only = v53->is_refresh_single_mode_only;
  v52 = *(_BYTE *)(((unsigned __int64)&this->is_refresh_single_mode_only >> 3) + 0x7FFF8000);
  if ( v52 < 0 )
  {
    LOBYTE(p_coop_point_list) = v52 != 0;
    __asan_report_store1(&this->is_refresh_single_mode_only, p_coop_point_list, &this->is_refresh_single_mode_only);
  }
  this->is_refresh_single_mode_only = is_refresh_single_mode_only;
  std::string::basic_string(&this->world_quest_flow_group_suite_map_str, &v53->world_quest_flow_group_suite_map_str);
  std::map<unsigned int,unsigned int>::map(
    &this->world_quest_flow_group_suite_map,
    &v53->world_quest_flow_group_suite_map);
};

// Line 180: range 000000000F1C56F0-000000000F1C571A
void __cdecl data::QuestExcelConfig::~QuestExcelConfig(data::QuestExcelConfig *const this)
{
  data::QuestExcelConfig::~QuestExcelConfig(this);
  operator delete(this, 0x250uLL);
};

// Line 180: range 000000000F1C5572-000000000F1C56EF
void __cdecl data::QuestExcelConfig::~QuestExcelConfig(data::QuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestExcelConfig = v2;
  std::map<unsigned int,unsigned int>::~map(&this->world_quest_flow_group_suite_map);
  std::string::~string(&this->world_quest_flow_group_suite_map_str);
  std::vector<unsigned int>::~vector(&this->coop_point_list);
  std::vector<unsigned int>::~vector(&this->exclusive_place_list);
  std::vector<std::string>::~vector(&this->team_ability_group_list);
  std::string::~string(&this->ability_group_name);
  std::vector<unsigned int>::~vector(&this->trial_avatar_list);
  std::vector<unsigned int>::~vector(&this->shared_npc_list);
  std::vector<unsigned int>::~vector(&this->exclusive_npc_list);
  std::vector<data::QuestExec>::~vector(&this->begin_exec);
  std::vector<data::QuestExec>::~vector(&this->fail_exec);
  std::vector<data::QuestExec>::~vector(&this->finish_exec);
  std::vector<unsigned int>::~vector(&this->quest_item_num_list);
  std::vector<unsigned int>::~vector(&this->quest_item_id_list);
  data::QuestGuide::~QuestGuide(&this->guide);
  std::vector<data::QuestContent>::~vector(&this->fail_cond);
  std::vector<data::QuestContent>::~vector(&this->finish_cond);
  std::vector<data::QuestCond>::~vector(&this->accept_cond);
};

// Line 224: range 000000000F0227B6-000000000F022A63
void __cdecl data::TalkExcelConfig::TalkExcelConfig(data::TalkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_way, v3);
  }
  this->begin_way = TALK_BEGIN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_mode, v3);
  }
  this->active_mode = PLAY_MODE_ALL;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_cond_comb, v4);
  }
  this->begin_cond_comb = LOGIC_NONE;
  std::vector<data::TalkCond>::vector(&this->begin_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v4);
  }
  this->priority = 0;
  std::vector<unsigned int>::vector(&this->next_talks);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_dialog, v4);
  }
  this->init_dialog = 0;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->decorator_id, v5);
  }
  this->decorator_id = 0;
  std::vector<unsigned int>::vector(&this->npc_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = 0;
  std::vector<unsigned int>::vector(&this->extra_load_mark_id);
  std::vector<unsigned int>::vector(&this->talk_mark_hide_list);
  std::vector<data::TalkExec>::vector(&this->finish_exec);
};

// Line 224: range 000000000F1A41D0-000000000F1A4716
void __cdecl data::TalkExcelConfig::TalkExcelConfig(data::TalkExcelConfig *const this, const data::TalkExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::TalkBeginWay begin_way; // ecx
  char v7; // dl
  data::PlayMode active_mode; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::LogicType begin_cond_comb; // ecx
  char v12; // dl
  std::vector<data::TalkCond> *p_begin_cond; // rsi
  uint32_t priority; // ecx
  char v15; // al
  std::vector<unsigned int> *p_next_talks; // rsi
  uint32_t init_dialog; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t decorator_id; // ecx
  char v21; // dl
  std::vector<unsigned int> *p_npc_id; // rsi
  uint32_t quest_id; // ecx
  char v24; // al
  const data::TalkExcelConfig *v25; // [rsp+0h] [rbp-20h]

  v25 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TalkExcelConfig = v2;
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
  v5 = (((_BYTE)v25 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->begin_way >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->begin_way >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->begin_way);
  }
  begin_way = v25->begin_way;
  v7 = *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->begin_way, v5);
  }
  this->begin_way = begin_way;
  if ( *(_BYTE *)(((unsigned __int64)&v25->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->active_mode);
  }
  active_mode = v25->active_mode;
  v9 = *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->active_mode, v5);
  }
  this->active_mode = active_mode;
  v10 = (((_BYTE)v25 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->begin_cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->begin_cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->begin_cond_comb);
  }
  begin_cond_comb = v25->begin_cond_comb;
  v12 = *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->begin_cond_comb, v10);
  }
  this->begin_cond_comb = begin_cond_comb;
  p_begin_cond = &v25->begin_cond;
  std::vector<data::TalkCond>::vector(&this->begin_cond, &v25->begin_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v25->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->priority);
  }
  priority = v25->priority;
  v15 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_begin_cond) = v15 != 0;
    __asan_report_store4(&this->priority, p_begin_cond);
  }
  this->priority = priority;
  p_next_talks = &v25->next_talks;
  std::vector<unsigned int>::vector(&this->next_talks, &v25->next_talks);
  if ( *(_BYTE *)(((unsigned __int64)&v25->init_dialog >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->init_dialog >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->init_dialog);
  }
  init_dialog = v25->init_dialog;
  v18 = *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_next_talks) = v18 != 0;
    __asan_report_store4(&this->init_dialog, p_next_talks);
  }
  this->init_dialog = init_dialog;
  v19 = (((_BYTE)v25 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->decorator_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->decorator_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->decorator_id);
  }
  decorator_id = v25->decorator_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->decorator_id, v19);
  }
  this->decorator_id = decorator_id;
  p_npc_id = &v25->npc_id;
  std::vector<unsigned int>::vector(&this->npc_id, &v25->npc_id);
  if ( *(_BYTE *)(((unsigned __int64)&v25->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->quest_id);
  }
  quest_id = v25->quest_id;
  v24 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(p_npc_id) = v24 != 0;
    __asan_report_store4(&this->quest_id, p_npc_id);
  }
  this->quest_id = quest_id;
  std::vector<unsigned int>::vector(&this->extra_load_mark_id, &v25->extra_load_mark_id);
  std::vector<unsigned int>::vector(&this->talk_mark_hide_list, &v25->talk_mark_hide_list);
  std::vector<data::TalkExec>::vector(&this->finish_exec, &v25->finish_exec);
};

// Line 227: range 000000000F1C5546-000000000F1C5570
void __cdecl data::TalkExcelConfig::~TalkExcelConfig(data::TalkExcelConfig *const this)
{
  data::TalkExcelConfig::~TalkExcelConfig(this);
  operator delete(this, 0xC0uLL);
};

// Line 227: range 000000000F1C54A0-000000000F1C5545
void __cdecl data::TalkExcelConfig::~TalkExcelConfig(data::TalkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkExcelConfig = v2;
  std::vector<data::TalkExec>::~vector(&this->finish_exec);
  std::vector<unsigned int>::~vector(&this->talk_mark_hide_list);
  std::vector<unsigned int>::~vector(&this->extra_load_mark_id);
  std::vector<unsigned int>::~vector(&this->npc_id);
  std::vector<unsigned int>::~vector(&this->next_talks);
  std::vector<data::TalkCond>::~vector(&this->begin_cond);
};

// Line 245: range 000000000F0BF9D2-000000000F0BFC26
void __cdecl data::RandomQuestEntranceExcelConfig::RandomQuestEntranceExcelConfig(
        data::RandomQuestEntranceExcelConfig *const this,
        const data::RandomQuestEntranceExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weight; // ecx
  char v7; // dl
  uint32_t template_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::LogicType filter_logic_type; // ecx
  char v12; // dl
  const data::RandomQuestEntranceExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomQuestEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestEntranceExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->weight);
  }
  weight = v13->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v13->template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->template_id);
  }
  template_id = v13->template_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->template_id, v5);
  }
  this->template_id = template_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->filter_logic_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->filter_logic_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->filter_logic_type);
  }
  filter_logic_type = v13->filter_logic_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->filter_logic_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->filter_logic_type, v10);
  }
  this->filter_logic_type = filter_logic_type;
  std::vector<data::RandomQuestFilterConfig>::vector(&this->filter_list, &v13->filter_list);
};

// Line 251: range 000000000F022A64-000000000F022C97
void __cdecl data::RqTalkExcelConfig::RqTalkExcelConfig(data::RqTalkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RqTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RqTalkExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_way, v3);
  }
  this->begin_way = TALK_BEGIN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_mode, v3);
  }
  this->active_mode = PLAY_MODE_ALL;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_cond_comb, v4);
  }
  this->begin_cond_comb = LOGIC_NONE;
  std::vector<data::TalkCond>::vector(&this->begin_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v4);
  }
  this->priority = 0;
  std::vector<unsigned int>::vector(&this->next_talks);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_dialog, v4);
  }
  this->init_dialog = 0;
  std::vector<unsigned int>::vector(&this->npc_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, v4);
  }
  this->quest_id = 0;
};

// Line 251: range 000000000F1A703A-000000000F1A745F
void __cdecl data::RqTalkExcelConfig::RqTalkExcelConfig(
        data::RqTalkExcelConfig *const this,
        const data::RqTalkExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::TalkBeginWay begin_way; // ecx
  char v7; // dl
  data::PlayMode active_mode; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::LogicType begin_cond_comb; // ecx
  char v12; // dl
  std::vector<data::TalkCond> *p_begin_cond; // rsi
  uint32_t priority; // ecx
  char v15; // al
  std::vector<unsigned int> *p_next_talks; // rsi
  uint32_t init_dialog; // ecx
  char v18; // al
  std::vector<unsigned int> *p_npc_id; // rsi
  uint32_t quest_id; // ecx
  char v21; // al
  const data::RqTalkExcelConfig *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RqTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RqTalkExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v22->begin_way >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->begin_way >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->begin_way);
  }
  begin_way = v22->begin_way;
  v7 = *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->begin_way, v5);
  }
  this->begin_way = begin_way;
  if ( *(_BYTE *)(((unsigned __int64)&v22->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->active_mode);
  }
  active_mode = v22->active_mode;
  v9 = *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->active_mode, v5);
  }
  this->active_mode = active_mode;
  v10 = (((_BYTE)v22 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->begin_cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->begin_cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->begin_cond_comb);
  }
  begin_cond_comb = v22->begin_cond_comb;
  v12 = *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->begin_cond_comb, v10);
  }
  this->begin_cond_comb = begin_cond_comb;
  p_begin_cond = &v22->begin_cond;
  std::vector<data::TalkCond>::vector(&this->begin_cond, &v22->begin_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v22->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->priority);
  }
  priority = v22->priority;
  v15 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_begin_cond) = v15 != 0;
    __asan_report_store4(&this->priority, p_begin_cond);
  }
  this->priority = priority;
  p_next_talks = &v22->next_talks;
  std::vector<unsigned int>::vector(&this->next_talks, &v22->next_talks);
  if ( *(_BYTE *)(((unsigned __int64)&v22->init_dialog >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->init_dialog >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->init_dialog);
  }
  init_dialog = v22->init_dialog;
  v18 = *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_next_talks) = v18 != 0;
    __asan_report_store4(&this->init_dialog, p_next_talks);
  }
  this->init_dialog = init_dialog;
  p_npc_id = &v22->npc_id;
  std::vector<unsigned int>::vector(&this->npc_id, &v22->npc_id);
  if ( *(_BYTE *)(((unsigned __int64)&v22->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->quest_id);
  }
  quest_id = v22->quest_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && v21 <= 3 )
  {
    LOBYTE(p_npc_id) = v21 != 0;
    __asan_report_store4(&this->quest_id, p_npc_id);
  }
  this->quest_id = quest_id;
};

// Line 254: range 000000000F1C5402-000000000F1C5473
void __cdecl data::RqTalkExcelConfig::~RqTalkExcelConfig(data::RqTalkExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RqTalkExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RqTalkExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->npc_id);
  std::vector<unsigned int>::~vector(&this->next_talks);
  std::vector<data::TalkCond>::~vector(&this->begin_cond);
};

// Line 254: range 000000000F1C5474-000000000F1C549E
void __cdecl data::RqTalkExcelConfig::~RqTalkExcelConfig(data::RqTalkExcelConfig *const this)
{
  data::RqTalkExcelConfig::~RqTalkExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 274: range 000000000F1A75A0-000000000F1A76DA
void __cdecl data::QuestResCollectionExcelConfig::QuestResCollectionExcelConfig(
        data::QuestResCollectionExcelConfig *const this,
        const data::QuestResCollectionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool is_forbid_delete; // cl
  char v8; // dl
  __int64 v9; // rdx
  const data::QuestResCollectionExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestResCollectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestResCollectionExcelConfig = v2;
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
  v5 = ((_BYTE)v10 + 12) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&v10->is_forbid_delete >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&v10->is_forbid_delete >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&v10->is_forbid_delete, v5, v6);
  is_forbid_delete = v10->is_forbid_delete;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_forbid_delete >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 12) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_forbid_delete, v5, v9);
  this->is_forbid_delete = is_forbid_delete;
};

// Line 277: range 000000000F1C53D6-000000000F1C5400
void __cdecl data::QuestResCollectionExcelConfig::~QuestResCollectionExcelConfig(
        data::QuestResCollectionExcelConfig *const this)
{
  data::QuestResCollectionExcelConfig::~QuestResCollectionExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 277: range 000000000F1C5394-000000000F1C53D5
void __cdecl data::QuestResCollectionExcelConfig::~QuestResCollectionExcelConfig(
        data::QuestResCollectionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestResCollectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestResCollectionExcelConfig = v2;
};

// Line 289: range 000000000F022C98-000000000F022D27
void __cdecl data::TalkRole::TalkRole(data::TalkRole *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TalkRole + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkRole = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = TALK_ROLE_NONE;
  std::string::basic_string(&this->id);
};

// Line 289: range 000000000F1A781C-000000000F1A78F1
void __cdecl data::TalkRole::TalkRole(data::TalkRole *const this, const data::TalkRole *a2)
{
  int (**v2)(...); // rdx
  data::TalkRoleType type; // ecx
  char v4; // al
  const data::TalkRole *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TalkRole + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TalkRole = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::string::basic_string(&this->id, &v5->id);
};

// Line 292: range 000000000F1C5368-000000000F1C5392
void __cdecl data::TalkRole::~TalkRole(data::TalkRole *const this)
{
  data::TalkRole::~TalkRole(this);
  operator delete(this, 0x30uLL);
};

// Line 292: range 000000000F1C5316-000000000F1C5367
void __cdecl data::TalkRole::~TalkRole(data::TalkRole *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TalkRole + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TalkRole = v2;
  std::string::~string(&this->id);
};

// Line 302: range 000000000F022D28-000000000F022E05
void __cdecl data::DialogExcelConfig::DialogExcelConfig(data::DialogExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DialogExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DialogExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->next_dialogs);
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_show_type, v1);
  }
  this->talk_show_type = TALK_SHOW_DEFAULT;
  data::TalkRole::TalkRole(&this->talk_role);
};

// Line 302: range 000000000F1A78F2-000000000F1A7A7E
void __cdecl data::DialogExcelConfig::DialogExcelConfig(
        data::DialogExcelConfig *const this,
        const data::DialogExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_next_dialogs; // rsi
  data::TalkShowType talk_show_type; // ecx
  char v7; // al
  const data::DialogExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DialogExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DialogExcelConfig = v2;
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
  p_next_dialogs = &v8->next_dialogs;
  std::vector<unsigned int>::vector(&this->next_dialogs, &v8->next_dialogs);
  if ( *(_BYTE *)(((unsigned __int64)&v8->talk_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->talk_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->talk_show_type);
  }
  talk_show_type = v8->talk_show_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_next_dialogs) = v7 != 0;
    __asan_report_store4(&this->talk_show_type, p_next_dialogs);
  }
  this->talk_show_type = talk_show_type;
  data::TalkRole::TalkRole(&this->talk_role, &v8->talk_role);
};

// Line 305: range 000000000F1C5288-000000000F1C52E9
void __cdecl data::DialogExcelConfig::~DialogExcelConfig(data::DialogExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DialogExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DialogExcelConfig = v2;
  data::TalkRole::~TalkRole(&this->talk_role);
  std::vector<unsigned int>::~vector(&this->next_dialogs);
};

// Line 305: range 000000000F1C52EA-000000000F1C5314
void __cdecl data::DialogExcelConfig::~DialogExcelConfig(data::DialogExcelConfig *const this)
{
  data::DialogExcelConfig::~DialogExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 319: range 000000000F04AE32-000000000F04AF0D
data::RandomQuestContent *__cdecl data::RandomQuestContent::operator=(
        data::RandomQuestContent *const this,
        const data::RandomQuestContent *a2)
{
  data::QuestContentType type; // ecx
  char v3; // al
  const data::RandomQuestContent *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::operator=(&this->param, &v5->param);
  std::string::operator=(&this->param_str, &v5->param_str);
  std::string::operator=(&this->count, &v5->count);
  return this;
};

// Line 319: range 000000000F18BCF8-000000000F18BDA7
void __cdecl data::RandomQuestContent::RandomQuestContent(data::RandomQuestContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = QUEST_CONTENT_NONE;
  std::vector<std::string>::vector(&this->param);
  std::string::basic_string(&this->param_str);
  std::string::basic_string(&this->count);
};

// Line 319: range 000000000F1A6632-000000000F1A6779
void __cdecl data::RandomQuestContent::RandomQuestContent(
        data::RandomQuestContent *const this,
        const data::RandomQuestContent *a2)
{
  int (**v2)(...); // rdx
  data::QuestContentType type; // ecx
  char v4; // al
  const data::RandomQuestContent *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomQuestContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestContent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->type, a2);
  }
  this->type = type;
  std::vector<std::string>::vector(&this->param, &v5->param);
  std::string::basic_string(&this->param_str, &v5->param_str);
  std::string::basic_string(&this->count, &v5->count);
};

// Line 322: range 000000000F168D62-000000000F168DD3
void __cdecl data::RandomQuestContent::~RandomQuestContent(data::RandomQuestContent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestContent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestContent = v2;
  std::string::~string(&this->count);
  std::string::~string(&this->param_str);
  std::vector<std::string>::~vector(&this->param);
};

// Line 322: range 000000000F168DD4-000000000F168DFE
void __cdecl data::RandomQuestContent::~RandomQuestContent(data::RandomQuestContent *const this)
{
  data::RandomQuestContent::~RandomQuestContent(this);
  operator delete(this, 0x68uLL);
};

// Line 347: range 000000000F18B8E4-000000000F18B983
void __cdecl data::RandomQuestFilterConfig::RandomQuestFilterConfig(data::RandomQuestFilterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestFilterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestFilterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->filter_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->filter_type, v1);
  }
  this->filter_type = RQ_FILTER_NONE;
  std::string::basic_string(&this->filter_factor);
  std::vector<unsigned int>::vector(&this->filter_param_list);
};

// Line 347: range 000000000F1A6368-000000000F1A647F
void __cdecl data::RandomQuestFilterConfig::RandomQuestFilterConfig(
        data::RandomQuestFilterConfig *const this,
        const data::RandomQuestFilterConfig *a2)
{
  int (**v2)(...); // rdx
  data::RandomQuestFilterType filter_type; // ecx
  char v4; // al
  const data::RandomQuestFilterConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomQuestFilterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestFilterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->filter_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->filter_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->filter_type);
  }
  filter_type = a2->filter_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->filter_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->filter_type, a2);
  }
  this->filter_type = filter_type;
  std::string::basic_string(&this->filter_factor, &v5->filter_factor);
  std::vector<unsigned int>::vector(&this->filter_param_list, &v5->filter_param_list);
};

// Line 350: range 000000000F167898-000000000F1678C2
void __cdecl data::RandomQuestFilterConfig::~RandomQuestFilterConfig(data::RandomQuestFilterConfig *const this)
{
  data::RandomQuestFilterConfig::~RandomQuestFilterConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 350: range 000000000F167836-000000000F167897
void __cdecl data::RandomQuestFilterConfig::~RandomQuestFilterConfig(data::RandomQuestFilterConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestFilterConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestFilterConfig = v2;
  std::vector<unsigned int>::~vector(&this->filter_param_list);
  std::string::~string(&this->filter_factor);
};

// Line 361: range 000000000F022E5A-000000000F022FB3
void __cdecl data::RandomQuestEntranceExcelConfig::RandomQuestEntranceExcelConfig(
        data::RandomQuestEntranceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestEntranceExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->template_id, v3);
  }
  this->template_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->filter_logic_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->filter_logic_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->filter_logic_type, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->filter_logic_type = LOGIC_NONE;
  std::vector<data::RandomQuestFilterConfig>::vector(&this->filter_list);
};

// Line 364: range 000000000F1C525C-000000000F1C5286
void __cdecl data::RandomQuestEntranceExcelConfig::~RandomQuestEntranceExcelConfig(
        data::RandomQuestEntranceExcelConfig *const this)
{
  data::RandomQuestEntranceExcelConfig::~RandomQuestEntranceExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 364: range 000000000F1C520A-000000000F1C525B
void __cdecl data::RandomQuestEntranceExcelConfig::~RandomQuestEntranceExcelConfig(
        data::RandomQuestEntranceExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestEntranceExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestEntranceExcelConfig = v2;
  std::vector<data::RandomQuestFilterConfig>::~vector(&this->filter_list);
};

// Line 379: range 000000000F189AE4-000000000F189B73
void __cdecl data::RandomQuestElem::RandomQuestElem(data::RandomQuestElem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestElem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestElem = v2;
  std::vector<std::string>::vector(&this->name);
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->pool_id, v1);
  }
  this->pool_id = 0;
};

// Line 379: range 000000000F1A500C-000000000F1A50E1
void __cdecl data::RandomQuestElem::RandomQuestElem(data::RandomQuestElem *const this, const data::RandomQuestElem *a2)
{
  int (**v2)(...); // rdx
  std::vector<std::string> *p_name; // rsi
  uint32_t pool_id; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestElem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestElem = v2;
  p_name = &a2->name;
  std::vector<std::string>::vector(&this->name, &a2->name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->pool_id);
  }
  pool_id = a2->pool_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_name) = v5 != 0;
    __asan_report_store4(&this->pool_id, p_name);
  }
  this->pool_id = pool_id;
};

// Line 382: range 000000000F167986-000000000F1679B0
void __cdecl data::RandomQuestElem::~RandomQuestElem(data::RandomQuestElem *const this)
{
  data::RandomQuestElem::~RandomQuestElem(this);
  operator delete(this, 0x28uLL);
};

// Line 382: range 000000000F167934-000000000F167985
void __cdecl data::RandomQuestElem::~RandomQuestElem(data::RandomQuestElem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestElem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestElem = v2;
  std::vector<std::string>::~vector(&this->name);
};

// Line 392: range 000000000F023008-000000000F023097
void __cdecl data::RandomQuestTemplateExcelConfig::RandomQuestTemplateExcelConfig(
        data::RandomQuestTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestTemplateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->main_id, v1);
  }
  this->main_id = 0;
  std::vector<data::RandomQuestElem>::vector(&this->elem_list);
};

// Line 392: range 000000000F1A7BC0-000000000F1A7C95
void __cdecl data::RandomQuestTemplateExcelConfig::RandomQuestTemplateExcelConfig(
        data::RandomQuestTemplateExcelConfig *const this,
        const data::RandomQuestTemplateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t main_id; // ecx
  char v4; // al
  const data::RandomQuestTemplateExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomQuestTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestTemplateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->main_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->main_id);
  }
  main_id = a2->main_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->main_id, a2);
  }
  this->main_id = main_id;
  std::vector<data::RandomQuestElem>::vector(&this->elem_list, &v5->elem_list);
};

// Line 395: range 000000000F1C51DE-000000000F1C5208
void __cdecl data::RandomQuestTemplateExcelConfig::~RandomQuestTemplateExcelConfig(
        data::RandomQuestTemplateExcelConfig *const this)
{
  data::RandomQuestTemplateExcelConfig::~RandomQuestTemplateExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 395: range 000000000F1C518C-000000000F1C51DD
void __cdecl data::RandomQuestTemplateExcelConfig::~RandomQuestTemplateExcelConfig(
        data::RandomQuestTemplateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestTemplateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestTemplateExcelConfig = v2;
  std::vector<data::RandomQuestElem>::~vector(&this->elem_list);
};

// Line 407: range 000000000F189CD6-000000000F189D37
void __cdecl data::QuestElemSample::QuestElemSample(data::QuestElemSample *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestElemSample + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestElemSample = v2;
  std::string::basic_string(&this->type);
  std::string::basic_string(&this->content);
};

// Line 407: range 000000000F1A5150-000000000F1A51F2
void __cdecl data::QuestElemSample::QuestElemSample(data::QuestElemSample *const this, const data::QuestElemSample *a2)
{
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestElemSample + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestElemSample = v2;
  std::string::basic_string(&this->type, &a2->type);
  std::string::basic_string(&this->content, &a2->content);
};

// Line 410: range 000000000F167FE0-000000000F168041
void __cdecl data::QuestElemSample::~QuestElemSample(data::QuestElemSample *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestElemSample + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestElemSample = v2;
  std::string::~string(&this->content);
  std::string::~string(&this->type);
};

// Line 410: range 000000000F168042-000000000F16806C
void __cdecl data::QuestElemSample::~QuestElemSample(data::QuestElemSample *const this)
{
  data::QuestElemSample::~QuestElemSample(this);
  operator delete(this, 0x48uLL);
};

// Line 420: range 000000000F0230EC-000000000F0231FF
void __cdecl data::RandomQuestElemPoolExcelConfig::RandomQuestElemPoolExcelConfig(
        data::RandomQuestElemPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestElemPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestElemPoolExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pool_id, v3);
  }
  this->pool_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
  std::vector<data::QuestElemSample>::vector(&this->sample_list);
};

// Line 420: range 000000000F0C0D44-000000000F0C0F13
void __cdecl data::RandomQuestElemPoolExcelConfig::RandomQuestElemPoolExcelConfig(
        data::RandomQuestElemPoolExcelConfig *const this,
        const data::RandomQuestElemPoolExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t pool_id; // ecx
  char v7; // dl
  uint32_t weight; // ecx
  char v9; // al
  const data::RandomQuestElemPoolExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomQuestElemPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestElemPoolExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v10->pool_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->pool_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->pool_id);
  }
  pool_id = v10->pool_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->pool_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->pool_id, v5);
  }
  this->pool_id = pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->weight >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->weight);
  }
  weight = v10->weight;
  v9 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  std::vector<data::QuestElemSample>::vector(&this->sample_list, &v10->sample_list);
};

// Line 423: range 000000000F1C510E-000000000F1C515F
void __cdecl data::RandomQuestElemPoolExcelConfig::~RandomQuestElemPoolExcelConfig(
        data::RandomQuestElemPoolExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestElemPoolExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestElemPoolExcelConfig = v2;
  std::vector<data::QuestElemSample>::~vector(&this->sample_list);
};

// Line 423: range 000000000F1C5160-000000000F1C518A
void __cdecl data::RandomQuestElemPoolExcelConfig::~RandomQuestElemPoolExcelConfig(
        data::RandomQuestElemPoolExcelConfig *const this)
{
  data::RandomQuestElemPoolExcelConfig::~RandomQuestElemPoolExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 437: range 000000000F023200-000000000F0233F7
void __cdecl data::RandomMainQuestExcelConfig::RandomMainQuestExcelConfig(data::RandomMainQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomMainQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomMainQuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = AQ;
  std::string::basic_string(&this->lua_path);
  if ( *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->recommend_level, v3);
  }
  this->recommend_level = 0;
  v4 = ((_BYTE)this + 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->repeatable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->repeatable, v4, v5);
  this->repeatable = 0;
  std::vector<unsigned int>::vector(&this->child_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_mode, v4);
  }
  this->active_mode = PLAY_MODE_ALL;
  if ( *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->chapter_id, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->chapter_id = 0;
  std::string::basic_string(&this->reward_id_list);
};

// Line 437: range 000000000F1A7F16-000000000F1A82D1
void __cdecl data::RandomMainQuestExcelConfig::RandomMainQuestExcelConfig(
        data::RandomMainQuestExcelConfig *const this,
        const data::RandomMainQuestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::QuestType type; // ecx
  char v7; // dl
  std::string *p_lua_path; // rsi
  uint32_t recommend_level; // ecx
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool repeatable; // cl
  char v14; // dl
  __int64 v15; // rdx
  std::vector<unsigned int> *p_child_quest_list; // rsi
  data::PlayMode active_mode; // ecx
  char v18; // al
  __int64 v19; // rsi
  uint32_t chapter_id; // ecx
  char v21; // dl
  const data::RandomMainQuestExcelConfig *v22; // [rsp+0h] [rbp-20h]

  v22 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomMainQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomMainQuestExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v22->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->type);
  }
  type = v22->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  p_lua_path = &v22->lua_path;
  std::string::basic_string(&this->lua_path, &v22->lua_path);
  if ( *(_BYTE *)(((unsigned __int64)&v22->recommend_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->recommend_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->recommend_level);
  }
  recommend_level = v22->recommend_level;
  v10 = *(_BYTE *)(((unsigned __int64)&this->recommend_level >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_lua_path) = v10 != 0;
    __asan_report_store4(&this->recommend_level, p_lua_path);
  }
  this->recommend_level = recommend_level;
  v11 = ((_BYTE)v22 + 52) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v22->repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v22->repeatable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v22->repeatable, v11, v12);
  repeatable = v22->repeatable;
  v14 = *(_BYTE *)(((unsigned __int64)&this->repeatable >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->repeatable, v11, v15);
  this->repeatable = repeatable;
  p_child_quest_list = &v22->child_quest_list;
  std::vector<unsigned int>::vector(&this->child_quest_list, &v22->child_quest_list);
  if ( *(_BYTE *)(((unsigned __int64)&v22->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v22->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v22->active_mode);
  }
  active_mode = v22->active_mode;
  v18 = *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_child_quest_list) = v18 != 0;
    __asan_report_store4(&this->active_mode, p_child_quest_list);
  }
  this->active_mode = active_mode;
  v19 = (((_BYTE)v22 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v22->chapter_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v22 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->chapter_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v22->chapter_id);
  }
  chapter_id = v22->chapter_id;
  v21 = *(_BYTE *)(((unsigned __int64)&this->chapter_id >> 3) + 0x7FFF8000);
  if ( v21 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v21 )
  {
    LOBYTE(v19) = v21 != 0;
    __asan_report_store4(&this->chapter_id, v19);
  }
  this->chapter_id = chapter_id;
  std::string::basic_string(&this->reward_id_list, &v22->reward_id_list);
};

// Line 440: range 000000000F1C50E2-000000000F1C510C
void __cdecl data::RandomMainQuestExcelConfig::~RandomMainQuestExcelConfig(
        data::RandomMainQuestExcelConfig *const this)
{
  data::RandomMainQuestExcelConfig::~RandomMainQuestExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 440: range 000000000F1C5070-000000000F1C50E1
void __cdecl data::RandomMainQuestExcelConfig::~RandomMainQuestExcelConfig(
        data::RandomMainQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomMainQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomMainQuestExcelConfig = v2;
  std::string::~string(&this->reward_id_list);
  std::vector<unsigned int>::~vector(&this->child_quest_list);
  std::string::~string(&this->lua_path);
};

// Line 459: range 000000000F0234A0-000000000F0238C8
void __cdecl data::RandomQuestExcelConfig::RandomQuestExcelConfig(data::RandomQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sub_id, v1);
  }
  this->sub_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_id, v3);
  }
  this->main_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->order, v3);
  }
  this->order = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_id_set, v4);
  }
  this->sub_id_set = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->accept_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->accept_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->accept_cond_comb, v4);
  }
  this->accept_cond_comb = LOGIC_NONE;
  std::vector<data::RandomQuestCond>::vector(&this->accept_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_cond_comb, v4);
  }
  this->finish_cond_comb = LOGIC_NONE;
  std::vector<data::RandomQuestContent>::vector(&this->finish_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->fail_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fail_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fail_cond_comb, v4);
  }
  this->fail_cond_comb = LOGIC_NONE;
  std::vector<data::RandomQuestContent>::vector(&this->fail_cond);
  data::QuestGuide::QuestGuide(&this->guide);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_guide, v4);
  }
  this->show_guide = QUEST_GUIDE_ITEM_ENABLE;
  v5 = ((_BYTE)this - 76) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->finish_parent, v5, v6);
  this->finish_parent = 0;
  v7 = ((_BYTE)this - 75) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->fail_parent, v7, v8);
  this->fail_parent = 0;
  v9 = ((_BYTE)this - 74) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_rewind, v9, v10);
  this->is_rewind = 0;
  std::string::basic_string(&this->quest_item_id_list);
  std::string::basic_string(&this->quest_item_num_list);
  std::vector<data::IdCountConfig>::vector(&this->award_items);
  std::vector<data::QuestExec>::vector(&this->begin_exec);
  std::vector<data::QuestExec>::vector(&this->finish_exec);
  std::vector<data::QuestExec>::vector(&this->fail_exec);
  std::string::basic_string(&this->exclusive_npc_list);
  std::string::basic_string(&this->shared_npc_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive_npc_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exclusive_npc_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exclusive_npc_priority, v9);
  }
  this->exclusive_npc_priority = 0;
};

// Line 459: range 000000000F1A8412-000000000F1A8CBC
void __cdecl data::RandomQuestExcelConfig::RandomQuestExcelConfig(
        data::RandomQuestExcelConfig *const this,
        const data::RandomQuestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t sub_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t main_id; // ecx
  char v7; // dl
  int32_t order; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t sub_id_set; // ecx
  char v12; // dl
  data::LogicType accept_cond_comb; // ecx
  char v14; // al
  std::vector<data::RandomQuestCond> *p_accept_cond; // rsi
  data::LogicType finish_cond_comb; // ecx
  char v17; // al
  std::vector<data::RandomQuestContent> *p_finish_cond; // rsi
  data::LogicType fail_cond_comb; // ecx
  char v20; // al
  data::QuestGuide *p_guide; // rsi
  data::ShowQuestGuideType show_guide; // ecx
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool finish_parent; // cl
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool fail_parent; // cl
  char v32; // dl
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdx
  bool is_rewind; // cl
  char v37; // dl
  __int64 v38; // rdx
  std::string *p_shared_npc_list; // rsi
  uint32_t exclusive_npc_priority; // ecx
  char v41; // al
  const data::RandomQuestExcelConfig *v42; // [rsp+0h] [rbp-20h]

  v42 = a2;
  v2 = (int (**)(...))(&`vtable for'data::RandomQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_RandomQuestExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->sub_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->sub_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->sub_id);
  }
  sub_id = a2->sub_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->sub_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->sub_id, a2);
  }
  this->sub_id = sub_id;
  v5 = (((_BYTE)v42 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->main_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->main_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->main_id);
  }
  main_id = v42->main_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->main_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->main_id, v5);
  }
  this->main_id = main_id;
  if ( *(_BYTE *)(((unsigned __int64)&v42->order >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->order >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->order);
  }
  order = v42->order;
  v9 = *(_BYTE *)(((unsigned __int64)&this->order >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->order, v5);
  }
  this->order = order;
  v10 = (((_BYTE)v42 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v42->sub_id_set >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v42 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v42->sub_id_set >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v42->sub_id_set);
  }
  sub_id_set = v42->sub_id_set;
  v12 = *(_BYTE *)(((unsigned __int64)&this->sub_id_set >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->sub_id_set, v10);
  }
  this->sub_id_set = sub_id_set;
  if ( *(_BYTE *)(((unsigned __int64)&v42->accept_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->accept_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->accept_cond_comb);
  }
  accept_cond_comb = v42->accept_cond_comb;
  v14 = *(_BYTE *)(((unsigned __int64)&this->accept_cond_comb >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->accept_cond_comb, v10);
  }
  this->accept_cond_comb = accept_cond_comb;
  p_accept_cond = &v42->accept_cond;
  std::vector<data::RandomQuestCond>::vector(&this->accept_cond, &v42->accept_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v42->finish_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->finish_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->finish_cond_comb);
  }
  finish_cond_comb = v42->finish_cond_comb;
  v17 = *(_BYTE *)(((unsigned __int64)&this->finish_cond_comb >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_accept_cond) = v17 != 0;
    __asan_report_store4(&this->finish_cond_comb, p_accept_cond);
  }
  this->finish_cond_comb = finish_cond_comb;
  p_finish_cond = &v42->finish_cond;
  std::vector<data::RandomQuestContent>::vector(&this->finish_cond, &v42->finish_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v42->fail_cond_comb >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->fail_cond_comb >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->fail_cond_comb);
  }
  fail_cond_comb = v42->fail_cond_comb;
  v20 = *(_BYTE *)(((unsigned __int64)&this->fail_cond_comb >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_finish_cond) = v20 != 0;
    __asan_report_store4(&this->fail_cond_comb, p_finish_cond);
  }
  this->fail_cond_comb = fail_cond_comb;
  std::vector<data::RandomQuestContent>::vector(&this->fail_cond, &v42->fail_cond);
  p_guide = &v42->guide;
  data::QuestGuide::QuestGuide(&this->guide, &v42->guide);
  if ( *(_BYTE *)(((unsigned __int64)&v42->show_guide >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->show_guide >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->show_guide);
  }
  show_guide = v42->show_guide;
  v23 = *(_BYTE *)(((unsigned __int64)&this->show_guide >> 3) + 0x7FFF8000);
  if ( v23 != 0 && v23 <= 3 )
  {
    LOBYTE(p_guide) = v23 != 0;
    __asan_report_store4(&this->show_guide, p_guide);
  }
  this->show_guide = show_guide;
  v24 = ((_BYTE)v42 - 76) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&v42->finish_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&v42->finish_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&v42->finish_parent, v24, v25);
  finish_parent = v42->finish_parent;
  v27 = *(_BYTE *)(((unsigned __int64)&this->finish_parent >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this - 76) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->finish_parent, v24, v28);
  this->finish_parent = finish_parent;
  v29 = ((_BYTE)v42 - 75) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&v42->fail_parent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&v42->fail_parent >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&v42->fail_parent, v29, v30);
  fail_parent = v42->fail_parent;
  v32 = *(_BYTE *)(((unsigned __int64)&this->fail_parent >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this - 75) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->fail_parent, v29, v33);
  this->fail_parent = fail_parent;
  v34 = ((_BYTE)v42 - 74) & 7;
  v35 = (*(_BYTE *)(((unsigned __int64)&v42->is_rewind >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v34 >= *(_BYTE *)(((unsigned __int64)&v42->is_rewind >> 3) + 0x7FFF8000));
  if ( (_BYTE)v35 )
    __asan_report_load1(&v42->is_rewind, v34, v35);
  is_rewind = v42->is_rewind;
  v37 = *(_BYTE *)(((unsigned __int64)&this->is_rewind >> 3) + 0x7FFF8000);
  LOBYTE(v34) = v37 != 0;
  v38 = (v37 != 0) & (unsigned __int8)((((unsigned __int8)this - 74) & 7) >= v37);
  if ( (_BYTE)v38 )
    __asan_report_store1(&this->is_rewind, v34, v38);
  this->is_rewind = is_rewind;
  std::string::basic_string(&this->quest_item_id_list, &v42->quest_item_id_list);
  std::string::basic_string(&this->quest_item_num_list, &v42->quest_item_num_list);
  std::vector<data::IdCountConfig>::vector(&this->award_items, &v42->award_items);
  std::vector<data::QuestExec>::vector(&this->begin_exec, &v42->begin_exec);
  std::vector<data::QuestExec>::vector(&this->finish_exec, &v42->finish_exec);
  std::vector<data::QuestExec>::vector(&this->fail_exec, &v42->fail_exec);
  std::string::basic_string(&this->exclusive_npc_list, &v42->exclusive_npc_list);
  p_shared_npc_list = &v42->shared_npc_list;
  std::string::basic_string(&this->shared_npc_list, &v42->shared_npc_list);
  if ( *(_BYTE *)(((unsigned __int64)&v42->exclusive_npc_priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->exclusive_npc_priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v42->exclusive_npc_priority);
  }
  exclusive_npc_priority = v42->exclusive_npc_priority;
  v41 = *(_BYTE *)(((unsigned __int64)&this->exclusive_npc_priority >> 3) + 0x7FFF8000);
  if ( v41 != 0 && v41 <= 3 )
  {
    LOBYTE(p_shared_npc_list) = v41 != 0;
    __asan_report_store4(&this->exclusive_npc_priority, p_shared_npc_list);
  }
  this->exclusive_npc_priority = exclusive_npc_priority;
};

// Line 462: range 000000000F1C4F32-000000000F1C5043
void __cdecl data::RandomQuestExcelConfig::~RandomQuestExcelConfig(data::RandomQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::RandomQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_RandomQuestExcelConfig = v2;
  std::string::~string(&this->shared_npc_list);
  std::string::~string(&this->exclusive_npc_list);
  std::vector<data::QuestExec>::~vector(&this->fail_exec);
  std::vector<data::QuestExec>::~vector(&this->finish_exec);
  std::vector<data::QuestExec>::~vector(&this->begin_exec);
  std::vector<data::IdCountConfig>::~vector(&this->award_items);
  std::string::~string(&this->quest_item_num_list);
  std::string::~string(&this->quest_item_id_list);
  data::QuestGuide::~QuestGuide(&this->guide);
  std::vector<data::RandomQuestContent>::~vector(&this->fail_cond);
  std::vector<data::RandomQuestContent>::~vector(&this->finish_cond);
  std::vector<data::RandomQuestCond>::~vector(&this->accept_cond);
};

// Line 462: range 000000000F1C5044-000000000F1C506E
void __cdecl data::RandomQuestExcelConfig::~RandomQuestExcelConfig(data::RandomQuestExcelConfig *const this)
{
  data::RandomQuestExcelConfig::~RandomQuestExcelConfig(this);
  operator delete(this, 0x1A0uLL);
};

// Line 496: range 000000000F1A8DFE-000000000F1A8F3D
void __cdecl data::QuestGlobalVarConfig::QuestGlobalVarConfig(
        data::QuestGlobalVarConfig *const this,
        const data::QuestGlobalVarConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  int32_t default_value; // ecx
  char v7; // dl
  const data::QuestGlobalVarConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestGlobalVarConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestGlobalVarConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->default_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->default_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->default_value);
  }
  default_value = v8->default_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->default_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->default_value, v5);
  }
  this->default_value = default_value;
};

// Line 499: range 000000000F1C4EC4-000000000F1C4F05
void __cdecl data::QuestGlobalVarConfig::~QuestGlobalVarConfig(data::QuestGlobalVarConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestGlobalVarConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestGlobalVarConfig = v2;
};

// Line 499: range 000000000F1C4F06-000000000F1C4F30
void __cdecl data::QuestGlobalVarConfig::~QuestGlobalVarConfig(data::QuestGlobalVarConfig *const this)
{
  data::QuestGlobalVarConfig::~QuestGlobalVarConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 511: range 000000000F1A907E-000000000F1A9138
void __cdecl data::QuestPlaceConfig::QuestPlaceConfig(
        data::QuestPlaceConfig *const this,
        const data::QuestPlaceConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t place_id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::QuestPlaceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestPlaceConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->place_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->place_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->place_id);
  }
  place_id = a2->place_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->place_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->place_id, a2);
  }
  this->place_id = place_id;
};

// Line 514: range 000000000F1C4E56-000000000F1C4E97
void __cdecl data::QuestPlaceConfig::~QuestPlaceConfig(data::QuestPlaceConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestPlaceConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestPlaceConfig = v2;
};

// Line 514: range 000000000F1C4E98-000000000F1C4EC2
void __cdecl data::QuestPlaceConfig::~QuestPlaceConfig(data::QuestPlaceConfig *const this)
{
  data::QuestPlaceConfig::~QuestPlaceConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 525: range 000000000F1A927A-000000000F1A94B3
void __cdecl data::QuestSpecialShowConfig::QuestSpecialShowConfig(
        data::QuestSpecialShowConfig *const this,
        const data::QuestSpecialShowConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::QuestSpecialShowType cond_type; // ecx
  char v7; // dl
  uint32_t param1; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t param2; // ecx
  char v12; // dl
  const data::QuestSpecialShowConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::QuestSpecialShowConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_QuestSpecialShowConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v13->cond_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->cond_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->cond_type);
  }
  cond_type = v13->cond_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->cond_type, v5);
  }
  this->cond_type = cond_type;
  if ( *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->param1);
  }
  param1 = v13->param1;
  v9 = *(_BYTE *)(((unsigned __int64)&this->param1 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->param1, v5);
  }
  this->param1 = param1;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->param2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->param2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->param2);
  }
  param2 = v13->param2;
  v12 = *(_BYTE *)(((unsigned __int64)&this->param2 >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->param2, v10);
  }
  this->param2 = param2;
};

// Line 528: range 000000000F1C4DE8-000000000F1C4E29
void __cdecl data::QuestSpecialShowConfig::~QuestSpecialShowConfig(data::QuestSpecialShowConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::QuestSpecialShowConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_QuestSpecialShowConfig = v2;
};

// Line 528: range 000000000F1C4E2A-000000000F1C4E54
void __cdecl data::QuestSpecialShowConfig::~QuestSpecialShowConfig(data::QuestSpecialShowConfig *const this)
{
  data::QuestSpecialShowConfig::~QuestSpecialShowConfig(this);
  operator delete(this, 0x18uLL);
};
