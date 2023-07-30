// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigTalkScheme.h

// Line 21: range 0000000012155D98-0000000012155E2A
void __cdecl data::TalkCondEx::TalkCondEx(data::TalkCondEx *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = QUEST_COND_NONE;
  std::vector<std::string>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 21: range 000000001233118E-000000001233129C
void __cdecl data::TalkCondEx::TalkCondEx(data::TalkCondEx *const this, data::TalkCondEx *a2)
{
  data::QuestCondType type; // ecx
  char v3; // al
  data::StringList *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::TalkCondEx *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_param = &v7->param;
  std::vector<std::string>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 21: range 0000000012155E2C-0000000012155E4A
void __cdecl data::TalkCondEx::~TalkCondEx(data::TalkCondEx *const this)
{
  std::vector<std::string>::~vector(&this->param);
};

// Line 45: range 0000000012155E4C-0000000012155EDE
void __cdecl data::TalkExecEx::TalkExecEx(data::TalkExecEx *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = TALK_EXEC_NONE;
  std::vector<std::string>::vector(&this->param);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 45: range 00000000123319E4-0000000012331AF2
void __cdecl data::TalkExecEx::TalkExecEx(data::TalkExecEx *const this, data::TalkExecEx *a2)
{
  data::TalkExecType type; // ecx
  char v3; // al
  data::StringList *p_param; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::TalkExecEx *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_param = &v7->param;
  std::vector<std::string>::vector(&this->param, &v7->param);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_param, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_param) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 45: range 0000000012155EE0-0000000012155EFE
void __cdecl data::TalkExecEx::~TalkExecEx(data::TalkExecEx *const this)
{
  std::vector<std::string>::~vector(&this->param);
};

// Line 79: range 000000001215697C-0000000012156A0E
void __cdecl data::TalkRoleEx::TalkRoleEx(data::TalkRoleEx *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = TALK_ROLE_NONE;
  std::string::basic_string(&this->id);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 79: range 0000000012629146-0000000012629254
void __cdecl data::TalkRoleEx::TalkRoleEx(data::TalkRoleEx *const this, const data::TalkRoleEx *a2)
{
  data::TalkRoleType type; // ecx
  char v3; // al
  std::string *p_id; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::TalkRoleEx *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_id = &v7->id;
  std::string::basic_string(&this->id, &v7->id);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_id, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_id) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_id, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 79: range 0000000012332914-0000000012332A22
void __cdecl data::TalkRoleEx::TalkRoleEx(data::TalkRoleEx *const this, data::TalkRoleEx *a2)
{
  data::TalkRoleType type; // ecx
  char v3; // al
  std::string *p_id; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::TalkRoleEx *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  p_id = &v7->id;
  std::string::basic_string(&this->id, &v7->id);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_id, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_id) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_id, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 79: range 0000000012156A10-0000000012156A2E
void __cdecl data::TalkRoleEx::~TalkRoleEx(data::TalkRoleEx *const this)
{
  std::string::~string(&this->id);
};

// Line 103: range 0000000012175B6E-00000000121761C7
void __cdecl data::ConfigTalkScheme::ConfigTalkScheme(data::ConfigTalkScheme *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_way, v2);
  }
  this->begin_way = TALK_BEGIN_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->active_mode, v2);
  }
  this->active_mode = PLAY_MODE_SINGLE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->begin_cond_comb, v3);
  }
  this->begin_cond_comb = LOGIC_NONE;
  std::vector<data::TalkCondEx>::vector(&this->begin_cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->priority, v3);
  }
  this->priority = 0;
  std::vector<unsigned int>::vector(&this->next_talks);
  std::vector<unsigned int>::vector(&this->next_random_talks);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_random_talk_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_random_talk_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_random_talk_count, v3);
  }
  this->show_random_talk_count = 0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_dialog, v4);
  }
  this->init_dialog = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->decorator_id, v4);
  }
  this->decorator_id = 0;
  std::vector<unsigned int>::vector(&this->npc_id);
  std::string::basic_string(&this->perform_cfg);
  if ( *(_BYTE *)(((unsigned __int64)&this->hero_talk >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hero_talk >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hero_talk, v4);
  }
  this->hero_talk = TALK_HERO_LOCAL;
  v5 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->load_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->load_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->load_type, v5);
  }
  this->load_type = TALK_NORMAL_QUEST;
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quest_id, v5);
  }
  this->quest_id = 0;
  std::vector<unsigned int>::vector(&this->extra_load_mark_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->asset_index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->asset_index, v5);
  this->asset_index = 0LL;
  if ( *(char *)(((unsigned __int64)&this->dont_block_daily >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->dont_block_daily, v5, &this->dont_block_daily);
  this->dont_block_daily = 0;
  std::vector<unsigned int>::vector(&this->participant_id);
  std::string::basic_string(&this->pre_perform_cfg);
  if ( *(char *)(((unsigned __int64)&this->stay_free_style >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->stay_free_style, v5, &this->stay_free_style);
  this->stay_free_style = 0;
  v6 = ((_BYTE)this + 25) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable_camera_displacement, v6, v7);
  this->enable_camera_displacement = 0;
  v8 = ((_BYTE)this + 26) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->lock_game_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->lock_game_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->lock_game_time, v8, v9);
  this->lock_game_time = 0;
  v10 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_mark_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->talk_mark_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->talk_mark_type, v10);
  }
  this->talk_mark_type = TALK_MARK_NONE;
  if ( *(char *)(((unsigned __int64)&this->quest_idle_talk >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->quest_idle_talk, v10, &this->quest_idle_talk);
  this->quest_idle_talk = 0;
  v11 = ((_BYTE)this + 33) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->low_priority >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->low_priority >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->low_priority, v11, v12);
  this->low_priority = 0;
  std::vector<data::TalkExecEx>::vector(&this->finish_exec);
  std::vector<int>::vector(&this->pre_perform_free_style_list);
  std::vector<int>::vector(&this->free_style_list);
  std::vector<unsigned int>::vector(&this->talk_mark_hide_list);
  std::vector<int>::vector(&this->crowd_lod0_list);
  if ( *(char *)(((unsigned __int64)&this->check_action_after >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->check_action_after, v11, &this->check_action_after);
  this->check_action_after = 0;
  v13 = ((_BYTE)this - 95) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_json_loaded, v13, v14);
  this->is_json_loaded = 0;
};

// Line 103: range 0000000012370E7A-0000000012371A8E
void __cdecl data::ConfigTalkScheme::ConfigTalkScheme(data::ConfigTalkScheme *const this, data::ConfigTalkScheme *a2)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::TalkBeginWay begin_way; // ecx
  char v6; // dl
  data::PlayMode active_mode; // ecx
  char v8; // al
  __int64 v9; // rsi
  data::LogicType begin_cond_comb; // ecx
  char v11; // dl
  data::TalkCondExList *p_begin_cond; // rsi
  uint32_t priority; // ecx
  char v14; // al
  data::UInt32List *p_next_random_talks; // rsi
  int32_t show_random_talk_count; // ecx
  char v17; // al
  __int64 v18; // rsi
  uint32_t init_dialog; // ecx
  char v20; // dl
  uint32_t decorator_id; // ecx
  char v22; // al
  std::string *p_perform_cfg; // rsi
  data::TalkHeroType hero_talk; // ecx
  char v25; // al
  __int64 v26; // rsi
  data::TalkLoadType load_type; // ecx
  char v28; // dl
  uint32_t quest_id; // ecx
  char v30; // al
  data::UInt32List *p_extra_load_mark_id; // rsi
  uint64_t asset_index; // rdx
  bool dont_block_daily; // cl
  char v34; // al
  std::string *p_pre_perform_cfg; // rsi
  bool stay_free_style; // cl
  char v37; // al
  __int64 v38; // rsi
  __int64 v39; // rdx
  bool enable_camera_displacement; // cl
  char v41; // dl
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rdx
  bool lock_game_time; // cl
  char v46; // dl
  __int64 v47; // rdx
  __int64 v48; // rsi
  data::TalkMarkType talk_mark_type; // ecx
  char v50; // dl
  bool quest_idle_talk; // cl
  char v52; // al
  __int64 v53; // rsi
  __int64 v54; // rdx
  bool low_priority; // cl
  char v56; // dl
  __int64 v57; // rdx
  data::Int32List *p_crowd_lod0_list; // rsi
  bool check_action_after; // cl
  char v60; // al
  __int64 v61; // rsi
  __int64 v62; // rdx
  bool is_json_loaded; // cl
  char v64; // dl
  __int64 v65; // rdx
  data::ConfigTalkScheme *v66; // [rsp+0h] [rbp-10h]

  v66 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  v4 = (((_BYTE)v66 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v66->begin_way >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v66 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v66->begin_way >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v66->begin_way);
  }
  begin_way = v66->begin_way;
  v6 = *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->begin_way, v4);
  }
  this->begin_way = begin_way;
  if ( *(_BYTE *)(((unsigned __int64)&v66->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v66->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v66->active_mode);
  }
  active_mode = v66->active_mode;
  v8 = *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->active_mode, v4);
  }
  this->active_mode = active_mode;
  v9 = (((_BYTE)v66 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v66->begin_cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v66 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v66->begin_cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v66->begin_cond_comb);
  }
  begin_cond_comb = v66->begin_cond_comb;
  v11 = *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->begin_cond_comb, v9);
  }
  this->begin_cond_comb = begin_cond_comb;
  p_begin_cond = &v66->begin_cond;
  std::vector<data::TalkCondEx>::vector(&this->begin_cond, &v66->begin_cond);
  if ( *(_BYTE *)(((unsigned __int64)&v66->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v66->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v66->priority);
  }
  priority = v66->priority;
  v14 = *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_begin_cond) = v14 != 0;
    __asan_report_store4(&this->priority, p_begin_cond);
  }
  this->priority = priority;
  std::vector<unsigned int>::vector(&this->next_talks, &v66->next_talks);
  p_next_random_talks = &v66->next_random_talks;
  std::vector<unsigned int>::vector(&this->next_random_talks, &v66->next_random_talks);
  if ( *(_BYTE *)(((unsigned __int64)&v66->show_random_talk_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v66->show_random_talk_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v66->show_random_talk_count);
  }
  show_random_talk_count = v66->show_random_talk_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->show_random_talk_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_next_random_talks) = v17 != 0;
    __asan_report_store4(&this->show_random_talk_count, p_next_random_talks);
  }
  this->show_random_talk_count = show_random_talk_count;
  v18 = (((_BYTE)v66 + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v66->init_dialog >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v66 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v66->init_dialog >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v66->init_dialog);
  }
  init_dialog = v66->init_dialog;
  v20 = *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 100) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->init_dialog, v18);
  }
  this->init_dialog = init_dialog;
  if ( *(_BYTE *)(((unsigned __int64)&v66->decorator_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v66->decorator_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v66->decorator_id);
  }
  decorator_id = v66->decorator_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v18) = v22 != 0;
    __asan_report_store4(&this->decorator_id, v18);
  }
  this->decorator_id = decorator_id;
  std::vector<unsigned int>::vector(&this->npc_id, &v66->npc_id);
  p_perform_cfg = &v66->perform_cfg;
  std::string::basic_string(&this->perform_cfg, &v66->perform_cfg);
  if ( *(_BYTE *)(((unsigned __int64)&v66->hero_talk >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v66->hero_talk >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v66->hero_talk);
  }
  hero_talk = v66->hero_talk;
  v25 = *(_BYTE *)(((unsigned __int64)&this->hero_talk >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(p_perform_cfg) = v25 != 0;
    __asan_report_store4(&this->hero_talk, p_perform_cfg);
  }
  this->hero_talk = hero_talk;
  v26 = (((_BYTE)v66 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v66->load_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v66 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v66->load_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v66->load_type);
  }
  load_type = v66->load_type;
  v28 = *(_BYTE *)(((unsigned __int64)&this->load_type >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->load_type, v26);
  }
  this->load_type = load_type;
  if ( *(_BYTE *)(((unsigned __int64)&v66->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v66->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v66->quest_id);
  }
  quest_id = v66->quest_id;
  v30 = *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->quest_id, v26);
  }
  this->quest_id = quest_id;
  p_extra_load_mark_id = &v66->extra_load_mark_id;
  std::vector<unsigned int>::vector(&this->extra_load_mark_id, &v66->extra_load_mark_id);
  if ( *(_BYTE *)(((unsigned __int64)&v66->asset_index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v66->asset_index);
  asset_index = v66->asset_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->asset_index >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->asset_index, p_extra_load_mark_id);
  this->asset_index = asset_index;
  if ( *(char *)(((unsigned __int64)&v66->dont_block_daily >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v66->dont_block_daily, p_extra_load_mark_id, &v66->dont_block_daily);
  dont_block_daily = v66->dont_block_daily;
  v34 = *(_BYTE *)(((unsigned __int64)&this->dont_block_daily >> 3) + 0x7FFF8000);
  if ( v34 < 0 )
  {
    LOBYTE(p_extra_load_mark_id) = v34 != 0;
    __asan_report_store1(&this->dont_block_daily, p_extra_load_mark_id, &this->dont_block_daily);
  }
  this->dont_block_daily = dont_block_daily;
  std::vector<unsigned int>::vector(&this->participant_id, &v66->participant_id);
  p_pre_perform_cfg = &v66->pre_perform_cfg;
  std::string::basic_string(&this->pre_perform_cfg, &v66->pre_perform_cfg);
  if ( *(char *)(((unsigned __int64)&v66->stay_free_style >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v66->stay_free_style, p_pre_perform_cfg, &v66->stay_free_style);
  stay_free_style = v66->stay_free_style;
  v37 = *(_BYTE *)(((unsigned __int64)&this->stay_free_style >> 3) + 0x7FFF8000);
  if ( v37 < 0 )
  {
    LOBYTE(p_pre_perform_cfg) = v37 != 0;
    __asan_report_store1(&this->stay_free_style, p_pre_perform_cfg, &this->stay_free_style);
  }
  this->stay_free_style = stay_free_style;
  v38 = ((_BYTE)v66 + 25) & 7;
  v39 = (*(_BYTE *)(((unsigned __int64)&v66->enable_camera_displacement >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v38 >= *(_BYTE *)(((unsigned __int64)&v66->enable_camera_displacement >> 3) + 0x7FFF8000));
  if ( (_BYTE)v39 )
    __asan_report_load1(&v66->enable_camera_displacement, v38, v39);
  enable_camera_displacement = v66->enable_camera_displacement;
  v41 = *(_BYTE *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v41 != 0;
  v42 = (v41 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v41);
  if ( (_BYTE)v42 )
    __asan_report_store1(&this->enable_camera_displacement, v38, v42);
  this->enable_camera_displacement = enable_camera_displacement;
  v43 = ((_BYTE)v66 + 26) & 7;
  v44 = (*(_BYTE *)(((unsigned __int64)&v66->lock_game_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v43 >= *(_BYTE *)(((unsigned __int64)&v66->lock_game_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v44 )
    __asan_report_load1(&v66->lock_game_time, v43, v44);
  lock_game_time = v66->lock_game_time;
  v46 = *(_BYTE *)(((unsigned __int64)&this->lock_game_time >> 3) + 0x7FFF8000);
  LOBYTE(v43) = v46 != 0;
  v47 = (v46 != 0) & (unsigned __int8)((((unsigned __int8)this + 26) & 7) >= v46);
  if ( (_BYTE)v47 )
    __asan_report_store1(&this->lock_game_time, v43, v47);
  this->lock_game_time = lock_game_time;
  v48 = (((_BYTE)v66 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v66->talk_mark_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v66 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v66->talk_mark_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v66->talk_mark_type);
  }
  talk_mark_type = v66->talk_mark_type;
  v50 = *(_BYTE *)(((unsigned __int64)&this->talk_mark_type >> 3) + 0x7FFF8000);
  LOBYTE(v48) = v50 != 0;
  if ( v50 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v50 )
    __asan_report_store4(&this->talk_mark_type, v48);
  this->talk_mark_type = talk_mark_type;
  if ( *(char *)(((unsigned __int64)&v66->quest_idle_talk >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v66->quest_idle_talk, v48, &v66->quest_idle_talk);
  quest_idle_talk = v66->quest_idle_talk;
  v52 = *(_BYTE *)(((unsigned __int64)&this->quest_idle_talk >> 3) + 0x7FFF8000);
  if ( v52 < 0 )
  {
    LOBYTE(v48) = v52 != 0;
    __asan_report_store1(&this->quest_idle_talk, v48, &this->quest_idle_talk);
  }
  this->quest_idle_talk = quest_idle_talk;
  v53 = ((_BYTE)v66 + 33) & 7;
  v54 = (*(_BYTE *)(((unsigned __int64)&v66->low_priority >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v53 >= *(_BYTE *)(((unsigned __int64)&v66->low_priority >> 3) + 0x7FFF8000));
  if ( (_BYTE)v54 )
    __asan_report_load1(&v66->low_priority, v53, v54);
  low_priority = v66->low_priority;
  v56 = *(_BYTE *)(((unsigned __int64)&this->low_priority >> 3) + 0x7FFF8000);
  LOBYTE(v53) = v56 != 0;
  v57 = (v56 != 0) & (unsigned __int8)((((unsigned __int8)this + 33) & 7) >= v56);
  if ( (_BYTE)v57 )
    __asan_report_store1(&this->low_priority, v53, v57);
  this->low_priority = low_priority;
  std::vector<data::TalkExecEx>::vector(&this->finish_exec, &v66->finish_exec);
  std::vector<int>::vector(&this->pre_perform_free_style_list, &v66->pre_perform_free_style_list);
  std::vector<int>::vector(&this->free_style_list, &v66->free_style_list);
  std::vector<unsigned int>::vector(&this->talk_mark_hide_list, &v66->talk_mark_hide_list);
  p_crowd_lod0_list = &v66->crowd_lod0_list;
  std::vector<int>::vector(&this->crowd_lod0_list, &v66->crowd_lod0_list);
  if ( *(char *)(((unsigned __int64)&v66->check_action_after >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v66->check_action_after, p_crowd_lod0_list, &v66->check_action_after);
  check_action_after = v66->check_action_after;
  v60 = *(_BYTE *)(((unsigned __int64)&this->check_action_after >> 3) + 0x7FFF8000);
  if ( v60 < 0 )
  {
    LOBYTE(p_crowd_lod0_list) = v60 != 0;
    __asan_report_store1(&this->check_action_after, p_crowd_lod0_list, &this->check_action_after);
  }
  this->check_action_after = check_action_after;
  v61 = ((_BYTE)v66 - 95) & 7;
  v62 = (*(_BYTE *)(((unsigned __int64)&v66->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v61 >= *(_BYTE *)(((unsigned __int64)&v66->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v62 )
    __asan_report_load1(&v66->is_json_loaded, v61, v62);
  is_json_loaded = v66->is_json_loaded;
  v64 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v61) = v64 != 0;
  v65 = (v64 != 0) & (unsigned __int8)((((unsigned __int8)this - 95) & 7) >= v64);
  if ( (_BYTE)v65 )
    __asan_report_store1(&this->is_json_loaded, v61, v65);
  this->is_json_loaded = is_json_loaded;
};

// Line 103: range 00000000121761C8-00000000121762B8
void __cdecl data::ConfigTalkScheme::~ConfigTalkScheme(data::ConfigTalkScheme *const this)
{
  std::vector<int>::~vector(&this->crowd_lod0_list);
  std::vector<unsigned int>::~vector(&this->talk_mark_hide_list);
  std::vector<int>::~vector(&this->free_style_list);
  std::vector<int>::~vector(&this->pre_perform_free_style_list);
  std::vector<data::TalkExecEx>::~vector(&this->finish_exec);
  std::string::~string(&this->pre_perform_cfg);
  std::vector<unsigned int>::~vector(&this->participant_id);
  std::vector<unsigned int>::~vector(&this->extra_load_mark_id);
  std::string::~string(&this->perform_cfg);
  std::vector<unsigned int>::~vector(&this->npc_id);
  std::vector<unsigned int>::~vector(&this->next_random_talks);
  std::vector<unsigned int>::~vector(&this->next_talks);
  std::vector<data::TalkCondEx>::~vector(&this->begin_cond);
};

// Line 158: range 0000000012156A30-0000000012156C0A
void __cdecl data::ConfigDialogScheme::ConfigDialogScheme(data::ConfigDialogScheme *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->next_dialogs);
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_show_type, v1);
  }
  this->talk_show_type = TALK_SHOW_DEFAULT;
  data::TalkRoleEx::TalkRoleEx(&this->talk_role);
  std::string::basic_string(&this->talk_content);
  std::string::basic_string(&this->talk_title);
  std::string::basic_string(&this->talk_role_name);
  std::string::basic_string(&this->talk_asset_path);
  std::string::basic_string(&this->talk_asset_path__alter);
  std::string::basic_string(&this->talk_audio_name);
  std::string::basic_string(&this->action_before);
  std::string::basic_string(&this->action_while);
  std::string::basic_string(&this->action_after);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_duration, v1);
  }
  this->show_duration = 0.0;
  std::string::basic_string(&this->option_icon);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 158: range 0000000012629256-00000000126296C0
void __cdecl data::ConfigDialogScheme::ConfigDialogScheme(
        data::ConfigDialogScheme *const this,
        const data::ConfigDialogScheme *a2)
{
  uint32_t id; // ecx
  char v3; // al
  data::UInt32List *p_next_dialogs; // rsi
  data::TalkShowType talk_show_type; // ecx
  char v6; // al
  float show_duration; // xmm0_4
  std::string *p_option_icon; // rsi
  bool is_json_loaded; // cl
  char v10; // al
  const data::ConfigDialogScheme *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  p_next_dialogs = &v11->next_dialogs;
  std::vector<unsigned int>::vector(&this->next_dialogs, &v11->next_dialogs);
  if ( *(_BYTE *)(((unsigned __int64)&v11->talk_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->talk_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->talk_show_type);
  }
  talk_show_type = v11->talk_show_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_next_dialogs) = v6 != 0;
    __asan_report_store4(&this->talk_show_type, p_next_dialogs);
  }
  this->talk_show_type = talk_show_type;
  data::TalkRoleEx::TalkRoleEx(&this->talk_role, &v11->talk_role);
  std::string::basic_string(&this->talk_content, &v11->talk_content);
  std::string::basic_string(&this->talk_title, &v11->talk_title);
  std::string::basic_string(&this->talk_role_name, &v11->talk_role_name);
  std::string::basic_string(&this->talk_asset_path, &v11->talk_asset_path);
  std::string::basic_string(&this->talk_asset_path__alter, &v11->talk_asset_path__alter);
  std::string::basic_string(&this->talk_audio_name, &v11->talk_audio_name);
  std::string::basic_string(&this->action_before, &v11->action_before);
  std::string::basic_string(&this->action_while, &v11->action_while);
  std::string::basic_string(&this->action_after, &v11->action_after);
  if ( *(_BYTE *)(((unsigned __int64)&v11->show_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->show_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->show_duration);
  }
  show_duration = v11->show_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_duration, &v11->action_after);
  }
  this->show_duration = show_duration;
  p_option_icon = &v11->option_icon;
  std::string::basic_string(&this->option_icon, &v11->option_icon);
  if ( *(char *)(((unsigned __int64)&v11->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_json_loaded, p_option_icon, &v11->is_json_loaded);
  is_json_loaded = v11->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_option_icon) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, p_option_icon, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 158: range 0000000012332A24-0000000012332D84
void __cdecl data::ConfigDialogScheme::ConfigDialogScheme(
        data::ConfigDialogScheme *const this,
        data::ConfigDialogScheme *a2)
{
  uint32_t id; // ecx
  char v3; // al
  data::UInt32List *p_next_dialogs; // rsi
  data::TalkShowType talk_show_type; // ecx
  char v6; // al
  float show_duration; // xmm0_4
  std::string *p_option_icon; // rsi
  bool is_json_loaded; // cl
  char v10; // al
  data::ConfigDialogScheme *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  id = a2->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->id = id;
  p_next_dialogs = &v11->next_dialogs;
  std::vector<unsigned int>::vector(&this->next_dialogs, &v11->next_dialogs);
  if ( *(_BYTE *)(((unsigned __int64)&v11->talk_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->talk_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->talk_show_type);
  }
  talk_show_type = v11->talk_show_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_next_dialogs) = v6 != 0;
    __asan_report_store4(&this->talk_show_type, p_next_dialogs);
  }
  this->talk_show_type = talk_show_type;
  data::TalkRoleEx::TalkRoleEx(&this->talk_role, &v11->talk_role);
  std::string::basic_string(&this->talk_content, &v11->talk_content);
  std::string::basic_string(&this->talk_title, &v11->talk_title);
  std::string::basic_string(&this->talk_role_name, &v11->talk_role_name);
  std::string::basic_string(&this->talk_asset_path, &v11->talk_asset_path);
  std::string::basic_string(&this->talk_asset_path__alter, &v11->talk_asset_path__alter);
  std::string::basic_string(&this->talk_audio_name, &v11->talk_audio_name);
  std::string::basic_string(&this->action_before, &v11->action_before);
  std::string::basic_string(&this->action_while, &v11->action_while);
  std::string::basic_string(&this->action_after, &v11->action_after);
  if ( *(_BYTE *)(((unsigned __int64)&v11->show_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->show_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->show_duration);
  }
  show_duration = v11->show_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_duration, &v11->action_after);
  }
  this->show_duration = show_duration;
  p_option_icon = &v11->option_icon;
  std::string::basic_string(&this->option_icon, &v11->option_icon);
  if ( *(char *)(((unsigned __int64)&v11->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v11->is_json_loaded, p_option_icon, &v11->is_json_loaded);
  is_json_loaded = v11->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(p_option_icon) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, p_option_icon, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 158: range 0000000012156C0C-0000000012156CEA
void __cdecl data::ConfigDialogScheme::~ConfigDialogScheme(data::ConfigDialogScheme *const this)
{
  std::string::~string(&this->option_icon);
  std::string::~string(&this->action_after);
  std::string::~string(&this->action_while);
  std::string::~string(&this->action_before);
  std::string::~string(&this->talk_audio_name);
  std::string::~string(&this->talk_asset_path__alter);
  std::string::~string(&this->talk_asset_path);
  std::string::~string(&this->talk_role_name);
  std::string::~string(&this->talk_title);
  std::string::~string(&this->talk_content);
  data::TalkRoleEx::~TalkRoleEx(&this->talk_role);
  std::vector<unsigned int>::~vector(&this->next_dialogs);
};

// Line 220: range 00000000126F8B76-00000000126F8C96
void __cdecl data::ConfigDialogGroup::ConfigDialogGroup(data::ConfigDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  std::enable_shared_from_this<data::ConfigDialogGroup>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigDialogGroup>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->talk_id, v1);
  }
  this->talk_id = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, v3);
  }
  this->type = QUEST_2;
  std::vector<data::ConfigDialogScheme>::vector(&this->dialog_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 220: range 00000000126F91F4-00000000126F9406
void __cdecl data::ConfigDialogGroup::ConfigDialogGroup(
        data::ConfigDialogGroup *const this,
        const data::ConfigDialogGroup *a2)
{
  std::enable_shared_from_this<data::ConfigDialogGroup> *v2; // rsi
  int (**v3)(...); // rdx
  uint32_t talk_id; // ecx
  char v5; // al
  __int64 v6; // rsi
  data::DialogGroupSchemeType type; // ecx
  char v8; // dl
  data::ConfigDialogList *p_dialog_list; // rsi
  bool is_json_loaded; // cl
  char v11; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigDialogGroup>;
  std::enable_shared_from_this<data::ConfigDialogGroup>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigDialogGroup>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigDialogGroup = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->talk_id);
  }
  talk_id = a2->talk_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->talk_id, v2);
  }
  this->talk_id = talk_id;
  v6 = (((_BYTE)a2 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v8 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->type, v6);
  }
  this->type = type;
  p_dialog_list = &a2->dialog_list;
  std::vector<data::ConfigDialogScheme>::vector(&this->dialog_list, &a2->dialog_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_dialog_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_dialog_list) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_dialog_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 230: range 00000000126F96F0-00000000126F9751
void __cdecl data::ConfigDialogGroup::~ConfigDialogGroup(data::ConfigDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  std::vector<data::ConfigDialogScheme>::~vector(&this->dialog_list);
  std::enable_shared_from_this<data::ConfigDialogGroup>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigDialogGroup>);
};

// Line 230: range 00000000126F9752-00000000126F977C
void __cdecl data::ConfigDialogGroup::~ConfigDialogGroup(data::ConfigDialogGroup *const this)
{
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 235: range 0000000012154CB8-0000000012154CC8
const char *__cdecl data::ConfigDialogGroup::getTypeName(const data::ConfigDialogGroup *const this)
{
  return "ConfigDialogGroup";
};

// Line 236: range 0000000012154CCA-0000000012154E66
int32_t __cdecl data::ConfigDialogGroup::getHashNum(const data::ConfigDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 255: range 00000000126F977E-00000000126F97CB
void __cdecl data::ConfigFreeDialogGroup::ConfigFreeDialogGroup(data::ConfigFreeDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFreeDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 255: range 00000000126F9BD0-00000000126F9C28
void __cdecl data::ConfigFreeDialogGroup::ConfigFreeDialogGroup(
        data::ConfigFreeDialogGroup *const this,
        const data::ConfigFreeDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigFreeDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 261: range 000000001274DA9E-000000001274DAEB
void __cdecl data::ConfigFreeDialogGroup::~ConfigFreeDialogGroup(data::ConfigFreeDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFreeDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 261: range 000000001274DAEC-000000001274DB16
void __cdecl data::ConfigFreeDialogGroup::~ConfigFreeDialogGroup(data::ConfigFreeDialogGroup *const this)
{
  data::ConfigFreeDialogGroup::~ConfigFreeDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 266: range 0000000012154E68-0000000012154E78
const char *__cdecl data::ConfigFreeDialogGroup::getTypeName(const data::ConfigFreeDialogGroup *const this)
{
  return "ConfigFreeDialogGroup";
};

// Line 267: range 0000000012154E7A-0000000012155016
int32_t __cdecl data::ConfigFreeDialogGroup::getHashNum(const data::ConfigFreeDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigFreeDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigFreeDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 283: range 00000000126F9F12-00000000126F9F53
void __cdecl data::ConfigFreeDialogGroupFactory::ConfigFreeDialogGroupFactory(
        data::ConfigFreeDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigFreeDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigFreeDialogGroupFactory = v2;
};

// Line 291: range 00000000126FA25C-00000000126FA2A9
void __cdecl data::ConfigNarratorDialogGroup::ConfigNarratorDialogGroup(data::ConfigNarratorDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNarratorDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 291: range 00000000126FA6AE-00000000126FA706
void __cdecl data::ConfigNarratorDialogGroup::ConfigNarratorDialogGroup(
        data::ConfigNarratorDialogGroup *const this,
        const data::ConfigNarratorDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNarratorDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 297: range 000000001274DA24-000000001274DA71
void __cdecl data::ConfigNarratorDialogGroup::~ConfigNarratorDialogGroup(data::ConfigNarratorDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNarratorDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 297: range 000000001274DA72-000000001274DA9C
void __cdecl data::ConfigNarratorDialogGroup::~ConfigNarratorDialogGroup(data::ConfigNarratorDialogGroup *const this)
{
  data::ConfigNarratorDialogGroup::~ConfigNarratorDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 302: range 0000000012155018-0000000012155028
const char *__cdecl data::ConfigNarratorDialogGroup::getTypeName(const data::ConfigNarratorDialogGroup *const this)
{
  return "ConfigNarratorDialogGroup";
};

// Line 303: range 000000001215502A-00000000121551C6
int32_t __cdecl data::ConfigNarratorDialogGroup::getHashNum(const data::ConfigNarratorDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigNarratorDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNarratorDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 319: range 00000000126FA9F0-00000000126FAA31
void __cdecl data::ConfigNarratorDialogGroupFactory::ConfigNarratorDialogGroupFactory(
        data::ConfigNarratorDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNarratorDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNarratorDialogGroupFactory = v2;
};

// Line 327: range 00000000126FAD3A-00000000126FAD87
void __cdecl data::ConfigBlossomDialogGroup::ConfigBlossomDialogGroup(data::ConfigBlossomDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBlossomDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 327: range 00000000126FB18C-00000000126FB1E4
void __cdecl data::ConfigBlossomDialogGroup::ConfigBlossomDialogGroup(
        data::ConfigBlossomDialogGroup *const this,
        const data::ConfigBlossomDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBlossomDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 333: range 000000001274D9F8-000000001274DA22
void __cdecl data::ConfigBlossomDialogGroup::~ConfigBlossomDialogGroup(data::ConfigBlossomDialogGroup *const this)
{
  data::ConfigBlossomDialogGroup::~ConfigBlossomDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 333: range 000000001274D9AA-000000001274D9F7
void __cdecl data::ConfigBlossomDialogGroup::~ConfigBlossomDialogGroup(data::ConfigBlossomDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBlossomDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 338: range 00000000121551C8-00000000121551D8
const char *__cdecl data::ConfigBlossomDialogGroup::getTypeName(const data::ConfigBlossomDialogGroup *const this)
{
  return "ConfigBlossomDialogGroup";
};

// Line 339: range 00000000121551DA-0000000012155376
int32_t __cdecl data::ConfigBlossomDialogGroup::getHashNum(const data::ConfigBlossomDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBlossomDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBlossomDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 355: range 00000000126FB4CE-00000000126FB50F
void __cdecl data::ConfigBlossomDialogGroupFactory::ConfigBlossomDialogGroupFactory(
        data::ConfigBlossomDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBlossomDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBlossomDialogGroupFactory = v2;
};

// Line 363: range 00000000126FB818-00000000126FB865
void __cdecl data::ConfigActivityDialogGroup::ConfigActivityDialogGroup(data::ConfigActivityDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigActivityDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 363: range 00000000126FBC6A-00000000126FBCC2
void __cdecl data::ConfigActivityDialogGroup::ConfigActivityDialogGroup(
        data::ConfigActivityDialogGroup *const this,
        const data::ConfigActivityDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigActivityDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 369: range 000000001274D930-000000001274D97D
void __cdecl data::ConfigActivityDialogGroup::~ConfigActivityDialogGroup(data::ConfigActivityDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigActivityDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 369: range 000000001274D97E-000000001274D9A8
void __cdecl data::ConfigActivityDialogGroup::~ConfigActivityDialogGroup(data::ConfigActivityDialogGroup *const this)
{
  data::ConfigActivityDialogGroup::~ConfigActivityDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 374: range 0000000012155378-0000000012155388
const char *__cdecl data::ConfigActivityDialogGroup::getTypeName(const data::ConfigActivityDialogGroup *const this)
{
  return "ConfigActivityDialogGroup";
};

// Line 375: range 000000001215538A-0000000012155526
int32_t __cdecl data::ConfigActivityDialogGroup::getHashNum(const data::ConfigActivityDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigActivityDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigActivityDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 391: range 00000000126FBFAC-00000000126FBFED
void __cdecl data::ConfigActivityDialogGroupFactory::ConfigActivityDialogGroupFactory(
        data::ConfigActivityDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigActivityDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigActivityDialogGroupFactory = v2;
};

// Line 399: range 00000000126FC2F6-00000000126FC343
void __cdecl data::ConfigCoopDialogGroup::ConfigCoopDialogGroup(data::ConfigCoopDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 399: range 00000000126FC748-00000000126FC7A0
void __cdecl data::ConfigCoopDialogGroup::ConfigCoopDialogGroup(
        data::ConfigCoopDialogGroup *const this,
        const data::ConfigCoopDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 405: range 000000001274D8B6-000000001274D903
void __cdecl data::ConfigCoopDialogGroup::~ConfigCoopDialogGroup(data::ConfigCoopDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 405: range 000000001274D904-000000001274D92E
void __cdecl data::ConfigCoopDialogGroup::~ConfigCoopDialogGroup(data::ConfigCoopDialogGroup *const this)
{
  data::ConfigCoopDialogGroup::~ConfigCoopDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 410: range 0000000012155528-0000000012155538
const char *__cdecl data::ConfigCoopDialogGroup::getTypeName(const data::ConfigCoopDialogGroup *const this)
{
  return "ConfigCoopDialogGroup";
};

// Line 411: range 000000001215553A-00000000121556D6
int32_t __cdecl data::ConfigCoopDialogGroup::getHashNum(const data::ConfigCoopDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCoopDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCoopDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 427: range 00000000126FCA8A-00000000126FCACB
void __cdecl data::ConfigCoopDialogGroupFactory::ConfigCoopDialogGroupFactory(
        data::ConfigCoopDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCoopDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCoopDialogGroupFactory = v2;
};

// Line 435: range 00000000126FCDD4-00000000126FCE21
void __cdecl data::ConfigGadgetDialogGroup::ConfigGadgetDialogGroup(data::ConfigGadgetDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 435: range 00000000126FD226-00000000126FD27E
void __cdecl data::ConfigGadgetDialogGroup::ConfigGadgetDialogGroup(
        data::ConfigGadgetDialogGroup *const this,
        const data::ConfigGadgetDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 441: range 000000001274D83C-000000001274D889
void __cdecl data::ConfigGadgetDialogGroup::~ConfigGadgetDialogGroup(data::ConfigGadgetDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 441: range 000000001274D88A-000000001274D8B4
void __cdecl data::ConfigGadgetDialogGroup::~ConfigGadgetDialogGroup(data::ConfigGadgetDialogGroup *const this)
{
  data::ConfigGadgetDialogGroup::~ConfigGadgetDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 446: range 00000000121556D8-00000000121556E8
const char *__cdecl data::ConfigGadgetDialogGroup::getTypeName(const data::ConfigGadgetDialogGroup *const this)
{
  return "ConfigGadgetDialogGroup";
};

// Line 447: range 00000000121556EA-0000000012155886
int32_t __cdecl data::ConfigGadgetDialogGroup::getHashNum(const data::ConfigGadgetDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 463: range 00000000126FD568-00000000126FD5A9
void __cdecl data::ConfigGadgetDialogGroupFactory::ConfigGadgetDialogGroupFactory(
        data::ConfigGadgetDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetDialogGroupFactory = v2;
};

// Line 471: range 00000000126FD8B2-00000000126FD8FF
void __cdecl data::ConfigNpcOtherDialogGroup::ConfigNpcOtherDialogGroup(data::ConfigNpcOtherDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcOtherDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 471: range 00000000126FDD04-00000000126FDD5C
void __cdecl data::ConfigNpcOtherDialogGroup::ConfigNpcOtherDialogGroup(
        data::ConfigNpcOtherDialogGroup *const this,
        const data::ConfigNpcOtherDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcOtherDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 477: range 000000001274D7C2-000000001274D80F
void __cdecl data::ConfigNpcOtherDialogGroup::~ConfigNpcOtherDialogGroup(data::ConfigNpcOtherDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcOtherDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 477: range 000000001274D810-000000001274D83A
void __cdecl data::ConfigNpcOtherDialogGroup::~ConfigNpcOtherDialogGroup(data::ConfigNpcOtherDialogGroup *const this)
{
  data::ConfigNpcOtherDialogGroup::~ConfigNpcOtherDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 482: range 0000000012155888-0000000012155898
const char *__cdecl data::ConfigNpcOtherDialogGroup::getTypeName(const data::ConfigNpcOtherDialogGroup *const this)
{
  return "ConfigNpcOtherDialogGroup";
};

// Line 483: range 000000001215589A-0000000012155A36
int32_t __cdecl data::ConfigNpcOtherDialogGroup::getHashNum(const data::ConfigNpcOtherDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigNpcOtherDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNpcOtherDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 499: range 00000000126FE046-00000000126FE087
void __cdecl data::ConfigNpcOtherDialogGroupFactory::ConfigNpcOtherDialogGroupFactory(
        data::ConfigNpcOtherDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcOtherDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcOtherDialogGroupFactory = v2;
};

// Line 507: range 00000000126FE390-00000000126FE3DD
void __cdecl data::ConfigCutsceneDialogGroup::ConfigCutsceneDialogGroup(data::ConfigCutsceneDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 507: range 00000000126FE7E2-00000000126FE83A
void __cdecl data::ConfigCutsceneDialogGroup::ConfigCutsceneDialogGroup(
        data::ConfigCutsceneDialogGroup *const this,
        const data::ConfigCutsceneDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 513: range 000000001274D748-000000001274D795
void __cdecl data::ConfigCutsceneDialogGroup::~ConfigCutsceneDialogGroup(data::ConfigCutsceneDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 513: range 000000001274D796-000000001274D7C0
void __cdecl data::ConfigCutsceneDialogGroup::~ConfigCutsceneDialogGroup(data::ConfigCutsceneDialogGroup *const this)
{
  data::ConfigCutsceneDialogGroup::~ConfigCutsceneDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 518: range 0000000012155A38-0000000012155A48
const char *__cdecl data::ConfigCutsceneDialogGroup::getTypeName(const data::ConfigCutsceneDialogGroup *const this)
{
  return "ConfigCutsceneDialogGroup";
};

// Line 519: range 0000000012155A4A-0000000012155BE6
int32_t __cdecl data::ConfigCutsceneDialogGroup::getHashNum(const data::ConfigCutsceneDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigCutsceneDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCutsceneDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 535: range 00000000126FEB24-00000000126FEB65
void __cdecl data::ConfigCutsceneDialogGroupFactory::ConfigCutsceneDialogGroupFactory(
        data::ConfigCutsceneDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCutsceneDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigCutsceneDialogGroupFactory = v2;
};

// Line 543: range 00000000126FEE6E-00000000126FEEBB
void __cdecl data::ConfigUIDialogGroup::ConfigUIDialogGroup(data::ConfigUIDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigUIDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 543: range 00000000126FF2C0-00000000126FF318
void __cdecl data::ConfigUIDialogGroup::ConfigUIDialogGroup(
        data::ConfigUIDialogGroup *const this,
        const data::ConfigUIDialogGroup *a2)
{
  int (**v2)(...); // rdx

  data::ConfigDialogGroup::ConfigDialogGroup(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigUIDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigDialogGroup = v2;
};

// Line 549: range 000000001274D6CE-000000001274D71B
void __cdecl data::ConfigUIDialogGroup::~ConfigUIDialogGroup(data::ConfigUIDialogGroup *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigUIDialogGroup + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigDialogGroup = v2;
  data::ConfigDialogGroup::~ConfigDialogGroup(this);
};

// Line 549: range 000000001274D71C-000000001274D746
void __cdecl data::ConfigUIDialogGroup::~ConfigUIDialogGroup(data::ConfigUIDialogGroup *const this)
{
  data::ConfigUIDialogGroup::~ConfigUIDialogGroup(this);
  operator delete(this, 0x40uLL);
};

// Line 554: range 0000000012155BE8-0000000012155BF8
const char *__cdecl data::ConfigUIDialogGroup::getTypeName(const data::ConfigUIDialogGroup *const this)
{
  return "ConfigUIDialogGroup";
};

// Line 555: range 0000000012155BFA-0000000012155D96
int32_t __cdecl data::ConfigUIDialogGroup::getHashNum(const data::ConfigUIDialogGroup *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigUIDialogGroup::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigUIDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 571: range 00000000126FF602-00000000126FF643
void __cdecl data::ConfigUIDialogGroupFactory::ConfigUIDialogGroupFactory(data::ConfigUIDialogGroupFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigUIDialogGroupFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigUIDialogGroupFactory = v2;
};
