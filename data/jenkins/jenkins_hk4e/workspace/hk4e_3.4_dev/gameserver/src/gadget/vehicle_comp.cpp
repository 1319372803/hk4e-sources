// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/vehicle_comp.cpp

// Line 30: range 0000000015CC3AA6-0000000015CC3BAA
void __cdecl GadgetVehicleComp::GadgetVehicleComp(
        GadgetVehicleComp *const this,
        Gadget *gadget,
        PlayerPtr *p_player_ptr)
{
  int (**v3)(...); // rdx

  GadgetCompBase::GadgetCompBase(this, gadget);
  v3 = (int (**)(...))(&`vtable for'GadgetVehicleComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  std::weak_ptr<Player>::weak_ptr<Player,void>(&this->owner_player_wtr, p_player_ptr);
  std::map<unsigned int,VehicleMember>::map(&this->slot_player_map);
  std::string::basic_string(&this->transaction_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_stamina_);
  }
  this->cur_stamina_ = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_cost_stamina_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_cost_stamina_time_ms_);
  this->last_cost_stamina_time_ms_ = 0LL;
};

// Line 35: range 0000000015CC3BAC-0000000015CC3C2C
int32_t __cdecl GadgetVehicleComp::toClient(const GadgetVehicleComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // rax
  proto::VehicleInfo *vehicle_info; // [rsp+18h] [rbp-8h]

  vehicle_info = proto::SceneGadgetInfo::mutable_vehicle_info(gadget_info);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(const GadgetVehicleComp *const, proto::VehicleInfo *))v2)(this, vehicle_info);
};

// Line 41: range 0000000015CC3C2E-0000000015CC3FD2
int32_t __cdecl GadgetVehicleComp::toClient(const GadgetVehicleComp *const this, proto::VehicleInfo *vehicle_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Uid; // edx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember> >::pointer v7; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint64_t Guid; // rax
  int32_t result; // eax
  uint32_t slot; // [rsp+1Ch] [rbp-E4h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  proto::VehicleMember *member_proto; // [rsp+28h] [rbp-D8h]
  char v14[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 7 iter:48 64 16 19 owner_player_ptr:42 96 16 13 player_ptr:50 128 16 13 avatar_ptr:58";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  GadgetVehicleComp::getOwnerPlayer((const GadgetVehicleComp *const)(v2 + 64));
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(v5);
    proto::VehicleInfo::set_owner_uid(vehicle_info, Uid);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::VehicleInfo::set_cur_stamina(vehicle_info, this->cur_stamina_);
  *(std::map<unsigned int,VehicleMember>::const_iterator *)(v2 + 32) = std::map<unsigned int,VehicleMember>::begin(&this->slot_player_map);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,VehicleMember>::end(&this->slot_player_map)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v2 + 32),
            &__y) )
      break;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 32));
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 96));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      slot = v7->first;
      member_proto = proto::VehicleInfo::add_member_list(vehicle_info);
      proto::VehicleMember::set_pos(member_proto, slot);
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Player::getCurAvatar((Player *const)(v2 + 128));
      if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 128)) )
      {
        v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Guid = Avatar::getGuid(v8);
        proto::VehicleMember::set_avatar_guid(member_proto, Guid);
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 128));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember>>::operator++(
      (std::_Rb_tree_const_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 32),
      0);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = 0;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 68: range 0000000015CC3FD4-0000000015CC4181
GadgetVehicleComp *__fastcall GadgetVehicleComp::getPlayerBySlot(GadgetVehicleComp *const this, __int64 slot, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 slot:67 64 8 7 iter:69";
  *(_QWORD *)(v3 + 16) = GadgetVehicleComp::getPlayerBySlot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,VehicleMember>::iterator *)(v3 + 64) = std::map<unsigned int,VehicleMember>::find(
                                                                   (std::map<unsigned int,VehicleMember> *const)(slot + 32),
                                                                   (const std::map<unsigned int,VehicleMember>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,VehicleMember>::end((std::map<unsigned int,VehicleMember> *const)(slot + 32))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)this);
  }
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 78: range 0000000015CC4182-0000000015CC4380
uint32_t __cdecl GadgetVehicleComp::getPlayerSlot(GadgetVehicleComp *const this, PlayerPtr *p_player_ptr)
{
  uint32_t first; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::pointer v6; // rax
  int v7; // r15d
  uint32_t result; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self __y; // [rsp+28h] [rbp-98h] BYREF
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 iter:79 64 16 17 tmp_player_ptr:81";
  *(_QWORD *)(v3 + 16) = GadgetVehicleComp::getPlayerSlot;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(std::map<unsigned int,VehicleMember>::iterator *)(v3 + 32) = std::map<unsigned int,VehicleMember>::begin(&this->slot_player_map);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,VehicleMember>::end(&this->slot_player_map)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v3 + 32),
            &__y) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v3 + 32));
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 64));
    if ( std::operator==<Player,Player>(p_player_ptr, (const std::shared_ptr<Player> *)(v3 + 64)) )
    {
      v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      first = v6->first;
      v7 = 0;
    }
    else
    {
      v7 = 1;
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
    if ( v7 != 1 )
      goto LABEL_14;
    std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator++(
      (std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v3 + 32),
      0);
  }
  first = 0;
LABEL_14:
  result = first;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 91: range 0000000015CC4382-0000000015CC535D
__int64 __fastcall GadgetVehicleComp::enterVehicle(
        GadgetVehicleComp *const this,
        uint32_t slot,
        const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *p_player_ptr,
        __m128i a4)
{
  unsigned __int64 p_transaction; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const Vector3 *Position; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  float EnterVehicleMaxDistance; // xmm0_4
  float v17; // xmm1_4
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  bool v24; // r14
  Player *v25; // rax
  GadgetVehicleComp *v26; // r14
  Player *v27; // rax
  PlayerVehicleComp *VehicleComp; // r14
  Entity *gadget; // r14
  EntityViewMgr *ViewMgr; // rax
  Scene *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t Uid; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  uint64_t Guid; // rax
  Scene *v41; // rax
  Player *v42; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  uint32_t vehicle_type; // r14d
  Player *v47; // rax
  __int64 result; // rax
  unsigned int __args_1; // [rsp+2Ch] [rbp-1E4h] BYREF
  unsigned int val; // [rsp+30h] [rbp-1E0h] BYREF
  uint32_t enter_time; // [rsp+34h] [rbp-1DCh]
  VehicleMember *member; // [rsp+38h] [rbp-1D8h]
  uint64_t scene_time_ms; // [rsp+40h] [rbp-1D0h]
  proto::VehicleMember *member_proto; // [rsp+48h] [rbp-1C8h]
  GadgetVehicleComp v56; // [rsp+50h] [rbp-1C0h] BYREF

  p_transaction = (unsigned __int64)&v56.transaction_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      p_transaction = v5;
  }
  *(_QWORD *)p_transaction = 1102416563LL;
  *(_QWORD *)(p_transaction + 8) = "8 48 4 18 enter_distance:109 64 4 7 slot:90 80 16 12 scene_ptr:96 112 16 14 avatar_pt"
                                   "r:103 144 16 21 config_gadget_ptr:116 176 16 21 other_vehicle_ptr:134 208 16 26 other"
                                   "_vehicle_comp_ptr:137 240 40 7 rsp:163";
  *(_QWORD *)(p_transaction + 16) = GadgetVehicleComp::enterVehicle;
  v6 = (_DWORD *)(p_transaction >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862728] = -218103808;
  v6[536862729] = -202116109;
  *(_DWORD *)(p_transaction + 64) = slot;
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)p_player_ptr) )
  {
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(p_transaction + 80));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(p_transaction + 80)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/vehicle_comp.cpp",
        "enterVehicle",
        99);
      v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
             (common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
             (const char (*)[10])"vehicle: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Entity::getEntityId((const Entity *const)this->gadget_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" not on scene");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent);
      v7 = -1;
    }
    else
    {
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_player_ptr);
      Player::getCurAvatar((Player *const)(p_transaction + 112));
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(p_transaction + 112))
        || (v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 112)),
            Creature::getLifeState(v10) != LIFE_ALIVE) )
      {
        v7 = 102;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Position = Entity::getPosition((const Entity *const)this->gadget_);
        v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 112));
        v14 = Entity::getPosition((const Entity *const)v13);
        *(float *)a4.m128i_i32 = getDistance(v14, Position);
        *(_DWORD *)(p_transaction + 48) = _mm_cvtsi128_si32(a4);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(p_transaction + 208));
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 208));
        EnterVehicleMaxDistance = ConstValueExcelConfigMgr::getEnterVehicleMaxDistance(&v15->design_config.txt_config_mgr.const_value_config_mgr);
        v17 = *(float *)(p_transaction + 48);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_transaction + 208));
        if ( v17 <= EnterVehicleMaxDistance )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Gadget::getJsonConfig((const Gadget *const)(p_transaction + 144));
          if ( std::operator==<data::ConfigGadget>(
                 0LL,
                 (const std::shared_ptr<data::ConfigGadget> *)(p_transaction + 144)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/vehicle_comp.cpp",
              "enterVehicle",
              119);
            v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                    (common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
                    (const char (*)[9])"gadget: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Entity::getEntityId((const Entity *const)this->gadget_);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v20,
              (const char (*)[18])" config not found");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent);
            v7 = -1;
          }
          else if ( *(_DWORD *)(p_transaction + 64) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/vehicle_comp.cpp",
              "enterVehicle",
              125);
            v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                    (common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
                    (const char (*)[9])"gadget: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Entity::getEntityId((const Entity *const)this->gadget_);
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            v23 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v22, (const char (*)[7])" slot:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v23,
              (const unsigned int *)(p_transaction + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent);
            v7 = -1;
          }
          else
          {
            GadgetVehicleComp::getPlayerBySlot(&v56, (__int64)this, *(_DWORD *)(p_transaction + 64));
            v24 = std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)&v56);
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v56);
            if ( v24 )
            {
              v7 = 824;
            }
            else
            {
              v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_player_ptr);
              Player::getVehicleComp(v25);
              PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(p_transaction + 176));
              if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(p_transaction + 176)) )
              {
                std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 176));
                EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(p_transaction + 208));
                if ( std::operator!=<GadgetVehicleComp>(
                       0LL,
                       (const std::shared_ptr<GadgetVehicleComp> *)(p_transaction + 208)) )
                {
                  v26 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 208));
                  std::shared_ptr<Player>::shared_ptr(
                    (std::shared_ptr<Player> *const)&v56,
                    (const std::shared_ptr<Player> *)p_player_ptr);
                  GadgetVehicleComp::exitVehicle(v26, (PlayerPtr *)&v56);
                  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v56);
                }
                std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(p_transaction + 208));
              }
              member = std::map<unsigned int,VehicleMember>::operator[](
                         &this->slot_player_map,
                         (const std::map<unsigned int,VehicleMember>::key_type *)(p_transaction + 64));
              std::weak_ptr<Player>::operator=<Player>(
                &member->player_wtr,
                (const std::shared_ptr<Player> *)p_player_ptr);
              enter_time = common::tools::TimeUtils::getNow();
              if ( *(_BYTE *)(((unsigned __int64)&member->enter_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&member->enter_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&member->enter_time);
              }
              member->enter_time = enter_time;
              v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_player_ptr);
              VehicleComp = Player::getVehicleComp(v27);
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              toPtr<Gadget,Gadget>((Gadget *)&v56);
              PlayerVehicleComp::onPlayerEnterVehicle(VehicleComp, (GadgetPtr *)&v56);
              std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v56);
              if ( !*(_DWORD *)(p_transaction + 64) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                gadget = (Entity *)this->gadget_;
                ViewMgr = Entity::getViewMgr(gadget);
                EntityViewMgr::validateAndGetViewingPlayers(
                  (std::vector<std::shared_ptr<Player>> *)&v56.owner_player_wtr,
                  ViewMgr);
                std::shared_ptr<Player>::shared_ptr(
                  (std::shared_ptr<Player> *const)&v56,
                  (const std::shared_ptr<Player> *)p_player_ptr);
                Creature::onAuthorityChangedToPlayer(
                  (Creature *const)gadget,
                  (PlayerPtr *)&v56,
                  (const std::vector<std::shared_ptr<Player>> *)&v56.owner_player_wtr,
                  0);
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v56);
                std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)&v56.owner_player_wtr);
                v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 80));
                scene_time_ms = Scene::getSceneTimeMs(v31);
                if ( *(_BYTE *)(((unsigned __int64)&this->last_cost_stamina_time_ms_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                if ( scene_time_ms > this->last_cost_stamina_time_ms_ )
                  GadgetVehicleComp::procVehicleStamina(this, scene_time_ms - this->last_cost_stamina_time_ms_, 1, 0);
                GadgetVehicleComp::notifyStamina(this);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/vehicle_comp.cpp",
                "enterVehicle",
                160);
              v32 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                      (common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
                      (const char (*)[5])"uid:");
              v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_player_ptr);
              __args_1 = Player::getUid(v33);
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &__args_1);
              v35 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v34,
                      (const char (*)[18])" enter gadget_id:");
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Entity::getEntityId((const Entity *const)this->gadget_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent);
              proto::VehicleInteractRsp::VehicleInteractRsp((proto::VehicleInteractRsp *const)(p_transaction + 240));
              proto::VehicleInteractRsp::set_retcode((proto::VehicleInteractRsp *const)(p_transaction + 240), 0);
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
              proto::VehicleInteractRsp::set_entity_id(
                (proto::VehicleInteractRsp *const)(p_transaction + 240),
                EntityId);
              proto::VehicleInteractRsp::set_interact_type(
                (proto::VehicleInteractRsp *const)(p_transaction + 240),
                VEHICLE_INTERACT_IN);
              member_proto = proto::VehicleInteractRsp::mutable_member((proto::VehicleInteractRsp *const)(p_transaction + 240));
              proto::VehicleMember::set_pos(member_proto, *(_DWORD *)(p_transaction + 64));
              v37 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_player_ptr);
              Uid = Player::getUid(v37);
              proto::VehicleMember::set_uid(member_proto, Uid);
              v39 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 112));
              Guid = Avatar::getGuid(v39);
              proto::VehicleMember::set_avatar_guid(member_proto, Guid);
              v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 80));
              Scene::notifyAllPlayer<proto::VehicleInteractRsp>(
                v41,
                (proto::VehicleInteractRsp *)(p_transaction + 240),
                0);
              v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_player_ptr);
              EventComp = Player::getEventComp(v42);
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Gadget::getGadgetId(this->gadget_);
              v44 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 144));
              if ( *(_BYTE *)(((unsigned __int64)&v44->vehicle >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v44->vehicle >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              __args_1 = v44->vehicle.vehicle_type;
              common::tools::perf::make_shared<EnterVehicleEvent,unsigned int,unsigned int>(
                (unsigned int *)(p_transaction + 208),
                &__args_1,
                &val,
                &__args_1);
              std::shared_ptr<BaseEvent>::shared_ptr<EnterVehicleEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&v56,
                (std::shared_ptr<EnterVehicleEvent> *)(p_transaction + 208));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v56);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v56);
              std::shared_ptr<EnterVehicleEvent>::~shared_ptr((std::shared_ptr<EnterVehicleEvent> *const)(p_transaction + 208));
              v45 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_transaction + 144));
              if ( *(_BYTE *)(((unsigned __int64)&v45->vehicle >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v45->vehicle >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              vehicle_type = v45->vehicle.vehicle_type;
              std::shared_ptr<Player>::shared_ptr(
                (std::shared_ptr<Player> *const)&v56,
                (const std::shared_ptr<Player> *)p_player_ptr);
              GadgetVehicleComp::triggerVehicleFriends(this, (PlayerPtr *)&v56, vehicle_type);
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v56);
              v47 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*(p_player_ptr);
              GadgetVehicleComp::logEnterVehicle(this, v47, enter_time);
              v7 = 0;
              proto::VehicleInteractRsp::~VehicleInteractRsp((proto::VehicleInteractRsp *const)(p_transaction + 240));
              std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(p_transaction + 176));
            }
          }
          std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(p_transaction + 144));
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/vehicle_comp.cpp",
            "enterVehicle",
            112);
          v18 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  (common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent,
                  (const char (*)[36])"enter vehicle failed, max_distance:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(p_transaction + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v56.slot_player_map._M_t._M_impl._M_header._M_parent);
          v7 = -1;
        }
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(p_transaction + 112));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(p_transaction + 80));
  }
  result = v7;
  if ( &v56.transaction_ == (std::string *)p_transaction )
  {
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)p_transaction = 1172321806LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_transaction >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 184: range 0000000015CC535E-0000000015CC56C8
void __cdecl GadgetVehicleComp::triggerVehicleFriends(
        GadgetVehicleComp *const this,
        PlayerPtr *p_player_ptr,
        uint32_t vehicle_type)
{
  unsigned __int64 p_owner_player_wtr; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Player *v7; // rax
  char v8; // r15
  bool v9; // r14
  Player *v10; // rax
  PlayerWatcherComp *WatcherComp; // rax
  Player *v12; // rax
  PlayerWatcherComp *v13; // rax
  GadgetVehicleComp v15; // [rsp+20h] [rbp-C0h] BYREF

  p_owner_player_wtr = (unsigned __int64)&v15.owner_player_wtr;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      p_owner_player_wtr = v4;
  }
  *(_QWORD *)p_owner_player_wtr = 1102416563LL;
  *(_QWORD *)(p_owner_player_wtr + 8) = "3 32 16 13 owner_ptr:190 64 16 24 owner_cur_gadget_ptr:195 96 16 25 owner_cur_vehicle_ptr:200";
  *(_QWORD *)(p_owner_player_wtr + 16) = GadgetVehicleComp::triggerVehicleFriends;
  v5 = (_DWORD *)(p_owner_player_wtr >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( !std::operator==<Player>(0LL, p_player_ptr) )
  {
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(p_owner_player_wtr + 32));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(p_owner_player_wtr + 32))
      && !std::operator==<Player,Player>(p_player_ptr, (const std::shared_ptr<Player> *)(p_owner_player_wtr + 32)) )
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_owner_player_wtr + 32));
      Player::getVehicleComp(v7);
      PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(p_owner_player_wtr + 64));
      if ( !std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(p_owner_player_wtr + 64)) )
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_owner_player_wtr + 64));
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(p_owner_player_wtr + 96));
        v8 = 0;
        v9 = 1;
        if ( !std::operator==<GadgetVehicleComp>(
                0LL,
                (const std::shared_ptr<GadgetVehicleComp> *)(p_owner_player_wtr + 96)) )
        {
          std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_owner_player_wtr + 96));
          GadgetVehicleComp::getOwnerPlayer(&v15);
          v8 = 1;
          if ( !std::operator!=<Player,Player>(p_player_ptr, (const std::shared_ptr<Player> *)&v15) )
            v9 = 0;
        }
        if ( v8 )
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v15);
        if ( !v9 )
        {
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          WatcherComp = Player::getWatcherComp(v10);
          PlayerWatcherComp::triggerVehicleFriends(WatcherComp, vehicle_type);
          v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_owner_player_wtr + 32));
          v13 = Player::getWatcherComp(v12);
          PlayerWatcherComp::triggerVehicleFriends(v13, vehicle_type);
        }
        std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(p_owner_player_wtr
                                                                                                  + 96));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(p_owner_player_wtr + 64));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(p_owner_player_wtr + 32));
  }
  if ( &v15.owner_player_wtr == (PlayerWtr *)p_owner_player_wtr )
  {
    *(_QWORD *)((p_owner_player_wtr >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_owner_player_wtr >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)p_owner_player_wtr = 1172321806LL;
    *(_QWORD *)((p_owner_player_wtr >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_owner_player_wtr >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 210: range 0000000015CC56CA-0000000015CC6223
int32_t __cdecl GadgetVehicleComp::exitVehicle(GadgetVehicleComp *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::pointer v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  Player *v18; // rax
  PlayerVehicleComp *VehicleComp; // r14
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint64_t Guid; // rax
  Scene *v25; // rax
  uint32_t v26; // eax
  Player *v27; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Player *v30; // rcx
  int32_t result; // eax
  bool in_vehicle; // [rsp+13h] [rbp-1BDh]
  unsigned int val; // [rsp+14h] [rbp-1BCh] BYREF
  uint32_t slot; // [rsp+18h] [rbp-1B8h]
  uint32_t enter_time; // [rsp+1Ch] [rbp-1B4h]
  uint32_t uid; // [rsp+20h] [rbp-1B0h]
  uint32_t now; // [rsp+24h] [rbp-1ACh]
  proto::VehicleMember *member_proto; // [rsp+28h] [rbp-1A8h]
  std::shared_ptr<ExitVehicleEvent> __r; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v40; // [rsp+40h] [rbp-190h] BYREF
  char v41[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 12 duration:262 48 8 8 iter:219 80 8 12 tmp_iter:221 112 16 13 scene_ptr:240 144 16 14 av"
                        "atar_ptr:253 176 16 21 config_gadget_ptr:263 208 16 18 tmp_player_ptr:222 240 40 7 rsp:246";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::exitVehicle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  if ( std::operator==<Player>(0LL, p_player_ptr) )
  {
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    uid = Player::getUid(v6);
    slot = 0;
    enter_time = 0;
    in_vehicle = 0;
    *(std::map<unsigned int,VehicleMember>::iterator *)(v2 + 48) = std::map<unsigned int,VehicleMember>::begin(&this->slot_player_map);
    while ( 1 )
    {
      *(std::map<unsigned int,VehicleMember>::iterator *)(v2 + 80) = std::map<unsigned int,VehicleMember>::end(&this->slot_player_map);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v2 + 48),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v2 + 80)) )
        break;
      *(std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v2 + 80) = std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator++(
                                                                                                    (std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 48),
                                                                                                    0);
      std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 80));
      std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 208));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 208))
        || std::operator==<Player,Player>(p_player_ptr, (const std::shared_ptr<Player> *)(v2 + 208)) )
      {
        v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        slot = v8->first;
        v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v9->second.enter_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v9->second.enter_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        enter_time = v9->second.enter_time;
        std::map<unsigned int,VehicleMember>::erase[abi:cxx11](
          &this->slot_player_map,
          *(std::map<unsigned int,VehicleMember>::iterator *)(v2 + 80));
        in_vehicle = 1;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 208));
    }
    if ( !in_vehicle )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/vehicle_comp.cpp",
        "exitVehicle",
        233);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v40, (const char (*)[5])"uid:");
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      *(_DWORD *)(v2 + 32) = Player::getUid(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v12,
              (const char (*)[33])" want exit but not in gadget_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Entity::getEntityId((const Entity *const)this->gadget_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v5 = 825;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/vehicle_comp.cpp",
        "exitVehicle",
        236);
      v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v40, (const char (*)[5])"uid:");
      v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      *(_DWORD *)(v2 + 32) = Player::getUid(v15);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])" exit gadget_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Entity::getEntityId((const Entity *const)this->gadget_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
      VehicleComp = Player::getVehicleComp(v18);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toPtr<Gadget,Gadget>((Gadget *)(v2 + 208));
      PlayerVehicleComp::onPlayerExitVehicle(VehicleComp, (GadgetPtr *)(v2 + 208));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 208));
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v2 + 112));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/vehicle_comp.cpp",
          "exitVehicle",
          243);
        v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v40, (const char (*)[10])"vehicle: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Entity::getEntityId((const Entity *const)this->gadget_);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])" not on scene");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v5 = -1;
      }
      else
      {
        proto::VehicleInteractRsp::VehicleInteractRsp((proto::VehicleInteractRsp *const)(v2 + 240));
        proto::VehicleInteractRsp::set_retcode((proto::VehicleInteractRsp *const)(v2 + 240), 0);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
        proto::VehicleInteractRsp::set_entity_id((proto::VehicleInteractRsp *const)(v2 + 240), EntityId);
        proto::VehicleInteractRsp::set_interact_type((proto::VehicleInteractRsp *const)(v2 + 240), VEHICLE_INTERACT_OUT);
        member_proto = proto::VehicleInteractRsp::mutable_member((proto::VehicleInteractRsp *const)(v2 + 240));
        proto::VehicleMember::set_pos(member_proto, slot);
        proto::VehicleMember::set_uid(member_proto, uid);
        std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        Player::getCurAvatar((Player *const)(v2 + 144));
        if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 144)) )
        {
          v23 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
          Guid = Avatar::getGuid(v23);
          proto::VehicleMember::set_avatar_guid(member_proto, Guid);
        }
        v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
        Scene::notifyAllPlayer<proto::VehicleInteractRsp>(v25, (proto::VehicleInteractRsp *)(v2 + 240), 0);
        now = common::tools::TimeUtils::getNow();
        if ( now < enter_time )
          v26 = 0;
        else
          v26 = now - enter_time;
        *(_DWORD *)(v2 + 32) = v26;
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Gadget::getJsonConfig((const Gadget *const)(v2 + 176));
        if ( std::operator!=<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 176)) )
        {
          v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
          EventComp = Player::getEventComp(v27);
          v29 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176));
          if ( *(_BYTE *)(((unsigned __int64)&v29->vehicle >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v29->vehicle >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          val = v29->vehicle.vehicle_type;
          common::tools::perf::make_shared<ExitVehicleEvent,unsigned int,unsigned int &>(
            (unsigned int *)&__r,
            &val,
            (unsigned int *)(v2 + 32),
            &val);
          std::shared_ptr<BaseEvent>::shared_ptr<ExitVehicleEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v2 + 208),
            &__r);
          PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 208));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 208));
          std::shared_ptr<ExitVehicleEvent>::~shared_ptr(&__r);
        }
        v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
        GadgetVehicleComp::logExitVehicle(this, v30, enter_time);
        v5 = 0;
        std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 176));
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 144));
        proto::VehicleInteractRsp::~VehicleInteractRsp((proto::VehicleInteractRsp *const)(v2 + 240));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
    }
  }
  result = v5;
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 276: range 0000000015CC6224-0000000015CC62F0
int32_t __cdecl GadgetVehicleComp::onAfterEnterScene(
        GadgetVehicleComp *const this,
        Scene *scene,
        const VisionContext *a3)
{
  std::weak_ptr<Player> v4; // [rsp+20h] [rbp-30h] BYREF
  GadgetPtr p_gadget_ptr; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Gadget,Gadget>((Gadget *)&p_gadget_ptr);
  std::weak_ptr<Player>::lock(&v4);
  Scene::onVehicleEnterScene(scene, (PlayerPtr *)&v4, &p_gadget_ptr);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&v4);
  std::shared_ptr<Gadget>::~shared_ptr(&p_gadget_ptr);
  return 0;
};

// Line 282: range 0000000015CC62F2-0000000015CC64E2
int32_t __cdecl GadgetVehicleComp::start(GadgetVehicleComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  Gadget *Gadget; // rax
  int32_t v6; // r14d
  Scene *v7; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:283";
  *(_QWORD *)(v1 + 16) = GadgetVehicleComp::start;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/vehicle_comp.cpp",
      "start",
      286);
    v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v10,
           (const char (*)[35])"vehicle is not on scene entity_id:");
    Gadget = GadgetCompBase::getGadget(this);
    val = Entity::getEntityId((const Entity *const)Gadget);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    GadgetVehicleComp::refreshProp(this, v7);
    v6 = 0;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = v6;
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 294: range 0000000015CC64E4-0000000015CC6890
void __cdecl GadgetVehicleComp::refreshProp(GadgetVehicleComp *const this, Scene *scene)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t world_level; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 new_level:307 64 16 21 config_gadget_ptr:296 96 16 14 player_ptr:301";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::refreshProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::getJsonConfig((const Gadget *const)(v2 + 64));
  if ( !std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 64)) )
  {
    Scene::getOwnPlayer((const Scene *const)(v2 + 96));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BasicComp = Player::getBasicComp(v5);
      world_level = PlayerBasicComp::getWorldLevel(BasicComp);
      v7 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->vehicle.default_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->vehicle.default_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = PlayerWorld::getAdjustedLevel(world_level, v7->vehicle.default_level);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Creature::setLevel(this->gadget_, *(_DWORD *)(v2 + 48));
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/vehicle_comp.cpp",
        "refreshProp",
        309);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v14,
             (const char (*)[23])"vehicle_gadget level: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" scene_host:");
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      val = Player::getUid(v11);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Creature::calcProp(this->gadget_);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
  if ( v15 == (char *)v2 )
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
};

// Line 314: range 0000000015CC6892-0000000015CC7015
void __cdecl GadgetVehicleComp::onBeforeLeaveScene(GadgetVehicleComp *const this, const VisionContext *a2)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::shared_ptr<Player> *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int val; // [rsp+14h] [rbp-1ECh] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+18h] [rbp-1E8h] BYREF
  proto::VehicleMember *member_proto; // [rsp+20h] [rbp-1E0h]
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+28h] [rbp-1D8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-1D0h] BYREF
  char v18[432]; // [rsp+50h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 8 iter:333 64 16 13 scene_ptr:319 96 16 14 player_ptr:343 128 16 14 player_ptr:335 160 24"
                        " 14 player_vec:332 224 40 7 rsp:326 304 48 11 uid_set:331";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::onBeforeLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  if ( !std::map<unsigned int,VehicleMember>::empty(&this->slot_player_map) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      std::map<unsigned int,VehicleMember>::clear(&this->slot_player_map);
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/vehicle_comp.cpp",
        "onBeforeLeaveScene",
        323);
      v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"gadget_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Entity::getEntityId((const Entity *const)this->gadget_);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])" die without scene");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      proto::VehicleInteractRsp::VehicleInteractRsp((proto::VehicleInteractRsp *const)(v2 + 224));
      proto::VehicleInteractRsp::set_retcode((proto::VehicleInteractRsp *const)(v2 + 224), 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
      proto::VehicleInteractRsp::set_entity_id((proto::VehicleInteractRsp *const)(v2 + 224), EntityId);
      proto::VehicleInteractRsp::set_interact_type((proto::VehicleInteractRsp *const)(v2 + 224), VEHICLE_INTERACT_OUT);
      member_proto = proto::VehicleInteractRsp::mutable_member((proto::VehicleInteractRsp *const)(v2 + 224));
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 304));
      std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 160));
      *(std::map<unsigned int,VehicleMember>::iterator *)(v2 + 32) = std::map<unsigned int,VehicleMember>::begin(&this->slot_player_map);
      while ( 1 )
      {
        __for_end._M_current = (std::shared_ptr<Player> *)std::map<unsigned int,VehicleMember>::end(&this->slot_player_map)._M_node;
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v2 + 32),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)&__for_end) )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 32));
        std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 128));
        if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
        {
          v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          val = Player::getUid(v8);
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 304), &val);
          std::vector<std::shared_ptr<Player>>::push_back(
            (std::vector<std::shared_ptr<Player>> *const)(v2 + 160),
            (const std::vector<std::shared_ptr<Player>>::value_type *)(v2 + 128));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
        std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator++(
          (std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 32),
          0);
      }
      __for_range = (std::vector<std::shared_ptr<Player>> *)(v2 + 160);
      *(std::vector<std::shared_ptr<Player>>::iterator *)(v2 + 32) = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 160));
      __for_end._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v2 + 32),
                &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 32));
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 96), v9);
        std::shared_ptr<Player>::shared_ptr(
          (std::shared_ptr<Player> *const)(v2 + 128),
          (const std::shared_ptr<Player> *)(v2 + 96));
        GadgetVehicleComp::exitVehicle(this, (PlayerPtr *)(v2 + 128));
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
        __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)(v2 + 32));
      }
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/vehicle_comp.cpp",
        "onBeforeLeaveScene",
        347);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"gadget_id:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Entity::getEntityId((const Entity *const)this->gadget_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v11,
              (const char (*)[23])" onDie remove uid_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::set<unsigned int> *)(v2 + 304));
      common::milog::MiLogStream::~MiLogStream(&v17);
      std::map<unsigned int,VehicleMember>::clear(&this->slot_player_map);
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 160));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 304));
      proto::VehicleInteractRsp::~VehicleInteractRsp((proto::VehicleInteractRsp *const)(v2 + 224));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 352: range 0000000015CC7016-0000000015CC7367
int32_t __cdecl GadgetVehicleComp::foreachPlayer(
        GadgetVehicleComp *const this,
        std::function<ForeachPolicy(Player&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<std::weak_ptr<Player>>::size_type v6; // rax
  int v7; // r14d
  Player *v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,VehicleMember>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,VehicleMember>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,VehicleMember> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<std::weak_ptr<Player>> *__for_range_0; // [rsp+38h] [rbp-D8h]
  std::weak_ptr<Player> *player_wtr; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,VehicleMember> *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,VehicleMember> >::type *slot_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,VehicleMember> >::type *member; // [rsp+58h] [rbp-B8h]
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 player_ptr:362 64 24 14 player_vec:354";
  *(_QWORD *)(v3 + 16) = GadgetVehicleComp::foreachPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<Player>>::vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  v6 = std::map<unsigned int,VehicleMember>::size(&this->slot_player_map);
  std::vector<std::weak_ptr<Player>>::reserve((std::vector<std::weak_ptr<Player>> *const)(v3 + 64), v6);
  __for_range = &this->slot_player_map;
  __for_begin._M_node = std::map<unsigned int,VehicleMember>::begin(&this->slot_player_map)._M_node;
  __for_end._M_node = std::map<unsigned int,VehicleMember>::end(&this->slot_player_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator*(&__for_begin);
    slot_id = std::get<0ul,unsigned int const,VehicleMember>(__in);
    member = std::get<1ul,unsigned int const,VehicleMember>(__in);
    std::vector<std::weak_ptr<Player>>::emplace_back<std::weak_ptr<Player>&>(
      (std::vector<std::weak_ptr<Player>> *const)(v3 + 64),
      &member->player_wtr,
      &member->player_wtr);
    std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Player>> *)(v3 + 64);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Base_ptr)std::vector<std::weak_ptr<Player>>::begin((std::vector<std::weak_ptr<Player>> *const)(v3 + 64))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Base_ptr)std::vector<std::weak_ptr<Player>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_end) )
  {
    player_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(Player &)>::operator()(p_func, v8) )
      {
        v2 = 1;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    if ( v7 && v7 != 2 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_18:
  std::vector<std::weak_ptr<Player>>::~vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  result = v2;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 376: range 0000000015CC7368-0000000015CC77EE
void __cdecl GadgetVehicleComp::onDie(GadgetVehicleComp *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t v8; // r14d
  std::__shared_ptr_access<VehicleKilledEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  uint32_t *p_attacker_type; // rax
  Player *v11; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int __args_0; // [rsp+18h] [rbp-D8h] BYREF
  uint32_t attacker_type; // [rsp+1Ch] [rbp-D4h]
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 14 player_ptr:377 64 16 21 config_gadget_ptr:382 96 16 13 event_ptr:396 128 16 16 creature_ptr:390";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::onDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  GadgetVehicleComp::getOwnerPlayer((const GadgetVehicleComp *const)(v2 + 32));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::getJsonConfig((const Gadget *const)(v2 + 64));
    if ( !std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 64)) )
    {
      attacker_type = 0;
      if ( std::operator!=<Creature>(0LL, &context->attacker_ptr) )
      {
        std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
        Creature::findTopOwnerOrSelf((Creature *const)(v2 + 128));
        if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 128)) )
        {
          v5 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
            v5 = __asan_report_load8();
          v6 = *(_QWORD *)v5 + 24LL;
          if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            v5 = __asan_report_load8();
          attacker_type = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
        }
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 128));
      }
      v7 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->vehicle >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->vehicle >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      __args_0 = v7->vehicle.vehicle_type;
      common::tools::perf::make_shared<VehicleKilledEvent,unsigned int>((unsigned int *)(v2 + 96), &__args_0);
      v8 = attacker_type;
      v9 = std::__shared_ptr_access<VehicleKilledEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VehicleKilledEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_attacker_type = &v9->attacker_type;
      if ( *(_BYTE *)(((unsigned __int64)p_attacker_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_attacker_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_attacker_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_store4(p_attacker_type);
      }
      v9->attacker_type = v8;
      v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EventComp = Player::getEventComp(v11);
      std::shared_ptr<BaseEvent>::shared_ptr<VehicleKilledEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v2 + 128),
        (const std::shared_ptr<VehicleKilledEvent> *)(v2 + 96));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 128));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      GadgetVehicleComp::logDestoryVehicle(this, context->reason);
      std::shared_ptr<VehicleKilledEvent>::~shared_ptr((std::shared_ptr<VehicleKilledEvent> *const)(v2 + 96));
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 403: range 0000000015CC77F0-0000000015CC79F6
void __cdecl GadgetVehicleComp::getInVehicleUidVec(GadgetVehicleComp *const this, std::vector<unsigned int> *uid_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::vector<unsigned int>::value_type __x; // [rsp+14h] [rbp-9Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:405 64 16 14 player_ptr:407";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::getInVehicleUidVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::vector<unsigned int>::clear(uid_vec);
  *(std::map<unsigned int,VehicleMember>::iterator *)(v2 + 32) = std::map<unsigned int,VehicleMember>::begin(&this->slot_player_map);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,VehicleMember>::end(&this->slot_player_map)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> >::_Self *)(v2 + 32),
            &__y) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 32));
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v2 + 64));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      __x = Player::getUid(v5);
      std::vector<unsigned int>::push_back(uid_vec, &__x);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
    std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember>>::operator++(
      (std::_Rb_tree_iterator<std::pair<unsigned int const,VehicleMember> > *const)(v2 + 32),
      0);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 418: range 0000000015CC79F8-0000000015CC7BB9
int32_t __cdecl GadgetVehicleComp::initByConfig(GadgetVehicleComp *const this, const GadgetParam *gadget_param)
{
  __m128i v2; // xmm0
  Player *v4; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t reason_extra; // edx
  float v7; // edx
  std::string __lhs; // [rsp+10h] [rbp-50h] BYREF
  std::string v9; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Player>(0LL, &gadget_param->player_ptr) )
    return 0;
  v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)&gadget_param->player_ptr);
  BasicComp = Player::getBasicComp(v4);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&__lhs, BasicComp);
  std::operator+<char>(&v9, &__lhs, "_Vehicle");
  std::string::operator=(&this->transaction_, &v9);
  std::string::~string(&v9);
  std::string::~string(&__lhs);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->reason_extra >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->reason_extra >> 3)
                                                                + 0x7FFF8000) )
  {
    *(double *)v2.m128i_i64 = __asan_report_load4();
  }
  reason_extra = gadget_param->reason_extra;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->reason >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_param->reason >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)v2.m128i_i64 = __asan_report_load4();
  }
  GadgetVehicleComp::logCreateVehicle(this, gadget_param->reason, reason_extra, &gadget_param->pos);
  *(float *)v2.m128i_i32 = GadgetVehicleComp::getMaxStamina(this);
  v7 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_stamina_);
  }
  this->cur_stamina_ = v7;
  return 0;
};

// Line 430: range 0000000015CC7BBA-0000000015CC7C06
bool __cdecl GadgetVehicleComp::canChangeAuthority(GadgetVehicleComp *const this)
{
  bool v1; // bl
  std::shared_ptr<Player> __a; // [rsp+10h] [rbp-20h] BYREF

  GadgetVehicleComp::getPlayerBySlot((GadgetVehicleComp *const)&__a, (__int64)this, 0);
  v1 = std::operator==<Player>(0LL, &__a);
  std::shared_ptr<Player>::~shared_ptr(&__a);
  return v1;
};

// Line 435: range 0000000015CC7C08-0000000015CC8270
void __cdecl GadgetVehicleComp::logCreateVehicle(
        GadgetVehicleComp *const this,
        uint32_t reason,
        uint32_t reason_extra,
        const Vector3 *pos)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Uid; // edx
  uint32_t GadgetId; // edx
  Player *v13; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t SceneId; // edx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // r14
  std::string v21; // [rsp+0h] [rbp-160h]
  const Vector3 *posa; // [rsp+8h] [rbp-158h]
  __int64 reason_extraa; // [rsp+10h] [rbp-150h]
  GadgetVehicleComp *thisa; // [rsp+18h] [rbp-148h]
  google::protobuf::uint32 host_uid; // [rsp+2Ch] [rbp-134h]
  proto_log::VehicleLog *vehicle_log; // [rsp+30h] [rbp-130h]
  proto_log::PositionLog *pos_log; // [rsp+38h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-120h] BYREF
  std::string v29; // [rsp+50h] [rbp-110h] BYREF
  char v30[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v21._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v21._anon_0._M_allocated_capacity) = reason;
  *(_DWORD *)v21._anon_0._M_local_buf = reason_extra;
  v21._M_string_length = (std::string::size_type)pos;
  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 10 holder:441 64 16 20 owner_player_ptr:436 96 16 11 log_ptr:442 128 16 13 scene_ptr:451 "
                        "160 16 13 owner_ptr:456";
  *(_QWORD *)(v4 + 16) = GadgetVehicleComp::logCreateVehicle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  GadgetVehicleComp::getOwnerPlayer((const GadgetVehicleComp *const)(v4 + 64));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
  {
    v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    BasicComp = Player::getBasicComp(v7);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v29, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x5F9u, v21);
    std::string::~string(&v29);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCreateVehicle>();
    if ( !std::operator==<proto_log::PlayerLogBodyCreateVehicle>(
            0LL,
            (const std::shared_ptr<proto_log::PlayerLogBodyCreateVehicle> *)(v4 + 96)) )
    {
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      vehicle_log = proto_log::PlayerLogBodyCreateVehicle::mutable_vehicle(v9);
      proto_log::VehicleLog::set_vehicle_transaction(vehicle_log, &thisa->transaction_);
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Uid = Player::getUid(v10);
      proto_log::VehicleLog::set_owner_uid(vehicle_log, Uid);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GadgetId = Gadget::getGadgetId(thisa->gadget_);
      proto_log::VehicleLog::set_gadget_id(vehicle_log, GadgetId);
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Player::getSceneComp(v13);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 128));
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      host_uid = Player::getUid(v14);
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 128)) )
      {
        v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        SceneId = Scene::getSceneId(v15);
        proto_log::VehicleLog::set_scene_id(vehicle_log, SceneId);
        std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Scene::getOwnPlayer((const Scene *const)(v4 + 160));
        if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 160)) )
        {
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          host_uid = Player::getUid(v17);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 160));
      }
      proto_log::VehicleLog::set_host_uid(vehicle_log, host_uid);
      pos_log = proto_log::VehicleLog::mutable_pos(vehicle_log);
      if ( *(_BYTE *)(((unsigned __int64)posa >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)posa & 7) + 3) >= *(_BYTE *)(((unsigned __int64)posa >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PositionLog::set_x(pos_log, (int)posa->x);
      if ( *(_BYTE *)(((unsigned __int64)&posa->y >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)posa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&posa->y >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PositionLog::set_y(pos_log, (int)posa->y);
      if ( *(_BYTE *)(((unsigned __int64)&posa->z >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)posa + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&posa->z >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PositionLog::set_z(pos_log, (int)posa->z);
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyCreateVehicle::set_reason(v18, HIDWORD(reason_extraa));
      v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCreateVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyCreateVehicle::set_reason_extra(v19, reason_extraa);
      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(
        (std::shared_ptr<google::protobuf::Message> *const)(v4 + 160),
        0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCreateVehicle,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyCreateVehicle> *)(v4 + 96));
      Player::printStatLog(v20, &p_body_ptr, (MessagePtr *)(v4 + 160), 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 160));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
    }
    std::shared_ptr<proto_log::PlayerLogBodyCreateVehicle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCreateVehicle> *const)(v4 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 473: range 0000000015CC8272-0000000015CC85B4
// local variable allocation has failed, the output may be wrong!
void __cdecl GadgetVehicleComp::logDestoryVehicle(GadgetVehicleComp *const this, uint32_t reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDestoryVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto_log::VehicleLog *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDestoryVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // r14
  std::string v11; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  std::string v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v11._M_string_length = (std::string::size_type)this;
  HIDWORD(v11._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:479 64 16 20 owner_player_ptr:474 96 16 11 log_ptr:480";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::logDestoryVehicle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  GadgetVehicleComp::getOwnerPlayer((const GadgetVehicleComp *const)(v2 + 64));
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    BasicComp = Player::getBasicComp(v5);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v13, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x5FAu, v11);
    std::string::~string(&v13);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyDestoryVehicle>();
    if ( !std::operator==<proto_log::PlayerLogBodyDestoryVehicle>(
            0LL,
            (const std::shared_ptr<proto_log::PlayerLogBodyDestoryVehicle> *)(v2 + 96)) )
    {
      v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyDestoryVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDestoryVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v8 = proto_log::PlayerLogBodyDestoryVehicle::mutable_vehicle(v7);
      GadgetVehicleComp::fillLog((GadgetVehicleComp *const)v11._M_string_length, v8);
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyDestoryVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDestoryVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyDestoryVehicle::set_reason(v9, HIDWORD(v11._M_dataplus._M_p));
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDestoryVehicle,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyDestoryVehicle> *)(v2 + 96));
      Player::printStatLog(v10, (MessagePtr *)&v11._anon_0, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    }
    std::shared_ptr<proto_log::PlayerLogBodyDestoryVehicle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDestoryVehicle> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v14 == (char *)v2 )
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
};

// Line 491: range 0000000015CC85B6-0000000015CC89AE
void __cdecl GadgetVehicleComp::logEnterVehicle(GadgetVehicleComp *const this, Player *player, uint32_t enter_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto_log::VehicleLog *v8; // rdx
  unsigned int Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::string v11; // [rsp+0h] [rbp-170h]
  unsigned int enter_timea; // [rsp+Ch] [rbp-164h]
  Player *playera; // [rsp+10h] [rbp-160h]
  GadgetVehicleComp *thisa; // [rsp+18h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-140h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-130h] BYREF
  std::string v18; // [rsp+60h] [rbp-110h] BYREF
  std::string __rhs; // [rsp+80h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+A0h] [rbp-D0h] BYREF

  *(&v11._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v11._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v11._M_string_length) = enter_time;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 10 holder:492 64 16 11 log_ptr:493 96 32 12 op_trans:499";
  *(_QWORD *)(v3 + 16) = GadgetVehicleComp::logEnterVehicle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&__rhs, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x5FBu, v11);
  std::string::~string(&__rhs);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEnterVehicle>();
  if ( !std::operator==<proto_log::PlayerLogBodyEnterVehicle>(
          0LL,
          (const std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle> *)(v3 + 64)) )
  {
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = proto_log::PlayerLogBodyEnterVehicle::mutable_vehicle(v7);
    GadgetVehicleComp::fillLog(thisa, v8);
    std::to_string(&__rhs, enter_timea);
    Uid = Player::getUid(playera);
    std::to_string(&__lhs, Uid);
    std::operator+<char>(&v18, &__lhs, "_");
    std::operator+<char>((std::string *)(v3 + 96), &v18, &__rhs);
    std::string::~string(&v18);
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyEnterVehicle::set_op_transaction(v10, (const std::string *)(v3 + 96));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEnterVehicle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle> *)(v3 + 64));
    Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::string::~string((void *)(v3 + 96));
  }
  std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 505: range 0000000015CC89B0-0000000015CC8DA8
void __cdecl GadgetVehicleComp::logExitVehicle(GadgetVehicleComp *const this, Player *player, uint32_t enter_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto_log::VehicleLog *v8; // rdx
  unsigned int Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::string v11; // [rsp+0h] [rbp-170h]
  unsigned int enter_timea; // [rsp+Ch] [rbp-164h]
  Player *playera; // [rsp+10h] [rbp-160h]
  GadgetVehicleComp *thisa; // [rsp+18h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-140h] BYREF
  std::string __lhs; // [rsp+40h] [rbp-130h] BYREF
  std::string v18; // [rsp+60h] [rbp-110h] BYREF
  std::string __rhs; // [rsp+80h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+A0h] [rbp-D0h] BYREF

  *(&v11._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v11._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(v11._M_string_length) = enter_time;
  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 10 holder:506 64 16 11 log_ptr:507 96 32 12 op_trans:513";
  *(_QWORD *)(v3 + 16) = GadgetVehicleComp::logExitVehicle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&__rhs, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x5FCu, v11);
  std::string::~string(&__rhs);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEnterVehicle>();
  if ( !std::operator==<proto_log::PlayerLogBodyEnterVehicle>(
          0LL,
          (const std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle> *)(v3 + 64)) )
  {
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = proto_log::PlayerLogBodyEnterVehicle::mutable_vehicle(v7);
    GadgetVehicleComp::fillLog(thisa, v8);
    std::to_string(&__rhs, enter_timea);
    Uid = Player::getUid(playera);
    std::to_string(&__lhs, Uid);
    std::operator+<char>(&v18, &__lhs, "_");
    std::operator+<char>((std::string *)(v3 + 96), &v18, &__rhs);
    std::string::~string(&v18);
    std::string::~string(&__lhs);
    std::string::~string(&__rhs);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterVehicle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyEnterVehicle::set_op_transaction(v10, (const std::string *)(v3 + 96));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEnterVehicle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle> *)(v3 + 64));
    Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::string::~string((void *)(v3 + 96));
  }
  std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEnterVehicle> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 520: range 0000000015CC8DAA-0000000015CC91D7
void __cdecl GadgetVehicleComp::fillLog(GadgetVehicleComp *const this, proto_log::VehicleLog *vehicle_log)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t Uid; // edx
  uint32_t GadgetId; // edx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SceneId; // edx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // edx
  unsigned __int64 Position; // rax
  proto_log::PositionLog *pos_log; // [rsp+18h] [rbp-C8h]
  char v14[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 7 pos:538 64 16 14 player_ptr:522 96 16 13 scene_ptr:528 128 16 13 owner_ptr:532";
  *(_QWORD *)(v2 + 16) = GadgetVehicleComp::fillLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  proto_log::VehicleLog::set_vehicle_transaction(vehicle_log, &this->transaction_);
  GadgetVehicleComp::getOwnerPlayer((const GadgetVehicleComp *const)(v2 + 64));
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(v5);
    proto_log::VehicleLog::set_owner_uid(vehicle_log, Uid);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(this->gadget_);
  proto_log::VehicleLog::set_gadget_id(vehicle_log, GadgetId);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 96));
  if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    SceneId = Scene::getSceneId(v8);
    proto_log::VehicleLog::set_scene_id(vehicle_log, SceneId);
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    Scene::getOwnPlayer((const Scene *const)(v2 + 128));
    if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 128)) )
    {
      v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v11 = Player::getUid(v10);
      proto_log::VehicleLog::set_host_uid(vehicle_log, v11);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Position = (unsigned __int64)Entity::getPosition((const Entity *const)this->gadget_);
  if ( (char)(Position & 7) >= *(_BYTE *)((Position >> 3) + 0x7FFF8000) && *(_BYTE *)((Position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) != 0
    && (char)((Position + 11) & 7) >= *(_BYTE *)(((Position + 11) >> 3) + 0x7FFF8000) )
  {
    Position = __asan_report_load_n(Position, 12LL);
  }
  *(_QWORD *)(v2 + 32) = *(_QWORD *)Position;
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(Position + 8);
  pos_log = proto_log::VehicleLog::mutable_pos(vehicle_log);
  proto_log::PositionLog::set_x(pos_log, (int)*(float *)(v2 + 32));
  proto_log::PositionLog::set_y(pos_log, (int)*(float *)(v2 + 36));
  proto_log::PositionLog::set_z(pos_log, (int)*(float *)(v2 + 40));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 547: range 0000000015CC91D8-0000000015CC948E
void __cdecl GadgetVehicleComp::setMotionState(
        GadgetVehicleComp *const this,
        proto::MotionState state,
        uint32_t scene_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  float cost_stamina; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 config_gadget_ptr:553";
  *(_QWORD *)(v3 + 16) = GadgetVehicleComp::setMotionState;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( state == MOTION_SKIFF_DASH )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Gadget::getJsonConfig((const Gadget *const)(v3 + 32));
    if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/vehicle_comp.cpp",
        "setMotionState",
        556);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v11, (const char (*)[9])"gadget: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Entity::getEntityId((const Entity *const)this->gadget_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v7, (const char (*)[23])" json config not found");
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    else
    {
      v8 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->vehicle.stamina.sprint_stamina_cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->vehicle.stamina.sprint_stamina_cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      cost_stamina = v8->vehicle.stamina.sprint_stamina_cost;
      GadgetVehicleComp::changeCurStamina(this, -cost_stamina, 1);
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v3 + 32));
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 564: range 0000000015CC9490-0000000015CC95FE
float __cdecl GadgetVehicleComp::getMaxStamina(GadgetVehicleComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  float result; // xmm0_4
  float stamina_upper_limit; // [rsp+4h] [rbp-6Ch]
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 config_gadget_ptr:565";
  *(_QWORD *)(v1 + 16) = GadgetVehicleComp::getMaxStamina;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::getJsonConfig((const Gadget *const)(v1 + 32));
  if ( std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v1 + 32)) )
  {
    stamina_upper_limit = 0.0;
  }
  else
  {
    v4 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v4->vehicle.stamina >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v4->vehicle.stamina >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    stamina_upper_limit = v4->vehicle.stamina.stamina_upper_limit;
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v1 + 32));
  result = stamina_upper_limit;
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 574: range 0000000015CC9600-0000000015CC99E3
void __cdecl GadgetVehicleComp::changeCurStamina(GadgetVehicleComp *const this, float delta, bool is_notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Scene *v6; // rax
  __int64 SceneTimeMs; // rax
  __m128i v8; // xmm0
  float *v9; // rdx
  float v10; // xmm0_4
  char v11; // al
  float __a; // [rsp+10h] [rbp-70h] BYREF
  float __b; // [rsp+14h] [rbp-6Ch] BYREF
  float old_stamina; // [rsp+18h] [rbp-68h]
  float sub_stamina; // [rsp+1Ch] [rbp-64h]
  char v17[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 scene_ptr:591";
  *(_QWORD *)(v3 + 16) = GadgetVehicleComp::changeCurStamina;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::fabs(delta) > 0.00000011920929 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_stamina = this->cur_stamina_;
    if ( delta >= 0.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v8 = _mm_cvtsi32_si128(LODWORD(this->cur_stamina_));
      *(float *)v8.m128i_i32 = SAFE_ADD<float,float>(*(float *)v8.m128i_i32, delta);
      LODWORD(__b) = _mm_cvtsi128_si32(v8);
      *(float *)v8.m128i_i32 = GadgetVehicleComp::getMaxStamina(this);
      LODWORD(__a) = _mm_cvtsi128_si32(v8);
      v9 = (float *)std::min<float>(&__a, &__b);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v10 = *v9;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_stamina_);
      }
      this->cur_stamina_ = v10;
    }
    else
    {
      sub_stamina = -delta;
      if ( (float)-delta < this->cur_stamina_ )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        this->cur_stamina_ = this->cur_stamina_ - sub_stamina;
      }
      else
      {
        this->cur_stamina_ = 0.0;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v3 + 32));
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
      {
        v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        SceneTimeMs = Scene::getSceneTimeMs(v6);
        if ( *(_BYTE *)(((unsigned __int64)&this->last_cost_stamina_time_ms_ >> 3) + 0x7FFF8000) )
          SceneTimeMs = __asan_report_store8(&this->last_cost_stamina_time_ms_);
        this->last_cost_stamina_time_ms_ = SceneTimeMs;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
    }
    if ( !is_notify )
      goto LABEL_31;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( std::fabs(this->cur_stamina_ - old_stamina) <= 0.00000011920929 )
LABEL_31:
      v11 = 1;
    else
      v11 = 0;
    if ( !v11 )
      GadgetVehicleComp::notifyStamina(this);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 609: range 0000000015CC99E4-0000000015CC9C37
void __cdecl GadgetVehicleComp::notifyStamina(GadgetVehicleComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t EntityId; // eax
  Player *v5; // rax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 player_ptr:614 64 32 10 notify:610";
  *(_QWORD *)(v1 + 16) = GadgetVehicleComp::notifyStamina;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  proto::VehicleStaminaNotify::VehicleStaminaNotify((proto::VehicleStaminaNotify *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
  proto::VehicleStaminaNotify::set_entity_id((proto::VehicleStaminaNotify *const)(v1 + 64), EntityId);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_stamina_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::VehicleStaminaNotify::set_cur_stamina((proto::VehicleStaminaNotify *const)(v1 + 64), this->cur_stamina_);
  GadgetVehicleComp::getPlayerBySlot((GadgetVehicleComp *const)(v1 + 32), (__int64)this, 0);
  if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 32)) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Player::sendProto(v5, (const google::protobuf::Message *)(v1 + 64));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 32));
  proto::VehicleStaminaNotify::~VehicleStaminaNotify((proto::VehicleStaminaNotify *const)(v1 + 64));
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 623: range 0000000015CC9C38-0000000015CCA1DB
void __cdecl GadgetVehicleComp::procVehicleStamina(
        GadgetVehicleComp *const this,
        uint64_t interval_ms,
        bool is_force_recover,
        bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  float v9; // xmm0_4
  Scene *v10; // rax
  __int64 SceneTimeMs; // rax
  signed __int64 last_cost_stamina_time_ms; // rax
  uint64_t v13; // rdx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  float v16; // xmm0_4
  float *v17; // rdx
  float v18; // [rsp+0h] [rbp-D0h]
  float v19; // [rsp+4h] [rbp-CCh]
  float __a; // [rsp+28h] [rbp-A8h] BYREF
  float __b; // [rsp+2Ch] [rbp-A4h] BYREF
  float recover_stamina; // [rsp+30h] [rbp-A0h]
  float dash_cost_stamina; // [rsp+34h] [rbp-9Ch]
  uint64_t now_ms; // [rsp+38h] [rbp-98h]
  char v27[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 21 config_gadget_ptr:624 64 16 13 scene_ptr:636";
  *(_QWORD *)(v4 + 16) = GadgetVehicleComp::procVehicleStamina;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::getJsonConfig((const Gadget *const)(v4 + 32));
  if ( !std::operator==<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v4 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Entity::getMotionState((Entity *const)this->gadget_) == MOTION_SKIFF_DASH && !is_force_recover )
    {
      v8 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v8->vehicle.stamina.dash_stamina_cost >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v8 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->vehicle.stamina.dash_stamina_cost >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( (interval_ms & 0x8000000000000000LL) != 0LL )
        v9 = (float)(int)(interval_ms & 1 | (interval_ms >> 1)) + (float)(int)(interval_ms & 1 | (interval_ms >> 1));
      else
        v9 = (float)(int)interval_ms;
      dash_cost_stamina = (float)(v9 * v8->vehicle.stamina.dash_stamina_cost) / 1000.0;
      GadgetVehicleComp::changeCurStamina(this, -dash_cost_stamina, is_notify);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v4 + 64));
      if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 64)) )
      {
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        SceneTimeMs = Scene::getSceneTimeMs(v10);
        now_ms = SceneTimeMs;
        if ( SceneTimeMs < 0 )
          v19 = (float)(SceneTimeMs & 1 | (unsigned int)((unsigned __int64)SceneTimeMs >> 1))
              + (float)(SceneTimeMs & 1 | (unsigned int)((unsigned __int64)SceneTimeMs >> 1));
        else
          v19 = (float)(int)SceneTimeMs;
        if ( *(_BYTE *)(((unsigned __int64)&this->last_cost_stamina_time_ms_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        last_cost_stamina_time_ms = this->last_cost_stamina_time_ms_;
        if ( last_cost_stamina_time_ms < 0 )
        {
          v13 = this->last_cost_stamina_time_ms_ & 1 | ((unsigned __int64)last_cost_stamina_time_ms >> 1);
          v18 = (float)(int)v13 + (float)(int)v13;
        }
        else
        {
          v18 = (float)(int)last_cost_stamina_time_ms;
        }
        v14 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&v14->vehicle.stamina.stamina_recover_wait_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v14->vehicle.stamina.stamina_recover_wait_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( (float)((float)(1000.0 * v14->vehicle.stamina.stamina_recover_wait_time) + v18) < v19 )
        {
          v15 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          if ( *(_BYTE *)(((unsigned __int64)&v15->vehicle.stamina.stamina_recover_speed >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v15 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->vehicle.stamina.stamina_recover_speed >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( (interval_ms & 0x8000000000000000LL) != 0LL )
            v16 = (float)(int)(interval_ms & 1 | (interval_ms >> 1))
                + (float)(int)(interval_ms & 1 | (interval_ms >> 1));
          else
            v16 = (float)(int)interval_ms;
          __b = (float)(v16 * v15->vehicle.stamina.stamina_recover_speed) / 1000.0;
          __a = 100000.0;
          v17 = (float *)std::min<float>(&__a, &__b);
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          recover_stamina = *v17;
          GadgetVehicleComp::changeCurStamina(this, recover_stamina, is_notify);
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
    }
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v4 + 32));
  if ( v27 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
};
