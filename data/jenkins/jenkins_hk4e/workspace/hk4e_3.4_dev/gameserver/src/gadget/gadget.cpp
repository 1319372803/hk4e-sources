// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/gadget.cpp

// Line 50: range 000000001752805C-000000001752870A
int32_t __cdecl Gadget::initWithParam(Gadget *const this, const GadgetParam *gadget_param)
{
  Gadget *v2; // rdx
  Gadget *v3; // rcx
  Gadget *v4; // rcx
  Entity *v5; // rcx
  Entity *v6; // rcx
  Entity *v7; // rdx
  uint32_t guest_ban_drop; // ecx
  bool is_by_quest; // cl
  Entity *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<Creature> p_owner_ptr; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-30h] BYREF

  v2 = this;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_param->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Creature::setConfigLevel(v2, gadget_param->config_level);
  v3 = this;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->revise_level >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Creature::setReviseLevel(v3, gadget_param->revise_level);
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->level >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Creature::setLevel(v4, gadget_param->level);
  Entity::setBornPosition((Entity *const)this, &gadget_param->pos);
  Entity::setRotation((Entity *const)this, &gadget_param->rot);
  v5 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->config_id >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Entity::setConfigId(v5, gadget_param->config_id);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_param->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Gadget::setDropId(this, gadget_param->drop_id);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->gadget_state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->gadget_state >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Gadget::setState(this, gadget_param->gadget_state, 1, 0);
  std::shared_ptr<Creature>::shared_ptr(&p_owner_ptr, &gadget_param->owner_ptr);
  Creature::setOwner(this, &p_owner_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&p_owner_ptr);
  std::shared_ptr<Creature>::shared_ptr(&p_owner_ptr, &gadget_param->prop_owner_ptr);
  Gadget::setPropOwner(this, &p_owner_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&p_owner_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->born_type >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Gadget::setBornType(this, gadget_param->born_type);
  v6 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->is_client_invisible >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)gadget_param + 108) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_param->is_client_invisible >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&gadget_param->is_client_invisible);
  }
  Entity::setIsClientVisible(v6, !gadget_param->is_client_invisible);
  v7 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_param->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Entity::setRoomId(v7, gadget_param->room_id);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->guest_ban_drop >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  guest_ban_drop = gadget_param->guest_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guest_ban_drop_);
  }
  this->guest_ban_drop_ = guest_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->is_by_quest >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)gadget_param + 109) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_param->is_by_quest >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&gadget_param->is_by_quest);
  }
  is_by_quest = gadget_param->is_by_quest;
  if ( *(char *)(((unsigned __int64)&this->is_by_quest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_by_quest_);
  this->is_by_quest_ = is_by_quest;
  v10 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->group_vision_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_param->group_vision_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Entity::setGroupVisionType(v10, gadget_param->group_vision_type);
  std::vector<unsigned int>::operator=(&this->interect_uid_vec_, &gadget_param->interact_uid_vec);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->point_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_param->point_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Gadget::setPointConfigId(this, gadget_param->point_config_id);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->talk_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_param->talk_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Gadget::setGadgetTalkState(this, gadget_param->talk_state);
  if ( *(_BYTE *)(((unsigned __int64)&gadget_param->fixed_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_param + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_param->fixed_level >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( gadget_param->fixed_level )
  {
    Creature::setLevel(this, gadget_param->fixed_level);
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "initWithParam",
      74);
    v11 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v16, this);
    v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v11,
            (const char (*)[24])" init with fixed_level:");
    val = Creature::getLevel(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  return 0;
};

// Line 81: range 000000001752870C-0000000017528D72
int32_t __cdecl Gadget::initByConfigWithParam(Gadget *const this, const GadgetParam *gadget_param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // al
  Gadget *v6; // rcx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  bool *p_is_force_refresh_authotiry_to_host; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  bool *p_is_refresh_auth_when_auth_out_sight; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t v15; // r14d
  int32_t result; // eax
  std::vector<std::string>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::vector<std::string>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  const GadgetScriptConfig *script_ptr; // [rsp+28h] [rbp-108h]
  std::vector<std::string> *__for_range; // [rsp+30h] [rbp-100h]
  std::unordered_map<std::string,float> *__for_range_0; // [rsp+38h] [rbp-F8h]
  const std::pair<const std::string,float> *v22; // [rsp+40h] [rbp-F0h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+48h] [rbp-E8h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+50h] [rbp-E0h]
  const std::string *tag; // [rsp+58h] [rbp-D8h]
  Gadget *__for_range_1; // [rsp+60h] [rbp-D0h]
  const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > *v27; // [rsp+68h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *comp_type; // [rsp+70h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+78h] [rbp-B8h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin_0; // [rsp+80h] [rbp-B0h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end_0; // [rsp+90h] [rbp-A0h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-90h] BYREF
  char v33[112]; // [rsp+C0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 json_config_ptr:89";
  *(_QWORD *)(v2 + 16) = Gadget::initByConfigWithParam;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)&__for_end_0, &gadget_param->group_ptr);
  script_ptr = Gadget::getScriptConfig(this, (GroupPtr *)&__for_end_0);
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)&__for_end_0);
  if ( !script_ptr )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&script_ptr->is_enable_interact >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)script_ptr - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&script_ptr->is_enable_interact >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load1(&script_ptr->is_enable_interact);
  }
  if ( !script_ptr->is_enable_interact )
    v5 = 0;
  else
LABEL_8:
    v5 = 1;
  Gadget::initEnableInteract(this, v5);
  Gadget::getJsonConfig((const Gadget *const)(v2 + 32));
  if ( std::operator!=<data::ConfigGadget>(0LL, (const std::shared_ptr<data::ConfigGadget> *)(v2 + 32)) )
  {
    __for_range = &std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->entity_tags.init_tags;
    __for_begin._M_current = std::vector<std::string>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
    {
      tag = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
      Creature::changeTag(this, 1, tag, 0);
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
    }
    __for_range_0 = &std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->global_value.init_server_global_values;
    __for_begin._M_current = (std::string *)std::unordered_map<std::string,float>::begin(__for_range_0)._M_cur;
    __for_end._M_current = (std::string *)std::unordered_map<std::string,float>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,float>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)&__for_end) )
    {
      v22 = std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *const)&__for_begin);
      key = std::get<0ul,std::string const,float>(v22);
      value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v22);
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Creature::setServerGlobalValue(v6, key, *value, 0);
      std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *const)&__for_begin);
    }
    v7 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_is_force_refresh_authotiry_to_host = &v7->common.is_force_refresh_authotiry_to_host;
    if ( *(_BYTE *)(((unsigned __int64)p_is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_force_refresh_authotiry_to_host & 7) >= *(_BYTE *)(((unsigned __int64)p_is_force_refresh_authotiry_to_host >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_force_refresh_authotiry_to_host);
    }
    Creature::setIsForceRefreshAuthToSceneOwner(this, v7->common.is_force_refresh_authotiry_to_host);
    v9 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_is_refresh_auth_when_auth_out_sight = &v9->common.is_refresh_auth_when_auth_out_sight;
    if ( *(_BYTE *)(((unsigned __int64)p_is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_refresh_auth_when_auth_out_sight & 7) >= *(_BYTE *)(((unsigned __int64)p_is_refresh_auth_when_auth_out_sight >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_refresh_auth_when_auth_out_sight);
    }
    Creature::setIsAuthPreferClosestPlayer(this, v9->common.is_refresh_auth_when_auth_out_sight);
  }
  __for_range_1 = this;
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin_0);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end_0);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v27 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin_0);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v27);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v27);
    v11 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(_QWORD *)v11 + 24LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, const GadgetParam *))v12)(v11, gadget_param) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "initByConfigWithParam",
        112);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v32,
              (const char (*)[18])"GadgetComp Type: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, comp_type);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v14, (const char (*)[23])" init by config failed");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v15 = -1;
      goto LABEL_34;
    }
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin_0);
  }
  v15 = 0;
LABEL_34:
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 32));
  result = v15;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 121: range 0000000017528D74-0000000017529281
int32_t __cdecl Gadget::init(Gadget *const this)
{
  common::milog::MiLogStream *v1; // rdx
  unsigned __int64 v3; // rax
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  data::VisionLevelType VisionLevel; // eax
  Entity *v11; // rcx
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+18h] [rbp-88h]
  TxtConfigMgr *txt_config_mgr; // [rsp+28h] [rbp-78h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+30h] [rbp-70h]
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v15; // [rsp+38h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *comp_type; // [rsp+40h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+48h] [rbp-58h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+50h] [rbp-50h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  gadget_config_ptr = Gadget::getGadgetConfig(this);
  if ( gadget_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = *(_QWORD *)this->baseclass_0 + 408LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Gadget *const, _QWORD))v3)(this, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "init",
        131);
      v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v20,
             (const char (*)[19])"initAbility fails ");
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
    else if ( Creature::calcProp(this) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "init",
        136);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v20, (const char (*)[16])"calcProp fails ");
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
    else
    {
      EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
      EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
      while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
      {
        v15 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
        comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v15);
        gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v15);
        v6 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        v7 = *(_QWORD *)v6 + 16LL;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v7)(v6) )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget.cpp",
            "init",
            143);
          v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 &v20,
                 (const char (*)[18])"GadgetComp Type: ");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, comp_type);
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" init failed");
          common::milog::MiLogStream::~MiLogStream(&v20);
          return -1;
        }
        EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
      }
      Creature::setCurHpFull(this, 0);
      if ( Creature::getCurHp(this) >= 0.0099999998 )
        Creature::setLifeState(this, LIFE_ALIVE);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__for_end);
      txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__for_end)->design_config.txt_config_mgr;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__for_end);
      gadget_script_config_ptr = Gadget::getScriptConfig(this);
      if ( gadget_script_config_ptr )
      {
        VisionLevel = GadgetScriptConfig::getVisionLevel(gadget_script_config_ptr, txt_config_mgr);
        Entity::setVisionLevelType((Entity *const)this, VisionLevel);
      }
      else
      {
        v11 = (Entity *)this;
        if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->vision_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->vision_level >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Entity::setVisionLevelType(v11, gadget_config_ptr->vision_level);
      }
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget.cpp",
      "init",
      125);
    v1 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v20,
           (const char (*)[22])"getGadgetConfig fails");
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v1, this);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
};

// Line 169: range 0000000017529282-000000001752944F
int32_t __cdecl Gadget::onBeforeEnterScene(Gadget *const this, Scene *scene, const VisionContext *context)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v9; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v9 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v9);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v9);
    v3 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(_QWORD *)v3 + 32LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v4)(v3) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "onBeforeEnterScene",
        174);
      v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v14,
             (const char (*)[39])"gadget comp start comp failed, gadget:");
      v6 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this);
      v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])", comp:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, comp_type);
      common::milog::MiLogStream::~MiLogStream(&v14);
      return -1;
    }
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 182: range 0000000017529450-00000000175296E6
int32_t __cdecl Gadget::onAfterEnterScene(Gadget *const this, Scene *scene, const VisionContext *context)
{
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v12; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v12 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v12);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v12);
    if ( std::operator==<GadgetCompBase>(0LL, gadget_comp_ptr) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "onAfterEnterScene",
        187);
      v3 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v17, (const char (*)[11])"comp_type:");
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, comp_type);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])off_26123D40);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(_QWORD *)v5 + 120LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, Scene *, const VisionContext *))v6)(v5, scene, context) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget.cpp",
          "onAfterEnterScene",
          192);
        v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v17,
               (const char (*)[46])"gadget comp onAfterEnterScene failed, gadget:");
        v8 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this);
        v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])", comp:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, comp_type);
        common::milog::MiLogStream::~MiLogStream(&v17);
        return -1;
      }
    }
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  Creature::addSubEntityIdToGroupOriginOwnerMap(this);
  Gadget::tryTriggerStateChangeEvent(this);
  return 0;
};

// Line 203: range 00000000175296E8-0000000017529C13
int32_t __cdecl Gadget::onBeforeLeaveScene(Gadget *const this, const VisionContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  uint32_t v6; // ecx
  Player *v7; // rax
  PlayerSceneComp *SceneComp; // r14
  Entity *v9; // rax
  Player *v10; // rax
  PlayerSceneComp *v11; // r14
  Entity *v12; // rax
  std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  GadgetSealComp *v14; // rdx
  GadgetVehicleComp *v15; // rdx
  std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  int32_t v17; // r14d
  int32_t result; // eax
  char v19[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 13 scene_ptr:204 64 16 17 play_comp_ptr:219 96 16 17 seal_comp_ptr:225 128 16 20 vehicle"
                        "_comp_ptr:231 160 16 22 fish_pool_comp_ptr:237";
  *(_QWORD *)(v2 + 16) = Gadget::onBeforeLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->baseclass_0[264] >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->baseclass_0[264]);
  if ( this->baseclass_0[264] )
    v5 = 1;
  else
LABEL_9:
    v5 = 0;
  if ( v5 )
  {
    v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->master_uid_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->master_uid_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Scene::findPlayer((const Scene *const)(v2 + 128), v6);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
    {
      std::enable_shared_from_this<Entity>::shared_from_this((std::enable_shared_from_this<Entity> *const)(v2 + 160));
      if ( std::__shared_ptr<Entity,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Entity,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 160)) )
      {
        v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        SceneComp = Player::getSceneComp(v7);
        v9 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        PlayerSceneComp::removeDisconnectDestroyEntity(SceneComp, v9);
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v11 = Player::getSceneComp(v10);
        v12 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        PlayerSceneComp::removeLeaveSceneDestroyEntity(v11, v12);
      }
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v2 + 160));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
  }
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetPlayComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
  if ( std::operator!=<GadgetPlayComp>((const std::shared_ptr<GadgetPlayComp> *)(v2 + 64), 0LL) )
  {
    v13 = std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetPlayComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    GadgetPlayComp::onBeforeLeaveScene(v13, context);
  }
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetSealComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 96));
  if ( std::operator!=<GadgetSealComp>((const std::shared_ptr<GadgetSealComp> *)(v2 + 96), 0LL) )
  {
    v14 = std::__shared_ptr_access<GadgetSealComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetSealComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    GadgetSealComp::onBeforeLeaveScene(v14, context);
  }
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 128));
  if ( std::operator!=<GadgetVehicleComp>((const std::shared_ptr<GadgetVehicleComp> *)(v2 + 128), 0LL) )
  {
    v15 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    GadgetVehicleComp::onBeforeLeaveScene(v15, context);
  }
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<FishPoolComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 160));
  if ( std::operator!=<FishPoolComp>((const std::shared_ptr<FishPoolComp> *)(v2 + 160), 0LL) )
  {
    v16 = std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FishPoolComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    FishPoolComp::onBeforeLeaveScene(v16, context);
  }
  v17 = Creature::onBeforeLeaveScene(this, context);
  std::shared_ptr<FishPoolComp>::~shared_ptr((std::shared_ptr<FishPoolComp> *const)(v2 + 160));
  std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v2 + 128));
  std::shared_ptr<GadgetSealComp>::~shared_ptr((std::shared_ptr<GadgetSealComp> *const)(v2 + 96));
  std::shared_ptr<GadgetPlayComp>::~shared_ptr((std::shared_ptr<GadgetPlayComp> *const)(v2 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v17;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 247: range 0000000017529C14-0000000017529C86
data::EntityType __cdecl Gadget::getClientEntityType(const Gadget *const this)
{
  const data::GadgetExcelConfig *gagdet_config_ptr; // [rsp+18h] [rbp-8h]

  gagdet_config_ptr = Gadget::getGadgetConfig(this);
  if ( !gagdet_config_ptr )
    return 19;
  if ( *(_BYTE *)(((unsigned __int64)&gagdet_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gagdet_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gagdet_config_ptr->type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return gagdet_config_ptr->type;
};

// Line 258: range 0000000017529C88-0000000017529EB8
std::string *__cdecl Gadget::getDesc[abi:cxx11](std::string *retstr, const Gadget *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  std::string v; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 6 os:259";
  *(_QWORD *)(v2 + 16) = Gadget::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  Entity::getDesc[abi:cxx11](&v, (const Entity *const)this);
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         &v);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, "[gadget_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, this->gadget_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, "]");
  std::string::~string(&v);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 266: range 0000000017529EBA-000000001752A461
int32_t __cdecl Gadget::toClient(const Gadget *const this, proto::SceneEntityInfo *entity_info, Player *player)
{
  int type; // eax
  uint32_t GroupId; // edx
  uint32_t OwnerEntityId; // edx
  google::protobuf::uint32 GadgetType; // edx
  bool isEnableInteract; // dl
  uint32_t PropOwnerEntityId; // edx
  uint32_t GadgetTalkState; // edx
  google::protobuf::RepeatedField<unsigned int> *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  proto::GadgetBornType born_type; // [rsp+24h] [rbp-8Ch]
  const data::GadgetExcelConfig *gagdet_config_ptr; // [rsp+28h] [rbp-88h]
  proto::SceneGadgetInfo *gadget_info; // [rsp+30h] [rbp-80h]
  const GadgetScriptConfig *gadget_config_ptr; // [rsp+38h] [rbp-78h]
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v18; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+58h] [rbp-58h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+60h] [rbp-50h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-30h] BYREF

  if ( Creature::toClient(this, entity_info, player) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget.cpp",
      "toClient",
      269);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v22, (const char (*)[15])"toClient fails");
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
  else
  {
    born_type = Gadget::getBornType(this);
    if ( born_type == GADGET_BORN_NONE )
    {
      gagdet_config_ptr = Gadget::getGadgetConfig(this);
      if ( gagdet_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gagdet_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gagdet_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gagdet_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        type = gagdet_config_ptr->type;
        if ( type > 24 )
        {
          if ( type == 34 )
            born_type = GADGET_BORN_GROUND;
        }
        else if ( type >= 23 )
        {
          born_type = GADGET_BORN_IN_AIR;
        }
      }
    }
    gadget_info = proto::SceneEntityInfo::mutable_gadget(entity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SceneGadgetInfo::set_gadget_id(gadget_info, this->gadget_id_);
    GroupId = Entity::getGroupId((const Entity *const)this);
    proto::SceneGadgetInfo::set_group_id(gadget_info, GroupId);
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneGadgetInfo::set_config_id(gadget_info, *(_DWORD *)&this->baseclass_0[260]);
    OwnerEntityId = Creature::getOwnerEntityId(this);
    proto::SceneGadgetInfo::set_owner_entity_id(gadget_info, OwnerEntityId);
    proto::SceneGadgetInfo::set_born_type(gadget_info, born_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::SceneGadgetInfo::set_gadget_state(gadget_info, this->state_);
    GadgetType = Gadget::getGadgetType(this);
    proto::SceneGadgetInfo::set_gadget_type(gadget_info, GadgetType);
    if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::SceneGadgetInfo::set_authority_peer_id(gadget_info, this->authority_peer_id_);
    isEnableInteract = Gadget::isEnableInteract(this);
    proto::SceneGadgetInfo::set_is_enable_interact(gadget_info, isEnableInteract);
    PropOwnerEntityId = Gadget::getPropOwnerEntityId(this);
    proto::SceneGadgetInfo::set_prop_owner_entity_id(gadget_info, PropOwnerEntityId);
    GadgetTalkState = Gadget::getGadgetTalkState(this);
    proto::SceneGadgetInfo::set_gadget_talk_state(gadget_info, GadgetTalkState);
    v11 = proto::SceneGadgetInfo::mutable_interact_uid_list(gadget_info);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->interect_uid_vec_, v11);
    gadget_config_ptr = Gadget::getScriptConfig(this);
    if ( gadget_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->mark_flag >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->mark_flag >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SceneGadgetInfo::set_mark_flag(gadget_info, gadget_config_ptr->mark_flag);
      if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->draft_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->draft_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneGadgetInfo::set_draft_id(gadget_info, gadget_config_ptr->draft_id);
    }
    EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
    EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
    while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v18 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
      std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v18);
      gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v18);
      v12 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      v13 = *(_QWORD *)v12 + 56LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, proto::SceneGadgetInfo *))v13)(v12, gadget_info);
      EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 325: range 000000001752A462-000000001752A666
int32_t __cdecl Gadget::toBin(const Gadget *const this, proto::GroupGadgetBin *bin)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v5; // [rsp+18h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+28h] [rbp-28h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+40h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GroupGadgetBin::set_gadget_state(bin, this->state_);
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_interact_);
  proto::GroupGadgetBin::set_is_enable_interact(bin, this->is_enable_interact_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::GroupGadgetBin::set_gadget_talk_state(bin, this->gadget_talk_state_);
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v5 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    v2 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 40LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, proto::GroupGadgetBin *))v3)(v2, bin);
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 338: range 000000001752A668-000000001752A86B
int32_t __cdecl Gadget::fromBin(Gadget *const this, const proto::GroupGadgetBin *bin)
{
  uint32_t v2; // edx
  bool is_enable_interact; // dl
  uint32_t v4; // ecx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v8; // [rsp+18h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+28h] [rbp-28h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+40h] [rbp-10h] BYREF

  v2 = proto::GroupGadgetBin::gadget_state(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = v2;
  is_enable_interact = proto::GroupGadgetBin::is_enable_interact(bin);
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_interact_);
  this->is_enable_interact_ = is_enable_interact;
  v4 = proto::GroupGadgetBin::gadget_talk_state(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_talk_state_);
  }
  this->gadget_talk_state_ = v4;
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v8 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v8);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v8);
    v5 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(_QWORD *)v5 + 48LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, const proto::GroupGadgetBin *))v6)(v5, bin);
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 352: range 000000001752A86C-000000001752B01A
void __fastcall Gadget::setState(Gadget *const this, uint32_t state, bool is_update_start_time, bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t Now; // esi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // esi
  int v13; // r14d
  unsigned int ConfigId; // eax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t v16; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  uint32_t *p_source_entity_id; // rax
  int32_t v19; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  int32_t *p_param1; // rax
  int32_t v22; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  int32_t *p_param3; // rax
  Group *v26; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  unsigned __int64 v28; // rax
  unsigned int v29; // r15d
  uint32_t GadgetId; // eax
  void (__fastcall *v31)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD); // [rsp+10h] [rbp-100h]
  unsigned int old_state; // [rsp+3Ch] [rbp-D4h]
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-D0h] BYREF
  char v36[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 9 state:351 64 16 13 group_ptr:363 96 16 13 scene_ptr:384";
  *(_QWORD *)(v4 + 16) = Gadget::setState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = state;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == *(_DWORD *)(v4 + 48) )
  {
    if ( is_update_start_time )
    {
      Now = common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->state_begin_time_);
      }
      this->state_begin_time_ = Now;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "setState",
      359);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v35,
           (const char (*)[29])"[GADGET_STATE] change from: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->state_);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" to: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v11, this);
    common::milog::MiLogStream::~MiLogStream(&v35);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_state = this->state_;
    this->state_ = *(_DWORD *)(v4 + 48);
    v12 = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_begin_time_);
    }
    this->state_begin_time_ = v12;
    Entity::getGroup((const Entity *const)(v4 + 64));
    if ( is_notify )
      Gadget::notifyGadgetState(this);
    if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v4 + 64), 0LL) )
      goto LABEL_34;
    EventUtil::createEvent((data::EventType)(v4 + 96));
    if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v4 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "setState",
        374);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v35, (const char (*)[18])"createEvent fails");
      common::milog::MiLogStream::~MiLogStream(&v35);
      v13 = 0;
    }
    else
    {
      ConfigId = Entity::getConfigId((const Entity *const)this);
      std::to_string((std::string *)&v35, ConfigId);
      v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      std::string::operator=(&v15->source_name, &v35);
      std::string::~string(&v35);
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v16 = *(_DWORD *)&this->baseclass_0[256];
      v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      p_source_entity_id = &v17->source_entity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(p_source_entity_id);
      }
      v17->source_entity_id = v16;
      v19 = *(_DWORD *)(v4 + 48);
      v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      p_param1 = &v20->param1;
      if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param1);
      }
      v20->param1 = v19;
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v22 = *(_DWORD *)&this->baseclass_0[260];
      v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v23->param2 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v23->param2 >> 3) + 0x7FFF8000) <= 3 )
      {
        v23 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v23->param2);
      }
      v23->param2 = v22;
      v24 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      p_param3 = &v24->param3;
      if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param3);
      }
      v24->param3 = old_state;
      v26 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Group::handleEvent(v26, (EventPtr *)(v4 + 96));
      v13 = 1;
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 96));
    if ( v13 == 1 )
    {
LABEL_34:
      Entity::getScene((const Entity *const)(v4 + 96));
      if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
      {
        v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v28 = (unsigned __int64)(v27->_vptr_DescribalBase + 30);
        if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
          v28 = __asan_report_load8();
        v31 = *(void (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD))v28;
        v29 = *(_DWORD *)(v4 + 48);
        GadgetId = Gadget::getGadgetId(this);
        v31(v27, GadgetId, v29);
      }
      Gadget::tryTriggerStateChangeEvent(this);
      Gadget::logGadgetStateChange(this, old_state);
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 64));
  }
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 395: range 000000001752B01C-000000001752B483
void __cdecl Gadget::setEnableInteract(Gadget *const this, bool is_enable, bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Player *v6; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:410 64 16 20 owner_player_ptr:416";
  *(_QWORD *)(v3 + 16) = Gadget::setEnableInteract;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_interact_);
  if ( is_enable != this->is_enable_interact_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_enable_interact_);
    this->is_enable_interact_ = is_enable;
    if ( is_notify )
      Gadget::notifyGadgetState(this);
    if ( is_enable )
    {
      Entity::getScene((const Entity *const)(v3 + 32));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/gadget/gadget.cpp",
          "setEnableInteract",
          413);
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::milog::MiLogStream::operator()(&v9, "scene null ptr for gadget_id=%u", this->gadget_id_);
        common::milog::MiLogStream::~MiLogStream(&v9);
      }
      else
      {
        std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Scene::getOwnPlayer((const Scene *const)(v3 + 64));
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v9,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/gadget/gadget.cpp",
            "setEnableInteract",
            419);
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          common::milog::MiLogStream::operator()(&v9, "onwer player nullptr for gadget_id=%u", this->gadget_id_);
          common::milog::MiLogStream::~MiLogStream(&v9);
        }
        else
        {
          v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          WatcherComp = Player::getWatcherComp(v6);
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          PlayerWatcherComp::triggerGadgetInteractable(WatcherComp, this->gadget_id_);
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
    }
  }
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
};

// Line 427: range 000000001752B484-000000001752B66B
void __cdecl Gadget::notifyGadgetState(Gadget *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  bool isEnableInteract; // al
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 16 state_notify:428";
  *(_QWORD *)(v1 + 16) = Gadget::notifyGadgetState;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::GadgetStateNotify::GadgetStateNotify((proto::GadgetStateNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetStateNotify::set_gadget_entity_id(
    (proto::GadgetStateNotify *const)(v1 + 32),
    *(_DWORD *)&this->baseclass_0[256]);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GadgetStateNotify::set_gadget_state((proto::GadgetStateNotify *const)(v1 + 32), this->state_);
  isEnableInteract = Gadget::isEnableInteract(this);
  proto::GadgetStateNotify::set_is_enable_interact((proto::GadgetStateNotify *const)(v1 + 32), isEnableInteract);
  Entity::notifyViewingPlayers<proto::GadgetStateNotify>((Entity *const)this, (proto::GadgetStateNotify *)(v1 + 32), 0);
  proto::GadgetStateNotify::~GadgetStateNotify((proto::GadgetStateNotify *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 436: range 000000001752B66C-000000001752B715
void __cdecl Gadget::initEnableInteract(Gadget *const this, bool is_enable)
{
  bool v2; // si

  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_interact_);
  v2 = this->is_enable_interact_ && is_enable;
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_interact_);
  this->is_enable_interact_ = v2;
};

// Line 443: range 000000001752B716-000000001752B862
const data::GadgetExcelConfig *__cdecl Gadget::getGadgetConfig(const Gadget *const this)
{
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_gadget_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.gadget_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, this->gadget_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( gadget_config_ptr )
    return gadget_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gadget/gadget.cpp",
    "getGadgetConfig",
    447);
  v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v6,
         (const char (*)[40])"findGadgetExcelConfig fails, gadget_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->gadget_id_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 455: range 000000001752B864-000000001752BAB1
const GadgetScriptConfig *__cdecl Gadget::getScriptConfig(const Gadget *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  const GadgetScriptConfig *ScriptConfig; // r14
  const GadgetScriptConfig *result; // rax
  std::shared_ptr<Group> p_group_ptr; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:456";
  *(_QWORD *)(v1 + 16) = Gadget::getScriptConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)&this->baseclass_0[260] )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget.cpp",
        "getScriptConfig",
        460);
      v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v8,
             (const char (*)[28])"getGroup fails, config_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v4,
        (const unsigned int *)&this->baseclass_0[260]);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
    ScriptConfig = 0LL;
  }
  else
  {
    std::shared_ptr<Group>::shared_ptr(&p_group_ptr, (const std::shared_ptr<Group> *)(v1 + 32));
    ScriptConfig = Gadget::getScriptConfig(this, &p_group_ptr);
    std::shared_ptr<Group>::~shared_ptr(&p_group_ptr);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  result = ScriptConfig;
  if ( v9 == (char *)v1 )
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

// Line 468: range 000000001752BAB2-000000001752BF23
const GadgetScriptConfig *__cdecl Gadget::getScriptConfig(const Gadget *const this, GroupPtr *p_group_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const GadgetScriptConfig *result; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  const GroupScriptConfig *group_script_config_ptr; // [rsp+18h] [rbp-98h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+20h] [rbp-90h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-80h] BYREF
  char v17[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:471";
  *(_QWORD *)(v2 + 16) = Gadget::getScriptConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::operator==<Group>(p_group_ptr, 0LL) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    *(_DWORD *)(v2 + 32) = Group::getGroupId(v6);
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
    group_script_config_ptr = Group::getScriptConfig(v7);
    if ( group_script_config_ptr )
    {
      v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      group_info_config_ptr = Group::getInfoScriptConfig(v10);
      if ( group_info_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->point_config_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->point_config_id_ )
        {
          result = 0LL;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          gadget_script_config_ptr = GroupScriptConfig::findGadgetConfig(
                                       group_script_config_ptr,
                                       *(_DWORD *)&this->baseclass_0[260]);
          if ( gadget_script_config_ptr )
            goto LABEL_24;
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !*(_DWORD *)&this->baseclass_0[260] )
            goto LABEL_24;
          if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->business_info >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)group_info_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->business_info >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( group_info_config_ptr->business_info.type == 5 )
          {
LABEL_24:
            result = gadget_script_config_ptr;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v16,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/gadget.cpp",
              "getScriptConfig",
              491);
            v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v16,
                    (const char (*)[35])"findGadgetConfig fails, config_id:");
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v11,
                    (const unsigned int *)&this->baseclass_0[260]);
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v12, this);
            common::milog::MiLogStream::~MiLogStream(&v16);
            result = 0LL;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget.cpp",
          "getScriptConfig",
          481);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v16,
          (const char (*)[31])"getGroupInfoScriptConfig fails");
        common::milog::MiLogStream::~MiLogStream(&v16);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "getScriptConfig",
        475);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v16,
             (const char (*)[33])"getScriptConfig fails, group_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0LL;
    }
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 499: range 000000001752BF24-000000001752C0C9
data::ConfigGadgetPtr __cdecl Gadget::getJsonConfig(const Gadget *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  data::ConfigGadgetPtr result; // rax
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-70h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 config_gadget_ptr:500";
  *(_QWORD *)(v2 + 16) = Gadget::getJsonConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 32), v5);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 32), 0LL) )
    std::shared_ptr<data::ConfigGadget>::shared_ptr((std::shared_ptr<data::ConfigGadget> *const)this, 0LL);
  else
    std::shared_ptr<data::ConfigGadget>::shared_ptr(
      (std::shared_ptr<data::ConfigGadget> *const)this,
      (std::shared_ptr<data::ConfigGadget> *)(v2 + 32));
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 511: range 000000001752C0CA-000000001752C46E
// local variable allocation has failed, the output may be wrong!
data::ConfigBaseGadgetTriggerActionPtr __cdecl Gadget::getTriggerAction(const Gadget *const this, uint32_t action_idx)
{
  uint32_t v2; // edx
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // ecx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<data::ConfigBulletPattern,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ConfigBulletPattern,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *v11; // rdx
  std::__shared_ptr_access<data::ConfigGadgetCollidedPattern,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<data::ConfigGadgetCollidedPattern,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *v15; // rdx
  data::ConfigBaseGadgetTriggerActionPtr result; // rax
  uint32_t action_idxa; // [rsp+Ch] [rbp-C4h]
  char v18[176]; // [rsp+20h] [rbp-B0h] BYREF

  action_idxa = v2;
  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 21 config_gadget_ptr:512 64 16 29 config_bullet_pattern_ptr:522 96 16 31 config_collided"
                        "_pattern_ptr:527";
  *(_QWORD *)(v3 + 16) = Gadget::getTriggerAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&action_idx + 2672LL) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&action_idx + 2672LL) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v3 + 32), v6);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v3 + 32), 0LL)
    || (v7 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
        std::operator==<data::ConfigGadgetPattern>(&v7->gadget, 0LL)) )
  {
    std::shared_ptr<data::ConfigBaseGadgetTriggerAction>::shared_ptr(
      (std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *const)this,
      0LL);
  }
  else
  {
    std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    std::dynamic_pointer_cast<data::ConfigBulletPattern,data::ConfigGadgetPattern>((const std::shared_ptr<data::ConfigGadgetPattern> *)(v3 + 64));
    if ( std::operator!=<data::ConfigBulletPattern>((const std::shared_ptr<data::ConfigBulletPattern> *)(v3 + 64), 0LL)
      && (v8 = std::__shared_ptr_access<data::ConfigBulletPattern,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBulletPattern,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
          action_idxa < std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::size(&v8->trigger_actions)) )
    {
      v10 = std::__shared_ptr_access<data::ConfigBulletPattern,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBulletPattern,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v11 = std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::operator[](
              &v10->trigger_actions,
              action_idxa);
      std::shared_ptr<data::ConfigBaseGadgetTriggerAction>::shared_ptr(
        (std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *const)this,
        v11);
    }
    else
    {
      std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::dynamic_pointer_cast<data::ConfigGadgetCollidedPattern,data::ConfigGadgetPattern>((const std::shared_ptr<data::ConfigGadgetPattern> *)(v3 + 96));
      if ( std::operator!=<data::ConfigGadgetCollidedPattern>(
             (const std::shared_ptr<data::ConfigGadgetCollidedPattern> *)(v3 + 96),
             0LL)
        && (v12 = std::__shared_ptr_access<data::ConfigGadgetCollidedPattern,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadgetCollidedPattern,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
            action_idxa < std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::size(&v12->collision_actions)) )
      {
        v14 = std::__shared_ptr_access<data::ConfigGadgetCollidedPattern,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadgetCollidedPattern,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        v15 = std::vector<std::shared_ptr<data::ConfigBaseGadgetTriggerAction>>::operator[](
                &v14->collision_actions,
                action_idxa);
        std::shared_ptr<data::ConfigBaseGadgetTriggerAction>::shared_ptr(
          (std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *const)this,
          v15);
      }
      else
      {
        std::shared_ptr<data::ConfigBaseGadgetTriggerAction>::shared_ptr(
          (std::shared_ptr<data::ConfigBaseGadgetTriggerAction> *const)this,
          0LL);
      }
      std::shared_ptr<data::ConfigGadgetCollidedPattern>::~shared_ptr((std::shared_ptr<data::ConfigGadgetCollidedPattern> *const)(v3 + 96));
    }
    std::shared_ptr<data::ConfigBulletPattern>::~shared_ptr((std::shared_ptr<data::ConfigBulletPattern> *const)(v3 + 64));
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v3 + 32));
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseGadgetTriggerAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 537: range 000000001752C470-000000001752C5B5
bool __cdecl Gadget::isKeepModifierWhenOutSight(const Gadget *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  bool *p_keep_modifier_out_sight; // rax
  bool keep_modifier_out_sight; // r14
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 config_gadget_ptr:538";
  *(_QWORD *)(v1 + 16) = Gadget::isKeepModifierWhenOutSight;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Gadget::getJsonConfig((const Gadget *const)(v1 + 32));
  if ( std::operator!=<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    p_keep_modifier_out_sight = &v4->keep_modifier_out_sight;
    if ( *(_BYTE *)(((unsigned __int64)p_keep_modifier_out_sight >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_keep_modifier_out_sight & 7) >= *(_BYTE *)(((unsigned __int64)p_keep_modifier_out_sight >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load1(p_keep_modifier_out_sight);
    }
    keep_modifier_out_sight = v4->keep_modifier_out_sight;
  }
  else
  {
    keep_modifier_out_sight = 0;
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v1 + 32));
  result = keep_modifier_out_sight;
  if ( v8 == (char *)v1 )
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

// Line 548: range 000000001752C5B6-000000001752C61B
data::GadgetType __cdecl Gadget::getGadgetType(const Gadget *const this)
{
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+18h] [rbp-8h]

  gadget_script_config_ptr = Gadget::getScriptConfig(this);
  if ( !gadget_script_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->gadget_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->gadget_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return gadget_script_config_ptr->gadget_type;
};

// Line 557: range 000000001752C61C-000000001752C728
LuaScriptPtr __cdecl Gadget::getScript(const Gadget *const this)
{
  __int64 v1; // rsi
  LuaConfigMgr *p_lua_config_mgr; // rcx
  LuaScriptPtr result; // rax
  const LuaContent *content_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  content_ptr = LuaConfigMgr::findGadgetScriptContext(p_lua_config_mgr, *(_DWORD *)(v1 + 2672));
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( content_ptr )
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    result = LuaScriptMgr::createFromLuaContent((const LuaContent *)this);
  }
  else
  {
    std::shared_ptr<LuaScript>::shared_ptr((std::shared_ptr<LuaScript> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<LuaScript,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 565: range 000000001752C72A-000000001752C923
const data::GrowCurveInfo *__fastcall Gadget::findCurveInfo(
        const Gadget *const this,
        data::GrowCurveType type,
        uint32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const data::GrowCurveInfo *result; // rax
  const data::GrowCurveInfo *curve_info_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 type:564";
  *(_QWORD *)(v3 + 16) = Gadget::findCurveInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  curve_info_ptr = GrowCurveExcelConfigMgr::findGadgetCurveInfo(
                     &v6->design_config.txt_config_mgr.grow_curve_config_mgr,
                     level,
                     (data::GrowCurveType)*(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( curve_info_ptr )
  {
    result = curve_info_ptr;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget.cpp",
      "findCurveInfo",
      569);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v13,
           (const char (*)[33])"findAvatarCurveInfo fails, type:");
    v8 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(
           v7,
           (const data::GrowCurveType *)(v3 + 32));
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0LL;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 576: range 000000001752C924-000000001752CAE8
data::ConfigAttackEvent *__cdecl Gadget::findAttackEventConfig(Gadget *const this, const std::string *anim_event_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigAttackEvent *p_second; // r14
  data::ConfigAttackEvent *result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAttackEvent>,true> __y; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<std::string,data::ConfigAttackEvent> *anim_events; // [rsp+18h] [rbp-98h]
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 6 it:581 64 16 21 config_gadget_ptr:577";
  *(_QWORD *)(v2 + 16) = Gadget::findAttackEventConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  Gadget::getJsonConfig((const Gadget *const)(v2 + 64));
  if ( std::operator!=<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 64), 0LL)
    && (anim_events = &std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->combat.anim_events,
        *(std::unordered_map<std::string,data::ConfigAttackEvent>::iterator *)(v2 + 32) = std::unordered_map<std::string,data::ConfigAttackEvent>::find(
                                                                                            anim_events,
                                                                                            anim_event_id),
        __y._M_cur = std::unordered_map<std::string,data::ConfigAttackEvent>::end(anim_events)._M_cur,
        std::__detail::operator!=<std::pair<std::string const,data::ConfigAttackEvent>,true>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAttackEvent>,true> *)(v2 + 32),
          &__y)) )
  {
    p_second = &std::__detail::_Node_iterator<std::pair<std::string const,data::ConfigAttackEvent>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigAttackEvent>,false,true> *const)(v2 + 32))->second;
  }
  else
  {
    p_second = 0LL;
  }
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
  result = p_second;
  if ( v9 == (char *)v2 )
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
  return result;
};

// Line 591: range 000000001752CAEA-000000001752F9D2
int32_t __cdecl Gadget::assignProp(Gadget *const this)
{
  __m128i defense_low; // xmm0
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  double v6; // xmm0_8
  unsigned __int64 v7; // rax
  __int64 (__fastcall *v8)(Gadget *const, _QWORD, __int64, double); // r8
  __int64 level; // rdx
  int32_t v10; // r14d
  data::ArithType arith; // eax
  common::milog::MiLogStream *v12; // rax
  std::map<data::FightPropType,float>::mapped_type *v13; // rax
  float *v14; // rdx
  double v15; // xmm0_8
  unsigned __int64 v16; // rax
  __int64 (__fastcall *v17)(Gadget *const, _QWORD, __int64, double); // r8
  __int64 v18; // rdx
  data::ArithType v19; // eax
  common::milog::MiLogStream *v20; // rax
  std::map<data::FightPropType,float>::mapped_type *v21; // rax
  float *v22; // rdx
  unsigned __int64 v23; // rax
  __int64 (__fastcall *v24)(Gadget *const, _QWORD, __int64, double); // r8
  __int64 v25; // rdx
  data::ArithType v26; // eax
  common::milog::MiLogStream *v27; // rax
  std::map<data::FightPropType,float>::mapped_type *v28; // rax
  __int32 *v29; // rdx
  uint32_t v30; // ecx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  char v32; // al
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  bool *p_use_creator_property; // rax
  __gnu_cxx::__normal_iterator<data::CombatPropertyIndex*,std::vector<data::CombatPropertyIndex> >::reference v35; // rdx
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  Creature *v37; // rax
  FightPropComp *FightPropComp; // rax
  Creature *v39; // rax
  FightPropComp *v40; // rax
  __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> >::reference v41; // rdx
  std::map<data::FightPropType,float>::mapped_type *v42; // rdx
  std::map<data::FightPropType,float>::mapped_type *v43; // rax
  _DWORD *v44; // rdx
  Creature *v45; // rax
  FightPropComp *v46; // rax
  FightPropComp *v47; // r14
  Creature *v48; // rax
  FightPropComp *v49; // r15
  GameserverService *v50; // rax
  GameserverService *v51; // rax
  FightPropComp *v52; // r14
  Creature *v53; // rax
  FightPropComp *v54; // r15
  GameserverService *v55; // rax
  GameserverService *v56; // rax
  FightPropComp *v57; // r14
  Creature *v58; // rax
  FightPropComp *v59; // r15
  GameserverService *v60; // rax
  GameserverService *v61; // rax
  FightPropComp *v62; // r14
  Creature *v63; // rax
  FightPropComp *v64; // r15
  GameserverService *v65; // rax
  GameserverService *v66; // rax
  FightPropComp *v67; // r14
  Creature *v68; // rax
  FightPropComp *v69; // r15
  GameserverService *v70; // rax
  GameserverService *v71; // rax
  FightPropComp *v72; // r14
  Creature *v73; // rax
  FightPropComp *v74; // r15
  GameserverService *v75; // rax
  GameserverService *v76; // rax
  FightPropComp *v77; // r14
  Creature *v78; // rax
  FightPropComp *v79; // r15
  GameserverService *v80; // rax
  GameserverService *v81; // rax
  FightPropComp *v82; // r14
  Creature *v83; // rax
  FightPropComp *v84; // r15
  GameserverService *v85; // rax
  GameserverService *v86; // rax
  FightPropComp *v87; // r14
  Creature *v88; // rax
  FightPropComp *v89; // r15
  GameserverService *v90; // rax
  GameserverService *v91; // rax
  FightPropComp *v92; // r14
  Creature *v93; // rax
  FightPropComp *v94; // r15
  GameserverService *v95; // rax
  GameserverService *v96; // rax
  FightPropComp *v97; // r14
  Creature *v98; // rax
  FightPropComp *v99; // r15
  GameserverService *v100; // rax
  GameserverService *v101; // rax
  FightPropComp *v102; // r14
  Creature *v103; // rax
  FightPropComp *v104; // r15
  GameserverService *v105; // rax
  GameserverService *v106; // rax
  FightPropComp *v107; // r14
  Creature *v108; // rax
  FightPropComp *v109; // r15
  GameserverService *v110; // rax
  GameserverService *v111; // rax
  FightPropComp *v112; // r14
  Creature *v113; // rax
  FightPropComp *v114; // r15
  GameserverService *v115; // rax
  GameserverService *v116; // rax
  FightPropComp *v117; // r14
  Creature *v118; // rax
  FightPropComp *v119; // r15
  GameserverService *v120; // rax
  GameserverService *v121; // rax
  FightPropComp *v122; // r14
  Creature *v123; // rax
  FightPropComp *v124; // r15
  GameserverService *v125; // rax
  GameserverService *v126; // rax
  FightPropComp *v127; // r14
  Creature *v128; // rax
  FightPropComp *v129; // r15
  GameserverService *v130; // rax
  GameserverService *v131; // rax
  FightPropComp *v132; // r14
  Creature *v133; // rax
  FightPropComp *v134; // r15
  GameserverService *v135; // rax
  GameserverService *v136; // rax
  FightPropComp *v137; // r14
  Creature *v138; // rax
  FightPropComp *v139; // r15
  GameserverService *v140; // rax
  GameserverService *v141; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v142; // rax
  uint32_t v143; // ecx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v144; // rdx
  std::map<data::FightPropType,float>::mapped_type *v145; // rax
  float *v146; // rdx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v147; // rax
  std::map<data::FightPropType,float>::mapped_type *v148; // rax
  float *v149; // rdx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v150; // rdx
  std::map<data::FightPropType,float>::mapped_type *v151; // rax
  float *v152; // rdx
  std::map<data::FightPropType,float>::mapped_type *v153; // rdx
  std::map<data::FightPropType,float>::mapped_type *v154; // rdx
  std::map<data::FightPropType,float>::mapped_type *v155; // rdx
  char v156; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v157; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v158; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v159; // rax
  std::map<data::FightPropType,float>::mapped_type *v160; // rax
  _DWORD *v161; // rdx
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v171; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v172; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v173; // rax
  std::map<data::FightPropType,float>::mapped_type *v174; // rax
  _DWORD *v175; // rdx
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  uint32_t v185; // ecx
  PileBoolValue *IsInvincible; // r14
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v187; // rax
  PileBoolValue *IsLockHp; // r14
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v189; // rdx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v190; // rdx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v191; // rdx
  Gadget *v192; // rdx
  unsigned __int64 v193; // rax
  std::map<data::FightPropType,float> *v194; // rax
  int32_t result; // eax
  int value; // [rsp+14h] [rbp-2FCh]
  float valuef; // [rsp+14h] [rbp-2FCh]
  float valueg; // [rsp+14h] [rbp-2FCh]
  float valueh; // [rsp+14h] [rbp-2FCh]
  float valuei; // [rsp+14h] [rbp-2FCh]
  float valuej; // [rsp+14h] [rbp-2FCh]
  float valuek; // [rsp+14h] [rbp-2FCh]
  float valuel; // [rsp+14h] [rbp-2FCh]
  float valuem; // [rsp+14h] [rbp-2FCh]
  float valuen; // [rsp+14h] [rbp-2FCh]
  float valueo; // [rsp+14h] [rbp-2FCh]
  float valuep; // [rsp+14h] [rbp-2FCh]
  float valueq; // [rsp+14h] [rbp-2FCh]
  float valuer; // [rsp+14h] [rbp-2FCh]
  float values; // [rsp+14h] [rbp-2FCh]
  float valuet; // [rsp+14h] [rbp-2FCh]
  float valueu; // [rsp+14h] [rbp-2FCh]
  float valuev; // [rsp+14h] [rbp-2FCh]
  float valuew; // [rsp+14h] [rbp-2FCh]
  float valuex; // [rsp+14h] [rbp-2FCh]
  float valuea; // [rsp+14h] [rbp-2FCh]
  float valueb; // [rsp+14h] [rbp-2FCh]
  float valuec; // [rsp+14h] [rbp-2FCh]
  int valued; // [rsp+14h] [rbp-2FCh]
  int valuee; // [rsp+14h] [rbp-2FCh]
  bool is_skip_refresh_prop; // [rsp+2Ch] [rbp-2E4h]
  bool is_use_owner_level; // [rsp+2Dh] [rbp-2E3h]
  bool is_use_creator_prop; // [rsp+2Eh] [rbp-2E2h]
  bool is_use_buffed_prop; // [rsp+2Fh] [rbp-2E1h]
  float hp; // [rsp+30h] [rbp-2E0h]
  float hpa; // [rsp+30h] [rbp-2E0h]
  float attack; // [rsp+34h] [rbp-2DCh]
  float attacka; // [rsp+34h] [rbp-2DCh]
  float defense; // [rsp+38h] [rbp-2D8h]
  __int32 defensea; // [rsp+38h] [rbp-2D8h]
  std::vector<data::CombatPropertyIndex>::iterator __for_begin; // [rsp+48h] [rbp-2C8h] BYREF
  std::vector<data::CombatPropertyIndex>::iterator __for_end; // [rsp+50h] [rbp-2C0h] BYREF
  const data::GadgetPropExcelConfig *gadget_prop_config_ptr; // [rsp+58h] [rbp-2B8h]
  data::ConfigCombatProperty *property; // [rsp+60h] [rbp-2B0h]
  std::vector<data::CombatPropertyIndex> *__for_range; // [rsp+68h] [rbp-2A8h]
  std::vector<data::FightPropType> *__for_range_0; // [rsp+70h] [rbp-2A0h]
  const data::GrowCurveInfo *hp_curve_info_ptr; // [rsp+78h] [rbp-298h]
  const data::GrowCurveInfo *attack_curve_info_ptr; // [rsp+80h] [rbp-290h]
  const data::GrowCurveInfo *defense_curve_info_ptr; // [rsp+88h] [rbp-288h]
  const std::string *attack_key; // [rsp+90h] [rbp-280h]
  const std::string *mastery_key; // [rsp+98h] [rbp-278h]
  std::shared_ptr<Config> v242; // [rsp+A0h] [rbp-270h] BYREF
  std::shared_ptr<Config> v243; // [rsp+B0h] [rbp-260h] BYREF
  std::string v244; // [rsp+C0h] [rbp-250h] BYREF
  std::string v245; // [rsp+E0h] [rbp-230h] BYREF
  common::milog::MiLogStream v246; // [rsp+100h] [rbp-210h] BYREF
  char v247[496]; // [rsp+120h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v247;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 17 mastery_value:765 64 4 10 param1:766 80 4 10 param2:767 96 4 11 mastery:768 112 4 14 "
                        "propt_type:693 128 16 21 config_gadget_ptr:635 160 16 21 config_gadget_ptr:774 192 16 13 owner_p"
                        "tr:680 224 24 16 prop_map_vec:788 288 48 10 result:593 368 48 12 prop_map:691";
  *(_QWORD *)(v2 + 16) = Gadget::assignProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862733] = -202116109;
  is_skip_refresh_prop = 0;
  std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v2 + 288));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 192));
  p_gadget_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))->design_config.txt_config_mgr.gadget_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)defense_low.m128i_i64 = __asan_report_load4();
  }
  gadget_prop_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetPropExcelConfig(
                             p_gadget_config_mgr,
                             this->gadget_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
  if ( gadget_prop_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->hp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_prop_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->hp >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_QWORD *)&v6 = LODWORD(gadget_prop_config_ptr->hp);
    if ( *(float *)&v6 != 0.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = *(_QWORD *)this->baseclass_0 + 320LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(__int64 (__fastcall **)(Gadget *const, _QWORD, __int64, double))v7;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        v6 = __asan_report_load4();
      }
      level = this->level_;
      if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->hp_curve >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->hp_curve >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = __asan_report_load4();
      }
      hp_curve_info_ptr = (const data::GrowCurveInfo *)v8(
                                                         this,
                                                         (unsigned int)gadget_prop_config_ptr->hp_curve,
                                                         level,
                                                         v6);
      if ( !hp_curve_info_ptr )
      {
        common::milog::MiLogStream::create(
          &v246,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget.cpp",
          "assignProp",
          623);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v246,
          (const char (*)[23])"findCurveInfo hp fails");
        common::milog::MiLogStream::~MiLogStream(&v246);
        v10 = -1;
        goto LABEL_197;
      }
      if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->hp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_prop_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->hp >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      hp = gadget_prop_config_ptr->hp;
      if ( *(_BYTE *)(((unsigned __int64)&hp_curve_info_ptr->arith >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)hp_curve_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hp_curve_info_ptr->arith >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      arith = hp_curve_info_ptr->arith;
      if ( arith == ARITH_ADD )
      {
        if ( *(_BYTE *)(((unsigned __int64)&hp_curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&hp_curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        hpa = hp_curve_info_ptr->value + hp;
      }
      else
      {
        if ( arith != ARITH_MULTI )
        {
          common::milog::MiLogStream::create(
            &v246,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget.cpp",
            "assignProp",
            623);
          v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v246,
                  (const char (*)[15])"invalid arith:");
          common::milog::MiLogStream::operator<<<data::ArithType,(data::ArithType*)0>(v12, &hp_curve_info_ptr->arith);
          common::milog::MiLogStream::~MiLogStream(&v246);
          v10 = -1;
          goto LABEL_197;
        }
        if ( *(_BYTE *)(((unsigned __int64)&hp_curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&hp_curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        hpa = hp_curve_info_ptr->value * hp;
      }
      *(_DWORD *)(v2 + 112) = 1;
      v13 = std::map<data::FightPropType,float>::operator[](
              (std::map<data::FightPropType,float> *const)(v2 + 288),
              (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v13);
      }
      *v14 = hpa;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->attack >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_prop_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->attack >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_QWORD *)&v15 = LODWORD(gadget_prop_config_ptr->attack);
    if ( *(float *)&v15 != 0.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = *(_QWORD *)this->baseclass_0 + 320LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      v17 = *(__int64 (__fastcall **)(Gadget *const, _QWORD, __int64, double))v16;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        v15 = __asan_report_load4();
      }
      v18 = this->level_;
      if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->attack_curve >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->attack_curve >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = __asan_report_load4();
      }
      attack_curve_info_ptr = (const data::GrowCurveInfo *)v17(
                                                             this,
                                                             (unsigned int)gadget_prop_config_ptr->attack_curve,
                                                             v18,
                                                             v15);
      if ( !attack_curve_info_ptr )
      {
        common::milog::MiLogStream::create(
          &v246,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget.cpp",
          "assignProp",
          624);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          &v246,
          (const char (*)[27])"findCurveInfo attack fails");
        common::milog::MiLogStream::~MiLogStream(&v246);
        v10 = -1;
        goto LABEL_197;
      }
      if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->attack >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_prop_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->attack >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      attack = gadget_prop_config_ptr->attack;
      if ( *(_BYTE *)(((unsigned __int64)&attack_curve_info_ptr->arith >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)attack_curve_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&attack_curve_info_ptr->arith >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v19 = attack_curve_info_ptr->arith;
      if ( v19 == ARITH_ADD )
      {
        if ( *(_BYTE *)(((unsigned __int64)&attack_curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&attack_curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        attacka = attack_curve_info_ptr->value + attack;
      }
      else
      {
        if ( v19 != ARITH_MULTI )
        {
          common::milog::MiLogStream::create(
            &v246,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget.cpp",
            "assignProp",
            624);
          v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v246,
                  (const char (*)[15])"invalid arith:");
          common::milog::MiLogStream::operator<<<data::ArithType,(data::ArithType*)0>(
            v20,
            &attack_curve_info_ptr->arith);
          common::milog::MiLogStream::~MiLogStream(&v246);
          v10 = -1;
          goto LABEL_197;
        }
        if ( *(_BYTE *)(((unsigned __int64)&attack_curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&attack_curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        attacka = attack_curve_info_ptr->value * attack;
      }
      *(_DWORD *)(v2 + 112) = 4;
      v21 = std::map<data::FightPropType,float>::operator[](
              (std::map<data::FightPropType,float> *const)(v2 + 288),
              (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
      v22 = v21;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v21);
      }
      *v22 = attacka;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->defense >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_prop_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->defense >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    defense_low = (__m128i)LODWORD(gadget_prop_config_ptr->defense);
    if ( *(float *)defense_low.m128i_i32 != 0.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v23 = *(_QWORD *)this->baseclass_0 + 320LL;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v23 = __asan_report_load8();
      v24 = *(__int64 (__fastcall **)(Gadget *const, _QWORD, __int64, double))v23;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        *(double *)defense_low.m128i_i64 = __asan_report_load4();
      }
      v25 = this->level_;
      if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->defense_curve >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->defense_curve >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)defense_low.m128i_i64 = __asan_report_load4();
      }
      defense_curve_info_ptr = (const data::GrowCurveInfo *)v24(
                                                              this,
                                                              (unsigned int)gadget_prop_config_ptr->defense_curve,
                                                              v25,
                                                              *(double *)defense_low.m128i_i64);
      if ( !defense_curve_info_ptr )
      {
        common::milog::MiLogStream::create(
          &v246,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget.cpp",
          "assignProp",
          625);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v246,
          (const char (*)[28])"findCurveInfo defense fails");
        common::milog::MiLogStream::~MiLogStream(&v246);
        v10 = -1;
        goto LABEL_197;
      }
      if ( *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->defense >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_prop_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_prop_config_ptr->defense >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      defense = gadget_prop_config_ptr->defense;
      if ( *(_BYTE *)(((unsigned __int64)&defense_curve_info_ptr->arith >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)defense_curve_info_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&defense_curve_info_ptr->arith >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v26 = defense_curve_info_ptr->arith;
      if ( v26 == ARITH_ADD )
      {
        if ( *(_BYTE *)(((unsigned __int64)&defense_curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&defense_curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        defense_low = (__m128i)LODWORD(defense_curve_info_ptr->value);
        *(float *)defense_low.m128i_i32 = *(float *)defense_low.m128i_i32 + defense;
        defensea = defense_low.m128i_i32[0];
      }
      else
      {
        if ( v26 != ARITH_MULTI )
        {
          common::milog::MiLogStream::create(
            &v246,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget.cpp",
            "assignProp",
            625);
          v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  &v246,
                  (const char (*)[15])"invalid arith:");
          common::milog::MiLogStream::operator<<<data::ArithType,(data::ArithType*)0>(
            v27,
            &defense_curve_info_ptr->arith);
          common::milog::MiLogStream::~MiLogStream(&v246);
          v10 = -1;
          goto LABEL_197;
        }
        if ( *(_BYTE *)(((unsigned __int64)&defense_curve_info_ptr->value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&defense_curve_info_ptr->value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        defense_low = (__m128i)LODWORD(defense_curve_info_ptr->value);
        *(float *)defense_low.m128i_i32 = *(float *)defense_low.m128i_i32 * defense;
        defensea = defense_low.m128i_i32[0];
      }
      *(_DWORD *)(v2 + 112) = 7;
      v28 = std::map<data::FightPropType,float>::operator[](
              (std::map<data::FightPropType,float> *const)(v2 + 288),
              (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
      v29 = (__int32 *)v28;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v28);
      }
      *v29 = defensea;
    }
  }
  else
  {
    is_use_owner_level = 0;
    is_use_creator_prop = 1;
    is_use_buffed_prop = 0;
    std::vector<data::FightPropType>::vector((std::vector<data::FightPropType> *const)(v2 + 224));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 192));
    v30 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))
        + 93080;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)defense_low.m128i_i64 = __asan_report_load4();
    }
    JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 128), v30);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
    if ( !std::operator!=<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 128), 0LL) )
      goto LABEL_101;
    v31 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v31->combat.property.is_json_loaded >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v31 - 46) & 7) >= *(_BYTE *)(((unsigned __int64)&v31->combat.property.is_json_loaded >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load1(&v31->combat.property.is_json_loaded);
    }
    if ( v31->combat.property.is_json_loaded )
      v32 = 1;
    else
LABEL_101:
      v32 = 0;
    if ( v32 )
    {
      v33 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      property = &v33->combat.property;
      p_use_creator_property = &v33->combat.property.use_creator_property;
      if ( *(_BYTE *)(((unsigned __int64)p_use_creator_property >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_use_creator_property & 7) >= *(_BYTE *)(((unsigned __int64)p_use_creator_property >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load1(p_use_creator_property);
      }
      is_use_creator_prop = property->use_creator_property;
      if ( *(char *)(((unsigned __int64)&property->use_creator_buffed_property >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&property->use_creator_buffed_property);
      is_use_buffed_prop = property->use_creator_buffed_property;
      if ( !std::vector<data::CombatPropertyIndex>::empty(&property->use_creator_property_partly) )
      {
        is_use_creator_prop = 1;
        __for_range = &property->use_creator_property_partly;
        __for_begin._M_current = std::vector<data::CombatPropertyIndex>::begin(&property->use_creator_property_partly)._M_current;
        __for_end._M_current = std::vector<data::CombatPropertyIndex>::end(&property->use_creator_property_partly)._M_current;
        while ( __gnu_cxx::operator!=<data::CombatPropertyIndex *,std::vector<data::CombatPropertyIndex>>(
                  &__for_begin,
                  &__for_end) )
        {
          v35 = __gnu_cxx::__normal_iterator<data::CombatPropertyIndex *,std::vector<data::CombatPropertyIndex>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            *(double *)defense_low.m128i_i64 = __asan_report_load4();
          }
          switch ( *v35 )
          {
            case HP:
              *(_DWORD *)(v2 + 112) = 1;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              break;
            case ATTACK:
              *(_DWORD *)(v2 + 112) = 4;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              break;
            case DEFENSE:
              *(_DWORD *)(v2 + 112) = 7;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              break;
            case LEVEL:
              is_use_owner_level = 1;
              break;
            case ELEMENTADDHURT:
              *(_DWORD *)(v2 + 112) = 40;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              *(_DWORD *)(v2 + 112) = 43;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              *(_DWORD *)(v2 + 112) = 42;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              *(_DWORD *)(v2 + 112) = 41;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              *(_DWORD *)(v2 + 112) = 44;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              *(_DWORD *)(v2 + 112) = 46;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              *(_DWORD *)(v2 + 112) = 45;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              break;
            case DEFENSEIGNORE:
              *(_DWORD *)(v2 + 112) = 31;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              *(_DWORD *)(v2 + 112) = 32;
              std::vector<data::FightPropType>::push_back(
                (std::vector<data::FightPropType> *const)(v2 + 224),
                (std::vector<data::FightPropType>::value_type *)(v2 + 112));
              break;
            default:
              break;
          }
          __gnu_cxx::__normal_iterator<data::CombatPropertyIndex *,std::vector<data::CombatPropertyIndex>>::operator++(&__for_begin);
        }
      }
    }
    if ( is_use_creator_prop )
    {
      Gadget::getPropOwner((const Gadget *const)(v2 + 192));
      if ( std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 192), 0LL) )
      {
        Creature::getOwner((const Creature *const)(v2 + 160));
        std::shared_ptr<Creature>::operator=(
          (std::shared_ptr<Creature> *const)(v2 + 192),
          (std::shared_ptr<Creature> *)(v2 + 160));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 160));
      }
      if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 192), 0LL) )
      {
        v36 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        *(float *)defense_low.m128i_i32 = Creature::getProp(v36, FIGHT_PROP_ELEMENT_MASTERY);
        v37 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        FightPropComp = Creature::getFightPropComp(v37);
        defense_low = _mm_cvtsi32_si128(_mm_cvtsi128_si32(defense_low));
        *(float *)defense_low.m128i_i32 = FightPropComp::calcElemMasteryAddHurt(
                                            FightPropComp,
                                            *(float *)defense_low.m128i_i32);
        if ( !std::vector<data::FightPropType>::empty((const std::vector<data::FightPropType> *const)(v2 + 224)) )
        {
          std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v2 + 368));
          v39 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          v40 = Creature::getFightPropComp(v39);
          FightPropComp::getFightPropValueMap<std::map<data::FightPropType,float>>(
            v40,
            (std::map<data::FightPropType,float> *)(v2 + 368),
            is_use_buffed_prop);
          __for_range_0 = (std::vector<data::FightPropType> *)(v2 + 224);
          __for_begin._M_current = (data::CombatPropertyIndex *)std::vector<data::FightPropType>::begin((std::vector<data::FightPropType> *const)(v2 + 224))._M_current;
          __for_end._M_current = (data::CombatPropertyIndex *)std::vector<data::FightPropType>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<data::FightPropType *,std::vector<data::FightPropType>>(
                    (const __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *)&__for_end) )
          {
            v41 = __gnu_cxx::__normal_iterator<data::FightPropType *,std::vector<data::FightPropType>>::operator*((const __gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *const)&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
            {
              *(double *)defense_low.m128i_i64 = __asan_report_load4();
            }
            *(data::FightPropType *)(v2 + 112) = *v41;
            v42 = std::map<data::FightPropType,float>::operator[](
                    (std::map<data::FightPropType,float> *const)(v2 + 368),
                    (const std::map<data::FightPropType,float>::key_type *)(v2 + 112));
            if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
            {
              *(double *)defense_low.m128i_i64 = __asan_report_load4();
            }
            value = *(_DWORD *)v42;
            v43 = std::map<data::FightPropType,float>::operator[](
                    (std::map<data::FightPropType,float> *const)(v2 + 288),
                    (const std::map<data::FightPropType,float>::key_type *)(v2 + 112));
            v44 = v43;
            if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v43 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v43);
            }
            *v44 = value;
            __gnu_cxx::__normal_iterator<data::FightPropType *,std::vector<data::FightPropType>>::operator++((__gnu_cxx::__normal_iterator<data::FightPropType*,std::vector<data::FightPropType> > *const)&__for_begin);
          }
          std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v2 + 368));
        }
        else
        {
          v45 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          v46 = Creature::getFightPropComp(v45);
          FightPropComp::getFightPropValueMap<std::map<data::FightPropType,float>>(
            v46,
            (std::map<data::FightPropType,float> *)(v2 + 288),
            is_use_buffed_prop);
          is_use_owner_level = 1;
          if ( is_use_buffed_prop )
          {
            v47 = Creature::getFightPropComp(this);
            v48 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v49 = Creature::getFightPropComp(v48);
            v50 = ServiceBox::findService<GameserverService>();
            valuef = FightPropComp::getElementReactionAddHurt(
                       v49,
                       &v50->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_WATER_DELTA);
            v51 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v47,
              &v51->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_WATER_DELTA,
              valuef);
            v52 = Creature::getFightPropComp(this);
            v53 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v54 = Creature::getFightPropComp(v53);
            v55 = ServiceBox::findService<GameserverService>();
            valueg = FightPropComp::getElementReactionAddHurt(
                       v54,
                       &v55->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA);
            v56 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v52,
              &v56->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_FIRE_DELTA,
              valueg);
            v57 = Creature::getFightPropComp(this);
            v58 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v59 = Creature::getFightPropComp(v58);
            v60 = ServiceBox::findService<GameserverService>();
            valueh = FightPropComp::getElementReactionAddHurt(
                       v59,
                       &v60->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_ICE_DELTA);
            v61 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v57,
              &v61->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_ICE_DELTA,
              valueh);
            v62 = Creature::getFightPropComp(this);
            v63 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v64 = Creature::getFightPropComp(v63);
            v65 = ServiceBox::findService<GameserverService>();
            valuei = FightPropComp::getElementReactionAddHurt(
                       v64,
                       &v65->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA);
            v66 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v62,
              &v66->ability_data_mgr.ACTOR_ELEM_REACT_SWIRL_ELECTRIC_DELTA,
              valuei);
            v67 = Creature::getFightPropComp(this);
            v68 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v69 = Creature::getFightPropComp(v68);
            v70 = ServiceBox::findService<GameserverService>();
            valuej = FightPropComp::getElementReactionAddHurt(
                       v69,
                       &v70->ability_data_mgr.ACTOR_ELEM_REACT_SCONDUCT_DELTA);
            v71 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v67,
              &v71->ability_data_mgr.ACTOR_ELEM_REACT_SCONDUCT_DELTA,
              valuej);
            v72 = Creature::getFightPropComp(this);
            v73 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v74 = Creature::getFightPropComp(v73);
            v75 = ServiceBox::findService<GameserverService>();
            valuek = FightPropComp::getElementReactionAddHurt(v74, &v75->ability_data_mgr.ACTOR_ELEM_REACT_STEAM_DELTA);
            v76 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(v72, &v76->ability_data_mgr.ACTOR_ELEM_REACT_STEAM_DELTA, valuek);
            v77 = Creature::getFightPropComp(this);
            v78 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v79 = Creature::getFightPropComp(v78);
            v80 = ServiceBox::findService<GameserverService>();
            valuel = FightPropComp::getElementReactionAddHurt(v79, &v80->ability_data_mgr.ACTOR_ELEM_REACT_MELT_DELTA);
            v81 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(v77, &v81->ability_data_mgr.ACTOR_ELEM_REACT_MELT_DELTA, valuel);
            v82 = Creature::getFightPropComp(this);
            v83 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v84 = Creature::getFightPropComp(v83);
            v85 = ServiceBox::findService<GameserverService>();
            valuem = FightPropComp::getElementReactionAddHurt(
                       v84,
                       &v85->ability_data_mgr.ACTOR_ELEM_REACT_ELECTRIC_DELTA);
            v86 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v82,
              &v86->ability_data_mgr.ACTOR_ELEM_REACT_ELECTRIC_DELTA,
              valuem);
            v87 = Creature::getFightPropComp(this);
            v88 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v89 = Creature::getFightPropComp(v88);
            v90 = ServiceBox::findService<GameserverService>();
            valuen = FightPropComp::getElementReactionAddHurt(v89, &v90->ability_data_mgr.ACTOR_ELEM_REACT_BURN_DELTA);
            v91 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(v87, &v91->ability_data_mgr.ACTOR_ELEM_REACT_BURN_DELTA, valuen);
            v92 = Creature::getFightPropComp(this);
            v93 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v94 = Creature::getFightPropComp(v93);
            v95 = ServiceBox::findService<GameserverService>();
            valueo = FightPropComp::getElementReactionAddHurt(v94, &v95->ability_data_mgr.ACTOR_ELEM_REACT_FREEZE_DELTA);
            v96 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(v92, &v96->ability_data_mgr.ACTOR_ELEM_REACT_FREEZE_DELTA, valueo);
            v97 = Creature::getFightPropComp(this);
            v98 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v99 = Creature::getFightPropComp(v98);
            v100 = ServiceBox::findService<GameserverService>();
            valuep = FightPropComp::getElementReactionAddHurt(
                       v99,
                       &v100->ability_data_mgr.ACTOR_ELEM_REACT_EXPLODE_DELTA);
            v101 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v97,
              &v101->ability_data_mgr.ACTOR_ELEM_REACT_EXPLODE_DELTA,
              valuep);
            v102 = Creature::getFightPropComp(this);
            v103 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v104 = Creature::getFightPropComp(v103);
            v105 = ServiceBox::findService<GameserverService>();
            valueq = FightPropComp::getElementReactionAddHurt(
                       v104,
                       &v105->ability_data_mgr.ACTOR_ELEM_REACT_FROZENBROKEN_DELTA);
            v106 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v102,
              &v106->ability_data_mgr.ACTOR_ELEM_REACT_FROZENBROKEN_DELTA,
              valueq);
            v107 = Creature::getFightPropComp(this);
            v108 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v109 = Creature::getFightPropComp(v108);
            v110 = ServiceBox::findService<GameserverService>();
            valuer = FightPropComp::getElementReactionAddHurt(
                       v109,
                       &v110->ability_data_mgr.ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA);
            v111 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v107,
              &v111->ability_data_mgr.ACTOR_ELEM_REACT_OVERDOSE_ELECTRIC_DELTA,
              valuer);
            v112 = Creature::getFightPropComp(this);
            v113 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v114 = Creature::getFightPropComp(v113);
            v115 = ServiceBox::findService<GameserverService>();
            values = FightPropComp::getElementReactionAddHurt(
                       v114,
                       &v115->ability_data_mgr.ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA);
            v116 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v112,
              &v116->ability_data_mgr.ACTOR_ELEM_REACT_OVERDOSE_GRASS_DELTA,
              values);
            v117 = Creature::getFightPropComp(this);
            v118 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v119 = Creature::getFightPropComp(v118);
            v120 = ServiceBox::findService<GameserverService>();
            valuet = FightPropComp::getElementReactionAddHurt(
                       v119,
                       &v120->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_DELTA);
            v121 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v117,
              &v121->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_DELTA,
              valuet);
            v122 = Creature::getFightPropComp(this);
            v123 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v124 = Creature::getFightPropComp(v123);
            v125 = ServiceBox::findService<GameserverService>();
            valueu = FightPropComp::getElementReactionAddHurt(
                       v124,
                       &v125->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA);
            v126 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v122,
              &v126->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_FIRE_DELTA,
              valueu);
            v127 = Creature::getFightPropComp(this);
            v128 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v129 = Creature::getFightPropComp(v128);
            v130 = ServiceBox::findService<GameserverService>();
            valuev = FightPropComp::getElementReactionAddHurt(
                       v129,
                       &v130->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA);
            v131 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v127,
              &v131->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_ELECTRIC_DELTA,
              valuev);
            v132 = Creature::getFightPropComp(this);
            v133 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v134 = Creature::getFightPropComp(v133);
            v135 = ServiceBox::findService<GameserverService>();
            valuew = FightPropComp::getElementReactionAddHurt(
                       v134,
                       &v135->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA);
            v136 = ServiceBox::findService<GameserverService>();
            FightPropComp::setElementReactionAddHurt(
              v132,
              &v136->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_VARIATION_DELTA,
              valuew);
            v137 = Creature::getFightPropComp(this);
            v138 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            v139 = Creature::getFightPropComp(v138);
            v140 = ServiceBox::findService<GameserverService>();
            valuex = FightPropComp::getElementReactionAddHurt(
                       v139,
                       &v140->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA);
            v141 = ServiceBox::findService<GameserverService>();
            defense_low = (__m128i)LODWORD(valuex);
            FightPropComp::setElementReactionAddHurt(
              v137,
              &v141->ability_data_mgr.ACTOR_ELEM_REACT_OVERGROW_VARIATION_EXTRA_DELTA,
              valuex);
          }
        }
        if ( is_use_owner_level )
        {
          v142 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
          v143 = Creature::getLevel(v142);
          if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(&this->level_);
          }
          this->level_ = v143;
        }
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 192));
    }
    else if ( std::operator!=<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 128), 0LL) )
    {
      v144 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v144->combat.property.hp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v144 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v144->combat.property.hp >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      valuea = v144->combat.property.hp;
      *(_DWORD *)(v2 + 112) = 1;
      v145 = std::map<data::FightPropType,float>::operator[](
               (std::map<data::FightPropType,float> *const)(v2 + 288),
               (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
      v146 = v145;
      if ( *(_BYTE *)(((unsigned __int64)v145 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v145 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v145 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v145);
      }
      *v146 = valuea;
      v147 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v147->combat.property.attack >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v147->combat.property.attack >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      valueb = v147->combat.property.attack;
      *(_DWORD *)(v2 + 112) = 4;
      v148 = std::map<data::FightPropType,float>::operator[](
               (std::map<data::FightPropType,float> *const)(v2 + 288),
               (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
      v149 = v148;
      if ( *(_BYTE *)(((unsigned __int64)v148 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v148 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v148 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v148);
      }
      *v149 = valueb;
      v150 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v150->combat.property.defense >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v150 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v150->combat.property.defense >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      valuec = v150->combat.property.defense;
      *(_DWORD *)(v2 + 112) = 7;
      v151 = std::map<data::FightPropType,float>::operator[](
               (std::map<data::FightPropType,float> *const)(v2 + 288),
               (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
      v152 = v151;
      if ( *(_BYTE *)(((unsigned __int64)v151 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v151 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v151 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v151);
      }
      *v152 = valuec;
      *(_DWORD *)(v2 + 80) = 1;
      v153 = std::map<data::FightPropType,float>::operator[](
               (std::map<data::FightPropType,float> *const)(v2 + 288),
               (std::map<data::FightPropType,float>::key_type *)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v153 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v153 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v153 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      defense_low = (__m128i)*(unsigned int *)v153;
      if ( *(float *)defense_low.m128i_i32 != 0.0 )
        goto LABEL_165;
      *(_DWORD *)(v2 + 96) = 4;
      v154 = std::map<data::FightPropType,float>::operator[](
               (std::map<data::FightPropType,float> *const)(v2 + 288),
               (std::map<data::FightPropType,float>::key_type *)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v154 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v154 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      defense_low = (__m128i)*(unsigned int *)v154;
      if ( *(float *)defense_low.m128i_i32 != 0.0 )
        goto LABEL_165;
      *(_DWORD *)(v2 + 112) = 7;
      v155 = std::map<data::FightPropType,float>::operator[](
               (std::map<data::FightPropType,float> *const)(v2 + 288),
               (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)v155 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v155 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v155 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      defense_low = (__m128i)*(unsigned int *)v155;
      if ( *(float *)defense_low.m128i_i32 == 0.0 )
        v156 = 1;
      else
LABEL_165:
        v156 = 0;
      if ( v156 )
        is_skip_refresh_prop = 1;
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 128));
    std::vector<data::FightPropType>::~vector((std::vector<data::FightPropType> *const)(v2 + 224));
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 192));
  v157 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
  ConstValueExcelConfigMgr::getMechanicus2AtttackKey[abi:cxx11](
    &v244,
    &v157->design_config.txt_config_mgr.const_value_config_mgr);
  attack_key = &v244;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
  if ( AbilityComp::hasDynamicValue(&this->ability_comp_, attack_key) )
  {
    *(float *)defense_low.m128i_i32 = AbilityComp::getDynamicValue<float>(&this->ability_comp_, attack_key);
    *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(defense_low);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v242);
    v158 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v242);
    *(float *)defense_low.m128i_i32 = ConstValueExcelConfigMgr::getMechanicus2AtttackParam1(&v158->design_config.txt_config_mgr.const_value_config_mgr);
    *(_DWORD *)(v2 + 64) = _mm_cvtsi128_si32(defense_low);
    std::shared_ptr<Config>::~shared_ptr(&v242);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v243);
    v159 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v243);
    *(float *)defense_low.m128i_i32 = ConstValueExcelConfigMgr::getMechanicus2AtttackParam2(&v159->design_config.txt_config_mgr.const_value_config_mgr);
    *(_DWORD *)(v2 + 80) = _mm_cvtsi128_si32(defense_low);
    std::shared_ptr<Config>::~shared_ptr(&v243);
    defense_low = (__m128i)*(unsigned int *)(v2 + 64);
    *(float *)defense_low.m128i_i32 = *(float *)defense_low.m128i_i32
                                    + (float)(*(float *)(v2 + 80) * *(float *)(v2 + 48));
    *(_DWORD *)(v2 + 96) = defense_low.m128i_i32[0];
    valued = *(_DWORD *)(v2 + 96);
    *(_DWORD *)(v2 + 112) = 4;
    v160 = std::map<data::FightPropType,float>::operator[](
             (std::map<data::FightPropType,float> *const)(v2 + 288),
             (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
    v161 = v160;
    if ( *(_BYTE *)(((unsigned __int64)v160 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v160 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v160 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v160);
    }
    *v161 = valued;
    common::milog::MiLogStream::create(
      &v246,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "assignProp",
      758);
    v162 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v246, this);
    v163 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v162, attack_key);
    v164 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v163, (const char (*)[9])" param1:");
    v165 = common::milog::MiLogStream::operator<<<float,(float *)0>(v164, (const float *)(v2 + 64));
    v166 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v165, (const char (*)[9])" param2:");
    v167 = common::milog::MiLogStream::operator<<<float,(float *)0>(v166, (const float *)(v2 + 80));
    v168 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v167, (const char (*)[8])" value:");
    v169 = common::milog::MiLogStream::operator<<<float,(float *)0>(v168, (const float *)(v2 + 48));
    v170 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v169, (const char (*)[6])" res:");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v170, (const float *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v246);
    is_skip_refresh_prop = 0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 192));
  v171 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
  ConstValueExcelConfigMgr::getMechanicus2MasteryKey[abi:cxx11](
    &v245,
    &v171->design_config.txt_config_mgr.const_value_config_mgr);
  mastery_key = &v245;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
  if ( AbilityComp::hasDynamicValue(&this->ability_comp_, mastery_key) )
  {
    *(float *)defense_low.m128i_i32 = AbilityComp::getDynamicValue<float>(&this->ability_comp_, mastery_key);
    *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(defense_low);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v172 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    *(float *)defense_low.m128i_i32 = ConstValueExcelConfigMgr::getMechanicus2MasteryParam1(&v172->design_config.txt_config_mgr.const_value_config_mgr);
    *(_DWORD *)(v2 + 64) = _mm_cvtsi128_si32(defense_low);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 192));
    v173 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    *(float *)defense_low.m128i_i32 = ConstValueExcelConfigMgr::getMechanicus2MasteryParam2(&v173->design_config.txt_config_mgr.const_value_config_mgr);
    *(_DWORD *)(v2 + 80) = _mm_cvtsi128_si32(defense_low);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
    defense_low.m128i_i64[0] = *(unsigned int *)(v2 + 64);
    *(float *)defense_low.m128i_i32 = *(float *)defense_low.m128i_i32
                                    + (float)(*(float *)(v2 + 80) * *(float *)(v2 + 48));
    *(_DWORD *)(v2 + 96) = defense_low.m128i_i32[0];
    valuee = *(_DWORD *)(v2 + 96);
    *(_DWORD *)(v2 + 112) = 28;
    v174 = std::map<data::FightPropType,float>::operator[](
             (std::map<data::FightPropType,float> *const)(v2 + 288),
             (std::map<data::FightPropType,float>::key_type *)(v2 + 112));
    v175 = v174;
    if ( *(_BYTE *)(((unsigned __int64)v174 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v174 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v174 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v174);
    }
    *v175 = valuee;
    common::milog::MiLogStream::create(
      &v246,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "assignProp",
      770);
    v176 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(&v246, this);
    v177 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v176, mastery_key);
    v178 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v177, (const char (*)[9])" param1:");
    v179 = common::milog::MiLogStream::operator<<<float,(float *)0>(v178, (const float *)(v2 + 64));
    v180 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v179, (const char (*)[9])" param2:");
    v181 = common::milog::MiLogStream::operator<<<float,(float *)0>(v180, (const float *)(v2 + 80));
    v182 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v181, (const char (*)[8])" value:");
    v183 = common::milog::MiLogStream::operator<<<float,(float *)0>(v182, (const float *)(v2 + 48));
    v184 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v183, (const char (*)[6])" res:");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v184, (const float *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v246);
    is_skip_refresh_prop = 0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 192));
  v185 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))
       + 93080;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)defense_low.m128i_i64 = __asan_report_load4();
  }
  JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 160), v185);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
  if ( std::operator!=<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 160), 0LL) )
  {
    IsInvincible = FightPropComp::getIsInvincible(&this->fight_prop_comp_);
    v187 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    if ( *(char *)(((unsigned __int64)&v187->combat.property.is_invincible >> 3) + 0x7FFF8000) < 0 )
      v187 = (std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v187->combat.property.is_invincible);
    PileBoolValue::set(IsInvincible, 0, v187->combat.property.is_invincible);
    IsLockHp = FightPropComp::getIsLockHp(&this->fight_prop_comp_);
    v189 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&v189->combat.property.is_lock_hp >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v189 - 55) & 7) >= *(_BYTE *)(((unsigned __int64)&v189->combat.property.is_lock_hp >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&v189->combat.property.is_lock_hp);
    }
    PileBoolValue::set(IsLockHp, 0, v189->combat.property.is_lock_hp);
    v190 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&v190->combat.property.use_ability_property >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v190 - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&v190->combat.property.use_ability_property >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&v190->combat.property.use_ability_property);
    }
    FightPropComp::setIsUseAbilityProperty(&this->fight_prop_comp_, v190->combat.property.use_ability_property);
    v191 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&v191->combat.property.use_ability_property >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v191 - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&v191->combat.property.use_ability_property >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&v191->combat.property.use_ability_property);
    }
    if ( v191->combat.property.use_ability_property )
      is_skip_refresh_prop = 0;
  }
  if ( !is_skip_refresh_prop )
  {
    std::vector<std::map<data::FightPropType,float>>::vector((std::vector<std::map<data::FightPropType,float>> *const)(v2 + 224));
    v192 = this;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v193 = *(_QWORD *)this->baseclass_0 + 304LL;
    if ( *(_BYTE *)((v193 >> 3) + 0x7FFF8000) )
      v193 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Gadget *, double))v193)(v2 + 368, v192, *(double *)defense_low.m128i_i64);
    std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
      (std::vector<std::map<data::FightPropType,float>> *const)(v2 + 224),
      (std::map<data::FightPropType,float> *)(v2 + 368),
      (std::map<data::FightPropType,float> *)(v2 + 368));
    std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v2 + 368));
    v194 = std::move<std::map<data::FightPropType,float> &>((std::map<data::FightPropType,float> *)(v2 + 288));
    std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
      (std::vector<std::map<data::FightPropType,float>> *const)(v2 + 224),
      v194,
      v194);
    Creature::getAbilityProp((FightPropMap *)(v2 + 368), this);
    FightPropComp::refreshCalProp(
      &this->fight_prop_comp_,
      (const std::vector<std::map<data::FightPropType,float>> *)(v2 + 224),
      (const FightPropMap *)(v2 + 368));
    std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v2 + 368));
    std::vector<std::map<data::FightPropType,float>>::~vector((std::vector<std::map<data::FightPropType,float>> *const)(v2 + 224));
  }
  v10 = 0;
  std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 160));
  std::string::~string(&v245);
  std::string::~string(&v244);
LABEL_197:
  std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v2 + 288));
  result = v10;
  if ( v247 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 798: range 000000001752F9D4-00000000175300F8
int32_t __cdecl Gadget::initAbility(Gadget *const this, bool is_init)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  uint32_t v7; // ecx
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::ConfigMove,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // al
  data::ConfigMovePtr *p_move; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  char v16; // r14
  bool v17; // r15
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  std::less<long unsigned int> __comp; // [rsp+26h] [rbp-DAh] BYREF
  std::allocator<long unsigned int> __a; // [rsp+27h] [rbp-D9h] BYREF
  std::_Rb_tree_const_iterator<long unsigned int>::_Self __x; // [rsp+28h] [rbp-D8h] BYREF
  std::_Rb_tree_const_iterator<long unsigned int>::_Self __y; // [rsp+30h] [rbp-D0h] BYREF
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Scene> v26; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 13 hash_code:813 64 16 21 config_gadget_ptr:805";
  *(_QWORD *)(v2 + 16) = Gadget::initAbility;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  gadget_config_ptr = Gadget::getGadgetConfig(this);
  if ( gadget_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)
       + 93080;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v2 + 64), v7);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
    if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v2 + 64), 0LL) )
    {
      v6 = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&gadget_config_ptr->has_move >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&gadget_config_ptr->has_move);
      if ( !gadget_config_ptr->has_move )
        goto LABEL_18;
      v8 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( !std::operator!=<data::ConfigMove>(&v8->move, 0LL) )
        goto LABEL_18;
      v9 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = std::__shared_ptr_access<data::ConfigMove,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMove,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9->move);
      if ( *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v10 + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&v10->is_json_loaded);
      }
      if ( v10->is_json_loaded )
        v11 = 1;
      else
LABEL_18:
        v11 = 0;
      if ( v11 )
      {
        if ( !(_BYTE)`guard variable for'Gadget::initAbility(bool)::type_set
          && __cxa_guard_acquire(&`guard variable for'Gadget::initAbility(bool)::type_set) )
        {
          v27.log_ = (common::milog::MiLog *)std::type_info::hash_code((const std::type_info *const)&`typeinfo for'data::ConfigSimpleMove);
          v27.ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)std::type_info::hash_code((const std::type_info *const)&`typeinfo for'data::ConfigRigidbodyMove);
          v27.ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)std::type_info::hash_code((const std::type_info *const)&`typeinfo for'data::ConfigAnimatorMove);
          v27.ostr_ = (common::milog::MilogStringStream *)std::type_info::hash_code((const std::type_info *const)&`typeinfo for'data::ConfigMixinDriveMove);
          std::allocator<unsigned long>::allocator(&__a);
          std::set<unsigned long>::set(
            &Gadget::initAbility(bool)::type_set,
            (std::initializer_list<long unsigned int>)__PAIR128__(4LL, &v27),
            &__comp,
            &__a);
          __cxa_guard_release(&`guard variable for'Gadget::initAbility(bool)::type_set);
          __cxa_atexit(
            (void (__fastcall *)(void *))std::set<unsigned long>::~set,
            &Gadget::initAbility(bool)::type_set,
            &_dso_handle);
          std::allocator<unsigned long>::~allocator(&__a);
        }
        p_move = &std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->move;
        v13 = (unsigned __int64)std::__shared_ptr_access<data::ConfigMove,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::ConfigMove,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_move);
        if ( !v13 )
        {
          __asan_handle_no_return();
          __cxa_bad_typeid();
        }
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8();
        v14 = *(_QWORD *)v13;
        if ( *(_BYTE *)(((unsigned __int64)(v14 - 8) >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        *(_QWORD *)(v2 + 32) = std::type_info::hash_code(*(const std::type_info *const *)(v14 - 8));
        __y._M_node = std::set<unsigned long>::end(&Gadget::initAbility(bool)::type_set)._M_node;
        __x._M_node = std::set<unsigned long>::find(
                        &Gadget::initAbility(bool)::type_set,
                        (const std::set<long unsigned int>::key_type *)(v2 + 32))._M_node;
        if ( std::operator!=(&__x, &__y) )
        {
          if ( *(char *)(((unsigned __int64)&this->is_non_humanoid_move_ >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_non_humanoid_move_);
          this->is_non_humanoid_move_ = 1;
        }
      }
      v15 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      AbilityComp::setInitAbilities(&this->ability_comp_, &v15->abilities);
      v16 = 0;
      v17 = 0;
      if ( is_init )
      {
        std::shared_ptr<Scene>::shared_ptr(&v26, 0LL);
        v16 = 1;
        if ( AbilityComp::init(&this->ability_comp_, &v26) )
          v17 = 1;
      }
      if ( v16 )
        std::shared_ptr<Scene>::~shared_ptr(&v26);
      if ( v17 )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget.cpp",
          "initAbility",
          822);
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v27, (const char (*)[11])"init fails");
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v18, this);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v6 = -1;
      }
      else
      {
        v6 = 0;
      }
    }
    std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget.cpp",
      "initAbility",
      802);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v27,
           (const char (*)[22])"getGadgetConfig fails");
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v6 = -1;
  }
  result = v6;
  if ( v28 == (char *)v2 )
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
  return result;
};

// Line 830: range 00000000175300FA-000000001753090C
int32_t __cdecl Gadget::doHurt(Gadget *const this, Player *player, Creature *attacker, HurtContext *context)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rbx
  void (__fastcall **v8)(std::string *, Gadget *const); // rax
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // r14
  char v13; // r15
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  ScriptContext *v17; // r14
  LuaScript *v18; // rax
  int32_t result; // eax
  int *v20; // [rsp+0h] [rbp-250h]
  std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // [rsp+8h] [rbp-248h]
  std::allocator<char> __a; // [rsp+37h] [rbp-219h] BYREF
  int ElementType; // [rsp+38h] [rbp-218h] BYREF
  int StrikeType; // [rsp+3Ch] [rbp-214h] BYREF
  ScriptContext *v27; // [rsp+40h] [rbp-210h]
  Gadget *__for_range; // [rsp+48h] [rbp-208h]
  const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > *v29; // [rsp+50h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *comp_type; // [rsp+58h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+60h] [rbp-1F0h]
  ScriptContext *o; // [rsp+68h] [rbp-1E8h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+70h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-1D0h] BYREF
  std::string val; // [rsp+A0h] [rbp-1B0h] BYREF
  int v36[100]; // [rsp+C0h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v36;
  v20 = v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 1 11 is_host:850 64 16 14 script_ptr:842 96 16 14 player_ptr:849 128 160 18 script_context:845";
  *(_QWORD *)(v4 + 16) = Gadget::doHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862729] = -202116109;
  v6[536862730] = -202116109;
  if ( Creature::doHurt(this, player, attacker, context) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "doHurt",
      833);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v34,
           (const char (*)[24])"Creature::doHurt failed");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = *(void (__fastcall ***)(std::string *, Gadget *const))this->baseclass_0;
    if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
      v8 = (void (__fastcall **)(std::string *, Gadget *const))__asan_report_load8();
    (*v8)(&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v9 = -1;
  }
  else
  {
    __for_range = this;
    EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
    EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)(v4 + 96));
    while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(
              &__for_begin,
              (const EcsBase<Gadget,GadgetCompBase,28>::Iterator *)(v4 + 96)) )
    {
      v29 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
      comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v29);
      gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v29);
      v10 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(_QWORD *)v10 + 72LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Creature *, HurtContext *))v11)(v10, attacker, context);
      EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
    }
    Gadget::getScript((const Gadget *const)(v4 + 64));
    v12 = 0;
    v13 = 0;
    LOBYTE(v21) = std::operator!=<LuaScript>((const std::shared_ptr<LuaScript> *)(v4 + 64), 0LL)
               && (v21 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
                   std::allocator<char>::allocator(&__a),
                   v12 = 1,
                   std::string::basic_string<std::allocator<char>>(&val, "OnBeHurt", &__a),
                   v13 = 1,
                   LuaScript::hasFunction(v21, &val));
    if ( v13 )
      std::string::~string(&val);
    if ( v12 )
      std::allocator<char>::~allocator(&__a);
    if ( (_BYTE)v21 )
    {
      ScriptContext::ScriptContext((ScriptContext *const)(v4 + 128));
      toThisPtr<Gadget>((Gadget *)&__for_begin);
      std::weak_ptr<Gadget>::operator=<Gadget>(
        (std::weak_ptr<Gadget> *const)(v4 + 176),
        (const std::shared_ptr<Gadget> *)&__for_begin);
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&__for_begin);
      Entity::getScene((const Entity *const)(v4 + 96));
      ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v4 + 128), (ScenePtr *)(v4 + 96));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
      Entity::getGroup((const Entity *const)(v4 + 96));
      std::weak_ptr<Group>::operator=<Group>(
        (std::weak_ptr<Group> *const)(v4 + 144),
        (const std::shared_ptr<Group> *)(v4 + 96));
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 96));
      Creature::getAncestryOwnerPlayer((Creature *const)(v4 + 96));
      *(_BYTE *)(v4 + 48) = 0;
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 96), 0LL) )
      {
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        *(_DWORD *)(v4 + 216) = Player::getUid(v14);
        v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        SceneComp = Player::getSceneComp(v15);
        *(_BYTE *)(v4 + 48) = PlayerSceneComp::isInMyPlayerWorld(SceneComp);
      }
      StrikeType = HurtContext::getStrikeType(context);
      ElementType = HurtContext::getElementType(context);
      o = (ScriptContext *)(v4 + 128);
      v27 = boost::addressof<ScriptContext>((ScriptContext *)(v4 + 128));
      v17 = v27;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&val, "OnBeHurt", &__a);
      v18 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      ScriptLib::executeFuncWithErrorNotify<void,int,int,bool &>(
        v18,
        &val,
        v17,
        &ElementType,
        &StrikeType,
        (bool *)(v4 + 48),
        v36,
        (int *)v21,
        (bool *)context);
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 96));
      ScriptContext::~ScriptContext((ScriptContext *const)(v4 + 128));
    }
    v9 = 0;
    std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v4 + 64));
  }
  result = v9;
  if ( v20 == (int *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 866: range 000000001753090E-0000000017530BF3
int32_t __cdecl Gadget::interactCheck(Gadget *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 interact_comp_ptr:874";
  *(_QWORD *)(v3 + 16) = Gadget::interactCheck;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !Gadget::isEnableInteract(this) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "interactCheck",
      869);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v14,
           (const char (*)[26])"isEnableInteract failed: ");
    val = Gadget::getGadgetId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = 802;
  }
  else
  {
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetBaseInteractComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 32));
    if ( std::operator==<GadgetBaseInteractComp>((const std::shared_ptr<GadgetBaseInteractComp> *)(v3 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget.cpp",
        "interactCheck",
        877);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v14, (const char (*)[37])off_26124BC0);
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v7 = 802;
    }
    else
    {
      v9 = (unsigned __int64)std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = *(_QWORD *)v9 + 128LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v7 = (*(__int64 (__fastcall **)(unsigned __int64, Player *, const EntityInteractParam *))v10)(v9, player, param);
    }
    std::shared_ptr<GadgetBaseInteractComp>::~shared_ptr((std::shared_ptr<GadgetBaseInteractComp> *const)(v3 + 32));
  }
  result = v7;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 885: range 0000000017530BF4-0000000017531040
int32_t __cdecl Gadget::interact(Gadget *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 ret:900 64 16 21 interact_comp_ptr:894";
  *(_QWORD *)(v3 + 16) = Gadget::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  if ( !Gadget::isEnableInteract(this) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "interact",
      889);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v19,
           (const char (*)[26])"isEnableInteract failed: ");
    val = Gadget::getGadgetId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = 802;
  }
  else
  {
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetBaseInteractComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 64));
    if ( std::operator==<GadgetBaseInteractComp>((const std::shared_ptr<GadgetBaseInteractComp> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget.cpp",
        "interact",
        897);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(&v19, (const char (*)[37])off_26124BC0);
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v7 = 802;
    }
    else
    {
      v9 = (unsigned __int64)std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = *(_QWORD *)v9 + 128LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      *(_DWORD *)(v3 + 48) = (*(__int64 (__fastcall **)(unsigned __int64, Player *, const EntityInteractParam *))v10)(
                               v9,
                               player,
                               param);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget.cpp",
          "interact",
          903);
        v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v19,
                (const char (*)[20])"interactCheck ret: ");
        v12 = common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v3 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" uid: ");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v7 = *(_DWORD *)(v3 + 48);
      }
      else
      {
        v14 = (unsigned __int64)std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        v15 = *(_QWORD *)v14 + 136LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8();
        v7 = (*(__int64 (__fastcall **)(unsigned __int64, Player *, const EntityInteractParam *))v15)(
               v14,
               player,
               param);
      }
    }
    std::shared_ptr<GadgetBaseInteractComp>::~shared_ptr((std::shared_ptr<GadgetBaseInteractComp> *const)(v3 + 64));
  }
  result = v7;
  if ( v20 == (char *)v3 )
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

// Line 911: range 0000000017531042-00000000175311BF
proto::InteractType __cdecl Gadget::getInteractType(const Gadget *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::InteractType v4; // r14d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  proto::InteractType result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 interact_comp_ptr:912";
  *(_QWORD *)(v1 + 16) = Gadget::getInteractType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetBaseInteractComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v1 + 32));
  if ( std::operator==<GadgetBaseInteractComp>((const std::shared_ptr<GadgetBaseInteractComp> *)(v1 + 32), 0LL) )
  {
    v4 = INTERACT_NONE;
  }
  else
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetBaseInteractComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v6 = *(_QWORD *)v5 + 144LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    v4 = (*(unsigned int (__fastcall **)(unsigned __int64))v6)(v5);
  }
  std::shared_ptr<GadgetBaseInteractComp>::~shared_ptr((std::shared_ptr<GadgetBaseInteractComp> *const)(v1 + 32));
  result = v4;
  if ( v8 == (char *)v1 )
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

// Line 922: range 00000000175311C0-00000000175312E4
int32_t __cdecl Gadget::beforeEnterPlayerView(Gadget *const this, Player *player)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v5; // [rsp+18h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+28h] [rbp-28h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+40h] [rbp-10h] BYREF

  Creature::beforeEnterPlayerView(this, player);
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v5 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    v2 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 80LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Player *))v3)(v2, player);
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 933: range 00000000175312E6-000000001753140A
int32_t __cdecl Gadget::onEnterPlayerView(Gadget *const this, Player *player)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v5; // [rsp+18h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+28h] [rbp-28h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+40h] [rbp-10h] BYREF

  Creature::onEnterPlayerView(this, player);
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v5 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    v2 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 88LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Player *))v3)(v2, player);
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 944: range 000000001753140C-0000000017531530
int32_t __cdecl Gadget::onExitPlayerView(Gadget *const this, Player *player)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  const EcsBase<Gadget,GadgetCompBase,28>::CompBasePair *v5; // [rsp+18h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+28h] [rbp-28h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+40h] [rbp-10h] BYREF

  Creature::onExitPlayerView(this, player);
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v5 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v5);
    v2 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 96LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Player *))v3)(v2, player);
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 954: range 0000000017531532-0000000017531B1D
// local variable allocation has failed, the output may be wrong!
void __cdecl Gadget::onChangeHp(Gadget *const this, float old_hp, ChangeHpContext *context)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __m128i v6; // xmm0
  common::milog::MiLogStream *v7; // rdx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_source_entity_id; // rax
  int32_t v12; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  int32_t *p_param3; // rax
  Group *v18; // rax
  Group *v19; // rax
  ChallengeComp *ChallengeComp; // rcx
  float max_hp; // [rsp+24h] [rbp-BCh]
  uint32_t old_hp_percent; // [rsp+28h] [rbp-B8h]
  uint32_t cur_hp_percent; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 group_ptr:961 64 16 11 evt_ptr:968";
  *(_QWORD *)(v3 + 16) = Gadget::onChangeHp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  *(float *)v6.m128i_i32 = Creature::getMaxHp(this);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( max_hp >= 0.00000011920929 )
  {
    Entity::getGroup((const Entity *const)(v3 + 32));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v3 + 32), 0LL) )
    {
      old_hp_percent = (int)(float)((float)(100.0 * old_hp) / max_hp);
      cur_hp_percent = (int)(float)((float)(Creature::getCurHp(this) * 100.0) / max_hp);
      if ( old_hp_percent / 0xA != cur_hp_percent / 0xA )
      {
        EventUtil::createEvent((data::EventType)(v3 + 64));
        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 64), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          std::to_string((std::string *)&v25, *(_DWORD *)&this->baseclass_0[260]);
          v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          std::string::operator=(&v8->source_name, &v25);
          std::string::~string(&v25);
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v9 = *(_DWORD *)&this->baseclass_0[256];
          v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_source_entity_id = &v10->source_entity_id;
          if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(p_source_entity_id);
          }
          v10->source_entity_id = v9;
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v12 = *(_DWORD *)&this->baseclass_0[260];
          v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_param1 = &v13->param1;
          if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_param1);
          }
          v13->param1 = v12;
          v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v15->param2 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v15->param2 >> 3) + 0x7FFF8000) <= 3 )
          {
            v15 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v15->param2);
          }
          v15->param2 = old_hp_percent;
          v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          p_param3 = &v16->param3;
          if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_param3);
          }
          v16->param3 = cur_hp_percent;
          v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          Group::handleEvent(v18, (EventPtr *)(v3 + 64));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget.cpp",
            "onChangeHp",
            980);
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v25,
            (const char (*)[50])"createEvent EVENT_SPECIFIC_GADGET_HP_CHANGE fails");
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 64));
      }
      v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      ChallengeComp = Group::getChallengeComp(v19);
      ChallengeComp::onGadgetHpPercentChange(ChallengeComp, this, context);
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/gadget.cpp",
      "onChangeHp",
      958);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v25, (const char (*)[17])"invalid max hp: ");
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  if ( v26 == (char *)v3 )
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
};

// Line 990: range 0000000017531BF6-0000000017532C8A
void __cdecl Gadget::onDie(Gadget *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool is_ban_drop; // cl
  unsigned int *v6; // r9
  Player *v7; // rax
  ActorAbility *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char v13; // r14
  char v14; // r15
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  ScriptContext *v17; // r14
  LuaScript *v18; // rax
  int *v19; // r9
  Group *v20; // rdx
  GatherComp *v21; // r14
  int Now; // eax
  unsigned __int64 v23; // rax
  void (__fastcall *v24)(Gadget *const, VisionContext *); // r15
  int v25; // r14d
  uint32_t v26; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  uint32_t *p_source_entity_id; // rax
  int32_t v29; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rdx
  uint32_t *p_uid; // rax
  Group *v36; // rax
  GadgetVehicleComp *v37; // rdx
  int *v38; // [rsp+0h] [rbp-2A0h]
  unsigned int *v39; // [rsp+8h] [rbp-298h]
  PlayerEventComp *EventComp; // [rsp+8h] [rbp-298h]
  Scene *v41; // [rsp+8h] [rbp-298h]
  LuaScript *v42; // [rsp+8h] [rbp-298h]
  bool v43; // [rsp+8h] [rbp-298h]
  std::allocator<char> __a; // [rsp+23h] [rbp-27Dh] BYREF
  unsigned int ConfigId; // [rsp+24h] [rbp-27Ch] BYREF
  unsigned int GroupId; // [rsp+28h] [rbp-278h] BYREF
  unsigned int __args_0; // [rsp+2Ch] [rbp-274h] BYREF
  data::ElementType element_type; // [rsp+30h] [rbp-270h]
  data::StrikeType strike_type; // [rsp+34h] [rbp-26Ch]
  ScriptContext *v50; // [rsp+38h] [rbp-268h]
  const std::string *ability_name; // [rsp+40h] [rbp-260h]
  ScriptContext *o; // [rsp+48h] [rbp-258h]
  VisionContext v53; // [rsp+54h] [rbp-24Ch] BYREF
  std::shared_ptr<GadgetDieEvent> __r; // [rsp+60h] [rbp-240h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+70h] [rbp-230h] BYREF
  unsigned int v56[132]; // [rsp+90h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v56;
  v38 = (int *)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 16 13 scene_ptr:993 64 16 20 gadget_comp_ptr:1017 96 16 20 widget_comp_ptr:1024 128 16 15 s"
                        "cript_ptr:1034 160 16 14 group_ptr:1052 192 16 12 evt_ptr:1073 224 16 16 vehicle_ptr:1093 256 16"
                        "0 19 script_context:1037";
  *(_QWORD *)(v2 + 16) = Gadget::onDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  Creature::onDie(this, context);
  if ( *(char *)(((unsigned __int64)&context->is_ban_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&context->is_ban_drop);
  is_ban_drop = context->is_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_ban_drop_);
  }
  this->is_ban_drop_ = is_ban_drop;
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Scene::getOwnPlayer((const Scene *const)(v2 + 160));
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 160), 0LL) )
    {
      __args_0 = Entity::getEntityId((const Entity *const)this);
      GroupId = Entity::getGroupId((const Entity *const)this);
      ConfigId = Entity::getConfigId((const Entity *const)this);
      common::tools::perf::make_shared<GadgetDieEvent,unsigned int &,unsigned int,unsigned int,unsigned int>(
        (unsigned int *)&__r,
        &this->gadget_id_,
        &ConfigId,
        &GroupId,
        &__args_0,
        v6,
        v56,
        v39);
      std::shared_ptr<BaseEvent>::shared_ptr<GadgetDieEvent,void>((std::shared_ptr<BaseEvent> *const)(v2 + 192), &__r);
      std::shared_ptr<GadgetDieEvent>::~shared_ptr(&__r);
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      EventComp = Player::getEventComp(v7);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)(v2 + 224),
        (const std::shared_ptr<BaseEvent> *)(v2 + 192));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 224));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 224));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 192));
    }
    std::weak_ptr<ActorAbility>::lock((const std::weak_ptr<ActorAbility> *const)(v2 + 224));
    if ( std::operator!=<ActorAbility>(0LL, (const std::shared_ptr<ActorAbility> *)(v2 + 224)) )
    {
      v8 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
      ability_name = &ActorAbility::getConfigRef(v8)->ability_name;
      v41 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<Gadget::onDie(ChangeHpContext &)::{lambda(Player &)#1},void,void>(
        &p_func,
        (Gadget::onDie::<lambda(Player&)>)__PAIR128__((unsigned __int64)this, (unsigned __int64)ability_name));
      Scene::foreachPlayer(v41, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    }
    std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 224));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
  }
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<MiracleRingComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
  if ( std::operator!=<MiracleRingComp>((const std::shared_ptr<MiracleRingComp> *)(v2 + 64), 0LL) )
  {
    v9 = (unsigned __int64)std::__shared_ptr_access<MiracleRingComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MiracleRingComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 112LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v10)(v9);
  }
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<WidgetGadgetComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 96));
  if ( std::operator!=<WidgetGadgetComp>((const std::shared_ptr<WidgetGadgetComp> *)(v2 + 96), 0LL) )
  {
    v11 = (unsigned __int64)std::__shared_ptr_access<WidgetGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<WidgetGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    v12 = *(_QWORD *)v11 + 112LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v12)(v11);
  }
  Gadget::dropDie(this);
  Gadget::getScript((const Gadget *const)(v2 + 128));
  v13 = 0;
  v14 = 0;
  v43 = 0;
  if ( std::operator!=<LuaScript>((const std::shared_ptr<LuaScript> *)(v2 + 128), 0LL) )
  {
    v42 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    std::allocator<char>::allocator(&__a);
    v13 = 1;
    std::string::basic_string<std::allocator<char>>((std::string *const)&p_func, "OnDie", &__a);
    v14 = 1;
    if ( LuaScript::hasFunction(v42, (const std::string *)&p_func) )
      v43 = 1;
  }
  if ( v14 )
    std::string::~string(&p_func);
  if ( v13 )
    std::allocator<char>::~allocator(&__a);
  if ( v43 )
  {
    ScriptContext::ScriptContext((ScriptContext *const)(v2 + 256));
    toThisPtr<Gadget>((Gadget *)(v2 + 192));
    std::weak_ptr<Gadget>::operator=<Gadget>(
      (std::weak_ptr<Gadget> *const)(v2 + 304),
      (const std::shared_ptr<Gadget> *)(v2 + 192));
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 192));
    Entity::getScene((const Entity *const)(v2 + 224));
    ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v2 + 256), (ScenePtr *)(v2 + 224));
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 224));
    element_type = None_0;
    strike_type = None_1;
    if ( std::operator!=<HurtContext>(0LL, &this->hurt_context_ptr_) )
    {
      v15 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hurt_context_ptr_);
      element_type = HurtContext::getElementType(v15);
      v16 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hurt_context_ptr_);
      strike_type = HurtContext::getStrikeType(v16);
    }
    __args_0 = strike_type;
    GroupId = element_type;
    o = (ScriptContext *)(v2 + 256);
    v50 = boost::addressof<ScriptContext>((ScriptContext *)(v2 + 256));
    v17 = v50;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&p_func, "OnDie", &__a);
    v18 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    ScriptLib::executeFuncWithErrorNotify<void,int,int>(
      v18,
      (const std::string *)&p_func,
      v17,
      (int *)&GroupId,
      (int *)&__args_0,
      v19,
      v38);
    std::string::~string(&p_func);
    std::allocator<char>::~allocator(&__a);
    ScriptContext::~ScriptContext((ScriptContext *const)(v2 + 256));
  }
  Gadget::logDie(this, context);
  Entity::getGroup((const Entity *const)(v2 + 160));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 160), 0LL) )
  {
    v20 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    Group::onGroupGadgetDieEvent(v20, this);
    *(_QWORD *)(v2 + 192) = 0LL;
    *(_QWORD *)(v2 + 200) = 0LL;
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GatherComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 224));
    std::shared_ptr<GatherComp>::operator=(
      (std::shared_ptr<GatherComp> *const)(v2 + 192),
      (std::shared_ptr<GatherComp> *)(v2 + 224));
    std::shared_ptr<GatherComp>::~shared_ptr((std::shared_ptr<GatherComp> *const)(v2 + 224));
    if ( std::operator!=<GatherComp>((const std::shared_ptr<GatherComp> *)(v2 + 192), 0LL) )
    {
      v21 = std::__shared_ptr_access<GatherComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GatherComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      std::shared_ptr<Group>::shared_ptr(
        (std::shared_ptr<Group> *const)(v2 + 224),
        (const std::shared_ptr<Group> *)(v2 + 160));
      GatherComp::setGatherTime(v21, (GroupPtr *)(v2 + 224));
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 224));
    }
    std::shared_ptr<GatherComp>::~shared_ptr((std::shared_ptr<GatherComp> *const)(v2 + 192));
  }
  Now = common::tools::TimeUtils::getNow();
  Entity::setDeadClearTime((Entity *const)this, Now + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v23 = *(_QWORD *)this->baseclass_0 + 128LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    v23 = __asan_report_load8();
  v24 = *(void (__fastcall **)(Gadget *const, VisionContext *))v23;
  VisionContext::VisionContext(&v53, VISION_DIE);
  v24(this, &v53);
  Gadget::procFoundationOnDie(this, context);
  if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 160), 0LL) )
    goto LABEL_65;
  EventUtil::createEvent((data::EventType)(v2 + 192));
  if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 192), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget.cpp",
      "onDie",
      1076);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)&p_func,
      (const char (*)[18])"createEvent fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v25 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v26 = *(_DWORD *)&this->baseclass_0[256];
    v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    p_source_entity_id = &v27->source_entity_id;
    if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_store4(p_source_entity_id);
    }
    v27->source_entity_id = v26;
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v29 = *(_DWORD *)&this->baseclass_0[260];
    v30 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
    p_param1 = &v30->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v30->param1 = v29;
    if ( std::operator!=<Creature>(&context->attacker_ptr, 0LL) )
    {
      std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
      Creature::getAncestryOwnerPlayer((Creature *const)(v2 + 224));
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 224)) )
      {
        v32 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
        Uid = Player::getUid(v32);
        v34 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        p_uid = &v34->uid;
        if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_uid);
        }
        v34->uid = Uid;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 224));
    }
    v36 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    Group::handleEvent(v36, (EventPtr *)(v2 + 192));
    v25 = 1;
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 192));
  if ( v25 == 1 )
  {
LABEL_65:
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 224));
    if ( std::operator!=<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v2 + 224)) )
    {
      v37 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
      GadgetVehicleComp::onDie(v37, context);
    }
    std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v2 + 224));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 160));
  std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v2 + 128));
  std::shared_ptr<WidgetGadgetComp>::~shared_ptr((std::shared_ptr<WidgetGadgetComp> *const)(v2 + 96));
  std::shared_ptr<MiracleRingComp>::~shared_ptr((std::shared_ptr<MiracleRingComp> *const)(v2 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v38 == (int *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 1008: range 0000000017531B1E-0000000017531BF4
ForeachPolicy __cdecl Gadget::onDie(ChangeHpContext &)::{lambda(Player &)#1}::operator()(
        const Gadget::onDie::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerWatcherComp *WatcherComp; // rbx
  uint32_t GadgetId; // r12d
  uint32_t GroupId; // esi

  WatcherComp = Player::getWatcherComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(__closure->__this);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GroupId = Entity::getGroupId((const Entity *const)__closure->__this);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerWatcherComp::triggerKillGadgetsBySpecificSkill(WatcherComp, __closure->__ability_name, GroupId, GadgetId);
  return 0;
};

// Line 1102: range 0000000017532C8C-00000000175333BD
void __cdecl Gadget::dropDie(Gadget *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned __int64 v4; // rax
  char v5; // al
  Scene *v6; // r14
  Vector3 *Position; // rax
  std::shared_ptr<Player> *M_current; // r14
  std::vector<std::shared_ptr<Player>>::iterator v9; // rax
  data::ItemLimitType GadgetItemLimitType; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  Gadget *thisa; // [rsp+8h] [rbp-1B8h]
  __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > __rhs; // [rsp+20h] [rbp-1A0h] BYREF
  std::vector<std::shared_ptr<Player>> *drop_players_ptr; // [rsp+28h] [rbp-198h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-190h] BYREF
  char v23[368]; // [rsp+50h] [rbp-170h] BYREF

  thisa = this;
  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 8 9 iter:1116 64 16 14 scene_ptr:1107 96 16 21 owner_player_ptr:1113 128 24 15 player_vec:1"
                        "114 192 24 21 owner_player_vec:1115 256 24 11 reason:1132";
  *(_QWORD *)(v1 + 16) = Gadget::dropDie;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  if ( Entity::isBanLootByOneoff((Entity *const)this) )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ban_drop_);
  }
  if ( this->is_ban_drop_ )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *(_QWORD *)this->baseclass_0 + 32LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Gadget *const))v4)(this) == 26 )
    goto LABEL_16;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->drop_id_ )
LABEL_16:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    Entity::getScene((const Entity *const)(v1 + 64));
    if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Scene::getOwnPlayer((const Scene *const)(v1 + 96));
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Position = (Vector3 *)Entity::getPosition((const Entity *const)this);
      if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) )
      {
        Position = (Vector3 *)__asan_report_load_n(Position, 12LL);
      }
      Scene::getDropSurroundPlayers((std::vector<std::shared_ptr<Player>> *)(v1 + 128), v6, *Position);
      std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 192));
      M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v1 + 128))._M_current;
      v9._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v1 + 128))._M_current;
      *(__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v1 + 32) = std::find<__gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>,std::shared_ptr<Player>>(v9, (__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> >)M_current, (const std::shared_ptr<Player> *)(v1 + 96));
      __rhs._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v1 + 128))._M_current;
      if ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
             (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v1 + 32),
             &__rhs)
        && std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
      {
        std::vector<std::shared_ptr<Player>>::push_back(
          (std::vector<std::shared_ptr<Player>> *const)(v1 + 192),
          (const std::vector<std::shared_ptr<Player>>::value_type *)(v1 + 96));
      }
      drop_players_ptr = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( (this->guest_ban_drop_ & 1) != 0 )
        drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v1 + 192);
      else
        drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v1 + 128);
      GadgetItemLimitType = Gadget::getGadgetItemLimitType(this);
      ActionReason::ActionReason((ActionReason *const)(v1 + 256), ACTION_REASON_GADGET_DIE, GadgetItemLimitType);
      if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        this = (Gadget *const)((char *)this + 2680);
        __asan_report_load4();
      }
      Entity::dropItemsForPlayers(
        (Entity *const)this,
        thisa->drop_id_,
        1u,
        (const ActionReason *)(v1 + 256),
        drop_players_ptr);
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/gadget.cpp",
        "dropDie",
        1134);
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v22,
              (const char (*)[18])"guest_ban_drop_: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &thisa->guest_ban_drop_);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" drop_id_: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &thisa->drop_id_);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" drop_players: ");
      __rhs._M_current = (std::shared_ptr<Player> *)std::vector<std::shared_ptr<Player>>::size(drop_players_ptr);
      v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v16,
              (const unsigned __int64 *)&__rhs);
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" gadget: ");
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v18, thisa);
      common::milog::MiLogStream::~MiLogStream(&v22);
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 192));
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 128));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  }
  if ( v23 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1139: range 00000000175333BE-0000000017533558
bool __cdecl Gadget::canChangeAuthority(const Gadget *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  bool v4; // r14
  bool v5; // r14
  GadgetVehicleComp *v6; // rax
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 vehicle_comp_ptr:1151";
  *(_QWORD *)(v1 + 16) = Gadget::canChangeAuthority;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetClientComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v1 + 32));
  v4 = std::operator!=<GadgetClientComp>((const std::shared_ptr<GadgetClientComp> *)(v1 + 32), 0LL);
  std::shared_ptr<GadgetClientComp>::~shared_ptr((std::shared_ptr<GadgetClientComp> *const)(v1 + 32));
  if ( v4 )
  {
    v5 = 0;
  }
  else if ( Entity::getDeadClearTime((const Entity *const)this) )
  {
    v5 = 0;
  }
  else
  {
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v1 + 32));
    if ( std::operator!=<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v1 + 32)) )
    {
      v6 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v5 = GadgetVehicleComp::canChangeAuthority(v6);
    }
    else
    {
      v5 = 1;
    }
    std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v1 + 32));
  }
  result = v5;
  if ( v8 == (char *)v1 )
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

// Line 1161: range 000000001753355A-00000000175335C6
void __cdecl Gadget::onAuthorityChangedToPeerID(
        Gadget *const this,
        uint32_t new_peer_id,
        const std::vector<std::shared_ptr<Player>> *notify_player_vec,
        bool delay_sync)
{
  Creature::onAuthorityChangedToPeerID(this, new_peer_id, notify_player_vec, delay_sync);
  if ( !new_peer_id && !Gadget::isKeepModifierWhenOutSight(this) )
    AbilityComp::clearAllModifier(&this->ability_comp_);
};

// Line 1171: range 00000000175335C8-0000000017533633
bool __cdecl Gadget::isNeedSave(const Gadget *const this)
{
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+18h] [rbp-8h]

  gadget_script_config_ptr = Gadget::getScriptConfig(this);
  if ( !gadget_script_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->is_persistent >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)gadget_script_config_ptr + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->is_persistent >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&gadget_script_config_ptr->is_persistent);
  }
  return gadget_script_config_ptr->is_persistent;
};

// Line 1183: range 0000000017533634-0000000017533762
int32_t __cdecl Gadget::dropSubfield(Gadget *const this, const std::string *subfield_name)
{
  common::milog::MiLogStream *v2; // rdx
  bool v4; // r12
  uint32_t GadgetId; // edx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( Gadget::getIsBanDrop(this) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget.cpp",
      "dropSubfield",
      1186);
    v2 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v6, (const char (*)[20])"gadget is ban drop ");
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v4 = (this->guest_ban_drop_ & 2) != 0;
    GadgetId = Gadget::getGadgetId(this);
    return Creature::internalDropSubfield(this, subfield_name, 4u, GadgetId, v4);
  }
};

// Line 1194: range 0000000017533764-0000000017533DE9
std::pair<unsigned int,unsigned int> __fastcall Gadget::findDropIdCountByFallbackDropIdOrDropTag(
        const Gadget *const this,
        uint32_t fallback_drop_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::pair<unsigned int,unsigned int> v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::pair<unsigned int,unsigned int> result; // rax
  int __x; // [rsp+10h] [rbp-F0h] BYREF
  int __y; // [rsp+14h] [rbp-ECh] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+18h] [rbp-E8h]
  const std::string *drop_tag; // [rsp+20h] [rbp-E0h]
  const data::ChestDropExcelConfig *config_ptr; // [rsp+28h] [rbp-D8h]
  std::pair<unsigned int,int> __p; // [rsp+30h] [rbp-D0h] BYREF
  std::pair<unsigned int,unsigned int> v25; // [rsp+38h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 17 gadget_level:1207 48 4 21 fallback_drop_id:1193 64 16 24 boss_chest_comp_ptr:1216";
  *(_QWORD *)(v2 + 16) = Gadget::findDropIdCountByFallbackDropIdOrDropTag;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = fallback_drop_id;
  if ( *(_DWORD *)(v2 + 48) )
  {
    __y = 1;
    __p = std::make_pair<unsigned int &,int>((unsigned int *)(v2 + 48), &__y);
    std::pair<unsigned int,unsigned int>::pair<unsigned int,int,true>(&v25, &__p);
    v5 = v25;
  }
  else
  {
    gadget_script_config_ptr = Gadget::getScriptConfig(this);
    if ( gadget_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gadget_script_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->level >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = gadget_script_config_ptr->level;
      drop_tag = &gadget_script_config_ptr->drop_tag;
      if ( (unsigned __int8)std::string::empty(&gadget_script_config_ptr->drop_tag) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/gadget.cpp",
          "findDropIdCountByFallbackDropIdOrDropTag",
          1212);
        v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v27,
               (const char (*)[27])"drop_tag is empty, gadget:");
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this);
        common::milog::MiLogStream::~MiLogStream(&v27);
        __y = 0;
        __x = 0;
        __p = (std::pair<unsigned int,int>)std::make_pair<int,int>(&__x, &__y);
        std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v25, (std::pair<int,int> *)&__p);
        v5 = v25;
      }
      else
      {
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<BossChestComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
        if ( std::operator!=<BossChestComp>((const std::shared_ptr<BossChestComp> *)(v2 + 64), 0LL) )
        {
          v8 = std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          *(_DWORD *)(v2 + 32) = BossChestComp::getBossDeadLevel(v8);
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/gadget.cpp",
            "findDropIdCountByFallbackDropIdOrDropTag",
            1221);
          v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v27, (const char (*)[9])"Gadget: ");
          v10 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this);
          v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v10,
                  (const char (*)[35])" findDropIdCount boss_dead_level: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 32));
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v12,
                  (const char (*)[16])" config_level: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &gadget_script_config_ptr->level);
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v26);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
        config_ptr = DropExcelConfigMgr::findChestDropConfig(
                       &v14->design_config.txt_config_mgr.drop_config_mgr,
                       *(_DWORD *)(v2 + 32),
                       drop_tag);
        std::shared_ptr<Config>::~shared_ptr(&v26);
        if ( config_ptr )
        {
          v5 = std::make_pair<unsigned int const&,unsigned int const&>(&config_ptr->drop_id, &config_ptr->drop_count);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/gadget.cpp",
            "findDropIdCountByFallbackDropIdOrDropTag",
            1227);
          v15 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v27,
                  (const char (*)[40])"findChestDropConfig fail, gadget_level:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" drop_tag:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, drop_tag);
          common::milog::MiLogStream::~MiLogStream(&v27);
          __y = 0;
          __x = 0;
          __p = (std::pair<unsigned int,int>)std::make_pair<int,int>(&__x, &__y);
          std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v25, (std::pair<int,int> *)&__p);
          v5 = v25;
        }
        std::shared_ptr<BossChestComp>::~shared_ptr((std::shared_ptr<BossChestComp> *const)(v2 + 64));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "findDropIdCountByFallbackDropIdOrDropTag",
        1203);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v27,
             (const char (*)[30])"getScriptConfig fail, gadget:");
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v27);
      __y = 0;
      __x = 0;
      __p = (std::pair<unsigned int,int>)std::make_pair<int,int>(&__x, &__y);
      std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v25, (std::pair<int,int> *)&__p);
      v5 = v25;
    }
  }
  result = v5;
  if ( v28 == (char *)v2 )
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
  return result;
};

// Line 1236: range 0000000017533DEA-0000000017533F19
data::ItemLimitType __cdecl Gadget::getGadgetItemLimitType(const Gadget *const this)
{
  data::ItemLimitType GadgetItemLimitType; // ebx
  LuaConfigMgr *p_lua_config_mgr; // r12
  bool is_by_quest; // bl
  const GadgetScriptConfig *ScriptConfig; // r13
  uint32_t SceneId; // eax
  std::shared_ptr<Config> v7[3]; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_created_by_gm_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_created_by_gm_);
  if ( this->is_created_by_gm_ )
    return 2;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.lua_config_mgr;
  if ( *(char *)(((unsigned __int64)&this->is_by_quest_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_by_quest_);
  is_by_quest = this->is_by_quest_;
  ScriptConfig = Gadget::getScriptConfig(this);
  SceneId = Entity::getSceneId((const Entity *const)this);
  GadgetItemLimitType = LuaConfigMgr::getGadgetItemLimitType(p_lua_config_mgr, SceneId, ScriptConfig, is_by_quest);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return GadgetItemLimitType;
};

// Line 1247: range 0000000017533F1A-0000000017534375
// local variable allocation has failed, the output may be wrong!
void __cdecl Gadget::logDie(Gadget *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  google::protobuf::uint32 v12; // eax
  Player *v13; // rax
  std::string contexta; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  std::string v15; // [rsp+20h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  contexta._M_string_length = (std::string::size_type)this;
  contexta._M_dataplus._M_p = (std::string::pointer)context;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 11 holder:1258 64 16 14 scene_ptr:1248 96 16 19 own_player_ptr:1253 128 16 23 gadget_die_log_ptr:1259";
  *(_QWORD *)(v2 + 16) = Gadget::logDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Scene::getOwnPlayer((const Scene *const)(v2 + 96));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      BasicComp = Player::getBasicComp(v5);
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v15, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x5E5u, contexta);
      std::string::~string(&v15);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyGadgetDie>();
      v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((contexta._M_string_length + 2672) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((contexta._M_string_length + 2672) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGadgetDie::set_gadget_id(v7, *(_DWORD *)(contexta._M_string_length + 2672));
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)contexta._M_dataplus._M_p >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)contexta._M_dataplus._M_p >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyGadgetDie::set_change_hp_reason(v8, *(_DWORD *)contexta._M_dataplus._M_p);
      if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(contexta._M_dataplus._M_p + 8)) )
      {
        v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v10 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                                  (const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)contexta._M_dataplus._M_p
                                + 8);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v11 = *(_QWORD *)v10 + 32LL;
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        v12 = (*(__int64 (__fastcall **)(unsigned __int64))v11)(v10);
        proto_log::PlayerLogBodyGadgetDie::set_attacker_entity_type(v9, v12);
      }
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGadgetDie,void>(
        (std::shared_ptr<google::protobuf::Message> *const)&contexta._anon_0,
        (const std::shared_ptr<proto_log::PlayerLogBodyGadgetDie> *)(v2 + 128));
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      Gadget::logGadgetInteract((Gadget *const)contexta._M_string_length, v13, (MessagePtr *)&contexta._anon_0);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&contexta._anon_0);
      std::shared_ptr<proto_log::PlayerLogBodyGadgetDie>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGadgetDie> *const)(v2 + 128));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v16 == (char *)v2 )
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

// Line 1271: range 0000000017534376-00000000175347AF
void __cdecl Gadget::logGadgetInteract(Gadget *const this, Player *player, MessagePtr *p_log_message_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  const Vector3 *gadget_position; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-A0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 24 body_ext_gadget_ptr:1272 64 16 14 group_ptr:1273";
  *(_QWORD *)(v3 + 16) = Gadget::logGadgetInteract;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyExtGadget>();
  Entity::getGroup((const Entity *const)(v3 + 64));
  if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 64)) )
  {
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    GroupId = Group::getGroupId(v7);
    proto_log::PlayerLogBodyExtGadget::set_group_id(v6, GroupId);
  }
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyExtGadget::set_config_id(v9, *(_DWORD *)&this->baseclass_0[260]);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyExtGadget::set_entity_id(v10, *(_DWORD *)&this->baseclass_0[256]);
  gadget_position = Entity::getPosition((const Entity *const)this);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)gadget_position >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)gadget_position & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_position >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyExtGadget::set_x_coordinate(v11, (int)gadget_position->x);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&gadget_position->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_position + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_position->y >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyExtGadget::set_y_coordinate(v12, (int)gadget_position->y);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyExtGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&gadget_position->z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gadget_position + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_position->z >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyExtGadget::set_z_coordinate(v13, (int)gadget_position->z);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyExtGadget,void>(
    &p_body_ext_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyExtGadget> *)(v3 + 32));
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ptr, p_log_message_ptr);
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
  std::shared_ptr<proto_log::PlayerLogBodyExtGadget>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyExtGadget> *const)(v3 + 32));
  if ( v18 == (char *)v3 )
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
};

// Line 1288: range 00000000175347B0-0000000017535395
__int64 __fastcall Gadget::executeGadgetLua(
        Gadget *const this,
        unsigned int param1,
        unsigned int param2,
        int32_t param3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r14
  uint32_t GroupId; // eax
  unsigned int v11; // r14d
  Player *v12; // r14
  LuaScript *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r14
  uint32_t v17; // eax
  Player *v18; // r14
  ScriptContext *v19; // r14
  LuaScript *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  const std::string *v27; // rax
  __int64 result; // rax
  int *v29; // [rsp+0h] [rbp-430h]
  int *v30; // [rsp+8h] [rbp-428h]
  int *v31; // [rsp+10h] [rbp-420h]
  std::allocator<char> __a; // [rsp+2Bh] [rbp-405h] BYREF
  unsigned int GadgetId; // [rsp+2Ch] [rbp-404h] BYREF
  ScriptContext *context; // [rsp+30h] [rbp-400h]
  ScriptContext *o; // [rsp+38h] [rbp-3F8h]
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-3F0h] BYREF
  std::string val; // [rsp+60h] [rbp-3D0h] BYREF
  char v38[944]; // [rsp+80h] [rbp-3B0h] BYREF

  v31 = (int *)__PAIR64__(param1, param2);
  HIDWORD(v30) = param3;
  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(896LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 9 cost:1336 64 4 11 param1:1287 80 4 11 param2:1287 96 4 11 param3:1287 112 16 15 script_"
                        "ptr:1289 144 16 10 timer:1330 176 16 19 own_player_ptr:1301 208 160 19 script_context:1331 432 392 7 ss:1312";
  *(_QWORD *)(v4 + 16) = Gadget::executeGadgetLua;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862731] = -219021312;
  v6[536862732] = -218959118;
  v6[536862733] = 62194;
  v6[536862745] = -218103808;
  v6[536862746] = -202116109;
  v6[536862747] = -202116109;
  *(_DWORD *)(v4 + 64) = param1;
  *(_DWORD *)(v4 + 80) = (_DWORD)v31;
  *(_DWORD *)(v4 + 96) = HIDWORD(v30);
  Gadget::getScript((const Gadget *const)(v4 + 112));
  if ( std::operator==<LuaScript>((const std::shared_ptr<LuaScript> *)(v4 + 112), 0LL) )
  {
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 432);
    v7 = std::operator<<<std::char_traits<char>>(v4 + 448, "getScript failed for gadget_id: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = std::ostream::operator<<(v7, this->gadget_id_);
    v9 = std::operator<<<std::char_traits<char>>(v8, " group_id: ");
    GroupId = Entity::getGroupId((const Entity *const)this);
    std::ostream::operator<<(v9, GroupId);
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/gadget.cpp",
      "executeGadgetLua",
      1294);
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&val, v4 + 432);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v36, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    Entity::getScene((const Entity *const)(v4 + 144));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 144)) )
    {
      v11 = -1;
    }
    else
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      Scene::getOwnPlayer((const Scene *const)(v4 + 176));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 176), 0LL) )
      {
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
        std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&val, v4 + 432);
        Player::notifyGMServerLog(v12, SERVER_LOG_LUA, LOG_LEVEL_ERROR_0, &val);
        std::string::~string(&val);
      }
      v11 = -1;
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 176));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 144));
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 432);
  }
  else
  {
    v13 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&val, "OnClientExecuteReq", &__a);
    LOBYTE(v13) = !LuaScript::hasFunction(v13, &val);
    std::string::~string(&val);
    std::allocator<char>::~allocator(&__a);
    if ( (_BYTE)v13 )
    {
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 432);
      v14 = std::operator<<<std::char_traits<char>>(v4 + 448, "hasFunction OnClientExecuteReq failed ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gadget_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v15 = std::ostream::operator<<(v14, this->gadget_id_);
      v16 = std::operator<<<std::char_traits<char>>(v15, " group_id: ");
      v17 = Entity::getGroupId((const Entity *const)this);
      std::ostream::operator<<(v16, v17);
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/gadget.cpp",
        "executeGadgetLua",
        1314);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&val, v4 + 432);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v36, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v36);
      Entity::getScene((const Entity *const)(v4 + 144));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 144)) )
      {
        v11 = -1;
      }
      else
      {
        std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
        Scene::getOwnPlayer((const Scene *const)(v4 + 176));
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 176), 0LL) )
        {
          v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
          std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&val, v4 + 432);
          Player::notifyGMServerLog(v18, SERVER_LOG_LUA, LOG_LEVEL_ERROR_0, &val);
          std::string::~string(&val);
        }
        v11 = -1;
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 176));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 144));
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 432);
    }
    else
    {
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 144));
      ScriptContext::ScriptContext((ScriptContext *const)(v4 + 208));
      toThisPtr<Gadget>((Gadget *)(v4 + 176));
      std::weak_ptr<Gadget>::operator=<Gadget>(
        (std::weak_ptr<Gadget> *const)(v4 + 256),
        (const std::shared_ptr<Gadget> *)(v4 + 176));
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 176));
      Entity::getScene((const Entity *const)(v4 + 176));
      ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v4 + 208), (ScenePtr *)(v4 + 176));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 176));
      Entity::getGroup((const Entity *const)(v4 + 176));
      std::weak_ptr<Group>::operator=<Group>(
        (std::weak_ptr<Group> *const)(v4 + 224),
        (const std::shared_ptr<Group> *)(v4 + 176));
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 176));
      o = (ScriptContext *)(v4 + 208);
      context = boost::addressof<ScriptContext>((ScriptContext *)(v4 + 208));
      v19 = context;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&val, "OnClientExecuteReq", &__a);
      v20 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      ScriptLib::executeFuncWithErrorNotify<void,int &,int &,int &>(
        v20,
        &val,
        v19,
        (int *)(v4 + 64),
        (int *)(v4 + 80),
        (int *)(v4 + 96),
        v29,
        v30,
        v31);
      std::string::~string(&val);
      std::allocator<char>::~allocator(&__a);
      *(_DWORD *)(v4 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 144));
      if ( *(int *)(v4 + 48) > 1000 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/gadget.cpp",
          "executeGadgetLua",
          1339);
        v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[33])"[PERF] OnClientExecuteReq cost: ");
        v22 = common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v4 + 48));
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])off_26125880);
        GadgetId = Gadget::getGadgetId(this);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &GadgetId);
        v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" file: ");
        v26 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
        v27 = LuaScript::getFilePath[abi:cxx11](v26);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, v27);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      v11 = 0;
      ScriptContext::~ScriptContext((ScriptContext *const)(v4 + 208));
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 144));
    }
  }
  std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v4 + 112));
  result = v11;
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF806C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1346: range 0000000017535396-000000001753574D
int32_t __cdecl Gadget::revertInitState(Gadget *const this, bool is_revert_gadget_state)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  bool v5; // si
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+10h] [rbp-80h] BYREF
  unsigned int ConfigId; // [rsp+14h] [rbp-7Ch] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+18h] [rbp-78h]
  Gadget *__for_range; // [rsp+20h] [rbp-70h]
  const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > *v14; // [rsp+28h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *comp_type; // [rsp+30h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *gadget_comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Gadget,GadgetCompBase,28>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-30h] BYREF

  gadget_script_config_ptr = Gadget::getScriptConfig(this);
  if ( !gadget_script_config_ptr )
    return -1;
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_interact_);
  this->is_enable_interact_ = 1;
  __for_range = this;
  EcsBase<Gadget,GadgetCompBase,28u>::begin((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_begin);
  EcsBase<Gadget,GadgetCompBase,28u>::end((const EcsBase<Gadget,GadgetCompBase,28> *const)&__for_end);
  while ( EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v14 = EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v14);
    gadget_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<GadgetCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<GadgetCompBase>>(v14);
    v3 = (unsigned __int64)std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)gadget_comp_ptr);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(_QWORD *)v3 + 104LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v4)(v3) )
      return -1;
    EcsBase<Gadget,GadgetCompBase,28u>::Iterator::operator++(&__for_begin);
  }
  if ( is_revert_gadget_state )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->gadget_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_script_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->gadget_state >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Gadget::setState(this, gadget_script_config_ptr->gadget_state, 0, 1);
  }
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_enable_interact_);
  if ( !this->is_enable_interact_ )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->is_enable_interact >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)gadget_script_config_ptr - 67) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->is_enable_interact >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&gadget_script_config_ptr->is_enable_interact);
  }
  if ( gadget_script_config_ptr->is_enable_interact )
    v5 = 1;
  else
LABEL_25:
    v5 = 0;
  if ( *(char *)(((unsigned __int64)&this->is_enable_interact_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_enable_interact_);
  this->is_enable_interact_ = v5;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/gadget.cpp",
    "revertInitState",
    1372);
  v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v19, (const char (*)[11])"group_id: ");
  val = Entity::getGroupId((const Entity *const)this);
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" config_id: ");
  ConfigId = Entity::getConfigId((const Entity *const)this);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &ConfigId);
  common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" revertInitState");
  common::milog::MiLogStream::~MiLogStream(&v19);
  return 0;
};

// Line 1378: range 000000001753574E-000000001753585B
uint32_t __cdecl Gadget::getPropOwnerEntityId(const Gadget *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 17 creature_ptr:1379";
  *(_QWORD *)(v1 + 16) = Gadget::getPropOwnerEntityId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Gadget::getPropOwner((const Gadget *const)(v1 + 32));
  if ( std::operator==<Creature>(0LL, (const std::shared_ptr<Creature> *)(v1 + 32)) )
  {
    EntityId = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    EntityId = Entity::getEntityId((const Entity *const)v5);
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 32));
  result = EntityId;
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

// Line 1388: range 000000001753585C-00000000175358C6
uint32_t __cdecl Gadget::getAreaId(const Gadget *const this)
{
  const GadgetScriptConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = Gadget::getScriptConfig(this);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return config_ptr->area_id;
};

// Line 1398: range 00000000175358C8-0000000017535963
uint32_t __cdecl Gadget::getCityId(const Gadget *const this)
{
  uint32_t AreaCityId; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t area_id; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  area_id = Gadget::getAreaId(this);
  if ( !area_id )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  AreaCityId = WorldAreaExcelConfigMgr::findAreaCityId(&v2->design_config.txt_config_mgr.world_area_config_mgr, area_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return AreaCityId;
};

// Line 1404: range 0000000017535964-0000000017535F58
void __cdecl Gadget::logGadgetStateChange(Gadget *const this, uint32_t old_state)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  Player *v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  Player *v15; // r14
  std::string v16; // [rsp+0h] [rbp-150h]
  uint32_t old_statea; // [rsp+4h] [rbp-14Ch]
  google::protobuf::uint32 *thisa; // [rsp+8h] [rbp-148h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-120h] BYREF
  std::string v21; // [rsp+40h] [rbp-110h] BYREF
  char v22[240]; // [rsp+60h] [rbp-F0h] BYREF

  v16._M_string_length = (std::string::size_type)this;
  HIDWORD(v16._M_dataplus._M_p) = old_state;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 11 holder:1428 64 16 14 scene_ptr:1405 96 16 19 own_player_ptr:1410 128 16 13 body_ptr:14"
                        "29 160 16 14 group_ptr:1430";
  *(_QWORD *)(v2 + 16) = Gadget::logGadgetStateChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Scene::getOwnPlayer((const Scene *const)(v2 + 96));
    if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
    {
      *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Gadget::getScriptConfig(this);
      if ( *(&v16._anon_0._M_allocated_capacity + 1) )
      {
        if ( *(_BYTE *)(((*(&v16._anon_0._M_allocated_capacity + 1) + 74) >> 3) + 0x7FFF8000) != 0
          && ((v16._anon_0._M_local_buf[8] + 74) & 7) >= *(_BYTE *)(((*(&v16._anon_0._M_allocated_capacity + 1) + 74) >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(*(&v16._anon_0._M_allocated_capacity + 1) + 74);
        }
        if ( *(_BYTE *)(*(&v16._anon_0._M_allocated_capacity + 1) + 74) == 1 )
        {
          v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          BasicComp = Player::getBasicComp(v5);
          PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x5F6u, v16);
          std::string::~string(&v21);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyGadgetStateChange>();
          Entity::getGroup((const Entity *const)(v2 + 160));
          if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 160)) )
          {
            v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            GroupId = Group::getGroupId(v8);
            proto_log::PlayerLogBodyGadgetStateChange::set_group_id(v7, GroupId);
          }
          v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)(thisa + 65) >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(thisa + 65) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyGadgetStateChange::set_config_id(v10, thisa[65]);
          v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)(thisa + 64) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(thisa + 64) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyGadgetStateChange::set_entity_id(v11, thisa[64]);
          v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)(thisa + 668) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(thisa + 668) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyGadgetStateChange::set_gadget_id(v12, thisa[668]);
          v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          proto_log::PlayerLogBodyGadgetStateChange::set_old_state(v13, old_statea);
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGadgetStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)(((unsigned __int64)(thisa + 678) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(thisa + 678) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyGadgetStateChange::set_new_state(v14, thisa[678]);
          v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGadgetStateChange,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyGadgetStateChange> *)(v2 + 128));
          Player::printStatLog(v15, &p_body_ptr, &p_body_ext_ptr, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 160));
          std::shared_ptr<proto_log::PlayerLogBodyGadgetStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGadgetStateChange> *const)(v2 + 128));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1444: range 0000000017535F5A-000000001753619F
void __cdecl Gadget::procFoundationOnDie(Gadget *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  GadgetPtr p_gadget_ptr; // [rsp+10h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 foundation_ptr:1450 64 16 13 comp_ptr:1453";
  *(_QWORD *)(v2 + 16) = Gadget::procFoundationOnDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( context->reason != CHANGE_HP_SUB_GEAR )
  {
    std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
    if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 32)) )
    {
      std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      EcsBase<Gadget,GadgetCompBase,28u>::findComp<FoundationComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
      if ( std::operator!=<FoundationComp>(0LL, (const std::shared_ptr<FoundationComp> *)(v2 + 64)) )
      {
        v5 = std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FoundationComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        toThisPtr<Gadget>((Gadget *)&p_gadget_ptr);
        FoundationComp::resetOnGearRemove(v5, &p_gadget_ptr, 1);
        std::shared_ptr<Gadget>::~shared_ptr(&p_gadget_ptr);
      }
      std::shared_ptr<FoundationComp>::~shared_ptr((std::shared_ptr<FoundationComp> *const)(v2 + 64));
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  }
  if ( v7 == (char *)v2 )
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

// Line 1462: range 00000000175361A0-000000001753639C
void __cdecl Gadget::setGadgetTalkState(Gadget *const this, uint32_t gadget_talk_state)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t EntityId; // eax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 18 change_notify:1465";
  *(_QWORD *)(v2 + 16) = Gadget::setGadgetTalkState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( gadget_talk_state != this->gadget_talk_state_ )
  {
    proto::GadgetTalkChangeNotify::GadgetTalkChangeNotify((proto::GadgetTalkChangeNotify *const)(v2 + 32));
    proto::GadgetTalkChangeNotify::set_cur_gadget_talk_state(
      (proto::GadgetTalkChangeNotify *const)(v2 + 32),
      gadget_talk_state);
    EntityId = Entity::getEntityId((const Entity *const)this);
    proto::GadgetTalkChangeNotify::set_gadget_entity_id((proto::GadgetTalkChangeNotify *const)(v2 + 32), EntityId);
    Entity::notifyViewingPlayersAndSelf<proto::GadgetTalkChangeNotify>(
      (Entity *const)this,
      (proto::GadgetTalkChangeNotify *)(v2 + 32));
    proto::GadgetTalkChangeNotify::~GadgetTalkChangeNotify((proto::GadgetTalkChangeNotify *const)(v2 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_talk_state_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gadget_talk_state_);
  }
  this->gadget_talk_state_ = gadget_talk_state;
  if ( v6 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 1474: range 000000001753639E-0000000017536644
void __cdecl Gadget::onServerGlobalValueChange(Gadget *const this, const std::string *key, float value)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::allocator<data::FightPropType> __a; // [rsp+27h] [rbp-A9h] BYREF
  const std::string *attack_key; // [rsp+28h] [rbp-A8h]
  const std::string *mastery_key; // [rsp+30h] [rbp-A0h]
  std::initializer_list<data::FightPropType> __l; // [rsp+38h] [rbp-98h] BYREF
  std::vector<data::FightPropType> fight_prop_vec; // [rsp+50h] [rbp-80h] BYREF
  std::string v11; // [rsp+70h] [rbp-60h] BYREF
  std::string v12; // [rsp+90h] [rbp-40h] BYREF

  Creature::onServerGlobalValueChange(this, key, value);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__l._M_len);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len);
  ConstValueExcelConfigMgr::getMechanicus2AtttackKey[abi:cxx11](
    &v11,
    &v3->design_config.txt_config_mgr.const_value_config_mgr);
  attack_key = &v11;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__l._M_len);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__l._M_len);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len);
  ConstValueExcelConfigMgr::getMechanicus2MasteryKey[abi:cxx11](
    &v12,
    &v4->design_config.txt_config_mgr.const_value_config_mgr);
  mastery_key = &v12;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__l._M_len);
  if ( std::operator==<char>(key, &v11) || std::operator==<char>(key, mastery_key) )
  {
    Creature::calcProp(this);
    __l._M_array = (std::initializer_list<data::FightPropType>::iterator)0x1C00000004LL;
    std::allocator<data::FightPropType>::allocator(&__a);
    std::vector<data::FightPropType>::vector(
      &fight_prop_vec,
      (std::initializer_list<data::FightPropType>)__PAIR128__(2LL, &__l),
      &__a);
    FightPropComp::notifyEntityFightProp(&this->fight_prop_comp_, &fight_prop_vec);
    std::vector<data::FightPropType>::~vector(&fight_prop_vec);
    std::allocator<data::FightPropType>::~allocator(&__a);
  }
  std::string::~string(&v12);
  std::string::~string(&v11);
};

// Line 1487: range 0000000017536646-00000000175367DA
int32_t __cdecl Gadget::setMotionState(
        Gadget *const this,
        const proto::MotionInfo *motion_info,
        uint32_t scene_time_ms)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t v6; // r14d
  GadgetVehicleComp *v7; // r14
  proto::MotionState v8; // eax
  int32_t result; // eax
  int32_t ret; // [rsp+2Ch] [rbp-74h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 vehicle_comp_ptr:1494";
  *(_QWORD *)(v3 + 16) = Gadget::setMotionState;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ret = Entity::setMotionState((Entity *const)this, motion_info, scene_time_ms);
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GadgetVehicleComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 32));
    if ( !std::operator==<GadgetVehicleComp>(0LL, (const std::shared_ptr<GadgetVehicleComp> *)(v3 + 32)) )
    {
      v7 = std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GadgetVehicleComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v8 = proto::MotionInfo::state(motion_info);
      GadgetVehicleComp::setMotionState(v7, v8, scene_time_ms);
    }
    v6 = 0;
    std::shared_ptr<GadgetVehicleComp>::~shared_ptr((std::shared_ptr<GadgetVehicleComp> *const)(v3 + 32));
  }
  result = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1504: range 00000000175367DC-0000000017536BF0
void __cdecl Gadget::tryTriggerStateChangeEvent(Gadget *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // r14
  uint32_t ConfigId; // r15d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int *v10; // r8
  unsigned int *v11; // r9
  Player *v12; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<GadgetStateChangeEvent> *v14; // rax
  unsigned int v15; // [rsp+14h] [rbp-ECh] BYREF
  unsigned int v16; // [rsp+18h] [rbp-E8h] BYREF
  unsigned int __args_0; // [rsp+1Ch] [rbp-E4h] BYREF
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-E0h] BYREF
  char v19[208]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 14 scene_ptr:1506 64 16 14 group_ptr:1510 96 16 15 player_ptr:1512 128 16 14 event_ptr:1517";
  *(_QWORD *)(v1 + 16) = Gadget::tryTriggerStateChangeEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( Scene::getIsStarted(v4) )
    {
      Entity::getGroup((const Entity *const)(v1 + 64));
      if ( !std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 64), 0LL) )
      {
        std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        Scene::getOwnPlayer((const Scene *const)(v1 + 96));
        if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v1 + 96), 0LL) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v18);
          p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.quest_config_mgr;
          ConfigId = Entity::getConfigId((const Entity *const)this);
          v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          GroupId = Group::getGroupId(v7);
          LOBYTE(p_quest_config_mgr) = QuestExcelConfigMgr::isQuestGroupGadgetConfigID(
                                         p_quest_config_mgr,
                                         GroupId,
                                         ConfigId);
          std::shared_ptr<Config>::~shared_ptr(&v18);
          if ( (_BYTE)p_quest_config_mgr )
          {
            __args_0 = Gadget::getState(this);
            v16 = Entity::getConfigId((const Entity *const)this);
            v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            v15 = Group::getGroupId(v9);
            common::tools::perf::make_shared<GadgetStateChangeEvent,unsigned int,unsigned int,unsigned int>(
              (unsigned int *)(v1 + 128),
              &v15,
              &v16,
              &__args_0,
              v10,
              v11);
            v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            EventComp = Player::getEventComp(v12);
            v14 = std::move<std::shared_ptr<GadgetStateChangeEvent> &>((std::shared_ptr<GadgetStateChangeEvent> *)(v1 + 128));
            std::shared_ptr<BaseEvent>::shared_ptr<GadgetStateChangeEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v18,
              v14);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v18);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v18);
            std::shared_ptr<GadgetStateChangeEvent>::~shared_ptr((std::shared_ptr<GadgetStateChangeEvent> *const)(v1 + 128));
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};
