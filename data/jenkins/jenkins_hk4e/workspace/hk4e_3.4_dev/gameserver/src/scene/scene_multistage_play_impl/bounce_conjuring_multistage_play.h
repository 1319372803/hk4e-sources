// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_impl/bounce_conjuring_multistage_play.h

// Line 16: range 0000000015F45414-0000000015F45461
void __cdecl BounceConjuringMultistagePlay::~BounceConjuringMultistagePlay(BounceConjuringMultistagePlay *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'BounceConjuringMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DescribalBase = v2;
  SceneMultistagePlay::~SceneMultistagePlay(this);
};

// Line 16: range 0000000015F45462-0000000015F4548C
void __cdecl BounceConjuringMultistagePlay::~BounceConjuringMultistagePlay(BounceConjuringMultistagePlay *const this)
{
  BounceConjuringMultistagePlay::~BounceConjuringMultistagePlay(this);
  operator delete(this, 0x160uLL);
};

// Line 19: range 0000000015D42DE4-0000000015D42E47
void __cdecl BounceConjuringMultistagePlay::BounceConjuringMultistagePlay(
        BounceConjuringMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx

  SceneMultistagePlay::SceneMultistagePlay(this, scene, group, play_index);
  v4 = (int (**)(...))(&`vtable for'BounceConjuringMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
};

// Line 21: range 0000000015D42E48-0000000015D42E56
proto::MultistagePlayType __cdecl BounceConjuringMultistagePlay::getPlayType(
        const BounceConjuringMultistagePlay *const this)
{
  return 4;
};

// Line 23: range 0000000015D42E58-0000000015D42E6A
int32_t __cdecl BounceConjuringMultistagePlay::initByParamTable(
        BounceConjuringMultistagePlay *const this,
        const luabind::adl::object *param_table)
{
  return 0;
};

// Line 24: range 0000000015D42E6C-0000000015D42E76
void __cdecl BounceConjuringMultistagePlay::regValueSetters(BounceConjuringMultistagePlay *const this)
{
  ;
};

// Line 25: range 0000000015D42E78-0000000015D42E87
void __cdecl BounceConjuringMultistagePlay::onStageEnd(BounceConjuringMultistagePlay *const this, bool is_succ)
{
  ;
};

// Line 26: range 0000000015D42E88-0000000015D42E97
void __cdecl BounceConjuringMultistagePlay::onEnd(BounceConjuringMultistagePlay *const this, bool is_succ)
{
  ;
};
