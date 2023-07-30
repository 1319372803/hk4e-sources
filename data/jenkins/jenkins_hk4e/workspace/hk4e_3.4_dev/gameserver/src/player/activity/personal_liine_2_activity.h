// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/personal_liine_2_activity.h

// Line 18: range 00000000170954C8-0000000017095515
void __cdecl PersonalLiine2Activity::~PersonalLiine2Activity(PersonalLiine2Activity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'PersonalLiine2Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  BaseActivity::~BaseActivity(this);
};

// Line 18: range 0000000017095516-0000000017095540
void __cdecl PersonalLiine2Activity::~PersonalLiine2Activity(PersonalLiine2Activity *const this)
{
  PersonalLiine2Activity::~PersonalLiine2Activity(this);
  operator delete(this, 0x3A8uLL);
};

// Line 21: range 0000000017023F5E-0000000017024064
void __fastcall ZN22PersonalLiine2ActivityCI212BaseActivityER6Playerj(
        PersonalLiine2Activity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN22PersonalLiine2ActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'PersonalLiine2Activity + 2);
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
