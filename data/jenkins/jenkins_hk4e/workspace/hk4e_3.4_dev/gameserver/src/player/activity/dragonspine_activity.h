// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/dragonspine_activity.h

// Line 22: range 00000000167999B2-0000000016799C34
void __cdecl DragonSpineChapterRecord::DragonSpineChapterRecord(
        DragonSpineChapterRecord *const this,
        DragonSpineChapterRecord *a2)
{
  uint32_t chapter_id; // ecx
  bool is_open; // cl
  uint32_t progress; // ecx
  bool is_finish; // cl
  uint32_t open_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  chapter_id = a2->chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->chapter_id = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_open);
  }
  is_open = a2->is_open;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  progress = a2->progress;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress);
  }
  this->progress = progress;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_finish);
  }
  is_finish = a2->is_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = is_finish;
  if ( *(_BYTE *)(((unsigned __int64)&a2->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  open_time = a2->open_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time);
  }
  this->open_time = open_time;
  std::set<unsigned int>::set(&this->finished_mission_set, &a2->finished_mission_set);
};

// Line 22: range 000000001666D59E-000000001666D5BC
void __cdecl DragonSpineChapterRecord::~DragonSpineChapterRecord(DragonSpineChapterRecord *const this)
{
  std::set<unsigned int>::~set(&this->finished_mission_set);
};

// Line 35: range 00000000168331AC-0000000016833241
void __cdecl DragonSpineActivity::~DragonSpineActivity(DragonSpineActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DragonSpineActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::~unordered_set(&this->banned_drop_subject_set_);
  std::map<unsigned int,DragonSpineChapterRecord>::~map(&this->chapter_map_);
  std::weak_ptr<Observer>::~weak_ptr(&this->wear_or_take_off_equip_obs_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->obtain_item_obs_wtr_);
  BaseActivity::~BaseActivity(this);
};

// Line 35: range 0000000016833242-000000001683326C
void __cdecl DragonSpineActivity::~DragonSpineActivity(DragonSpineActivity *const this)
{
  DragonSpineActivity::~DragonSpineActivity(this);
  operator delete(this, 0x460uLL);
};

// Line 40: range 000000001701BAB6-000000001701BDC4
void __fastcall ZN19DragonSpineActivityCI212BaseActivityER6Playerj(DragonSpineActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN19DragonSpineActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'DragonSpineActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::weak_ptr<Observer>::weak_ptr(&this->obtain_item_obs_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->wear_or_take_off_equip_obs_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->equipped_weapon_avatar_guid_);
  this->equipped_weapon_avatar_guid_ = 0LL;
  std::map<unsigned int,DragonSpineChapterRecord>::map(&this->chapter_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dragon_sword_cur_enhance_level_);
  }
  this->dragon_sword_cur_enhance_level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->activity_weapon_guid_);
  this->activity_weapon_guid_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shimmering_essence_);
  }
  this->shimmering_essence_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->warm_essence_);
  }
  this->warm_essence_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wondrous_essence_);
  }
  this->wondrous_essence_ = 0;
  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::unordered_set(&this->banned_drop_subject_set_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
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

// Line 42: range 0000000017D6941B-0000000017D69425
data::NewActivityType __cdecl DragonSpineActivity::getActivityStaticType()
{
  return 1200;
};

// Line 53: range 000000001666C9F6-000000001666CA43
bool __cdecl DragonSpineActivity::isContentClosed(const DragonSpineActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 54: range 000000001666D44A-000000001666D59D
void __cdecl DragonSpineChapterRecord::DragonSpineChapterRecord(DragonSpineChapterRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->chapter_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress);
  }
  this->progress = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time);
  }
  this->open_time = 0;
  std::set<unsigned int>::set(&this->finished_mission_set);
};

// Line 111: range 0000000017D69426-0000000017D69472
uint32_t __cdecl DragonSpineActivity::getShimmeringEssence(const DragonSpineActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->shimmering_essence_;
};

// Line 112: range 0000000017D69474-0000000017D694C8
uint32_t __cdecl DragonSpineActivity::getWarmEssence(const DragonSpineActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->warm_essence_;
};

// Line 113: range 0000000017D694CA-0000000017D69516
uint32_t __cdecl DragonSpineActivity::getWondrousEssence(const DragonSpineActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->wondrous_essence_;
};
