// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/effigy_challenge_v2_activity.h

// Line 34: range 0000000016832E6A-0000000016832EDB
void __cdecl EffigyChallengeV2Activity::~EffigyChallengeV2Activity(EffigyChallengeV2Activity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EffigyChallengeV2Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,EffigyChallengeV2LevelData>::~map(&this->level_data_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 34: range 0000000016832EDC-0000000016832F06
void __cdecl EffigyChallengeV2Activity::~EffigyChallengeV2Activity(EffigyChallengeV2Activity *const this)
{
  EffigyChallengeV2Activity::~EffigyChallengeV2Activity(this);
  operator delete(this, 0x408uLL);
};

// Line 38: range 000000001666EAA8-000000001666EB83
void __cdecl EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext::EffigyChallengeV2DungeonContext(
        EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->challenge_mode_difficulty = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_skill_no >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_mode_skill_no);
  }
  this->challenge_mode_skill_no = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_mode_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_mode_cost_time);
  }
  this->challenge_mode_cost_time = 0;
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::vector(&this->gallery_settle_info_vec);
};

// Line 38: range 0000000014B30E16-0000000014B30FA8
void __cdecl EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext::EffigyChallengeV2DungeonContext(
        EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *const this,
        EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *a2)
{
  uint32_t challenge_mode_difficulty; // ecx
  uint32_t challenge_mode_skill_no; // ecx
  uint32_t challenge_mode_cost_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  challenge_mode_difficulty = a2->challenge_mode_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->challenge_mode_difficulty = challenge_mode_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_skill_no >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  challenge_mode_skill_no = a2->challenge_mode_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_skill_no >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_mode_skill_no);
  }
  this->challenge_mode_skill_no = challenge_mode_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  challenge_mode_cost_time = a2->challenge_mode_cost_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_mode_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_mode_cost_time);
  }
  this->challenge_mode_cost_time = challenge_mode_cost_time;
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::vector(
    &this->gallery_settle_info_vec,
    &a2->gallery_settle_info_vec);
};

// Line 38: range 0000000014A98578-0000000014A9870A
void __cdecl EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext::EffigyChallengeV2DungeonContext(
        EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *const this,
        const EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *a2)
{
  uint32_t challenge_mode_difficulty; // ecx
  uint32_t challenge_mode_skill_no; // ecx
  uint32_t challenge_mode_cost_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  challenge_mode_difficulty = a2->challenge_mode_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->challenge_mode_difficulty = challenge_mode_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_skill_no >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  challenge_mode_skill_no = a2->challenge_mode_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_skill_no >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->challenge_mode_skill_no >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->challenge_mode_skill_no);
  }
  this->challenge_mode_skill_no = challenge_mode_skill_no;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->challenge_mode_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  challenge_mode_cost_time = a2->challenge_mode_cost_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_mode_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_mode_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_mode_cost_time);
  }
  this->challenge_mode_cost_time = challenge_mode_cost_time;
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::vector(
    &this->gallery_settle_info_vec,
    &a2->gallery_settle_info_vec);
};

// Line 38: range 0000000014A47934-0000000014A47952
void __cdecl EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext::~EffigyChallengeV2DungeonContext(
        EffigyChallengeV2Activity::EffigyChallengeV2DungeonContext *const this)
{
  std::vector<proto_log::EffigyChallengeV2GallerySettleInfoLog>::~vector(&this->gallery_settle_info_vec);
};

// Line 50: range 000000001702E77E-000000001702E8A8
void __fastcall ZN25EffigyChallengeV2ActivityCI212BaseActivityER6Playerj(
        EffigyChallengeV2Activity *const this,
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
  *(_QWORD *)(v3 + 16) = ZN25EffigyChallengeV2ActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'EffigyChallengeV2Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  std::map<unsigned int,EffigyChallengeV2LevelData>::map(&this->level_data_map_);
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

// Line 52: range 000000001384AA3E-000000001384AA48
data::NewActivityType __cdecl EffigyChallengeV2Activity::getActivityStaticType()
{
  return 3203;
};

// Line 62: range 000000001666E9E4-000000001666E9F5
int32_t __cdecl EffigyChallengeV2Activity::getAddCoinExceedRetcode(
        const EffigyChallengeV2Activity *const this,
        proto::VirtualItem coin_type)
{
  return 10428;
};

// Line 63: range 000000001666E9F6-000000001666EA07
int32_t __cdecl EffigyChallengeV2Activity::getSubCoinNotEnoughRetcode(
        const EffigyChallengeV2Activity *const this,
        proto::VirtualItem coin_type)
{
  return 10427;
};
