// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/sumo_activity.h

// Line 39: range 000000001384A4FA-000000001384A504
data::NewActivityType __cdecl SumoActivity::getActivityStaticType()
{
  return 2102;
};

// Line 45: range 00000000180AF7C8-00000000180AF7F2
void __cdecl SumoTeam::SumoTeam(SumoTeam *const this)
{
  std::vector<SumoAvatar>::vector(&this->avatar_vec);
  std::vector<unsigned int>::vector(&this->selected_skill_id_vec);
};

// Line 45: range 00000000182D7754-00000000182D7794
void __cdecl SumoTeam::SumoTeam(SumoTeam *const this, SumoTeam *a2)
{
  std::vector<SumoAvatar>::vector(&this->avatar_vec, &a2->avatar_vec);
  std::vector<unsigned int>::vector(&this->selected_skill_id_vec, &a2->selected_skill_id_vec);
};

// Line 45: range 000000001814DE92-000000001814DEF5
void __cdecl SumoTeam::SumoTeam(SumoTeam *const this, const SumoTeam *a2)
{
  std::vector<SumoAvatar>::vector(&this->avatar_vec, &a2->avatar_vec);
  std::vector<unsigned int>::vector(&this->selected_skill_id_vec, &a2->selected_skill_id_vec);
};

// Line 45: range 00000000180AF7F4-00000000180AF81E
void __cdecl SumoTeam::~SumoTeam(SumoTeam *const this)
{
  std::vector<unsigned int>::~vector(&this->selected_skill_id_vec);
  std::vector<SumoAvatar>::~vector(&this->avatar_vec);
};

// Line 55: range 00000000180AF8E4-00000000180AFABF
void __cdecl SumoStage::SumoStage(SumoStage *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->stage_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->max_score, v2, v3);
  this->max_score = 0;
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open, v2, &this->is_open);
  this->is_open = 0;
  std::vector<SumoTeam>::vector(&this->sumo_team_vec);
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::map(&this->in_dungeon_avatar_team_index_map);
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::map(&this->formal_avatar_team_index_map);
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::map(&this->trial_avatar_team_index_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_team_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_team_index, v2, &this->cur_team_index);
  }
  this->cur_team_index = 0;
  v4 = (((_BYTE)this - 68) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->next_switch_team_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_switch_team_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->next_switch_team_time, v4, v5);
  this->next_switch_team_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->no_switch_punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->no_switch_punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->no_switch_punish_time, v4, &this->no_switch_punish_time);
  }
  this->no_switch_punish_time = 0;
};

// Line 55: range 000000001824B178-000000001824B53F
void __cdecl SumoStage::SumoStage(SumoStage *const this, const SumoStage *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t max_score; // ecx
  char v6; // dl
  __int64 v7; // rdx
  bool is_open; // cl
  char v9; // al
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *p_trial_avatar_team_index_map; // rsi
  uint32_t cur_team_index; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t next_switch_team_time; // ecx
  char v15; // dl
  __int64 v16; // rdx
  uint32_t no_switch_punish_time; // ecx
  char v18; // al
  const SumoStage *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_id = a2->stage_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2, this);
  }
  this->stage_id = stage_id;
  v4 = (((_BYTE)v19 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->max_score);
  }
  max_score = v19->max_score;
  v6 = *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->max_score, v4, v7);
  this->max_score = max_score;
  if ( *(char *)(((unsigned __int64)&v19->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_open);
  is_open = v19->is_open;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store1(&this->is_open, v4, &this->is_open);
  }
  this->is_open = is_open;
  std::vector<SumoTeam>::vector(&this->sumo_team_vec, &v19->sumo_team_vec);
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::map(
    &this->in_dungeon_avatar_team_index_map,
    &v19->in_dungeon_avatar_team_index_map);
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::map(
    &this->formal_avatar_team_index_map,
    &v19->formal_avatar_team_index_map);
  p_trial_avatar_team_index_map = &v19->trial_avatar_team_index_map;
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::map(
    &this->trial_avatar_team_index_map,
    &v19->trial_avatar_team_index_map);
  if ( *(_BYTE *)(((unsigned __int64)&v19->cur_team_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->cur_team_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->cur_team_index);
  }
  cur_team_index = v19->cur_team_index;
  v12 = *(_BYTE *)(((unsigned __int64)&this->cur_team_index >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_trial_avatar_team_index_map) = v12 != 0;
    __asan_report_store4(&this->cur_team_index, p_trial_avatar_team_index_map, &this->cur_team_index);
  }
  this->cur_team_index = cur_team_index;
  v13 = (((_BYTE)v19 - 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->next_switch_team_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->next_switch_team_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->next_switch_team_time);
  }
  next_switch_team_time = v19->next_switch_team_time;
  v15 = *(_BYTE *)(((unsigned __int64)&this->next_switch_team_time >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this - 68) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->next_switch_team_time, v13, v16);
  this->next_switch_team_time = next_switch_team_time;
  if ( *(_BYTE *)(((unsigned __int64)&v19->no_switch_punish_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->no_switch_punish_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->no_switch_punish_time);
  }
  no_switch_punish_time = v19->no_switch_punish_time;
  v18 = *(_BYTE *)(((unsigned __int64)&this->no_switch_punish_time >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v13) = v18 != 0;
    __asan_report_store4(&this->no_switch_punish_time, v13, &this->no_switch_punish_time);
  }
  this->no_switch_punish_time = no_switch_punish_time;
};

// Line 55: range 00000000180AFAC0-00000000180AFB10
void __cdecl SumoStage::~SumoStage(SumoStage *const this)
{
  std::map<unsigned int,std::pair<unsigned int,unsigned int>>::~map(&this->trial_avatar_team_index_map);
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::~map(&this->formal_avatar_team_index_map);
  std::map<unsigned long,std::pair<unsigned int,unsigned int>>::~map(&this->in_dungeon_avatar_team_index_map);
  std::vector<SumoTeam>::~vector(&this->sumo_team_vec);
};

// Line 85: range 000000001832754C-00000000183275BD
void __cdecl SumoActivity::~SumoActivity(SumoActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SumoActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  std::map<unsigned int,SumoStage>::~map(&this->sumo_stage_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 85: range 00000000183275BE-00000000183275E8
void __cdecl SumoActivity::~SumoActivity(SumoActivity *const this)
{
  SumoActivity::~SumoActivity(this);
  operator delete(this, 0x418uLL);
};

// Line 92: range 0000000017023AFE-0000000017023CAE
void __fastcall ZN12SumoActivityCI212BaseActivityER6Playerj(SumoActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN12SumoActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'SumoActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,SumoStage>::map(&this->sumo_stage_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->saved_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->saved_difficulty_id_, a2, &this->saved_difficulty_id_);
  }
  this->saved_difficulty_id_ = 0;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_stage_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_stage_id_, a2, &this->last_stage_id_);
  }
  this->last_stage_id_ = 0;
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
