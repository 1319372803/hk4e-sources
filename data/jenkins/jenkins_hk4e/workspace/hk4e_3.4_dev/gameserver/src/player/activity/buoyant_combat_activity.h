// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/buoyant_combat_activity.h

// Line 28: range 0000000017B8E03A-0000000017B8E0AB
void __cdecl BuoyantCombatActivity::~BuoyantCombatActivity(BuoyantCombatActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BuoyantCombatActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->buoyant_combat_gallery_settle_wtr_);
  std::vector<BuoyantCombatRecordData>::~vector(&this->daily_record_vec_);
  BaseActivity::~BaseActivity(this);
};

// Line 28: range 0000000017B8E0AC-0000000017B8E0D6
void __cdecl BuoyantCombatActivity::~BuoyantCombatActivity(BuoyantCombatActivity *const this)
{
  BuoyantCombatActivity::~BuoyantCombatActivity(this);
  operator delete(this, 0x3D0uLL);
};

// Line 31: range 0000000017022382-00000000170224AC
void __fastcall ZN21BuoyantCombatActivityCI212BaseActivityER6Playerj(
        BuoyantCombatActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN21BuoyantCombatActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BuoyantCombatActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::vector<BuoyantCombatRecordData>::vector(&this->daily_record_vec_);
  std::weak_ptr<Observer>::weak_ptr(&this->buoyant_combat_gallery_settle_wtr_);
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

// Line 60: range 000000001384A47B-000000001384A485
data::NewActivityType __cdecl BuoyantCombatActivity::getActivityStaticType()
{
  return 1601;
};
