// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/tanuki_travel_activity.h

// Line 19: range 00000000180AFCD2-00000000180AFDA1
void __cdecl TanukiTravelLevelData::TanukiTravelLevelData(TanukiTravelLevelData *const this)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7)
                                                                                              + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->route_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_open, v2, v3);
  this->is_open = 0;
  v4 = ((_BYTE)this + 5) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_finish, v4, v5);
  this->is_finish = 0;
};

// Line 30: range 0000000018327480-0000000018327503
void __cdecl TanukiTravelActivity::~TanukiTravelActivity(TanukiTravelActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'TanukiTravelActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::weak_ptr<Observer>::~weak_ptr(&this->quest_state_change_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->finish_quest_obs_wtr_);
  std::map<unsigned int,TanukiTravelLevelData>::~map(&this->level_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 30: range 0000000018327504-000000001832752E
void __cdecl TanukiTravelActivity::~TanukiTravelActivity(TanukiTravelActivity *const this)
{
  TanukiTravelActivity::~TanukiTravelActivity(this);
  operator delete(this, 0x400uLL);
};

// Line 33: range 00000000170272E8-00000000170274AC
void __fastcall ZN20TanukiTravelActivityCI212BaseActivityER6Playerj(
        TanukiTravelActivity *const this,
        Player *a2,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN20TanukiTravelActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'TanukiTravelActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,TanukiTravelLevelData>::map(&this->level_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finished_level_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finished_level_index_, a2, &this->finished_level_index_);
  }
  this->finished_level_index_ = 0;
  v7 = ((_BYTE)this - 36) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_content_closed_, v7, v8);
  this->is_content_closed_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->finish_quest_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->quest_state_change_obs_wtr_);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
