// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/team_chain_activity.h

// Line 42: range 00000000180B055C-00000000180B0586
void __cdecl TeamChainRoomTeamInfo::TeamChainRoomTeamInfo(TeamChainRoomTeamInfo *const this)
{
  std::vector<TeamChainRoomAvatarInfo>::vector(&this->avatar_info_vec);
  std::vector<unsigned int>::vector(&this->skill_no_vec);
};

// Line 42: range 00000000181556B8-00000000181556F8
void __cdecl TeamChainRoomTeamInfo::TeamChainRoomTeamInfo(TeamChainRoomTeamInfo *const this, TeamChainRoomTeamInfo *a2)
{
  std::vector<TeamChainRoomAvatarInfo>::vector(&this->avatar_info_vec, &a2->avatar_info_vec);
  std::vector<unsigned int>::vector(&this->skill_no_vec, &a2->skill_no_vec);
};

// Line 42: range 00000000181C966C-00000000181C96CF
void __cdecl TeamChainRoomTeamInfo::TeamChainRoomTeamInfo(
        TeamChainRoomTeamInfo *const this,
        const TeamChainRoomTeamInfo *a2)
{
  std::vector<TeamChainRoomAvatarInfo>::vector(&this->avatar_info_vec, &a2->avatar_info_vec);
  std::vector<unsigned int>::vector(&this->skill_no_vec, &a2->skill_no_vec);
};

// Line 42: range 00000000180B0588-00000000180B05B2
void __cdecl TeamChainRoomTeamInfo::~TeamChainRoomTeamInfo(TeamChainRoomTeamInfo *const this)
{
  std::vector<unsigned int>::~vector(&this->skill_no_vec);
  std::vector<TeamChainRoomAvatarInfo>::~vector(&this->avatar_info_vec);
};

// Line 49: range 00000000180B00E6-00000000180B01D1
void __cdecl TeamChainDungeonContext::TeamChainDungeonContext(TeamChainDungeonContext *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->stage_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->schedule_id, v2, v3);
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty, v2, &this->difficulty);
  }
  this->difficulty = 0;
  std::vector<TeamChainRoomTeamInfo>::vector(&this->room_team_info_vec);
  std::vector<unsigned int>::vector(&this->room_score_vec);
};

// Line 49: range 00000000181C926C-00000000181C9419
void __cdecl TeamChainDungeonContext::TeamChainDungeonContext(
        TeamChainDungeonContext *const this,
        TeamChainDungeonContext *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t schedule_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t difficulty; // ecx
  char v9; // al
  TeamChainDungeonContext *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
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
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->schedule_id);
  }
  schedule_id = v10->schedule_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->schedule_id, v4, v7);
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->difficulty);
  }
  difficulty = v10->difficulty;
  v9 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->difficulty, v4, &this->difficulty);
  }
  this->difficulty = difficulty;
  std::vector<TeamChainRoomTeamInfo>::vector(&this->room_team_info_vec, &v10->room_team_info_vec);
  std::vector<unsigned int>::vector(&this->room_score_vec, &v10->room_score_vec);
};

// Line 49: range 00000000180B02F6-00000000180B04CA
void __cdecl TeamChainDungeonContext::TeamChainDungeonContext(
        TeamChainDungeonContext *const this,
        const TeamChainDungeonContext *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t schedule_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t difficulty; // ecx
  char v9; // al
  const TeamChainDungeonContext *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
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
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->schedule_id);
  }
  schedule_id = v10->schedule_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->schedule_id, v4, v7);
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->difficulty >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->difficulty);
  }
  difficulty = v10->difficulty;
  v9 = *(_BYTE *)(((unsigned __int64)&this->difficulty >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v4) = v9 != 0;
    __asan_report_store4(&this->difficulty, v4, &this->difficulty);
  }
  this->difficulty = difficulty;
  std::vector<TeamChainRoomTeamInfo>::vector(&this->room_team_info_vec, &v10->room_team_info_vec);
  std::vector<unsigned int>::vector(&this->room_score_vec, &v10->room_score_vec);
};

// Line 49: range 00000000180B01D2-00000000180B0200
void __cdecl TeamChainDungeonContext::~TeamChainDungeonContext(TeamChainDungeonContext *const this)
{
  std::vector<unsigned int>::~vector(&this->room_score_vec);
  std::vector<TeamChainRoomTeamInfo>::~vector(&this->room_team_info_vec);
};

// Line 58: range 00000000183273B4-0000000018327437
void __cdecl TeamChainActivity::~TeamChainActivity(TeamChainActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TeamChainActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::vector<unsigned long>::~vector(&this->in_dungeon_avatar_guid_vec_);
  std::map<unsigned int,TeamChainStageData>::~map(&this->stage_data_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 58: range 0000000018327438-0000000018327462
void __cdecl TeamChainActivity::~TeamChainActivity(TeamChainActivity *const this)
{
  TeamChainActivity::~TeamChainActivity(this);
  operator delete(this, 0x428uLL);
};

// Line 61: range 000000001702F6EC-000000001702F868
void __fastcall ZN17TeamChainActivityCI212BaseActivityER6Playerj(TeamChainActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN17TeamChainActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'TeamChainActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::map<unsigned int,TeamChainStageData>::map(&this->stage_data_map_);
  std::vector<unsigned long>::vector(&this->in_dungeon_avatar_guid_vec_);
  if ( *(char *)(((unsigned __int64)&this->is_token_costume_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_token_costume_reward_, a2, &this->is_token_costume_reward_);
  this->is_token_costume_reward_ = 0;
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

// Line 63: range 000000001384AA75-000000001384AA7F
data::NewActivityType __cdecl TeamChainActivity::getActivityStaticType()
{
  return 3403;
};

// Line 74: range 00000000180AFF26-00000000180AFF37
int32_t __cdecl TeamChainActivity::getAddCoinExceedRetcode(
        const TeamChainActivity *const this,
        proto::VirtualItem coin_type)
{
  return 10467;
};

// Line 75: range 00000000180AFF38-00000000180AFF49
int32_t __cdecl TeamChainActivity::getSubCoinNotEnoughRetcode(
        const TeamChainActivity *const this,
        proto::VirtualItem coin_type)
{
  return 10466;
};
