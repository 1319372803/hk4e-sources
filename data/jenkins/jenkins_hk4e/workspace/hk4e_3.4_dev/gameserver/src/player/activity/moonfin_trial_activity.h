// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/moonfin_trial_activity.h

// Line 20: range 0000000014620E72-0000000014620E8C
void __cdecl MoonfinTrialLevelRecordData::MoonfinTrialLevelRecordData(MoonfinTrialLevelRecordData *const this)
{
  std::vector<unsigned int>::vector(&this->best_record_vec);
};

// Line 20: range 00000000147BCFFA-00000000147BD01F
void __cdecl MoonfinTrialLevelRecordData::MoonfinTrialLevelRecordData(
        MoonfinTrialLevelRecordData *const this,
        const MoonfinTrialLevelRecordData *a2)
{
  std::vector<unsigned int>::vector(&this->best_record_vec, &a2->best_record_vec);
};

// Line 20: range 0000000014620E8E-0000000014620EA8
void __cdecl MoonfinTrialLevelRecordData::~MoonfinTrialLevelRecordData(MoonfinTrialLevelRecordData *const this)
{
  std::vector<unsigned int>::~vector(&this->best_record_vec);
};

// Line 25: range 0000000014838418-000000001483849B
void __cdecl MoonfinTrialActivity::~MoonfinTrialActivity(MoonfinTrialActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'MoonfinTrialActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->fishing_succ_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->gallery_settle_wtr_);
  std::map<unsigned int,MoonfinTrialLevelRecordData>::~map(&this->level_record_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 25: range 000000001483849C-00000000148384C6
void __cdecl MoonfinTrialActivity::~MoonfinTrialActivity(MoonfinTrialActivity *const this)
{
  MoonfinTrialActivity::~MoonfinTrialActivity(this);
  operator delete(this, 0x3F8uLL);
};

// Line 28: range 0000000017024D66-0000000017024EED
void __fastcall ZN20MoonfinTrialActivityCI212BaseActivityER6Playerj(
        MoonfinTrialActivity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN20MoonfinTrialActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'MoonfinTrialActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_fish_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_fish_count_);
  }
  this->special_fish_count_ = 0;
  std::map<unsigned int,MoonfinTrialLevelRecordData>::map(&this->level_record_map_);
  std::weak_ptr<Observer>::weak_ptr(&this->gallery_settle_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->fishing_succ_wtr_);
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

// Line 29: range 00000000131E6153-00000000131E615D
data::NewActivityType __cdecl MoonfinTrialActivity::getActivityStaticType()
{
  return 2103;
};
