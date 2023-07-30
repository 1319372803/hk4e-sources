// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/light_stone_regional_play.h

// Line 20: range 0000000015F45DF4-0000000015F45E51
void __cdecl LightStoneRegionalPlay::~LightStoneRegionalPlay(LightStoneRegionalPlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LightStoneRegionalPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseRegionalPlay = v2;
  std::weak_ptr<Observer>::~weak_ptr(&this->offering_levelup_wtr_);
  BaseRegionalPlay::~BaseRegionalPlay(this);
};

// Line 20: range 0000000015F45E52-0000000015F45E7C
void __cdecl LightStoneRegionalPlay::~LightStoneRegionalPlay(LightStoneRegionalPlay *const this)
{
  LightStoneRegionalPlay::~LightStoneRegionalPlay(this);
  operator delete(this, 0x98uLL);
};

// Line 24: range 0000000015F28F68-0000000015F290C3
void __fastcall ZN22LightStoneRegionalPlayCI216BaseRegionalPlayER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj(
        LightStoneRegionalPlay *const this,
        Player *a2,
        const std::string *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN22LightStoneRegionalPlayCI216BaseRegionalPlayER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  BaseRegionalPlay::BaseRegionalPlay(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'LightStoneRegionalPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseRegionalPlay = v7;
  std::weak_ptr<Observer>::weak_ptr(&this->offering_levelup_wtr_);
  if ( *(char *)(((unsigned __int64)&this->has_light_stone_energy_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_light_stone_energy_, a2, &this->has_light_stone_energy_);
  this->has_light_stone_energy_ = 0;
  if ( v10 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
