// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/water_spirit_activity.h

// Line 21: range 000000001635B228-000000001635B275
void __cdecl WaterSpiritActivity::~WaterSpiritActivity(WaterSpiritActivity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'WaterSpiritActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 21: range 000000001635B276-000000001635B2A0
void __cdecl WaterSpiritActivity::~WaterSpiritActivity(WaterSpiritActivity *const this)
{
  WaterSpiritActivity::~WaterSpiritActivity(this);
  operator delete(this, 0x3B8uLL);
};

// Line 24: range 000000001701E7BE-000000001701E9DD
void __fastcall ZN19WaterSpiritActivityCI212BaseActivityER6Playerj(WaterSpiritActivity *const this, Player *a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int (**v6)(...); // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ZN19WaterSpiritActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'WaterSpiritActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DescribalBase = v6;
  v7 = (((_BYTE)this - 92) & 7u) + 3;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(&this->spirit_coin_, v7, v8);
  this->spirit_coin_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_search_play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->region_search_play_id_, v7, &this->region_search_play_id_);
  }
  this->region_search_play_id_ = 0;
  v9 = (((_BYTE)this - 84) & 7u) + 3;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_play_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->scene_play_id_, v9, v10);
  this->scene_play_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_phase_finish_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_phase_finish_, v9, &this->is_phase_finish_);
  this->is_phase_finish_ = 0;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 38: range 0000000017D84D86-0000000017D84DDA
uint32_t __cdecl WaterSpiritActivity::getSpiritCoin(const WaterSpiritActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spirit_coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->spirit_coin_);
  }
  return this->spirit_coin_;
};

// Line 1970: range 0000000017D84D7A-0000000017D84D84
data::NewActivityType __cdecl WaterSpiritActivity::getActivityStaticType()
{
  return 1403;
};
