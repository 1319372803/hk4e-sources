// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/effigy_activity.h

// Line 22: range 000000001666E268-000000001666E383
void __cdecl EffigyDailyRecordInfo::EffigyDailyRecordInfo(EffigyDailyRecordInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_id);
  }
  this->challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_max_score);
  }
  this->challenge_max_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_first_pass_reward_taken >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_first_pass_reward_taken);
  }
  this->is_first_pass_reward_taken = 0;
};

// Line 34: range 0000000016832F24-0000000016832FB9
void __cdecl EffigyActivity::~EffigyActivity(EffigyActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffigyActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->enter_scene_obs_wtr_);
  std::set<unsigned int>::~set(&this->taken_reward_index_set_);
  std::map<unsigned int,EffigyDailyRecordInfo>::~map(&this->daily_record_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 34: range 0000000016832FBA-0000000016832FE4
void __cdecl EffigyActivity::~EffigyActivity(EffigyActivity *const this)
{
  EffigyActivity::~EffigyActivity(this);
  operator delete(this, 0x430uLL);
};

// Line 38: range 000000001666E85E-000000001666E8FB
void __cdecl EffigyActivity::EffigyDungeonContext::EffigyDungeonContext(
        EffigyActivity::EffigyDungeonContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->select_challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->select_difficulty_id);
  }
  this->select_difficulty_id = 0;
  std::vector<unsigned int>::vector(&this->select_condition_id_vec);
};

// Line 38: range 0000000014B2C386-0000000014B2C4A3
void __cdecl EffigyActivity::EffigyDungeonContext::EffigyDungeonContext(
        EffigyActivity::EffigyDungeonContext *const this,
        EffigyActivity::EffigyDungeonContext *a2)
{
  uint32_t select_challenge_id; // ecx
  uint32_t select_difficulty_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  select_challenge_id = a2->select_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->select_challenge_id = select_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->select_difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  select_difficulty_id = a2->select_difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->select_difficulty_id);
  }
  this->select_difficulty_id = select_difficulty_id;
  std::vector<unsigned int>::vector(&this->select_condition_id_vec, &a2->select_condition_id_vec);
};

// Line 38: range 0000000014A92030-0000000014A9214D
void __cdecl EffigyActivity::EffigyDungeonContext::EffigyDungeonContext(
        EffigyActivity::EffigyDungeonContext *const this,
        const EffigyActivity::EffigyDungeonContext *a2)
{
  uint32_t select_challenge_id; // ecx
  uint32_t select_difficulty_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  select_challenge_id = a2->select_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->select_challenge_id = select_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->select_difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  select_difficulty_id = a2->select_difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->select_difficulty_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->select_difficulty_id);
  }
  this->select_difficulty_id = select_difficulty_id;
  std::vector<unsigned int>::vector(&this->select_condition_id_vec, &a2->select_condition_id_vec);
};

// Line 48: range 000000001701C0AC-000000001701C23D
void __fastcall ZN14EffigyActivityCI212BaseActivityER6Playerj(EffigyActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN14EffigyActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'EffigyActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,EffigyDailyRecordInfo>::map(&this->daily_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_difficulty_id_);
  }
  this->last_difficulty_id_ = 0;
  std::set<unsigned int>::set(&this->taken_reward_index_set_);
  std::weak_ptr<Observer>::weak_ptr(&this->enter_scene_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_obs_wtr_);
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

// Line 50: range 000000001384A42E-000000001384A438
data::NewActivityType __cdecl EffigyActivity::getActivityStaticType()
{
  return 1202;
};

// Line 1174: range 0000000014A42E38-0000000014A42E56
void __cdecl EffigyActivity::EffigyDungeonContext::~EffigyDungeonContext(
        EffigyActivity::EffigyDungeonContext *const this)
{
  std::vector<unsigned int>::~vector(&this->select_condition_id_vec);
};
