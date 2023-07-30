// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/bounce_conjuring_activity.h

// Line 21: range 0000000017B42A9C-0000000017B42B31
void __cdecl BounceConjuringChapterData::BounceConjuringChapterData(BounceConjuringChapterData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = 0;
};

// Line 31: range 0000000017B8E0F4-0000000017B8E177
void __cdecl BounceConjuringActivity::~BounceConjuringActivity(BounceConjuringActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BounceConjuringActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->gallery_settle_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->gallery_start_obs_wtr_);
  std::map<unsigned int,BounceConjuringChapterData>::~map(&this->chapter_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 31: range 0000000017B8E178-0000000017B8E1A2
void __cdecl BounceConjuringActivity::~BounceConjuringActivity(BounceConjuringActivity *const this)
{
  BounceConjuringActivity::~BounceConjuringActivity(this);
  operator delete(this, 0x400uLL);
};

// Line 34: range 0000000017021ECE-0000000017022095
void __fastcall ZN23BounceConjuringActivityCI212BaseActivityER6Playerj(
        BounceConjuringActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN23BounceConjuringActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BounceConjuringActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,BounceConjuringChapterData>::map(&this->chapter_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coin_);
  }
  this->coin_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->gallery_start_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->gallery_settle_obs_wtr_);
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

// Line 48: range 0000000017A04848-0000000017A04895
bool __cdecl BounceConjuringActivity::isContentClosed(const BounceConjuringActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 66: range 0000000017D84DDC-0000000017D84E30
uint32_t __cdecl BounceConjuringActivity::getCoin(const BounceConjuringActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->coin_;
};

// Line 18511: range 0000000016394370-000000001639437A
data::NewActivityType __cdecl BounceConjuringActivity::getActivityStaticType()
{
  return 1603;
};
