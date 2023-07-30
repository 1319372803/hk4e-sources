// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/arena_challenge_activity.h

// Line 20: range 0000000017B8E642-0000000017B8E6A1
void __cdecl ArenaChallengeActivity::~ArenaChallengeActivity(ArenaChallengeActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'ArenaChallengeActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<ArenaChallengeGallery>::~weak_ptr(&this->current_gallery_wtr_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 20: range 0000000017B8E6A2-0000000017B8E6CC
void __cdecl ArenaChallengeActivity::~ArenaChallengeActivity(ArenaChallengeActivity *const this)
{
  ArenaChallengeActivity::~ArenaChallengeActivity(this);
  operator delete(this, 0x3B8uLL);
};

// Line 23: range 000000001701ECA8-000000001701EE05
void __fastcall ZN22ArenaChallengeActivityCI212BaseActivityER6Playerj(
        ArenaChallengeActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN22ArenaChallengeActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'ArenaChallengeActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish_any_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish_any_level_);
  }
  this->is_finish_any_level_ = 0;
  std::weak_ptr<ArenaChallengeGallery>::weak_ptr(&this->current_gallery_wtr_);
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

// Line 49: range 000000001384A444-000000001384A44E
data::NewActivityType __cdecl ArenaChallengeActivity::getActivityStaticType()
{
  return 1402;
};

// Line 57: range 0000000017D710FA-0000000017D7111B
void __cdecl ArenaChallengeActivity::setRecordedWorldLevelByGm(
        ArenaChallengeActivity *const this,
        uint32_t world_level)
{
  BaseActivity::setStartWorldLevelLimit((BaseActivity *const)this, world_level);
};
