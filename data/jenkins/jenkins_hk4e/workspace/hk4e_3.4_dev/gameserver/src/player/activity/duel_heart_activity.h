// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/duel_heart_activity.h

// Line 24: range 00000000168330F2-0000000016833163
void __cdecl DuelHeartActivity::~DuelHeartActivity(DuelHeartActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'DuelHeartActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::weak_ptr<Observer>::~weak_ptr(&this->leave_scene_wtr_);
  std::map<unsigned int,DuelHeartActivity::LevelData>::~map(&this->level_data_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 24: range 0000000016833164-000000001683318E
void __cdecl DuelHeartActivity::~DuelHeartActivity(DuelHeartActivity *const this)
{
  DuelHeartActivity::~DuelHeartActivity(this);
  operator delete(this, 0x3F0uLL);
};

// Line 26: range 000000001666D972-000000001666DA01
void __cdecl DuelHeartActivity::DifficultyData::DifficultyData(DuelHeartActivity::DifficultyData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->cost_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
};

// Line 32: range 000000001666D8C0-000000001666D955
void __cdecl DuelHeartActivity::LevelData::LevelData(DuelHeartActivity::LevelData *const this)
{
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::map(&this->difficulty_data_map);
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open);
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_cg_viewed);
  }
  this->is_cg_viewed = 0;
};

// Line 32: range 000000001679ADC0-000000001679AEDB
void __cdecl DuelHeartActivity::LevelData::LevelData(
        DuelHeartActivity::LevelData *const this,
        DuelHeartActivity::LevelData *a2)
{
  bool is_open; // cl
  bool is_cg_viewed; // cl

  std::map<unsigned int,DuelHeartActivity::DifficultyData>::map(&this->difficulty_data_map, &a2->difficulty_data_map);
  if ( *(char *)(((unsigned __int64)&a2->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_open);
  is_open = a2->is_open;
  if ( *(char *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_open);
  this->is_open = is_open;
  if ( *(_BYTE *)(((unsigned __int64)&a2->is_cg_viewed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->is_cg_viewed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&a2->is_cg_viewed);
  }
  is_cg_viewed = a2->is_cg_viewed;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_cg_viewed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_cg_viewed);
  }
  this->is_cg_viewed = is_cg_viewed;
};

// Line 32: range 000000001666D956-000000001666D970
void __cdecl DuelHeartActivity::LevelData::~LevelData(DuelHeartActivity::LevelData *const this)
{
  std::map<unsigned int,DuelHeartActivity::DifficultyData>::~map(&this->difficulty_data_map);
};

// Line 39: range 0000000017030216-0000000017030376
void __fastcall ZN17DuelHeartActivityCI212BaseActivityER6Playerj(DuelHeartActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN17DuelHeartActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'DuelHeartActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<unsigned int,DuelHeartActivity::LevelData>::map(&this->level_data_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->in_dungeon_avatar_guid_);
  this->in_dungeon_avatar_guid_ = 0LL;
  std::weak_ptr<Observer>::weak_ptr(&this->leave_scene_wtr_);
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

// Line 41: range 000000001384AA6A-000000001384AA74
data::NewActivityType __cdecl DuelHeartActivity::getActivityStaticType()
{
  return 3400;
};

// Line 57: range 0000000017D719F8-0000000017D71A19
void __cdecl DuelHeartActivity::openLevelByGm(DuelHeartActivity *const this, uint32_t level_id)
{
  DuelHeartActivity::openLevel(this, level_id);
};

// Line 58: range 0000000017D71A1A-0000000017D71A41
void __cdecl DuelHeartActivity::openLevelDifficultyByGm(
        DuelHeartActivity *const this,
        uint32_t level_id,
        uint32_t difficulty)
{
  DuelHeartActivity::openLevelDifficulty(this, level_id, difficulty);
};

// Line 80: range 000000001666D77E-000000001666D7C5
void __cdecl DuelHeartActivity::setInDungeonAvatar(DuelHeartActivity *const this, uint64_t guid)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->in_dungeon_avatar_guid_);
  this->in_dungeon_avatar_guid_ = guid;
};

// Line 81: range 000000001666D7C6-000000001666D809
void __cdecl DuelHeartActivity::clearInDungeonAvatar(DuelHeartActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->in_dungeon_avatar_guid_);
  this->in_dungeon_avatar_guid_ = 0LL;
};

// Line 82: range 000000001666D80A-000000001666D84F
bool __cdecl DuelHeartActivity::isAlreadyInDungeon(const DuelHeartActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return this->in_dungeon_avatar_guid_ != 0;
};
