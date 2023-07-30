// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/monster_banner_effigy_water_activity.h

// Line 18: range 000000001709544E-000000001709549B
void __cdecl MonsterBannerEffigyWaterActivity::~MonsterBannerEffigyWaterActivity(
        MonsterBannerEffigyWaterActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MonsterBannerEffigyWaterActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  BaseActivity::~BaseActivity(this);
};

// Line 18: range 000000001709549C-00000000170954C6
void __cdecl MonsterBannerEffigyWaterActivity::~MonsterBannerEffigyWaterActivity(
        MonsterBannerEffigyWaterActivity *const this)
{
  MonsterBannerEffigyWaterActivity::~MonsterBannerEffigyWaterActivity(this);
  operator delete(this, 0x3A8uLL);
};

// Line 21: range 0000000017024314-000000001702441A
void __fastcall ZN32MonsterBannerEffigyWaterActivityCI212BaseActivityER6Playerj(
        MonsterBannerEffigyWaterActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN32MonsterBannerEffigyWaterActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MonsterBannerEffigyWaterActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
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
