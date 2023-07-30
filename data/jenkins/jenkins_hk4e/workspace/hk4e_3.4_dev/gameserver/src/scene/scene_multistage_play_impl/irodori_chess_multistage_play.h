// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/irodori_chess_multistage_play.h

// Line 25: range 00000000154CB59A-00000000154CB5E7
void __cdecl IrodoriChessMultistagePlay::~IrodoriChessMultistagePlay(IrodoriChessMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'IrodoriChessMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 25: range 00000000154CB5E8-00000000154CB612
void __cdecl IrodoriChessMultistagePlay::~IrodoriChessMultistagePlay(IrodoriChessMultistagePlay *const this)
{
  IrodoriChessMultistagePlay::~IrodoriChessMultistagePlay(this);
  operator delete(this, 0x178uLL);
};

// Line 28: range 0000000015D43436-0000000015D435F5
void __cdecl IrodoriChessMultistagePlay::IrodoriChessMultistagePlay(
        IrodoriChessMultistagePlay *const this,
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
  v4 = (int (**)(...))(&`vtable for'IrodoriChessMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_monsters_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_monsters_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_monsters_, scene, (_BYTE)this + 96);
  }
  this->max_monsters_ = 0;
  v5 = (((_BYTE)this + 100) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->left_monsters_ >> 3) + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->left_monsters_, v5, v6);
  this->left_monsters_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_kill_stage_end_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_kill_stage_end_, v5, &this->is_kill_stage_end_);
  this->is_kill_stage_end_ = 0;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->kill_monsters_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->kill_monsters_, v7, v8);
  this->kill_monsters_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->kill_stage_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->kill_stage_cost_time_, v7, (_BYTE)this + 112);
  }
  this->kill_stage_cost_time_ = 0;
};

// Line 30: range 000000001519990C-000000001519991A
proto::MultistagePlayType __cdecl IrodoriChessMultistagePlay::getPlayType(const IrodoriChessMultistagePlay *const this)
{
  return 6;
};
