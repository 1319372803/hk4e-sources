// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/boss_chest_comp.cpp

// Line 30: range 000000001313619A-00000000131363A2
void __cdecl BossChestComp::BossChestComp(BossChestComp *const this, Gadget *gadget, const ChestParam *chest_param)
{
  int (**v3)(...); // rdx
  uint32_t chest_drop_id; // ecx
  bool is_auto_pick; // cl

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'BossChestComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)chest_param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)chest_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chest_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  chest_drop_id = chest_param->chest_drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chest_drop_id_);
  }
  this->chest_drop_id_ = chest_drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&chest_param->is_auto_pick >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)chest_param + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&chest_param->is_auto_pick >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load1(&chest_param->is_auto_pick);
  }
  is_auto_pick = chest_param->is_auto_pick;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_auto_pick_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_auto_pick_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_auto_pick_);
  }
  this->is_auto_pick_ = is_auto_pick;
  std::set<unsigned int>::set(&this->qualify_uid_set_);
  std::set<unsigned int>::set(&this->remain_uid_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time_);
  }
  this->dead_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_level_);
  }
  this->dead_level_ = 0;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->life_timer_ptr_);
};

// Line 37: range 00000000131363A4-00000000131365C2
int32_t __cdecl BossChestComp::toBin(const BossChestComp *const this, proto::GroupGadgetBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  proto::BossChestBin *boss_chest; // [rsp+28h] [rbp-18h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-10h]
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-8h]

  boss_chest = proto::GroupGadgetBin::mutable_boss_chest(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BossChestBin::set_dead_time(boss_chest, this->dead_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BossChestBin::set_dead_level(boss_chest, this->dead_level_);
  __for_range = &this->remain_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->remain_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->remain_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BossChestBin::add_remain_uid_list(boss_chest, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->qualify_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->qualify_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BossChestBin::add_qualify_uid_list(boss_chest, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 53: range 00000000131365C4-000000001313687E
int32_t __cdecl BossChestComp::fromBin(BossChestComp *const this, const proto::GroupGadgetBin *bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::set<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-44h] BYREF
  uint32_t idx; // [rsp+20h] [rbp-40h]
  uint32_t idx_0; // [rsp+24h] [rbp-3Ch]
  const proto::BossChestBin *boss_chest; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-30h] BYREF

  boss_chest = proto::GroupGadgetBin::boss_chest(bin);
  v2 = proto::BossChestBin::dead_time(boss_chest);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time_);
  }
  this->dead_time_ = v2;
  v3 = proto::BossChestBin::dead_level(boss_chest);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dead_level_);
  }
  this->dead_level_ = v3;
  std::set<unsigned int>::clear(&this->remain_uid_set_);
  for ( idx = 0; ; ++idx )
  {
    v4 = proto::BossChestBin::remain_uid_list_size(boss_chest);
    if ( idx >= v4 )
      break;
    __x = proto::BossChestBin::remain_uid_list(boss_chest, idx);
    std::set<unsigned int>::insert(&this->remain_uid_set_, &__x);
  }
  std::set<unsigned int>::clear(&this->qualify_uid_set_);
  for ( idx_0 = 0; ; ++idx_0 )
  {
    v5 = proto::BossChestBin::qualify_uid_list_size(boss_chest);
    if ( idx_0 >= v5 )
      break;
    __x = proto::BossChestBin::qualify_uid_list(boss_chest, idx_0);
    std::set<unsigned int>::insert(&this->qualify_uid_set_, &__x);
  }
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/boss_chest_comp.cpp",
    "fromBin",
    67);
  v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v20, (const char (*)[20])"fromBin dead_time: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->dead_time_);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" dead_level: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->dead_level_);
  v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])" remain_uid_set_: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, &this->remain_uid_set_);
  v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v11, (const char (*)[19])" qualify_uid_set: ");
  v13 = common::milog::MiLogStream::operator<<<unsigned int>(v12, &this->qualify_uid_set_);
  v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v14, this->gadget_);
  common::milog::MiLogStream::~MiLogStream(&v20);
  return 0;
};

// Line 74: range 0000000013136880-0000000013136FD9
int32_t __cdecl BossChestComp::toClient(const BossChestComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t ConfigId; // r15d
  uint32_t GroupId; // eax
  google::protobuf::uint32 *v8; // rdx
  google::protobuf::uint32 *v9; // rdx
  uint32_t v10; // r14d
  Scene *v11; // rcx
  char v12; // al
  std::_Rb_tree_const_iterator<unsigned int>::reference v13; // rdx
  uint32_t v14; // eax
  Player *v16; // rax
  PlayerSceneComp *SceneComp; // r14
  proto::WeeklyBossResinDiscountInfo *v18; // rcx
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  proto::BossChestInfo *boss_chest; // [rsp+40h] [rbp-E0h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+48h] [rbp-D8h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-D0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::WeeklyBossResinDiscountInfo> *uid_discount_map; // [rsp+60h] [rbp-C0h]
  const std::set<unsigned int> *__for_range_1; // [rsp+68h] [rbp-B8h]
  char v28[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 uid:95 64 16 12 scene_ptr:91 96 16 13 player_ptr:97";
  *(_QWORD *)(v2 + 16) = BossChestComp::toClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  boss_chest = proto::SceneGadgetInfo::mutable_boss_chest(gadget_info);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
  gadget_script_config_ptr = LuaConfigMgr::findGadgetScriptConfig(p_lua_config_mgr, GroupId, ConfigId);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( gadget_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BossChestInfo::set_monster_config_id(boss_chest, gadget_script_config_ptr->boss_chest.monster_config_id);
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_script_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BossChestInfo::set_resin(boss_chest, gadget_script_config_ptr->boss_chest.resin);
  }
  __for_range = &this->remain_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->remain_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->remain_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BossChestInfo::add_remain_uid_list(boss_chest, *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->qualify_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->qualify_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BossChestInfo::add_qualify_uid_list(boss_chest, *v9);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( !std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    goto LABEL_31;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = Entity::getGroupId((const Entity *const)this->gadget_);
  v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( BossChestComp::isWeeklyBossChest(this, v11, v10) )
    v12 = 1;
  else
LABEL_31:
    v12 = 0;
  if ( v12 )
  {
    uid_discount_map = proto::BossChestInfo::mutable_uid_discount_map(boss_chest);
    __for_range_1 = &this->qualify_uid_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->qualify_uid_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v13;
      v14 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      Scene::findPlayer((const Scene *const)(v2 + 96), v14);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 96)) && gadget_script_config_ptr )
      {
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        SceneComp = Player::getSceneComp(v16);
        v18 = google::protobuf::Map<unsigned int,proto::WeeklyBossResinDiscountInfo>::operator[](
                uid_discount_map,
                (const google::protobuf::Map<unsigned int,proto::WeeklyBossResinDiscountInfo>::key_type *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_script_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3)
                                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PlayerSceneComp::fillWeeklyBossResinDiscountInfo(SceneComp, gadget_script_config_ptr->boss_chest.resin, v18);
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = 0;
  if ( v28 == (char *)v2 )
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

// Line 109: range 0000000013136FDA-0000000013137CAA
int32_t __cdecl BossChestComp::start(BossChestComp *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaConfigMgr *p_lua_config_mgr; // r15
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // eax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  _BOOL4 v18; // r15d
  Group *v19; // rcx
  common::milog::MiLogStream *v20; // rcx
  int v21; // r15d
  Scene *v22; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  common::milog::MiLogStream *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  uint32_t config_id; // [rsp+14h] [rbp-16Ch]
  google::protobuf::uint32 now_scene_time; // [rsp+24h] [rbp-15Ch]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-150h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-130h] BYREF
  char v35[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 21 monster_config_id:122 48 16 13 group_ptr:110 80 16 15 monster_ptr:142 112 16 13 scene_"
                        "ptr:151 144 48 12 die_info:149";
  *(_QWORD *)(v2 + 16) = BossChestComp::start;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getGroup((const Entity *const)(v2 + 48));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "start",
      113);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v34, (const char (*)[15])"getGroup fails");
    common::milog::MiLogStream::~MiLogStream(&v34);
    v1 = -1;
    goto LABEL_62;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 112));
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112))->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  config_id = Entity::getConfigId((const Entity *const)this->gadget_);
  v6 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  GroupId = Group::getGroupId(v6);
  gadget_script_config_ptr = LuaConfigMgr::findGadgetScriptConfig(p_lua_config_mgr, GroupId, config_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 112));
  if ( !gadget_script_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "start",
      119);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v34,
           (const char (*)[39])"findGadgetScriptConfig fails, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_29:
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v8, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v1 = -1;
    goto LABEL_62;
  }
  if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = gadget_script_config_ptr->boss_chest.monster_config_id;
  if ( !*(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "start",
      125);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v34,
           (const char (*)[33])"monster_config_id == 0, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_29;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->dead_time_ )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/gadget/boss_chest_comp.cpp",
      "start",
      131);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v34, (const char (*)[9])"gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this->gadget_);
    v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v10,
            (const char (*)[40])" start and startLifeTimer, dead_time_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->dead_time_);
    common::milog::MiLogStream::~MiLogStream(&v34);
    BossChestComp::startLifeTimer(this);
LABEL_61:
    v1 = 0;
    goto LABEL_62;
  }
  if ( !std::set<unsigned int>::empty(&this->qualify_uid_set_) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gadget/boss_chest_comp.cpp",
      "start",
      139);
    v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v34,
           (const char (*)[58])"dead_time_ == 0, but qualify_uid_set_ not empty! gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_29;
  }
  v12 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
  Group::findEntityByConfigId<Monster>((Group *const)(v2 + 80), v12);
  if ( std::operator!=<Monster>((const std::shared_ptr<Monster> *)(v2 + 80), 0LL)
    && (v13 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
        Creature::getLifeState(v13) == LIFE_ALIVE) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "start",
      145);
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v34,
            (const char (*)[20])"monster_config_id: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])off_24F3FD60);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v17, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v1 = -1;
    v18 = 0;
  }
  else
  {
    proto::BossDieInfoBin::BossDieInfoBin((proto::BossDieInfoBin *const)(v2 + 144));
    v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    Group::getAndClearBossDieInfo(
      v19,
      gadget_script_config_ptr->boss_chest.monster_config_id,
      (proto::BossDieInfoBin *)(v2 + 144));
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v2 + 112));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 112), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/boss_chest_comp.cpp",
        "start",
        154);
      v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v34,
              (const char (*)[23])"scene_ptr is nullptr, ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v20, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v1 = -1;
      v21 = 0;
    }
    else
    {
      v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      now_scene_time = Scene::getSceneTimeSeconds(v22);
      if ( now_scene_time > proto::BossDieInfoBin::dead_time((const proto::BossDieInfoBin *const)(v2 + 144))
        && now_scene_time - proto::BossDieInfoBin::dead_time((const proto::BossDieInfoBin *const)(v2 + 144)) > 0x12C )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/boss_chest_comp.cpp",
          "start",
          161);
        v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v33, (const char (*)[11])"die_info: ");
        google::protobuf::Message::ShortDebugString[abi:cxx11](
          (std::string *)&v34,
          (google::protobuf::Message *)(v2 + 144));
        v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)&v34);
        v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v26, this->gadget_);
        std::string::~string(&v34);
        common::milog::MiLogStream::~MiLogStream(&v33);
        v1 = -1;
        v21 = 0;
      }
      else
      {
        if ( proto::BossDieInfoBin::surround_uid_list_size((const proto::BossDieInfoBin *const)(v2 + 144)) > 0 )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/gadget/boss_chest_comp.cpp",
            "start",
            167);
          v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v34, (const char (*)[9])"gadget: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v28 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v27, this->gadget_);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v28,
            (const char (*)[28])" start and onBossMonsterDie");
          common::milog::MiLogStream::~MiLogStream(&v34);
          BossChestComp::onBossMonsterDie(this, (proto::BossDieInfoBin *)(v2 + 144), 0);
        }
        v21 = 1;
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
    proto::BossDieInfoBin::~BossDieInfoBin((proto::BossDieInfoBin *const)(v2 + 144));
    v18 = v21 == 1;
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 80));
  if ( v18 )
    goto LABEL_61;
LABEL_62:
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 48));
  result = v1;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 175: range 0000000013137CAC-0000000013138C11
int32_t __cdecl BossChestComp::interactCheck(
        BossChestComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t ConfigId; // r15d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  char v11; // al
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rcx
  PlayerDungeonComp *DungeonComp; // rax
  char v15; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool v17; // r15
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  time_t Now; // rcx
  common::milog::MiLogStream *v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t Level; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  Scene *v29; // rsi
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v31; // rax
  uint32_t v32; // r14d
  uint32_t v33; // ecx
  PlayerItemComp *v34; // rax
  data::ItemLimitType GadgetItemLimitType; // eax
  Gadget *gadget; // rdx
  PlayerItemComp *ItemComp; // rdi
  uint32_t v38; // esi
  common::milog::MiLogStream *v39; // rax
  int32_t result; // eax
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+28h] [rbp-188h]
  std::tuple_element<0,std::tuple<unsigned int,bool> >::type *resin; // [rsp+30h] [rbp-180h]
  uint32_t *drop_id; // [rsp+40h] [rbp-170h]
  uint32_t *drop_count; // [rsp+48h] [rbp-168h]
  std::tuple<unsigned int,bool> __t; // [rsp+50h] [rbp-160h] BYREF
  std::pair<unsigned int,unsigned int> __in; // [rsp+58h] [rbp-158h] BYREF
  common::milog::MiLogStream v48; // [rsp+60h] [rbp-150h] BYREF
  char v49[304]; // [rsp+80h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 14 dungeon_id:194 48 4 7 ret:257 64 16 13 scene_ptr:188 96 16 20 player_world_ptr:212 128"
                        " 16 19 owner_world_ptr:213 160 16 9 param:247 192 24 10 reason:255";
  *(_QWORD *)(v3 + 16) = BossChestComp::interactCheck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.lua_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
  gadget_script_config_ptr = LuaConfigMgr::findGadgetScriptConfig(p_lua_config_mgr, GroupId, ConfigId);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  if ( gadget_script_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Gadget::getState(this->gadget_) )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Gadget::getState(this->gadget_) == 102 )
LABEL_19:
      v11 = 0;
    else
      v11 = 1;
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/gadget/boss_chest_comp.cpp",
        "interactCheck",
        185);
      v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              &v48,
              (const char (*)[17])"gadget is locked");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v12, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v10 = 804;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v3 + 64));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/boss_chest_comp.cpp",
          "interactCheck",
          191);
        v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v48,
                (const char (*)[30])"getScene is nullptr, gadget: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v10 = -1;
      }
      else
      {
        DungeonComp = Player::getDungeonComp(player);
        *(_DWORD *)(v3 + 32) = PlayerDungeonComp::getCurDungeonId(DungeonComp);
        v15 = 0;
        v17 = 0;
        if ( *(_DWORD *)(v3 + 32) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 160));
          v15 = 1;
          v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          if ( FeatureSwitchMgr::isDungeonClosed(&v16->feature_switch_mgr, *(_DWORD *)(v3 + 32)) )
            v17 = 1;
        }
        if ( v15 )
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
        if ( v17 )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/boss_chest_comp.cpp",
            "interactCheck",
            197);
          v18 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v48,
                  (const char (*)[47])"find findDungeonExcelConfig failed,dungeon id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v48);
          v10 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( this->dead_time_ )
          {
            Now = common::tools::TimeUtils::getNow();
            if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( Now < this->dead_time_ )
            {
              Player::getSceneComp(player);
              PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 96));
              v22 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                v22 = __asan_report_load8();
              v23 = *(_QWORD *)v22 + 64LL;
              if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
                v22 = __asan_report_load8();
              (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v23)(v3 + 128, v22);
              v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              if ( Scene::getSceneType(v24) != SCENE_DUNGEON
                && std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL)
                && std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 128), 0LL)
                && std::operator!=<PlayerWorld,PlayerWorld>(
                     (const std::shared_ptr<PlayerWorld> *)(v3 + 96),
                     (const std::shared_ptr<PlayerWorld> *)(v3 + 128))
                && (v25 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
                    Level = PlayerWorld::getLevel(v25),
                    v27 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128)),
                    Level < PlayerWorld::getLevel(v27)) )
              {
                v10 = 812;
              }
              else
              {
                *(_DWORD *)(v3 + 48) = Player::getUid(player);
                if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                        &this->qualify_uid_set_,
                        (const unsigned int *)(v3 + 48)) )
                {
                  v10 = 809;
                }
                else
                {
                  *(_DWORD *)(v3 + 48) = Player::getUid(player);
                  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                          &this->remain_uid_set_,
                          (const unsigned int *)(v3 + 48)) )
                  {
                    v10 = 813;
                  }
                  else
                  {
                    v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                    if ( !BossChestComp::isTakeNumValid(this, v29, player, gadget_script_config_ptr) )
                    {
                      v10 = 811;
                    }
                    else
                    {
                      BasicComp = Player::getBasicComp(player);
                      if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x2Du) )
                      {
                        v31 = Player::getBasicComp(player);
                        PlayerBasicComp::setOpenState(v31, 0x2Du, 1u, 1);
                      }
                      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v32 = Entity::getGroupId((const Entity *const)this->gadget_);
                      v33 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                      if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)gadget_script_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3)
                                                                                                + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      BossChestComp::getResinCost(
                        (const BossChestComp *const)&__t,
                        (uint32_t)this,
                        (Scene *)gadget_script_config_ptr->boss_chest.resin,
                        v33,
                        (Player *)v32);
                      resin = std::get<0ul,unsigned int,bool>(&__t);
                      std::get<1ul,unsigned int,bool>(&__t);
                      if ( *(_BYTE *)(((unsigned __int64)resin >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)resin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)resin >> 3)
                                                                                + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      if ( *resin
                        && (*(_QWORD *)(v3 + 160) = 0LL,
                            *(_QWORD *)(v3 + 168) = 0LL,
                            *(_DWORD *)(v3 + 160) = 106,
                            *(_DWORD *)(v3 + 164) = *resin,
                            v34 = Player::getItemComp(player),
                            PlayerItemComp::checkSubItem(v34, (const ItemParam *)(v3 + 160))) )
                      {
                        v10 = 660;
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        GadgetItemLimitType = Gadget::getGadgetItemLimitType(this->gadget_);
                        ActionReason::ActionReason(
                          (ActionReason *const)(v3 + 192),
                          ACTION_REASON_OPEN_WORLD_BOSS_CHEST,
                          GadgetItemLimitType);
                        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                          __asan_report_load8();
                        gadget = this->gadget_;
                        if ( *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&this->chest_drop_id_ >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4();
                        }
                        __in = Gadget::findDropIdCountByFallbackDropIdOrDropTag(gadget, this->chest_drop_id_);
                        drop_id = std::get<0ul,unsigned int,unsigned int>(&__in);
                        drop_count = std::get<1ul,unsigned int,unsigned int>(&__in);
                        ItemComp = Player::getItemComp(player);
                        if ( *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)drop_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_count >> 3)
                                                                                       + 0x7FFF8000) )
                        {
                          ItemComp = (PlayerItemComp *)drop_count;
                          __asan_report_load4();
                        }
                        v38 = *drop_count;
                        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3)
                                                                                    + 0x7FFF8000) )
                        {
                          ItemComp = (PlayerItemComp *)drop_id;
                          __asan_report_load4();
                        }
                        *(_DWORD *)(v3 + 48) = PlayerItemComp::checkFrontLooseGrantDropItems(
                                                 ItemComp,
                                                 *drop_id,
                                                 v38,
                                                 (const ActionReason *)(v3 + 192),
                                                 0LL);
                        if ( *(_DWORD *)(v3 + 48) )
                        {
                          common::milog::MiLogStream::create(
                            &v48,
                            &common::milog::MiLogDefault::default_log_obj_,
                            1u,
                            "./src/gadget/boss_chest_comp.cpp",
                            "interactCheck",
                            260);
                          v39 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                  &v48,
                                  (const char (*)[43])"checkFrontLooseGrantDropItems failed, ret:");
                          common::milog::MiLogStream::operator<<<int,(int *)0>(v39, (const int *)(v3 + 48));
                          common::milog::MiLogStream::~MiLogStream(&v48);
                        }
                        v10 = *(_DWORD *)(v3 + 48);
                      }
                    }
                  }
                }
              }
              std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 128));
              std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v48,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/gadget/boss_chest_comp.cpp",
                "interactCheck",
                207);
              v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v48,
                      (const char (*)[33])"chest lifetime is over, gadget: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v21, this->gadget_);
              common::milog::MiLogStream::~MiLogStream(&v48);
              v10 = 810;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/gadget/boss_chest_comp.cpp",
              "interactCheck",
              202);
            v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v48,
                    (const char (*)[36])"chest is not in life_time, gadget: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v19, this->gadget_);
            common::milog::MiLogStream::~MiLogStream(&v48);
            v10 = 804;
          }
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "interactCheck",
      179);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v48,
           (const char (*)[39])"findGadgetScriptConfig fails, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v10 = -1;
  }
  result = v10;
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 266: range 0000000013138C12-0000000013139C48
int32_t __cdecl BossChestComp::interact(BossChestComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rcx
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t ConfigId; // r15d
  uint32_t GroupId; // eax
  PlayerBasicComp *BasicComp; // rax
  data::ItemLimitType GadgetItemLimitType; // eax
  const Gadget *v15; // rdx
  uint32_t v16; // edi
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  PlayerSceneComp *SceneComp; // rcx
  Scene *v22; // rcx
  uint32_t v23; // r14d
  uint32_t v24; // ecx
  PlayerItemComp *ItemComp; // r14
  PlayerItemComp *v26; // rax
  PlayerSceneComp *v27; // rax
  Scene *v28; // rdi
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rcx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  int32_t result; // eax
  std::string v39; // [rsp+0h] [rbp-1E0h]
  unsigned int val; // [rsp+28h] [rbp-1B8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-1B4h]
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+30h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *drop_id; // [rsp+38h] [rbp-1A8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *drop_count; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<0,std::tuple<unsigned int,bool> >::type *resin; // [rsp+48h] [rbp-198h]
  std::tuple_element<0,std::tuple<bool> >::type *is_use_discount; // [rsp+50h] [rbp-190h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+58h] [rbp-188h] BYREF
  std::tuple<unsigned int,bool> __t; // [rsp+60h] [rbp-180h] BYREF
  SubItemReason reason; // [rsp+68h] [rbp-178h] BYREF
  common::milog::MiLogStream v50; // [rsp+70h] [rbp-170h] BYREF
  char v51[336]; // [rsp+90h] [rbp-150h] BYREF

  *(&v39._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v39._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v39._M_string_length = (std::string::size_type)param;
  v3 = (unsigned __int64)v51;
  v39._M_dataplus._M_p = v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:294 64 8 17 output_result:301 96 16 13 scene_ptr:281 128 16 9 param:325 160 24 "
                        "10 reason:297 224 24 18 item_param_vec:300";
  *(_QWORD *)(v3 + 16) = BossChestComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(BossChestComp *const, Player *, std::string::size_type))v6)(
          this,
          player,
          v39._M_string_length);
  if ( !ret )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getScene((const Entity *const)(v3 + 96));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/boss_chest_comp.cpp",
        "interact",
        284);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v50,
             (const char (*)[29])"getScene is nullptr, gadget:");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 128));
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128))->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
      gadget_script_config_ptr = LuaConfigMgr::findGadgetScriptConfig(p_lua_config_mgr, GroupId, ConfigId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
      if ( gadget_script_config_ptr )
      {
        BasicComp = Player::getBasicComp(player);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v50, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x610u, v39);
        std::string::~string(&v50);
        if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GadgetItemLimitType = Gadget::getGadgetItemLimitType(*(const Gadget *const *)(*(&v39._anon_0._M_allocated_capacity
                                                                                      + 1)
                                                                                    + 8));
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 160),
          ACTION_REASON_OPEN_WORLD_BOSS_CHEST,
          GadgetItemLimitType);
        *(_BYTE *)(v3 + 173) = 1;
        if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v15 = *(const Gadget **)(*(&v39._anon_0._M_allocated_capacity + 1) + 8);
        if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 16) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 16) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        __in = Gadget::findDropIdCountByFallbackDropIdOrDropTag(
                 v15,
                 *(_DWORD *)(*(&v39._anon_0._M_allocated_capacity + 1) + 16));
        drop_id = std::get<0ul,unsigned int,unsigned int>(&__in);
        drop_count = std::get<1ul,unsigned int,unsigned int>(&__in);
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 224));
        if ( *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v16 = *drop_count;
        if ( *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_id >> 3) + 0x7FFF8000) )
        {
          v16 = (unsigned int)drop_id;
          __asan_report_load4();
        }
        *(OutputResult *)(v3 + 64) = DropUtils::dropItems(
                                       (Player *)v39._anon_0._M_allocated_capacity,
                                       *drop_id,
                                       v16,
                                       (const ActionReason *)(v3 + 160),
                                       (std::vector<ItemParam> *)(v3 + 224));
        if ( *(_DWORD *)(v3 + 64) )
        {
          LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 64));
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            LogLevel,
            "./src/gadget/boss_chest_comp.cpp",
            "interact",
            304);
          v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v50,
                  (const char (*)[25])"dropItems fails for uid:");
          val = Player::getUid((const Player *const)v39._anon_0._M_allocated_capacity);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" gadget:");
          if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
            v20,
            *(const Gadget **)(*(&v39._anon_0._M_allocated_capacity + 1) + 8));
          common::milog::MiLogStream::~MiLogStream(&v50);
          v8 = *(_DWORD *)(v3 + 64);
        }
        else if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 224)) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/gadget/boss_chest_comp.cpp",
            "interact",
            311);
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v50,
            (const char (*)[21])"item_param_vec empty");
          common::milog::MiLogStream::~MiLogStream(&v50);
          v8 = -1;
        }
        else
        {
          SceneComp = Player::getSceneComp((Player *const)v39._anon_0._M_allocated_capacity);
          if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          PlayerSceneComp::tryRecordDailyGadgetDropCategoryCount(
            SceneComp,
            *(Gadget **)(*(&v39._anon_0._M_allocated_capacity + 1) + 8));
          v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          BossChestComp::updateTakeNum(
            *((BossChestComp *const *)&v39._anon_0._M_allocated_capacity + 1),
            v22,
            (Player *)v39._anon_0._M_allocated_capacity);
          if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v23 = Entity::getGroupId(*(const Entity *const *)(*(&v39._anon_0._M_allocated_capacity + 1) + 8));
          v24 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gadget_script_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.resin >> 3)
                                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          BossChestComp::getResinCost(
            (const BossChestComp *const)&__t,
            *((uint32_t *)&v39._anon_0._M_allocated_capacity + 2),
            (Scene *)gadget_script_config_ptr->boss_chest.resin,
            v24,
            (Player *)v23);
          resin = std::get<0ul,unsigned int,bool>(&__t);
          is_use_discount = std::get<1ul,unsigned int,bool>(&__t);
          if ( *(_BYTE *)(((unsigned __int64)resin >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)resin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)resin >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *resin )
          {
            *(_QWORD *)(v3 + 128) = 0LL;
            *(_QWORD *)(v3 + 136) = 0LL;
            *(_DWORD *)(v3 + 128) = 106;
            *(_DWORD *)(v3 + 132) = *resin;
            ItemComp = Player::getItemComp((Player *const)v39._anon_0._M_allocated_capacity);
            SubItemReason::SubItemReason(&reason, (const ActionReason *)(v3 + 160));
            PlayerItemComp::subItem(ItemComp, (const ItemParam *)(v3 + 128), &reason);
          }
          v26 = Player::getItemComp((Player *const)v39._anon_0._M_allocated_capacity);
          PlayerItemComp::addItemBatch(
            v26,
            (const std::vector<ItemParam> *)(v3 + 224),
            (const ActionReason *)(v3 + 160),
            0LL);
          if ( *(_BYTE *)(((unsigned __int64)is_use_discount >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)is_use_discount & 7) >= *(_BYTE *)(((unsigned __int64)is_use_discount >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(is_use_discount);
          }
          if ( *is_use_discount )
          {
            v27 = Player::getSceneComp((Player *const)v39._anon_0._M_allocated_capacity);
            PlayerSceneComp::addWeeklyBossResinDiscountNum(v27);
          }
          val = Player::getUid((const Player *const)v39._anon_0._M_allocated_capacity);
          std::set<unsigned int>::erase(
            (std::set<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity + 1) + 72),
            &val);
          if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Gadget::setState(*(Gadget *const *)(*(&v39._anon_0._M_allocated_capacity + 1) + 8), 0x66u, 0, 1);
          v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)resin >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)resin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)resin >> 3) + 0x7FFF8000) )
          {
            v28 = (Scene *)resin;
            __asan_report_load4();
          }
          BossChestComp::logOpenChest(
            *((BossChestComp *const *)&v39._anon_0._M_allocated_capacity + 1),
            (Player *)v39._anon_0._M_allocated_capacity,
            (const std::vector<ItemParam> *)(v3 + 224),
            *resin,
            v28);
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/gadget/boss_chest_comp.cpp",
            "interact",
            343);
          v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v50, (const char (*)[6])"uid: ");
          val = Player::getUid((const Player *const)v39._anon_0._M_allocated_capacity);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
          v31 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v30,
                  (const char (*)[24])" open worldboss chest: ");
          if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v32 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
                  v31,
                  *(const Gadget **)(*(&v39._anon_0._M_allocated_capacity + 1) + 8));
          v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v32,
                  (const char (*)[14])" cost resin: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, resin);
          common::milog::MiLogStream::~MiLogStream(&v50);
          if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(*(&v39._anon_0._M_allocated_capacity
                                                                                   + 1)
                                                                                 + 72)) )
          {
            BossChestComp::destroySelf(*((BossChestComp *const *)&v39._anon_0._M_allocated_capacity + 1));
            common::milog::MiLogStream::create(
              &v50,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/gadget/boss_chest_comp.cpp",
              "interact",
              348);
            v34 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v50,
                    (const char (*)[47])"destroy worldboss chest because of empty uid, ");
            if ( *(_BYTE *)(((*(&v39._anon_0._M_allocated_capacity + 1) + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v35 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(
                    v34,
                    *(const Gadget **)(*(&v39._anon_0._M_allocated_capacity + 1) + 8));
            v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v35,
                    (const char (*)[13])" owner_uid: ");
            v37 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            val = Scene::getOwnerUid(v37);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
            common::milog::MiLogStream::~MiLogStream(&v50);
          }
          v8 = 0;
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 224));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
        goto LABEL_72;
      }
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/boss_chest_comp.cpp",
        "interact",
        290);
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v50,
             (const char (*)[39])"findGadgetScriptConfig fails, gadget: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v9, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v50);
    v8 = -1;
LABEL_72:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
    goto LABEL_73;
  }
  if ( ret == 810 )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/boss_chest_comp.cpp",
      "interact",
      273);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v50,
           (const char (*)[22])"interactCheck fails: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/gadget/boss_chest_comp.cpp",
      "interact",
      277);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v50,
           (const char (*)[22])"interactCheck fails: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
  common::milog::MiLogStream::~MiLogStream(&v50);
  v8 = -1;
LABEL_73:
  result = v8;
  if ( v39._M_dataplus._M_p == (std::string::pointer)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 354: range 0000000013139C4A-000000001313A474
bool __cdecl BossChestComp::isTakeNumValid(
        const BossChestComp *const this,
        Scene *scene,
        Player *player,
        const GadgetScriptConfig *gadget_script_config)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t DungeonId; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  DungeonExcelConfigMgr *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // eax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  PlayerSceneComp *SceneComp; // r14
  uint32_t GroupId; // r15d
  uint32_t SceneId; // eax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rcx
  bool result; // al
  uint32_t config_id; // [rsp+Ch] [rbp-104h]
  bool is_valid; // [rsp+3Ah] [rbp-D6h]
  bool is_valid_0; // [rsp+3Bh] [rbp-D5h]
  unsigned int val; // [rsp+3Ch] [rbp-D4h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+40h] [rbp-D0h]
  const data::DungeonSerialConfig *serial_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v46; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v47; // [rsp+60h] [rbp-B0h] BYREF
  char v48[144]; // [rsp+80h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 take_num:382 64 16 15 dungeon_ptr:355";
  *(_QWORD *)(v4 + 16) = BossChestComp::isTakeNumValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  toPtr<DungeonScene,Scene>((Scene *)(v4 + 64));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 64), 0LL) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v46);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.txt_config_mgr.dungeon_config_mgr;
    v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    DungeonId = DungeonScene::getDungeonId(v8);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, DungeonId);
    std::shared_ptr<Config>::~shared_ptr(&v46);
    if ( dungeon_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v46);
      v13 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.txt_config_mgr.dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      serial_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonSerialConfig(v13, dungeon_config_ptr->serial_id);
      std::shared_ptr<Config>::~shared_ptr(&v46);
      if ( serial_config_ptr )
      {
        DungeonComp = Player::getDungeonComp(player);
        v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v17 = DungeonScene::getDungeonId(v16);
        *(_DWORD *)(v4 + 48) = PlayerDungeonComp::refreshAndGetBossChestTakeNum(DungeonComp, v17);
        if ( *(_BYTE *)(((unsigned __int64)&serial_config_ptr->max_take_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)serial_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&serial_config_ptr->max_take_num >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        is_valid_0 = serial_config_ptr->max_take_num > *(_DWORD *)(v4 + 48);
        if ( serial_config_ptr->max_take_num <= *(_DWORD *)(v4 + 48) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/gadget/boss_chest_comp.cpp",
            "isTakeNumValid",
            375);
          v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"uid: ");
          val = Player::getUid(player);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
          v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" take_num: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v4 + 48));
          v22 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v21,
                  (const char (*)[23])" config_max_take_num: ");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  &serial_config_ptr->max_take_num);
          v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" serial_id: ");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  &dungeon_config_ptr->serial_id);
          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v25,
                  (const char (*)[14])" boss_chest: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v26, this->gadget_);
          common::milog::MiLogStream::~MiLogStream(&v47);
        }
        v12 = is_valid_0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/boss_chest_comp.cpp",
          "isTakeNumValid",
          367);
        v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v47,
                (const char (*)[43])"findDungeonSerialConfig fails, serail_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &dungeon_config_ptr->serial_id);
        common::milog::MiLogStream::~MiLogStream(&v47);
        v12 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/boss_chest_comp.cpp",
        "isTakeNumValid",
        361);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v47,
              (const char (*)[31])"findDungeonExcelConfig fails, ");
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      val = DungeonScene::getDungeonId(v11);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v12 = 0;
    }
  }
  else
  {
    SceneComp = Player::getSceneComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    config_id = Entity::getConfigId((const Entity *const)this->gadget_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
    SceneId = Scene::getSceneId(scene);
    *(_DWORD *)(v4 + 48) = PlayerSceneComp::refreshAndGetBossChestTakeNum(SceneComp, SceneId, GroupId, config_id);
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config->boss_chest.take_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_script_config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->boss_chest.take_num >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    is_valid = gadget_script_config->boss_chest.take_num > *(_DWORD *)(v4 + 48);
    if ( gadget_script_config->boss_chest.take_num <= *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/gadget/boss_chest_comp.cpp",
        "isTakeNumValid",
        386);
      v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v47, (const char (*)[6])"uid: ");
      val = Player::getUid(player);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
      v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" take_num: ");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v4 + 48));
      v34 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v33,
              (const char (*)[23])" config_max_take_num: ");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v34,
              &gadget_script_config->boss_chest.take_num);
      v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])" boss_chest: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v36, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    v12 = is_valid;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
  result = v12;
  if ( v48 == (char *)v4 )
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

// Line 393: range 000000001313A476-000000001313A67B
void __cdecl BossChestComp::updateTakeNum(BossChestComp *const this, Scene *scene, Player *player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerDungeonComp *DungeonComp; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  PlayerSceneComp *SceneComp; // r14
  uint32_t GroupId; // r15d
  uint32_t SceneId; // eax
  uint32_t config_id; // [rsp+14h] [rbp-8Ch]
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 dungeon_ptr:394";
  *(_QWORD *)(v3 + 16) = BossChestComp::updateTakeNum;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  toPtr<DungeonScene,Scene>((Scene *)(v3 + 32));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 32), 0LL) )
  {
    DungeonComp = Player::getDungeonComp(player);
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    DungeonId = DungeonScene::getDungeonId(v7);
    PlayerDungeonComp::addBossChestTakeNum(DungeonComp, DungeonId);
  }
  else
  {
    SceneComp = Player::getSceneComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    config_id = Entity::getConfigId((const Entity *const)this->gadget_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
    SceneId = Scene::getSceneId(scene);
    PlayerSceneComp::addBossChestTakeNum(SceneComp, SceneId, GroupId, config_id);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 404: range 000000001313A67C-000000001313AE51
void __cdecl BossChestComp::onBossMonsterDie(
        BossChestComp *const this,
        proto::BossDieInfoBin *die_info,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char v6; // al
  common::milog::MiLogStream *v7; // rcx
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t ConfigId; // r15d
  uint32_t GroupId; // eax
  uint32_t v11; // ecx
  unsigned int *v12; // r15
  unsigned int *v13; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto::BossChestActivateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  uint32_t EntityId; // eax
  uint32_t *v17; // rdx
  std::__shared_ptr_access<proto::BossChestActivateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Entity *gadget; // r14
  std::set<unsigned int>::value_type __x; // [rsp+20h] [rbp-F0h] BYREF
  uint32_t uid; // [rsp+24h] [rbp-ECh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const GadgetScriptConfig *gadget_script_config_ptr; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedField<unsigned int> *uid_list; // [rsp+40h] [rbp-D0h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<const google::protobuf::Message> v28; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:405 64 16 14 notify_ptr:435";
  *(_QWORD *)(v3 + 16) = BossChestComp::onBossMonsterDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v3 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "onBossMonsterDie",
      408);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v29, (const char (*)[23])"gadget_.getScene fails");
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    if ( !std::set<unsigned int>::empty(&this->qualify_uid_set_) )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->dead_time_ )
LABEL_12:
      v6 = 1;
    else
      v6 = 0;
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/boss_chest_comp.cpp",
        "onBossMonsterDie",
        413);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v29,
             (const char (*)[33])"it should not happend!, gadget: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
      gadget_script_config_ptr = LuaConfigMgr::findGadgetScriptConfig(p_lua_config_mgr, GroupId, ConfigId);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
      if ( gadget_script_config_ptr )
      {
        v11 = proto::BossDieInfoBin::dead_level(die_info);
        if ( *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dead_level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->dead_level_);
        }
        this->dead_level_ = v11;
        uid_list = proto::BossDieInfoBin::mutable_surround_uid_list(die_info);
        v12 = google::protobuf::RepeatedField<unsigned int>::end(uid_list);
        v13 = google::protobuf::RepeatedField<unsigned int>::begin(uid_list);
        std::set<unsigned int>::insert<unsigned int *>(&this->qualify_uid_set_, v13, v12);
        v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        __x = Scene::getOwnerUid(v14);
        std::set<unsigned int>::insert(&this->qualify_uid_set_, &__x);
        std::set<unsigned int>::operator=(&this->remain_uid_set_, &this->qualify_uid_set_);
        if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.life_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gadget_script_config_ptr->boss_chest.life_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        BossChestComp::setLifeTime(this, gadget_script_config_ptr->boss_chest.life_time);
        if ( is_notify )
        {
          common::tools::perf::make_shared<proto::BossChestActivateNotify>();
          v15 = std::__shared_ptr_access<proto::BossChestActivateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BossChestActivateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
          proto::BossChestActivateNotify::set_entity_id(v15, EntityId);
          __for_range = &this->qualify_uid_set_;
          __for_begin._M_node = std::set<unsigned int>::begin(&this->qualify_uid_set_)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v17 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            uid = *v17;
            v18 = std::__shared_ptr_access<proto::BossChestActivateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BossChestActivateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            proto::BossChestActivateNotify::add_qualify_uid_list(v18, uid);
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          gadget = (Entity *)this->gadget_;
          std::dynamic_pointer_cast<google::protobuf::Message const,proto::BossChestActivateNotify>((const std::shared_ptr<proto::BossChestActivateNotify> *)&v28);
          Entity::notifyViewingPlayers(gadget, &v28, 1);
          std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v28);
          std::shared_ptr<proto::BossChestActivateNotify>::~shared_ptr((std::shared_ptr<proto::BossChestActivateNotify> *const)(v3 + 64));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/boss_chest_comp.cpp",
          "onBossMonsterDie",
          419);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          &v29,
          (const char (*)[29])"findGadgetScriptConfig fails");
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  if ( v30 == (char *)v3 )
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

// Line 447: range 000000001313AE52-000000001313B192
void __cdecl BossChestComp::setLifeTime(BossChestComp *const this, uint32_t life_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // ecx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t life_timea; // [rsp+4h] [rbp-ACh]
  common::milog::MiLogStream v17; // [rsp+10h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+30h] [rbp-80h] BYREF

  life_timea = life_time;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 owner_uid:456 64 16 13 scene_ptr:457";
  *(_QWORD *)(v2 + 16) = BossChestComp::setLifeTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( !life_time )
    life_timea = 604800;
  v5 = common::tools::TimeUtils::getNow() + life_timea;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time_);
  }
  this->dead_time_ = v5;
  BossChestComp::startLifeTimer(this);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = Scene::getOwnerUid(v6);
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/gadget/boss_chest_comp.cpp",
    "setLifeTime",
    462);
  v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v17, (const char (*)[18])"worldboss chest: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
  v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" dead_time_: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->dead_time_);
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" dead_level: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->dead_level_);
  v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v12, (const char (*)[19])" qualif_uid_list: ");
  v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, &this->qualify_uid_set_);
  v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" owner_uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v17);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  if ( v18 == (char *)v2 )
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

// Line 467: range 000000001313B3E4-000000001313B8BC
void __cdecl BossChestComp::startLifeTimer(BossChestComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  SceneUnixTimer *v5; // rax
  uint32_t life_time; // [rsp+18h] [rbp-D8h]
  uint32_t now; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<Gadget> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v9; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:468 64 16 14 gadget_wtr:484";
  *(_QWORD *)(v1 + 16) = BossChestComp::startLifeTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "startLifeTimer",
      471);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v10, (const char (*)[21])"scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    life_time = 10;
    if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now < this->dead_time_ )
      life_time = this->dead_time_ - now;
    if ( std::operator!=<SceneUnixTimer>(&this->life_timer_ptr_, 0LL) )
    {
      v4 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->life_timer_ptr_);
      common::tools::MiTimer::cancel(v4);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Gadget>((Gadget *)&__r);
    std::weak_ptr<Gadget>::weak_ptr<Gadget,void>((std::weak_ptr<Gadget> *const)(v1 + 64), &__r);
    std::shared_ptr<Gadget>::~shared_ptr(&__r);
    std::weak_ptr<Gadget>::weak_ptr((std::weak_ptr<Gadget> *const)&__r, (const std::weak_ptr<Gadget> *)(v1 + 64));
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,BossChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}>(
      &v9,
      (BossChestComp::startLifeTimer::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (BossChestComp::startLifeTimer::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->life_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v9);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v9);
    BossChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::~startLifeTimer((BossChestComp::startLifeTimer::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(0LL, &this->life_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/boss_chest_comp.cpp",
        "startLifeTimer",
        487);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v10,
        (const char (*)[28])"create SceneUnixTimer fails");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v5 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->life_timer_ptr_);
      if ( SceneUnixTimer::startS(v5, life_time, 0, "./src/gadget/boss_chest_comp.cpp", "startLifeTimer", 490) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/boss_chest_comp.cpp",
          "startLifeTimer",
          492);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v10,
          (const char (*)[24])"life_timer start failed");
        common::milog::MiLogStream::~MiLogStream(&v10);
      }
    }
    std::weak_ptr<Gadget>::~weak_ptr((std::weak_ptr<Gadget> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v11 == (char *)v1 )
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
};

// Line 484: range 000000001313B194-000000001313B3C7
void __cdecl BossChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::operator()(
        const BossChestComp::startLifeTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:484 64 16 11 obj_ptr:484";
  *(_QWORD *)(v2 + 16) = BossChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
  if ( std::operator==<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/boss_chest_comp.cpp",
      "operator()",
      484);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<BossChestComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<BossChestComp>((const std::shared_ptr<BossChestComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BossChestComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BossChestComp::onLifeTimer(v5, now_ms);
    }
    std::shared_ptr<BossChestComp>::~shared_ptr((std::shared_ptr<BossChestComp> *const)(v2 + 64));
  }
  std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
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

// Line 484: range 00000000131AFE1C-00000000131AFE41
void __cdecl BossChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::startLifeTimer(
        BossChestComp::startLifeTimer::<lambda(uint64_t)> *const this,
        BossChestComp::startLifeTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 484: range 00000000131B1440-00000000131B1465
void __cdecl BossChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::startLifeTimer(
        BossChestComp::startLifeTimer::<lambda(uint64_t)> *const this,
        const BossChestComp::startLifeTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 484: range 000000001313B3C8-000000001313B3E2
void __cdecl BossChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::~startLifeTimer(
        BossChestComp::startLifeTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 498: range 000000001313B8BE-000000001313BB23
void __cdecl BossChestComp::onLifeTimer(BossChestComp *const this, uint64_t a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 owner_uid:499 64 16 13 scene_ptr:500";
  *(_QWORD *)(v2 + 16) = BossChestComp::onLifeTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = Scene::getOwnerUid(v5);
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/boss_chest_comp.cpp",
    "onLifeTimer",
    505);
  v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v9,
         (const char (*)[26])"destroy worldboss chest: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
  v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         v7,
         (const char (*)[33])" decause of lifetime owner_uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v9);
  BossChestComp::destroySelf(this);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
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
};

// Line 511: range 000000001313BB24-000000001313BC5E
void __cdecl BossChestComp::destroySelf(BossChestComp *const this)
{
  Gadget *gadget; // r12
  _QWORD *baseclass_0; // rax
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(Gadget *, VisionContext *); // rbx
  VisionContext v5; // [rsp+14h] [rbp-1Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Gadget::setEnableInteract(this->gadget_, 0, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Creature::changeLifeState(this->gadget_, LIFE_DEAD, 0LL, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget = this->gadget_;
  baseclass_0 = gadget->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)gadget >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v3 = *baseclass_0 + 128LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  v4 = *(void (__fastcall **)(Gadget *, VisionContext *))v3;
  VisionContext::VisionContext(&v5, VISION_DIE);
  v4(gadget, &v5);
};

// Line 518: range 000000001313BC60-000000001313C157
void __cdecl BossChestComp::logOpenChest(
        BossChestComp *const this,
        Player *player,
        const std::vector<ItemParam> *item_param_vec,
        uint32_t resin,
        Scene *scene)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t GadgetId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  Entity *gadget; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  proto_log::EntityLog *v18; // rax
  Gadget *v19; // r14
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+40h] [rbp-C0h]
  const GadgetScriptConfig *gadget_script_config; // [rsp+48h] [rbp-B8h]
  const ItemParam *item_param; // [rsp+50h] [rbp-B0h]
  proto_log::ItemLog *item_log; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<google::protobuf::Message> p_log_message_ptr; // [rsp+60h] [rbp-A0h] BYREF
  char v29[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 16 11 log_ptr:519 64 16 15 dungeon_ptr:522";
  *(_QWORD *)(v5 + 16) = BossChestComp::logOpenChest;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -219021312;
  v7[536862722] = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyOpenBossChest>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(this->gadget_);
  proto_log::PlayerLogBodyOpenBossChest::set_gadget_id(v8, GadgetId);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  proto_log::PlayerLogBodyOpenBossChest::set_resin(v10, resin);
  toPtr<DungeonScene,Scene>((Scene *)(v5 + 64));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v5 + 64), 0LL) )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    DungeonId = DungeonScene::getDungeonId(v12);
    proto_log::PlayerLogBodyOpenBossChest::set_dungeon_id(v11, DungeonId);
  }
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    item_log = proto_log::PlayerLogBodyOpenBossChest::add_item_vec(v14);
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::ItemLog::set_item_id(item_log, item_param->item_id);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::ItemLog::set_count(item_log, item_param->count);
    __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget_script_config = Gadget::getScriptConfig(this->gadget_);
  if ( gadget_script_config )
  {
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config->gadget_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_script_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->gadget_state >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyOpenBossChest::set_state(v15, gadget_script_config->gadget_state);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget = (Entity *)this->gadget_;
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBossChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 32));
  v18 = proto_log::PlayerLogBodyOpenBossChest::mutable_entity_log(v17);
  Entity::getEntityLog(gadget, v18);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v19 = this->gadget_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyOpenBossChest,void>(
    &p_log_message_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyOpenBossChest> *)(v5 + 32));
  Gadget::logGadgetInteract(v19, player, &p_log_message_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_log_message_ptr);
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v5 + 64));
  std::shared_ptr<proto_log::PlayerLogBodyOpenBossChest>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyOpenBossChest> *const)(v5 + 32));
  if ( v29 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 544: range 000000001313C158-000000001313C35C
bool __cdecl BossChestComp::isWeeklyBossChest(const BossChestComp *const this, Scene *scene, uint32_t group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  DungeonEntryExcelConfigMgr *p_dungeon_entry_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  bool isWeeklyBossDungeon; // al
  bool v10; // r14
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // r14
  uint32_t SceneId; // eax
  bool result; // al
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 dungeon_scene_ptr:545";
  *(_QWORD *)(v3 + 16) = BossChestComp::isWeeklyBossChest;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  toPtr<DungeonScene,Scene>((Scene *)(v3 + 32));
  if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 32)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_dungeon_entry_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.dungeon_entry_config_mgr;
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    DungeonId = DungeonScene::getDungeonId(v7);
    isWeeklyBossDungeon = DungeonEntryExcelConfigMgr::isWeeklyBossDungeon(p_dungeon_entry_config_mgr, DungeonId);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.const_value_config_mgr;
    SceneId = Scene::getSceneId(scene);
    isWeeklyBossDungeon = ConstValueExcelConfigMgr::isWorldWeeklyBossGroup(p_const_value_config_mgr, SceneId, group_id);
  }
  v10 = isWeeklyBossDungeon;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  result = v10;
  if ( v16 == (char *)v3 )
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

// Line 555: range 000000001313C35E-000000001313C70D
const BossChestComp *__fastcall BossChestComp::getResinCost(
        const BossChestComp *const this,
        const BossChestComp *original_resin_cost,
        Scene *scene,
        Scene *group_id,
        Player *player,
        Player *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  PlayerSceneComp *SceneComp; // rax
  google::protobuf::uint32 v10; // r14d
  uint32_t group_ida; // [rsp+18h] [rbp-D8h]
  int v14; // [rsp+1Ch] [rbp-D4h]
  char __args_0[5]; // [rsp+3Bh] [rbp-B5h] BYREF
  char v16[176]; // [rsp+40h] [rbp-B0h] BYREF

  v14 = (int)scene;
  group_ida = (unsigned int)player;
  v6 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 32 4 23 original_resin_cost:554 48 40 35 weekly_boss_resin_discount_info:562";
  *(_QWORD *)(v6 + 16) = BossChestComp::getResinCost;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = 61956;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  *(_DWORD *)(v6 + 32) = v14;
  if ( !BossChestComp::isWeeklyBossChest(original_resin_cost, group_id, group_ida) )
  {
    __args_0[0] = 0;
    if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->_vptr_GadgetCompBase + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_GadgetCompBase + 7) >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_store_n(this, 8LL);
    }
    std::make_tuple<unsigned int &,bool>(
      (unsigned int *)this,
      (bool *)(v6 + 32),
      (unsigned int *)__args_0,
      (bool *)(v6 + 32));
  }
  else
  {
    proto::WeeklyBossResinDiscountInfo::WeeklyBossResinDiscountInfo((proto::WeeklyBossResinDiscountInfo *const)(v6 + 48));
    SceneComp = Player::getSceneComp(a6);
    PlayerSceneComp::fillWeeklyBossResinDiscountInfo(
      SceneComp,
      *(_DWORD *)(v6 + 32),
      (proto::WeeklyBossResinDiscountInfo *)(v6 + 48));
    v10 = proto::WeeklyBossResinDiscountInfo::discount_num((const proto::WeeklyBossResinDiscountInfo *const)(v6 + 48));
    if ( v10 >= proto::WeeklyBossResinDiscountInfo::discount_num_limit((const proto::WeeklyBossResinDiscountInfo *const)(v6 + 48)) )
    {
      __args_0[0] = 1;
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->_vptr_GadgetCompBase + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_GadgetCompBase + 7) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 8LL);
      }
      std::make_tuple<unsigned int &,bool>(
        (unsigned int *)this,
        (bool *)(v6 + 32),
        (unsigned int *)__args_0,
        (bool *)(v6 + 32));
    }
    else
    {
      __args_0[0] = 1;
      *(_DWORD *)&__args_0[1] = proto::WeeklyBossResinDiscountInfo::resin_cost((const proto::WeeklyBossResinDiscountInfo *const)(v6 + 48));
      if ( ((unsigned __int8)this & 7) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&this->_vptr_GadgetCompBase + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&this->_vptr_GadgetCompBase + 7) >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store_n(this, 8LL);
      }
      std::make_tuple<unsigned int,bool>(
        (unsigned int *)this,
        (bool *)&__args_0[1],
        (unsigned int *)__args_0,
        (bool *)&__args_0[1]);
    }
    proto::WeeklyBossResinDiscountInfo::~WeeklyBossResinDiscountInfo((proto::WeeklyBossResinDiscountInfo *const)(v6 + 48));
  }
  if ( v16 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};
