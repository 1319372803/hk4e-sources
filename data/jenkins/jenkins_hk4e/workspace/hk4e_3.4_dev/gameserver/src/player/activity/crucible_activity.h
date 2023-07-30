// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/crucible_activity.h

// Line 19: range 0000000016833488-000000001683350B
void __cdecl CrucibleActivity::~CrucibleActivity(CrucibleActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CrucibleActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->social_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->settle_obs_wtr_);
  std::vector<proto::CrucibleBattleUidBin>::~vector(&this->battle_uid_data_vec_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 19: range 000000001683350C-0000000016833536
void __cdecl CrucibleActivity::~CrucibleActivity(CrucibleActivity *const this)
{
  CrucibleActivity::~CrucibleActivity(this);
  operator delete(this, 0x3E8uLL);
};

// Line 22: range 000000001701A2A2-000000001701A46C
void __fastcall ZN16CrucibleActivityCI212BaseActivityER6Playerj(CrucibleActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN16CrucibleActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'CrucibleActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_world_level_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->battle_world_level_);
  }
  this->battle_world_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_time_);
  }
  this->cost_time_ = 0;
  std::vector<proto::CrucibleBattleUidBin>::vector(&this->battle_uid_data_vec_);
  std::weak_ptr<Observer>::weak_ptr(&this->settle_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->social_obs_wtr_);
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
