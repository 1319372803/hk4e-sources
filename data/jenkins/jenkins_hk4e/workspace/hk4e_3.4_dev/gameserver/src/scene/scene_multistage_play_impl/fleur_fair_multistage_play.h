// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/fleur_fair_multistage_play.h

// Line 17: range 0000000015D4212E-0000000015D422DB
void __cdecl FleurFairDungeonParam::FleurFairDungeonParam(FleurFairDungeonParam *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->activity_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->schedule_id, v2, v3);
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->section_id, v2, (_BYTE)this + 8);
  }
  this->section_id = 0;
  std::vector<unsigned int>::vector(&this->gallery_id_vec);
  std::map<unsigned int,unsigned int>::map(&this->ability_group_id_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->success_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->success_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->success_reward_id, v2, (_BYTE)this + 88);
  }
  this->success_reward_id = 0;
  v4 = (((_BYTE)this + 92) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->initial_energy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_energy >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->initial_energy, v4, v5);
  this->initial_energy = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->energy_limit, v4, (_BYTE)this + 96);
  }
  this->energy_limit = 0;
};

// Line 17: range 000000001518B3D8-000000001518B406
void __cdecl FleurFairDungeonParam::~FleurFairDungeonParam(FleurFairDungeonParam *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->ability_group_id_map);
  std::vector<unsigned int>::~vector(&this->gallery_id_vec);
};

// Line 29: range 0000000015401D5E-0000000015401D78
void __cdecl FleurFairDungeonGroupStat::FleurFairDungeonGroupStat(FleurFairDungeonGroupStat *const this)
{
  std::unordered_map<unsigned int,float>::unordered_map(&this->monster_hurt_map);
};

// Line 29: range 0000000015399EFC-0000000015399F16
void __cdecl FleurFairDungeonGroupStat::~FleurFairDungeonGroupStat(FleurFairDungeonGroupStat *const this)
{
  std::unordered_map<unsigned int,float>::~unordered_map(&this->monster_hurt_map);
};

// Line 34: range 0000000015400E70-0000000015400F1D
void __cdecl FleurFairDungeonPlayerInfo::FleurFairDungeonPlayerInfo(FleurFairDungeonPlayerInfo *const this)
{
  __int64 v1; // rsi
  bool v2; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->energy = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->min_energy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_energy >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->min_energy, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->min_energy = 0;
  std::vector<std::string>::vector(&this->ability_group_vec);
  std::unordered_map<unsigned int,FleurFairDungeonGroupStat>::unordered_map(&this->group_stat_map);
};

// Line 34: range 0000000015338C7E-0000000015338CAC
void __cdecl FleurFairDungeonPlayerInfo::~FleurFairDungeonPlayerInfo(FleurFairDungeonPlayerInfo *const this)
{
  std::unordered_map<unsigned int,FleurFairDungeonGroupStat>::~unordered_map(&this->group_stat_map);
  std::vector<std::string>::~vector(&this->ability_group_vec);
};

// Line 42: range 00000000154CB754-00000000154CB81F
void __cdecl FleurFairMultistagePlay::~FleurFairMultistagePlay(FleurFairMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'FleurFairMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<std::string,int>::~unordered_map(&this->gallery_temp_value_map);
  std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::~map(&this->player_stat_info_map_);
  std::string::~string(&this->stage_transaction_);
  std::unordered_set<unsigned int>::~unordered_set(&this->preview_enter_uid_set_);
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::~unordered_map(&this->player_info_map_);
  std::set<unsigned int>::~set(&this->team_uid_set_);
  FleurFairDungeonParam::~FleurFairDungeonParam(&this->dungeon_param_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 42: range 00000000154CB820-00000000154CB84A
void __cdecl FleurFairMultistagePlay::~FleurFairMultistagePlay(FleurFairMultistagePlay *const this)
{
  FleurFairMultistagePlay::~FleurFairMultistagePlay(this);
  operator delete(this, 0x310uLL);
};

// Line 45: range 0000000015D425C8-0000000015D42848
void __cdecl FleurFairMultistagePlay::FleurFairMultistagePlay(
        FleurFairMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'FleurFairMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  FleurFairDungeonParam::FleurFairDungeonParam(&this->dungeon_param_);
  std::set<unsigned int>::set(&this->team_uid_set_);
  std::unordered_map<unsigned int,FleurFairDungeonPlayerInfo>::unordered_map(&this->player_info_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->preview_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->preview_stage_index_, scene, (_BYTE)this + 48);
  }
  this->preview_stage_index_ = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->preview_display_duration_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preview_display_duration_ >> 3)
                                                        + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->preview_display_duration_, v5, v6);
  this->preview_display_duration_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->preview_enter_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_stage_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_stage_index_, v5, (_BYTE)this + 112);
  }
  this->gallery_stage_index_ = 0;
  v7 = (((_BYTE)this + 116) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_stage_cost_time_ >> 3)
                                                         + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->gallery_stage_cost_time_, v7, v8);
  this->gallery_stage_cost_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_stage_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_stage_cost_time_, v7, (_BYTE)this + 120);
  }
  this->boss_stage_cost_time_ = 0;
  std::string::basic_string(&this->stage_transaction_);
  std::map<unsigned int,std::vector<proto::FleurFairPlayerStatInfo>>::map(&this->player_stat_info_map_);
  if ( *(char *)(((unsigned __int64)&this->is_player_stat_info_map_generated_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_player_stat_info_map_generated_, v7, &this->is_player_stat_info_map_generated_);
  this->is_player_stat_info_map_generated_ = 0;
  std::unordered_map<std::string,int>::unordered_map(&this->gallery_temp_value_map);
};

// Line 47: range 000000001518B4E8-000000001518B4F6
proto::MultistagePlayType __cdecl FleurFairMultistagePlay::getPlayType(const FleurFairMultistagePlay *const this)
{
  return 2;
};

// Line 52: range 000000001518B4F8-000000001518B502
void __cdecl FleurFairMultistagePlay::regValueSetters(FleurFairMultistagePlay *const this)
{
  ;
};

// Line 81: range 00000000149EDEDC-00000000149EDF0B
std::vector<unsigned int> *__cdecl FleurFairMultistagePlay::getGalleryIdVec(
        std::vector<unsigned int> *retstr,
        const FleurFairMultistagePlay *const this)
{
  std::vector<unsigned int>::vector(retstr, &this->dungeon_param_.gallery_id_vec);
  return retstr;
};
