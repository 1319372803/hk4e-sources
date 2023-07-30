// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/hide_and_seek_multistage_play.h

// Line 21: range 00000000154CB614-00000000154CB727
void __cdecl HideAndSeekMultistagePlay::~HideAndSeekMultistagePlay(HideAndSeekMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'HideAndSeekMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->player_chosen_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->player_disappear_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->player_disconnect_map_);
  std::string::~string(&this->trans_no_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->caught_uid_timestamp_map_);
  std::unordered_set<unsigned int>::~unordered_set(&this->punish_uid_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->leave_uid_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->enter_uid_set_);
  std::unordered_set<unsigned int>::~unordered_set(&this->ready_uid_set_);
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::~unordered_map(&this->stage_duration_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->hider_born_map_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 21: range 00000000154CB728-00000000154CB752
void __cdecl HideAndSeekMultistagePlay::~HideAndSeekMultistagePlay(HideAndSeekMultistagePlay *const this)
{
  HideAndSeekMultistagePlay::~HideAndSeekMultistagePlay(this);
  operator delete(this, 0x3E8uLL);
};

// Line 24: range 0000000015D429A4-0000000015D42DE2
void __cdecl HideAndSeekMultistagePlay::HideAndSeekMultistagePlay(
        HideAndSeekMultistagePlay *const this,
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
  __int64 v11; // rsi
  bool v12; // dl
  bool v13; // dl

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'HideAndSeekMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->hunter_born_pair_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->hider_born_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->map_id_, scene, (_BYTE)this - 96);
  }
  this->map_id_ = 0;
  v5 = (((_BYTE)this - 92) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->own_stage_type_, v5, v6);
  this->own_stage_type_ = HIDE_AND_SEEK_STAGE_GAME;
  std::unordered_map<proto::HideAndSeekStageType,unsigned int>::unordered_map(&this->stage_duration_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id_, v5, (_BYTE)this - 32);
  }
  this->gallery_id_ = 0;
  v7 = ((_BYTE)this - 28) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_record_score_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_record_score_, v7, v8);
  this->is_record_score_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id_, v7, (_BYTE)this - 24);
  }
  this->activity_id_ = 0;
  v9 = (((_BYTE)this - 20) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->match_id_, v9, v10);
  this->match_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chosen_hunter_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chosen_hunter_uid_, v9, (_BYTE)this - 16);
  }
  this->chosen_hunter_uid_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->ready_uid_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->enter_uid_set_);
  std::unordered_set<unsigned int>::unordered_set(&this->leave_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->seek_start_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->seek_start_time_, v9, (_BYTE)this - 96);
  }
  this->seek_start_time_ = 0;
  v11 = (((_BYTE)this - 92) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->seek_settle_time_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->seek_settle_time_, v11, v12);
  this->seek_settle_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cost_time_, v11, (_BYTE)this - 88);
  }
  this->cost_time_ = 0;
  v13 = *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000);
  if ( v13 )
    __asan_report_store4(&this->series_id_, (((_BYTE)this - 84) & 7u) + 3, v13);
  this->series_id_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->punish_uid_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->caught_uid_timestamp_map_);
  std::string::basic_string(&this->trans_no_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->player_disconnect_map_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->player_disappear_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(&this->player_chosen_map_);
};

// Line 26: range 0000000015197DAE-0000000015197DBC
proto::MultistagePlayType __cdecl HideAndSeekMultistagePlay::getPlayType(const HideAndSeekMultistagePlay *const this)
{
  return 3;
};

// Line 29: range 0000000015197DBE-0000000015197DC8
void __cdecl HideAndSeekMultistagePlay::regValueSetters(HideAndSeekMultistagePlay *const this)
{
  ;
};

// Line 31: range 0000000015197DCA-0000000015197E1E
uint32_t __cdecl HideAndSeekMultistagePlay::getStageType(HideAndSeekMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->own_stage_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->own_stage_type_;
};

// Line 121: range 000000001461DF4A-000000001461DF63
void __cdecl HideAndSeekMultistagePlay::settleByGm(HideAndSeekMultistagePlay *const this)
{
  HideAndSeekMultistagePlay::handleExceptionQuitSettle(this);
};

// Line 128: range 00000000149EDF62-00000000149EDFAE
uint32_t __cdecl HideAndSeekMultistagePlay::getHunterUid(const HideAndSeekMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hunter_born_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->hunter_born_pair_.first;
};

// Line 130: range 000000001461DF8E-000000001461DFB9
void __cdecl HideAndSeekMultistagePlay::setPlayerChosenMap(
        HideAndSeekMultistagePlay *const this,
        const std::unordered_map<unsigned int,std::vector<unsigned int>> *player_chosen_map)
{
  std::unordered_map<unsigned int,std::vector<unsigned int>>::operator=(&this->player_chosen_map_, player_chosen_map);
};

// Line 135: range 00000000149EDFB0-00000000149EDFFC
uint32_t __cdecl HideAndSeekMultistagePlay::getMapId(const HideAndSeekMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->map_id_;
};

// Line 138: range 00000000149EDFFE-00000000149EE04A
uint32_t __cdecl HideAndSeekMultistagePlay::getGalleryId(const HideAndSeekMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return this->gallery_id_;
};

// Line 141: range 0000000015197E20-0000000015197E74
uint32_t __cdecl HideAndSeekMultistagePlay::getMatchId(const HideAndSeekMultistagePlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->match_id_;
};
