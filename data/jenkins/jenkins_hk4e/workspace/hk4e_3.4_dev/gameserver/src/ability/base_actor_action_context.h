// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/ability/base_actor_action_context.h

// Line 20: range 0000000013C41316-0000000013C41387
void __cdecl BaseActorActionContext::BaseActorActionContext(BaseActorActionContext *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseActorActionContext + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActorActionContext = v1;
  std::vector<std::shared_ptr<BaseAbilityMixin>>::vector(&this->mixin_vec_);
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::vector(&this->attached_resistance_buff_debuff_vec_);
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::vector(&this->element_type_resistance_vec_);
};

// Line 20: range 0000000013C41388-0000000013C413F9
void __cdecl BaseActorActionContext::~BaseActorActionContext(BaseActorActionContext *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'BaseActorActionContext + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_BaseActorActionContext = v1;
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::AttachElementTypeResistance>>>::~vector(&this->element_type_resistance_vec_);
  std::vector<std::pair<std::weak_ptr<Creature>,std::shared_ptr<data::ConfigBuffDebuffResistance>>>::~vector(&this->attached_resistance_buff_debuff_vec_);
  std::vector<std::shared_ptr<BaseAbilityMixin>>::~vector(&this->mixin_vec_);
};

// Line 24: range 0000000013842C02-0000000013842C13
std::vector<std::shared_ptr<BaseAbilityMixin>> *__cdecl BaseActorActionContext::getMixinVec(
        BaseActorActionContext *const this)
{
  return &this->mixin_vec_;
};
