// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/statue_comp.cpp

// Line 27: range 0000000015CBFABA-0000000015CBFB22
void __cdecl StatueComp::StatueComp(StatueComp *const this, Gadget *gadget)
{
  int (**v2)(...); // rdx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v2 = (int (**)(...))(&`vtable for'StatueComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v2;
  std::set<unsigned int>::set(&this->opened_statue_uid_set_);
};

// Line 34: range 0000000015CBFB24-0000000015CBFBFA
int32_t __cdecl StatueComp::toClient(const StatueComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  google::protobuf::uint32 *v2; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::StatueGadgetInfo *statue_info; // [rsp+30h] [rbp-10h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  statue_info = proto::SceneGadgetInfo::mutable_statue_gadget(gadget_info);
  __for_range = &this->opened_statue_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->opened_statue_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->opened_statue_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::StatueGadgetInfo::add_opened_statue_uid_list(statue_info, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  return 0;
};

// Line 44: range 0000000015CBFBFC-0000000015CC0193
int32_t __cdecl StatueComp::getCostItemParam(
        const StatueComp *const this,
        Player *player,
        const EntityInteractParam *param,
        ItemParam *item_param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerDungeonComp *DungeonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  char v11; // r13
  uint32_t statue_cost_count; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  char v14; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t CondenseResinMaterialId; // ecx
  uint32_t statue_cost_id; // ecx
  uint32_t v18; // ecx
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-90h] BYREF
  char v24[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 dungeon_id:45";
  *(_QWORD *)(v4 + 16) = StatueComp::getCostItemParam;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  DungeonComp = Player::getDungeonComp(player);
  *(_DWORD *)(v4 + 32) = PlayerDungeonComp::getCurDungeonId(DungeonComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v8->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( !dungeon_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/statue_comp.cpp",
      "getCostItemParam",
      49);
    v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v23,
           (const char (*)[47])"find findDungeonExcelConfig failed,dungeon id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = -1;
    goto LABEL_36;
  }
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( param->resin_cost_type == RESIN_COST_TYPE_CONDENSE )
  {
    v11 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( dungeon_config_ptr->statue_cost_id != 106 )
      goto LABEL_15;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    statue_cost_count = dungeon_config_ptr->statue_cost_count;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v11 = 1;
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    if ( statue_cost_count == ConstValueExcelConfigMgr::getCondenseResinReplaceResinCount(&v13->design_config.txt_config_mgr.const_value_config_mgr) )
      v14 = 0;
    else
LABEL_15:
      v14 = 1;
    if ( v11 )
      std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( v14 )
    {
      result = 681;
      goto LABEL_36;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    CondenseResinMaterialId = ConstValueExcelConfigMgr::getCondenseResinMaterialId(&v15->design_config.txt_config_mgr.const_value_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(item_param);
    }
    item_param->item_id = CondenseResinMaterialId;
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&item_param->count);
    }
    item_param->count = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    statue_cost_id = dungeon_config_ptr->statue_cost_id;
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(item_param);
    }
    item_param->item_id = statue_cost_id;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_cost_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v18 = dungeon_config_ptr->statue_cost_count;
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&item_param->count);
    }
    item_param->count = v18;
  }
  result = 0;
LABEL_36:
  if ( v24 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 77: range 0000000015CC0194-0000000015CC0952
int32_t __cdecl StatueComp::interactCheck(StatueComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  PlayerDungeonComp *DungeonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isDungeonClosed; // r14
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerReunionComp *ReunionComp; // rcx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  PlayerItemComp *ItemComp; // rax
  proto::ResinCostType resin_cost_type; // eax
  PlayerOpActivityComp *OpActivityComp; // rax
  PlayerItemComp *p_statue_drop; // rdi
  uint32_t v20; // esi
  common::milog::MiLogStream *v21; // rax
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-110h] BYREF
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 dungeon_id:88 64 4 7 ret:111 80 4 14 drop_count:124 96 16 14 item_param:110 128 24 17 "
                        "action_reason:123";
  *(_QWORD *)(v3 + 16) = StatueComp::interactCheck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Gadget::getState(this->gadget_) != 401 )
  {
    result = 807;
    goto LABEL_45;
  }
  *(_DWORD *)(v3 + 80) = Player::getUid(player);
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->opened_statue_uid_set_,
         (const unsigned int *)(v3 + 80)) )
  {
    result = 808;
    goto LABEL_45;
  }
  DungeonComp = Player::getDungeonComp(player);
  *(_DWORD *)(v3 + 48) = PlayerDungeonComp::getCurDungeonId(DungeonComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  isDungeonClosed = FeatureSwitchMgr::isDungeonClosed(&v8->feature_switch_mgr, *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( isDungeonClosed )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/statue_comp.cpp",
      "interactCheck",
      91);
    v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
            &v24,
            (const char (*)[62])"[FEATURE_SWITCH] dungeon closed cannot interact, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 142;
    goto LABEL_45;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v11->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( !dungeon_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/statue_comp.cpp",
      "interactCheck",
      98);
    v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v24,
            (const char (*)[47])"find findDungeonExcelConfig failed,dungeon id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( param->resin_cost_type != RESIN_COST_TYPE_REUNION_PRIVILEGE )
    goto LABEL_21;
  ReunionComp = Player::getReunionComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !PlayerReunionComp::isReunionPrivilegeValid(ReunionComp, 1u, dungeon_config_ptr->type) )
    v14 = 1;
  else
LABEL_21:
    v14 = 0;
  if ( v14 )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/statue_comp.cpp",
      "interactCheck",
      105);
    v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v24,
            (const char (*)[38])"[REUNION] resin privilege not valid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = -1;
    goto LABEL_45;
  }
  *(_DWORD *)(v3 + 96) = 0;
  *(_DWORD *)(v3 + 100) = 0;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 0;
  *(_DWORD *)(v3 + 64) = StatueComp::getCostItemParam(this, player, param, (ItemParam *)(v3 + 96));
  if ( *(_DWORD *)(v3 + 64) )
  {
    result = *(_DWORD *)(v3 + 64);
    goto LABEL_45;
  }
  ItemComp = Player::getItemComp(player);
  *(_DWORD *)(v3 + 64) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 96));
  if ( *(_DWORD *)(v3 + 64) )
  {
    result = *(_DWORD *)(v3 + 64);
    goto LABEL_45;
  }
  ActionReason::ActionReason(
    (ActionReason *const)(v3 + 128),
    ACTION_REASON_DUNGEON_STATUE_DROP,
    ITEM_LIMIT_NORMAL_DUNGEON);
  *(_DWORD *)(v3 + 80) = 0;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  resin_cost_type = param->resin_cost_type;
  if ( param->resin_cost_type == RESIN_COST_TYPE_OP_ACTIVITY )
  {
    OpActivityComp = Player::getOpActivityComp(player);
    *(_DWORD *)(v3 + 64) = PlayerOpActivityComp::tryGetMaxDropCountInDungeon(
                             OpActivityComp,
                             *(_DWORD *)(v3 + 48),
                             0LL,
                             (uint32_t *)(v3 + 80));
    if ( *(_DWORD *)(v3 + 64) )
    {
      result = *(_DWORD *)(v3 + 64);
      goto LABEL_45;
    }
    goto LABEL_40;
  }
  if ( resin_cost_type > RESIN_COST_TYPE_OP_ACTIVITY )
    goto LABEL_39;
  if ( resin_cost_type == RESIN_COST_TYPE_NORMAL )
  {
    *(_DWORD *)(v3 + 80) = 1;
    goto LABEL_40;
  }
  if ( resin_cost_type <= RESIN_COST_TYPE_NONE || (unsigned int)(resin_cost_type - 2) > 1 )
  {
LABEL_39:
    result = 830;
    goto LABEL_45;
  }
  *(_DWORD *)(v3 + 80) = 2;
LABEL_40:
  p_statue_drop = Player::getItemComp(player);
  v20 = *(_DWORD *)(v3 + 80);
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_drop >> 3)
                                                                      + 0x7FFF8000) )
  {
    p_statue_drop = (PlayerItemComp *)&dungeon_config_ptr->statue_drop;
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 64) = PlayerItemComp::checkFrontLooseGrantDropItems(
                           p_statue_drop,
                           dungeon_config_ptr->statue_drop,
                           v20,
                           (const ActionReason *)(v3 + 128),
                           0LL);
  if ( *(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/statue_comp.cpp",
      "interactCheck",
      157);
    v21 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v24,
            (const char (*)[43])"checkFrontLooseGrantDropItems failed, ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  result = *(_DWORD *)(v3 + 64);
LABEL_45:
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 163: range 0000000015CC0954-0000000015CC1918
int32_t __cdecl StatueComp::interact(StatueComp *const this, Player *player, const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v10; // rdx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int resin_cost_type; // eax
  PlayerOpActivityComp *OpActivityComp; // rax
  PlayerItemComp *v16; // rdi
  uint32_t v17; // esi
  uint32_t v18; // ecx
  PlayerItemComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // edi
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  PlayerItemComp *ItemComp; // r14
  PlayerItemComp *v33; // rax
  PlayerReunionComp *ReunionComp; // rax
  PlayerOpActivityComp *v35; // rax
  PlayerItemComp *v36; // rax
  DungeonScene *v37; // r14
  uint32_t Uid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  DungeonScene *v40; // rax
  const std::string *v41; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // r14
  PlayerReunionComp *v47; // rax
  int32_t result; // eax
  std::string v49; // [rsp+0h] [rbp-230h]
  EntityInteractParam *parama; // [rsp+8h] [rbp-228h]
  Player *playera; // [rsp+10h] [rbp-220h]
  StatueComp *thisa; // [rsp+18h] [rbp-218h]
  bool is_use_bonus; // [rsp+27h] [rbp-209h]
  int val; // [rsp+28h] [rbp-208h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-204h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+30h] [rbp-200h]
  SubItemReason reason; // [rsp+38h] [rbp-1F8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-1F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v59; // [rsp+50h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v60; // [rsp+60h] [rbp-1D0h] BYREF
  char v61[432]; // [rsp+80h] [rbp-1B0h] BYREF

  *(&v49._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v49._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v49._M_string_length = (std::string::size_type)param;
  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 1 10 holder:171 48 4 14 dungeon_id:179 64 4 14 drop_count:191 80 4 15 schedule_id:192 96 8"
                        " 17 output_result:247 128 12 20 drop_bonus_param:195 160 16 21 dungeon_scene_ptr:173 192 16 14 i"
                        "tem_param:265 224 16 11 log_ptr:288 256 24 17 action_reason:188 320 24 17 drop_item_vec:190";
  *(_QWORD *)(v3 + 16) = StatueComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -219020288;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -234881024;
  v5[536862729] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_GadgetCompBase + 16);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(StatueComp *const, Player *, std::string::size_type))v6)(
          this,
          player,
          v49._M_string_length) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v60, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x612u, v49);
    std::string::~string(&v60);
    Player::getDungeonComp(playera);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 160));
    if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/statue_comp.cpp",
        "interact",
        176);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v60,
              (const char (*)[27])"dungeon_scene_ptr is empty");
      operator<<(v10, playera);
      common::milog::MiLogStream::~MiLogStream(&v60);
      v8 = -1;
LABEL_62:
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 160));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
      goto LABEL_63;
    }
    v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    *(_DWORD *)(v3 + 48) = DungeonScene::getDungeonId(v11);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v59);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &v12->design_config.txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v59);
    if ( !dungeon_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/statue_comp.cpp",
        "interact",
        183);
      v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v60,
              (const char (*)[47])"find findDungeonExcelConfig failed,dungeon id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v60);
      v8 = -1;
      goto LABEL_62;
    }
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 256),
      ACTION_REASON_DUNGEON_STATUE_DROP,
      ITEM_LIMIT_NORMAL_DUNGEON);
    *(_BYTE *)(v3 + 269) = 1;
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 320));
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 80) = 0;
    ret = 0;
    is_use_bonus = 0;
    *(_DWORD *)(v3 + 128) = 0;
    *(_DWORD *)(v3 + 132) = 0;
    *(_DWORD *)(v3 + 136) = 0;
    if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)parama & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    resin_cost_type = parama->resin_cost_type;
    if ( parama->resin_cost_type == RESIN_COST_TYPE_OP_ACTIVITY )
    {
      is_use_bonus = 1;
      OpActivityComp = Player::getOpActivityComp(playera);
      ret = PlayerOpActivityComp::tryGetMaxDropCountInDungeon(
              OpActivityComp,
              *(_DWORD *)(v3 + 48),
              (uint32_t *)(v3 + 80),
              (uint32_t *)(v3 + 64));
      if ( ret )
      {
        v8 = ret;
        goto LABEL_61;
      }
    }
    else
    {
      if ( resin_cost_type > 4 )
        goto LABEL_29;
      if ( resin_cost_type == 3 )
      {
        is_use_bonus = 1;
        *(_DWORD *)(v3 + 64) = 2;
        goto LABEL_30;
      }
      if ( resin_cost_type > 3 )
        goto LABEL_29;
      if ( resin_cost_type == 1 )
      {
        *(_DWORD *)(v3 + 64) = 1;
        goto LABEL_30;
      }
      if ( resin_cost_type != 2 )
      {
LABEL_29:
        v8 = 830;
        goto LABEL_61;
      }
      *(_DWORD *)(v3 + 64) = 2;
    }
LABEL_30:
    if ( !is_use_bonus )
    {
LABEL_37:
      v25 = *(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_drop >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->statue_drop >> 3)
                                                                          + 0x7FFF8000) )
      {
        v25 = (_DWORD)dungeon_config_ptr + 164;
        __asan_report_load4();
      }
      *(OutputResult *)(v3 + 96) = DropUtils::dropItems(
                                     playera,
                                     dungeon_config_ptr->statue_drop,
                                     v25,
                                     (const ActionReason *)(v3 + 256),
                                     (std::vector<ItemParam> *)(v3 + 320));
      if ( *(_DWORD *)(v3 + 96) )
      {
        LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 96));
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          LogLevel,
          "./src/gadget/statue_comp.cpp",
          "interact",
          250);
        v27 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v60,
                (const char (*)[27])"dropItems failed, drop_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                &dungeon_config_ptr->statue_drop);
        v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])" drop_count:");
        val = 1;
        v30 = common::milog::MiLogStream::operator<<<int,(int *)0>(v29, &val);
        v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
        operator<<(v31, playera);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v8 = *(_DWORD *)(v3 + 96);
      }
      else if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 320)) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/statue_comp.cpp",
          "interact",
          257);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v60, (const char (*)[20])"drop_item_vec empty");
        common::milog::MiLogStream::~MiLogStream(&v60);
        v8 = -1;
      }
      else
      {
        val = Player::getUid(playera);
        std::set<unsigned int>::insert(&thisa->opened_statue_uid_set_, (std::set<unsigned int>::value_type *)&val);
        *(_DWORD *)(v3 + 192) = 0;
        *(_DWORD *)(v3 + 196) = 0;
        *(_DWORD *)(v3 + 200) = 0;
        *(_DWORD *)(v3 + 204) = 0;
        StatueComp::getCostItemParam(thisa, playera, parama, (ItemParam *)(v3 + 192));
        ItemComp = Player::getItemComp(playera);
        SubItemReason::SubItemReason(&reason, (const ActionReason *)(v3 + 256));
        PlayerItemComp::subItem(ItemComp, (const ItemParam *)(v3 + 192), &reason);
        v33 = Player::getItemComp(playera);
        PlayerItemComp::addItemBatch(
          v33,
          (const std::vector<ItemParam> *)(v3 + 320),
          (const ActionReason *)(v3 + 256),
          0LL);
        if ( is_use_bonus && ret != 698 )
        {
          if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)parama & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( parama->resin_cost_type == RESIN_COST_TYPE_REUNION_PRIVILEGE )
          {
            ReunionComp = Player::getReunionComp(playera);
            PlayerReunionComp::addPrivilegeCount(ReunionComp);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)parama & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( parama->resin_cost_type == RESIN_COST_TYPE_OP_ACTIVITY )
            {
              v35 = Player::getOpActivityComp(playera);
              PlayerOpActivityComp::addUseBonusCount(v35, *(_DWORD *)(v3 + 80));
            }
          }
          v36 = Player::getItemComp(playera);
          PlayerItemComp::recordDropBonus(v36, (const DropBonusParam *)(v3 + 128));
        }
        v37 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        Uid = Player::getUid(playera);
        DungeonScene::notifyPlayerOpenStatue(v37, Uid);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyDungeonStatueDrop>();
        v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        v40 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v41 = DungeonScene::getTransaction[abi:cxx11](v40);
        proto_log::PlayerLogBodyDungeonStatueDrop::set_dungeon_transaction(v39, v41);
        v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        proto_log::PlayerLogBodyDungeonStatueDrop::set_dungeon_id(v42, *(_DWORD *)(v3 + 48));
        v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        proto_log::PlayerLogBodyDungeonStatueDrop::set_cost_item_id(v43, *(_DWORD *)(v3 + 192));
        v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        proto_log::PlayerLogBodyDungeonStatueDrop::set_cost_count(v44, *(_DWORD *)(v3 + 196));
        v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
        if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)parama & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyDungeonStatueDrop::set_reason_type(v45, parama->resin_cost_type);
        if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)parama & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( parama->resin_cost_type == RESIN_COST_TYPE_REUNION_PRIVILEGE )
        {
          v46 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonStatueDrop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
          v47 = Player::getReunionComp(playera);
          PlayerReunionComp::getActivatedReunionVersion[abi:cxx11]((std::string *)&v60, v47);
          proto_log::PlayerLogBodyDungeonStatueDrop::set_reunion_version(v46, (std::string *)&v60);
          std::string::~string(&v60);
        }
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v59, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDungeonStatueDrop,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyDungeonStatueDrop> *)(v3 + 224));
        Player::printStatLog(playera, &p_body_ptr, &v59, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v59);
        v8 = ret;
        std::shared_ptr<proto_log::PlayerLogBodyDungeonStatueDrop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDungeonStatueDrop> *const)(v3 + 224));
      }
      goto LABEL_61;
    }
    v16 = Player::getItemComp(playera);
    v17 = *(_DWORD *)(v3 + 80);
    v18 = *(_DWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)parama & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parama >> 3) + 0x7FFF8000) )
    {
      v16 = (PlayerItemComp *)parama;
      __asan_report_load4();
    }
    PlayerItemComp::buildDropBonusParam(v16, (DropBonusParam *)(v3 + 128), parama->resin_cost_type, v18, v17);
    v19 = Player::getItemComp(playera);
    ret = PlayerItemComp::checkDropBonus(v19, (const DropBonusParam *)(v3 + 128));
    if ( ret == 698 )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/statue_comp.cpp",
        "interact",
        237);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v60,
        (const char (*)[50])"bonus check exceed double limit, drop count set 1");
      common::milog::MiLogStream::~MiLogStream(&v60);
      *(_DWORD *)(v3 + 64) = 1;
      goto LABEL_37;
    }
    if ( !ret )
      goto LABEL_37;
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/statue_comp.cpp",
      "interact",
      242);
    v20 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v60,
            (const char (*)[35])"checkDropBonus failed, drop_count:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v21, (const char (*)[19])", resin_cost_type:");
    v23 = common::milog::MiLogStream::operator<<<proto::ResinCostType,(proto::ResinCostType*)0>(
            v22,
            &parama->resin_cost_type);
    v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])", schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v60);
    v8 = -1;
LABEL_61:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 320));
    goto LABEL_62;
  }
  common::milog::MiLogStream::create(
    &v60,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/gadget/statue_comp.cpp",
    "interact",
    167);
  v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v60,
         (const char (*)[31])"interactCheck failed, gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
  common::milog::MiLogStream::~MiLogStream(&v60);
  v8 = -1;
LABEL_63:
  result = v8;
  if ( v61 == (char *)v3 )
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
  return result;
};
