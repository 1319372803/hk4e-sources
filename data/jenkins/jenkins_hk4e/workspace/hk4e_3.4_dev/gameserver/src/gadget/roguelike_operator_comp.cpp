// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/roguelike_operator_comp.cpp

// Line 23: range 0000000015CBF0FE-0000000015CBF3D6
void __cdecl RoguelikeOperatorComp::RoguelikeOperatorComp(
        RoguelikeOperatorComp *const this,
        Gadget *gadget,
        const RoguelikeOperatorParam *param)
{
  int (**v3)(...); // rdx
  uint32_t cell_config_id; // ecx
  uint32_t cell_id; // ecx
  uint32_t cell_type; // ecx
  uint32_t cell_state; // ecx
  uint32_t owner_uid; // ecx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'RoguelikeOperatorComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  cell_config_id = param->cell_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cell_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cell_config_id_);
  }
  this->cell_config_id_ = cell_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->cell_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->cell_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  cell_id = param->cell_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cell_id_);
  }
  this->cell_id_ = cell_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->cell_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->cell_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  cell_type = param->cell_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cell_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cell_type_);
  }
  this->cell_type_ = cell_type;
  if ( *(_BYTE *)(((unsigned __int64)&param->cell_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->cell_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  cell_state = param->cell_state;
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cell_state_);
  }
  this->cell_state_ = cell_state;
  if ( *(_BYTE *)(((unsigned __int64)&param->owner_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->owner_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  owner_uid = param->owner_uid;
  if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->owner_uid_);
  }
  this->owner_uid_ = owner_uid;
};

// Line 28: range 0000000015CBF3D8-0000000015CBF89E
int32_t __cdecl RoguelikeOperatorComp::toClient(
        const RoguelikeOperatorComp *const this,
        proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  Player *v6; // rax
  RoguelikeDungeonActivity *v7; // rax
  int32_t result; // eax
  unsigned int cell_state; // [rsp+14h] [rbp-CCh]
  proto::RoguelikeGadgetInfo *roguelike_info; // [rsp+18h] [rbp-C8h]
  RogueLikeDungeonRuntimeMgr *runtime_mgr; // [rsp+20h] [rbp-C0h]
  RogueCell *cell_ptr; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 12 scene_ptr:33 64 16 19 owner_player_ptr:37 96 16 21 rogue_activity_ptr:40";
  *(_QWORD *)(v2 + 16) = RoguelikeOperatorComp::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  roguelike_info = proto::SceneGadgetInfo::mutable_roguelike_gadget_info(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cell_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::RoguelikeGadgetInfo::set_cell_config_id(roguelike_info, this->cell_config_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::RoguelikeGadgetInfo::set_cell_id(roguelike_info, this->cell_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cell_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::RoguelikeGadgetInfo::set_cell_type(roguelike_info, this->cell_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cell_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_state_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  cell_state = this->cell_state_;
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    v5 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->owner_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 64), v5);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
    {
      v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Player::getActivityComp(v6);
      PlayerActivityComp::findOpenningActivity<RoguelikeDungeonActivity>((PlayerActivityComp *const)(v2 + 96));
      if ( std::operator!=<RoguelikeDungeonActivity>((const std::shared_ptr<RoguelikeDungeonActivity> *)(v2 + 96), 0LL) )
      {
        v7 = std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RoguelikeDungeonActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        runtime_mgr = RoguelikeDungeonActivity::getRogueDungeonRuntimeMgr(v7);
        if ( *(_BYTE *)(((unsigned __int64)&this->cell_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cell_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        cell_ptr = RogueLikeDungeonRuntimeMgr::findCell(runtime_mgr, this->cell_id_);
        if ( cell_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&cell_ptr->state >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cell_ptr->state >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          cell_state = cell_ptr->state;
        }
      }
      std::shared_ptr<RoguelikeDungeonActivity>::~shared_ptr((std::shared_ptr<RoguelikeDungeonActivity> *const)(v2 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  }
  proto::RoguelikeGadgetInfo::set_cell_state(roguelike_info, cell_state);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = 0;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
