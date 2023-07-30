// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity_animator_comp.h

// Line 20: range 0000000014839C78-0000000014839CF7
void __cdecl EntityAnimatorComp::~EntityAnimatorComp(EntityAnimatorComp *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'EntityAnimatorComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EntityCompBase = v1;
  std::map<int,proto::AnimatorParameterValueInfoPair>::~map(&this->pose_param_map_);
  proto::EntityRendererChangedInfo::~EntityRendererChangedInfo(&this->renderer_change_info_);
  std::map<int,proto::AnimatorParameterValueInfo>::~map(&this->anim_param_map_);
  EntityCompBase::~EntityCompBase(this);
};

// Line 20: range 0000000014839CF8-0000000014839D22
void __cdecl EntityAnimatorComp::~EntityAnimatorComp(EntityAnimatorComp *const this)
{
  EntityAnimatorComp::~EntityAnimatorComp(this);
  operator delete(this, 0xE8uLL);
};

// Line 26: range 000000001461191E-00000000146119DB
void __cdecl ZN18EntityAnimatorCompCI214EntityCompBaseER6Entity(EntityAnimatorComp *const this, Entity *a2)
{
  int (**v2)(...); // rdx

  EntityCompBase::EntityCompBase(this, a2);
  v2 = (int (**)(...))(&`vtable for'EntityAnimatorComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_EntityCompBase = v2;
  std::map<int,proto::AnimatorParameterValueInfo>::map(&this->anim_param_map_);
  proto::EntityRendererChangedInfo::EntityRendererChangedInfo(&this->renderer_change_info_);
  std::map<int,proto::AnimatorParameterValueInfoPair>::map(&this->pose_param_map_);
};
