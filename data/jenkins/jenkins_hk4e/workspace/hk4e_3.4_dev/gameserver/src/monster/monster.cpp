// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/monster/monster.cpp

// Line 52: range 00000000171192E0-0000000017119510
std::string *__cdecl Monster::getDesc[abi:cxx11](std::string *retstr, const Monster *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:53";
  *(_QWORD *)(v2 + 16) = Monster::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  Entity::getDesc[abi:cxx11](&v, (const Entity *const)this);
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         &v);
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, "[monster_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, this->monster_id_);
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

// Line 60: range 0000000017119512-000000001711A2DF
int32_t __cdecl Monster::initWithParam(Monster *const this, const MonsterParam *monster_param)
{
  std::shared_ptr<Creature> *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Monster *v5; // rdx
  Monster *v6; // rcx
  Monster *v7; // rcx
  Entity *v8; // rcx
  Entity *v9; // rdx
  uint32_t guest_ban_drop; // ecx
  Entity *v11; // rcx
  uint32_t born_slot_index; // edx
  uint32_t climate_area_id; // ecx
  Entity *v14; // rcx
  uint32_t monster_pool_id; // ecx
  uint32_t ai_config_id; // ecx
  uint32_t level_route_id; // ecx
  Monster *v18; // rcx
  std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  bool *p_is_force_refresh_authotiry_to_host; // rax
  std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  bool *p_is_refresh_auth_when_auth_out_sight; // rax
  int32_t result; // eax
  std::vector<std::string>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::vector<std::string>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-A0h]
  std::unordered_map<std::string,float> *__for_range_0; // [rsp+28h] [rbp-98h]
  const std::pair<const std::string,float> *v28; // [rsp+30h] [rbp-90h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+38h] [rbp-88h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+40h] [rbp-80h]
  const std::string *tag; // [rsp+48h] [rbp-78h]
  char v32[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<Creature> *)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<Creature> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 18 json_config_ptr:95";
  v2[1]._M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)Monster::initWithParam;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  v5 = this;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Creature::setConfigLevel(v5, monster_param->config_level);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->revise_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->revise_level >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Creature::setReviseLevel(v6, monster_param->revise_level);
  v7 = this;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->level >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Creature::setLevel(v7, monster_param->level);
  Entity::setBornPosition((Entity *const)this, &monster_param->pos);
  Entity::setRotation((Entity *const)this, &monster_param->rot);
  Monster::setBornPos(this, &monster_param->pos);
  Monster::setBornRot(this, &monster_param->rot);
  v8 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->config_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Entity::setConfigId(v8, monster_param->config_id);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Monster::setDropId(this, monster_param->drop_id);
  if ( *(char *)(((unsigned __int64)&monster_param->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&monster_param->is_ban_txt_drop);
  Monster::setIsBanTxtDrop(this, monster_param->is_ban_txt_drop);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->is_elite >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)monster_param + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&monster_param->is_elite >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&monster_param->is_elite);
  }
  Monster::setIsElite(this, monster_param->is_elite);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->summoned_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->summoned_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Monster::setSummonedTag(this, monster_param->summoned_tag);
  std::set<unsigned int>::operator=(&this->affix_set_, &monster_param->affix_set);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->born_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->born_type >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Monster::setMonsterBornType(this, monster_param->born_type);
  v9 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Entity::setRoomId(v9, monster_param->room_id);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->guest_ban_drop >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  guest_ban_drop = monster_param->guest_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guest_ban_drop_);
  }
  this->guest_ban_drop_ = guest_ban_drop;
  std::string::operator=(&this->drop_tag_, &monster_param->drop_tag);
  std::shared_ptr<Creature>::shared_ptr(v2 + 2, &monster_param->owner_ptr);
  Creature::setOwner(this, v2 + 2);
  std::shared_ptr<Creature>::~shared_ptr(v2 + 2);
  v11 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->born_slot_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->born_slot_index >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  born_slot_index = monster_param->born_slot_index;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->master_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->master_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Entity::setServantInfo(v11, monster_param->master_entity_id, born_slot_index);
  Creature::setLifeState(this, LIFE_ALIVE);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Monster::setTitleId(this, monster_param->title_id);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->special_name_id >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Monster::setSpecialNameId(this, monster_param->special_name_id);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Monster::setPoseId(this, monster_param->init_pose);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Monster::setInitPoseId(this, monster_param->init_pose);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->climate_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->climate_area_id >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  climate_area_id = monster_param->climate_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->lua_climate_area_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lua_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->lua_climate_area_id_);
  }
  this->lua_climate_area_id_ = climate_area_id;
  v14 = (Entity *)this;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->group_vision_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->group_vision_type >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Entity::setGroupVisionType(v14, monster_param->group_vision_type);
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->monster_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  monster_pool_id = monster_param->monster_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->monster_pool_id_);
  }
  this->monster_pool_id_ = monster_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_param - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_param->ai_config_id >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ai_config_id = monster_param->ai_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_config_id_);
  }
  this->ai_config_id_ = ai_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&monster_param->level_route_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_param->level_route_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  level_route_id = monster_param->level_route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_route_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_route_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_route_id_);
  }
  this->level_route_id_ = level_route_id;
  if ( *(char *)(((unsigned __int64)&monster_param->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&monster_param->is_light_config);
  Monster::setIsLightConfig(this, monster_param->is_light_config);
  Monster::getJsonConfig((const Monster *const)&v2[2]);
  if ( std::operator!=<data::ConfigMonster>(0LL, (const std::shared_ptr<data::ConfigMonster> *)&v2[2]) )
  {
    __for_range = &std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2])->entity_tags.init_tags;
    __for_begin._M_current = std::vector<std::string>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
    {
      tag = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
      Creature::changeTag(this, 1, tag, 0);
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
    }
    __for_range_0 = &std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2])->global_value.init_server_global_values;
    __for_begin._M_current = (std::string *)std::unordered_map<std::string,float>::begin(__for_range_0)._M_cur;
    __for_end._M_current = (std::string *)std::unordered_map<std::string,float>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::string const,float>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,float>,true> *)&__for_end) )
    {
      v28 = std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *const)&__for_begin);
      key = std::get<0ul,std::string const,float>(v28);
      value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v28);
      v18 = this;
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      Creature::setServerGlobalValue(v18, key, *value, 0);
      std::__detail::_Node_iterator<std::pair<std::string const,float>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true> *const)&__for_begin);
    }
    v19 = std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
    p_is_force_refresh_authotiry_to_host = &v19->common.is_force_refresh_authotiry_to_host;
    if ( *(_BYTE *)(((unsigned __int64)p_is_force_refresh_authotiry_to_host >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_force_refresh_authotiry_to_host & 7) >= *(_BYTE *)(((unsigned __int64)p_is_force_refresh_authotiry_to_host >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_force_refresh_authotiry_to_host);
    }
    Creature::setIsForceRefreshAuthToSceneOwner(this, v19->common.is_force_refresh_authotiry_to_host);
    v21 = std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
    p_is_refresh_auth_when_auth_out_sight = &v21->common.is_refresh_auth_when_auth_out_sight;
    if ( *(_BYTE *)(((unsigned __int64)p_is_refresh_auth_when_auth_out_sight >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_refresh_auth_when_auth_out_sight & 7) >= *(_BYTE *)(((unsigned __int64)p_is_refresh_auth_when_auth_out_sight >> 3)
                                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_refresh_auth_when_auth_out_sight);
    }
    Creature::setIsAuthPreferClosestPlayer(this, v21->common.is_refresh_auth_when_auth_out_sight);
  }
  std::shared_ptr<data::ConfigMonster>::~shared_ptr((std::shared_ptr<data::ConfigMonster> *const)&v2[2]);
  result = 0;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<Creature,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 118: range 000000001711A2E0-000000001711A578
int32_t __cdecl Monster::init(Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  uint32_t v4; // ecx
  PileBoolValue *IsInvincible; // r14
  std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PileBoolValue *IsLockHp; // r14
  std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  int32_t result; // eax
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 22 config_monster_ptr:120";
  *(_QWORD *)(v1 + 16) = Monster::init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v4 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  JsonConfigMgr::findMonsterConfig((const JsonConfigMgr *const)(v1 + 32), v4);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( std::operator!=<data::ConfigMonster>(0LL, (const std::shared_ptr<data::ConfigMonster> *)(v1 + 32)) )
  {
    IsInvincible = FightPropComp::getIsInvincible(&this->fight_prop_comp_);
    v6 = std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(char *)(((unsigned __int64)&v6->combat.property.is_invincible >> 3) + 0x7FFF8000) < 0 )
      v6 = (std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v6->combat.property.is_invincible);
    PileBoolValue::set(IsInvincible, 0, v6->combat.property.is_invincible);
    IsLockHp = FightPropComp::getIsLockHp(&this->fight_prop_comp_);
    v8 = std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->combat.property.is_lock_hp >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v8 - 71) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->combat.property.is_lock_hp >> 3)
                                                      + 0x7FFF8000) )
    {
      __asan_report_load1(&v8->combat.property.is_lock_hp);
    }
    PileBoolValue::set(IsLockHp, 0, v8->combat.property.is_lock_hp);
  }
  std::shared_ptr<data::ConfigMonster>::~shared_ptr((std::shared_ptr<data::ConfigMonster> *const)(v1 + 32));
  result = 0;
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

// Line 131: range 000000001711A57A-000000001711AA3F
int32_t __cdecl Monster::assignProp(Monster *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  Monster *v4; // rdx
  unsigned __int64 v5; // rax
  Monster *v6; // rdx
  unsigned __int64 v7; // rax
  Group *v8; // rax
  const GroupInitParam *InitParam; // rax
  unsigned __int64 v10; // rax
  int32_t result; // eax
  uint32_t mp_players; // [rsp+14h] [rbp-ECh]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-E8h]
  std::map<data::FightPropType,float> __args_0; // [rsp+20h] [rbp-E0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 group_ptr:136 64 24 16 prop_map_vec:132";
  *(_QWORD *)(v1 + 16) = Monster::assignProp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<std::map<data::FightPropType,float>>::vector((std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64));
  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)this->baseclass_0 + 304LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(std::map<data::FightPropType,float> *, Monster *))v5)(&__args_0, v4);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  v6 = this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = *(_QWORD *)this->baseclass_0 + 296LL;
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(std::map<data::FightPropType,float> *, Monster *))v7)(&__args_0, v6);
  std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
    (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
    &__args_0,
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
  {
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    InitParam = Group::getInitParam(v8);
    if ( *(_BYTE *)(((unsigned __int64)&InitParam->mp_players >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&InitParam->mp_players >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    mp_players = InitParam->mp_players;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = *(_QWORD *)this->baseclass_0 + 312LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    monster_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(Monster *const))v10)(this);
    if ( monster_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->mp_prop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)monster_config_ptr - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->mp_prop_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( monster_config_ptr->mp_prop_id && mp_players > 1 )
      {
        Monster::getPropMpPercent(&__args_0, this, mp_players, monster_config_ptr->mp_prop_id);
        std::vector<std::map<data::FightPropType,float>>::emplace_back<std::map<data::FightPropType,float>>(
          (std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64),
          &__args_0,
          &__args_0);
        std::map<data::FightPropType,float>::~map(&__args_0);
      }
    }
  }
  Creature::getAbilityProp(&__args_0, this);
  FightPropComp::refreshCalProp(
    &this->fight_prop_comp_,
    (const std::vector<std::map<data::FightPropType,float>> *)(v1 + 64),
    &__args_0);
  std::map<data::FightPropType,float>::~map(&__args_0);
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  std::vector<std::map<data::FightPropType,float>>::~vector((std::vector<std::map<data::FightPropType,float>> *const)(v1 + 64));
  result = 0;
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 153: range 000000001711AA40-000000001711ADED
FightPropMap *__fastcall Monster::getPropMpPercent(
        FightPropMap *retstr,
        const Monster *const this,
        uint32_t mp_players,
        uint32_t mp_prop_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<float>::const_reference v11; // rdx
  std::map<data::FightPropType,float>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  int v15; // [rsp+4h] [rbp-ECh]
  std::vector<data::EntityPropPerMpConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<data::EntityPropPerMpConfig>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const data::EntityMultiPlayerExcelConfig *mp_config_ptr; // [rsp+38h] [rbp-B8h]
  const std::vector<data::EntityPropPerMpConfig> *__for_range; // [rsp+40h] [rbp-B0h]
  const data::EntityPropPerMpConfig *mp_prop; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-90h] BYREF
  char v25[112]; // [rsp+80h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 14 mp_prop_id:152";
  *(_QWORD *)(v4 + 16) = Monster::getPropMpPercent;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = mp_prop_id;
  std::map<data::FightPropType,float>::map(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  mp_config_ptr = data::CombatTemplateExcelConfigMgrBase::findEntityMultiPlayerExcelConfig(
                    &v7->design_config.txt_config_mgr.combat_template_config_mgr,
                    *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( mp_config_ptr )
  {
    __for_range = &mp_config_ptr->prop_per_vec;
    __for_begin._M_current = std::vector<data::EntityPropPerMpConfig>::begin(&mp_config_ptr->prop_per_vec)._M_current;
    __for_end._M_current = std::vector<data::EntityPropPerMpConfig>::end(&mp_config_ptr->prop_per_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::EntityPropPerMpConfig const*,std::vector<data::EntityPropPerMpConfig>>(
              &__for_begin,
              &__for_end) )
    {
      mp_prop = __gnu_cxx::__normal_iterator<data::EntityPropPerMpConfig const*,std::vector<data::EntityPropPerMpConfig>>::operator*(&__for_begin);
      if ( mp_players <= 1 || mp_players >= std::vector<float>::size(&mp_prop->prop_value_vec) + 2 )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "getPropMpPercent",
          162);
        v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v24,
               (const char (*)[30])"EntityMultiPlayerExcelConfig ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v10,
          (const char (*)[25])" prop_per_vec too small!");
        common::milog::MiLogStream::~MiLogStream(&v24);
        break;
      }
      v11 = std::vector<float>::operator[](&mp_prop->prop_value_vec, mp_players - 2);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v15 = *(_DWORD *)v11;
      v12 = std::map<data::FightPropType,float>::operator[](retstr, &mp_prop->prop_type);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12);
      }
      *v13 = v15;
      __gnu_cxx::__normal_iterator<data::EntityPropPerMpConfig const*,std::vector<data::EntityPropPerMpConfig>>::operator++(&__for_begin);
    }
  }
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 172: range 000000001711AEB8-000000001711B802
int32_t __cdecl Monster::onBeforeEnterScene(Monster *const this, Scene *scene, const VisionContext *context)
{
  __m128i v3; // xmm0
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  std::vector<unsigned int>::const_iterator v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  __m128i v15; // xmm0
  float *v16; // rdx
  data::VisionLevelType VisionLevel; // eax
  Entity *v18; // rdx
  data::JsonClimateType *p_json_climate_type; // rdi
  uint32_t *p_json_climate_area_id; // rcx
  int32_t result; // eax
  const unsigned int *__last; // [rsp+10h] [rbp-120h]
  int v23; // [rsp+18h] [rbp-118h]
  int32_t v24; // [rsp+24h] [rbp-10Ch]
  std::allocator<char> __a; // [rsp+4Bh] [rbp-E5h] BYREF
  float cur_hp; // [rsp+4Ch] [rbp-E4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-D8h] BYREF
  const TxtConfigMgr *txt_config_mgr; // [rsp+60h] [rbp-D0h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+68h] [rbp-C8h]
  const std::vector<unsigned int> *__for_range; // [rsp+70h] [rbp-C0h]
  const MonsterScriptConfig *monster_script_config_ptr; // [rsp+78h] [rbp-B8h]
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+A0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 10 max_hp:214 48 4 20 weapon_gadget_id:185 64 16 21 weapon_gadget_ptr:192";
  *(_QWORD *)(v4 + 16) = Monster::onBeforeEnterScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->design_config.txt_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)v3.m128i_i64 = __asan_report_load4();
  }
  monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, this->monster_id_);
  if ( monster_config_ptr )
  {
    __last = std::vector<unsigned int>::end(&monster_config_ptr->affix)._M_current;
    v9._M_current = std::vector<unsigned int>::begin(&monster_config_ptr->affix)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      &this->affix_set_,
      v9,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last);
    __for_range = &monster_config_ptr->equips;
    __for_begin._M_current = std::vector<unsigned int>::begin(&monster_config_ptr->equips)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&monster_config_ptr->equips)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        *(double *)v3.m128i_i64 = __asan_report_load4();
      }
      *(_DWORD *)(v4 + 48) = *v10;
      if ( *(_DWORD *)(v4 + 48) )
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v35, byte_25FB4240, &__a);
        Monster::addWeaponGadget(
          (Monster *const)(v4 + 64),
          (uint32_t)this,
          (const std::string *)*(unsigned int *)(v4 + 48),
          (bool)&v35);
        std::string::~string(&v35);
        std::allocator<char>::~allocator(&__a);
        if ( std::operator==<MonsterWeaponGadget>((const std::shared_ptr<MonsterWeaponGadget> *)(v4 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/monster/monster.cpp",
            "onBeforeEnterScene",
            195);
          v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v35,
                  (const char (*)[41])"addWeaponGadget fails, weapon_gadget_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v12, this);
          common::milog::MiLogStream::~MiLogStream(&v35);
          v24 = -1;
          v23 = 0;
        }
        else
        {
          v23 = 1;
        }
        std::shared_ptr<MonsterWeaponGadget>::~shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)(v4 + 64));
        if ( v23 != 1 )
          goto LABEL_37;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( Monster::initAbility(this) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "onBeforeEnterScene",
        202);
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v35,
              (const char (*)[18])"initAbility fails");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v24 = -1;
    }
    else if ( Creature::calcProp(this) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "onBeforeEnterScene",
        208);
      v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v35,
              (const char (*)[36])"monster calcProp fails, monster_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->monster_id_);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v24 = -1;
    }
    else
    {
      if ( Monster::isValidInitialHpPercentage(this) )
      {
        *(float *)v3.m128i_i32 = Creature::getMaxHp(this);
        *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(v3);
        if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v15 = _mm_cvtsi32_si128(*(_DWORD *)(v4 + 32));
        *(float *)v15.m128i_i32 = SAFE_MULTIPLY<float,float>(
                                    *(float *)v15.m128i_i32,
                                    this->initial_hp_percentage_ / 100.0);
        *(_DWORD *)(v4 + 48) = _mm_cvtsi128_si32(v15);
        v16 = (float *)std::min<float>((const float *)(v4 + 48), (const float *)(v4 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        cur_hp = *v16;
        Creature::setCurHp(this, cur_hp, 0);
      }
      else
      {
        Creature::setCurHpFull(this, 0);
      }
      monster_script_config_ptr = Monster::getMonsterScriptConfig(this);
      if ( monster_script_config_ptr )
      {
        VisionLevel = MonsterScriptConfig::getVisionLevel(monster_script_config_ptr, txt_config_mgr);
        Entity::setVisionLevelType((Entity *const)this, VisionLevel);
      }
      else
      {
        v18 = (Entity *)this;
        if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->vision_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->vision_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        Entity::setVisionLevelType(v18, monster_config_ptr->vision_level);
      }
      std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::function<Monster::onBeforeEnterScene(Scene &,VisionContext const&)::{lambda(MonsterWeaponGadget &)#1},void,void>(
        (std::function<ForeachPolicy(MonsterWeaponGadget&)> *const)&v35,
        (Monster::onBeforeEnterScene::<lambda(MonsterWeaponGadget&)>)__PAIR128__(
                                                                       (unsigned __int64)context,
                                                                       (unsigned __int64)scene));
      Monster::foreachWeaponGadget(this, (std::function<ForeachPolicy(MonsterWeaponGadget&)> *)&v35);
      std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::~function((std::function<ForeachPolicy(MonsterWeaponGadget&)> *const)&v35);
      p_json_climate_type = &this->json_climate_type_;
      p_json_climate_area_id = &this->json_climate_area_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_json_climate_type = &this->json_climate_type_;
        __asan_report_load4();
      }
      Scene::getJsonClimateInfoByPos(
        scene,
        &this->born_pos_,
        this->json_climate_type_,
        p_json_climate_area_id,
        p_json_climate_type);
      v24 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "onBeforeEnterScene",
      177);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v35,
           (const char (*)[42])"findMonsterExcelConfig fails, monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->monster_id_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v24 = -1;
  }
LABEL_37:
  result = v24;
  if ( v36 == (char *)v4 )
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
  return result;
};

// Line 234: range 000000001711ADEE-000000001711AEB7
ForeachPolicy __cdecl Monster::onBeforeEnterScene(Scene &,VisionContext const&)::{lambda(MonsterWeaponGadget &)#1}::operator()(
        const Monster::onBeforeEnterScene::<lambda(MonsterWeaponGadget&)> *const __closure,
        MonsterWeaponGadget *weapon_gadget)
{
  MonsterWeaponGadget *v2; // rcx
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(MonsterWeaponGadget *, Scene *, const VisionContext *); // r8
  const VisionContext *context; // rdx

  v2 = weapon_gadget;
  if ( *(_BYTE *)(((unsigned __int64)weapon_gadget >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)weapon_gadget->baseclass_0 + 56LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  v4 = *(void (__fastcall **)(MonsterWeaponGadget *, Scene *, const VisionContext *))v3;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__context >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  context = __closure->__context;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4(v2, __closure->__scene, context);
  return 0;
};

// Line 246: range 000000001711B804-000000001711BB5F
int32_t __cdecl Monster::initAbility(Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int32_t max_num; // esi
  int32_t result; // eax
  std::vector<data::ConfigSummonTag>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<data::ConfigSummonTag>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  data::ConfigSummon *summon; // [rsp+20h] [rbp-B0h]
  std::vector<data::ConfigSummonTag> *__for_range; // [rsp+28h] [rbp-A8h]
  data::ConfigSummonTag *config_summon_tag; // [rsp+30h] [rbp-A0h]
  SummonInfo *summon_info; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-90h] BYREF
  char v16[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 22 config_monster_ptr:247";
  *(_QWORD *)(v1 + 16) = Monster::initAbility;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Monster::getJsonConfig((const Monster *const)(v1 + 32));
  if ( std::operator==<data::ConfigMonster>((const std::shared_ptr<data::ConfigMonster> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "initAbility",
      250);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v15,
           (const char (*)[20])"getJsonConfig fails");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_non_humanoid_move_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_non_humanoid_move_);
    this->is_non_humanoid_move_ = 1;
    v6 = std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    AbilityComp::setInitAbilities(&this->ability_comp_, &v6->abilities);
    summon = &std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->combat.summon;
    __for_range = &summon->summon_tags;
    __for_begin._M_current = std::vector<data::ConfigSummonTag>::begin(&summon->summon_tags)._M_current;
    __for_end._M_current = std::vector<data::ConfigSummonTag>::end(&summon->summon_tags)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigSummonTag *,std::vector<data::ConfigSummonTag>>(&__for_begin, &__for_end) )
    {
      config_summon_tag = __gnu_cxx::__normal_iterator<data::ConfigSummonTag *,std::vector<data::ConfigSummonTag>>::operator*(&__for_begin);
      summon_info = std::map<unsigned int,SummonInfo>::operator[](&this->summon_map_, &config_summon_tag->summon_tag);
      if ( *(_BYTE *)(((unsigned __int64)&config_summon_tag->max_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_summon_tag->max_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      max_num = config_summon_tag->max_num;
      if ( *(_BYTE *)(((unsigned __int64)summon_info >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)summon_info >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(summon_info);
      }
      summon_info->max_count = max_num;
      __gnu_cxx::__normal_iterator<data::ConfigSummonTag *,std::vector<data::ConfigSummonTag>>::operator++(&__for_begin);
    }
    v5 = 0;
  }
  std::shared_ptr<data::ConfigMonster>::~shared_ptr((std::shared_ptr<data::ConfigMonster> *const)(v1 + 32));
  result = v5;
  if ( v16 == (char *)v1 )
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

// Line 266: range 000000001711BB60-000000001711C992
int32_t __cdecl Monster::toClient(const Monster *const this, proto::SceneEntityInfo *entity_info, Player *player)
{
  unsigned __int64 v3; // rax
  uint32_t GroupId; // eax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  google::protobuf::uint32 *v8; // rdx
  uint32_t OwnerEntityId; // eax
  int v10; // ebx
  unsigned int *v11; // rax
  _DWORD *v12; // rdx
  uint32_t PoseId; // eax
  uint32_t BlockId; // eax
  uint32_t InitPoseId; // eax
  bool IsLightConfig; // al
  PlayerSceneComp *SceneComp; // rcx
  google::protobuf::uint32 MonsterBeKilledNum; // eax
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rbx
  proto::MonsterRoute *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  proto::SceneMonsterInfo *monster_info; // [rsp+40h] [rbp-E0h]
  const std::map<std::string,std::shared_ptr<MonsterWeaponGadget>> *__for_range; // [rsp+48h] [rbp-D8h]
  const std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-D0h]
  google::protobuf::Map<unsigned int,unsigned int> *summon_tag_map; // [rsp+58h] [rbp-C8h]
  const std::map<unsigned int,SummonInfo> *__for_range_1; // [rsp+60h] [rbp-C0h]
  const MonsterScriptConfig *monster_script_config; // [rsp+68h] [rbp-B8h]
  proto::EntityEnvironmentInfo *entity_environment_info; // [rsp+70h] [rbp-B0h]
  const Monster *__for_range_2; // [rsp+78h] [rbp-A8h]
  const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > *v42; // [rsp+80h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *comp_type; // [rsp+88h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *monster_comp_ptr; // [rsp+90h] [rbp-90h]
  const std::pair<unsigned int const,SummonInfo> *v45; // [rsp+98h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,SummonInfo> >::type *summon_tag; // [rsp+A0h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,SummonInfo> >::type *summon_info; // [rsp+A8h] [rbp-78h]
  const std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > *v48; // [rsp+B0h] [rbp-70h]
  std::tuple_element<0,const std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::type *attach_to; // [rsp+B8h] [rbp-68h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::type *weapon_gadget_ptr; // [rsp+C0h] [rbp-60h]
  proto::SceneWeaponInfo *weapon_info; // [rsp+C8h] [rbp-58h]
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_begin_0; // [rsp+D0h] [rbp-50h] BYREF
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_end_0; // [rsp+E0h] [rbp-40h] BYREF
  common::milog::MiLogStream v54; // [rsp+F0h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(__int64 (__fastcall **)(const Monster *const))v3)(this) )
  {
    if ( Creature::toClient(this, entity_info, player) )
    {
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "toClient",
        278);
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v54, (const char (*)[15])"toClient fails");
      common::milog::MiLogStream::~MiLogStream(&v54);
      return -1;
    }
    else
    {
      monster_info = proto::SceneEntityInfo::mutable_monster(entity_info);
      if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_monster_id(monster_info, this->monster_id_);
      GroupId = Entity::getGroupId((const Entity *const)this);
      proto::SceneMonsterInfo::set_group_id(monster_info, GroupId);
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_config_id(monster_info, *(_DWORD *)&this->baseclass_0[260]);
      if ( *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->authority_peer_id_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_authority_peer_id(monster_info, this->authority_peer_id_);
      __for_range = &this->weapon_gadget_map_;
      __for_begin._M_node = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::begin(&this->weapon_gadget_map_)._M_node;
      __for_end._M_node = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::end(&this->weapon_gadget_map_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v48 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<MonsterWeaponGadget>>>::operator*(&__for_begin);
        attach_to = std::get<0ul,std::string const,std::shared_ptr<MonsterWeaponGadget>>(v48);
        weapon_gadget_ptr = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::type *)std::get<1ul,std::string const,std::shared_ptr<MonsterWeaponGadget>>(v48);
        weapon_info = proto::SceneMonsterInfo::add_weapon_list(monster_info);
        v6 = (unsigned __int64)std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)weapon_gadget_ptr);
        if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        v7 = *(_QWORD *)v6 + 416LL;
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, proto::SceneWeaponInfo *))v7)(v6, weapon_info);
        std::_Rb_tree_const_iterator<std::pair<std::string const,std::shared_ptr<MonsterWeaponGadget>>>::operator++(&__for_begin);
      }
      __for_range_0 = &this->affix_set_;
      __for_begin._M_node = std::set<unsigned int>::begin(&this->affix_set_)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
      {
        v8 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::SceneMonsterInfo::add_affix_list(monster_info, *v8);
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 122) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_elite_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_elite_);
      }
      proto::SceneMonsterInfo::set_is_elite(monster_info, this->is_elite_);
      OwnerEntityId = Creature::getOwnerEntityId(this);
      proto::SceneMonsterInfo::set_owner_entity_id(monster_info, OwnerEntityId);
      if ( *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->summoned_tag_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_summoned_tag(monster_info, this->summoned_tag_);
      summon_tag_map = proto::SceneMonsterInfo::mutable_summon_tag_map(monster_info);
      __for_range_1 = &this->summon_map_;
      __for_begin._M_node = std::map<unsigned int,SummonInfo>::begin(&this->summon_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,SummonInfo>::end(__for_range_1)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummonInfo> >::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummonInfo> >::_Self *)&__for_end) )
      {
        v45 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummonInfo>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummonInfo> > *const)&__for_begin);
        summon_tag = std::get<0ul,unsigned int const,SummonInfo>(v45);
        summon_info = (std::tuple_element<1,const std::pair<unsigned int const,SummonInfo> >::type *)std::get<1ul,unsigned int const,SummonInfo>(v45);
        v10 = std::set<std::shared_ptr<Monster>>::size(&summon_info->monster_set);
        v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](summon_tag_map, summon_tag);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v11);
        }
        *v12 = v10;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummonInfo>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,SummonInfo> > *const)&__for_begin);
      }
      monster_script_config = Monster::getMonsterScriptConfig(this);
      if ( monster_script_config )
      {
        if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->mark_flag >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)monster_script_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->mark_flag >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::SceneMonsterInfo::set_mark_flag(monster_info, monster_script_config->mark_flag);
      }
      PoseId = Monster::getPoseId(this);
      proto::SceneMonsterInfo::set_pose_id(monster_info, PoseId);
      if ( *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->born_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_born_type(monster_info, this->born_type_);
      BlockId = Entity::getBlockId((const Entity *const)this);
      proto::SceneMonsterInfo::set_block_id(monster_info, BlockId);
      if ( *(_BYTE *)(((unsigned __int64)&this->title_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->title_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_title_id(monster_info, this->title_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->special_name_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->special_name_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_special_name_id(monster_info, this->special_name_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->attack_target_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_target_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_attack_target_id(monster_info, this->attack_target_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->ai_config_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->ai_config_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_ai_config_id(monster_info, this->ai_config_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->level_route_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_route_id_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::SceneMonsterInfo::set_level_route_id(monster_info, this->level_route_id_);
      InitPoseId = Monster::getInitPoseId(this);
      proto::SceneMonsterInfo::set_init_pose_id(monster_info, InitPoseId);
      IsLightConfig = Monster::getIsLightConfig(this);
      proto::SceneMonsterInfo::set_is_light(monster_info, IsLightConfig);
      SceneComp = Player::getSceneComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      MonsterBeKilledNum = PlayerSceneComp::getMonsterBeKilledNum(SceneComp, this->monster_id_);
      proto::SceneMonsterInfo::set_kill_num(monster_info, MonsterBeKilledNum);
      if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->json_climate_type_ )
      {
        entity_environment_info = proto::SceneEntityInfo::add_entity_environment_info_list(entity_info);
        if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->json_climate_type_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::EntityEnvironmentInfo::set_json_climate_type(entity_environment_info, this->json_climate_type_);
        if ( *(_BYTE *)(((unsigned __int64)&this->json_climate_area_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->json_climate_area_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::EntityEnvironmentInfo::set_climate_area_id(entity_environment_info, this->json_climate_area_id_);
      }
      if ( std::operator!=<PlatformRoute>(&this->route_ptr_, 0LL) )
      {
        v19 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
        v20 = proto::SceneMonsterInfo::mutable_monster_route(monster_info);
        PlatformRoute::toClient(v19, v20);
      }
      __for_range_2 = this;
      EcsBase<Monster,MonsterCompBase,4u>::begin((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_begin_0);
      EcsBase<Monster,MonsterCompBase,4u>::end((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_end_0);
      while ( EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v42 = EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(&__for_begin_0);
        comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v42);
        monster_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v42);
        if ( std::operator!=<MonsterCompBase>(0LL, monster_comp_ptr) )
        {
          v21 = (unsigned __int64)std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_comp_ptr);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          v22 = *(_QWORD *)v21 + 32LL;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, proto::SceneMonsterInfo *))v22)(v21, monster_info);
        }
        EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator++(&__for_begin_0);
      }
      common::milog::MiLogStream::create(
        &v54,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/monster/monster.cpp",
        "toClient",
        345);
      v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v54, (const char (*)[11])"born_type:");
      v24 = common::milog::MiLogStream::operator<<<proto::MonsterBornType,(proto::MonsterBornType*)0>(
              v23,
              &this->born_type_);
      v25 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v24, (const char (*)[11])" born_pos:");
      v26 = operator<<(v25, &this->born_pos_);
      v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])" affix_set:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int>(v27, &this->affix_set_);
      v29 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v28, (const char (*)[10])" monster:");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v29, this);
      common::milog::MiLogStream::~MiLogStream(&v54);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "toClient",
      271);
    common::milog::MiLogStream::operator()(&v54, off_26013F60);
    common::milog::MiLogStream::~MiLogStream(&v54);
    return -1;
  }
};

// Line 353: range 000000001711C994-000000001711CA0C
int32_t __cdecl Monster::toBin(const Monster *const this, proto::GroupMonsterBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::GroupMonsterBin::set_dropped_hp_percent(bin, (int)(float)(100.0 * this->dropped_hp_percent_));
  return 0;
};

// Line 360: range 000000001711CA0E-000000001711CAA0
int32_t __cdecl Monster::fromBin(Monster *const this, const proto::GroupMonsterBin *bin)
{
  float v2; // xmm0_4

  v2 = (float)(int)proto::GroupMonsterBin::dropped_hp_percent(bin) / 100.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dropped_hp_percent_);
  }
  this->dropped_hp_percent_ = v2;
  return 0;
};

// Line 367: range 000000001711CAA2-000000001711CBEE
const data::MonsterExcelConfig *__cdecl Monster::getConfig(const Monster *const this)
{
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.monster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, this->monster_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( monster_config_ptr )
    return monster_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/monster/monster.cpp",
    "getConfig",
    371);
  v2 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v6,
         (const char (*)[42])"findMonsterExcelConfig fails, monster_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->monster_id_);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 379: range 000000001711CBF0-000000001711CCCD
data::ConfigCharacterPtr __cdecl Monster::getCharacterConfig(const Monster *const this)
{
  __int64 v1; // rsi
  uint32_t v2; // ecx
  data::ConfigCharacterPtr result; // rax
  std::shared_ptr<Config> v4; // [rsp+10h] [rbp-30h] BYREF
  std::shared_ptr<data::ConfigMonster> __r; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v4);
  v2 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  JsonConfigMgr::findMonsterConfig((const JsonConfigMgr *const)&__r, v2);
  std::shared_ptr<data::ConfigCharacter>::shared_ptr<data::ConfigMonster,void>(
    (std::shared_ptr<data::ConfigCharacter> *const)this,
    &__r);
  std::shared_ptr<data::ConfigMonster>::~shared_ptr(&__r);
  std::shared_ptr<Config>::~shared_ptr(&v4);
  result._M_ptr = (std::__shared_ptr<data::ConfigCharacter,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 385: range 000000001711CCCE-000000001711CE31
const MonsterScriptConfig *__cdecl Monster::getMonsterScriptConfig(const Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const MonsterScriptConfig *MonsterConfig; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t ConfigId; // edx
  const MonsterScriptConfig *result; // rax
  const GroupScriptConfig *group_script_config_ptr; // [rsp+18h] [rbp-78h]
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:386";
  *(_QWORD *)(v1 + 16) = Monster::getMonsterScriptConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
  {
    MonsterConfig = 0LL;
  }
  else
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    group_script_config_ptr = Group::getScriptConfig(v5);
    if ( group_script_config_ptr )
    {
      ConfigId = Entity::getConfigId((const Entity *const)this);
      MonsterConfig = GroupScriptConfig::findMonsterConfig(group_script_config_ptr, ConfigId);
    }
    else
    {
      MonsterConfig = 0LL;
    }
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  result = MonsterConfig;
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

// Line 401: range 000000001711CE32-000000001711CF73
data::MonsterType __cdecl Monster::getMonsterType(const Monster *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream *v2; // rdx
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  monster_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(const Monster *const))v1)(this);
  if ( monster_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)monster_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return monster_config_ptr->type;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "getMonsterType",
      405);
    v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"getConfig fails");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return 0;
  }
};

// Line 413: range 000000001711CF74-000000001711D1CD
data::ConfigMonsterPtr __cdecl Monster::getJsonConfig(const Monster *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  data::ConfigMonsterPtr result; // rax
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 config_monster_ptr:414";
  *(_QWORD *)(v2 + 16) = Monster::getJsonConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)
     + 93080;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  JsonConfigMgr::findMonsterConfig((const JsonConfigMgr *const)(v2 + 32), v5);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( std::operator==<data::ConfigMonster>((const std::shared_ptr<data::ConfigMonster> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "getJsonConfig",
      417);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v9,
           (const char (*)[37])"findMonsterConfig fails, monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 2672));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<data::ConfigMonster>::shared_ptr((std::shared_ptr<data::ConfigMonster> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<data::ConfigMonster>::shared_ptr(
      (std::shared_ptr<data::ConfigMonster> *const)this,
      (std::shared_ptr<data::ConfigMonster> *)(v2 + 32));
  }
  std::shared_ptr<data::ConfigMonster>::~shared_ptr((std::shared_ptr<data::ConfigMonster> *const)(v2 + 32));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 425: range 000000001711D1CE-000000001711D2D7
const data::ConfigAIBeta *__cdecl Monster::getJsonAIConfig(const Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  data::ConfigAIBeta *p_aibeta; // r14
  const data::ConfigAIBeta *result; // rax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 22 config_monster_ptr:426";
  *(_QWORD *)(v1 + 16) = Monster::getJsonAIConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Monster::getJsonConfig((const Monster *const)(v1 + 32));
  if ( std::operator==<data::ConfigMonster>((const std::shared_ptr<data::ConfigMonster> *)(v1 + 32), 0LL) )
    p_aibeta = 0LL;
  else
    p_aibeta = &std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->aibeta;
  std::shared_ptr<data::ConfigMonster>::~shared_ptr((std::shared_ptr<data::ConfigMonster> *const)(v1 + 32));
  result = p_aibeta;
  if ( v6 == (char *)v1 )
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

// Line 436: range 000000001711D2D8-000000001711D576
const data::GrowCurveInfo *__fastcall Monster::findCurveInfo(
        const Monster *const this,
        data::GrowCurveType type,
        uint32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const data::GrowCurveInfo *result; // rax
  const data::GrowCurveInfo *curve_info_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 type:435";
  *(_QWORD *)(v3 + 16) = Monster::findCurveInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = type;
  if ( Monster::getMonsterType(this) == MONSTER_PARTNER )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    curve_info_ptr = GrowCurveExcelConfigMgr::findPartnerCurveInfo(
                       &v6->design_config.txt_config_mgr.grow_curve_config_mgr,
                       level,
                       (data::GrowCurveType)*(_DWORD *)(v3 + 32));
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    curve_info_ptr = GrowCurveExcelConfigMgr::findMonsterCurveInfo(
                       &v7->design_config.txt_config_mgr.grow_curve_config_mgr,
                       level,
                       (data::GrowCurveType)*(_DWORD *)(v3 + 32));
  }
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( curve_info_ptr )
  {
    result = curve_info_ptr;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "findCurveInfo",
      448);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v14,
           (const char (*)[34])"findMonsterCurveInfo fails, type:");
    v9 = common::milog::MiLogStream::operator<<<data::GrowCurveType,(data::GrowCurveType*)0>(
           v8,
           (const data::GrowCurveType *)(v3 + 32));
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v9, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
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

// Line 456: range 000000001711D578-000000001711D6A2
int32_t __cdecl Monster::interactCheck(Monster *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  const EcsBase<Monster,MonsterCompBase,4>::CompBasePair *v7; // [rsp+28h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *monster_comp_ptr; // [rsp+38h] [rbp-28h]
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_begin; // [rsp+40h] [rbp-20h] BYREF
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_end; // [rsp+50h] [rbp-10h] BYREF

  EcsBase<Monster,MonsterCompBase,4u>::begin((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_begin);
  EcsBase<Monster,MonsterCompBase,4u>::end((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_end);
  while ( EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v7 = EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v7);
    monster_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v7);
    v3 = (unsigned __int64)std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_comp_ptr);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(_QWORD *)v3 + 16LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    if ( !(*(unsigned int (__fastcall **)(unsigned __int64, Player *, const EntityInteractParam *))v4)(
            v3,
            player,
            param) )
      return 0;
    EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator++(&__for_begin);
  }
  return -1;
};

// Line 469: range 000000001711D6A4-000000001711D9A5
int32_t __cdecl Monster::onBeingHit(Monster *const this, Creature *attacker, HurtContext *context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  JsonConfigMgr *p_json_config_mgr; // rcx
  bool v7; // r14
  int32_t result; // eax
  int32_t ret; // [rsp+28h] [rbp-A8h]
  uint32_t now; // [rsp+2Ch] [rbp-A4h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 server_hash_value:477";
  *(_QWORD *)(v3 + 16) = Monster::onBeingHit;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  ret = Creature::onBeingHit(this, attacker, context);
  if ( *(char *)(((unsigned __int64)&this->is_checked_ai_hash_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_checked_ai_hash_);
  if ( !this->is_checked_ai_hash_ )
  {
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[640] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[640] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now - *(_DWORD *)&this->baseclass_0[640] > 5 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v12);
      p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.json_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v7 = JsonConfigMgr::findMonsterAIConfigHash(p_json_config_mgr, this->monster_id_, (int32_t *)(v3 + 32)) != 0;
      std::shared_ptr<Config>::~shared_ptr(&v12);
      if ( v7 )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "onBeingHit",
          480);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v13,
          (const char (*)[35])"find monster ai config hash failed");
        common::milog::MiLogStream::~MiLogStream(&v13);
        result = -1;
        goto LABEL_16;
      }
      Monster::logMonsterAIHashChech(this, *(_DWORD *)(v3 + 32), 0);
    }
  }
  result = ret;
LABEL_16:
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

// Line 492: range 000000001711D9A6-000000001711DB33
int32_t __cdecl Monster::interact(Monster *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  const EcsBase<Monster,MonsterCompBase,4>::CompBasePair *v9; // [rsp+28h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *monster_comp_ptr; // [rsp+38h] [rbp-28h]
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_begin; // [rsp+40h] [rbp-20h] BYREF
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_end; // [rsp+50h] [rbp-10h] BYREF

  EcsBase<Monster,MonsterCompBase,4u>::begin((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_begin);
  EcsBase<Monster,MonsterCompBase,4u>::end((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_end);
  while ( 1 )
  {
    if ( !EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator!=(&__for_begin, &__for_end) )
      return -1;
    v9 = EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v9);
    monster_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v9);
    v3 = (unsigned __int64)std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_comp_ptr);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(_QWORD *)v3 + 16LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    if ( !(*(unsigned int (__fastcall **)(unsigned __int64, Player *, const EntityInteractParam *))v4)(
            v3,
            player,
            param) )
      break;
    EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator++(&__for_begin);
  }
  v5 = (unsigned __int64)std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_comp_ptr);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(unsigned __int64, Player *, const EntityInteractParam *))v6)(v5, player, param);
};

// Line 506: range 000000001711DB34-000000001711DBDA
int32_t __cdecl Monster::beforeEnterPlayerView(Monster *const this, Player *player)
{
  int ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  ret = Creature::beforeEnterPlayerView(this, player);
  if ( !ret )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/monster/monster.cpp",
    "beforeEnterPlayerView",
    510);
  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
    &v4,
    (const char (*)[28])"beforeEnterPlayerView fails");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return ret;
};

// Line 518: range 000000001711DBDC-000000001711DC82
int32_t __cdecl Monster::onEnterPlayerView(Monster *const this, Player *player)
{
  int ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  ret = Creature::onEnterPlayerView(this, player);
  if ( !ret )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/monster/monster.cpp",
    "onEnterPlayerView",
    522);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v4, (const char (*)[24])"onEnterPlayerView fails");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return ret;
};

// Line 530: range 000000001711DC84-000000001711DD2A
int32_t __cdecl Monster::onExitPlayerView(Monster *const this, Player *player)
{
  int ret; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  ret = Creature::onExitPlayerView(this, player);
  if ( !ret )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/monster/monster.cpp",
    "onExitPlayerView",
    534);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v4, (const char (*)[23])"onExitPlayerView fails");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return ret;
};

// Line 542: range 000000001711DD2C-000000001711E10E
bool __cdecl Monster::isInvisibleReset(Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool is_invisible_reset; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  bool result; // al
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+10h] [rbp-B0h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 group_ptr:543";
  *(_QWORD *)(v1 + 16) = Monster::isInvisibleReset;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  Entity::getGroup((const Entity *const)(v1 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "isInvisibleReset",
      546);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])"group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v11);
    is_invisible_reset = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    group_info_config_ptr = Group::getInfoScriptConfig(v5);
    if ( group_info_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->business_info >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)group_info_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->business_info >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( group_info_config_ptr->business_info.type == 5 )
      {
        is_invisible_reset = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->monster_pool_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->monster_pool_id_ )
        {
          is_invisible_reset = 0;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v10);
          p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.monster_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                                 p_monster_config_mgr,
                                 this->monster_id_);
          std::shared_ptr<Config>::~shared_ptr(&v10);
          if ( monster_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->is_invisible_reset >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)monster_config_ptr - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->is_invisible_reset >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load1(&monster_config_ptr->is_invisible_reset);
            }
            is_invisible_reset = monster_config_ptr->is_invisible_reset;
          }
          else
          {
            is_invisible_reset = 0;
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "isInvisibleReset",
        552);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v11,
        (const char (*)[30])"group_info_config_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v11);
      is_invisible_reset = 0;
    }
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  result = is_invisible_reset;
  if ( v12 == (char *)v1 )
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

// Line 573: range 000000001711E2EA-0000000017121039
void __cdecl Monster::onDie(Monster *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  Player *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  char v12; // al
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t SceneId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  const std::string *v17; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v18; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  bool is_ban_drop; // cl
  Player *v21; // rax
  Scene *v22; // rax
  SceneMultistagePlayComp *MultistagePlayComp; // rcx
  Player *v24; // rax
  uint32_t GroupId; // edx
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  LuaScript *v28; // rax
  int *v29; // r9
  unsigned int *v30; // r9
  Player *v31; // rax
  Scene *v32; // rax
  uint32_t v33; // ecx
  __m128i v34; // xmm0
  float *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  Player *v39; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  Player *v42; // rax
  PlayerExhibitionComp *v43; // rcx
  const std::shared_ptr<Player> *v44; // rax
  Player *v45; // rax
  Player *v46; // rax
  unsigned int *v47; // r8
  bool *v48; // r9
  Player *v49; // rax
  Player *v50; // rax
  Player *v51; // rax
  uint32_t v52; // eax
  Vector3 *Position; // rax
  const std::shared_ptr<Player> *v54; // rax
  Player *v55; // rax
  const std::shared_ptr<Monster> *v56; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v60; // rax
  Monster *v61; // rdx
  Group *v62; // rdx
  Group *v63; // rax
  ChallengeComp *ChallengeComp; // rcx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v65; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v70; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rdx
  int32_t *p_param3; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  Group *v74; // rax
  unsigned __int64 v75; // rax
  Group *v76; // rax
  MonsterTideComp *MonsterTideComp; // rdx
  Group *v78; // rax
  PoolMonsterTideComp *PoolMonsterTideComp; // rdx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rdx
  uint32_t *v81; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rdx
  int32_t *v83; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rdx
  uint32_t *p_uid; // rax
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v89; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v90; // rdx
  int32_t *v91; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v92; // rax
  Group *v93; // rax
  std::string v94; // [rsp+0h] [rbp-4F0h]
  uint32_t config_id; // [rsp+10h] [rbp-4E0h]
  uint32_t config_ida; // [rsp+10h] [rbp-4E0h]
  uint32_t config_idb; // [rsp+10h] [rbp-4E0h]
  void (__fastcall *config_idc)(Monster *const, VisionContext *); // [rsp+10h] [rbp-4E0h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v99; // [rsp+18h] [rbp-4D8h]
  std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v100; // [rsp+18h] [rbp-4D8h]
  PlayerScenePlayComp *ScenePlayComp; // [rsp+18h] [rbp-4D8h]
  float v102; // [rsp+18h] [rbp-4D8h]
  PlayerEventComp *EventComp; // [rsp+18h] [rbp-4D8h]
  PlayerWatcherComp *WatcherComp; // [rsp+18h] [rbp-4D8h]
  PlayerEventComp *v105; // [rsp+18h] [rbp-4D8h]
  PlayerWatcherComp *v106; // [rsp+18h] [rbp-4D8h]
  Scene *v107; // [rsp+18h] [rbp-4D8h]
  PlayerEventComp *v108; // [rsp+18h] [rbp-4D8h]
  uint32_t v109; // [rsp+18h] [rbp-4D8h]
  int32_t v110; // [rsp+18h] [rbp-4D8h]
  uint32_t Uid; // [rsp+18h] [rbp-4D8h]
  proto::ChangHpReason reason; // [rsp+18h] [rbp-4D8h]
  data::MonsterType MonsterType; // [rsp+18h] [rbp-4D8h]
  int v114; // [rsp+18h] [rbp-4D8h]
  uint32_t v115; // [rsp+18h] [rbp-4D8h]
  int32_t v116; // [rsp+18h] [rbp-4D8h]
  data::KillSelfType kill_self_type; // [rsp+18h] [rbp-4D8h]
  uint32_t PlayerUid; // [rsp+18h] [rbp-4D8h]
  proto_log::PlayerLogBodyMonsterDie *v119; // [rsp+18h] [rbp-4D8h]
  proto::ChangHpReason v120; // [rsp+18h] [rbp-4D8h]
  data::MonsterType v121; // [rsp+18h] [rbp-4D8h]
  Scene *v122; // [rsp+18h] [rbp-4D8h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-4B1h] BYREF
  std::shared_ptr<Creature> __args_0; // [rsp+40h] [rbp-4B0h] BYREF
  uint32_t group_id; // [rsp+50h] [rbp-4A0h]
  uint32_t now; // [rsp+54h] [rbp-49Ch]
  std::map<unsigned int,SummonInfo>::iterator __for_begin_0; // [rsp+58h] [rbp-498h] BYREF
  std::map<unsigned int,SummonInfo>::iterator __for_end_0; // [rsp+60h] [rbp-490h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+68h] [rbp-488h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+70h] [rbp-480h] BYREF
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+78h] [rbp-478h]
  proto_log::EntityLog *monster_log; // [rsp+80h] [rbp-470h]
  std::set<unsigned int> *__for_range; // [rsp+88h] [rbp-468h]
  std::map<unsigned int,Monster::PlayerHurtData> *__for_range_0; // [rsp+90h] [rbp-460h]
  std::vector<std::shared_ptr<Player>> *__for_range_1; // [rsp+98h] [rbp-458h]
  std::vector<std::shared_ptr<Player>> *__for_range_2; // [rsp+A0h] [rbp-450h]
  std::map<unsigned int,SummonInfo> *__for_range_3; // [rsp+A8h] [rbp-448h]
  std::pair<unsigned int const,SummonInfo> *__in; // [rsp+B0h] [rbp-440h]
  std::tuple_element<0,std::pair<unsigned int const,SummonInfo> >::type *summon_tag; // [rsp+B8h] [rbp-438h]
  std::tuple_element<1,std::pair<unsigned int const,SummonInfo> >::type *summon_info; // [rsp+C0h] [rbp-430h]
  std::set<std::shared_ptr<Monster>> *__for_range_4; // [rsp+C8h] [rbp-428h]
  const std::pair<unsigned int const,Monster::PlayerHurtData> *v142; // [rsp+D0h] [rbp-420h]
  std::tuple_element<0,const std::pair<unsigned int const,Monster::PlayerHurtData> >::type *uid_0; // [rsp+D8h] [rbp-418h]
  std::tuple_element<1,const std::pair<unsigned int const,Monster::PlayerHurtData> >::type *hurt_data; // [rsp+E0h] [rbp-410h]
  ScriptContext *o; // [rsp+E8h] [rbp-408h]
  VisionContext v146; // [rsp+F4h] [rbp-3FCh] BYREF
  std::shared_ptr<Creature> v147; // [rsp+100h] [rbp-3F0h] BYREF
  std::shared_ptr<Monster> __r; // [rsp+110h] [rbp-3E0h] BYREF
  std::vector<std::shared_ptr<Player>> __x; // [rsp+120h] [rbp-3D0h] BYREF
  common::milog::MiLogStream v150; // [rsp+140h] [rbp-3B0h] BYREF
  char v151[912]; // [rsp+160h] [rbp-390h] BYREF
  Monster::onDie::<lambda(Player&)> v152; // 0:esi.4,8:rdx.8

  v2 = (unsigned __int64)v151;
  v94._M_dataplus._M_p = v151;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 1 10 holder:598 48 4 21 damage_percentage:674 64 16 13 scene_ptr:581 96 16 18 own_player_p"
                        "tr:588 128 16 13 group_ptr:618 160 16 14 script_ptr:644 192 16 20 owner_player_ptr:660 224 16 21"
                        " owner_monster_ptr:745 256 16 12 self_ptr:752 288 16 11 evt_ptr:787 320 16 15 ability_ptr:800 35"
                        "2 24 14 player_vec:696 416 32 12 trans_no:590 480 48 20 backup_alert_set:616 560 48 14 summon_ma"
                        "p:732 640 160 18 script_context:647";
  *(_QWORD *)(v2 + 16) = Monster::onDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -234881024;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862739] = -218959118;
  v4[536862745] = -202116109;
  v4[536862746] = -202116109;
  Creature::onDie(this, context);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 320));
  p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320))->design_config.txt_config_mgr.monster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(p_monster_config_mgr, this->monster_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 320));
  if ( monster_config_ptr )
  {
    Entity::getScene((const Entity *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v150,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/monster/monster.cpp",
        "onDie",
        584);
      v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v150, (const char (*)[15])"getScene fails");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v7, this);
      common::milog::MiLogStream::~MiLogStream(&v150);
    }
    else
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::getOwnPlayer((const Scene *const)(v2 + 96));
      std::string::basic_string(v2 + 416);
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
      {
        v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        BasicComp = Player::getBasicComp(v8);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v150, BasicComp);
        std::string::operator=(v2 + 416, &v150);
        std::string::~string(&v150);
      }
      v10 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      v11 = *(_QWORD *)v10 + 184LL;
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, ChangeHpContext *, Monster *const))v11)(v10, context, this);
      std::string::basic_string(&v150, v2 + 416);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x5E8u, v94);
      std::string::~string(&v150);
      if ( !std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( context->reason == CHANGE_HP_SUB_ABILITY || context->reason == CHANGE_HP_SUB_KILL_SELF )
LABEL_22:
        v12 = 0;
      else
        v12 = 1;
      if ( v12 )
      {
        common::tools::perf::make_shared<proto_log::PlayerLogBodyMonsterDie>();
        v99 = std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
        v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        SceneId = Scene::getSceneId(v13);
        proto_log::PlayerLogBodyMonsterDie::set_scene_id(v99, SceneId);
        v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
        monster_log = proto_log::PlayerLogBodyMonsterDie::mutable_monster_log(v15);
        Entity::getEntityLog((Entity *const)this, monster_log);
        v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMonsterDie::set_reason(v16, context->reason);
        v100 = std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
        v17 = Monster::getMonsterCombatTransaction[abi:cxx11](this);
        proto_log::PlayerLogBodyMonsterDie::set_combat_transaction(v100, v17);
        __for_range = &this->alert_player_set_;
        __for_begin._M_node = std::set<unsigned int>::begin(&this->alert_player_set_)._M_node;
        __for_end._M_node = std::set<unsigned int>::end(&this->alert_player_set_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v18 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          HIDWORD(__args_0._M_refcount._M_pi) = *v18;
          v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
          proto_log::PlayerLogBodyMonsterDie::add_attacker_list(v19, HIDWORD(__args_0._M_refcount._M_pi));
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        *(&v94._anon_0._M_allocated_capacity + 1) = (std::string::size_type)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(v2 + 320),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMonsterDie,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v2 + 288),
          (const std::shared_ptr<proto_log::PlayerLogBodyMonsterDie> *)(v2 + 256));
        Player::printStatLog(
          *((Player *const *)&v94._anon_0._M_allocated_capacity + 1),
          (MessagePtr *)(v2 + 288),
          (MessagePtr *)(v2 + 320),
          0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 288));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 320));
        std::shared_ptr<proto_log::PlayerLogBodyMonsterDie>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMonsterDie> *const)(v2 + 256));
      }
      if ( *(char *)(((unsigned __int64)&context->is_ban_drop >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&context->is_ban_drop);
      is_ban_drop = context->is_ban_drop;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_ban_all_drop_);
      }
      this->is_ban_all_drop_ = is_ban_drop;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 480), &this->alert_player_set_);
      Monster::clearAlertAvatar(this, PlayerLogBodyCombatEnd_CombatEndReason_COMBAT_END_MONSTER_DIE, context);
      Entity::getGroup((const Entity *const)(v2 + 128));
      group_id = Entity::getGroupId((const Entity *const)this);
      if ( std::operator!=<Creature>(&context->attacker_ptr, 0LL) )
      {
        std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
        Creature::findOriginalPlayer((Creature *const)(v2 + 256));
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 256), 0LL) )
        {
          LODWORD(__args_0._M_ptr) = Entity::getGroupId((const Entity *const)this);
          common::tools::perf::make_shared<KillMonsterEvent,std::shared_ptr<Creature> &,unsigned int &,unsigned int &,unsigned int &,unsigned int>(
            &v147,
            (unsigned int *)&context->attacker_ptr,
            (unsigned int *)&this->baseclass_0[256],
            (unsigned int *)&this->baseclass_0[260],
            &this->monster_id_,
            &__args_0,
            (unsigned int *)v94._M_dataplus._M_p,
            (unsigned int *)v94._M_string_length,
            (unsigned int *)v94._anon_0._M_allocated_capacity,
            *((unsigned int **)&v94._anon_0._M_allocated_capacity + 1));
          std::shared_ptr<BaseEvent>::shared_ptr<KillMonsterEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v2 + 288),
            (std::shared_ptr<KillMonsterEvent> *)&v147);
          std::shared_ptr<KillMonsterEvent>::~shared_ptr((std::shared_ptr<KillMonsterEvent> *const)&v147);
          v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
          *(&v94._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Player::getEventComp(v21);
          std::shared_ptr<BaseEvent>::shared_ptr(
            (std::shared_ptr<BaseEvent> *const)(v2 + 320),
            (const std::shared_ptr<BaseEvent> *)(v2 + 288));
          PlayerEventComp::notifyEvent(
            *((PlayerEventComp *const *)&v94._anon_0._M_allocated_capacity + 1),
            (BaseEventPtr *)(v2 + 320));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 320));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 288));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 256));
      }
      Monster::dropDie(this);
      v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      MultistagePlayComp = Scene::getMultistagePlayComp(v22);
      SceneMultistagePlayComp::onMonsterDie(MultistagePlayComp, context, this);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) )
      {
        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        ScenePlayComp = Player::getScenePlayComp(v24);
        config_id = Entity::getConfigId((const Entity *const)this);
        GroupId = Entity::getGroupId((const Entity *const)this);
        PlayerScenePlayComp::onMonsterDie(ScenePlayComp, context, GroupId, config_id);
      }
      Monster::getScript((const Monster *const)(v2 + 160));
      v94._anon_0._M_local_buf[8] = 0;
      v94._anon_0._M_local_buf[0] = 0;
      LOBYTE(v94._M_string_length) = std::operator!=<LuaScript>((const std::shared_ptr<LuaScript> *)(v2 + 160), 0LL)
                                  && (v94._M_string_length = (std::string::size_type)std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160)),
                                      std::allocator<char>::allocator(&__a),
                                      v94._anon_0._M_local_buf[8] = 1,
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)&v150,
                                        "OnDie",
                                        &__a),
                                      v94._anon_0._M_local_buf[0] = 1,
                                      LuaScript::hasFunction(
                                        (LuaScript *const)v94._M_string_length,
                                        (const std::string *)&v150));
      if ( v94._anon_0._M_local_buf[0] )
        std::string::~string(&v150);
      if ( v94._anon_0._M_local_buf[8] )
        std::allocator<char>::~allocator(&__a);
      if ( LOBYTE(v94._M_string_length) )
      {
        ScriptContext::ScriptContext((ScriptContext *const)(v2 + 640));
        toThisPtr<Monster>((Monster *)&__r);
        std::weak_ptr<Monster>::operator=<Monster>((std::weak_ptr<Monster> *const)(v2 + 704), &__r);
        std::shared_ptr<Monster>::~shared_ptr(&__r);
        Entity::getScene((const Entity *const)(v2 + 320));
        ScriptContext::setSceneAndOwnerUid((ScriptContext *const)(v2 + 640), (ScenePtr *)(v2 + 320));
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 320));
        HIDWORD(__args_0._M_ptr) = 0;
        LODWORD(__args_0._M_refcount._M_pi) = 5;
        if ( std::operator!=<HurtContext>(0LL, &this->hurt_context_ptr_) )
        {
          v26 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hurt_context_ptr_);
          HIDWORD(__args_0._M_ptr) = HurtContext::getElementType(v26);
          v27 = std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HurtContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->hurt_context_ptr_);
          LODWORD(__args_0._M_refcount._M_pi) = HurtContext::getStrikeType(v27);
        }
        LODWORD(__args_0._M_ptr) = __args_0._M_refcount._M_pi;
        *(_DWORD *)(v2 + 48) = HIDWORD(__args_0._M_ptr);
        o = (ScriptContext *)(v2 + 640);
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)boost::addressof<ScriptContext>((ScriptContext *)(v2 + 640));
        *((std::set<unsigned int>::iterator *)&v94._anon_0._M_allocated_capacity + 1) = __for_end;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v150, "OnDie", &__a);
        v28 = std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<LuaScript,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        ScriptLib::executeFuncWithErrorNotify<void,int,int>(
          v28,
          (const std::string *)&v150,
          *((ScriptContext **)&v94._anon_0._M_allocated_capacity + 1),
          (int *)(v2 + 48),
          (int *)&__args_0,
          v29,
          (int *)v94._M_dataplus._M_p);
        std::string::~string(&v150);
        std::allocator<char>::~allocator(&__a);
        ScriptContext::~ScriptContext((ScriptContext *const)(v2 + 640));
      }
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::getOwnPlayer((const Scene *const)(v2 + 192));
      if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 192), 0LL) )
      {
        LODWORD(__args_0._M_ptr) = Entity::getGroupId((const Entity *const)this);
        common::tools::perf::make_shared<MonsterDieEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int>(
          (unsigned int *)(v2 + 288),
          (unsigned int *)&this->baseclass_0[256],
          (unsigned int *)&this->baseclass_0[260],
          &this->monster_id_,
          (unsigned int *)&__args_0,
          v30,
          (unsigned int *)v94._M_dataplus._M_p,
          (unsigned int *)v94._M_string_length);
        std::shared_ptr<BaseEvent>::shared_ptr<MonsterDieEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v2 + 256),
          (std::shared_ptr<MonsterDieEvent> *)(v2 + 288));
        std::shared_ptr<MonsterDieEvent>::~shared_ptr((std::shared_ptr<MonsterDieEvent> *const)(v2 + 288));
        v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        *(&v94._anon_0._M_allocated_capacity + 1) = (std::string::size_type)Player::getEventComp(v31);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)(v2 + 320),
          (const std::shared_ptr<BaseEvent> *)(v2 + 256));
        PlayerEventComp::notifyEvent(
          *((PlayerEventComp *const *)&v94._anon_0._M_allocated_capacity + 1),
          (BaseEventPtr *)(v2 + 320));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 320));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 256));
      }
      v32 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      now = Scene::getSceneTimeSeconds(v32);
      __for_range_0 = &this->player_hurt_map_;
      __for_begin._M_node = std::map<unsigned int,Monster::PlayerHurtData>::begin(&this->player_hurt_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,Monster::PlayerHurtData>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,Monster::PlayerHurtData> >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,Monster::PlayerHurtData> >::_Self *)&__for_end) )
      {
        v142 = std::_Rb_tree_iterator<std::pair<unsigned int const,Monster::PlayerHurtData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,Monster::PlayerHurtData> > *const)&__for_begin);
        uid_0 = std::get<0ul,unsigned int const,Monster::PlayerHurtData>(v142);
        hurt_data = (std::tuple_element<1,const std::pair<unsigned int const,Monster::PlayerHurtData> >::type *)std::get<1ul,unsigned int const,Monster::PlayerHurtData>(v142);
        v33 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findPlayer((const Scene *const)(v2 + 320), v33);
        if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 320), 0LL) )
        {
          v34 = 0LL;
          *(_DWORD *)(v2 + 48) = 0;
          if ( Creature::getMaxHp(this) > 0.0 )
          {
            *(float *)v34.m128i_i32 = Creature::getMaxHp(this);
            LODWORD(__args_0._M_ptr) = _mm_cvtsi128_si32(v34);
            v35 = (float *)std::min<float>((const float *)hurt_data, (const float *)&__args_0);
            if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v102 = *v35;
            *(float *)(v2 + 48) = 100.0 * (float)(v102 / Creature::getMaxHp(this));
          }
          common::milog::MiLogStream::create(
            &v150,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/monster/monster.cpp",
            "onDie",
            679);
          v36 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v150,
                  (const char (*)[39])"[LanternRite] monster die with player:");
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, uid_0);
          v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v37,
                  (const char (*)[17])" damage_percent:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v38, (const float *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v150);
          v39 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320));
          ExhibitionComp = Player::getExhibitionComp(v39);
          PlayerExhibitionComp::triggerMonsterDamageHurtPercentOnDie(ExhibitionComp, this, *(float *)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( context->reason == CHANGE_HP_SUB_DRAWN || std::operator==<char>("CrashDamage", &context->attack_tag) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&hurt_data->last_hurt_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)hurt_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hurt_data->last_hurt_time >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( now >= hurt_data->last_hurt_time )
            {
              v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320));
              v43 = Player::getExhibitionComp(v42);
              if ( *(_BYTE *)(((unsigned __int64)&hurt_data->last_hurt_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)hurt_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&hurt_data->last_hurt_time >> 3)
                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              PlayerExhibitionComp::triggerMonsterDrawnTimeOnDie(v43, this, now - hurt_data->last_hurt_time);
            }
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 320));
        std::_Rb_tree_iterator<std::pair<unsigned int const,Monster::PlayerHurtData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,Monster::PlayerHurtData> > *const)&__for_begin);
      }
      std::map<unsigned int,Monster::PlayerHurtData>::clear(&this->player_hurt_map_);
      if ( *(_BYTE *)(((unsigned __int64)&context->kill_self_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)context + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->kill_self_type >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( context->kill_self_type != Disappear )
      {
        std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 320), &context->attacker_ptr);
        Monster::getEngagedPlayerOnScene(
          (std::vector<std::shared_ptr<Player>> *)(v2 + 352),
          this,
          (const std::set<unsigned int> *)(v2 + 480),
          (CreaturePtr *)(v2 + 320));
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 320));
        __for_range_1 = (std::vector<std::shared_ptr<Player>> *)(v2 + 352);
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 352))._M_current;
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Player>>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end) )
        {
          v44 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 224), v44);
          if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 224), 0LL) )
          {
            common::tools::perf::make_shared<MonsterBeKilledByHateListEvent,unsigned int &>(
              (unsigned int *)(v2 + 256),
              &this->monster_id_);
            v45 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
            EventComp = Player::getEventComp(v45);
            std::shared_ptr<BaseEvent>::shared_ptr<MonsterBeKilledByHateListEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v2 + 320),
              (const std::shared_ptr<MonsterBeKilledByHateListEvent> *)(v2 + 256));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v2 + 320));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 320));
            if ( std::vector<std::shared_ptr<Player>>::size((const std::vector<std::shared_ptr<Player>> *const)(v2 + 352)) > 1 )
            {
              v46 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
              WatcherComp = Player::getWatcherComp(v46);
              if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              config_ida = this->monster_id_;
              std::shared_ptr<Creature>::shared_ptr(
                (std::shared_ptr<Creature> *const)(v2 + 320),
                &context->attacker_ptr);
              PlayerWatcherComp::triggerMpKillMonsterNum(WatcherComp, (CreaturePtr *)(v2 + 320), config_ida);
              std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 320));
            }
            __a.gap0[0] = 0;
            LODWORD(__args_0._M_ptr) = Entity::getConfigId((const Entity *const)this);
            *(_DWORD *)(v2 + 48) = Entity::getGroupId((const Entity *const)this);
            common::tools::perf::make_shared<WeeklyBossKillEvent,unsigned int,unsigned int,bool>(
              (unsigned int *)(v2 + 288),
              (unsigned int *)(v2 + 48),
              (bool *)&__args_0,
              (unsigned int *)&__a,
              v47,
              v48);
            v49 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
            v105 = Player::getEventComp(v49);
            std::shared_ptr<BaseEvent>::shared_ptr<WeeklyBossKillEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v2 + 320),
              (const std::shared_ptr<WeeklyBossKillEvent> *)(v2 + 288));
            PlayerEventComp::notifyEvent(v105, (BaseEventPtr *)(v2 + 320));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 320));
            v50 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
            Player::getVehicleComp(v50);
            PlayerVehicleComp::getCurVehicle((const PlayerVehicleComp *const)(v2 + 320));
            LOBYTE(v105) = std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v2 + 320));
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 320));
            if ( (_BYTE)v105 )
            {
              v51 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
              v106 = Player::getWatcherComp(v51);
              config_idb = Monster::getMonsterId(this);
              v52 = Entity::getGroupId((const Entity *const)this);
              PlayerWatcherComp::triggerKillMonstersWithoutVehicle(v106, v52, config_idb);
            }
            std::shared_ptr<WeeklyBossKillEvent>::~shared_ptr((std::shared_ptr<WeeklyBossKillEvent> *const)(v2 + 288));
            std::shared_ptr<MonsterBeKilledByHateListEvent>::~shared_ptr((std::shared_ptr<MonsterBeKilledByHateListEvent> *const)(v2 + 256));
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 224));
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
        }
        v107 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        Position = (Vector3 *)Entity::getPosition((const Entity *const)this);
        if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          Position = (Vector3 *)__asan_report_load_n(Position, 12LL);
        }
        Scene::getDropSurroundPlayers(&__x, v107, *Position);
        std::vector<std::shared_ptr<Player>>::operator=((std::vector<std::shared_ptr<Player>> *const)(v2 + 352), &__x);
        std::vector<std::shared_ptr<Player>>::~vector(&__x);
        __for_range_2 = (std::vector<std::shared_ptr<Player>> *)(v2 + 352);
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 352))._M_current;
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Player>>::end(__for_range_2)._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end) )
        {
          v54 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 224), v54);
          toThisPtr<Monster>((Monster *)(v2 + 288));
          common::tools::perf::make_shared<RoundMonsterDieEvent,unsigned int &,std::shared_ptr<Monster>>(
            (unsigned int *)(v2 + 320),
            (std::shared_ptr<Monster> *)&this->monster_id_,
            (unsigned int *)(v2 + 288),
            (std::shared_ptr<Monster> *)&this->monster_id_);
          std::shared_ptr<BaseEvent>::shared_ptr<RoundMonsterDieEvent,void>(
            (std::shared_ptr<BaseEvent> *const)(v2 + 256),
            (std::shared_ptr<RoundMonsterDieEvent> *)(v2 + 320));
          std::shared_ptr<RoundMonsterDieEvent>::~shared_ptr((std::shared_ptr<RoundMonsterDieEvent> *const)(v2 + 320));
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 288));
          v55 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
          v108 = Player::getEventComp(v55);
          std::shared_ptr<BaseEvent>::shared_ptr(
            (std::shared_ptr<BaseEvent> *const)(v2 + 320),
            (const std::shared_ptr<BaseEvent> *)(v2 + 256));
          PlayerEventComp::notifyEvent(v108, (BaseEventPtr *)(v2 + 320));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 320));
          std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 256));
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 224));
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
        }
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 352));
      }
      std::map<unsigned int,SummonInfo>::map((std::map<unsigned int,SummonInfo> *const)(v2 + 560), &this->summon_map_);
      __for_range_3 = (std::map<unsigned int,SummonInfo> *)(v2 + 560);
      __for_begin_0._M_node = std::map<unsigned int,SummonInfo>::begin((std::map<unsigned int,SummonInfo> *const)(v2 + 560))._M_node;
      __for_end_0._M_node = std::map<unsigned int,SummonInfo>::end(__for_range_3)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo>>::operator*(&__for_begin_0);
        summon_tag = std::get<0ul,unsigned int const,SummonInfo>(__in);
        summon_info = std::get<1ul,unsigned int const,SummonInfo>(__in);
        __for_range_4 = &summon_info->monster_set;
        __for_begin._M_node = std::set<std::shared_ptr<Monster>>::begin(&summon_info->monster_set)._M_node;
        __for_end._M_node = std::set<std::shared_ptr<Monster>>::end(__for_range_4)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::shared_ptr<Monster> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_const_iterator<std::shared_ptr<Monster> >::_Self *)&__for_end) )
        {
          v56 = std::_Rb_tree_const_iterator<std::shared_ptr<Monster>>::operator*((const std::_Rb_tree_const_iterator<std::shared_ptr<Monster> > *const)&__for_begin);
          std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)(v2 + 320), v56);
          v57 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320));
          if ( Creature::getIsAliveByOwner(v57) )
          {
            v58 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320));
            if ( Creature::getLifeState(v58) == LIFE_ALIVE )
            {
              v60 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320));
              Creature::subCurHpToZero(v60, CHANGE_HP_SUB_SUMMON, 1);
            }
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 320));
          std::_Rb_tree_const_iterator<std::shared_ptr<Monster>>::operator++((std::_Rb_tree_const_iterator<std::shared_ptr<Monster> > *const)&__for_begin);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo>>::operator++(&__for_begin_0);
      }
      std::map<unsigned int,SummonInfo>::clear(&this->summon_map_);
      Creature::getOwner<Monster>((const Creature *const)(v2 + 224));
      if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 224), 0LL) )
      {
        v61 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 224));
        Monster::onSummonMonsterDie(v61, this);
      }
      toThisPtr<Monster>((Monster *)(v2 + 256));
      if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 128), 0LL) )
      {
        v62 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Group::onGroupMonsterDieEvent(v62, this);
        v63 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        ChallengeComp = Group::getChallengeComp(v63);
        ChallengeComp::onMonsterDie(ChallengeComp, context, this);
        EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 288), 55);
        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 288), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v109 = *(_DWORD *)&this->baseclass_0[256];
          v65 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
          p_source_entity_id = &v65->source_entity_id;
          if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(p_source_entity_id);
          }
          v65->source_entity_id = v109;
          if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v110 = *(_DWORD *)&this->baseclass_0[260];
          v67 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
          p_param1 = &v67->param1;
          if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_param1);
          }
          v67->param1 = v110;
          if ( std::operator!=<Creature>(&context->attacker_ptr, 0LL) )
          {
            std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
            Creature::findOriginalPlayer((Creature *const)(v2 + 320));
            if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 320), 0LL) )
            {
              v69 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320));
              Uid = Player::getUid(v69);
              v70 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
              if ( *(_BYTE *)(((unsigned __int64)&v70->param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v70->param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                v70 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v70->param2);
              }
              v70->param2 = Uid;
            }
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 320));
          }
          if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          reason = context->reason;
          v71 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
          p_param3 = &v71->param3;
          if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_param3);
          }
          v71->param3 = reason;
          MonsterType = Monster::getMonsterType(this);
          v73 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
          if ( *(_BYTE *)(((unsigned __int64)&v73->param4 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v73->param4 >> 3) + 0x7FFF8000) <= 3 )
          {
            v73 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v73->param4);
          }
          v73->param4 = MonsterType;
          v74 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          Group::handleEvent(v74, (EventPtr *)(v2 + 288));
        }
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 288));
      }
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v75 = *(_QWORD *)this->baseclass_0 + 128LL;
      if ( *(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
        v75 = __asan_report_load8();
      config_idc = *(void (__fastcall **)(Monster *const, VisionContext *))v75;
      VisionContext::VisionContext(&v146, VISION_DIE);
      config_idc(this, &v146);
      if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 128), 0LL) )
        goto LABEL_170;
      v76 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      MonsterTideComp = Group::getMonsterTideComp(v76);
      MonsterTideComp::onGroupMonsterDie(MonsterTideComp, this);
      v78 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      PoolMonsterTideComp = Group::getPoolMonsterTideComp(v78);
      PoolMonsterTideComp::onGroupMonsterDie(PoolMonsterTideComp, this);
      EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 288), 1);
      if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 288), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v150,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "onDie",
          790);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v150, (const char (*)[18])"createEvent fails");
        common::milog::MiLogStream::~MiLogStream(&v150);
        v114 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v115 = *(_DWORD *)&this->baseclass_0[256];
        v80 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
        v81 = &v80->source_entity_id;
        if ( *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v81 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v81);
        }
        v80->source_entity_id = v115;
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v116 = *(_DWORD *)&this->baseclass_0[260];
        v82 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
        v83 = &v82->param1;
        if ( *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v83 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v83);
        }
        v82->param1 = v116;
        if ( *(_BYTE *)(((unsigned __int64)&context->kill_self_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)context + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&context->kill_self_type >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        kill_self_type = context->kill_self_type;
        v84 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
        if ( *(_BYTE *)(((unsigned __int64)&v84->param2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v84->param2 >> 3) + 0x7FFF8000) <= 3 )
        {
          v84 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v84->param2);
        }
        v84->param2 = kill_self_type;
        if ( std::operator!=<Creature>(&context->attacker_ptr, 0LL) )
        {
          v85 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&context->attacker_ptr);
          PlayerUid = Entity::getPlayerUid((const Entity *const)v85);
          v86 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
          p_uid = &v86->uid;
          if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_uid);
          }
          v86->uid = PlayerUid;
        }
        std::weak_ptr<ActorAbility>::lock((const std::weak_ptr<ActorAbility> *const)(v2 + 320));
        if ( std::operator!=<ActorAbility>((const std::shared_ptr<ActorAbility> *)(v2 + 320), 0LL) )
        {
          v88 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 320));
          v119 = (proto_log::PlayerLogBodyMonsterDie *)ActorAbility::getName[abi:cxx11](v88);
          v89 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
          std::string::operator=(&v89->source_name, v119);
        }
        if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v120 = context->reason;
        v90 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
        v91 = &v90->param3;
        if ( *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v91 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v91);
        }
        v90->param3 = v120;
        v121 = Monster::getMonsterType(this);
        v92 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 288));
        if ( *(_BYTE *)(((unsigned __int64)&v92->param4 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v92->param4 >> 3) + 0x7FFF8000) <= 3 )
        {
          v92 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v92->param4);
        }
        v92->param4 = v121;
        v93 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Group::handleEvent(v93, (EventPtr *)(v2 + 288));
        std::shared_ptr<ActorAbility>::~shared_ptr((std::shared_ptr<ActorAbility> *const)(v2 + 320));
        v114 = 1;
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 288));
      if ( v114 == 1 )
      {
LABEL_170:
        v122 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v152.__this = this;
        v152.__group_id = group_id;
        std::function<ForeachPolicy ()(Player &)>::function<Monster::onDie(ChangeHpContext &)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v150,
          v152);
        Scene::foreachPlayer(v122, (std::function<ForeachPolicy(Player&)> *)&v150);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v150);
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 256));
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 224));
      std::map<unsigned int,SummonInfo>::~map((std::map<unsigned int,SummonInfo> *const)(v2 + 560));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 192));
      std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v2 + 160));
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 128));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 480));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      std::string::~string((void *)(v2 + 416));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v150,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "onDie",
      578);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v150,
           (const char (*)[37])"findMonsterConfig fails, monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->monster_id_);
    common::milog::MiLogStream::~MiLogStream(&v150);
  }
  if ( v94._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = -168430091;
  }
};

// Line 810: range 000000001711E110-000000001711E2E8
ForeachPolicy __cdecl Monster::onDie(ChangeHpContext &)::{lambda(Player &)#1}::operator()(
        const Monster::onDie::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned int *v2; // r9
  std::shared_ptr<BaseEvent> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerEventComp *EventComp; // r14
  ForeachPolicy result; // eax
  Player *const playera; // [rsp+0h] [rbp-90h]
  const Monster::onDie::<lambda(Player&)> *p_group_id; // [rsp+8h] [rbp-88h]
  std::shared_ptr<MonsterDieEndEvent> __r; // [rsp+10h] [rbp-80h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  p_group_id = __closure;
  v3 = (std::shared_ptr<BaseEvent> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<BaseEvent> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 event_ptr:812";
  v3[1]._M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)Monster::onDie(ChangeHpContext &)::{lambda(Player &)#1}::operator();
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
  {
    __closure = (const Monster::onDie::<lambda(Player&)> *const)((char *)__closure + 8);
    __asan_report_load8();
  }
  common::tools::perf::make_shared<MonsterDieEndEvent,unsigned int &,unsigned int &,unsigned int &,unsigned int const&>(
    (unsigned int *)&__r,
    (unsigned int *)&p_group_id->__this->baseclass_0[256],
    (unsigned int *)&p_group_id->__this->baseclass_0[260],
    &p_group_id->__this->monster_id_,
    &__closure->__group_id,
    v2,
    (unsigned int *)player,
    &p_group_id->__group_id);
  std::shared_ptr<BaseEvent>::shared_ptr<MonsterDieEndEvent,void>(v3 + 2, &__r);
  std::shared_ptr<MonsterDieEndEvent>::~shared_ptr(&__r);
  EventComp = Player::getEventComp(playera);
  std::shared_ptr<BaseEvent>::shared_ptr((std::shared_ptr<BaseEvent> *const)&__r, v3 + 2);
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr(v3 + 2);
  result = FOREACH_CONTINUE;
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 820: range 000000001712103A-0000000017121121
std::vector<std::shared_ptr<Player>> *__cdecl Monster::getEngagedPlayerOnScene(
        std::vector<std::shared_ptr<Player>> *retstr,
        Monster *const this,
        CreaturePtr *p_killer_ptr)
{
  const std::set<unsigned int> *p_alert_player_set; // rdi
  std::shared_ptr<Creature> v6; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<Creature>::shared_ptr(&v6, p_killer_ptr);
  p_alert_player_set = &this->alert_player_set_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_alert_player_set = (const std::set<unsigned int> *)retstr;
    __asan_report_store_n(retstr, 24LL);
  }
  Monster::getEngagedPlayerOnScene(retstr, this, p_alert_player_set, &v6);
  std::shared_ptr<Creature>::~shared_ptr(&v6);
  return retstr;
};

// Line 825: range 00000000171212F4-000000001712159E
std::vector<std::shared_ptr<Player>> *__cdecl Monster::getEngagedPlayerOnScene(
        std::vector<std::shared_ptr<Player>> *retstr,
        Monster *const this,
        const std::set<unsigned int> *alert_set,
        CreaturePtr *p_killer_ptr)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  Scene *v7; // r14
  Monster::getEngagedPlayerOnScene::<lambda(Player&)> v9; // [rsp-20h] [rbp-120h]
  std::shared_ptr<Player> __r; // [rsp+20h] [rbp-E0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-D0h] BYREF
  Monster::getEngagedPlayerOnScene::<lambda(Player&)> __f; // [rsp+50h] [rbp-B0h]
  char v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 13 scene_ptr:827 64 16 19 kill_player_ptr:832";
  *(_QWORD *)(v4 + 16) = Monster::getEngagedPlayerOnScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  std::vector<std::shared_ptr<Player>>::vector(retstr);
  Entity::getScene((const Entity *const)(v4 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 32)) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v4 + 64), 0LL);
    if ( std::operator!=<Creature>(0LL, p_killer_ptr) )
    {
      std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_killer_ptr);
      Creature::findOriginalPlayer((Creature *const)&__r);
      std::shared_ptr<Player>::operator=((std::shared_ptr<Player> *const)(v4 + 64), &__r);
      std::shared_ptr<Player>::~shared_ptr(&__r);
    }
    v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    __f.__kill_player_ptr = (PlayerPtr *)(v4 + 64);
    __f.__player_vec = retstr;
    __f.__alert_set = alert_set;
    __f.__this = this;
    v9.__this = this;
    v9.__alert_set = alert_set;
    v9.__player_vec = retstr;
    v9.__kill_player_ptr = (PlayerPtr *)(v4 + 64);
    std::function<ForeachPolicy ()(Player &)>::function<Monster::getEngagedPlayerOnScene(std::set<unsigned int> const&,std::shared_ptr<Creature>)::{lambda(Player &)#1},void,void>(
      &p_func,
      v9);
    Scene::foreachPlayer(v7, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 32));
  if ( v15 == (char *)v4 )
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
  return retstr;
};

// Line 837: range 0000000017121122-00000000171212F3
ForeachPolicy __cdecl Monster::getEngagedPlayerOnScene(std::set<unsigned int> const&,std::shared_ptr<Creature>)::{lambda(Player &)#1}::operator()(
        const Monster::getEngagedPlayerOnScene::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerAvatarComp *AvatarComp; // rbx
  uint32_t EntityId; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t Uid; // ebx
  char v6; // al
  std::vector<std::shared_ptr<Player>> *player_vec; // rbx
  std::shared_ptr<Player> v8; // rax
  unsigned int value; // [rsp+1Ch] [rbp-24h] BYREF
  std::shared_ptr<Player> v11; // [rsp+20h] [rbp-20h] BYREF

  value = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__alert_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(__closure->__alert_set, &value) )
    goto LABEL_13;
  AvatarComp = Player::getAvatarComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)__closure->__this);
  if ( PlayerAvatarComp::isKilledByEntity(AvatarComp, EntityId) )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !std::operator!=<Player>(__closure->__kill_player_ptr, 0LL) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__kill_player_ptr);
  Uid = Player::getUid(v4);
  if ( Uid == Player::getUid(player) )
LABEL_13:
    v6 = 1;
  else
LABEL_14:
    v6 = 0;
  if ( v6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__player_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player_vec = __closure->__player_vec;
    v8 = toThisPtr<Player>((Player *)&v11);
    std::vector<std::shared_ptr<Player>>::emplace_back<std::shared_ptr<Player>>(
      player_vec,
      &v11,
      (std::shared_ptr<Player> *)v8._M_refcount._M_pi);
    std::shared_ptr<Player>::~shared_ptr(&v11);
  }
  return 0;
};

// Line 853: range 00000000171215A0-000000001712217C
bool __cdecl Monster::isDeathAllowableOrDoAntiCheat(Monster *const this, const ChangeHpContext *context)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t SceneId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  proto_log::EntityLog *v14; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  google::protobuf::RepeatedField<unsigned int> *v17; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  const std::string *v19; // rax
  Player *v20; // r14
  Scene *v21; // rcx
  unsigned __int64 v22; // rax
  void (__fastcall *v23)(Monster *const, proto::SceneEntityInfo *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r15
  proto::SceneEntityInfo *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  bool result; // al
  uint32_t now; // [rsp+2Ch] [rbp-1D4h]
  const GroupInfoScriptConfig *group_info_script_config_ptr; // [rsp+30h] [rbp-1D0h]
  SecurityConfig *security_config; // [rsp+38h] [rbp-1C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-1B0h] BYREF
  char v38[400]; // [rsp+70h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 20 change_hp_reason:878 48 16 13 group_ptr:854 80 16 18 own_player_ptr:859 112 16 13 scen"
                        "e_ptr:865 144 16 11 log_ptr:885 176 48 20 disappear_notify:915 256 56 17 appear_notify:919";
  *(_QWORD *)(v2 + 16) = Monster::isDeathAllowableOrDoAntiCheat;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862727] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  Entity::getGroup((const Entity *const)(v2 + 48));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 48)) )
  {
    v5 = 1;
  }
  else
  {
    std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    Group::getOwnerPlayer((const Group *const)(v2 + 80));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "isDeathAllowableOrDoAntiCheat",
        862);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v37,
             (const char (*)[29])"own_player is null, monster:");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v5 = 1;
    }
    else
    {
      Entity::getScene((const Entity *const)(v2 + 112));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 112), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "isDeathAllowableOrDoAntiCheat",
          868);
        v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v37,
               (const char (*)[25])"getScene fails, monster:");
        common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v7, this);
        common::milog::MiLogStream::~MiLogStream(&v37);
        v5 = 1;
      }
      else
      {
        v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        group_info_script_config_ptr = Group::getInfoScriptConfig(v8);
        if ( group_info_script_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 32) = context->reason;
          if ( !common::tools::MiscUtils::isContains<unsigned int>(
                  &group_info_script_config_ptr->forbid_monster_die_type_vec,
                  (const unsigned int *)(v2 + 32)) )
          {
            v5 = 1;
          }
          else
          {
            common::tools::perf::make_shared<proto_log::AntiCheatBodyMonsterDie>();
            v10 = std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            SceneId = Scene::getSceneId(v11);
            proto_log::AntiCheatBodyMonsterDie::set_scene_id(v10, SceneId);
            v13 = std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            v14 = proto_log::AntiCheatBodyMonsterDie::mutable_monster_log(v13);
            Entity::getEntityLog((Entity *const)this, v14);
            v15 = std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            proto_log::AntiCheatBodyMonsterDie::set_reason(v15, *(_DWORD *)(v2 + 32));
            v16 = std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            v17 = proto_log::AntiCheatBodyMonsterDie::mutable_forbid_die_types(v16);
            common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
              &group_info_script_config_ptr->forbid_monster_die_type_vec,
              v17);
            v18 = std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyMonsterDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
            v19 = Monster::getMonsterCombatTransaction[abi:cxx11](this);
            proto_log::AntiCheatBodyMonsterDie::set_combat_transaction(v18, v19);
            v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyMonsterDie,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::AntiCheatBodyMonsterDie> *)(v2 + 144));
            Player::printAntiCheatLog(v20, ANTI_CHEAT_ACTION_MONSTER_DIE, &p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&p_body_ptr);
            security_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_body_ptr)->security_config;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_body_ptr);
            if ( *(char *)(((unsigned __int64)&security_config->is_forbid_monster_disallowed_death >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&security_config->is_forbid_monster_disallowed_death);
            if ( !security_config->is_forbid_monster_disallowed_death )
            {
              v5 = 1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&security_config->is_revive_monster_on_forbid_death >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)security_config + 50) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_revive_monster_on_forbid_death >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load1(&security_config->is_revive_monster_on_forbid_death);
              }
              if ( security_config->is_revive_monster_on_forbid_death )
                Creature::setCurHpFull(this, 1);
              if ( *(_BYTE *)(((unsigned __int64)&security_config->is_move_back_monster_on_forbid_death >> 3)
                            + 0x7FFF8000) != 0
                && (((unsigned __int8)security_config + 49) & 7) >= *(_BYTE *)(((unsigned __int64)&security_config->is_move_back_monster_on_forbid_death >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load1(&security_config->is_move_back_monster_on_forbid_death);
              }
              if ( security_config->is_move_back_monster_on_forbid_death )
              {
                now = common::tools::TimeUtils::getNow();
                if ( *(_BYTE *)(((unsigned __int64)&this->last_drag_back_time_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->last_drag_back_time_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( now == this->last_drag_back_time_ )
                {
                  common::milog::MiLogStream::create(
                    &v37,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/monster/monster.cpp",
                    "isDeathAllowableOrDoAntiCheat",
                    930);
                  v30 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                          &v37,
                          (const char (*)[43])"force drag back too quickly! entity_list:{");
                  v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v30,
                          (const unsigned int *)&this->baseclass_0[256]);
                  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v31, (const char (*)[2])"}");
                  common::milog::MiLogStream::~MiLogStream(&v37);
                }
                else
                {
                  this->last_drag_back_time_ = now;
                  Entity::setRotation((Entity *const)this, &this->born_rot_);
                  v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                  Scene::entityMoveTo(v21, (Entity *)this, &this->born_pos_);
                  std::shared_ptr<FightPropNtfParam>::shared_ptr(
                    (std::shared_ptr<FightPropNtfParam> *const)&p_body_ptr,
                    0LL);
                  FightPropComp::changeCurHp(&this->fight_prop_comp_, 1.0, 1, (FightPropNtfParamPtr *)&p_body_ptr);
                  std::shared_ptr<FightPropNtfParam>::~shared_ptr((std::shared_ptr<FightPropNtfParam> *const)&p_body_ptr);
                  proto::SceneEntityDisappearNotify::SceneEntityDisappearNotify((proto::SceneEntityDisappearNotify *const)(v2 + 176));
                  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  proto::SceneEntityDisappearNotify::add_entity_list(
                    (proto::SceneEntityDisappearNotify *const)(v2 + 176),
                    *(_DWORD *)&this->baseclass_0[256]);
                  proto::SceneEntityDisappearNotify::set_disappear_type(
                    (proto::SceneEntityDisappearNotify *const)(v2 + 176),
                    VISION_MISS);
                  Entity::notifyViewingPlayers<proto::SceneEntityDisappearNotify>(
                    (Entity *const)this,
                    (proto::SceneEntityDisappearNotify *)(v2 + 176),
                    1);
                  proto::SceneEntityAppearNotify::SceneEntityAppearNotify((proto::SceneEntityAppearNotify *const)(v2 + 256));
                  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v22 = *(_QWORD *)this->baseclass_0 + 40LL;
                  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                    v22 = __asan_report_load8();
                  v23 = *(void (__fastcall **)(Monster *const, proto::SceneEntityInfo *, std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v22;
                  v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  v25 = proto::SceneEntityAppearNotify::add_entity_list((proto::SceneEntityAppearNotify *const)(v2 + 256));
                  v23(this, v25, v24);
                  proto::SceneEntityAppearNotify::set_appear_type(
                    (proto::SceneEntityAppearNotify *const)(v2 + 256),
                    VISION_MEET);
                  Entity::notifyViewingPlayers<proto::SceneEntityAppearNotify>(
                    (Entity *const)this,
                    (proto::SceneEntityAppearNotify *)(v2 + 256),
                    1);
                  common::milog::MiLogStream::create(
                    &v37,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/monster/monster.cpp",
                    "isDeathAllowableOrDoAntiCheat",
                    924);
                  v26 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                          &v37,
                          (const char (*)[55])"send notify disappear and appear, last_drag_back_time:");
                  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v26,
                          &this->last_drag_back_time_);
                  v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          v27,
                          (const char (*)[15])" entity_list:{");
                  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v28,
                          (const unsigned int *)&this->baseclass_0[256]);
                  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v29, (const char (*)[2])"}");
                  common::milog::MiLogStream::~MiLogStream(&v37);
                  proto::SceneEntityAppearNotify::~SceneEntityAppearNotify((proto::SceneEntityAppearNotify *const)(v2 + 256));
                  proto::SceneEntityDisappearNotify::~SceneEntityDisappearNotify((proto::SceneEntityDisappearNotify *const)(v2 + 176));
                }
              }
              v5 = 0;
            }
            std::shared_ptr<proto_log::AntiCheatBodyMonsterDie>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyMonsterDie> *const)(v2 + 144));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/monster/monster.cpp",
            "isDeathAllowableOrDoAntiCheat",
            874);
          v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                 &v37,
                 (const char (*)[35])"getInfoScriptConfig fail, monster:");
          common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v9, this);
          common::milog::MiLogStream::~MiLogStream(&v37);
          v5 = 1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 48));
  result = v5;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 940: range 000000001712217E-00000000171232CE
void __cdecl Monster::dropDie(Monster *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  Scene *v5; // r14
  Vector3 *Position; // rax
  std::shared_ptr<Player> *M_current; // r14
  std::vector<std::shared_ptr<Player>>::iterator v8; // rax
  char v10; // al
  Scene *v11; // rax
  uint32_t SceneTimeSeconds; // eax
  uint32_t Level; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Uid; // eax
  uint32_t v16; // ecx
  std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Group *v18; // r14
  proto::BossDieInfoBin *v19; // r15
  uint32_t ConfigId; // eax
  data::ItemLimitType MonsterItemLimitType; // eax
  bool v23; // al
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *v29; // rax
  uint32_t v30; // esi
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  Monster *thisa; // [rsp+8h] [rbp-318h]
  bool is_ban_monster; // [rsp+1Fh] [rbp-301h]
  uint32_t group_id; // [rsp+20h] [rbp-300h]
  uint32_t config_id; // [rsp+24h] [rbp-2FCh]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+28h] [rbp-2F8h] BYREF
  std::vector<std::shared_ptr<Player>> *drop_players_ptr; // [rsp+30h] [rbp-2F0h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+38h] [rbp-2E8h]
  const MonsterScriptConfig *monster_script_config_ptr; // [rsp+40h] [rbp-2E0h]
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+48h] [rbp-2D8h]
  std::shared_ptr<Player> *player_ptr; // [rsp+50h] [rbp-2D0h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *drop_id; // [rsp+58h] [rbp-2C8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *drop_count; // [rsp+60h] [rbp-2C0h]
  std::pair<unsigned int,unsigned int> __for_end; // [rsp+68h] [rbp-2B8h] BYREF
  common::milog::MiLogStream v64; // [rsp+70h] [rbp-2B0h] BYREF
  char v65[656]; // [rsp+90h] [rbp-290h] BYREF

  thisa = this;
  v1 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "13 48 4 7 ret:990 64 4 17 kill_drop_id:1020 80 8 8 iter:955 112 16 13 scene_ptr:941 144 16 20 ow"
                        "ner_player_ptr:952 176 16 13 group_ptr:963 208 16 14 gadget_ptr:974 240 16 23 boss_chest_comp_pt"
                        "r:977 272 24 14 player_vec:953 336 24 20 owner_player_vec:954 400 24 17 action_reason:991 464 24"
                        " 29 excel_drop_action_reason:1031 528 48 12 die_info:967";
  *(_QWORD *)(v1 + 16) = Monster::dropDie;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862722] = -234881024;
  v3[536862723] = 62194;
  v3[536862724] = 62194;
  v3[536862725] = 62194;
  v3[536862726] = 62194;
  v3[536862727] = 62194;
  v3[536862728] = 62194;
  v3[536862729] = -218959360;
  v3[536862730] = 62194;
  v3[536862731] = -218959360;
  v3[536862732] = 62194;
  v3[536862733] = -218959360;
  v3[536862734] = 62194;
  v3[536862735] = -218959360;
  v3[536862736] = 62194;
  v3[536862738] = -202116109;
  Entity::getScene((const Entity *const)(v1 + 112));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 112), 0LL) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 240));
    p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 240))->design_config.txt_config_mgr.monster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                           p_monster_config_mgr,
                           this->monster_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 240));
    if ( monster_config_ptr )
    {
      std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      Scene::getOwnPlayer((const Scene *const)(v1 + 144));
      v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
      Position = (Vector3 *)Entity::getPosition((const Entity *const)this);
      if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) )
      {
        Position = (Vector3 *)__asan_report_load_n(Position, 12LL);
      }
      Scene::getDropSurroundPlayers((std::vector<std::shared_ptr<Player>> *)(v1 + 272), v5, *Position);
      std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 336));
      M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v1 + 272))._M_current;
      v8._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v1 + 272))._M_current;
      *(__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v1 + 80) = std::find<__gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>,std::shared_ptr<Player>>(v8, (__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> >)M_current, (const std::shared_ptr<Player> *)(v1 + 144));
      __for_end = (std::pair<unsigned int,unsigned int>)std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v1 + 272))._M_current;
      if ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
             (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v1 + 80),
             (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end)
        && std::operator!=<Player>((const std::shared_ptr<Player> *)(v1 + 144), 0LL) )
      {
        std::vector<std::shared_ptr<Player>>::push_back(
          (std::vector<std::shared_ptr<Player>> *const)(v1 + 336),
          (const std::vector<std::shared_ptr<Player>>::value_type *)(v1 + 144));
      }
      drop_players_ptr = 0LL;
      Entity::getGroup((const Entity *const)(v1 + 176));
      monster_script_config_ptr = Monster::getMonsterScriptConfig(this);
      if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v1 + 176), 0LL) || !monster_script_config_ptr )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->chest_config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)monster_script_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->chest_config_id >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( monster_script_config_ptr->chest_config_id )
        v10 = 1;
      else
LABEL_22:
        v10 = 0;
      if ( v10 )
      {
        proto::BossDieInfoBin::BossDieInfoBin((proto::BossDieInfoBin *const)(v1 + 528));
        v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
        SceneTimeSeconds = Scene::getSceneTimeSeconds(v11);
        proto::BossDieInfoBin::set_dead_time((proto::BossDieInfoBin *const)(v1 + 528), SceneTimeSeconds);
        Level = Creature::getLevel(this);
        proto::BossDieInfoBin::set_dead_level((proto::BossDieInfoBin *const)(v1 + 528), Level);
        __for_range = (std::vector<std::shared_ptr<Player>> *)(v1 + 272);
        __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v1 + 272))._M_current;
        __for_end = (std::pair<unsigned int,unsigned int>)std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v1 + 272))._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  &__for_begin,
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end) )
        {
          player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
          v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
          Uid = Player::getUid(v14);
          proto::BossDieInfoBin::add_surround_uid_list((proto::BossDieInfoBin *const)(v1 + 528), Uid);
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
        }
        v16 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
        if ( *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->chest_config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)monster_script_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->chest_config_id >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Group::findEntityByConfigId<Gadget>((Group *const)(v1 + 208), v16);
        if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v1 + 208), 0LL) )
        {
          std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 208));
          EcsBase<Gadget,GadgetCompBase,28u>::findComp<BossChestComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v1 + 240));
          if ( std::operator!=<BossChestComp>((const std::shared_ptr<BossChestComp> *)(v1 + 240), 0LL) )
          {
            v17 = std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 240));
            BossChestComp::onBossMonsterDie(v17, (proto::BossDieInfoBin *)(v1 + 528), 1);
          }
          std::shared_ptr<BossChestComp>::~shared_ptr((std::shared_ptr<BossChestComp> *const)(v1 + 240));
        }
        else
        {
          v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 176));
          v19 = std::move<proto::BossDieInfoBin &>((proto::BossDieInfoBin *)(v1 + 528));
          ConfigId = Entity::getConfigId((const Entity *const)this);
          Group::onBossMonsterDie(v18, ConfigId, v19);
        }
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 208));
        proto::BossDieInfoBin::~BossDieInfoBin((proto::BossDieInfoBin *const)(v1 + 528));
      }
      *(_DWORD *)(v1 + 48) = 0;
      MonsterItemLimitType = Monster::getMonsterItemLimitType(this);
      ActionReason::ActionReason((ActionReason *const)(v1 + 400), ACTION_REASON_MONSTER_DIE, MonsterItemLimitType);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ban_all_drop_);
      }
      if ( !this->is_ban_all_drop_
        && !std::vector<std::shared_ptr<Player>>::empty((const std::vector<std::shared_ptr<Player>> *const)(v1 + 272))
        && !Entity::isBanLootByOneoff((Entity *const)this) )
      {
        group_id = Entity::getGroupId((const Entity *const)this);
        config_id = Entity::getConfigId((const Entity *const)this);
        v23 = group_id == 133103545 && (config_id == 545001 || config_id == 545009 || config_id == 545010);
        is_ban_monster = v23;
        if ( v23 )
        {
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/monster/monster.cpp",
            "dropDie",
            999);
          v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v64, (const char (*)[18])off_26014F60);
          v25 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v24, this);
          v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
          v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 112));
          *(_DWORD *)(v1 + 64) = Scene::getOwnerUid(v27);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v1 + 64));
          common::milog::MiLogStream::~MiLogStream(&v64);
        }
        if ( Monster::isCanDropItem(this) && !is_ban_monster )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( (this->guest_ban_drop_ & 2) != 0 )
            drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v1 + 336);
          else
            drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v1 + 272);
          if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          __for_end = Monster::findDropIdCountByFallbackDropIdOrDropTag(this, this->drop_id_);
          drop_id = std::get<0ul,unsigned int,unsigned int>(&__for_end);
          v29 = std::get<1ul,unsigned int,unsigned int>(&__for_end);
          drop_count = v29;
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            this = (Monster *const)v29;
            __asan_report_load4();
          }
          v30 = *drop_count;
          if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
          {
            this = (Monster *const)drop_id;
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = Entity::dropItemsForPlayers(
                                   (Entity *const)this,
                                   *drop_id,
                                   v30,
                                   (const ActionReason *)(v1 + 400),
                                   drop_players_ptr);
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/monster/monster.cpp",
            "dropDie",
            1015);
          v31 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v64,
                  (const char (*)[18])"guest_ban_drop_: ");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &thisa->guest_ban_drop_);
          v33 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v32,
                  (const char (*)[20])" lua drop players: ");
          __for_begin._M_current = (std::shared_ptr<Player> *)std::vector<std::shared_ptr<Player>>::size(drop_players_ptr);
          v34 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v33,
                  (const unsigned __int64 *)&__for_begin);
          v35 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v34, (const char (*)[12])" drop_id_: ");
          v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &thisa->drop_id_);
          v37 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])" ret: ");
          v38 = common::milog::MiLogStream::operator<<<int,(int *)0>(v37, (const int *)(v1 + 48));
          v39 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v38,
                  (const char (*)[18])", final drop_id: ");
          v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, drop_id);
          v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" monster: ");
          common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v41, thisa);
          common::milog::MiLogStream::~MiLogStream(&v64);
        }
        if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->kill_drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->kill_drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 64) = monster_config_ptr->kill_drop_id;
        if ( *(char *)(((unsigned __int64)&thisa->is_ban_txt_drop_ >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&thisa->is_ban_txt_drop_);
        if ( !thisa->is_ban_txt_drop_ && *(_DWORD *)(v1 + 64) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->guest_ban_drop_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( (thisa->guest_ban_drop_ & 4) != 0 )
            drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v1 + 336);
          else
            drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v1 + 272);
          ActionReason::ActionReason(
            (ActionReason *const)(v1 + 464),
            *(proto::ActionReasonType *)(v1 + 400),
            ITEM_LIMIT_MONSTER_EXCEL_DROP);
          *(_DWORD *)(v1 + 48) = Entity::dropItemsForPlayers(
                                   (Entity *const)thisa,
                                   *(_DWORD *)(v1 + 64),
                                   1u,
                                   (const ActionReason *)(v1 + 464),
                                   drop_players_ptr);
          common::milog::MiLogStream::create(
            &v64,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/monster/monster.cpp",
            "dropDie",
            1033);
          v42 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v64,
                  (const char (*)[18])"guest_ban_drop_: ");
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, &thisa->guest_ban_drop_);
          v44 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v43,
                  (const char (*)[22])" excel drop players: ");
          __for_end = (std::pair<unsigned int,unsigned int>)std::vector<std::shared_ptr<Player>>::size(drop_players_ptr);
          v45 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v44,
                  (const unsigned __int64 *)&__for_end);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v45,
                  (const char (*)[16])" kill_drop_id: ");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  (const unsigned int *)(v1 + 64));
          v48 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v47, (const char (*)[7])" ret: ");
          v49 = common::milog::MiLogStream::operator<<<int,(int *)0>(v48, (const int *)(v1 + 48));
          v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v49, (const char (*)[11])" monster: ");
          common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v50, thisa);
          common::milog::MiLogStream::~MiLogStream(&v64);
        }
        if ( *(_BYTE *)(((unsigned __int64)&thisa->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->guest_ban_drop_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( (thisa->guest_ban_drop_ & 8) != 0 )
          Monster::activityDropOnMonsterDie(thisa, (const std::vector<std::shared_ptr<Player>> *)(v1 + 336));
        else
          Monster::activityDropOnMonsterDie(thisa, (const std::vector<std::shared_ptr<Player>> *)(v1 + 272));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 176));
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 336));
      std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 272));
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 144));
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 112));
  if ( v65 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
};

// Line 1051: range 00000000171232D0-00000000171239B0
// local variable allocation has failed, the output may be wrong!
void __cdecl Monster::onChangeHp(Monster *const this, float old_hp, ChangeHpContext *context)
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
  int32_t v15; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t v17; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  int32_t *p_param3; // rax
  data::MonsterType MonsterType; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  Group *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  unsigned int val; // [rsp+28h] [rbp-D8h] BYREF
  float max_hp; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-D0h] BYREF
  char v35[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 19 old_hp_percent:1062 48 4 19 cur_hp_percent:1063 64 16 14 group_ptr:1065 96 16 12 evt_ptr:1070";
  *(_QWORD *)(v3 + 16) = Monster::onChangeHp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  Monster::dropChangeHp(this, context);
  *(float *)v6.m128i_i32 = Creature::getMaxHp(this);
  max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v6));
  if ( max_hp >= 0.00000011920929 )
  {
    *(_DWORD *)(v3 + 32) = (int)(float)((float)(100.0 * old_hp) / max_hp);
    *(_DWORD *)(v3 + 48) = (int)(float)((float)(Creature::getCurHp(this) * 100.0) / max_hp);
    Entity::getGroup((const Entity *const)(v3 + 64));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v3 + 64), 0LL)
      && *(_DWORD *)(v3 + 32) / 0xAu != *(_DWORD *)(v3 + 48) / 0xAu )
    {
      EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 96), 12);
      if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 96), 0LL) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[260] >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        std::to_string((std::string *)&v34, *(_DWORD *)&this->baseclass_0[260]);
        v8 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        std::string::operator=(&v8->source_name, &v34);
        std::string::~string(&v34);
        if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v9 = *(_DWORD *)&this->baseclass_0[256];
        v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
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
        v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        p_param1 = &v13->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v13->param1 = v12;
        v15 = *(_DWORD *)(v3 + 32);
        v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v16->param2 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v16->param2 >> 3) + 0x7FFF8000) <= 3 )
        {
          v16 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v16->param2);
        }
        v16->param2 = v15;
        v17 = *(_DWORD *)(v3 + 48);
        v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        p_param3 = &v18->param3;
        if ( *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param3 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param3);
        }
        v18->param3 = v17;
        MonsterType = Monster::getMonsterType(this);
        v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v21->param4 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v21->param4 >> 3) + 0x7FFF8000) <= 3 )
        {
          v21 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v21->param4);
        }
        v21->param4 = MonsterType;
        v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Group::handleEvent(v22, (EventPtr *)(v3 + 96));
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/monster/monster.cpp",
          "onChangeHp",
          1080);
        v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v34,
                (const char (*)[26])"[Event] monster group_id:");
        v24 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        val = Group::getGroupId(v24);
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
        v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])" config_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)&this->baseclass_0[260]);
        v28 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v27,
                (const char (*)[17])"HP_CHANGE, from:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 32));
        v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v29, (const char (*)[5])" to:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 96));
    }
    Monster::recordHurtByPlayerAttack(this, context);
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "onChangeHp",
      1059);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v34, (const char (*)[16])"invalid max_hp:");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  if ( v35 == (char *)v3 )
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
};

// Line 1089: range 00000000171239B2-00000000171247BE
void __cdecl Monster::dropChangeHp(Monster *const this, const ChangeHpContext *context)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rdx
  char v8; // al
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  Scene *v13; // r14
  Vector3 *Position; // rax
  std::shared_ptr<Player> *M_current; // r14
  std::vector<std::shared_ptr<Player>>::iterator v16; // rax
  float dropped_hp_percent; // xmm1_4
  float hp_percent; // xmm0_4
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  float max_hp; // [rsp+1Ch] [rbp-1F4h]
  __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > __rhs; // [rsp+20h] [rbp-1F0h] BYREF
  std::vector<std::shared_ptr<Player>> *drop_players_ptr; // [rsp+28h] [rbp-1E8h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+30h] [rbp-1E0h]
  const data::MonsterDrop *monster_drop; // [rsp+38h] [rbp-1D8h]
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-1D0h] BYREF
  char v36[432]; // [rsp+60h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 12 hp_rate:1113 64 8 9 iter:1121 96 8 8 rit:1135 128 16 14 scene_ptr:1090 160 16 21 owner"
                        "_player_ptr:1118 192 24 15 player_vec:1119 256 24 21 owner_player_vec:1120 320 24 18 action_reason:1133";
  *(_QWORD *)(v3 + 16) = Monster::dropChangeHp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  Entity::getScene((const Entity *const)(v3 + 128));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "dropChangeHp",
      1093);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v35, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    *(float *)v2.m128i_i32 = Creature::getMaxHp(this);
    max_hp = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    if ( max_hp >= 0.00000011920929 )
    {
      if ( Entity::isBanLootByOneoff((Entity *const)this) )
        goto LABEL_18;
      if ( *(char *)(((unsigned __int64)&this->is_ban_txt_drop_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_ban_txt_drop_);
      if ( this->is_ban_txt_drop_ )
        goto LABEL_18;
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ban_all_drop_);
      }
      if ( this->is_ban_all_drop_ )
        goto LABEL_18;
      if ( *(_BYTE *)(((unsigned __int64)&context->is_ban_hp_percetage_drop >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)context + 58) & 7) >= *(_BYTE *)(((unsigned __int64)&context->is_ban_hp_percetage_drop >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load1(&context->is_ban_hp_percetage_drop);
      }
      if ( context->is_ban_hp_percetage_drop )
LABEL_18:
        v8 = 1;
      else
        v8 = 0;
      if ( !v8 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 160));
        p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.monster_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                               p_monster_config_mgr,
                               this->monster_id_);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
        if ( monster_config_ptr )
        {
          *(float *)(v3 + 48) = (float)(Creature::getCurHp(this) * 100.0) / max_hp;
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/monster/monster.cpp",
            "dropChangeHp",
            1114);
          v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v35,
                  (const char (*)[16])"[DROP] hp_rate:");
          v12 = common::milog::MiLogStream::operator<<<float,(float *)0>(v11, (const float *)(v3 + 48));
          common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v12, this);
          common::milog::MiLogStream::~MiLogStream(&v35);
          if ( *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( *(float *)(v3 + 48) < this->dropped_hp_percent_ )
          {
            std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            Scene::getOwnPlayer((const Scene *const)(v3 + 160));
            v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
            Position = (Vector3 *)Entity::getPosition((const Entity *const)this);
            if ( ((unsigned __int8)Position & 7) >= *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)Position >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)Position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&Position->z + 3) >> 3)
                                                                    + 0x7FFF8000) )
            {
              Position = (Vector3 *)__asan_report_load_n(Position, 12LL);
            }
            Scene::getDropSurroundPlayers((std::vector<std::shared_ptr<Player>> *)(v3 + 192), v13, *Position);
            std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 256));
            M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 192))._M_current;
            v16._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v3 + 192))._M_current;
            *(__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>,std::shared_ptr<Player>>(v16, (__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> >)M_current, (const std::shared_ptr<Player> *)(v3 + 160));
            __rhs._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v3 + 192))._M_current;
            if ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                   (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)(v3 + 64),
                   &__rhs)
              && std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 160), 0LL) )
            {
              std::vector<std::shared_ptr<Player>>::push_back(
                (std::vector<std::shared_ptr<Player>> *const)(v3 + 256),
                (const std::vector<std::shared_ptr<Player>>::value_type *)(v3 + 160));
            }
            drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v3 + 192);
            if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( (this->guest_ban_drop_ & 0x10) != 0 )
              drop_players_ptr = (std::vector<std::shared_ptr<Player>> *)(v3 + 256);
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 320),
              ACTION_REASON_MONSTER_CHANGE_HP,
              ITEM_LIMIT_MONSTER_EXCEL_DROP);
            std::vector<data::MonsterDrop>::rbegin((const std::vector<data::MonsterDrop> *const)(v3 + 96));
            while ( 1 )
            {
              std::vector<data::MonsterDrop>::rend((const std::vector<data::MonsterDrop> *const)&__rhs);
              if ( !std::operator!=<__gnu_cxx::__normal_iterator<data::MonsterDrop const*,std::vector<data::MonsterDrop>>>(
                      (const std::reverse_iterator<__gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > > *)(v3 + 96),
                      (const std::reverse_iterator<__gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > > *)&__rhs) )
                break;
              monster_drop = std::reverse_iterator<__gnu_cxx::__normal_iterator<data::MonsterDrop const*,std::vector<data::MonsterDrop>>>::operator*((const std::reverse_iterator<__gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > > *const)(v3 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&monster_drop->hp_percent >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)monster_drop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_drop->hp_percent >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *(float *)(v3 + 48) > monster_drop->hp_percent )
                break;
              if ( *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              dropped_hp_percent = this->dropped_hp_percent_;
              if ( *(_BYTE *)(((unsigned __int64)&monster_drop->hp_percent >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)monster_drop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_drop->hp_percent >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( monster_drop->hp_percent < dropped_hp_percent )
              {
                if ( *(_BYTE *)(((unsigned __int64)&monster_drop->hp_percent >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)monster_drop + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_drop->hp_percent >> 3)
                                                                              + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                hp_percent = monster_drop->hp_percent;
                if ( *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->dropped_hp_percent_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->dropped_hp_percent_);
                }
                this->dropped_hp_percent_ = hp_percent;
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/monster/monster.cpp",
                  "dropChangeHp",
                  1143);
                v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        &v35,
                        (const char (*)[16])"[DROP] drop_id:");
                v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v20,
                        &monster_drop->drop_id);
                v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v21,
                        (const char (*)[14])", hp_percent:");
                v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, &monster_drop->hp_percent);
                common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v23, this);
                common::milog::MiLogStream::~MiLogStream(&v35);
                if ( *(_BYTE *)(((unsigned __int64)&monster_drop->drop_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&monster_drop->drop_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( monster_drop->drop_id )
                {
                  Entity::dropItemsForPlayers(
                    (Entity *const)this,
                    monster_drop->drop_id,
                    1u,
                    (const ActionReason *)(v3 + 320),
                    drop_players_ptr);
                  common::milog::MiLogStream::create(
                    &v35,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/monster/monster.cpp",
                    "dropChangeHp",
                    1148);
                  v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          &v35,
                          (const char (*)[18])"guest_ban_drop_: ");
                  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v24,
                          &this->guest_ban_drop_);
                  v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          v25,
                          (const char (*)[25])" changeHp drop players: ");
                  __rhs._M_current = (std::shared_ptr<Player> *)std::vector<std::shared_ptr<Player>>::size(drop_players_ptr);
                  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v26,
                    (const unsigned __int64 *)&__rhs);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v35,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/monster/monster.cpp",
                    "dropChangeHp",
                    1152);
                  v27 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                          &v35,
                          (const char (*)[39])"monster_drop.drop_id is 0! monster_id:");
                  v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->monster_id_);
                  v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v28,
                          (const char (*)[14])" hp_percent: ");
                  common::milog::MiLogStream::operator<<<float,(float *)0>(v29, &monster_drop->hp_percent);
                }
                common::milog::MiLogStream::~MiLogStream(&v35);
              }
              std::reverse_iterator<__gnu_cxx::__normal_iterator<data::MonsterDrop const*,std::vector<data::MonsterDrop>>>::operator++((std::reverse_iterator<__gnu_cxx::__normal_iterator<const data::MonsterDrop*,std::vector<data::MonsterDrop> > > *const)(v3 + 96));
            }
            std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 256));
            std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v3 + 192));
            std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/monster/monster.cpp",
            "dropChangeHp",
            1110);
          v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v35,
                  (const char (*)[37])"findMonsterConfig fails, monster_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->monster_id_);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "dropChangeHp",
        1100);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v35, (const char (*)[16])"invalid max_hp:");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v7, this);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 128));
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1159: range 00000000171247C0-0000000017124AD9
int32_t __cdecl Monster::checkPosition(Monster *const this, const Vector3 *pos)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  unsigned __int64 v6; // rax
  uint32_t v7; // r14d
  Player *v8; // rcx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-9Ch]
  const data::MonsterExcelConfig *monster_excel_config_ptr; // [rsp+18h] [rbp-98h]
  char v12[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 scene_ptr:1173 64 16 15 player_ptr:1176";
  *(_QWORD *)(v2 + 16) = Monster::checkPosition;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  ret = Entity::checkPosition((Entity *const)this, pos);
  if ( ret )
  {
    if ( Creature::getLifeState(this) == LIFE_ALIVE )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v6 = *(_QWORD *)this->baseclass_0 + 312LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      monster_excel_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(Monster *const))v6)(this);
      if ( !monster_excel_config_ptr )
        goto LABEL_16;
      if ( *(_BYTE *)(((unsigned __int64)&monster_excel_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)monster_excel_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_excel_config_ptr->type >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( monster_excel_config_ptr->type != MONSTER_BOSS )
      {
        Creature::subCurHpToZero(this, CHANGE_HP_SUB_ABYSS, 1);
        v5 = ret;
      }
      else
      {
LABEL_16:
        Entity::getScene((const Entity *const)(v2 + 32));
        if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
        {
          v7 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Creature::getAuthorityPeerId(this);
          Scene::findPeerPlayer((const Scene *const)(v2 + 64), v7);
          if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
          {
            v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            Monster::logAbnormalDie(this, v8, CHANGE_HP_SUB_ABYSS);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
        }
        v5 = ret;
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
      }
    }
    else
    {
      v5 = ret;
    }
  }
  else
  {
    v5 = 0;
  }
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 1189: range 0000000017124B74-0000000017124F6A
int32_t __cdecl Monster::onBeforeLeaveScene(Monster *const this, const VisionContext *context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  const std::shared_ptr<Monster> *v5; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int32_t result; // eax
  std::map<unsigned int,SummonInfo>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::map<unsigned int,SummonInfo>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::set<std::shared_ptr<Monster>>::iterator __for_begin_0; // [rsp+28h] [rbp-118h] BYREF
  std::set<std::shared_ptr<Monster>>::iterator __for_end_0; // [rsp+30h] [rbp-110h] BYREF
  std::map<unsigned int,SummonInfo> *__for_range; // [rsp+38h] [rbp-108h]
  std::pair<unsigned int const,SummonInfo> *__in; // [rsp+40h] [rbp-100h]
  std::tuple_element<0,std::pair<unsigned int const,SummonInfo> >::type *summon_tag; // [rsp+48h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int const,SummonInfo> >::type *summon_info; // [rsp+50h] [rbp-F0h]
  std::set<std::shared_ptr<Monster>> *__for_range_0; // [rsp+58h] [rbp-E8h]
  std::function<ForeachPolicy(MonsterWeaponGadget&)> p_func; // [rsp+60h] [rbp-E0h] BYREF
  char v20[192]; // [rsp+80h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 16 16 monster_ptr:1200 80 48 21 copy_monster_set:1199";
  *(_QWORD *)(v2 + 16) = Monster::onBeforeLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  Creature::onBeforeLeaveScene(this, context);
  std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::function<Monster::onBeforeLeaveScene(VisionContext const&)::{lambda(MonsterWeaponGadget &)#1},void,void>(
    &p_func,
    (Monster::onBeforeLeaveScene::<lambda(MonsterWeaponGadget&)>)context);
  Monster::foreachWeaponGadget(this, &p_func);
  std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::~function(&p_func);
  __for_range = &this->summon_map_;
  __for_begin._M_node = std::map<unsigned int,SummonInfo>::begin(&this->summon_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SummonInfo>::end(&this->summon_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo>>::operator*(&__for_begin);
    summon_tag = std::get<0ul,unsigned int const,SummonInfo>(__in);
    summon_info = std::get<1ul,unsigned int const,SummonInfo>(__in);
    std::set<std::shared_ptr<Monster>>::set(
      (std::set<std::shared_ptr<Monster>> *const)(v2 + 80),
      &summon_info->monster_set);
    __for_range_0 = (std::set<std::shared_ptr<Monster>> *)(v2 + 80);
    __for_begin_0._M_node = std::set<std::shared_ptr<Monster>>::begin((const std::set<std::shared_ptr<Monster>> *const)(v2 + 80))._M_node;
    __for_end_0._M_node = std::set<std::shared_ptr<Monster>>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v5 = std::_Rb_tree_const_iterator<std::shared_ptr<Monster>>::operator*(&__for_begin_0);
      std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)(v2 + 48), v5);
      v6 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( Creature::getIsAliveByOwner(v6) )
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(_QWORD *)v7 + 128LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, const VisionContext *))v8)(v7, context);
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 48));
      std::_Rb_tree_const_iterator<std::shared_ptr<Monster>>::operator++(&__for_begin_0);
    }
    std::set<std::shared_ptr<Monster>>::~set((std::set<std::shared_ptr<Monster>> *const)(v2 + 80));
    std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo>>::operator++(&__for_begin);
  }
  std::map<unsigned int,SummonInfo>::clear(&this->summon_map_);
  Monster::clearAlertAvatar(this, PlayerLogBodyCombatEnd_CombatEndReason_COMBAT_END_MONSTER_ALERT_CHANGE, 0LL);
  std::map<unsigned int,Monster::PlayerHurtData>::clear(&this->player_hurt_map_);
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 1191: range 0000000017124ADA-0000000017124B73
ForeachPolicy __cdecl Monster::onBeforeLeaveScene(VisionContext const&)::{lambda(MonsterWeaponGadget &)#1}::operator()(
        const Monster::onBeforeLeaveScene::<lambda(MonsterWeaponGadget&)> *const __closure,
        MonsterWeaponGadget *weapon_gadget)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(MonsterWeaponGadget *, const VisionContext *); // rcx

  if ( *(_BYTE *)(((unsigned __int64)weapon_gadget >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = *(_QWORD *)weapon_gadget->baseclass_0 + 128LL;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = *(void (__fastcall **)(MonsterWeaponGadget *, const VisionContext *))v2;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3(weapon_gadget, __closure->__context);
  return 0;
};

// Line 1216: range 0000000017124F6C-0000000017125078
LuaScriptPtr __cdecl Monster::getScript(const Monster *const this)
{
  __int64 v1; // rsi
  LuaConfigMgr *p_lua_config_mgr; // rcx
  LuaScriptPtr result; // rax
  const LuaContent *lua_content_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 2672) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  lua_content_ptr = LuaConfigMgr::findMonsterScriptContext(p_lua_config_mgr, *(_DWORD *)(v1 + 2672));
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( lua_content_ptr )
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

// Line 1227: range 000000001712507A-0000000017125122
int32_t __cdecl Monster::dropSubfield(Monster *const this, const std::string *subfield_name)
{
  bool v3; // r12
  uint32_t MonsterId; // edx

  if ( Monster::getIsBanAllDrop(this) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = (this->guest_ban_drop_ & 0x20) != 0;
  MonsterId = Monster::getMonsterId(this);
  return Creature::internalDropSubfield(this, subfield_name, 2u, MonsterId, v3);
};

// Line 1238: range 0000000017125124-000000001712530D
bool __cdecl Monster::isCanDropItem(const Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // r15d
  bool result; // al
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 21 current_drop_tag:1248";
  *(_QWORD *)(v1 + 16) = Monster::isCanDropItem;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ban_all_drop_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ban_all_drop_);
  }
  if ( this->is_ban_all_drop_ )
  {
    LOBYTE(v4) = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->drop_id_ )
    {
      LOBYTE(v4) = 1;
    }
    else
    {
      std::string::basic_string(v1 + 32);
      Monster::getCurrentMonsterDropTag(this, (std::string *)(v1 + 32));
      v4 = std::string::empty(v1 + 32) ^ 1;
      std::string::~string((void *)(v1 + 32));
    }
  }
  result = v4;
  if ( v6 == (char *)v1 )
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
  return result;
};

// Line 1255: range 000000001712530E-0000000017125752
std::pair<unsigned int,unsigned int> __fastcall Monster::findDropIdCountByFallbackDropIdOrDropTag(
        const Monster *const this,
        uint32_t fallback_drop_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::pair<unsigned int,unsigned int> v5; // r14
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::pair<unsigned int,unsigned int> result; // rax
  int __x; // [rsp+18h] [rbp-108h] BYREF
  int __y; // [rsp+1Ch] [rbp-104h] BYREF
  const data::MonsterDropExcelConfig *monster_drop_config_ptr; // [rsp+20h] [rbp-100h]
  std::pair<int,int> v15; // [rsp+28h] [rbp-F8h] BYREF
  std::pair<unsigned int,int> __p; // [rsp+30h] [rbp-F0h] BYREF
  std::pair<unsigned int,unsigned int> v17; // [rsp+38h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 18 monster_level:1261 48 4 21 fallback_drop_id:1254 64 32 21 current_drop_tag:1264";
  *(_QWORD *)(v2 + 16) = Monster::findDropIdCountByFallbackDropIdOrDropTag;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = fallback_drop_id;
  if ( *(_DWORD *)(v2 + 48) )
  {
    __y = 1;
    __p = std::make_pair<unsigned int &,int>((unsigned int *)(v2 + 48), &__y);
    std::pair<unsigned int,unsigned int>::pair<unsigned int,int,true>(&v17, &__p);
    v5 = v17;
  }
  else
  {
    *(_DWORD *)(v2 + 32) = Creature::getLevel(this);
    monster_drop_config_ptr = 0LL;
    std::string::basic_string(v2 + 64);
    Monster::getCurrentMonsterDropTag(this, (std::string *)(v2 + 64));
    if ( (unsigned __int8)std::string::empty(v2 + 64) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "findDropIdCountByFallbackDropIdOrDropTag",
        1269);
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v19,
             (const char (*)[28])"drop_tag is empty, monster:");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v19);
      __y = 0;
      __x = 0;
      v15 = std::make_pair<int,int>(&__x, &__y);
      std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v17, &v15);
      v5 = v17;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
      monster_drop_config_ptr = DropExcelConfigMgr::findMonsterDropConfig(
                                  &v7->design_config.txt_config_mgr.drop_config_mgr,
                                  *(_DWORD *)(v2 + 32),
                                  (const std::string *)(v2 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( monster_drop_config_ptr )
      {
        v5 = std::make_pair<unsigned int const&,unsigned int const&>(
               &monster_drop_config_ptr->drop_id,
               &monster_drop_config_ptr->drop_count);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "findDropIdCountByFallbackDropIdOrDropTag",
          1276);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v19,
               (const char (*)[37])"findMonsterDropConfig fail, monster:");
        v9 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v8, this);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])" monster_level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v19);
        __y = 0;
        __x = 0;
        __p = (std::pair<unsigned int,int>)std::make_pair<int,int>(&__x, &__y);
        std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v17, (std::pair<int,int> *)&__p);
        v5 = v17;
      }
    }
    std::string::~string((void *)(v2 + 64));
  }
  result = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1283: range 0000000017125754-0000000017125B7E
int32_t __cdecl Monster::onClientUploadAIConfigHash(
        Monster *const this,
        int32_t hash_value,
        uint32_t job_id,
        Player *player)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  JsonConfigMgr *p_json_config_mgr; // rcx
  bool v8; // r14
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool is_enable_client_hash_debug; // r14
  common::milog::MiLogStream *v12; // rax
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 22 server_hash_value:1284 64 24 11 notify:1298";
  *(_QWORD *)(v4 + 16) = Monster::onClientUploadAIConfigHash;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v8 = JsonConfigMgr::findMonsterAIConfigHash(p_json_config_mgr, this->monster_id_, (int32_t *)(v4 + 48)) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "onClientUploadAIConfigHash",
      1287);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v16,
      (const char (*)[35])"find monster ai config hash failed");
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = -1;
  }
  else
  {
    if ( hash_value != *(_DWORD *)(v4 + 48) )
    {
      Monster::logMonsterAIHashChech(this, *(_DWORD *)(v4 + 48), hash_value);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      if ( *(char *)(((unsigned __int64)&v10->security_config.is_enable_client_hash_debug >> 3) + 0x7FFF8000) < 0 )
        v10 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v10->security_config.is_enable_client_hash_debug);
      is_enable_client_hash_debug = v10->security_config.is_enable_client_hash_debug;
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( is_enable_client_hash_debug )
      {
        proto::ClientHashDebugNotify::ClientHashDebugNotify((proto::ClientHashDebugNotify *const)(v4 + 64));
        proto::ClientHashDebugNotify::set_job_id((proto::ClientHashDebugNotify *const)(v4 + 64), job_id);
        Player::sendProto(player, (const google::protobuf::Message *)(v4 + 64));
        proto::ClientHashDebugNotify::~ClientHashDebugNotify((proto::ClientHashDebugNotify *const)(v4 + 64));
      }
    }
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "onClientUploadAIConfigHash",
      1304);
    v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v16,
            (const char (*)[38])"[AIHASH] monster ai hash check succ. ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->monster_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    if ( *(char *)(((unsigned __int64)&this->is_checked_ai_hash_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_checked_ai_hash_);
    this->is_checked_ai_hash_ = 1;
    result = 0;
  }
  if ( v17 == (char *)v4 )
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
  return result;
};

// Line 1312: range 0000000017125B80-0000000017125E51
data::ItemLimitType __cdecl Monster::getMonsterItemLimitType(const Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  data::ItemLimitType MonsterItemLimitType; // r14d
  LuaConfigMgr *p_lua_config_mgr; // r13
  const MonsterScriptConfig *MonsterScriptConfig; // r14
  uint32_t SceneId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  data::ItemLimitType result; // eax
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-A0h] BYREF
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 21 current_drop_tag:1324";
  *(_QWORD *)(v1 + 16) = Monster::getMonsterItemLimitType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_created_by_gm_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_created_by_gm_);
  if ( this->is_created_by_gm_ )
  {
    MonsterItemLimitType = ITEM_LIMIT_GM;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->drop_id_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v10);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.lua_config_mgr;
      MonsterScriptConfig = Monster::getMonsterScriptConfig(this);
      SceneId = Entity::getSceneId((const Entity *const)this);
      MonsterItemLimitType = LuaConfigMgr::getMonsterItemLimitType(p_lua_config_mgr, SceneId, MonsterScriptConfig);
      std::shared_ptr<Config>::~shared_ptr(&v10);
    }
    else
    {
      std::string::basic_string(v1 + 32);
      Monster::getCurrentMonsterDropTag(this, (std::string *)(v1 + 32));
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v10);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
      MonsterItemLimitType = MonsterExcelConfigMgr::getItemLimitTypeByMonsterDropTag(
                               &v8->design_config.txt_config_mgr.monster_config_mgr,
                               (const std::string *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v10);
      std::string::~string((void *)(v1 + 32));
    }
  }
  result = MonsterItemLimitType;
  if ( v11 == (char *)v1 )
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
  return result;
};

// Line 1331: range 0000000017125E52-00000000171268F8
Monster *__fastcall Monster::addWeaponGadget(
        Monster *const this,
        const Monster *weapon_gadget_id,
        const std::string *attach_to,
        __int64 enter_scene_at_once,
        char a5)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  Entity *v8; // r14
  unsigned int v9; // eax
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  MonsterWeaponGadget *v14; // rax
  std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  Entity *v18; // r14
  Scene *v19; // rax
  uint32_t v20; // eax
  std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  unsigned __int64 v22; // rax
  unsigned int (__fastcall *v23)(std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  char v25; // al
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_authority_peer_id; // rdi
  std::shared_ptr<MonsterWeaponGadget> *v29; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int v38; // [rsp+1Ch] [rbp-154h]
  std::shared_ptr<Config> v40; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-130h] BYREF
  char v42[272]; // [rsp+60h] [rbp-110h] BYREF

  v38 = (int)attach_to;
  v5 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 21 weapon_gadget_id:1330 64 16 14 scene_ptr:1332 96 16 30 monster_weapon_gadget_ptr:1339 "
                        "128 16 22 config_gadget_ptr:1353 160 32 19 real_attach_to:1350";
  *(_QWORD *)(v5 + 16) = Monster::addWeaponGadget;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 48) = v38;
  Entity::getScene((const Entity *const)(v5 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "addWeaponGadget",
      1335);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v41, (const char (*)[14])"scene is null");
    common::milog::MiLogStream::~MiLogStream(&v41);
    std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
  }
  else
  {
    common::tools::perf::make_shared<MonsterWeaponGadget,unsigned int &>(
      (unsigned int *)(v5 + 96),
      (unsigned int *)(v5 + 48));
    if ( std::operator==<MonsterWeaponGadget>((const std::shared_ptr<MonsterWeaponGadget> *)(v5 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "addWeaponGadget",
        1342);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v41,
        (const char (*)[34])"monster_weapon_gadget_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v41);
      std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
    }
    else
    {
      v8 = (Entity *)std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
      std::to_string((std::string *)(v5 + 160), *(_DWORD *)(v5 + 48));
      std::operator+<char>((std::string *)&v41, "MonsterWeaponGadget_", (std::string *)(v5 + 160));
      Entity::setName(v8, (const std::string *)&v41);
      std::string::~string(&v41);
      std::string::~string((void *)(v5 + 160));
      std::string::basic_string(v5 + 160, enter_scene_at_once);
      if ( !(unsigned __int8)std::string::empty(v5 + 160) )
        goto LABEL_15;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v40);
      v9 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
      JsonConfigMgr::findGadgetConfig((const JsonConfigMgr *const)(v5 + 128), v9 + 93080);
      std::shared_ptr<Config>::~shared_ptr(&v40);
      if ( std::operator==<data::ConfigGadget>((const std::shared_ptr<data::ConfigGadget> *)(v5 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "addWeaponGadget",
          1356);
        v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v41,
                (const char (*)[35])"findGadgetConfig fails, gadget_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v41);
        std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
        v11 = 0;
      }
      else
      {
        v12 = std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
        std::string::operator=(v5 + 160, &v12->equipment);
        if ( (unsigned __int8)std::string::empty(v5 + 160) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/monster/monster.cpp",
            "addWeaponGadget",
            1362);
          v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v41,
                  (const char (*)[45])"monster weapon attach_tois empty, gadget_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
          v11 = 0;
        }
        else
        {
          v11 = 1;
        }
      }
      std::shared_ptr<data::ConfigGadget>::~shared_ptr((std::shared_ptr<data::ConfigGadget> *const)(v5 + 128));
      if ( v11 == 1 )
      {
LABEL_15:
        v14 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        MonsterWeaponGadget::setAttachTo(v14, (const std::string *)(v5 + 160));
        v15 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        toThisPtr<Monster>((Monster *)(v5 + 128));
        std::shared_ptr<Creature>::shared_ptr<Monster,void>(
          (std::shared_ptr<Creature> *const)&v40,
          (std::shared_ptr<Monster> *)(v5 + 128));
        Creature::setOwner(v15, (CreaturePtr *)&v40);
        std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)&v40);
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v5 + 128));
        v16 = (unsigned __int64)std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        v17 = *(_QWORD *)v16 + 400LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64))v17)(v16) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/monster/monster.cpp",
            "addWeaponGadget",
            1372);
          common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v41, (const char (*)[18])"initAbility fails");
          common::milog::MiLogStream::~MiLogStream(&v41);
          std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
        }
        else
        {
          v18 = (Entity *)std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          v20 = Scene::genNewEntityId(v19, PROT_ENTITY_WEAPON);
          Entity::setEntityId(v18, v20);
          if ( !a5 )
            goto LABEL_28;
          v21 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v22 = *(_QWORD *)v21->baseclass_0 + 56LL;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8();
          v23 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v22;
          v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
          if ( v23(v21, v24, &VisionContext::meet_context) )
            v25 = 1;
          else
LABEL_28:
            v25 = 0;
          if ( v25 )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/monster/monster.cpp",
              "addWeaponGadget",
              1379);
            v26 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v41,
                    (const char (*)[36])"weapon gadget ptr enter Scene fails");
            v27 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            common::milog::MiLogStream::operator<<<MonsterWeaponGadget,(MonsterWeaponGadget*)0>(v26, v27);
            common::milog::MiLogStream::~MiLogStream(&v41);
            std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
          }
          else
          {
            p_authority_peer_id = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&weapon_gadget_id->authority_peer_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)weapon_gadget_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weapon_gadget_id->authority_peer_id_ >> 3)
                                                                             + 0x7FFF8000) )
            {
              p_authority_peer_id = (std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&weapon_gadget_id->authority_peer_id_;
              __asan_report_load4();
            }
            Creature::setAuthorityPeerId(p_authority_peer_id, weapon_gadget_id->authority_peer_id_);
            v30 = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::emplace<std::string&,std::shared_ptr<MonsterWeaponGadget>&>(
                    &weapon_gadget_id->weapon_gadget_map_,
                    (std::string *)(v5 + 160),
                    (std::shared_ptr<MonsterWeaponGadget> *)(v5 + 96),
                    (std::string *)&weapon_gadget_id->weapon_gadget_map_,
                    v29);
            if ( !v30.second )
            {
              common::milog::MiLogStream::create(
                &v41,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/monster/monster.cpp",
                "addWeaponGadget",
                1386);
              v31 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v41,
                      (const char (*)[21])"duplicate attach_to:");
              v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v31,
                      (const std::string *)(v5 + 160));
              v33 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v32,
                      (const char (*)[20])", weapon_gadget_id:");
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v5 + 48));
              common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v34, weapon_gadget_id);
              common::milog::MiLogStream::~MiLogStream(&v41);
              std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
            }
            else
            {
              std::shared_ptr<MonsterWeaponGadget>::shared_ptr(
                (std::shared_ptr<MonsterWeaponGadget> *const)this,
                (std::shared_ptr<MonsterWeaponGadget> *)(v5 + 96));
            }
          }
        }
      }
      std::string::~string((void *)(v5 + 160));
    }
    std::shared_ptr<MonsterWeaponGadget>::~shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)(v5 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 64));
  if ( v42 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return this;
};

// Line 1394: range 00000000171268FA-0000000017126E25
int32_t __cdecl Monster::delWeaponGadget(
        Monster *const this,
        const std::string *attach_to,
        bool is_clear_entity,
        bool is_by_die)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::pointer v9; // rax
  MonsterWeaponGadget *v10; // r14
  std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Scene *v12; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Monster *const, __int64); // r15
  std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  __int64 GadgetId; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-F9h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::_Self __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 14 entity_id:1405 64 8 7 it:1395 96 16 22 weapon_gadget_ptr:1401 128 16 14 scene_ptr:1406";
  *(_QWORD *)(v4 + 16) = Monster::delWeaponGadget;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  *(std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::iterator *)(v4 + 64) = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::find(
                                                                                         &this->weapon_gadget_map_,
                                                                                         attach_to);
  __y._M_node = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::end(&this->weapon_gadget_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "delWeaponGadget",
      1398);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v27, (const char (*)[22])off_26015E60);
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, attach_to);
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<MonsterWeaponGadget>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > > *const)(v4 + 64));
    std::shared_ptr<MonsterWeaponGadget>::shared_ptr(
      (std::shared_ptr<MonsterWeaponGadget> *const)(v4 + 96),
      &v9->second);
    std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::erase[abi:cxx11](
      &this->weapon_gadget_map_,
      *(std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::iterator *)(v4 + 64));
    v10 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v27, byte_25FB4240, &__a);
    MonsterWeaponGadget::setAttachTo(v10, (const std::string *)&v27);
    std::string::~string(&v27);
    std::allocator<char>::~allocator(&__a);
    v11 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    *(_DWORD *)(v4 + 48) = Entity::getEntityId((const Entity *const)v11);
    Entity::getScene((const Entity *const)(v4 + 128));
    if ( is_clear_entity && std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
    {
      v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( Scene::delGridlessEntity(v12, *(_DWORD *)(v4 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "delWeaponGadget",
          1409);
        v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v27,
                (const char (*)[36])"delGridlessEntity fails, entity_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v15, this);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
    if ( is_by_die && std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
    {
      v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (unsigned __int64)(v17->_vptr_DescribalBase + 31);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = *(void (__fastcall **)(std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Monster *const, __int64))v18;
      v20 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      GadgetId = Gadget::getGadgetId(v20);
      v19(v17, this, GadgetId);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
    std::shared_ptr<MonsterWeaponGadget>::~shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)(v4 + 96));
  }
  result = 0;
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1420: range 0000000017127004-00000000171271F3
int32_t __cdecl Monster::delAllWeaponGadgets(Monster *const this, bool is_clear_entity)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  Monster::delAllWeaponGadgets::<lambda(MonsterWeaponGadget&)> p___f; // [rsp+10h] [rbp-B0h] BYREF
  std::function<ForeachPolicy(MonsterWeaponGadget&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v9[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 scene_ptr:1421";
  *(_QWORD *)(v2 + 16) = Monster::delAllWeaponGadgets;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  Entity::getScene((const Entity *const)(v2 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) && is_clear_entity )
  {
    p___f.__this = this;
    std::shared_ptr<Scene>::shared_ptr(&p___f.__scene_ptr, (const std::shared_ptr<Scene> *)(v2 + 32));
    std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::function<Monster::delAllWeaponGadgets(bool)::{lambda(MonsterWeaponGadget &)#1},void,void>(
      &p_func,
      &p___f);
    Monster::foreachWeaponGadget(this, &p_func);
    std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::~function(&p_func);
    Monster::delAllWeaponGadgets(bool)::{lambda(MonsterWeaponGadget &)#1}::~MonsterWeaponGadget(&p___f);
  }
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::clear(&this->weapon_gadget_map_);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = 0;
  if ( v9 == (char *)v2 )
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

// Line 1424: range 0000000017126E26-0000000017126FE3
ForeachPolicy __cdecl Monster::delAllWeaponGadgets(bool)::{lambda(MonsterWeaponGadget &)#1}::operator()(
        const Monster::delAllWeaponGadgets::<lambda(MonsterWeaponGadget&)> *const __closure,
        MonsterWeaponGadget *weapon_gadget)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Scene *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  ForeachPolicy result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 entity_id:1426";
  *(_QWORD *)(v2 + 16) = Monster::delAllWeaponGadgets(bool)::{lambda(MonsterWeaponGadget &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Entity::getEntityId((const Entity *const)weapon_gadget);
  v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__scene_ptr);
  if ( Scene::delGridlessEntity(v5, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "operator()",
      1429);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v9,
           (const char (*)[36])"delGridlessEntity fails, entity_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v7, __closure->__this);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  result = FOREACH_CONTINUE;
  if ( v10 == (char *)v2 )
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

// Line 1424: range 00000000171F1DEE-00000000171F1E6B
void __cdecl Monster::delAllWeaponGadgets(bool)::{lambda(MonsterWeaponGadget &)#1}::MonsterWeaponGadget(
        Monster::delAllWeaponGadgets::<lambda(MonsterWeaponGadget&)> *const this,
        Monster::delAllWeaponGadgets::<lambda(MonsterWeaponGadget&)> *a2)
{
  Monster *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->__this = v2;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &a2->__scene_ptr);
};

// Line 1424: range 00000000171F1F36-00000000171F1FB3
void __cdecl Monster::delAllWeaponGadgets(bool)::{lambda(MonsterWeaponGadget &)#1}::MonsterWeaponGadget(
        Monster::delAllWeaponGadgets::<lambda(MonsterWeaponGadget&)> *const this,
        const Monster::delAllWeaponGadgets::<lambda(MonsterWeaponGadget&)> *a2)
{
  Monster *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = a2->__this;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->__this = v2;
  std::shared_ptr<Scene>::shared_ptr(&this->__scene_ptr, &a2->__scene_ptr);
};

// Line 1424: range 0000000017126FE4-0000000017127002
void __cdecl Monster::delAllWeaponGadgets(bool)::{lambda(MonsterWeaponGadget &)#1}::~MonsterWeaponGadget(
        Monster::delAllWeaponGadgets::<lambda(MonsterWeaponGadget&)> *const this)
{
  std::shared_ptr<Scene>::~shared_ptr(&this->__scene_ptr);
};

// Line 1440: range 00000000171271F4-0000000017127336
MonsterWeaponGadgetPtr __cdecl Monster::findWeaponGadget(Monster *const this, const std::string *attach_to)
{
  const std::string *v2; // rdx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<MonsterWeaponGadget> *p_second; // rdx
  MonsterWeaponGadgetPtr result; // rax
  const std::string *attach_toa; // [rsp+8h] [rbp-88h]
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::_Self __y; // [rsp+28h] [rbp-68h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  attach_toa = v2;
  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 7 it:1441";
  *(_QWORD *)(v3 + 16) = Monster::findWeaponGadget;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::iterator *)(v3 + 32) = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::find(
                                                                                         (std::map<std::string,std::shared_ptr<MonsterWeaponGadget>> *const)&attach_to[86]._anon_0,
                                                                                         attach_toa);
  __y._M_node = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::end((std::map<std::string,std::shared_ptr<MonsterWeaponGadget>> *const)&attach_to[86]._anon_0)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::_Self *)(v3 + 32),
         &__y) )
  {
    p_second = &std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<MonsterWeaponGadget>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > > *const)(v3 + 32))->second;
    std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, p_second);
  }
  else
  {
    std::shared_ptr<MonsterWeaponGadget>::shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1451: range 0000000017127476-00000000171275FF
void __fastcall Monster::onAuthorityChangedToPeerID(
        Monster *const this,
        uint32_t new_peer_id,
        const std::vector<std::shared_ptr<Player>> *notify_player_vec,
        char delay_sync)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  Monster::onAuthorityChangedToPeerID::<lambda(MonsterWeaponGadget&)> v7; // [rsp-20h] [rbp-E0h]
  __int64 __f; // [rsp+20h] [rbp-A0h]
  std::function<ForeachPolicy(MonsterWeaponGadget&)> p_func; // [rsp+40h] [rbp-80h] BYREF
  char v12[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 15 delay_sync:1450";
  *(_QWORD *)(v4 + 16) = Monster::onAuthorityChangedToPeerID;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  *(_BYTE *)(v4 + 32) = delay_sync;
  Creature::onAuthorityChangedToPeerID(this, new_peer_id, notify_player_vec, *(_BYTE *)(v4 + 32));
  LODWORD(__f) = new_peer_id;
  v7.__delay_sync = (bool *)(v4 + 32);
  v7.__notify_player_vec = notify_player_vec;
  *(_QWORD *)&v7.__new_peer_id = __f;
  std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::function<Monster::onAuthorityChangedToPeerID(unsigned int,std::vector<std::shared_ptr<Player>> const&,bool)::{lambda(MonsterWeaponGadget &)#1},void,void>(
    &p_func,
    v7);
  Monster::foreachWeaponGadget(this, &p_func);
  std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::~function(&p_func);
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1453: range 0000000017127338-0000000017127474
ForeachPolicy __cdecl Monster::onAuthorityChangedToPeerID(unsigned int,std::vector<std::shared_ptr<Player>> const&,bool)::{lambda(MonsterWeaponGadget &)#1}::operator()(
        const Monster::onAuthorityChangedToPeerID::<lambda(MonsterWeaponGadget&)> *const __closure,
        MonsterWeaponGadget *weapon_gadget)
{
  void *p_delay_sync; // rdi
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(void *, _QWORD, const std::vector<std::shared_ptr<Player>> *, _BOOL8); // r8
  bool *delay_sync; // rdx
  _BOOL8 v6; // rcx
  const std::vector<std::shared_ptr<Player>> *notify_player_vec; // rdx

  p_delay_sync = weapon_gadget;
  if ( *(_BYTE *)(((unsigned __int64)weapon_gadget >> 3) + 0x7FFF8000) )
  {
    p_delay_sync = weapon_gadget;
    __asan_report_load8();
  }
  v3 = *(_QWORD *)weapon_gadget->baseclass_0 + 344LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
  {
    p_delay_sync = (void *)(*(_QWORD *)weapon_gadget->baseclass_0 + 344LL);
    v3 = __asan_report_load8();
  }
  v4 = *(void (__fastcall **)(void *, _QWORD, const std::vector<std::shared_ptr<Player>> *, _BOOL8))v3;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__delay_sync >> 3) + 0x7FFF8000) )
  {
    p_delay_sync = &__closure->__delay_sync;
    __asan_report_load8();
  }
  delay_sync = __closure->__delay_sync;
  if ( *(_BYTE *)(((unsigned __int64)delay_sync >> 3) + 0x7FFF8000) != 0
    && ((__int64)__closure->__delay_sync & 7) >= *(_BYTE *)(((unsigned __int64)delay_sync >> 3) + 0x7FFF8000) )
  {
    p_delay_sync = __closure->__delay_sync;
    __asan_report_load1(p_delay_sync);
  }
  v6 = *delay_sync;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__notify_player_vec >> 3) + 0x7FFF8000) )
  {
    p_delay_sync = &__closure->__notify_player_vec;
    __asan_report_load8();
  }
  notify_player_vec = __closure->__notify_player_vec;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    p_delay_sync = (void *)__closure;
    __asan_report_load4();
  }
  v4(p_delay_sync, __closure->__new_peer_id, notify_player_vec, v6);
  return 0;
};

// Line 1462: range 0000000017127600-00000000171277B9
bool __fastcall Monster::canAddSummonMonster(Monster *const this, uint32_t summon_tag)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo> >::pointer v5; // rax
  std::set<std::shared_ptr<Monster>>::size_type v6; // rcx
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  SummonInfo *summon_info; // [rsp+18h] [rbp-88h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 summon_tag:1461 64 8 7 it:1463";
  *(_QWORD *)(v2 + 16) = Monster::canAddSummonMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = summon_tag;
  *(std::map<unsigned int,SummonInfo>::iterator *)(v2 + 64) = std::map<unsigned int,SummonInfo>::find(
                                                                &this->summon_map_,
                                                                (const std::map<unsigned int,SummonInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,SummonInfo>::end(&this->summon_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo> > *const)(v2 + 64));
    summon_info = &v5->second;
    v6 = std::set<std::shared_ptr<Monster>>::size(&v5->second.monster_set);
    if ( *(_BYTE *)(((unsigned __int64)summon_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)summon_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    result = v6 < summon_info->max_count;
  }
  else
  {
    result = 0;
  }
  if ( v10 == (char *)v2 )
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

// Line 1474: range 00000000171277BA-0000000017127B33
int32_t __cdecl Monster::addSummonMonster(Monster *const this, Monster *monster)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  std::set<std::shared_ptr<Monster>>::size_type v7; // rcx
  common::milog::MiLogStream *v8; // rdx
  std::pair<std::_Rb_tree_const_iterator<std::shared_ptr<Monster> >,bool> v9; // rax
  bool v10; // r13
  common::milog::MiLogStream *v11; // rdx
  SummonInfo *summon_info; // [rsp+18h] [rbp-98h]
  std::set<std::shared_ptr<Monster>>::value_type __x; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 summoned_tag:1475";
  *(_QWORD *)(v2 + 16) = Monster::addSummonMonster;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Monster::getSummonedTag(monster);
  if ( *(_DWORD *)(v2 + 32) )
  {
    summon_info = std::map<unsigned int,SummonInfo>::operator[](
                    &this->summon_map_,
                    (const std::map<unsigned int,SummonInfo>::key_type *)(v2 + 32));
    v7 = std::set<std::shared_ptr<Monster>>::size(&summon_info->monster_set);
    if ( *(_BYTE *)(((unsigned __int64)summon_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)summon_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v7 < summon_info->max_count )
    {
      toThisPtr<Monster>((Monster *)&__x);
      v9 = std::set<std::shared_ptr<Monster>>::insert(&summon_info->monster_set, &__x);
      v10 = !v9.second;
      std::shared_ptr<Monster>::~shared_ptr(&__x);
      if ( v10 )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "addSummonMonster",
          1489);
        v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v14,
                (const char (*)[19])"duplicate monster:");
        common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v11, monster);
        common::milog::MiLogStream::~MiLogStream(&v14);
        result = -1;
      }
      else
      {
        Monster::notifySummonInfo(this);
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "addSummonMonster",
        1484);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v14,
             (const char (*)[28])"summon monster exceeds max:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &summon_info->max_count);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "addSummonMonster",
      1478);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"summon_tag is 0");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v5, monster);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
  }
  if ( v15 == (char *)v2 )
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

// Line 1498: range 0000000017127B34-0000000017127DB3
void __cdecl Monster::onSummonMonsterDie(Monster *const this, Monster *monster)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  std::set<std::shared_ptr<Monster>> *p_monster_set; // r13
  common::milog::MiLogStream *v7; // rdx
  std::set<std::shared_ptr<Monster>>::key_type __x; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 summoned_tag:1499";
  *(_QWORD *)(v2 + 16) = Monster::onSummonMonsterDie;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = Monster::getSummonedTag(monster);
  if ( *(_DWORD *)(v2 + 32) )
  {
    p_monster_set = &std::map<unsigned int,SummonInfo>::operator[](
                       &this->summon_map_,
                       (const std::map<unsigned int,SummonInfo>::key_type *)(v2 + 32))->monster_set;
    toThisPtr<Monster>((Monster *)&__x);
    LOBYTE(p_monster_set) = std::set<std::shared_ptr<Monster>>::erase(p_monster_set, &__x) == 0;
    std::shared_ptr<Monster>::~shared_ptr(&__x);
    if ( (_BYTE)p_monster_set )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "onSummonMonsterDie",
        1508);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v9, (const char (*)[20])off_260161A0);
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v7, monster);
      common::milog::MiLogStream::~MiLogStream(&v9);
    }
    Monster::notifySummonInfo(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "onSummonMonsterDie",
      1502);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v9, (const char (*)[18])"summoned_tag is 0");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v5, monster);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1515: range 0000000017127DB4-0000000017128084
int32_t __cdecl Monster::notifySummonInfo(Monster *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int v4; // r14d
  unsigned int *v5; // rax
  _DWORD *v6; // rdx
  int32_t v7; // r14d
  int32_t result; // eax
  std::map<unsigned int,SummonInfo>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,SummonInfo>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *summon_tag_map; // [rsp+28h] [rbp-F8h]
  std::map<unsigned int,SummonInfo> *__for_range; // [rsp+30h] [rbp-F0h]
  std::pair<unsigned int const,SummonInfo> *__in; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,SummonInfo> >::type *summon_tag; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,SummonInfo> >::type *summon_info; // [rsp+48h] [rbp-D8h]
  char v16[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 11 notify:1516";
  *(_QWORD *)(v1 + 16) = Monster::notifySummonInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  proto::MonsterSummonTagNotify::MonsterSummonTagNotify((proto::MonsterSummonTagNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MonsterSummonTagNotify::set_monster_entity_id(
    (proto::MonsterSummonTagNotify *const)(v1 + 32),
    *(_DWORD *)&this->baseclass_0[256]);
  summon_tag_map = proto::MonsterSummonTagNotify::mutable_summon_tag_map((proto::MonsterSummonTagNotify *const)(v1 + 32));
  __for_range = &this->summon_map_;
  __for_begin._M_node = std::map<unsigned int,SummonInfo>::begin(&this->summon_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,SummonInfo>::end(&this->summon_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo>>::operator*(&__for_begin);
    summon_tag = std::get<0ul,unsigned int const,SummonInfo>(__in);
    summon_info = std::get<1ul,unsigned int const,SummonInfo>(__in);
    v4 = std::set<std::shared_ptr<Monster>>::size(&summon_info->monster_set);
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](summon_tag_map, summon_tag);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v5);
    }
    *v6 = v4;
    std::_Rb_tree_iterator<std::pair<unsigned int const,SummonInfo>>::operator++(&__for_begin);
  }
  v7 = Entity::notifyViewingPlayers<proto::MonsterSummonTagNotify>(
         (Entity *const)this,
         (proto::MonsterSummonTagNotify *)(v1 + 32),
         0);
  proto::MonsterSummonTagNotify::~MonsterSummonTagNotify((proto::MonsterSummonTagNotify *const)(v1 + 32));
  result = v7;
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1528: range 0000000017128086-0000000017128157
bool __fastcall Monster::isExitInAlertSet(Monster *const this, uint32_t player_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 player_uid:1527";
  *(_QWORD *)(v2 + 16) = Monster::isExitInAlertSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = player_uid;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->alert_player_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 1534: range 0000000017128158-00000000171289D8
void __fastcall Monster::onMonsterAlertChange(Monster *const this, uint32_t player_uid, bool is_alert)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t ConfigId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  int32_t *p_param1; // rax
  data::MonsterType MonsterType; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Group *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  PlayerWorldScene *v31; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  PlayerWorldScene *v35; // rax
  bool is_pre_empty; // [rsp+1Eh] [rbp-D2h]
  bool is_prev_not_alert; // [rsp+1Fh] [rbp-D1h]
  common::milog::MiLogStream v39; // [rsp+20h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 player_uid:1533 64 16 20 world_scene_ptr:1572 96 16 12 evt_ptr:1551";
  *(_QWORD *)(v3 + 16) = Monster::onMonsterAlertChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = player_uid;
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/monster/monster.cpp",
    "onMonsterAlertChange",
    1536);
  v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v39,
         (const char (*)[30])"onMonsterAlertChange monster:");
  v7 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v6, this);
  v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" is_alert:");
  common::milog::MiLogStream::operator<<(v8, is_alert);
  common::milog::MiLogStream::~MiLogStream(&v39);
  is_pre_empty = std::set<unsigned int>::empty(&this->alert_player_set_);
  if ( is_alert )
  {
    is_prev_not_alert = std::set<unsigned int>::empty(&this->alert_player_set_);
    v9 = std::set<unsigned int>::insert(&this->alert_player_set_, (const std::set<unsigned int>::value_type *)(v3 + 48));
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/monster/monster.cpp",
        "onMonsterAlertChange",
        1544);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v39,
              (const char (*)[27])"already alert, player_uid:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" monster:");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v12, this);
      common::milog::MiLogStream::~MiLogStream(&v39);
      goto LABEL_46;
    }
    Entity::getGroup((const Entity *const)(v3 + 64));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v3 + 64), 0LL) && is_prev_not_alert )
    {
      EventUtil::createEvent((std::shared_ptr<Event> *)(v3 + 96), 22);
      if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 96), 0LL) )
      {
        EntityId = Entity::getEntityId((const Entity *const)this);
        v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        p_source_entity_id = &v15->source_entity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(p_source_entity_id);
        }
        v15->source_entity_id = EntityId;
        v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v17->target_entity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v17->target_entity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          v17 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v17->target_entity_id);
        }
        v17->target_entity_id = 0;
        ConfigId = Entity::getConfigId((const Entity *const)this);
        v19 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        p_param1 = &v19->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v19->param1 = ConfigId;
        MonsterType = Monster::getMonsterType(this);
        v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v22->param4 >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v22->param4 >> 3) + 0x7FFF8000) <= 3 )
        {
          v22 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v22->param4);
        }
        v22->param4 = MonsterType;
        v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Group::handleEvent(v23, (EventPtr *)(v3 + 96));
      }
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 96));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 64));
  }
  else if ( !std::set<unsigned int>::erase(
               &this->alert_player_set_,
               (const std::set<unsigned int>::key_type *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "onMonsterAlertChange",
      1566);
    v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v39, (const char (*)[23])off_26016380);
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
    v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])" monster:");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v26, this);
    common::milog::MiLogStream::~MiLogStream(&v39);
    goto LABEL_46;
  }
  Entity::getScene((const Entity *const)(v3 + 96));
  std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
  if ( std::operator!=<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v3 + 64), 0LL)
    && Monster::isInvisibleReset(this) )
  {
    if ( is_pre_empty
      && std::set<unsigned int>::empty(&this->alert_partner_set_)
      && !std::set<unsigned int>::empty(&this->alert_player_set_) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/monster/monster.cpp",
        "onMonsterAlertChange",
        1578);
      v29 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v39,
              (const char (*)[30])"onMonsterAlertChange monster:");
      v30 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v29, this);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v30,
        (const char (*)[34])" addInvisibleResetAndAlertMonster");
      common::milog::MiLogStream::~MiLogStream(&v39);
      v31 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      PlayerWorldScene::addInvisibleResetAndAlertMonster(v31, this);
    }
    if ( !is_pre_empty
      && std::set<unsigned int>::empty(&this->alert_partner_set_)
      && std::set<unsigned int>::empty(&this->alert_player_set_) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/monster/monster.cpp",
        "onMonsterAlertChange",
        1585);
      v33 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v39,
              (const char (*)[30])"onMonsterAlertChange monster:");
      v34 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v33, this);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v34,
        (const char (*)[34])" delInvisibleResetAndAlertMonster");
      common::milog::MiLogStream::~MiLogStream(&v39);
      v35 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      PlayerWorldScene::delInvisibleResetAndAlertMonster(v35, this);
    }
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 64));
LABEL_46:
  if ( v40 == (char *)v3 )
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
};

// Line 1595: range 00000000171289DA-0000000017128DB9
void __cdecl Monster::clearAlertAvatar(
        Monster *const this,
        proto_log::PlayerLogBodyCombatEnd::CombatEndReason combat_end_reason,
        const ChangeHpContext *change_hp_context_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  GameserverService *v7; // rax
  unsigned int GameThreadLocal; // eax
  Player *v9; // rax
  Player *v10; // rax
  PlayerAvatarComp *AvatarComp; // r14
  uint32_t EntityId; // r15d
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  MonsterPtr p_monster_ptr; // [rsp+50h] [rbp-C0h] BYREF
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 14 scene_ptr:1596 64 16 15 player_ptr:1603 96 16 21 player_scene_ptr:1606";
  *(_QWORD *)(v3 + 16) = Monster::clearAlertAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
  {
    __for_range = &this->alert_player_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->alert_player_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->alert_player_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v7 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v7);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 64), GameThreadLocal + 16);
      if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::getSceneComp(v9);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
        if ( !std::operator!=<Scene,Scene>(
                (const std::shared_ptr<Scene> *)(v3 + 96),
                (const std::shared_ptr<Scene> *)(v3 + 32)) )
        {
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          AvatarComp = Player::getAvatarComp(v10);
          EntityId = Entity::getEntityId((const Entity *const)this);
          toThisPtr<Monster>((Monster *)&p_monster_ptr);
          PlayerAvatarComp::onMonsterAlertChange(
            AvatarComp,
            0,
            &p_monster_ptr,
            EntityId,
            combat_end_reason,
            change_hp_context_ptr);
          std::shared_ptr<Monster>::~shared_ptr(&p_monster_ptr);
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    std::set<unsigned int>::clear(&this->alert_player_set_);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
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
};

// Line 1617: range 0000000017128DBA-000000001712920F
void __cdecl Monster::onMonsterPartnerAlertChange(Monster *const this, const std::set<unsigned int> *partner_id_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  PlayerWorldScene *v12; // rdx
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  PlayerWorldScene *v16; // rdx
  bool is_pre_empty; // [rsp+1Fh] [rbp-91h]
  std::shared_ptr<Scene> v18; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-80h] BYREF
  char v20[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 world_scene_ptr:1629";
  *(_QWORD *)(v2 + 16) = Monster::onMonsterPartnerAlertChange;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( !std::operator==<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
          &this->alert_partner_set_,
          partner_id_set) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "onMonsterPartnerAlertChange",
      1623);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v19,
           (const char (*)[37])"onMonsterPartnerAlertChange monster:");
    v6 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v5, this);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])" partner_id_set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v7, partner_id_set);
    common::milog::MiLogStream::~MiLogStream(&v19);
    is_pre_empty = std::set<unsigned int>::empty(&this->alert_partner_set_);
    std::set<unsigned int>::operator=(&this->alert_partner_set_, partner_id_set);
    Entity::getScene((const Entity *const)&v18);
    std::dynamic_pointer_cast<PlayerWorldScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 32));
    std::shared_ptr<Scene>::~shared_ptr(&v18);
    if ( std::operator!=<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v2 + 32), 0LL)
      && Monster::isInvisibleReset(this) )
    {
      if ( is_pre_empty
        && std::set<unsigned int>::empty(&this->alert_player_set_)
        && !std::set<unsigned int>::empty(&this->alert_partner_set_) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/monster/monster.cpp",
          "onMonsterPartnerAlertChange",
          1635);
        v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v19,
                (const char (*)[37])"onMonsterPartnerAlertChange monster:");
        v11 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v10, this);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v11,
          (const char (*)[34])" addInvisibleResetAndAlertMonster");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v12 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        PlayerWorldScene::addInvisibleResetAndAlertMonster(v12, this);
      }
      if ( !is_pre_empty
        && std::set<unsigned int>::empty(&this->alert_player_set_)
        && std::set<unsigned int>::empty(&this->alert_partner_set_) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/monster/monster.cpp",
          "onMonsterPartnerAlertChange",
          1642);
        v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v19,
                (const char (*)[37])"onMonsterPartnerAlertChange monster:");
        v15 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v14, this);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v15,
          (const char (*)[34])" delInvisibleResetAndAlertMonster");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v16 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        PlayerWorldScene::delInvisibleResetAndAlertMonster(v16, this);
      }
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v2 + 32));
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1651: range 0000000017129210-00000000171292E1
bool __fastcall Monster::isInPartnerAlertSet(Monster *const this, uint32_t entity_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 entity_id:1650";
  *(_QWORD *)(v2 + 16) = Monster::isInPartnerAlertSet;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = entity_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->alert_partner_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 1657: range 00000000171292E2-0000000017129358
bool __cdecl Monster::isLogIgnored(Monster *const this)
{
  const data::ConfigAIBeta *config_ai_beta_ptr; // [rsp+18h] [rbp-8h]

  config_ai_beta_ptr = Monster::getJsonAIConfig(this);
  if ( !config_ai_beta_ptr )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&config_ai_beta_ptr->friendliness >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ai_beta_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ai_beta_ptr->friendliness >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return config_ai_beta_ptr->friendliness > 0;
};

// Line 1664: range 000000001712935A-00000000171296AF
int32_t __cdecl Monster::foreachWeaponGadget(
        Monster *const this,
        std::function<ForeachPolicy(MonsterWeaponGadget&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::size_type v6; // rax
  int v7; // r14d
  MonsterWeaponGadget *v8; // rdx
  int32_t result; // eax
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::map<std::string,std::shared_ptr<MonsterWeaponGadget>> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<std::weak_ptr<MonsterWeaponGadget>> *__for_range_0; // [rsp+38h] [rbp-D8h]
  std::weak_ptr<MonsterWeaponGadget> *weapon_gadget_wtr; // [rsp+40h] [rbp-D0h]
  std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::type *weapon_gadget_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::type *weapon_gadget_ptr; // [rsp+58h] [rbp-B8h]
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 22 weapon_gadget_ptr:1674 64 24 22 weapon_gadget_vec:1666";
  *(_QWORD *)(v3 + 16) = Monster::foreachWeaponGadget;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<MonsterWeaponGadget>>::vector((std::vector<std::weak_ptr<MonsterWeaponGadget>> *const)(v3 + 64));
  v6 = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::size(&this->weapon_gadget_map_);
  std::vector<std::weak_ptr<MonsterWeaponGadget>>::reserve(
    (std::vector<std::weak_ptr<MonsterWeaponGadget>> *const)(v3 + 64),
    v6);
  __for_range = &this->weapon_gadget_map_;
  __for_begin._M_node = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::begin(&this->weapon_gadget_map_)._M_node;
  __for_end._M_node = std::map<std::string,std::shared_ptr<MonsterWeaponGadget>>::end(&this->weapon_gadget_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<MonsterWeaponGadget>>>::operator*(&__for_begin);
    weapon_gadget_id = std::get<0ul,std::string const,std::shared_ptr<MonsterWeaponGadget>>(__in);
    weapon_gadget_ptr = std::get<1ul,std::string const,std::shared_ptr<MonsterWeaponGadget>>(__in);
    std::vector<std::weak_ptr<MonsterWeaponGadget>>::emplace_back<std::shared_ptr<MonsterWeaponGadget> &>(
      (std::vector<std::weak_ptr<MonsterWeaponGadget>> *const)(v3 + 64),
      weapon_gadget_ptr,
      weapon_gadget_ptr);
    std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<MonsterWeaponGadget>>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<MonsterWeaponGadget>> *)(v3 + 64);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::_Base_ptr)std::vector<std::weak_ptr<MonsterWeaponGadget>>::begin((std::vector<std::weak_ptr<MonsterWeaponGadget>> *const)(v3 + 64))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<MonsterWeaponGadget> > >::_Base_ptr)std::vector<std::weak_ptr<MonsterWeaponGadget>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<MonsterWeaponGadget> *,std::vector<std::weak_ptr<MonsterWeaponGadget>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<MonsterWeaponGadget>*,std::vector<std::weak_ptr<MonsterWeaponGadget>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<MonsterWeaponGadget>*,std::vector<std::weak_ptr<MonsterWeaponGadget>> > *)&__for_end) )
  {
    weapon_gadget_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<MonsterWeaponGadget> *,std::vector<std::weak_ptr<MonsterWeaponGadget>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<MonsterWeaponGadget>*,std::vector<std::weak_ptr<MonsterWeaponGadget>> > *const)&__for_begin);
    std::weak_ptr<MonsterWeaponGadget>::lock((const std::weak_ptr<MonsterWeaponGadget> *const)(v3 + 32));
    if ( std::operator==<MonsterWeaponGadget>((const std::shared_ptr<MonsterWeaponGadget> *)(v3 + 32), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MonsterWeaponGadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(MonsterWeaponGadget &)>::operator()(p_func, v8) )
      {
        v2 = 1;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
    }
    std::shared_ptr<MonsterWeaponGadget>::~shared_ptr((std::shared_ptr<MonsterWeaponGadget> *const)(v3 + 32));
    if ( v7 && v7 != 2 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::weak_ptr<MonsterWeaponGadget> *,std::vector<std::weak_ptr<MonsterWeaponGadget>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<MonsterWeaponGadget>*,std::vector<std::weak_ptr<MonsterWeaponGadget>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_18:
  std::vector<std::weak_ptr<MonsterWeaponGadget>>::~vector((std::vector<std::weak_ptr<MonsterWeaponGadget>> *const)(v3 + 64));
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

// Line 1688: range 00000000171296B0-00000000171296D2
void __cdecl Monster::refreshByWorldLevel(Monster *const this, uint32_t world_level)
{
  Monster::refreshLevel(this, world_level);
};

// Line 1694: range 00000000171296D4-0000000017129CD3
void __fastcall Monster::refreshLevel(Monster *const this, uint32_t rely_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t ConfigLevel; // r14d
  uint32_t ReviseLevel; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  TxtConfigMgr *p_txt_config_mgr; // rdx
  bool v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  TxtConfigMgr *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  uint32_t EntityId; // eax
  float MaxHp; // xmm0_4
  FightPropComp *FightPropComp; // rax
  float CurHp; // [rsp+0h] [rbp-150h]
  unsigned int val; // [rsp+14h] [rbp-13Ch] BYREF
  unsigned int v24; // [rsp+18h] [rbp-138h] BYREF
  uint32_t level; // [rsp+1Ch] [rbp-134h]
  float hp_percent; // [rsp+20h] [rbp-130h]
  float hp; // [rsp+24h] [rbp-12Ch]
  PropValueMap *prop_map; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-110h] BYREF
  char v31[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 rely_level:1693 64 96 16 prop_notify:1716";
  *(_QWORD *)(v2 + 16) = Monster::refreshLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = rely_level;
  ConfigLevel = Creature::getConfigLevel(this);
  ReviseLevel = Creature::getReviseLevel(this);
  level = PlayerWorld::getAdjustedLevel(*(_DWORD *)(v2 + 48), ConfigLevel + ReviseLevel);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  p_txt_config_mgr = &v7->design_config.txt_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&v7->design_config.txt_config_mgr.grow_curve_config_mgr.max_monster_curve_level >> 3)
                + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->design_config.txt_config_mgr.grow_curve_config_mgr.max_monster_curve_level >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v9 = level > p_txt_config_mgr->grow_curve_config_mgr.max_monster_curve_level;
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( v9 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    v11 = &v10->design_config.txt_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&v10->design_config.txt_config_mgr.grow_curve_config_mgr.max_monster_curve_level >> 3)
                  + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->design_config.txt_config_mgr.grow_curve_config_mgr.max_monster_curve_level >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level = v11->grow_curve_config_mgr.max_monster_curve_level;
    std::shared_ptr<Config>::~shared_ptr(&v29);
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/monster/monster.cpp",
    "refreshLevel",
    1701);
  v12 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(&v30, this);
  v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" rely_lvl:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" config_lvl:");
  val = Creature::getConfigLevel(this);
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
  v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" revise_lvl:");
  v24 = Creature::getReviseLevel(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v24);
  common::milog::MiLogStream::~MiLogStream(&v30);
  hp_percent = 0.0;
  if ( Creature::getMaxHp(this) > 0.00000011920929 )
  {
    CurHp = Creature::getCurHp(this);
    hp_percent = CurHp / Creature::getMaxHp(this);
  }
  Creature::setLevel(this, level);
  if ( Creature::calcProp(this) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "refreshLevel",
      1712);
    v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v30,
            (const char (*)[33])"monster calcProp fails, monster:");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v18, this);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  proto::EntityPropNotify::EntityPropNotify((proto::EntityPropNotify *const)(v2 + 64));
  EntityId = Entity::getEntityId((const Entity *const)this);
  proto::EntityPropNotify::set_entity_id((proto::EntityPropNotify *const)(v2 + 64), EntityId);
  prop_map = proto::EntityPropNotify::mutable_prop_map((proto::EntityPropNotify *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  appendIntPropValue(prop_map, 0xFA1u, this->level_);
  Entity::notifyViewingPlayersAndSelf<proto::EntityPropNotify>(
    (Entity *const)this,
    (proto::EntityPropNotify *)(v2 + 64));
  MaxHp = Creature::getMaxHp(this);
  hp = MaxHp * hp_percent;
  if ( (float)(MaxHp * hp_percent) < 0.00000011920929 )
    hp = 1.0;
  Creature::setCurHp(this, hp, 0);
  FightPropComp = Creature::getFightPropComp(this);
  FightPropComp::notifyEntityFightProp(FightPropComp, &MonsterExcelConfigMgr::curve_effect_fight_prop_vec);
  proto::EntityPropNotify::~EntityPropNotify((proto::EntityPropNotify *const)(v2 + 64));
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1736: range 0000000017129CD4-000000001712A0BE
int32_t __cdecl Monster::refreshMpProp(Monster *const this)
{
  unsigned __int64 v1; // rax
  CombatTemplateExcelConfigMgr *p_combat_template_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rdx
  FightPropComp *FightPropComp; // r14
  float CurHp; // [rsp+4h] [rbp-ACh]
  std::allocator<data::FightPropType> __a; // [rsp+17h] [rbp-99h] BYREF
  float hp_percent; // [rsp+18h] [rbp-98h]
  float hp; // [rsp+1Ch] [rbp-94h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+20h] [rbp-90h]
  const data::EntityMultiPlayerExcelConfig *mp_config_ptr; // [rsp+28h] [rbp-88h]
  std::initializer_list<data::FightPropType> __l; // [rsp+34h] [rbp-7Ch] BYREF
  std::vector<data::FightPropType> fight_prop_vec; // [rsp+50h] [rbp-60h] BYREF
  common::milog::MiLogStream v14; // [rsp+70h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = *(_QWORD *)this->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  monster_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(Monster *const))v1)(this);
  if ( !monster_config_ptr )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->mp_prop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_config_ptr - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->mp_prop_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !monster_config_ptr->mp_prop_id )
    return -1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)((char *)&__l._M_len + 4));
  p_combat_template_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(
                                    (const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len
                                  + 4)->design_config.txt_config_mgr.combat_template_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->mp_prop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_config_ptr - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->mp_prop_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  mp_config_ptr = data::CombatTemplateExcelConfigMgrBase::findEntityMultiPlayerExcelConfig(
                    p_combat_template_config_mgr,
                    monster_config_ptr->mp_prop_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&__l._M_len + 4));
  if ( !mp_config_ptr )
    return -1;
  hp_percent = 0.0;
  if ( Creature::getMaxHp(this) > 0.00000011920929 )
  {
    CurHp = Creature::getCurHp(this);
    hp_percent = CurHp / Creature::getMaxHp(this);
  }
  if ( Creature::calcProp(this) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "refreshMpProp",
      1756);
    v4 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v14,
           (const char (*)[34])"monster calcProp fails, monster: ");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  hp = Creature::getMaxHp(this) * hp_percent;
  if ( hp < 0.00000011920929 )
    hp = 1.0;
  Creature::setCurHp(this, hp, 0);
  FightPropComp = Creature::getFightPropComp(this);
  __l._M_array = (std::initializer_list<data::FightPropType>::iterator)0x7D1000007D0LL;
  LODWORD(__l._M_len) = 1010;
  std::allocator<data::FightPropType>::allocator(&__a);
  std::vector<data::FightPropType>::vector(
    &fight_prop_vec,
    (std::initializer_list<data::FightPropType>)__PAIR128__(3LL, &__l),
    &__a);
  FightPropComp::notifyEntityFightProp(FightPropComp, &fight_prop_vec);
  std::vector<data::FightPropType>::~vector(&fight_prop_vec);
  std::allocator<data::FightPropType>::~allocator(&__a);
  return 0;
};

// Line 1775: range 000000001712A0C0-000000001712A17E
const FightPropMap *__cdecl Monster::getBaseLevelProp(const Monster *const this)
{
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  const FightPropMap *BaseLevelProp; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.monster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  BaseLevelProp = MonsterExcelConfigMgr::findBaseLevelProp(p_monster_config_mgr, this->monster_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return BaseLevelProp;
};

// Line 1781: range 000000001712A180-000000001712A53C
__int64 __fastcall Monster::findSubjectKey(const Monster *const this, uint32_t activity_drop_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // eax
  uint32_t lua_climate_area_id; // r14d
  MonsterExcelConfigMgr *p_monster_config_mgr; // rbx
  uint32_t MonsterMainTypeId; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v13; // [rsp+10h] [rbp-C0h] BYREF
  char v14[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 23 activity_drop_type:1780 64 32 21 current_drop_tag:1796";
  *(_QWORD *)(v2 + 16) = Monster::findSubjectKey;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = activity_drop_type;
  v5 = *(_DWORD *)(v2 + 48);
  if ( v5 == 6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->lua_climate_area_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->lua_climate_area_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    lua_climate_area_id = this->lua_climate_area_id_;
  }
  else
  {
    if ( v5 > 6 )
      goto LABEL_23;
    if ( v5 == 3 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v13);
      p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.monster_config_mgr;
      MonsterMainTypeId = Monster::getMonsterMainTypeId(this);
      lua_climate_area_id = MonsterExcelConfigMgr::findMonsterSubTagHash(p_monster_config_mgr, MonsterMainTypeId);
      std::shared_ptr<Config>::~shared_ptr(&v13);
      goto LABEL_24;
    }
    if ( v5 > 3 )
      goto LABEL_23;
    if ( v5 == 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      lua_climate_area_id = this->monster_id_;
    }
    else
    {
      if ( v5 != 2 )
      {
LABEL_23:
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/monster/monster.cpp",
          "findSubjectKey",
          1805);
        v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               (common::milog::MiLogStream *const)(v2 + 64),
               (const char (*)[27])"unkown activity_drop_type:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" monster:");
        common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v11, this);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        lua_climate_area_id = 0;
        goto LABEL_24;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( this->drop_id_ )
      {
        lua_climate_area_id = 0;
      }
      else
      {
        std::string::basic_string(v2 + 64);
        Monster::getCurrentMonsterDropTag(this, (std::string *)(v2 + 64));
        lua_climate_area_id = getStringHash((const std::string *)(v2 + 64));
        std::string::~string((void *)(v2 + 64));
      }
    }
  }
LABEL_24:
  result = lua_climate_area_id;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1813: range 000000001712A53E-000000001712AE8B
void __cdecl Monster::activityDropOnMonsterDie(
        Monster *const this,
        const std::vector<std::shared_ptr<Player>> *drop_player_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rdx
  unsigned int *v7; // r8
  Player *v8; // rax
  PlayerActivityComp *ActivityComp; // rdi
  common::milog::MiLogStream *v10; // rdx
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType>*,std::vector<std::pair<unsigned int,data::ItemLimitType>> >::reference v11; // rax
  std::pair<unsigned int,data::ItemLimitType> *v12; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-1B9h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_begin_0; // [rsp+28h] [rbp-1B8h] BYREF
  std::vector<std::pair<unsigned int,data::ItemLimitType>>::iterator __for_end_0; // [rsp+30h] [rbp-1B0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-1A8h]
  std::vector<std::pair<unsigned int,data::ItemLimitType>> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<0,std::pair<unsigned int,data::ItemLimitType> >::type *drop_id; // [rsp+48h] [rbp-198h]
  std::tuple_element<1,std::pair<unsigned int,data::ItemLimitType> >::type *activity_drop_item_limit_type; // [rsp+50h] [rbp-190h]
  std::pair<unsigned int,data::ItemLimitType> __for_end; // [rsp+58h] [rbp-188h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+60h] [rbp-180h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-170h] BYREF
  char v28[336]; // [rsp+90h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 14 drop_type:1836 48 4 16 subject_key:1838 64 16 19 own_player_ptr:1814 96 24 25 activity"
                        "_subject_vec:1835 160 24 21 drop_id_type_vec:1842 224 24 18 action_reason:1851";
  *(_QWORD *)(v2 + 16) = Monster::activityDropOnMonsterDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  Entity::findSceneOwnPlayer((const Entity *const)(v2 + 64));
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "activityDropOnMonsterDie",
      1817);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v27,
           (const char (*)[28])"getOwnPlayer fail. monster:");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else if ( std::vector<std::shared_ptr<Player>>::empty(drop_player_vec) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "activityDropOnMonsterDie",
      1822);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v27,
      (const char (*)[25])"drop_player_vec is empty");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    if ( !(_BYTE)`guard variable for'Monster::activityDropOnMonsterDie(std::vector<std::shared_ptr<Player>> const&)::related_activity_drop_type_vec
      && __cxa_guard_acquire(&`guard variable for'Monster::activityDropOnMonsterDie(std::vector<std::shared_ptr<Player>> const&)::related_activity_drop_type_vec) )
    {
      __l._M_array = (std::initializer_list<unsigned int>::iterator)0x200000001LL;
      __l._M_len = 0x600000003LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        (std::vector<unsigned int> *const)&Monster::activityDropOnMonsterDie(std::vector<std::shared_ptr<Player>> const&)::related_activity_drop_type_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(4LL, &__l),
        &__a);
      __cxa_guard_release(&`guard variable for'Monster::activityDropOnMonsterDie(std::vector<std::shared_ptr<Player>> const&)::related_activity_drop_type_vec);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
        (void *)&Monster::activityDropOnMonsterDie(std::vector<std::shared_ptr<Player>> const&)::related_activity_drop_type_vec,
        &_dso_handle);
      std::allocator<unsigned int>::~allocator(&__a);
    }
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 96));
    __for_range = &Monster::activityDropOnMonsterDie(std::vector<std::shared_ptr<Player>> const&)::related_activity_drop_type_vec;
    __for_end_0._M_current = (std::pair<unsigned int,data::ItemLimitType> *)std::vector<unsigned int>::begin(&Monster::activityDropOnMonsterDie(std::vector<std::shared_ptr<Player>> const&)::related_activity_drop_type_vec)._M_current;
    __for_end = (std::pair<unsigned int,data::ItemLimitType>)std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end_0,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v6;
      *(_DWORD *)(v2 + 48) = Monster::findSubjectKey(this, *(_DWORD *)(v2 + 32));
      std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int &,unsigned int &>(
        (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 96),
        (unsigned int *)(v2 + 32),
        (unsigned int *)(v2 + 48),
        (unsigned int *)(v2 + 32),
        v7);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
    }
    std::vector<std::pair<unsigned int,data::ItemLimitType>>::vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v2 + 160));
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    ActivityComp = Player::getActivityComp(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      ActivityComp = (PlayerActivityComp *)&this->level_;
      __asan_report_load4();
    }
    if ( PlayerActivityComp::findActivityDrops(
           ActivityComp,
           (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v2 + 160),
           (std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 96),
           this->level_) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "activityDropOnMonsterDie",
        1845);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v27,
              (const char (*)[34])"findActivityDrops fails, monster:");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v10, this);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      __for_range_0 = (std::vector<std::pair<unsigned int,data::ItemLimitType>> *)(v2 + 160);
      __for_begin_0._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::begin((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v2 + 160))._M_current;
      __for_end_0._M_current = std::vector<std::pair<unsigned int,data::ItemLimitType>>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        v11 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator*(&__for_begin_0);
        v12 = v11;
        if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v11, 8LL);
        }
        __for_end = *v12;
        drop_id = std::get<0ul,unsigned int,data::ItemLimitType>(&__for_end);
        activity_drop_item_limit_type = std::get<1ul,unsigned int,data::ItemLimitType>(&__for_end);
        if ( *(_BYTE *)(((unsigned __int64)activity_drop_item_limit_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)activity_drop_item_limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_drop_item_limit_type >> 3)
                                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ActionReason::ActionReason(
          (ActionReason *const)(v2 + 224),
          ACTION_REASON_ACTIVITY_MONSTER_DROP,
          *activity_drop_item_limit_type);
        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *drop_id
          && (unsigned int)Entity::dropItemsForPlayers(
                             (Entity *const)this,
                             *drop_id,
                             1u,
                             (const ActionReason *)(v2 + 224),
                             drop_player_vec) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/monster/monster.cpp",
            "activityDropOnMonsterDie",
            1854);
          v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v27,
                  (const char (*)[36])"dropItemsForPlayers fails, drop_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, drop_id);
          v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" monster:");
          common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v16, this);
          common::milog::MiLogStream::~MiLogStream(&v27);
        }
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,data::ItemLimitType> *,std::vector<std::pair<unsigned int,data::ItemLimitType>>>::operator++(&__for_begin_0);
      }
    }
    std::vector<std::pair<unsigned int,data::ItemLimitType>>::~vector((std::vector<std::pair<unsigned int,data::ItemLimitType>> *const)(v2 + 160));
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1861: range 000000001712AE8C-000000001712B364
const std::string *__cdecl Monster::getMonsterCombatTransaction[abi:cxx11](const Monster *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rdx
  const std::string *v5; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  GameserverService *v8; // rax
  unsigned int GameThreadLocal; // eax
  common::milog::MiLogStream *v10; // rax
  int v11; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // rax
  PlayerAvatarComp *AvatarComp; // rax
  const std::string *result; // rax
  uint32_t owner_uid; // [rsp+14h] [rbp-10Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 15 player_uid:1871 64 16 14 scene_ptr:1863 96 16 15 player_ptr:1870 128 16 19 cur_player_ptr:1873";
  *(_QWORD *)(v1 + 16) = Monster::getMonsterCombatTransaction[abi:cxx11];
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  if ( !(_BYTE)`guard variable for'Monster::getMonsterCombatTransaction[abi:cxx11](void)::empty_combat_transaction
    && __cxa_guard_acquire(&`guard variable for'Monster::getMonsterCombatTransaction[abi:cxx11](void)::empty_combat_transaction) )
  {
    std::string::basic_string(&Monster::getMonsterCombatTransaction[abi:cxx11](void)const::empty_combat_transaction);
    __cxa_guard_release(&`guard variable for'Monster::getMonsterCombatTransaction[abi:cxx11](void)::empty_combat_transaction);
    __cxa_atexit(
      (void (__fastcall *)(void *))&std::string::~string,
      (void *)&Monster::getMonsterCombatTransaction[abi:cxx11](void)const::empty_combat_transaction,
      &_dso_handle);
  }
  Entity::getScene((const Entity *const)(v1 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "getMonsterCombatTransaction",
      1866);
    v4 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v20, (const char (*)[15])"getScene fails");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = &Monster::getMonsterCombatTransaction[abi:cxx11](void)const::empty_combat_transaction;
  }
  else
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    owner_uid = Scene::getOwnerUid(v6);
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v1 + 96), 0LL);
    __for_range = &this->alert_player_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->alert_player_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->alert_player_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v7;
      v8 = ServiceBox::findService<GameserverService>();
      GameThreadLocal = (unsigned int)GameserverService::getGameThreadLocal(v8);
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v1 + 128), GameThreadLocal + 16);
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/monster/monster.cpp",
          "getMonsterCombatTransaction",
          1876);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v20,
                (const char (*)[36])"cur_player_ptr is null, player_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
        v11 = 0;
      }
      else
      {
        std::shared_ptr<Player>::operator=(
          (std::shared_ptr<Player> *const)(v1 + 96),
          (const std::shared_ptr<Player> *)(v1 + 128));
        v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        v11 = owner_uid == Player::getUid(v12) ? 1 : 2;
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 128));
      if ( v11 )
      {
        if ( v11 != 2 )
          break;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 96)) )
    {
      v5 = &Monster::getMonsterCombatTransaction[abi:cxx11](void)const::empty_combat_transaction;
    }
    else
    {
      v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      AvatarComp = Player::getAvatarComp(v13);
      v5 = PlayerAvatarComp::getCombatTransaction[abi:cxx11](AvatarComp);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  result = v5;
  if ( v21 == (char *)v1 )
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
  return result;
};

// Line 1893: range 000000001712B366-000000001712B85B
void __cdecl Monster::logMonsterAIHashChech(Monster *const this, int32_t server_hash, int32_t client_hash)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  Player *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+10h] [rbp-140h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-130h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-110h] BYREF
  char v19[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 16 14 scene_ptr:1894 64 16 19 own_player_ptr:1901 96 16 20 ai_hash_log_ptr:1910 128 32 13 trans_no:1902";
  *(_QWORD *)(v3 + 16) = Monster::logMonsterAIHashChech;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "logMonsterAIHashChech",
      1897);
    v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v18, (const char (*)[15])"getScene fails");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v6, this);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Scene::getOwnPlayer((const Scene *const)(v3 + 64));
    std::string::basic_string(v3 + 128);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
    {
      v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      BasicComp = Player::getBasicComp(v7);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v18, BasicComp);
      std::string::operator=(v3 + 128, &v18);
      std::string::~string(&v18);
    }
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
    {
      common::tools::perf::make_shared<proto_log::AntiCheatBodyAIHash>();
      v9 = std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->monster_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::AntiCheatBodyAIHash::set_monster_id(v9, this->monster_id_);
      v10 = std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::AntiCheatBodyAIHash::set_server_hash_value(v10, server_hash);
      v11 = std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::AntiCheatBodyAIHash::set_client_hash_value(v11, client_hash);
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/monster/monster.cpp",
        "logMonsterAIHashChech",
        1915);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"[AntiCheat] ");
      v13 = std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyAIHash,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v18, v13);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)&v18);
      std::string::~string(&v18);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyAIHash,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::AntiCheatBodyAIHash> *)(v3 + 96));
      Player::printAntiCheatLog(v14, ANTI_CHEAT_ACTION_AI_HASH, &p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<proto_log::AntiCheatBodyAIHash>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyAIHash> *const)(v3 + 96));
    }
    std::string::~string((void *)(v3 + 128));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1921: range 000000001712B85C-000000001712B8C4
void __cdecl Monster::cacheAttackTargetInfo(Monster *const this, const proto::EvtSetAttackTargetInfo *info)
{
  uint32_t v2; // ecx

  v2 = proto::EvtSetAttackTargetInfo::attack_target_id(info);
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_target_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_target_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attack_target_id_);
  }
  this->attack_target_id_ = v2;
};

// Line 1926: range 000000001712B8C6-000000001712BB4D
void __cdecl Monster::logAbnormalDie(Monster *const this, Player *player, proto::ChangHpReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  const std::string *v11; // rax
  google::protobuf::uint32 scene_id; // [rsp+24h] [rbp-ACh]
  proto_log::EntityLog *monster_log; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-A0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 scene_ptr:1927 64 16 24 monster_die_log_ptr:1933";
  *(_QWORD *)(v3 + 16) = Monster::logAbnormalDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  Entity::getScene((const Entity *const)(v3 + 32));
  scene_id = 0;
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    scene_id = Scene::getSceneId(v6);
  }
  common::tools::perf::make_shared<proto_log::AntiCheatBodyEliteMonsterAbnormalDie>();
  v7 = std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::AntiCheatBodyEliteMonsterAbnormalDie::set_scene_id(v7, scene_id);
  v8 = std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  monster_log = proto_log::AntiCheatBodyEliteMonsterAbnormalDie::mutable_monster_log(v8);
  Entity::getEntityLog((Entity *const)this, monster_log);
  v9 = std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::AntiCheatBodyEliteMonsterAbnormalDie::set_reason(v9, reason);
  v10 = std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  v11 = Monster::getMonsterCombatTransaction[abi:cxx11](this);
  proto_log::AntiCheatBodyEliteMonsterAbnormalDie::set_combat_transaction(v10, v11);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyEliteMonsterAbnormalDie,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::AntiCheatBodyEliteMonsterAbnormalDie> *)(v3 + 64));
  Player::printAntiCheatLog(player, ANTI_CHEAT_ACTION_ELITE_MONSTER_ABNORMAL_DIE, &p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<proto_log::AntiCheatBodyEliteMonsterAbnormalDie>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyEliteMonsterAbnormalDie> *const)(v3 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  if ( v16 == (char *)v3 )
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

// Line 1943: range 000000001712BB4E-000000001712BD73
int32_t __cdecl Monster::setMotionInfo(
        Monster *const this,
        const proto::MotionInfo *motion_info,
        MotionContext *motion_context)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const proto::Vector *v6; // rax
  const Vector3 *Position; // rax
  common::milog::MiLogStream *v8; // r14
  const Vector3 *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 8 pos:1945";
  *(_QWORD *)(v3 + 16) = Monster::setMotionInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  v6 = proto::MotionInfo::pos(motion_info);
  Vector3::Vector3((Vector3 *const)(v3 + 32), v6);
  Position = Entity::getPosition((const Entity *const)this);
  if ( getDistance((const Vector3 *)(v3 + 32), Position) > 70.0 )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/monster/monster.cpp",
      "setMotionInfo",
      1948);
    v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"pos:");
    v9 = Entity::getPosition((const Entity *const)this);
    v10 = operator<<(v8, v9);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v10, (const char (*)[5])off_26016EA0);
    v12 = operator<<(v11, (const Vector3 *)(v3 + 32));
    v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" monster:");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v13, this);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  result = Entity::setMotionInfo((Entity *const)this, motion_info, motion_context);
  if ( v17 == (char *)v3 )
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

// Line 1957: range 000000001712BD74-000000001712C3EE
int32_t __cdecl Monster::setupMonsterRoute(Monster *const this, PlatformRouteParam *param, bool is_notify_client)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlatformRoute *v7; // rdx
  common::milog::MiLogStream *v8; // rdx
  std::shared_ptr<PlatformRoute> *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r15
  proto::MonsterRoute *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // r15d
  int32_t result; // eax
  __int64 v17; // [rsp+28h] [rbp-E8h]
  float v18; // [rsp+30h] [rbp-E0h]
  Vector3 v19; // [rsp+34h] [rbp-DCh]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 route_ptr:1960 64 32 11 notify:1975";
  *(_QWORD *)(v4 + 16) = Monster::setupMonsterRoute;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  if ( (((unsigned __int8)this + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[356] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[356] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[367] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 111) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[367] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->baseclass_0[356], 12LL);
  }
  v17 = *(_QWORD *)&this->baseclass_0[356];
  v18 = *(float *)&this->baseclass_0[364];
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[380] >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 121) & 7) >= *(_BYTE *)(((unsigned __int64)&this->baseclass_0[391] >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->baseclass_0[380], 12LL);
  }
  *(_QWORD *)&v19.x = *(_QWORD *)&this->baseclass_0[380];
  v19.z = *(float *)&this->baseclass_0[388];
  if ( *(char *)(((unsigned __int64)&param->current_transform >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&param->current_transform.position.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 43) & 7) >= *(_BYTE *)((((unsigned __int64)&param->current_transform.position.z + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&param->current_transform, 12LL);
  }
  *(_QWORD *)&param->current_transform.position.x = v17;
  param->current_transform.position.z = v18;
  if ( (((unsigned __int8)param + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&param->current_transform.rotation >> 3)
                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&param->current_transform.rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&param->current_transform.rotation.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&param->current_transform.rotation.z + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&param->current_transform.rotation, 12LL);
  }
  param->current_transform.rotation = v19;
  common::tools::perf::make_shared<PlatformRoute>();
  v7 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( PlatformRoute::initByPointArray(v7, param) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "setupMonsterRoute",
      1963);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v20,
           (const char (*)[32])"initByPointArray fail, monster:");
    common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v20);
    v3 = -1;
  }
  else
  {
    v9 = std::move<std::shared_ptr<PlatformRoute> &>((std::shared_ptr<PlatformRoute> *)(v4 + 32));
    std::shared_ptr<PlatformRoute>::operator=(&this->route_ptr_, v9);
    if ( std::operator==<PlatformRoute>(0LL, &this->route_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/monster/monster.cpp",
        "setupMonsterRoute",
        1969);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v20,
              (const char (*)[24])"route is null, monster:");
      common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v10, this);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v3 = -1;
    }
    else
    {
      if ( !is_notify_client )
        goto LABEL_23;
      proto::MonsterPointArrayRouteUpdateNotify::MonsterPointArrayRouteUpdateNotify((proto::MonsterPointArrayRouteUpdateNotify *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[256] >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::MonsterPointArrayRouteUpdateNotify::set_entity_id(
        (proto::MonsterPointArrayRouteUpdateNotify *const)(v4 + 64),
        *(_DWORD *)&this->baseclass_0[256]);
      v11 = std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlatformRoute,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->route_ptr_);
      v12 = proto::MonsterPointArrayRouteUpdateNotify::mutable_monster_route((proto::MonsterPointArrayRouteUpdateNotify *const)(v4 + 64));
      PlatformRoute::toClient(v11, v12);
      if ( Entity::notifyViewingPlayers<proto::MonsterPointArrayRouteUpdateNotify>(
             (Entity *const)this,
             (proto::MonsterPointArrayRouteUpdateNotify *)(v4 + 64),
             1) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "setupMonsterRoute",
          1980);
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v20,
                (const char (*)[36])"notifyViewingPlayers fail, monster:");
        common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v13, this);
        common::milog::MiLogStream::~MiLogStream(&v20);
        v3 = -1;
        v14 = 0;
      }
      else
      {
        v14 = 1;
      }
      proto::MonsterPointArrayRouteUpdateNotify::~MonsterPointArrayRouteUpdateNotify((proto::MonsterPointArrayRouteUpdateNotify *const)(v4 + 64));
      if ( v14 == 1 )
LABEL_23:
        v3 = 0;
    }
  }
  std::shared_ptr<PlatformRoute>::~shared_ptr((std::shared_ptr<PlatformRoute> *const)(v4 + 32));
  result = v3;
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1989: range 000000001712C3F0-000000001712C402
int32_t __cdecl Monster::onAfterLeaveScene(Monster *const this, const VisionContext *context)
{
  return 0;
};

// Line 1999: range 000000001712C404-000000001712C6A1
int32_t __cdecl Monster::doHurt(Monster *const this, Player *player, Creature *attacker, HurtContext *context)
{
  common::milog::MiLogStream *v4; // rbx
  void (__fastcall **v5)(std::string *, Monster *const); // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  const EcsBase<Monster,MonsterCompBase,4>::CompBasePair *v11; // [rsp+28h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *monster_comp_ptr; // [rsp+38h] [rbp-78h]
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_begin; // [rsp+40h] [rbp-70h] BYREF
  EcsBase<Monster,MonsterCompBase,4>::Iterator __for_end; // [rsp+50h] [rbp-60h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-50h] BYREF
  std::string val; // [rsp+80h] [rbp-30h] BYREF

  if ( Creature::doHurt(this, player, attacker, context) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/monster/monster.cpp",
      "doHurt",
      2002);
    v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v15,
           (const char (*)[25])"creature::doHurt failed ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = *(void (__fastcall ***)(std::string *, Monster *const))this->baseclass_0;
    if ( *(_BYTE *)((*(_QWORD *)this->baseclass_0 >> 3) + 0x7FFF8000LL) )
      v5 = (void (__fastcall **)(std::string *, Monster *const))__asan_report_load8();
    (*v5)(&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    return -1;
  }
  else
  {
    EcsBase<Monster,MonsterCompBase,4u>::begin((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_begin);
    EcsBase<Monster,MonsterCompBase,4u>::end((const EcsBase<Monster,MonsterCompBase,4> *const)&__for_end);
    while ( EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v11 = EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator*(&__for_begin);
      std::get<0ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v11);
      monster_comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<MonsterCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<MonsterCompBase>>(v11);
      if ( std::operator!=<MonsterCompBase>(0LL, monster_comp_ptr) )
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonsterCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_comp_ptr);
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        v8 = *(_QWORD *)v7 + 40LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, Creature *, HurtContext *))v8)(v7, attacker, context);
      }
      EcsBase<Monster,MonsterCompBase,4u>::Iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 2016: range 000000001712C6A2-000000001712CD07
void __cdecl Monster::recordHurtByPlayerAttack(Monster *const this, ChangeHpContext *context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  uint32_t v6; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __m128i v8; // xmm0
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int *v10; // rdx
  __m128i v11; // xmm0
  int v12; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::map<unsigned int,Monster::PlayerHurtData>::mapped_type *v14; // rax
  int *v15; // rdx
  Scene *v16; // rax
  uint32_t SceneTimeSeconds; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::map<unsigned int,Monster::PlayerHurtData>::mapped_type *v19; // rdx
  uint32_t *p_last_hurt_time; // rax
  std::map<unsigned int,Monster::PlayerHurtData>::key_type Uid; // [rsp+24h] [rbp-ECh] BYREF
  std::map<unsigned int,Monster::PlayerHurtData>::key_type __k; // [rsp+28h] [rbp-E8h] BYREF
  float drop_hp; // [rsp+2Ch] [rbp-E4h]
  std::shared_ptr<Player> __a; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 17 attacker_ptr:2025 64 16 15 player_ptr:2030 96 16 14 scene_ptr:2036";
  *(_QWORD *)(v2 + 16) = Monster::recordHurtByPlayerAttack;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( Creature::getLifeState(this) != LIFE_DEAD )
  {
    if ( *(_BYTE *)(((unsigned __int64)&context->delta_hp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&context->delta_hp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( context->delta_hp < 0.0 )
    {
      std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32), &context->attacker_ptr);
      if ( !std::operator==<Creature>((const std::shared_ptr<Creature> *)(v2 + 32), 0LL) )
      {
        std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        Creature::findOriginalPlayer((Creature *const)(v2 + 64));
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/monster/monster.cpp",
            "recordHurtByPlayerAttack",
            2033);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v25,
            (const char (*)[30])"avatar owner player not found");
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
        else
        {
          Entity::getScene((const Entity *const)(v2 + 96));
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/monster/monster.cpp",
              "recordHurtByPlayerAttack",
              2039);
            v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                   &v25,
                   (const char (*)[15])"getScene fails");
            common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v5, this);
            common::milog::MiLogStream::~MiLogStream(&v25);
          }
          else
          {
            v6 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v7 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            Player::getUid(v7);
            Scene::findPlayer((const Scene *const)&__a, v6);
            LOBYTE(v6) = std::operator==<Player>(&__a, 0LL);
            std::shared_ptr<Player>::~shared_ptr(&__a);
            if ( (_BYTE)v6 )
            {
              common::milog::MiLogStream::create(
                &v25,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/monster/monster.cpp",
                "recordHurtByPlayerAttack",
                2045);
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v25,
                (const char (*)[29])"attacker player not no scene");
              common::milog::MiLogStream::~MiLogStream(&v25);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&context->delta_hp >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&context->delta_hp >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              v8 = _mm_cvtsi32_si128(LODWORD(context->delta_hp));
              *(float *)v8.m128i_i32 = std::abs(*(float *)v8.m128i_i32);
              LODWORD(drop_hp) = _mm_cvtsi128_si32(v8);
              v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              __k = Player::getUid(v9);
              v10 = (unsigned int *)std::map<unsigned int,Monster::PlayerHurtData>::operator[](
                                      &this->player_hurt_map_,
                                      &__k);
              if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v11 = _mm_cvtsi32_si128(*v10);
              *(float *)v11.m128i_i32 = SAFE_ADD<float,float>(*(float *)v11.m128i_i32, drop_hp);
              v12 = _mm_cvtsi128_si32(v11);
              v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              Uid = Player::getUid(v13);
              v14 = std::map<unsigned int,Monster::PlayerHurtData>::operator[](&this->player_hurt_map_, &Uid);
              v15 = (int *)v14;
              if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v14);
              }
              *v15 = v12;
              v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              SceneTimeSeconds = Scene::getSceneTimeSeconds(v16);
              v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              __k = Player::getUid(v18);
              v19 = std::map<unsigned int,Monster::PlayerHurtData>::operator[](&this->player_hurt_map_, &__k);
              p_last_hurt_time = &v19->last_hurt_time;
              if ( *(_BYTE *)(((unsigned __int64)p_last_hurt_time >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_last_hurt_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_last_hurt_time >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_store4(p_last_hurt_time);
              }
              v19->last_hurt_time = SceneTimeSeconds;
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
      }
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 32));
    }
  }
  if ( v26 == (char *)v2 )
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

// Line 2054: range 000000001712CD08-000000001712CD86
uint32_t __cdecl Monster::getMonsterMainTypeId(uint32_t monster_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t MonsterTypeId; // ebx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4);
  MonsterTypeId = MonsterExcelConfigMgr::getMonsterTypeId(
                    &v1->design_config.txt_config_mgr.monster_config_mgr,
                    monster_id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return MonsterTypeId;
};

// Line 2059: range 000000001712CD88-000000001712D30D
void __cdecl Monster::getOverloadMonsterDropTag(const Monster *const this, std::string *overload_drop_tag)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const MonsterExcelConfigMgr *v5; // rdx
  const MonsterExcelConfigMgr *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<data::PolyMonsterDropConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<data::PolyMonsterDropConfig>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  const MonsterExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-C0h]
  const data::MonsterRelationshipExcelConfig *relationship_config_ptr; // [rsp+28h] [rbp-B8h]
  const data::MonsterRelOverloadExcelConfig *overload_config_ptr; // [rsp+30h] [rbp-B0h]
  const std::string *key; // [rsp+38h] [rbp-A8h]
  const std::vector<data::PolyMonsterDropConfig> *__for_range; // [rsp+40h] [rbp-A0h]
  const data::PolyMonsterDropConfig *poly_drop_config; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-80h] BYREF
  char v22[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 sgv_value:2088";
  *(_QWORD *)(v2 + 16) = Monster::getOverloadMonsterDropTag;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.monster_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  v5 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  relationship_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig(
                              v5,
                              this->monster_main_type_id_);
  if ( !relationship_config_ptr )
    goto LABEL_10;
  if ( *(char *)(((unsigned __int64)&relationship_config_ptr->is_poly_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&relationship_config_ptr->is_poly_drop);
  if ( relationship_config_ptr->is_poly_drop )
  {
    std::string::operator=(overload_drop_tag, &relationship_config_ptr->tag_str);
    v6 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    overload_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterRelOverloadExcelConfig(
                            v6,
                            this->monster_main_type_id_);
    if ( overload_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&overload_config_ptr->listen_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)overload_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&overload_config_ptr->listen_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( overload_config_ptr->listen_type == MONSTER_POLY_DROP_GV )
      {
        key = &overload_config_ptr->listen_param_str;
        if ( AbilityComp::hasDynamicValue(&this->ability_comp_, &overload_config_ptr->listen_param_str) )
        {
          *(_DWORD *)(v2 + 32) = (int)AbilityComp::getDynamicValue<float>(&this->ability_comp_, key);
          __for_range = &overload_config_ptr->poly_monster_drop_config_list;
          __for_begin._M_current = std::vector<data::PolyMonsterDropConfig>::begin(&overload_config_ptr->poly_monster_drop_config_list)._M_current;
          __for_end._M_current = std::vector<data::PolyMonsterDropConfig>::end(&overload_config_ptr->poly_monster_drop_config_list)._M_current;
          while ( __gnu_cxx::operator!=<data::PolyMonsterDropConfig const*,std::vector<data::PolyMonsterDropConfig>>(
                    &__for_begin,
                    &__for_end) )
          {
            poly_drop_config = __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig const*,std::vector<data::PolyMonsterDropConfig>>::operator*(&__for_begin);
            if ( common::tools::MiscUtils::isContains<unsigned int>(
                   &poly_drop_config->param_list,
                   (const unsigned int *)(v2 + 32)) )
            {
              std::string::operator=(overload_drop_tag, &poly_drop_config->drop_tag_str);
              goto LABEL_26;
            }
            __gnu_cxx::__normal_iterator<data::PolyMonsterDropConfig const*,std::vector<data::PolyMonsterDropConfig>>::operator++(&__for_begin);
          }
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/monster/monster.cpp",
            "getOverloadMonsterDropTag",
            2098);
          v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                 &v21,
                 (const char (*)[56])"monster GV cannot match any overload drop, monster_id: ");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->monster_id_);
          v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])", sgv_value: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/monster/monster.cpp",
          "getOverloadMonsterDropTag",
          2103);
        v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v21,
                (const char (*)[36])"invalid overload drop listen type: ");
        common::milog::MiLogStream::operator<<<data::MonsterPolyDropListenType,(data::MonsterPolyDropListenType*)0>(
          v11,
          &overload_config_ptr->listen_type);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/monster/monster.cpp",
        "getOverloadMonsterDropTag",
        2074);
      v7 = common::milog::MiLogStream::operator<<<char [91],(char *[91])0>(
             &v21,
             (const char (*)[91])"monster is_poly_drop is true but no corresponding overload_config, monster_main_type_id_: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->monster_main_type_id_);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
  }
  else
  {
LABEL_10:
    std::string::clear(overload_drop_tag);
  }
LABEL_26:
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2110: range 000000001712D30E-000000001712D588
void __cdecl Monster::getCurrentMonsterDropTag(const Monster *const this, std::string *current_drop_tag)
{
  char v2; // al
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rdx
  bool is_poly_drop; // [rsp+17h] [rbp-59h]
  const MonsterScriptConfig *monster_script_config_ptr; // [rsp+18h] [rbp-58h]
  const data::MonsterRelationshipExcelConfig *relationship_config_ptr; // [rsp+20h] [rbp-50h]
  const MonsterScriptConfig *monster_script_config_ptr_0; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( (unsigned __int8)std::string::empty(&this->drop_tag_)
    && ((monster_script_config_ptr = Monster::getMonsterScriptConfig(this)) != 0LL
     && !(unsigned __int8)std::string::empty(&monster_script_config_ptr->drop_tag)
      ? (v2 = 0)
      : (v2 = 1),
        v2) )
  {
    std::string::clear(current_drop_tag);
  }
  else
  {
    is_poly_drop = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.monster_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->monster_main_type_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    relationship_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterRelationshipExcelConfig(
                                p_monster_config_mgr,
                                this->monster_main_type_id_);
    std::shared_ptr<Config>::~shared_ptr(&v9);
    if ( relationship_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&relationship_config_ptr->is_poly_drop >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&relationship_config_ptr->is_poly_drop);
      is_poly_drop = relationship_config_ptr->is_poly_drop;
    }
    if ( is_poly_drop )
    {
      Monster::getOverloadMonsterDropTag(this, current_drop_tag);
    }
    else if ( (unsigned __int8)std::string::empty(&this->drop_tag_) != 1 )
    {
      std::string::operator=(current_drop_tag, &this->drop_tag_);
    }
    else
    {
      monster_script_config_ptr_0 = Monster::getMonsterScriptConfig(this);
      if ( monster_script_config_ptr_0 )
      {
        std::string::operator=(current_drop_tag, &monster_script_config_ptr_0->drop_tag);
      }
      else
      {
        std::string::clear(current_drop_tag);
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/monster/monster.cpp",
          "getCurrentMonsterDropTag",
          2146);
        v4 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v10,
               (const char (*)[38])"getMonsterScriptConfig fail, monster:");
        common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v4, this);
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
    }
  }
};

// Line 2156: range 000000001712D58A-000000001712D60E
bool __cdecl Monster::isValidInitialHpPercentage(const Monster *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->initial_hp_percentage_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return this->initial_hp_percentage_ > 0.00000011920929 && this->initial_hp_percentage_ < 100.0;
};
