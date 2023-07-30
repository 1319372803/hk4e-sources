// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/find_hilichurl_activity.h

// Line 19: range 00000000154CC994-00000000154CC9F3
void __cdecl FindHilichurlActivity::~FindHilichurlActivity(FindHilichurlActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'FindHilichurlActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->set_game_time_wtr_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 19: range 00000000154CC9F4-00000000154CCA1E
void __cdecl FindHilichurlActivity::~FindHilichurlActivity(FindHilichurlActivity *const this)
{
  FindHilichurlActivity::~FindHilichurlActivity(this);
  operator delete(this, 0x3C0uLL);
};

// Line 22: range 00000000170208AC-0000000017020A4F
void __fastcall ZN21FindHilichurlActivityCI212BaseActivityER6Playerj(
        FindHilichurlActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN21FindHilichurlActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'FindHilichurlActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finished_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finished_day_index_);
  }
  this->finished_day_index_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->set_game_time_wtr_);
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

// Line 23: range 00000000149EE04B-00000000149EE055
data::NewActivityType __cdecl FindHilichurlActivity::getActivityStaticType()
{
  return 1505;
};

// Line 33: range 000000001518AD10-000000001518AD5D
bool __cdecl FindHilichurlActivity::isContentClosed(const FindHilichurlActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};
