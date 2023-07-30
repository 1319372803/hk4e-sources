// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/luminance_stone_challenge_activity.h

// Line 18: range 0000000014838784-00000000148387E3
void __cdecl LuminanceStoneChallengeActivity::~LuminanceStoneChallengeActivity(
        LuminanceStoneChallengeActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->gallery_settle_wtr_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 18: range 00000000148387E4-000000001483880E
void __cdecl LuminanceStoneChallengeActivity::~LuminanceStoneChallengeActivity(
        LuminanceStoneChallengeActivity *const this)
{
  LuminanceStoneChallengeActivity::~LuminanceStoneChallengeActivity(this);
  operator delete(this, 0x3C0uLL);
};

// Line 21: range 0000000017029F1C-000000001702A14F
void __fastcall ZN31LuminanceStoneChallengeActivityCI212BaseActivityER6Playerj(
        LuminanceStoneChallengeActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN31LuminanceStoneChallengeActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'LuminanceStoneChallengeActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_stage_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->current_stage_id_);
  }
  this->current_stage_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_final_gallery_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_final_gallery_complete_);
  this->is_final_gallery_complete_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score_);
  }
  this->best_score_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->gallery_settle_wtr_);
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

// Line 22: range 00000000149EE6CF-00000000149EE6D9
data::NewActivityType __cdecl LuminanceStoneChallengeActivity::getActivityStaticType()
{
  return 2702;
};

// Line 32: range 000000001461FFCC-000000001462001E
bool __cdecl LuminanceStoneChallengeActivity::isContentClosed(const LuminanceStoneChallengeActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  return this->is_content_closed_;
};
