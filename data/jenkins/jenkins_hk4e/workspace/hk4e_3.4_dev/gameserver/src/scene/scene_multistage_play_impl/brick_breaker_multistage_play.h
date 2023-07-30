// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/brick_breaker_multistage_play.h

// Line 20: range 0000000018326A36-0000000018326B01
void __cdecl BrickBreakerMultistagePlay::~BrickBreakerMultistagePlay(BrickBreakerMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BrickBreakerMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->uid_2_avatar_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->uid_2_skill_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->leave_uid_set_);
  std::set<unsigned int>::~set(&this->enter_uid_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->ready_uid_set_);
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::~unordered_map(&this->stage_duration_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->player_born_map_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 20: range 0000000018326B02-0000000018326B2C
void __cdecl BrickBreakerMultistagePlay::~BrickBreakerMultistagePlay(BrickBreakerMultistagePlay *const this)
{
  BrickBreakerMultistagePlay::~BrickBreakerMultistagePlay(this);
  operator delete(this, 0x300uLL);
};

// Line 23: range 0000000015D438AA-0000000015D43B6F
void __cdecl BrickBreakerMultistagePlay::BrickBreakerMultistagePlay(
        BrickBreakerMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  bool v10; // dl

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'BrickBreakerMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->player_born_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_, scene, (_BYTE)this - 104);
  }
  this->level_id_ = 0;
  v5 = (((_BYTE)this - 100) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->own_stage_type_, v5, v6);
  this->own_stage_type_ = BRICK_BREAKER_STAGE_GAME;
  std::unordered_map<proto::BrickBreakerStageType,unsigned int>::unordered_map(&this->stage_duration_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id_, v5, (_BYTE)this - 40);
  }
  this->gallery_id_ = 0;
  v7 = ((_BYTE)this - 36) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_from_match_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_from_match_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_from_match_, v7, v8);
  this->is_from_match_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id_, v7, (_BYTE)this - 32);
  }
  this->activity_id_ = 0;
  v9 = (((_BYTE)this - 28) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->match_id_, v9, v10);
  this->match_id_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->ready_uid_set_);
  std::set<unsigned int>::set(&this->enter_uid_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->leave_uid_set_);
  if ( *(char *)(((unsigned __int64)&this->is_changing_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_changing_, v9, &this->is_changing_);
  this->is_changing_ = 0;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->uid_2_skill_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->uid_2_avatar_map_);
};

// Line 25: range 00000000180B53F6-00000000180B5404
proto::MultistagePlayType __cdecl BrickBreakerMultistagePlay::getPlayType(const BrickBreakerMultistagePlay *const this)
{
  return 8;
};

// Line 28: range 00000000180B5406-00000000180B5410
void __cdecl BrickBreakerMultistagePlay::regValueSetters(BrickBreakerMultistagePlay *const this)
{
  ;
};

// Line 30: range 00000000180B5412-00000000180B5466
uint32_t __cdecl BrickBreakerMultistagePlay::getStageType(BrickBreakerMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->own_stage_type_;
};
