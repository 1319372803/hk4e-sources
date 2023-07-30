// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/coin_collect_multistage_play.h

// Line 18: range 000000001832673C-00000000183267AD
void __cdecl CoinCollectMultistagePlay::~CoinCollectMultistagePlay(CoinCollectMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'CoinCollectMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  std::unordered_set<unsigned int>::~unordered_set(&this->prepared_uid_set_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->player_uid_2_choose_skill_no_map_);
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 18: range 00000000183267AE-00000000183267D8
void __cdecl CoinCollectMultistagePlay::~CoinCollectMultistagePlay(CoinCollectMultistagePlay *const this)
{
  CoinCollectMultistagePlay::~CoinCollectMultistagePlay(this);
  operator delete(this, 0x1E0uLL);
};

// Line 21: range 0000000015D435F6-0000000015D4374E
void __cdecl CoinCollectMultistagePlay::CoinCollectMultistagePlay(
        CoinCollectMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx
  __int64 v5; // rsi
  bool v6; // dl

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'CoinCollectMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id_, scene, (_BYTE)this + 96);
  }
  this->level_id_ = 0;
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
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->player_uid_2_choose_skill_no_map_);
  std::unordered_set<unsigned int>::unordered_set(&this->prepared_uid_set_);
};

// Line 23: range 00000000180B5DC6-00000000180B5DD4
proto::MultistagePlayType __cdecl CoinCollectMultistagePlay::getPlayType(const CoinCollectMultistagePlay *const this)
{
  return 9;
};

// Line 26: range 00000000180B5DD6-00000000180B5DE0
void __cdecl CoinCollectMultistagePlay::regValueSetters(CoinCollectMultistagePlay *const this)
{
  ;
};
