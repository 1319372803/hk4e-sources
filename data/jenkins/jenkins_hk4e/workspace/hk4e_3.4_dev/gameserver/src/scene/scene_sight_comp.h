// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_sight_comp.h

// Line 24: range 0000000015D44494-0000000015D444E1
void __cdecl SceneSightComp::~SceneSightComp(SceneSightComp *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'SceneSightComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SceneCompBase = v2;
  SceneCompBase::~SceneCompBase((SceneCompBase *const)this);
};

// Line 24: range 0000000015D444E2-0000000015D4450C
void __cdecl SceneSightComp::~SceneSightComp(SceneSightComp *const this)
{
  SceneSightComp::~SceneSightComp(this);
  operator delete(this, 0x28uLL);
};

// Line 30: range 00000000136074BC-0000000013607544
void __cdecl ZN14SceneSightCompCI213SceneCompBaseER5Scene(SceneSightComp *const this, Scene *a2)
{
  int (**v2)(...); // rdx

  SceneCompBase::SceneCompBase((SceneCompBase *const)this, a2);
  v2 = (int (**)(...))(&`vtable for'SceneSightComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SceneCompBase = v2;
  Vector2::Vector2(&this->begin_pos_, 0.0, 0.0);
  Vector2::Vector2(&this->scene_size_, 0.0, 0.0);
};

// Line 53: range 0000000015D31A36-0000000015D31A4C
int32_t __cdecl SceneSightComp::fillGridByGm(
        SceneSightComp *const this,
        const Vector2 *pos_begin,
        const Vector2 *pos_end)
{
  return 0;
};

// Line 56: range 0000000015D31A4E-0000000015D31A5F
const Vector2 *__cdecl SceneSightComp::getBeginPos(const SceneSightComp *const this)
{
  return &this->begin_pos_;
};
