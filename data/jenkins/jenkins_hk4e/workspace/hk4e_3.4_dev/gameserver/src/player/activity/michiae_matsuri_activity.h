// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/michiae_matsuri_activity.h

// Line 20: range 00000000148385A6-0000000014838683
void __cdecl MichiaeMatsuriActivity::~MichiaeMatsuriActivity(MichiaeMatsuriActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MichiaeMatsuriActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->offering_levelup_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->chest_open_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->obtain_item_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->challenge_finish_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->post_enter_scene_wtr_);
  std::unordered_set<unsigned int>::~unordered_set(&this->finished_challenge_group_id_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->unlocked_skill_id_set_);
  std::map<unsigned int,bool>::~map(&this->stage_open_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 20: range 0000000014838684-00000000148386AE
void __cdecl MichiaeMatsuriActivity::~MichiaeMatsuriActivity(MichiaeMatsuriActivity *const this)
{
  MichiaeMatsuriActivity::~MichiaeMatsuriActivity(this);
  operator delete(this, 0x4A0uLL);
};

// Line 23: range 0000000017027B18-0000000017027D3C
void __fastcall ZN22MichiaeMatsuriActivityCI212BaseActivityER6Playerj(
        MichiaeMatsuriActivity *const this,
        Player *a2,
        int a3)
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
  *(_QWORD *)(v3 + 16) = ZN22MichiaeMatsuriActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MichiaeMatsuriActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->statue_refresh_group_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->statue_refresh_group_time_);
  }
  this->statue_refresh_group_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gain_crystal_exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gain_crystal_exp_);
  }
  this->gain_crystal_exp_ = 0;
  std::map<unsigned int,bool>::map(&this->stage_open_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->unlocked_skill_id_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->finished_challenge_group_id_set_);
  std::weak_ptr<Observer>::weak_ptr(&this->post_enter_scene_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->challenge_finish_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->obtain_item_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->chest_open_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->offering_levelup_wtr_);
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

// Line 24: range 000000001384A650-000000001384A65A
data::NewActivityType __cdecl MichiaeMatsuriActivity::getActivityStaticType()
{
  return 2501;
};
