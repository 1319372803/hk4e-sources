// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/entity/entity_mgr.cpp

// Line 70: range 000000001660E346-000000001660E3B1
bool __cdecl EntityUtils::isGadget(Entity *entity)
{
  unsigned __int64 v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  return (*(unsigned int (__fastcall **)(Entity *))v1)(entity) == 4;
};

// Line 75: range 000000001660E3B2-000000001660E552
bool __cdecl EntityUtils::isGather(Entity *entity)
{
  unsigned __int64 p_M_end_of_storage; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4; // r15
  bool v5; // r14
  int v6; // r14d
  bool result; // al
  bool v8; // [rsp+17h] [rbp-89h]
  EcsBase<Gadget,GadgetCompBase,28> v9; // [rsp+20h] [rbp-80h] BYREF

  p_M_end_of_storage = (unsigned __int64)&v9.comp_vec_._M_impl._M_end_of_storage;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_M_end_of_storage = v2;
  }
  *(_QWORD *)p_M_end_of_storage = 1102416563LL;
  *(_QWORD *)(p_M_end_of_storage + 8) = "1 32 16 13 gadget_ptr:78";
  *(_QWORD *)(p_M_end_of_storage + 16) = EntityUtils::isGather;
  v3 = p_M_end_of_storage >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !EntityUtils::isGadget(entity) )
    goto LABEL_15;
  toPtr<Gadget,Entity>((Entity *)(p_M_end_of_storage + 32));
  v4 = 0;
  v5 = 0;
  if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(p_M_end_of_storage + 32), 0LL) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<GatherComp>(&v9);
    v4 = 1;
    if ( std::operator!=<GatherComp>((const std::shared_ptr<GatherComp> *)&v9, 0LL) )
      v5 = 1;
  }
  if ( v4 )
    std::shared_ptr<GatherComp>::~shared_ptr((std::shared_ptr<GatherComp> *const)&v9);
  if ( v5 )
  {
    v8 = 1;
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(p_M_end_of_storage + 32));
  if ( v6 == 1 )
LABEL_15:
    v8 = 0;
  result = v8;
  if ( &v9.comp_vec_._M_impl._M_end_of_storage == (std::_Vector_base<std::pair<unsigned int,std::shared_ptr<GadgetCompBase> >>::pointer *)p_M_end_of_storage )
  {
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_end_of_storage = 1172321806LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 88: range 000000001660E554-000000001660E762
bool __cdecl EntityUtils::isChest(Entity *entity)
{
  unsigned __int64 p_M_finish; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  char v4; // r15
  bool v5; // r14
  int v6; // r14d
  bool result; // al
  bool v8; // [rsp+16h] [rbp-9Ah]
  char v9; // [rsp+17h] [rbp-99h]
  EcsBase<Gadget,GadgetCompBase,28> v10; // [rsp+20h] [rbp-90h] BYREF

  p_M_finish = (unsigned __int64)&v10.type_vec_._M_impl._M_finish;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_M_finish = v2;
  }
  *(_QWORD *)p_M_finish = 1102416563LL;
  *(_QWORD *)(p_M_finish + 8) = "1 32 16 13 gadget_ptr:91";
  *(_QWORD *)(p_M_finish + 16) = EntityUtils::isChest;
  v3 = p_M_finish >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( !EntityUtils::isGadget(entity) )
    goto LABEL_18;
  toPtr<Gadget,Entity>((Entity *)(p_M_finish + 32));
  v4 = 0;
  v9 = 0;
  v5 = 0;
  if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(p_M_finish + 32), 0LL) )
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<ChestComp>(&v10);
    v4 = 1;
    if ( std::operator!=<ChestComp>((const std::shared_ptr<ChestComp> *)&v10, 0LL)
      || (std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_finish + 32)),
          EcsBase<Gadget,GadgetCompBase,28u>::findComp<BossChestComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)&v10.comp_vec_._M_impl._M_end_of_storage),
          v9 = 1,
          std::operator!=<BossChestComp>(
            (const std::shared_ptr<BossChestComp> *)&v10.comp_vec_._M_impl._M_end_of_storage,
            0LL)) )
    {
      v5 = 1;
    }
  }
  if ( v9 )
    std::shared_ptr<BossChestComp>::~shared_ptr((std::shared_ptr<BossChestComp> *const)&v10.comp_vec_._M_impl._M_end_of_storage);
  if ( v4 )
    std::shared_ptr<ChestComp>::~shared_ptr((std::shared_ptr<ChestComp> *const)&v10);
  if ( v5 )
  {
    v8 = 1;
    v6 = 0;
  }
  else
  {
    v6 = 1;
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(p_M_finish + 32));
  if ( v6 == 1 )
LABEL_18:
    v8 = 0;
  result = v8;
  if ( &v10.type_vec_._M_impl._M_finish == (std::_Vector_base<unsigned int>::pointer *)p_M_finish )
  {
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_finish = 1172321806LL;
    *(_QWORD *)((p_M_finish >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 102: range 000000001660E764-000000001660F111
void __cdecl MonsterParam::fromConfig(MonsterParam *const this, const MonsterScriptConfig *monster_script_config)
{
  uint32_t config_id; // ecx
  uint32_t monster_id; // ecx
  uint32_t level; // ecx
  uint32_t pose_id; // ecx
  uint32_t ai_config_id; // ecx
  uint32_t title_id; // ecx
  uint32_t special_name_id; // ecx
  bool is_elite; // cl
  uint32_t climate_area_id; // ecx
  uint32_t drop_id; // ecx
  bool is_ban_txt_drop; // cl
  uint32_t room_id; // ecx
  uint32_t guest_ban_drop; // ecx
  uint32_t sight_group_index; // ecx
  bool is_light_config; // cl

  if ( *(_BYTE *)(((unsigned __int64)monster_script_config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)monster_script_config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(monster_script_config);
  }
  config_id = monster_script_config->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id);
  }
  this->config_id = config_id;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_script_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->monster_id >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&monster_script_config->monster_id);
  }
  monster_id = monster_script_config->monster_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->monster_id = monster_id;
  if ( (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&monster_script_config->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&monster_script_config->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)monster_script_config + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&monster_script_config->pos.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(&monster_script_config->pos, 12LL);
  }
  this->pos = monster_script_config->pos;
  if ( *(char *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( (((unsigned __int8)monster_script_config + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->rot >> 3)
                                                                       + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&monster_script_config->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&monster_script_config->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)monster_script_config + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&monster_script_config->rot.z
                                                                         + 3) >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load_n(&monster_script_config->rot, 12LL);
  }
  this->rot = monster_script_config->rot;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_script_config->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_script_config->level);
  }
  level = monster_script_config->level;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->config_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->config_level);
  }
  this->config_level = level;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->pose_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_script_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->pose_id >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&monster_script_config->pose_id);
  }
  pose_id = monster_script_config->pose_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_pose >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_pose);
  }
  this->init_pose = pose_id;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_script_config - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->ai_config_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&monster_script_config->ai_config_id);
  }
  ai_config_id = monster_script_config->ai_config_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ai_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ai_config_id);
  }
  this->ai_config_id = ai_config_id;
  std::set<unsigned int>::operator=(&this->affix_set, &monster_script_config->affix_set);
  std::map<std::string,float>::operator=(&this->global_value_map, &monster_script_config->server_global_value_map);
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_script_config->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_script_config->title_id);
  }
  title_id = monster_script_config->title_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->title_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->title_id);
  }
  this->title_id = title_id;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_script_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->special_name_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&monster_script_config->special_name_id);
  }
  special_name_id = monster_script_config->special_name_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->special_name_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->special_name_id);
  }
  this->special_name_id = special_name_id;
  if ( *(char *)(((unsigned __int64)&monster_script_config->is_elite >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&monster_script_config->is_elite);
  is_elite = monster_script_config->is_elite;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_elite >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_elite);
  }
  this->is_elite = is_elite;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->climate_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_script_config->climate_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_script_config->climate_area_id);
  }
  climate_area_id = monster_script_config->climate_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->climate_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->climate_area_id);
  }
  this->climate_area_id = climate_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_script_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->drop_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&monster_script_config->drop_id);
  }
  drop_id = monster_script_config->drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_id);
  }
  this->drop_id = drop_id;
  if ( *(char *)(((unsigned __int64)&monster_script_config->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&monster_script_config->is_ban_txt_drop);
  is_ban_txt_drop = monster_script_config->is_ban_txt_drop;
  if ( *(char *)(((unsigned __int64)&this->is_ban_txt_drop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ban_txt_drop);
  this->is_ban_txt_drop = is_ban_txt_drop;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_script_config->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_script_config->room_id);
  }
  room_id = monster_script_config->room_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_id);
  }
  this->room_id = room_id;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_script_config->guest_ban_drop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_script_config->guest_ban_drop);
  }
  guest_ban_drop = monster_script_config->guest_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guest_ban_drop >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guest_ban_drop);
  }
  this->guest_ban_drop = guest_ban_drop;
  if ( *(_BYTE *)(((unsigned __int64)&monster_script_config->sight_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)monster_script_config - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config->sight_group_index >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&monster_script_config->sight_group_index);
  }
  sight_group_index = monster_script_config->sight_group_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sight_group_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->sight_group_index);
  }
  this->sight_group_index = sight_group_index;
  if ( *(char *)(((unsigned __int64)&monster_script_config->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&monster_script_config->is_light_config);
  is_light_config = monster_script_config->is_light_config;
  if ( *(char *)(((unsigned __int64)&this->is_light_config >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_light_config);
  this->is_light_config = is_light_config;
};

// Line 126: range 000000001660F1BC-0000000016610314
MonsterPtr __cdecl EntityMgr::createMonster(const MonsterParam *monster_param)
{
  const MonsterParam *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  MonsterPtr result; // rax
  char v8; // al
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  Entity *v15; // r14
  Entity *p_entity_id; // rdi
  Monster *v17; // rdx
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const unsigned int *v20; // r8
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const float *v22; // r8
  const float *v23; // r9
  Group *v24; // rcx
  Monster *v25; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Group *v30; // r14
  Entity *v31; // rax
  common::milog::MiLogStream *v33; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  Entity *v35; // rax
  Monster *v36; // rax
  char v37; // al
  Group *v38; // rcx
  Creature *v39; // rdi
  Group *v40; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_config_id; // rdi
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  uint32_t OriginOwnerGroupId; // eax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  uint32_t OriginOwnerConfigId; // eax
  Monster *v51; // rcx
  const MonsterParam *monster_parama; // [rsp+0h] [rbp-1A0h]
  std::map<std::string,float>::const_iterator __for_begin; // [rsp+10h] [rbp-190h] BYREF
  std::map<std::string,float>::const_iterator __for_end; // [rsp+18h] [rbp-188h] BYREF
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+20h] [rbp-180h]
  proto::GroupMonsterBin *monster_bin_ptr; // [rsp+28h] [rbp-178h]
  const std::map<std::string,float> *__for_range; // [rsp+30h] [rbp-170h]
  const std::pair<const std::string,float> *v59; // [rsp+38h] [rbp-168h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+40h] [rbp-160h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+48h] [rbp-158h]
  std::string __rhs; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v63; // [rsp+70h] [rbp-130h] BYREF
  char v64[272]; // [rsp+90h] [rbp-110h] BYREF

  monster_parama = v1;
  v2 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 14 monster_id:127 48 16 13 group_ptr:135 80 16 15 monster_ptr:146 112 16 13 owner_ptr:225"
                        " 144 40 24 add_entity_committer:195";
  *(_QWORD *)(v2 + 16) = EntityMgr::createMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = v1->monster_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 112));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
  monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                         &v5->design_config.txt_config_mgr.monster_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
  if ( monster_config_ptr )
  {
    std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v2 + 48), &v1->group_ptr);
    if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 48), 0LL) )
      goto LABEL_13;
    if ( *(_BYTE *)(((unsigned __int64)&v1->monster_pool_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v1->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v1->monster_pool_id )
      v8 = 1;
    else
LABEL_13:
      v8 = 0;
    if ( !v8 )
      goto LABEL_19;
    v9 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v1->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( Group::isPointOccupied(v9, v1->config_id) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createMonster",
        141);
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v63,
              (const char (*)[18])" point config_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v1->config_id);
      v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v11,
              (const char (*)[24])" was occupied. @group: ");
      v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      operator<<(v12, v13);
      common::milog::MiLogStream::~MiLogStream(&v63);
      std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)monster_param, 0LL);
    }
    else
    {
LABEL_19:
      common::tools::perf::make_shared<Monster,unsigned int &>((unsigned int *)(v2 + 80), (unsigned int *)(v2 + 32));
      if ( std::operator==<Monster>((const std::shared_ptr<Monster> *)(v2 + 80), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/entity/entity_mgr.cpp",
          "createMonster",
          149);
        v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v63,
                (const char (*)[33])"monster_ptr is null, monster_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v63);
        std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)monster_param, 0LL);
      }
      else
      {
        v15 = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)(v2 + 32));
        std::operator+<char>((std::string *)&v63, "Monster_", &__rhs);
        Entity::setName(v15, (const std::string *)&v63);
        std::string::~string(&v63);
        std::string::~string(&__rhs);
        p_entity_id = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v1->entity_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v1->entity_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_entity_id = (Entity *)&v1->entity_id;
          __asan_report_load4();
        }
        Entity::setEntityId(p_entity_id, v1->entity_id);
        v17 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( Monster::initWithParam(v17, v1) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/entity/entity_mgr.cpp",
            "createMonster",
            159);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v63,
            (const char (*)[19])"initWitParam fails");
          common::milog::MiLogStream::~MiLogStream(&v63);
          std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)monster_param, 0LL);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( monster_config_ptr->type == MONSTER_ENV_ANIMAL )
          {
            v18 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterEnvAnimalComp>(&v18->EcsBase<Monster,MonsterCompBase,4>);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)monster_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( monster_config_ptr->type == MONSTER_FISH )
            {
              v19 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterFishComp,std::shared_ptr<Gadget> const&,unsigned int const&>(
                &v19->EcsBase<Monster,MonsterCompBase,4>,
                &v1->fish_param.gadget_ptr,
                &v1->fish_param.fish_id,
                &v1->fish_param.gadget_ptr,
                v20);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)monster_config_ptr - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->type >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( monster_config_ptr->type == MONSTER_ORDINARY )
              {
                if ( *(_BYTE *)(((unsigned __int64)&v1->fishtank_param >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v1 + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&v1->fishtank_param >> 3)
                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load1(&v1->fishtank_param);
                }
                if ( v1->fishtank_param.is_fishtank_fish )
                {
                  v21 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  EcsBase<Monster,MonsterCompBase,4u>::addComp<MonsterFishtankFishComp,float const&,float const&,float const&>(
                    &v21->EcsBase<Monster,MonsterCompBase,4>,
                    &v1->fishtank_param.fish_distance_from_water,
                    &v1->fishtank_param.fish_scale,
                    &v1->fishtank_param.initial_rotation_y,
                    v22,
                    v23,
                    (const float *)&v1->monster_id);
                }
              }
            }
          }
          if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 48), 0LL) )
            goto LABEL_91;
          v24 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&monster_parama->config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_parama + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_parama->config_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          monster_bin_ptr = Group::findMonsterBin(v24, monster_parama->config_id);
          if ( monster_bin_ptr
            && (v25 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
                Monster::fromBin(v25, monster_bin_ptr)) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/entity/entity_mgr.cpp",
              "createMonster",
              185);
            v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v63,
                    (const char (*)[34])"monster fromBin fails, config_id:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    &monster_parama->config_id);
            v29 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            operator<<(v28, v29);
            common::milog::MiLogStream::~MiLogStream(&v63);
            std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)monster_param, 0LL);
          }
          else
          {
LABEL_91:
            if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 48), 0LL)
              && (v30 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
                  v31 = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
                  Group::addEntity(v30, v31)) )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/entity/entity_mgr.cpp",
                "createMonster",
                192);
              v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      &v63,
                      (const char (*)[16])"addEntity fails");
              v34 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
              operator<<(v33, v34);
              common::milog::MiLogStream::~MiLogStream(&v63);
              std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)monster_param, 0LL);
            }
            else
            {
              std::shared_ptr<Group>::shared_ptr(
                (std::shared_ptr<Group> *const)&__rhs,
                (const std::shared_ptr<Group> *)(v2 + 48));
              std::shared_ptr<Monster>::shared_ptr(
                (std::shared_ptr<Monster> *const)&__rhs._anon_0,
                (const std::shared_ptr<Monster> *)(v2 + 80));
              std::function<void ()(void)>::function<EntityMgr::createMonster(MonsterParam const&)::{lambda(void)#1},void,void>(
                (std::function<void()> *const)&v63,
                (EntityMgr::createMonster::<lambda()> *)&__rhs);
              common::tools::ScopedCommitter::ScopedCommitter(
                (common::tools::ScopedCommitter *const)(v2 + 144),
                (std::function<void()> *)&v63);
              std::function<void ()(void)>::~function((std::function<void()> *const)&v63);
              EntityMgr::createMonster(MonsterParam const&)::{lambda(void)#1}::~MonsterParam((EntityMgr::createMonster::<lambda()> *const)&__rhs);
              v35 = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              Entity::setPreInstallSightGroup(v35, &monster_parama->sight_group_ptr);
              v36 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              if ( Monster::init(v36) )
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/entity/entity_mgr.cpp",
                  "createMonster",
                  207);
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v63, (const char (*)[11])"init fails");
                common::milog::MiLogStream::~MiLogStream(&v63);
                std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)monster_param, 0LL);
              }
              else
              {
                if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 48), 0LL) )
                  goto LABEL_62;
                if ( *(_BYTE *)(((unsigned __int64)&monster_parama->monster_pool_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&monster_parama->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( monster_parama->monster_pool_id )
                  v37 = 1;
                else
LABEL_62:
                  v37 = 0;
                if ( v37 )
                {
                  v38 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                  if ( *(_BYTE *)(((unsigned __int64)&monster_parama->config_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)monster_parama + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_parama->config_id >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  Group::occupyPoint(v38, monster_parama->config_id);
                }
                __for_range = &monster_parama->global_value_map;
                __for_begin._M_node = std::map<std::string,float>::begin(&monster_parama->global_value_map)._M_node;
                __for_end._M_node = std::map<std::string,float>::end(&monster_parama->global_value_map)._M_node;
                while ( std::operator!=(&__for_begin, &__for_end) )
                {
                  v59 = std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator*(&__for_begin);
                  key = std::get<0ul,std::string const,float>(v59);
                  value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v59);
                  v39 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
                  {
                    v39 = (Creature *)value;
                    __asan_report_load4();
                  }
                  Creature::setServerGlobalValue(v39, key, *value, 0);
                  std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator++(&__for_begin);
                }
                common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v2 + 144));
                std::shared_ptr<Creature>::shared_ptr(
                  (std::shared_ptr<Creature> *const)(v2 + 112),
                  &monster_parama->owner_ptr);
                if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 48)) )
                {
                  v40 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                  if ( Group::isForceCleanSubEntity(v40) )
                  {
                    v41 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                    v42 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                    GroupId = Group::getGroupId(v42);
                    Creature::setOriginOwnerGroupId(v41, GroupId);
                    p_config_id = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                    if ( *(_BYTE *)(((unsigned __int64)&monster_parama->config_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)monster_parama + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_parama->config_id >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      p_config_id = (std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&monster_parama->config_id;
                      __asan_report_load4();
                    }
                    Creature::setOriginOwnerConfigId(p_config_id, monster_parama->config_id);
                  }
                }
                else if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 112)) )
                {
                  v45 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  v46 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                  OriginOwnerGroupId = Creature::getOriginOwnerGroupId(v46);
                  Creature::setOriginOwnerGroupId(v45, OriginOwnerGroupId);
                  v48 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                  v49 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                  OriginOwnerConfigId = Creature::getOriginOwnerConfigId(v49);
                  Creature::setOriginOwnerConfigId(v48, OriginOwnerConfigId);
                }
                v51 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                if ( *(_BYTE *)(((unsigned __int64)&monster_parama->initial_hp_percentage >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)monster_parama + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_parama->initial_hp_percentage >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                Monster::setMonsterInitialHpPercentage(v51, monster_parama->initial_hp_percentage);
                std::shared_ptr<Monster>::shared_ptr(
                  (std::shared_ptr<Monster> *const)monster_param,
                  (std::shared_ptr<Monster> *)(v2 + 80));
                std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
              }
              common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v2 + 144));
            }
          }
        }
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 80));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createMonster",
      131);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v63,
           (const char (*)[42])"findMonsterExcelConfig fails, monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v63);
    std::shared_ptr<Monster>::shared_ptr((std::shared_ptr<Monster> *const)monster_param, 0LL);
  }
  if ( v64 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Monster,(__gnu_cxx::_Lock_policy)2>::element_type *)monster_param;
  return result;
};

// Line 195: range 0000000016653DB8-0000000016653DF8
void __cdecl EntityMgr::createMonster(MonsterParam const&)::{lambda(void)#1}::MonsterParam(
        EntityMgr::createMonster::<lambda()> *const this,
        EntityMgr::createMonster::<lambda()> *a2)
{
  std::shared_ptr<Group>::shared_ptr(&this->__group_ptr, &a2->__group_ptr);
  std::shared_ptr<Monster>::shared_ptr(&this->__monster_ptr, &a2->__monster_ptr);
};

// Line 195: range 0000000016653EC4-0000000016653F04
void __cdecl EntityMgr::createMonster(MonsterParam const&)::{lambda(void)#1}::MonsterParam(
        EntityMgr::createMonster::<lambda()> *const this,
        const EntityMgr::createMonster::<lambda()> *a2)
{
  std::shared_ptr<Group>::shared_ptr(&this->__group_ptr, &a2->__group_ptr);
  std::shared_ptr<Monster>::shared_ptr(&this->__monster_ptr, &a2->__monster_ptr);
};

// Line 195: range 000000001660F112-000000001660F18E
void __cdecl EntityMgr::createMonster(MonsterParam const&)::{lambda(void)#1}::operator()(
        const EntityMgr::createMonster::<lambda()> *const __closure)
{
  Group *v2; // rbx
  Entity *v3; // rax

  if ( std::operator!=<Group>(0LL, &__closure->__group_ptr) && std::operator!=<Monster>(0LL, &__closure->__monster_ptr) )
  {
    v2 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    v3 = (Entity *)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__monster_ptr);
    Group::revertAddEntity(v2, v3);
  }
};

// Line 195: range 000000001660F190-000000001660F1BA
void __cdecl EntityMgr::createMonster(MonsterParam const&)::{lambda(void)#1}::~MonsterParam(
        EntityMgr::createMonster::<lambda()> *const this)
{
  std::shared_ptr<Monster>::~shared_ptr(&this->__monster_ptr);
  std::shared_ptr<Group>::~shared_ptr(&this->__group_ptr);
};

// Line 247: range 0000000016610316-00000000166108A7
NpcPtr __cdecl EntityMgr::createNpc(const NpcParam *npc_param)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Entity *v5; // r14
  Entity *v6; // rax
  Entity *v7; // rax
  Entity *v8; // rdi
  Entity *v9; // rdi
  Entity *v10; // rdi
  Npc *v11; // rcx
  Group *v12; // r14
  Entity *v13; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  NpcPtr result; // rax
  std::string __rhs; // [rsp+10h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 npc_ptr:248 64 16 13 group_ptr:263";
  *(_QWORD *)(v2 + 16) = EntityMgr::createNpc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  common::tools::perf::make_shared<Npc,unsigned int const&>((const unsigned int *)(v2 + 32), (const unsigned int *)v1);
  if ( std::operator==<Npc>((const std::shared_ptr<Npc> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createNpc",
      251);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v20, (const char (*)[16])"npc_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
    std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)npc_param, 0LL);
  }
  else
  {
    v5 = (Entity *)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v1 >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)v1);
    std::operator+<char>((std::string *)&v20, "Npc_", &__rhs);
    Entity::setName(v5, (const std::string *)&v20);
    std::string::~string(&v20);
    std::string::~string(&__rhs);
    v6 = (Entity *)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Entity::setBornPosition(v6, (const Vector3 *)(v1 + 20));
    v7 = (Entity *)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Entity::setRotation(v7, (const Vector3 *)(v1 + 32));
    v8 = (Entity *)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (Entity *)(v1 + 8);
      __asan_report_load4();
    }
    Entity::setEntityId(v8, *(_DWORD *)(v1 + 8));
    v9 = (Entity *)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((v1 + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 + 4) & 7) + 3) >= *(_BYTE *)(((v1 + 4) >> 3) + 0x7FFF8000) )
    {
      v9 = (Entity *)(v1 + 4);
      __asan_report_load4();
    }
    Entity::setConfigId(v9, *(_DWORD *)(v1 + 4));
    v10 = (Entity *)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((v1 + 12) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 + 12) & 7) + 3) >= *(_BYTE *)(((v1 + 12) >> 3) + 0x7FFF8000) )
    {
      v10 = (Entity *)(v1 + 12);
      __asan_report_load4();
    }
    Entity::setRoomId(v10, *(_DWORD *)(v1 + 12));
    v11 = std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    Npc::setParentQuestId(v11, *(_DWORD *)(v1 + 16));
    std::shared_ptr<Group>::shared_ptr(
      (std::shared_ptr<Group> *const)(v2 + 64),
      (const std::shared_ptr<Group> *)(v1 + 48));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 64), 0LL)
      && (v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          v13 = (Entity *)std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Npc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
          Group::addEntity(v12, v13)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createNpc",
        266);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v20, (const char (*)[16])"addEntity fails");
      v16 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      operator<<(v15, v16);
      common::milog::MiLogStream::~MiLogStream(&v20);
      std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)npc_param, 0LL);
    }
    else
    {
      std::shared_ptr<Npc>::shared_ptr((std::shared_ptr<Npc> *const)npc_param, (std::shared_ptr<Npc> *)(v2 + 32));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 64));
  }
  std::shared_ptr<Npc>::~shared_ptr((std::shared_ptr<Npc> *const)(v2 + 32));
  if ( v21 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<Npc,(__gnu_cxx::_Lock_policy)2>::element_type *)npc_param;
  return result;
};

// Line 274: range 0000000016610952-000000001661178E
GadgetPtr __cdecl EntityMgr::createGadget(const GadgetParam *gadget_param)
{
  const GadgetParam *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rdx
  GadgetPtr result; // rax
  Entity *p_entity_id; // rdi
  Gadget *v9; // rdx
  Entity *p_only_vision_uid; // rdi
  uint32_t type; // r14d
  Gadget *v12; // rdx
  Group *v13; // rcx
  Gadget *v14; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Group *v19; // r14
  Entity *v20; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Entity *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  Creature *v27; // rdi
  Group *v28; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_config_id; // rdi
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t OriginOwnerGroupId; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t OriginOwnerConfigId; // eax
  std::map<std::string,float>::const_iterator __for_begin; // [rsp+10h] [rbp-190h] BYREF
  std::map<std::string,float>::const_iterator __for_end; // [rsp+18h] [rbp-188h] BYREF
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+20h] [rbp-180h]
  proto::GroupGadgetBin *gadget_bin_ptr; // [rsp+28h] [rbp-178h]
  const std::map<std::string,float> *__for_range; // [rsp+30h] [rbp-170h]
  const std::pair<const std::string,float> *v45; // [rsp+38h] [rbp-168h]
  std::tuple_element<0,const std::pair<const std::string,float> >::type *key; // [rsp+40h] [rbp-160h]
  std::tuple_element<1,const std::pair<const std::string,float> >::type *value; // [rsp+48h] [rbp-158h]
  EntityMgr::createGadget::<lambda()> v48; // [rsp+50h] [rbp-150h] BYREF
  common::milog::MiLogStream v49; // [rsp+70h] [rbp-130h] BYREF
  char v50[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 16 14 gadget_ptr:281 80 16 13 group_ptr:310 112 16 13 owner_ptr:350 144 40 24 add_entity_committer:326";
  *(_QWORD *)(v2 + 16) = EntityMgr::createGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 112));
  p_gadget_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->design_config.txt_config_mgr.gadget_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, v1->gadget_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
  if ( gadget_config_ptr )
  {
    common::tools::perf::make_shared<Gadget,unsigned int const&>((const unsigned int *)(v2 + 48), &v1->gadget_id);
    if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createGadget",
        284);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v49, (const char (*)[19])"gadget_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v49);
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
    }
    else
    {
      p_entity_id = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v1->entity_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v1->entity_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_entity_id = (Entity *)&v1->entity_id;
        __asan_report_load4();
      }
      Entity::setEntityId(p_entity_id, v1->entity_id);
      v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( Gadget::initWithParam(v9, v1) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/entity/entity_mgr.cpp",
          "createGadget",
          290);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v49, (const char (*)[19])"initWitParam fails");
        common::milog::MiLogStream::~MiLogStream(&v49);
        std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
      }
      else
      {
        p_only_vision_uid = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&v1->only_vision_uid >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v1->only_vision_uid >> 3) + 0x7FFF8000) <= 3 )
        {
          p_only_vision_uid = (Entity *)&v1->only_vision_uid;
          __asan_report_load4();
        }
        Entity::setOnlyVisionUid(p_only_vision_uid, v1->only_vision_uid);
        if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        type = gadget_config_ptr->type;
        std::shared_ptr<Gadget>::shared_ptr(
          (std::shared_ptr<Gadget> *const)(v2 + 112),
          (const std::shared_ptr<Gadget> *)(v2 + 48));
        LOBYTE(type) = EntityMgr::addGadgetComp((GadgetPtr *)(v2 + 112), v1, type) != 0;
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 112));
        if ( (_BYTE)type )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/entity/entity_mgr.cpp",
            "createGadget",
            299);
          common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v49, (const char (*)[23])off_25D35F60);
          common::milog::MiLogStream::~MiLogStream(&v49);
          std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
        }
        else
        {
          v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          if ( Gadget::initByConfigWithParam(v12, v1) )
          {
            common::milog::MiLogStream::create(
              &v49,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/entity/entity_mgr.cpp",
              "createGadget",
              306);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v49,
              (const char (*)[22])"init by config failed");
            common::milog::MiLogStream::~MiLogStream(&v49);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
          }
          else
          {
            std::shared_ptr<Group>::shared_ptr((std::shared_ptr<Group> *const)(v2 + 80), &v1->group_ptr);
            if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 80), 0LL) )
              goto LABEL_65;
            v13 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v1->config_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->config_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            gadget_bin_ptr = Group::findGadgetBin(v13, v1->config_id);
            if ( gadget_bin_ptr
              && (v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
                  Gadget::fromBin(v14, gadget_bin_ptr)) )
            {
              common::milog::MiLogStream::create(
                &v49,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/entity/entity_mgr.cpp",
                "createGadget",
                317);
              v16 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v49,
                      (const char (*)[33])"gadget fromBin fails, config_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v1->config_id);
              v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              operator<<(v17, v18);
              common::milog::MiLogStream::~MiLogStream(&v49);
              std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
            }
            else
            {
LABEL_65:
              if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 80), 0LL)
                && (v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
                    v20 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
                    Group::addEntity(v19, v20)) )
              {
                common::milog::MiLogStream::create(
                  &v49,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/entity/entity_mgr.cpp",
                  "createGadget",
                  323);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        &v49,
                        (const char (*)[16])"addEntity fails");
                v23 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                operator<<(v22, v23);
                common::milog::MiLogStream::~MiLogStream(&v49);
                std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
              }
              else
              {
                std::shared_ptr<Group>::shared_ptr(&v48.__group_ptr, (const std::shared_ptr<Group> *)(v2 + 80));
                std::shared_ptr<Gadget>::shared_ptr(&v48.__gadget_ptr, (const std::shared_ptr<Gadget> *)(v2 + 48));
                std::function<void ()(void)>::function<EntityMgr::createGadget(GadgetParam const&)::{lambda(void)#1},void,void>(
                  (std::function<void()> *const)&v49,
                  &v48);
                common::tools::ScopedCommitter::ScopedCommitter(
                  (common::tools::ScopedCommitter *const)(v2 + 144),
                  (std::function<void()> *)&v49);
                std::function<void ()(void)>::~function((std::function<void()> *const)&v49);
                EntityMgr::createGadget(GadgetParam const&)::{lambda(void)#1}::~GadgetParam(&v48);
                v24 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                Entity::setPreInstallSightGroup(v24, &v1->sight_group_ptr);
                v25 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
                  v25 = __asan_report_load8();
                v26 = *(_QWORD *)v25 + 400LL;
                if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                  v25 = __asan_report_load8();
                if ( (*(unsigned int (__fastcall **)(unsigned __int64))v26)(v25) )
                {
                  common::milog::MiLogStream::create(
                    &v49,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/entity/entity_mgr.cpp",
                    "createGadget",
                    338);
                  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v49,
                    (const char (*)[23])"gadget_ptr init failed");
                  common::milog::MiLogStream::~MiLogStream(&v49);
                  std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
                }
                else
                {
                  __for_range = &v1->global_value_map;
                  __for_begin._M_node = std::map<std::string,float>::begin(&v1->global_value_map)._M_node;
                  __for_end._M_node = std::map<std::string,float>::end(&v1->global_value_map)._M_node;
                  while ( std::operator!=(&__for_begin, &__for_end) )
                  {
                    v45 = std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator*(&__for_begin);
                    key = std::get<0ul,std::string const,float>(v45);
                    value = (std::tuple_element<1,const std::pair<const std::string,float> >::type *)std::get<1ul,std::string const,float>(v45);
                    v27 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3)
                                                                              + 0x7FFF8000) )
                    {
                      v27 = (Creature *)value;
                      __asan_report_load4();
                    }
                    Creature::setServerGlobalValue(v27, key, *value, 0);
                    std::_Rb_tree_const_iterator<std::pair<std::string const,float>>::operator++(&__for_begin);
                  }
                  common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v2 + 144));
                  std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112), &v1->owner_ptr);
                  if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 80)) )
                  {
                    v28 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                    if ( Group::isForceCleanSubEntity(v28) )
                    {
                      v29 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                      v30 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                      GroupId = Group::getGroupId(v30);
                      Creature::setOriginOwnerGroupId(v29, GroupId);
                      p_config_id = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                      if ( *(_BYTE *)(((unsigned __int64)&v1->config_id >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)v1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->config_id >> 3)
                                                                         + 0x7FFF8000) )
                      {
                        p_config_id = (std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&v1->config_id;
                        __asan_report_load4();
                      }
                      Creature::setOriginOwnerConfigId(p_config_id, v1->config_id);
                    }
                  }
                  else if ( std::operator!=<Creature>(0LL, (const std::shared_ptr<Creature> *)(v2 + 112)) )
                  {
                    v33 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                    v34 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                    OriginOwnerGroupId = Creature::getOriginOwnerGroupId(v34);
                    Creature::setOriginOwnerGroupId(v33, OriginOwnerGroupId);
                    v36 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                    v37 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
                    OriginOwnerConfigId = Creature::getOriginOwnerConfigId(v37);
                    Creature::setOriginOwnerConfigId(v36, OriginOwnerConfigId);
                  }
                  std::shared_ptr<Gadget>::shared_ptr(
                    (std::shared_ptr<Gadget> *const)gadget_param,
                    (std::shared_ptr<Gadget> *)(v2 + 48));
                  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 112));
                }
                common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v2 + 144));
              }
            }
            std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 80));
          }
        }
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createGadget",
      278);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v49,
           (const char (*)[40])"findGadgetExcelConfig fails, gadget_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &v1->gadget_id);
    common::milog::MiLogStream::~MiLogStream(&v49);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)gadget_param, 0LL);
  }
  if ( v50 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)gadget_param;
  return result;
};

// Line 326: range 0000000016653FF6-0000000016654036
void __cdecl EntityMgr::createGadget(GadgetParam const&)::{lambda(void)#1}::GadgetParam(
        EntityMgr::createGadget::<lambda()> *const this,
        EntityMgr::createGadget::<lambda()> *a2)
{
  std::shared_ptr<Group>::shared_ptr(&this->__group_ptr, &a2->__group_ptr);
  std::shared_ptr<Gadget>::shared_ptr(&this->__gadget_ptr, &a2->__gadget_ptr);
};

// Line 326: range 0000000016654102-0000000016654142
void __cdecl EntityMgr::createGadget(GadgetParam const&)::{lambda(void)#1}::GadgetParam(
        EntityMgr::createGadget::<lambda()> *const this,
        const EntityMgr::createGadget::<lambda()> *a2)
{
  std::shared_ptr<Group>::shared_ptr(&this->__group_ptr, &a2->__group_ptr);
  std::shared_ptr<Gadget>::shared_ptr(&this->__gadget_ptr, &a2->__gadget_ptr);
};

// Line 326: range 00000000166108A8-0000000016610924
void __cdecl EntityMgr::createGadget(GadgetParam const&)::{lambda(void)#1}::operator()(
        const EntityMgr::createGadget::<lambda()> *const __closure)
{
  Group *v2; // rbx
  Entity *v3; // rax

  if ( std::operator!=<Group>(0LL, &__closure->__group_ptr) && std::operator!=<Gadget>(0LL, &__closure->__gadget_ptr) )
  {
    v2 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    v3 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__gadget_ptr);
    Group::revertAddEntity(v2, v3);
  }
};

// Line 326: range 0000000016610926-0000000016610950
void __cdecl EntityMgr::createGadget(GadgetParam const&)::{lambda(void)#1}::~GadgetParam(
        EntityMgr::createGadget::<lambda()> *const this)
{
  std::shared_ptr<Gadget>::~shared_ptr(&this->__gadget_ptr);
  std::shared_ptr<Group>::~shared_ptr(&this->__group_ptr);
};

// Line 369: range 000000001661178F-00000000166117D3
void __cdecl setGadgetName(GadgetPtr *p_gadget_ptr, const std::string *name)
{
  Entity *v2; // rdx

  if ( !std::operator==<Gadget>(p_gadget_ptr, 0LL) )
  {
    v2 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
    Entity::setName(v2, name);
  }
};

// Line 378: range 00000000166117D4-000000001661457B
__int64 __fastcall EntityMgr::addGadgetComp(
        GadgetPtr *p_gadget_ptr,
        unsigned __int64 gadget_param,
        uint32_t gadget_config_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  char v7; // al
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  unsigned int ret; // [rsp+2Ch] [rbp-D4h]
  __int64 ret_1; // [rsp+30h] [rbp-D0h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+38h] [rbp-C8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-C0h]
  const data::GadgetInteractExcelConfig *interact_config_ptr; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v54; // [rsp+50h] [rbp-B0h] BYREF
  std::string __rhs; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v56; // [rsp+80h] [rbp-80h] BYREF
  char v57[96]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 22 gadget_config_type:377";
  *(_QWORD *)(v3 + 16) = EntityMgr::addGadgetComp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = gadget_config_type;
  if ( std::operator==<Gadget>(p_gadget_ptr, 0LL) )
  {
    result = 0xFFFFFFFFLL;
    goto LABEL_156;
  }
  gadget_script_config_ptr = 0LL;
  if ( !std::operator!=<Group>((const std::shared_ptr<Group> *)(gadget_param + 56), 0LL) )
    goto LABEL_11;
  if ( *(_BYTE *)(((gadget_param + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((gadget_param + 4) & 7) + 3) >= *(_BYTE *)(((gadget_param + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)(gadget_param + 4) )
    v7 = 1;
  else
LABEL_11:
    v7 = 0;
  if ( v7 )
  {
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(gadget_param + 56));
    group_script_config_ptr = Group::getScriptConfig(v8);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((gadget_param + 4) >> 3) + 0x7FFF8000) != 0
        && (char)(((gadget_param + 4) & 7) + 3) >= *(_BYTE *)(((gadget_param + 4) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      gadget_script_config_ptr = GroupScriptConfig::findGadgetConfig(
                                   group_script_config_ptr,
                                   *(_DWORD *)(gadget_param + 4));
    }
  }
  if ( *(_BYTE *)(((gadget_param + 292) >> 3) + 0x7FFF8000) != 0
    && (char)(((gadget_param + 36) & 7) + 3) >= *(_BYTE *)(((gadget_param + 292) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)(gadget_param + 292) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v54);
    p_gadget_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v54)->design_config.txt_config_mgr.gadget_config_mgr;
    if ( *(_BYTE *)(((gadget_param + 292) >> 3) + 0x7FFF8000) != 0
      && (char)(((gadget_param + 36) & 7) + 3) >= *(_BYTE *)(((gadget_param + 292) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    interact_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetInteractExcelConfig(
                            p_gadget_config_mgr,
                            *(_DWORD *)(gadget_param + 292));
    std::shared_ptr<Config>::~shared_ptr(&v54);
    if ( !interact_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/entity/entity_mgr.cpp",
        "addGadgetComp",
        405);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v56,
              (const char (*)[51])"findGadgetInteractExcelConfig fails, interact_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v10,
        (const unsigned int *)(gadget_param + 292));
      common::milog::MiLogStream::~MiLogStream(&v56);
    }
    v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
    if ( EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetInteractComp,unsigned int const&>(
           &v11->EcsBase<Gadget,GadgetCompBase,28>,
           (const unsigned int *)(gadget_param + 292),
           (const unsigned int *)(gadget_param + 292)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "addGadgetComp",
        410);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v56,
        (const char (*)[33])"addComp GadgetInteractComp fails");
      common::milog::MiLogStream::~MiLogStream(&v56);
      result = 0xFFFFFFFFLL;
      goto LABEL_156;
    }
  }
  if ( *(_BYTE *)(((gadget_param + 228) >> 3) + 0x7FFF8000) != 0
    && (char)(((gadget_param - 28) & 7) + 3) >= *(_BYTE *)(((gadget_param + 228) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)(gadget_param + 228) )
  {
    v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
    if ( EcsBase<Gadget,GadgetCompBase,28u>::addComp<PlatformComp,PlatformParam const&>(
           &v12->EcsBase<Gadget,GadgetCompBase,28>,
           (const PlatformParam *)(gadget_param + 228),
           (const PlatformParam *)(gadget_param + 228)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "addGadgetComp",
        420);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v56,
        (const char (*)[27])"addComp PlatformComp fails");
      common::milog::MiLogStream::~MiLogStream(&v56);
      result = 0xFFFFFFFFLL;
      goto LABEL_156;
    }
    if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
    std::operator+<char>((std::string *)&v56, "Gadget_Platform_", &__rhs);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
    setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
    std::string::~string(&v56);
    std::string::~string(&__rhs);
  }
  ret = 0;
  if ( *(_BYTE *)(((gadget_param + 216) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((gadget_param + 216) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)(gadget_param + 216) )
  {
    v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
    ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GatherComp,unsigned int const&>(
            &v13->EcsBase<Gadget,GadgetCompBase,28>,
            (const unsigned int *)(gadget_param + 216),
            (const unsigned int *)(gadget_param + 216));
    if ( *(_BYTE *)(((gadget_param + 216) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((gadget_param + 216) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)(gadget_param + 216));
    std::operator+<char>((std::string *)&v56, "Gather_", &__rhs);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
    setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
    std::string::~string(&v56);
    std::string::~string(&__rhs);
  }
  else
  {
    if ( *(_BYTE *)(((gadget_param + 276) >> 3) + 0x7FFF8000) != 0
      && (char)((gadget_param + 20) & 7) >= *(_BYTE *)(((gadget_param + 276) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(gadget_param + 276);
    }
    if ( *(_BYTE *)(gadget_param + 276) )
    {
      v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
      ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetAbilityComp,AbilityGadgetParam const&>(
              &v14->EcsBase<Gadget,GadgetCompBase,28>,
              (const AbilityGadgetParam *)(gadget_param + 276),
              (const AbilityGadgetParam *)(gadget_param + 276));
      if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4();
      common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
      std::operator+<char>((std::string *)&v56, "Ability_Gadget_", &__rhs);
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
      setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
      std::string::~string(&v56);
      std::string::~string(&__rhs);
    }
    else
    {
      if ( *(_BYTE *)(((gadget_param + 708) >> 3) + 0x7FFF8000) != 0
        && (char)(((gadget_param - 60) & 7) + 3) >= *(_BYTE *)(((gadget_param + 708) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *(_DWORD *)(gadget_param + 708) )
      {
        v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
        ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<HomeGatherComp,HomeGatherParam const&>(
                &v15->EcsBase<Gadget,GadgetCompBase,28>,
                (const HomeGatherParam *)(gadget_param + 708),
                (const HomeGatherParam *)(gadget_param + 708));
        if ( *(_BYTE *)(((gadget_param + 216) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((gadget_param + 216) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)(gadget_param + 216));
        std::operator+<char>((std::string *)&v56, "Home_Gather_", &__rhs);
        std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
        setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
        std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
        std::string::~string(&v56);
        std::string::~string(&__rhs);
      }
      else
      {
        switch ( *(_DWORD *)(v3 + 32) )
        {
          case 0x19:
            v19 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GearComp>(&v19->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Gear_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x1A:
            if ( !gadget_script_config_ptr )
              goto LABEL_161;
            if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( gadget_script_config_ptr->boss_chest.monster_config_id )
            {
              v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
              ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<BossChestComp,ChestParam const&>(
                      &v16->EcsBase<Gadget,GadgetCompBase,28>,
                      (const ChestParam *)(gadget_param + 220),
                      (const ChestParam *)(gadget_param + 220));
            }
            else
            {
              if ( !gadget_script_config_ptr )
                goto LABEL_63;
LABEL_161:
              if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->is_blossom_chest >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)gadget_script_config_ptr - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->is_blossom_chest >> 3)
                                                                                      + 0x7FFF8000) )
              {
                __asan_report_load1(&gadget_script_config_ptr->is_blossom_chest);
              }
              if ( gadget_script_config_ptr->is_blossom_chest )
              {
                v17 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
                ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<BlossomChestComp,BlossomChestParam const&>(
                        &v17->EcsBase<Gadget,GadgetCompBase,28>,
                        (const BlossomChestParam *)(gadget_param + 352),
                        (const BlossomChestParam *)(gadget_param + 352));
              }
              else
              {
LABEL_63:
                v18 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
                ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<ChestComp,ChestParam const&>(
                        &v18->EcsBase<Gadget,GadgetCompBase,28>,
                        (const ChestParam *)(gadget_param + 220),
                        (const ChestParam *)(gadget_param + 220));
              }
            }
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Chest_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x1C:
            v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<CrystalComp>(&v20->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_ElemCrystal_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x1E:
            v21 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<WorktopComp,WorktopParam const&>(
                    &v21->EcsBase<Gadget,GadgetCompBase,28>,
                    (const WorktopParam *)(gadget_param + 296),
                    (const WorktopParam *)(gadget_param + 296));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Worktop_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x22:
            v24 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetEnvAnimalComp>(&v24->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_EnvAnimal_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x23:
            v22 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            EcsBase<Gadget,GadgetCompBase,28u>::addComp<WorktopComp,WorktopParam const&>(
              &v22->EcsBase<Gadget,GadgetCompBase,28>,
              (const WorktopParam *)(gadget_param + 296),
              (const WorktopParam *)(gadget_param + 296));
            v23 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetSealComp>(&v23->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Seal_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x26:
            v25 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<QuestGadgetComp>(&v25->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_QuestGadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x29:
            v26 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<StatueComp>(&v26->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Statue_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x2C:
            v27 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<MpPlayRewardComp,unsigned int const&>(
                    &v27->EcsBase<Gadget,GadgetCompBase,28>,
                    (const unsigned int *)(gadget_param + 104),
                    (const unsigned int *)(gadget_param + 104));
            if ( *(_BYTE *)(((gadget_param + 104) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((gadget_param + 104) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)(gadget_param + 104));
            std::operator+<char>((std::string *)&v56, "Gadget_MpPlay_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x2D:
            v28 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetViewComp>(&v28->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_View_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x2F:
            v29 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetGeneralRewardComp,GadgetGeneralRewardParam const&>(
                    &v29->EcsBase<Gadget,GadgetCompBase,28>,
                    (const GadgetGeneralRewardParam *)(gadget_param + 472),
                    (const GadgetGeneralRewardParam *)(gadget_param + 472));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_GeneralReward_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x31:
            v30 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<OfferingComp,GadgetOfferingParam const&>(
                    &v30->EcsBase<Gadget,GadgetCompBase,28>,
                    (const GadgetOfferingParam *)(gadget_param + 664),
                    (const GadgetOfferingParam *)(gadget_param + 664));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Offering_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x33:
            v31 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<MiracleRingComp,MiracleRingParam const&>(
                    &v31->EcsBase<Gadget,GadgetCompBase,28>,
                    (const MiracleRingParam *)(gadget_param + 668),
                    (const MiracleRingParam *)(gadget_param + 668));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_MiracleRing_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x34:
            v32 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<FoundationComp,FoundationParam const&>(
                    &v32->EcsBase<Gadget,GadgetCompBase,28>,
                    (const FoundationParam *)(gadget_param + 672),
                    (const FoundationParam *)(gadget_param + 672));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Foundation_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x36:
            v33 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetVehicleComp,std::shared_ptr<Player> const&>(
                    &v33->EcsBase<Gadget,GadgetCompBase,28>,
                    (const std::shared_ptr<Player> *)(gadget_param + 192),
                    (const std::shared_ptr<Player> *)(gadget_param + 192));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Vehicle_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x38:
            v34 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<EchoShellComp,EchoShellParam const&>(
                    &v34->EcsBase<Gadget,GadgetCompBase,28>,
                    (const EchoShellParam *)(gadget_param + 696),
                    (const EchoShellParam *)(gadget_param + 696));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_EchoShell_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x3B:
            v35 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<ScreenComp,ScreenParam const&>(
                    &v35->EcsBase<Gadget,GadgetCompBase,28>,
                    (const ScreenParam *)(gadget_param + 700),
                    (const ScreenParam *)(gadget_param + 700));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_Screen_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x3D:
            v36 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<FishPoolComp>(&v36->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_FishPool_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x3F:
            v37 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<CustomGadgetComp>(&v37->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_CustomGadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x40:
            v38 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<RoguelikeOperatorComp,RoguelikeOperatorParam const&>(
                    &v38->EcsBase<Gadget,GadgetCompBase,28>,
                    (const RoguelikeOperatorParam *)(gadget_param + 724),
                    (const RoguelikeOperatorParam *)(gadget_param + 724));
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_RoguelikeOperatorGadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x41:
            v39 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<ActivityInteractComp>(&v39->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_ActivityInteractGadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x44:
            v40 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<UIInteractComp>(&v40->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_UIInteractGadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x45:
            v41 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<NightCrowComp>(&v41->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_NightCrowGadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x47:
            v42 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            ret = EcsBase<Gadget,GadgetCompBase,28u>::addComp<DeshretObeliskComp>(&v42->EcsBase<Gadget,GadgetCompBase,28>);
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_DeshretObeliskGadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          case 0x48:
            v43 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            LODWORD(ret_1) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<WorktopComp,WorktopParam const&>(
                               &v43->EcsBase<Gadget,GadgetCompBase,28>,
                               (const WorktopParam *)(gadget_param + 296),
                               (const WorktopParam *)(gadget_param + 296));
            v44 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr);
            HIDWORD(ret_1) = EcsBase<Gadget,GadgetCompBase,28u>::addComp<CoinCollectOperatorComp,CoinCollectOperatorParam const&>(
                               &v44->EcsBase<Gadget,GadgetCompBase,28>,
                               (const CoinCollectOperatorParam *)(gadget_param + 744),
                               (const CoinCollectOperatorParam *)(gadget_param + 744));
            if ( ret_1 )
              ret = -1;
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_CoinCollectOperator_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
          default:
            if ( *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((gadget_param >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4();
            common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)gadget_param);
            std::operator+<char>((std::string *)&v56, "Gadget_", &__rhs);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)&v54, p_gadget_ptr);
            setGadgetName((GadgetPtr *)&v54, (const std::string *)&v56);
            std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)&v54);
            std::string::~string(&v56);
            std::string::~string(&__rhs);
            break;
        }
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/entity/entity_mgr.cpp",
            "addGadgetComp",
            575);
          v45 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v56, (const char (*)[32])off_25D36980);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v56);
        }
      }
    }
  }
  if ( gadget_script_config_ptr
    && !std::vector<unsigned int>::empty(&gadget_script_config_ptr->crucible_config.progress_stage_vec)
    && (v46 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr),
        EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetPlayComp>(&v46->EcsBase<Gadget,GadgetCompBase,28>)) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "addGadgetComp",
      586);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v56, (const char (*)[30])off_25D369C0);
    common::milog::MiLogStream::~MiLogStream(&v56);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((gadget_param + 808) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((gadget_param + 808) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)(gadget_param + 808)
      && (v47 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_gadget_ptr),
          EcsBase<Gadget,GadgetCompBase,28u>::addComp<WidgetGadgetComp,WidgetGadgetParam const&>(
            &v47->EcsBase<Gadget,GadgetCompBase,28>,
            (const WidgetGadgetParam *)(gadget_param + 808),
            (const WidgetGadgetParam *)(gadget_param + 808))) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "addGadgetComp",
        597);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(&v56, (const char (*)[32])off_25D36A00);
      common::milog::MiLogStream::~MiLogStream(&v56);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = ret;
    }
  }
LABEL_156:
  if ( v57 == (char *)v3 )
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

// Line 607: range 0000000016614626-00000000166150CB
GadgetPtr __cdecl EntityMgr::createTrifle(const TrifleParam *trifle_param)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GadgetPtr result; // rax
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Entity *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  Entity *v11; // rax
  Entity *v12; // rdi
  Entity *v13; // rdi
  Entity *v14; // rdi
  Gadget *v15; // rcx
  EcsBase<Gadget,GadgetCompBase,28> *v16; // rdx
  Group *v17; // r14
  Entity *v18; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-138h]
  std::string __rhs; // [rsp+20h] [rbp-130h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-110h] BYREF
  char v28[240]; // [rsp+60h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 gadget_id:620 48 16 14 trifle_ptr:625 80 16 13 group_ptr:651 112 40 24 add_entity_committer:657";
  *(_QWORD *)(v2 + 16) = EntityMgr::createTrifle;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( std::operator==<Item>((const std::shared_ptr<Item> *)(v1 + 8), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createTrifle",
      610);
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v27, (const char (*)[13])"item is null");
    common::milog::MiLogStream::~MiLogStream(&v27);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)trifle_param, 0LL);
  }
  else
  {
    v6 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 8));
    item_config_ptr = Item::getItemConfig(v6);
    if ( item_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&item_config_ptr->gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = item_config_ptr->gadget_id;
      if ( !*(_DWORD *)(v2 + 32) )
      {
        if ( *(char *)(((v1 + 80) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v1 + 80);
        if ( *(_BYTE *)(v1 + 80) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 80));
          v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          *(_DWORD *)(v2 + 32) = ConstValueExcelConfigMgr::getDefaultMaterialGadgetId(&v7->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
        }
      }
      common::tools::perf::make_shared<Gadget,unsigned int &>((unsigned int *)(v2 + 48), (unsigned int *)(v2 + 32));
      if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 48), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/entity/entity_mgr.cpp",
          "createTrifle",
          628);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v27, (const char (*)[19])"trifle_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v27);
        std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)trifle_param, 0LL);
      }
      else
      {
        v8 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&item_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::tools::StringUtils::numToStr<unsigned int>(&__rhs, item_config_ptr->id);
        std::operator+<char>((std::string *)&v27, "Trifle_", &__rhs);
        Entity::setName(v8, (const std::string *)&v27);
        std::string::~string(&v27);
        std::string::~string(&__rhs);
        v9 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        v10 = *(_QWORD *)v9 + 80LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v10)(v9, v1 + 24);
        v11 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        Entity::setRotation(v11, (const Vector3 *)(v1 + 36));
        v12 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v1 >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = (Entity *)v1;
          __asan_report_load4();
        }
        Entity::setEntityId(v12, *(_DWORD *)v1);
        v13 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)(((v1 + 68) >> 3) + 0x7FFF8000) != 0
          && (char)(((v1 + 68) & 7) + 3) >= *(_BYTE *)(((v1 + 68) >> 3) + 0x7FFF8000) )
        {
          v13 = (Entity *)(v1 + 68);
          __asan_report_load4();
        }
        Entity::setOnlyVisionUid(v13, *(_DWORD *)(v1 + 68));
        v14 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        if ( *(_BYTE *)(((v1 + 76) >> 3) + 0x7FFF8000) != 0
          && (char)(((v1 + 76) & 7) + 3) >= *(_BYTE *)(((v1 + 76) >> 3) + 0x7FFF8000) )
        {
          v14 = (Entity *)(v1 + 76);
          __asan_report_load4();
        }
        Entity::setRoomId(v14, *(_DWORD *)(v1 + 76));
        if ( *(_BYTE *)(((v1 + 72) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 72) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4();
        if ( *(_DWORD *)(v1 + 72) )
        {
          v15 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          if ( *(_BYTE *)(((v1 + 72) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 72) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4();
          Gadget::setBornType(v15, *(proto::GadgetBornType *)(v1 + 72));
        }
        v16 = &std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48))->EcsBase<Gadget,GadgetCompBase,28>;
        EcsBase<Gadget,GadgetCompBase,28u>::addComp<TrifleComp,TrifleParam const&>(
          v16,
          (const TrifleParam *)v1,
          (const TrifleParam *)v16);
        std::shared_ptr<Group>::shared_ptr(
          (std::shared_ptr<Group> *const)(v2 + 80),
          (const std::shared_ptr<Group> *)(v1 + 48));
        if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 80), 0LL)
          && (v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
              v18 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
              Group::addEntity(v17, v18)) )
        {
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/entity/entity_mgr.cpp",
            "createTrifle",
            654);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  &v27,
                  (const char (*)[16])"addEntity fails");
          v21 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v20, v21);
          common::milog::MiLogStream::~MiLogStream(&v27);
          std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)trifle_param, 0LL);
        }
        else
        {
          std::shared_ptr<Group>::shared_ptr(
            (std::shared_ptr<Group> *const)&__rhs,
            (const std::shared_ptr<Group> *)(v2 + 80));
          std::shared_ptr<Gadget>::shared_ptr(
            (std::shared_ptr<Gadget> *const)&__rhs._anon_0,
            (const std::shared_ptr<Gadget> *)(v2 + 48));
          std::function<void ()(void)>::function<EntityMgr::createTrifle(TrifleParam const&)::{lambda(void)#1},void,void>(
            (std::function<void()> *const)&v27,
            (EntityMgr::createTrifle::<lambda()> *)&__rhs);
          common::tools::ScopedCommitter::ScopedCommitter(
            (common::tools::ScopedCommitter *const)(v2 + 112),
            (std::function<void()> *)&v27);
          std::function<void ()(void)>::~function((std::function<void()> *const)&v27);
          EntityMgr::createTrifle(TrifleParam const&)::{lambda(void)#1}::~TrifleParam((EntityMgr::createTrifle::<lambda()> *const)&__rhs);
          v22 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8();
          v23 = *(_QWORD *)v22 + 400LL;
          if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v23)(v22) )
          {
            common::milog::MiLogStream::create(
              &v27,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/entity/entity_mgr.cpp",
              "createTrifle",
              666);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v27,
              (const char (*)[23])"gadget_ptr init failed");
            common::milog::MiLogStream::~MiLogStream(&v27);
            std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)trifle_param, 0LL);
          }
          else
          {
            common::tools::ScopedCommitter::commit((common::tools::ScopedCommitter *const)(v2 + 112));
            std::shared_ptr<Gadget>::shared_ptr(
              (std::shared_ptr<Gadget> *const)trifle_param,
              (std::shared_ptr<Gadget> *)(v2 + 48));
          }
          common::tools::ScopedCommitter::~ScopedCommitter((common::tools::ScopedCommitter *const)(v2 + 112));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 80));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 48));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createTrifle",
        616);
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v27, (const char (*)[20])"getBaseConfig fails");
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)trifle_param, 0LL);
    }
  }
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)trifle_param;
  return result;
};

// Line 657: range 0000000016654234-0000000016654274
void __cdecl EntityMgr::createTrifle(TrifleParam const&)::{lambda(void)#1}::TrifleParam(
        EntityMgr::createTrifle::<lambda()> *const this,
        EntityMgr::createTrifle::<lambda()> *a2)
{
  std::shared_ptr<Group>::shared_ptr(&this->__group_ptr, &a2->__group_ptr);
  std::shared_ptr<Gadget>::shared_ptr(&this->__trifle_ptr, &a2->__trifle_ptr);
};

// Line 657: range 0000000016654340-0000000016654380
void __cdecl EntityMgr::createTrifle(TrifleParam const&)::{lambda(void)#1}::TrifleParam(
        EntityMgr::createTrifle::<lambda()> *const this,
        const EntityMgr::createTrifle::<lambda()> *a2)
{
  std::shared_ptr<Group>::shared_ptr(&this->__group_ptr, &a2->__group_ptr);
  std::shared_ptr<Gadget>::shared_ptr(&this->__trifle_ptr, &a2->__trifle_ptr);
};

// Line 657: range 000000001661457C-00000000166145F8
void __cdecl EntityMgr::createTrifle(TrifleParam const&)::{lambda(void)#1}::operator()(
        const EntityMgr::createTrifle::<lambda()> *const __closure)
{
  Group *v2; // rbx
  Entity *v3; // rax

  if ( std::operator!=<Group>(0LL, &__closure->__group_ptr) && std::operator!=<Gadget>(0LL, &__closure->__trifle_ptr) )
  {
    v2 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    v3 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__closure->__trifle_ptr);
    Group::revertAddEntity(v2, v3);
  }
};

// Line 657: range 00000000166145FA-0000000016614624
void __cdecl EntityMgr::createTrifle(TrifleParam const&)::{lambda(void)#1}::~TrifleParam(
        EntityMgr::createTrifle::<lambda()> *const this)
{
  std::shared_ptr<Gadget>::~shared_ptr(&this->__trifle_ptr);
  std::shared_ptr<Group>::~shared_ptr(&this->__group_ptr);
};

// Line 674: range 00000000166150CC-0000000016615372
proto::GadgetBornType __cdecl EntityMgr::getBornTypeFromSourceEntity(const EntityPtr *source_entity_ptr)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::GadgetBornType v4; // r14d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int v7; // eax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v10; // rax
  proto::GadgetBornType result; // eax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 15 entity_type:679 64 16 15 monster_ptr:686";
  *(_QWORD *)(v1 + 16) = EntityMgr::getBornTypeFromSourceEntity;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  if ( std::operator==<Entity>(source_entity_ptr, 0LL) )
  {
    v4 = GADGET_BORN_NONE;
    goto LABEL_26;
  }
  v5 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)source_entity_ptr);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  v6 = *(_QWORD *)v5 + 24LL;
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  *(_DWORD *)(v1 + 48) = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
  v7 = *(_DWORD *)(v1 + 48);
  if ( v7 == 4 )
  {
    v4 = GADGET_BORN_GADGET;
  }
  else
  {
    if ( v7 > 4 )
      goto LABEL_25;
    if ( v7 == 1 )
    {
      v4 = GADGET_BORN_PLAYER;
      goto LABEL_26;
    }
    if ( v7 == 2 )
    {
      std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v1 + 64));
      if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v1 + 64), 0LL)
        && (v8 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64)),
            Creature::getLifeState(v8) == LIFE_ALIVE) )
      {
        v4 = GADGET_BORN_MONSTER_HIT;
      }
      else
      {
        v4 = GADGET_BORN_MONSTER_DIE;
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v1 + 64));
    }
    else
    {
LABEL_25:
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "getBornTypeFromSourceEntity",
        696);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v12,
              (const char (*)[21])"invalid entity type:");
      common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
        v10,
        (const proto::ProtEntityType *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      v4 = GADGET_BORN_NONE;
    }
  }
LABEL_26:
  result = v4;
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 704: range 0000000016615374-0000000016615F50
GadgetPtr __cdecl EntityMgr::createClientGadget(const ClientGadgetParam *client_gadget_param)
{
  const ClientGadgetParam *v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Entity *v5; // r14
  Entity *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  Entity *v9; // rax
  Entity *v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  Entity *p_room_id; // rdi
  Gadget *v13; // rcx
  Gadget *v14; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_level; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char v18; // al
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *p_authority_peer_id; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t AuthorityPeerId; // eax
  Entity *v27; // rax
  EcsBase<Gadget,GadgetCompBase,28> *v28; // rdx
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  GadgetPtr result; // rax
  uint32_t entity_id; // [rsp+1Ch] [rbp-104h]
  std::shared_ptr<Creature> p_owner_ptr; // [rsp+20h] [rbp-100h] BYREF
  std::string __rhs; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-D0h] BYREF
  char v38[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 21 client_gadget_ptr:705 64 16 13 owner_ptr:728 96 16 20 parent_owner_ptr:734";
  *(_QWORD *)(v2 + 16) = EntityMgr::createClientGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  common::tools::perf::make_shared<Gadget,unsigned int const&>((const unsigned int *)(v2 + 32), &v1->gadget_id);
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createClientGadget",
      708);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v37,
      (const char (*)[26])"client_gadget_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v37);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)client_gadget_param, 0LL);
    goto LABEL_69;
  }
  v5 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::tools::StringUtils::numToStr<unsigned int>(&__rhs, v1->gadget_id);
  std::operator+<char>((std::string *)&v37, "ClientGadget_", &__rhs);
  Entity::setName(v5, (const std::string *)&v37);
  std::string::~string(&v37);
  std::string::~string(&__rhs);
  if ( *(_BYTE *)(((unsigned __int64)&v1->entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  entity_id = v1->entity_id;
  v6 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Entity::setEntityId(v6, entity_id);
  v7 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  v8 = *(_QWORD *)v7 + 80LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Vector3 *))v8)(v7, &v1->pos);
  v9 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Entity::setRotation(v9, &v1->rot);
  v10 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Entity::setIsClientCreated(v10, 1);
  v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::shared_ptr<Creature>::shared_ptr(&p_owner_ptr, &v1->owner_ptr);
  Creature::setOwner(v11, &p_owner_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&p_owner_ptr);
  p_room_id = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v1->room_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v1->room_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_room_id = (Entity *)&v1->room_id;
    __asan_report_load4();
  }
  Entity::setRoomId(p_room_id, v1->room_id);
  v13 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&v1->master_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v1 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->master_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  Gadget::setMasterUid(v13, v1->master_uid);
  v14 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  std::shared_ptr<Creature>::shared_ptr(&p_owner_ptr, &v1->prop_owner_ptr);
  Gadget::setPropOwner(v14, &p_owner_ptr);
  std::shared_ptr<Creature>::~shared_ptr(&p_owner_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v1->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v1->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v1->level )
  {
    p_level = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v1->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v1->level >> 3) + 0x7FFF8000) <= 3 )
    {
      p_level = (std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&v1->level;
      __asan_report_load4();
    }
    Creature::setLevel(p_level, v1->level);
  }
  std::shared_ptr<Creature>::shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64), &v1->owner_ptr);
  if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
    goto LABEL_31;
  v16 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
    v16 = __asan_report_load8();
  v17 = *(_QWORD *)v16 + 24LL;
  if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
    v16 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v17)(v16) == 4 )
    v18 = 1;
  else
LABEL_31:
    v18 = 0;
  if ( v18 )
  {
    std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Creature::getOwner((const Creature *const)(v2 + 96));
    if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 96), 0LL) )
    {
      v19 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::shared_ptr<Creature>::shared_ptr(&p_owner_ptr, (const std::shared_ptr<Creature> *)(v2 + 96));
      Creature::setOwner(v19, &p_owner_ptr);
      std::shared_ptr<Creature>::~shared_ptr(&p_owner_ptr);
    }
    if ( *(char *)(((unsigned __int64)&v1->correct_owner >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&v1->correct_owner);
    if ( v1->correct_owner )
    {
      v20 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::shared_ptr<Creature>::shared_ptr(&p_owner_ptr, (const std::shared_ptr<Creature> *)(v2 + 64));
      Creature::setOwner(v20, &p_owner_ptr);
      std::shared_ptr<Creature>::~shared_ptr(&p_owner_ptr);
    }
    std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 96));
  }
  if ( *(_BYTE *)(((unsigned __int64)&v1->is_peer_id_from_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v1 + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&v1->is_peer_id_from_player >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v1->is_peer_id_from_player);
  }
  if ( v1->is_peer_id_from_player )
  {
    p_authority_peer_id = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v1->authority_peer_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v1 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->authority_peer_id >> 3) + 0x7FFF8000) )
    {
      p_authority_peer_id = (std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&v1->authority_peer_id;
      __asan_report_load4();
    }
LABEL_58:
    Creature::setAuthorityPeerId(p_authority_peer_id, v1->authority_peer_id);
    goto LABEL_59;
  }
  if ( !std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v2 + 64), 0LL) )
  {
    p_authority_peer_id = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v1->authority_peer_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v1 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->authority_peer_id >> 3) + 0x7FFF8000) )
    {
      p_authority_peer_id = (std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&v1->authority_peer_id;
      __asan_report_load4();
    }
    goto LABEL_58;
  }
  v22 = (unsigned __int64)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
    v22 = __asan_report_load8();
  v23 = *(_QWORD *)v22 + 24LL;
  if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
    v22 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(unsigned __int64))v23)(v22) == 1 )
  {
    p_authority_peer_id = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v1->authority_peer_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v1 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v1->authority_peer_id >> 3) + 0x7FFF8000) )
    {
      p_authority_peer_id = (std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)&v1->authority_peer_id;
      __asan_report_load4();
    }
    goto LABEL_58;
  }
  v24 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v25 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  AuthorityPeerId = Creature::getAuthorityPeerId(v25);
  Creature::setAuthorityPeerId(v24, AuthorityPeerId);
LABEL_59:
  v27 = (Entity *)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  Entity::setPreInstallSightGroup(v27, &v1->sight_group_ptr);
  v28 = &std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->EcsBase<Gadget,GadgetCompBase,28>;
  if ( EcsBase<Gadget,GadgetCompBase,28u>::addComp<GadgetClientComp,ClientGadgetParam const&>(
         v28,
         v1,
         (const ClientGadgetParam *)v28) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createClientGadget",
      778);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v37,
      (const char (*)[33])"addComp<GadgetClientComp> failed");
    common::milog::MiLogStream::~MiLogStream(&v37);
    std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)client_gadget_param, 0LL);
  }
  else
  {
    v29 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Creature::setIsClientGadget(v29, 1);
    v30 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
      v30 = __asan_report_load8();
    v31 = *(_QWORD *)v30 + 400LL;
    if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
      v30 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v31)(v30) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createClientGadget",
        785);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v37,
        (const char (*)[23])"gadget_ptr init failed");
      common::milog::MiLogStream::~MiLogStream(&v37);
      std::shared_ptr<Gadget>::shared_ptr((std::shared_ptr<Gadget> *const)client_gadget_param, 0LL);
    }
    else
    {
      std::shared_ptr<Gadget>::shared_ptr(
        (std::shared_ptr<Gadget> *const)client_gadget_param,
        (std::shared_ptr<Gadget> *)(v2 + 32));
    }
  }
  std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v2 + 64));
LABEL_69:
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Gadget,(__gnu_cxx::_Lock_policy)2>::element_type *)client_gadget_param;
  return result;
};

// Line 793: range 0000000016615F52-0000000016616D16
RegionPtr __cdecl EntityMgr::createRegion(const RegionParam *region_param)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  int v6; // r14d
  SphereRegion *v7; // rcx
  int v8; // r14d
  CubicRegion *v9; // rax
  int v10; // r14d
  CylinderRegion *v11; // rcx
  CylinderRegion *v12; // rcx
  int v13; // r14d
  float x; // xmm1_4
  float y; // xmm1_4
  PolygonRegion *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdi
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdi
  Group *v24; // r14
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r14
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  data::VisionLevelType v32; // eax
  RegionPtr result; // rax
  std::vector<data::Point2D>::const_iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::vector<data::Point2D>::const_iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  const std::vector<data::Point2D> *__for_range; // [rsp+20h] [rbp-140h]
  const data::Point2D *relative_point; // [rsp+28h] [rbp-138h]
  std::string __rhs; // [rsp+30h] [rbp-130h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-110h] BYREF
  char v41[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 12 13 abs_point:845 64 16 14 region_ptr:794 96 16 13 group_ptr:865 128 24 13 point_vec:842";
  *(_QWORD *)(v2 + 16) = EntityMgr::createRegion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219020288;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  if ( *(_BYTE *)(((v1 + 20) >> 3) + 0x7FFF8000) != 0
    && (char)(((v1 + 20) & 7) + 3) >= *(_BYTE *)(((v1 + 20) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v5 = *(_DWORD *)(v1 + 20);
  if ( v5 == 4 )
  {
    common::tools::perf::make_shared<PolygonRegion>();
    if ( std::operator==<PolygonRegion>((const std::shared_ptr<PolygonRegion> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createRegion",
        839);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v40,
        (const char (*)[27])"polygon_region_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v40);
      std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)region_param, 0LL);
      v13 = 0;
    }
    else
    {
      std::vector<data::Point2D>::vector((std::vector<data::Point2D> *const)(v2 + 128));
      __for_range = (const std::vector<data::Point2D> *)(v1 + 72);
      __for_begin._M_current = std::vector<data::Point2D>::begin((const std::vector<data::Point2D> *const)(v1 + 72))._M_current;
      __for_end._M_current = std::vector<data::Point2D>::end((const std::vector<data::Point2D> *const)(v1 + 72))._M_current;
      while ( __gnu_cxx::operator!=<data::Point2D const*,std::vector<data::Point2D>>(&__for_begin, &__for_end) )
      {
        relative_point = __gnu_cxx::__normal_iterator<data::Point2D const*,std::vector<data::Point2D>>::operator*(&__for_begin);
        *(_DWORD *)(v2 + 32) = 0;
        *(_DWORD *)(v2 + 36) = 0;
        *(_BYTE *)(v2 + 40) = 0;
        if ( *(_BYTE *)(((unsigned __int64)relative_point >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)relative_point & 7) + 3) >= *(_BYTE *)(((unsigned __int64)relative_point >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        x = relative_point->x;
        if ( *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 8) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4();
        *(float *)(v2 + 32) = *(float *)(v1 + 8) + x;
        if ( *(_BYTE *)(((unsigned __int64)&relative_point->y >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)relative_point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&relative_point->y >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        y = relative_point->y;
        if ( *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 16) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4();
        *(float *)(v2 + 36) = *(float *)(v1 + 16) + y;
        std::vector<data::Point2D>::push_back(
          (std::vector<data::Point2D> *const)(v2 + 128),
          (const std::vector<data::Point2D>::value_type *)(v2 + 32));
        __gnu_cxx::__normal_iterator<data::Point2D const*,std::vector<data::Point2D>>::operator++(&__for_begin);
      }
      v16 = std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PolygonRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      PolygonRegion::initByPointVecAndAABBSiize(v16, (const data::Point2DList *)(v2 + 128), (const Vector3 *)(v1 + 96));
      std::shared_ptr<Region>::operator=<PolygonRegion>(
        (std::shared_ptr<Region> *const)(v2 + 64),
        (const std::shared_ptr<PolygonRegion> *)(v2 + 96));
      std::vector<data::Point2D>::~vector((std::vector<data::Point2D> *const)(v2 + 128));
      v13 = 1;
    }
    std::shared_ptr<PolygonRegion>::~shared_ptr((std::shared_ptr<PolygonRegion> *const)(v2 + 96));
    if ( !v13 )
      goto LABEL_74;
LABEL_50:
    v18 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v1 >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4();
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, *(_DWORD *)v1);
    std::operator+<char>((std::string *)&v40, "Region_", &__rhs);
    Entity::setName(v18, (const std::string *)&v40);
    std::string::~string(&v40);
    std::string::~string(&__rhs);
    v19 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v1 >> 3) + 0x7FFF8000) <= 3 )
    {
      v19 = (std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)v1;
      __asan_report_load4();
    }
    Entity::setConfigId(v19, *(_DWORD *)v1);
    v20 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8();
    v21 = *(_QWORD *)v20 + 80LL;
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v21)(v20, v1 + 8);
    v22 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((v1 + 56) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 56) >> 3) + 0x7FFF8000) <= 3 )
    {
      v22 = (std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)(v1 + 56);
      __asan_report_load4();
    }
    Entity::setRoomId(v22, *(_DWORD *)(v1 + 56));
    v23 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((v1 + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v1 + 4) & 7) + 3) >= *(_BYTE *)(((v1 + 4) >> 3) + 0x7FFF8000) )
    {
      v23 = (std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)(v1 + 4);
      __asan_report_load4();
    }
    Entity::setEntityId(v23, *(_DWORD *)(v1 + 4));
    std::shared_ptr<Group>::shared_ptr(
      (std::shared_ptr<Group> *const)(v2 + 96),
      (const std::shared_ptr<Group> *)(v1 + 40));
    if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL)
      && (v24 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
          v25 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          Group::addEntity(v24, v25)) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createRegion",
        868);
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v40, (const char (*)[16])"addEntity fails");
      v28 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      common::milog::MiLogStream::operator<<<Region,(Region*)0>(v27, v28);
      common::milog::MiLogStream::~MiLogStream(&v40);
      std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)region_param, 0LL);
    }
    else
    {
      v29 = std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v30 = (unsigned __int64)std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Region,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)((v30 >> 3) + 0x7FFF8000) )
        v30 = __asan_report_load8();
      v31 = *(_QWORD *)v30 + 264LL;
      if ( *(_BYTE *)((v31 >> 3) + 0x7FFF8000) )
        v30 = __asan_report_load8();
      v32 = (*(unsigned int (__fastcall **)(unsigned __int64))v31)(v30);
      Entity::setVisionLevelType(v29, v32);
      std::shared_ptr<Region>::shared_ptr(
        (std::shared_ptr<Region> *const)region_param,
        (std::shared_ptr<Region> *)(v2 + 64));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
    goto LABEL_74;
  }
  if ( v5 > 4 )
  {
LABEL_49:
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createRegion",
      855);
    v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v40, (const char (*)[15])"invalid shape:");
    common::milog::MiLogStream::operator<<<data::RegionShape,(data::RegionShape*)0>(
      v17,
      (const data::RegionShape *)(v1 + 20));
    common::milog::MiLogStream::~MiLogStream(&v40);
    std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)region_param, 0LL);
    goto LABEL_74;
  }
  if ( v5 == 3 )
  {
    common::tools::perf::make_shared<CylinderRegion>();
    if ( std::operator==<CylinderRegion>((const std::shared_ptr<CylinderRegion> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createRegion",
        826);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v40,
        (const char (*)[28])"cylinder_region_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v40);
      std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)region_param, 0LL);
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4();
      CylinderRegion::setRadius(v11, *(float *)(v1 + 64));
      v12 = std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CylinderRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((v1 + 68) >> 3) + 0x7FFF8000) != 0
        && (char)(((v1 + 68) & 7) + 3) >= *(_BYTE *)(((v1 + 68) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      CylinderRegion::setHeight(v12, *(float *)(v1 + 68));
      std::shared_ptr<Region>::operator=<CylinderRegion>(
        (std::shared_ptr<Region> *const)(v2 + 64),
        (const std::shared_ptr<CylinderRegion> *)(v2 + 96));
      v10 = 1;
    }
    std::shared_ptr<CylinderRegion>::~shared_ptr((std::shared_ptr<CylinderRegion> *const)(v2 + 96));
    if ( !v10 )
      goto LABEL_74;
    goto LABEL_50;
  }
  if ( v5 == 1 )
  {
    common::tools::perf::make_shared<SphereRegion>();
    if ( std::operator==<SphereRegion>((const std::shared_ptr<SphereRegion> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/entity/entity_mgr.cpp",
        "createRegion",
        802);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v40,
        (const char (*)[26])"sphere_region_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v40);
      std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)region_param, 0LL);
      v6 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<SphereRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SphereRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 24) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4();
      SphereRegion::setRadius(v7, *(float *)(v1 + 24));
      std::shared_ptr<Region>::operator=<SphereRegion>(
        (std::shared_ptr<Region> *const)(v2 + 64),
        (const std::shared_ptr<SphereRegion> *)(v2 + 96));
      v6 = 1;
    }
    std::shared_ptr<SphereRegion>::~shared_ptr((std::shared_ptr<SphereRegion> *const)(v2 + 96));
    if ( !v6 )
      goto LABEL_74;
    goto LABEL_50;
  }
  if ( v5 != 2 )
    goto LABEL_49;
  common::tools::perf::make_shared<CubicRegion>();
  if ( std::operator==<CubicRegion>((const std::shared_ptr<CubicRegion> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createRegion",
      814);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v40,
      (const char (*)[25])"cubic_region_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v40);
    std::shared_ptr<Region>::shared_ptr((std::shared_ptr<Region> *const)region_param, 0LL);
    v8 = 0;
  }
  else
  {
    v9 = std::__shared_ptr_access<CubicRegion,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CubicRegion,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    CubicRegion::setSize(v9, (const Vector3 *)(v1 + 28));
    std::shared_ptr<Region>::operator=<CubicRegion>(
      (std::shared_ptr<Region> *const)(v2 + 64),
      (const std::shared_ptr<CubicRegion> *)(v2 + 96));
    v8 = 1;
  }
  std::shared_ptr<CubicRegion>::~shared_ptr((std::shared_ptr<CubicRegion> *const)(v2 + 96));
  if ( v8 )
    goto LABEL_50;
LABEL_74:
  std::shared_ptr<Region>::~shared_ptr((std::shared_ptr<Region> *const)(v2 + 64));
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Region,(__gnu_cxx::_Lock_policy)2>::element_type *)region_param;
  return result;
};

// Line 877: range 0000000016616D18-0000000016617005
SceneEntityPtr __cdecl EntityMgr::createSceneEntity(Scene *scene)
{
  const Scene *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  Entity *v6; // r14
  unsigned int SceneId; // eax
  Entity *v8; // rax
  Entity *v9; // r14
  SceneEntityPtr result; // rax
  ScenePtr p_scene_ptr; // [rsp+10h] [rbp-C0h] BYREF
  std::string __rhs; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-90h] BYREF
  char v14[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 20 scene_entity_ptr:878";
  *(_QWORD *)(v2 + 16) = EntityMgr::createSceneEntity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<SceneEntity>();
  if ( std::operator==<SceneEntity>((const std::shared_ptr<SceneEntity> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createSceneEntity",
      881);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v13,
           (const char (*)[25])"scene_entity_ptr is null");
    common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v5, v1);
    common::milog::MiLogStream::~MiLogStream(&v13);
    std::shared_ptr<SceneEntity>::shared_ptr((std::shared_ptr<SceneEntity> *const)scene, 0LL);
  }
  else
  {
    v6 = (Entity *)std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    SceneId = Scene::getSceneId(v1);
    common::tools::StringUtils::numToStr<unsigned int>(&__rhs, SceneId);
    std::operator+<char>((std::string *)&v13, "Scene_", &__rhs);
    Entity::setName(v6, (const std::string *)&v13);
    std::string::~string(&v13);
    std::string::~string(&__rhs);
    v8 = (Entity *)std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Entity::setEntityId(v8, 0x13800001u);
    v9 = (Entity *)std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    toThisPtr<Scene>((Scene *)&p_scene_ptr);
    Entity::setScene(v9, &p_scene_ptr);
    std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
    std::shared_ptr<SceneEntity>::shared_ptr(
      (std::shared_ptr<SceneEntity> *const)scene,
      (std::shared_ptr<SceneEntity> *)(v2 + 32));
  }
  std::shared_ptr<SceneEntity>::~shared_ptr((std::shared_ptr<SceneEntity> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<SceneEntity,(__gnu_cxx::_Lock_policy)2>::element_type *)scene;
  return result;
};

// Line 894: range 0000000016617006-0000000016617268
AvatarTeamEntityPtr __cdecl EntityMgr::createAvatarTeamEntity(Scene *scene)
{
  Scene *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  Entity *v6; // rax
  Entity *v7; // r14
  AvatarTeamEntityPtr result; // rax
  uint32_t team_entity_id; // [rsp+1Ch] [rbp-A4h]
  ScenePtr p_scene_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 team_entity_ptr:895";
  *(_QWORD *)(v2 + 16) = EntityMgr::createAvatarTeamEntity;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<AvatarTeamEntity>();
  if ( std::operator==<AvatarTeamEntity>((const std::shared_ptr<AvatarTeamEntity> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createAvatarTeamEntity",
      898);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v11,
           (const char (*)[24])"team_entity_ptr is null");
    common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v5, v1);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::shared_ptr<AvatarTeamEntity>::shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)scene, 0LL);
  }
  else
  {
    team_entity_id = Scene::genNewEntityId(v1, PROT_ENTITY_TEAM);
    v6 = (Entity *)std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Entity::setEntityId(v6, team_entity_id);
    v7 = (Entity *)std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    toThisPtr<Scene>((Scene *)&p_scene_ptr);
    Entity::setScene(v7, &p_scene_ptr);
    std::shared_ptr<Scene>::~shared_ptr(&p_scene_ptr);
    std::shared_ptr<AvatarTeamEntity>::shared_ptr(
      (std::shared_ptr<AvatarTeamEntity> *const)scene,
      (std::shared_ptr<AvatarTeamEntity> *)(v2 + 32));
  }
  std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2>::element_type *)scene;
  return result;
};

// Line 909: range 000000001661726A-00000000166175C0
PlayerEyePointPtr __cdecl EntityMgr::createPlayerEyePoint(
        Player *player,
        Scene *scene,
        Region *region,
        Region *related_big_region)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *); // r15
  const Vector3 *Position; // rax
  PlayerEyePoint *v12; // r14
  PlayerEyePoint *v13; // r14
  PlayerEyePoint *v14; // r14
  PlayerEyePointPtr result; // rax
  uint32_t entity_id; // [rsp+3Ch] [rbp-C4h]
  PlayerPtr p_player_ptr; // [rsp+40h] [rbp-C0h] BYREF
  RegionPtr p_region_ptr; // [rsp+50h] [rbp-B0h] BYREF
  RegionPtr v21; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-90h] BYREF
  char v23[112]; // [rsp+90h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 17 eye_point_ptr:910";
  *(_QWORD *)(v4 + 16) = EntityMgr::createPlayerEyePoint;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<PlayerEyePoint>();
  if ( std::operator==<PlayerEyePoint>((const std::shared_ptr<PlayerEyePoint> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/entity/entity_mgr.cpp",
      "createPlayerEyePoint",
      913);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v22, (const char (*)[22])"eye_point_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v22);
    std::shared_ptr<PlayerEyePoint>::shared_ptr((std::shared_ptr<PlayerEyePoint> *const)player, 0LL);
  }
  else
  {
    entity_id = Scene::genNewEntityId((Scene *const)region, PROT_ENTITY_EYE_POINT);
    v7 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    Entity::setEntityId(v7, entity_id);
    v8 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (unsigned __int64)(v8->_vptr_DescribalBase + 10);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(void (__fastcall **)(std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const Vector3 *))v9;
    Position = Entity::getPosition(related_big_region);
    v10(v8, Position);
    v12 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    toThisPtr<Player>((Player *)&p_player_ptr);
    PlayerEyePoint::setPlayer(v12, &p_player_ptr);
    std::shared_ptr<Player>::~shared_ptr(&p_player_ptr);
    v13 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    toThisPtr<Region>((Region *)&p_region_ptr);
    PlayerEyePoint::setRegion(v13, &p_region_ptr);
    std::shared_ptr<Region>::~shared_ptr(&p_region_ptr);
    v14 = std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    toThisPtr<Region>((Region *)&v21);
    PlayerEyePoint::setRelatedBigRegion(v14, &v21);
    std::shared_ptr<Region>::~shared_ptr(&v21);
    std::shared_ptr<PlayerEyePoint>::shared_ptr(
      (std::shared_ptr<PlayerEyePoint> *const)player,
      (std::shared_ptr<PlayerEyePoint> *)(v4 + 32));
  }
  std::shared_ptr<PlayerEyePoint>::~shared_ptr((std::shared_ptr<PlayerEyePoint> *const)(v4 + 32));
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<PlayerEyePoint,(__gnu_cxx::_Lock_policy)2>::element_type *)player;
  return result;
};
