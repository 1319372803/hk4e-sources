// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/lan_v3_boat_multistage_play.h

// Line 35: range 00000000154CB4EA-00000000154CB56D
void __cdecl LanV3BoatMultistagePlay::~LanV3BoatMultistagePlay(LanV3BoatMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'LanV3BoatMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::set<unsigned int>::~set(&this->winner_uid_set_);
  std::set<unsigned int>::~set(&this->entered_uid_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->player_born_map_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 35: range 00000000154CB56E-00000000154CB598
void __cdecl LanV3BoatMultistagePlay::~LanV3BoatMultistagePlay(LanV3BoatMultistagePlay *const this)
{
  LanV3BoatMultistagePlay::~LanV3BoatMultistagePlay(this);
  operator delete(this, 0x228uLL);
};

// Line 38: range 0000000015D43B70-0000000015D43E73
void __cdecl LanV3BoatMultistagePlay::LanV3BoatMultistagePlay(
        LanV3BoatMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl
  __int64 v7; // rsi
  bool v8; // dl
  __int64 v9; // rsi
  bool v10; // dl

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'LanV3BoatMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->map_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->map_id_, scene, (_BYTE)this + 96);
  }
  this->map_id_ = 0;
  v5 = (((_BYTE)this + 100) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->gallery_id_, v5, v6);
  this->gallery_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id_, v5, (_BYTE)this + 104);
  }
  this->activity_id_ = 0;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->schedule_id_, v7, v8);
  this->schedule_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_single_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_single_, v7, &this->is_single_);
  this->is_single_ = 0;
  v9 = (((_BYTE)this + 116) & 7u) + 3;
  v10 = *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000);
  if ( v10 )
    __asan_report_store4(&this->match_id_, v9, v10);
  this->match_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_from_match_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_from_match_, v9, &this->is_from_match_);
  this->is_from_match_ = 0;
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->player_born_map_);
  std::set<unsigned int>::set(&this->entered_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->series_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->series_id_, v9, (_BYTE)this - 24);
  }
  this->series_id_ = 0;
  std::set<unsigned int>::set(&this->winner_uid_set_);
  if ( *(char *)(((unsigned __int64)&this->is_gallery_succ_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gallery_succ_, v9, &this->is_gallery_succ_);
  this->is_gallery_succ_ = 0;
};

// Line 40: range 0000000015199EAE-0000000015199EBC
proto::MultistagePlayType __cdecl LanV3BoatMultistagePlay::getPlayType(const LanV3BoatMultistagePlay *const this)
{
  return 10;
};

// Line 43: range 0000000015199EBE-0000000015199EC8
void __cdecl LanV3BoatMultistagePlay::regValueSetters(LanV3BoatMultistagePlay *const this)
{
  ;
};

// Line 67: range 0000000014625D1C-0000000014625D47
void __cdecl LanV3BoatMultistagePlay::setWinnerUidSet(
        LanV3BoatMultistagePlay *const this,
        const std::set<unsigned int> *winner_uid_set)
{
  std::set<unsigned int>::operator=(&this->winner_uid_set_, winner_uid_set);
};

// Line 69: range 0000000014625D48-0000000014625D9D
// local variable allocation has failed, the output may be wrong!
void __cdecl LanV3BoatMultistagePlay::setIsGallerySucc(LanV3BoatMultistagePlay *const this, bool is_succ)
{
  if ( *(char *)(((unsigned __int64)&this->is_gallery_succ_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_gallery_succ_, is_succ, &this->is_gallery_succ_);
  this->is_gallery_succ_ = is_succ;
};
