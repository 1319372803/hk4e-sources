// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/crystal_link_activity.h

// Line 34: range 0000000016795FF8-000000001679609E
void __cdecl CrystalLinkAvatarData::CrystalLinkAvatarData(CrystalLinkAvatarData *const this)
{
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this);
  this->is_trial = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->avatar_id);
  this->avatar_id = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->in_dungeon_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->in_dungeon_guid);
  this->in_dungeon_guid = 0LL;
};

// Line 47: range 00000000167961EE-0000000016796283
void __cdecl CrystalLinkBuffData::CrystalLinkBuffData(CrystalLinkBuffData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->cond_buff_id = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->effect_buff_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->effect_buff_id);
  }
  this->effect_buff_id = 2;
};

// Line 59: range 0000000016796464-000000001679648E
void __cdecl CrystalLinkTeamData::CrystalLinkTeamData(CrystalLinkTeamData *const this)
{
  std::vector<CrystalLinkAvatarData>::vector(&this->avatar_data_vec);
  std::vector<CrystalLinkBuffData>::vector(&this->buff_data_vec);
};

// Line 59: range 0000000016810ABA-0000000016810AFA
void __cdecl CrystalLinkTeamData::CrystalLinkTeamData(CrystalLinkTeamData *const this, CrystalLinkTeamData *a2)
{
  std::vector<CrystalLinkAvatarData>::vector(&this->avatar_data_vec, &a2->avatar_data_vec);
  std::vector<CrystalLinkBuffData>::vector(&this->buff_data_vec, &a2->buff_data_vec);
};

// Line 59: range 0000000016737746-0000000016737770
void __cdecl CrystalLinkTeamData::~CrystalLinkTeamData(CrystalLinkTeamData *const this)
{
  std::vector<CrystalLinkBuffData>::~vector(&this->buff_data_vec);
  std::vector<CrystalLinkAvatarData>::~vector(&this->avatar_data_vec);
};

// Line 71: range 000000001666CA98-000000001666CB7D
void __cdecl CrystalLinkLevelData::CrystalLinkLevelData(CrystalLinkLevelData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = 0;
  std::vector<CrystalLinkTeamData>::vector(&this->team_data_vec);
  std::vector<unsigned long>::vector(&this->in_dungeon_avatar_guid_vec);
};

// Line 71: range 0000000016796766-000000001679690E
void __cdecl CrystalLinkLevelData::CrystalLinkLevelData(CrystalLinkLevelData *const this, CrystalLinkLevelData *a2)
{
  uint32_t level_id; // ecx
  bool is_open; // cl
  uint32_t best_score; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
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
  if ( *(_BYTE *)(((unsigned __int64)&a2->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  best_score = a2->best_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = best_score;
  std::vector<CrystalLinkTeamData>::vector(&this->team_data_vec, &a2->team_data_vec);
  std::vector<unsigned long>::vector(&this->in_dungeon_avatar_guid_vec, &a2->in_dungeon_avatar_guid_vec);
};

// Line 71: range 000000001666CB7E-000000001666CBAC
void __cdecl CrystalLinkLevelData::~CrystalLinkLevelData(CrystalLinkLevelData *const this)
{
  std::vector<unsigned long>::~vector(&this->in_dungeon_avatar_guid_vec);
  std::vector<CrystalLinkTeamData>::~vector(&this->team_data_vec);
};

// Line 86: range 000000001666CCC2-000000001666CFE4
void __cdecl CrystalLinkDungeonContext::CrystalLinkDungeonContext(CrystalLinkDungeonContext *const this)
{
  std::initializer_list<bool> __l; // [rsp+0h] [rbp-80h]
  std::initializer_list<unsigned int> v2; // [rsp+10h] [rbp-70h]
  std::allocator<bool> __a; // [rsp+35h] [rbp-4Bh] BYREF
  __int16 v4; // [rsp+36h] [rbp-4Ah] BYREF
  __int64 v5; // [rsp+38h] [rbp-48h] BYREF
  std::initializer_list<unsigned int> v6; // [rsp+40h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_upper_part >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_upper_part);
  this->is_upper_part = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_gallery_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_gallery_progress >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_gallery_progress);
  }
  this->init_gallery_progress = 0;
  v4 = 0;
  __l._M_array = (std::initializer_list<bool>::iterator)&v4;
  __l._M_len = 2LL;
  std::allocator<bool>::allocator(&__a);
  std::vector<bool>::vector(&this->is_has_add_buff_vec, __l, &__a);
  std::allocator<bool>::~allocator(&__a);
  v5 = 0LL;
  v2._M_array = (std::initializer_list<unsigned int>::iterator)&v5;
  v2._M_len = 2LL;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
  std::vector<unsigned int>::vector(&this->score_vec, v2, (const std::vector<unsigned int>::allocator_type *)&__a);
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
  v6._M_array = 0LL;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
  std::vector<unsigned int>::vector(
    &this->kill_normal_monster_vec,
    (std::initializer_list<unsigned int>)__PAIR128__(2LL, &v6),
    (const std::vector<unsigned int>::allocator_type *)&__a);
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
  v6._M_len = 0LL;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)&__a);
  std::vector<unsigned int>::vector(
    &this->kill_elite_monster_vec,
    (std::initializer_list<unsigned int>)__PAIR128__(2LL, (std::initializer_list<unsigned int> *)&v6._M_len),
    (const std::vector<unsigned int>::allocator_type *)&__a);
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)&__a);
  std::map<unsigned int,unsigned long>::map(&this->progress_stage_time_map);
};

// Line 86: range 00000000160F6A8A-00000000160F6D0E
void __cdecl CrystalLinkDungeonContext::CrystalLinkDungeonContext(
        CrystalLinkDungeonContext *const this,
        CrystalLinkDungeonContext *a2)
{
  uint32_t level_id; // ecx
  uint32_t difficulty_id; // ecx
  bool is_upper_part; // cl
  uint32_t init_gallery_progress; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  difficulty_id = a2->difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = difficulty_id;
  if ( *(char *)(((unsigned __int64)&a2->is_upper_part >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_upper_part);
  is_upper_part = a2->is_upper_part;
  if ( *(char *)(((unsigned __int64)&this->is_upper_part >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_upper_part);
  this->is_upper_part = is_upper_part;
  if ( *(_BYTE *)(((unsigned __int64)&a2->init_gallery_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->init_gallery_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  init_gallery_progress = a2->init_gallery_progress;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_gallery_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_gallery_progress >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_gallery_progress);
  }
  this->init_gallery_progress = init_gallery_progress;
  std::vector<bool>::vector(&this->is_has_add_buff_vec, &a2->is_has_add_buff_vec);
  std::vector<unsigned int>::vector(&this->score_vec, &a2->score_vec);
  std::vector<unsigned int>::vector(&this->kill_normal_monster_vec, &a2->kill_normal_monster_vec);
  std::vector<unsigned int>::vector(&this->kill_elite_monster_vec, &a2->kill_elite_monster_vec);
  std::map<unsigned int,unsigned long>::map(&this->progress_stage_time_map, &a2->progress_stage_time_map);
};

// Line 86: range 000000001609FE08-00000000160A00F2
void __cdecl CrystalLinkDungeonContext::CrystalLinkDungeonContext(
        CrystalLinkDungeonContext *const this,
        const CrystalLinkDungeonContext *a2)
{
  uint32_t level_id; // ecx
  uint32_t difficulty_id; // ecx
  bool is_upper_part; // cl
  uint32_t init_gallery_progress; // ecx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_id = a2->level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = level_id;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  difficulty_id = a2->difficulty_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->difficulty_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->difficulty_id);
  }
  this->difficulty_id = difficulty_id;
  if ( *(char *)(((unsigned __int64)&a2->is_upper_part >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_upper_part);
  is_upper_part = a2->is_upper_part;
  if ( *(char *)(((unsigned __int64)&this->is_upper_part >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_upper_part);
  this->is_upper_part = is_upper_part;
  if ( *(_BYTE *)(((unsigned __int64)&a2->init_gallery_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->init_gallery_progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  init_gallery_progress = a2->init_gallery_progress;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_gallery_progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_gallery_progress >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_gallery_progress);
  }
  this->init_gallery_progress = init_gallery_progress;
  std::vector<bool>::vector(&this->is_has_add_buff_vec, &a2->is_has_add_buff_vec);
  std::vector<unsigned int>::vector(&this->score_vec, &a2->score_vec);
  std::vector<unsigned int>::vector(&this->kill_normal_monster_vec, &a2->kill_normal_monster_vec);
  std::vector<unsigned int>::vector(&this->kill_elite_monster_vec, &a2->kill_elite_monster_vec);
  std::map<unsigned int,unsigned long>::map(&this->progress_stage_time_map, &a2->progress_stage_time_map);
};

// Line 99: range 00000000168333EA-000000001683345B
void __cdecl CrystalLinkActivity::~CrystalLinkActivity(CrystalLinkActivity *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'CrystalLinkActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v1;
  std::map<unsigned int,CrystalLinkLevelData>::~map(&this->level_data_map_);
  std::map<std::type_index,std::weak_ptr<Observer>>::~map(&this->event_observer_map_);
  BaseActivity::~BaseActivity(this);
};

// Line 99: range 000000001683345C-0000000016833486
void __cdecl CrystalLinkActivity::~CrystalLinkActivity(CrystalLinkActivity *const this)
{
  CrystalLinkActivity::~CrystalLinkActivity(this);
  operator delete(this, 0x410uLL);
};

// Line 102: range 00000000170290AC-0000000017029219
void __fastcall ZN19CrystalLinkActivityCI212BaseActivityER6Playerj(CrystalLinkActivity *const this, Player *a2, int a3)
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
  *(_QWORD *)(v3 + 16) = ZN19CrystalLinkActivityCI212BaseActivityER6Playerj;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  BaseActivity::BaseActivity(this, a2, *(_DWORD *)(v3 + 32));
  v6 = (int (**)(...))(&`vtable for'CrystalLinkActivity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_DescribalBase = v6;
  std::map<std::type_index,std::weak_ptr<Observer>>::map(&this->event_observer_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->difficulty_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->difficulty_id_);
  }
  this->difficulty_id_ = 0;
  std::map<unsigned int,CrystalLinkLevelData>::map(&this->level_data_map_);
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

// Line 103: range 000000001384A6B4-000000001384A6BE
data::NewActivityType __cdecl CrystalLinkActivity::getActivityStaticType()
{
  return 2601;
};

// Line 432: range 000000001607D686-000000001607D6E4
void __cdecl CrystalLinkDungeonContext::~CrystalLinkDungeonContext(CrystalLinkDungeonContext *const this)
{
  std::map<unsigned int,unsigned long>::~map(&this->progress_stage_time_map);
  std::vector<unsigned int>::~vector(&this->kill_elite_monster_vec);
  std::vector<unsigned int>::~vector(&this->kill_normal_monster_vec);
  std::vector<unsigned int>::~vector(&this->score_vec);
  std::vector<bool>::~vector(&this->is_has_add_buff_vec);
};
