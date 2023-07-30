// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/blitz_rush_activity.h

// Line 26: range 0000000017A0463C-0000000017A046CB
void __cdecl BlitzRushParkourLevelRecordData::BlitzRushParkourLevelRecordData(
        BlitzRushParkourLevelRecordData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->best_record = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
};

// Line 35: range 0000000017B8E1C0-0000000017B8E267
void __cdecl BlitzRushActivity::~BlitzRushActivity(BlitzRushActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BlitzRushActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->create_dungeon_wtr_);
  std::weak_ptr<Observer>::~weak_ptr(&this->challenge_finish_wtr_);
  std::map<proto::VirtualItem,unsigned int>::~map(&this->activity_coin_map_);
  std::map<unsigned int,BlitzRushParkourLevelRecordData>::~map(&this->parkour_level_record_map_);
  std::map<unsigned int,bool>::~map(&this->stage_open_map_);
  BaseActivity::~BaseActivity((BaseActivity *const)this);
};

// Line 35: range 0000000017B8E268-0000000017B8E292
void __cdecl BlitzRushActivity::~BlitzRushActivity(BlitzRushActivity *const this)
{
  BlitzRushActivity::~BlitzRushActivity(this);
  operator delete(this, 0x460uLL);
};

// Line 38: range 00000000170230BA-000000001702329F
void __fastcall ZN17BlitzRushActivityCI212BaseActivityER6Playerj(BlitzRushActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN17BlitzRushActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity((BaseActivity *const)this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'BlitzRushActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 95) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_dungeon_unlocked_);
  }
  this->is_dungeon_unlocked_ = 0;
  std::map<unsigned int,bool>::map(&this->stage_open_map_);
  std::map<unsigned int,BlitzRushParkourLevelRecordData>::map(&this->parkour_level_record_map_);
  std::map<proto::VirtualItem,unsigned int>::map(&this->activity_coin_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::weak_ptr<Observer>::weak_ptr(&this->challenge_finish_wtr_);
  std::weak_ptr<Observer>::weak_ptr(&this->create_dungeon_wtr_);
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

// Line 51: range 0000000017A045EE-0000000017A0463B
bool __cdecl BlitzRushActivity::isContentClosed(const BlitzRushActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  return this->is_content_closed_;
};

// Line 183: range 000000001384A4EF-000000001384A4F9
data::NewActivityType __cdecl BlitzRushActivity::getActivityStaticType()
{
  return 2001;
};
