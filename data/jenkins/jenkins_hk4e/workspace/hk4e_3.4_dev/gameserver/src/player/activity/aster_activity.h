// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/aster_activity.h

// Line 23: range 000000001701A9D0-000000001701AAA5
void __cdecl AsterLittleInfo::AsterLittleInfo(AsterLittleInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_id);
  }
  this->stage_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_state);
  }
  this->stage_state = ASTER_LITTLE_STAGE_NONE;
};

// Line 34: range 000000001701AAC2-000000001701AB6F
void __cdecl AsterMidCampBattleInfo::AsterMidCampBattleInfo(AsterMidCampBattleInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->camp_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = 0;
  std::string::basic_string(&this->transaction_no);
  std::weak_ptr<SealEnergyChargeBattle>::weak_ptr(&this->battle_wtr);
};

// Line 34: range 0000000017B8E4CE-0000000017B8E4FC
void __cdecl AsterMidCampBattleInfo::~AsterMidCampBattleInfo(AsterMidCampBattleInfo *const this)
{
  std::weak_ptr<SealEnergyChargeBattle>::~weak_ptr(&this->battle_wtr);
  std::string::~string(&this->transaction_no);
};

// Line 43: range 000000001701AB70-000000001701AC96
void __cdecl AsterMidInfo::AsterMidInfo(AsterMidInfo *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->refresh_id);
  }
  this->refresh_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_time);
  }
  this->refresh_time = 0;
  std::set<unsigned int>::set(&this->finished_camp_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->collect_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->collect_count);
  }
  this->collect_count = 0;
  AsterMidCampBattleInfo::AsterMidCampBattleInfo(&this->battle_info);
};

// Line 43: range 0000000017B8E4FE-0000000017B8E52C
void __cdecl AsterMidInfo::~AsterMidInfo(AsterMidInfo *const this)
{
  AsterMidCampBattleInfo::~AsterMidCampBattleInfo(&this->battle_info);
  std::set<unsigned int>::~set(&this->finished_camp_set);
};

// Line 58: range 000000001701AC98-000000001701ACE1
void __cdecl AsterLargeInfo::AsterLargeInfo(AsterLargeInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(this);
  }
  this->is_open = 0;
};

// Line 67: range 0000000017B8E52E-0000000017B8E5F9
void __cdecl AsterActivity::~AsterActivity(AsterActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'AsterActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->general_reward_destroy_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->general_reward_taken_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->seal_battle_end_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->seal_battle_begin_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->npc_talk_obs_wtr_);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr(&this->aster_little_timer_ptr_);
  AsterMidInfo::~AsterMidInfo(&this->aster_mid_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 67: range 0000000017B8E5FA-0000000017B8E624
void __cdecl AsterActivity::~AsterActivity(AsterActivity *const this)
{
  AsterActivity::~AsterActivity(this);
  operator delete(this, 0x4A0uLL);
};

// Line 70: range 000000001701ACE2-000000001701AFA2
void __fastcall ZN13AsterActivityCI212BaseActivityER6Playerj(AsterActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN13AsterActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'AsterActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  AsterLittleInfo::AsterLittleInfo(&this->aster_little_);
  AsterMidInfo::AsterMidInfo(&this->aster_mid_);
  AsterLargeInfo::AsterLargeInfo(&this->aster_large_);
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->aster_credit_);
  }
  this->aster_credit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->aster_token_);
  }
  this->aster_token_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_special_reward_taken_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_special_reward_taken_);
  }
  this->is_special_reward_taken_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = 0;
  std::shared_ptr<PlayerUnixTimer>::shared_ptr(&this->aster_little_timer_ptr_);
  std::weak_ptr<Observer>::weak_ptr(&this->npc_talk_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->seal_battle_begin_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->seal_battle_end_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->general_reward_taken_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->general_reward_destroy_obs_wtr_);
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

// Line 72: range 0000000015D368DF-0000000015D368E9
data::NewActivityType __cdecl AsterActivity::getActivityStaticType()
{
  return 1100;
};

// Line 84: range 0000000017A03C14-0000000017A03C66
bool __cdecl AsterActivity::isContentClosed(const AsterActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 61) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  return this->is_content_closed_;
};

// Line 136: range 0000000017D69378-0000000017D693CC
uint32_t __cdecl AsterActivity::getAsterCredit(const AsterActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->aster_credit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->aster_credit_;
};

// Line 143: range 0000000017D693CE-0000000017D6941A
uint32_t __cdecl AsterActivity::getAsterToken(const AsterActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->aster_token_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->aster_token_;
};
