// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/death_zone_regional_play.h

// Line 19: range 0000000015F45E7E-0000000015F45ECB
void __cdecl DeathZoneRegionalPlay::~DeathZoneRegionalPlay(DeathZoneRegionalPlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'DeathZoneRegionalPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BaseRegionalPlay = v2;
  BaseRegionalPlay::~BaseRegionalPlay(this);
};

// Line 19: range 0000000015F45ECC-0000000015F45EF6
void __cdecl DeathZoneRegionalPlay::~DeathZoneRegionalPlay(DeathZoneRegionalPlay *const this)
{
  DeathZoneRegionalPlay::~DeathZoneRegionalPlay(this);
  operator delete(this, 0x90uLL);
};

// Line 22: range 0000000015F29410-0000000015F295E9
void __fastcall ZN21DeathZoneRegionalPlayCI216BaseRegionalPlayER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj(
        DeathZoneRegionalPlay *const this,
        Player *a2,
        const std::string *a3,
        int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int (**v7)(...); // rdx
  __int64 v8; // rsi
  bool v9; // dl
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ZN21DeathZoneRegionalPlayCI216BaseRegionalPlayER6PlayerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = a4;
  BaseRegionalPlay::BaseRegionalPlay(this, a2, a3, *(_DWORD *)(v4 + 32));
  v7 = (int (**)(...))(&`vtable for'DeathZoneRegionalPlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BaseRegionalPlay = v7;
  if ( *(char *)(((unsigned __int64)&this->is_stop_add_extra_erosion >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_stop_add_extra_erosion, a2, &this->is_stop_add_extra_erosion);
  this->is_stop_add_extra_erosion = 0;
  v8 = (((_BYTE)this - 124) & 7u) + 3;
  v9 = *(_BYTE *)(((unsigned __int64)&this->log_death_zone_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->log_death_zone_id_ >> 3)
                                                         + 0x7FFF8000);
  if ( v9 )
    __asan_report_store4(&this->log_death_zone_id_, v8, v9);
  this->log_death_zone_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_extra_erosion_value_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_extra_erosion_value_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_extra_erosion_value_, v8, (_BYTE)this - 120);
  }
  this->best_extra_erosion_value_ = 0.0;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 38: range 00000000138493F6-0000000013849449
// local variable allocation has failed, the output may be wrong!
void __cdecl DeathZoneRegionalPlay::setStopAddExtraErosion(DeathZoneRegionalPlay *const this, bool is_stop)
{
  if ( *(char *)(((unsigned __int64)&this->is_stop_add_extra_erosion >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_stop_add_extra_erosion, is_stop, &this->is_stop_add_extra_erosion);
  this->is_stop_add_extra_erosion = is_stop;
};
