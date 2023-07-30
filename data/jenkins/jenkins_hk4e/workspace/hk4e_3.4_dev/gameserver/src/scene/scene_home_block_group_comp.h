// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_home_block_group_comp.h

// Line 21: range 0000000015F45594-0000000015F455E1
void __cdecl SceneHomeBlockGroupComp::~SceneHomeBlockGroupComp(SceneHomeBlockGroupComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneHomeBlockGroupComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  SceneBlockGroupComp::~SceneBlockGroupComp(this);
};

// Line 21: range 0000000015F455E2-0000000015F4560C
void __cdecl SceneHomeBlockGroupComp::~SceneHomeBlockGroupComp(SceneHomeBlockGroupComp *const this)
{
  SceneHomeBlockGroupComp::~SceneHomeBlockGroupComp(this);
  operator delete(this, 0x2A0uLL);
};

// Line 26: range 00000000131E8C90-00000000131E8CED
void __cdecl SceneHomeBlockGroupComp::SceneHomeBlockGroupComp(SceneHomeBlockGroupComp *const this, Scene *scene)
{
  int (**v2)(...); // rdx

  SceneBlockGroupComp::SceneBlockGroupComp(this, scene, 0);
  v2 = (int (**)(...))(&`vtable for'SceneHomeBlockGroupComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_SceneCompBase = v2;
};

// Line 31: range 0000000015D41246-0000000015D41254
void __cdecl SceneHomeBlockGroupComp::onLeaveScene(SceneHomeBlockGroupComp *const this, Player *player)
{
  ;
};
