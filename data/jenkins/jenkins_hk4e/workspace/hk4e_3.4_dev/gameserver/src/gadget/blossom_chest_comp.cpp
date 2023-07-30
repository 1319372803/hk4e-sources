// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/gadget/blossom_chest_comp.cpp

// Line 33: range 0000000013131076-00000000131313B9
void __cdecl BlossomChestComp::BlossomChestComp(
        BlossomChestComp *const this,
        Gadget *gadget,
        const BlossomChestParam *param)
{
  int (**v3)(...); // rdx
  uint32_t blossom_chest_id; // ecx
  uint32_t drop_id; // ecx
  uint32_t dead_time; // ecx
  uint32_t item_limit_type; // ecx
  uint32_t refresh_id; // ecx

  ZN22GadgetBaseInteractCompCI214GadgetCompBaseER6Gadget(this, gadget);
  v3 = (int (**)(...))(&`vtable for'BlossomChestComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_GadgetCompBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  blossom_chest_id = param->blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blossom_chest_id_);
  }
  this->blossom_chest_id_ = blossom_chest_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  drop_id = param->drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id_);
  }
  this->drop_id_ = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->dead_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->dead_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dead_time = param->dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time_);
  }
  this->dead_time_ = dead_time;
  if ( *(_BYTE *)(((unsigned __int64)&param->item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  item_limit_type = param->item_limit_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_limit_type_);
  }
  this->item_limit_type_ = item_limit_type;
  std::set<unsigned int>::set(&this->qualify_uid_set_, &param->qualify_uid_set);
  std::set<unsigned int>::set(&this->remain_uid_set_, &param->remain_uid_set);
  if ( *(_BYTE *)(((unsigned __int64)&param->refresh_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->refresh_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  refresh_id = param->refresh_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id_);
  }
  this->refresh_id_ = refresh_id;
  std::shared_ptr<SceneUnixTimer>::shared_ptr(&this->life_timer_ptr_);
};

// Line 45: range 00000000131313BA-00000000131316BB
int32_t __cdecl BlossomChestComp::toBin(const BlossomChestComp *const this, proto::GroupGadgetBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  google::protobuf::uint32 *v3; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-28h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-20h] BYREF
  proto::BlossomChestBin *proto_blossom_chest; // [rsp+28h] [rbp-18h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-10h]
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-8h]

  proto_blossom_chest = proto::GroupGadgetBin::mutable_blossom_chest(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlossomChestBin::set_blossom_chest_id(proto_blossom_chest, this->blossom_chest_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BlossomChestBin::set_drop_id(proto_blossom_chest, this->drop_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlossomChestBin::set_dead_time(proto_blossom_chest, this->dead_time_);
  __for_range = &this->qualify_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->qualify_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->qualify_uid_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlossomChestBin::add_qualify_uid_list(proto_blossom_chest, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->remain_uid_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->remain_uid_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlossomChestBin::add_remain_uid_list(proto_blossom_chest, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BlossomChestBin::set_item_limit_type(proto_blossom_chest, this->item_limit_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlossomChestBin::set_refresh_id(proto_blossom_chest, this->refresh_id_);
  return 0;
};

// Line 65: range 00000000131316BC-0000000013131CB9
int32_t __cdecl BlossomChestComp::fromBin(BlossomChestComp *const this, const proto::GroupGadgetBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  uint32_t v6; // ecx
  uint32_t v7; // edx
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  Gadget *gadget; // rcx
  uint32_t v12; // ecx
  uint32_t refreshed; // edx
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+18h] [rbp-C8h]
  const proto::BlossomChestBin *proto_blossom_chest; // [rsp+20h] [rbp-C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-B0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-A8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-A0h]
  const data::BlossomChestExcelConfig *chest_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-80h] BYREF
  char v24[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:77";
  *(_QWORD *)(v2 + 16) = BlossomChestComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_blossom_chest = proto::GroupGadgetBin::blossom_chest(bin);
  v5 = proto::BlossomChestBin::blossom_chest_id(proto_blossom_chest);
  if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->blossom_chest_id_);
  }
  this->blossom_chest_id_ = v5;
  v6 = proto::BlossomChestBin::drop_id(proto_blossom_chest);
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_id_);
  }
  this->drop_id_ = v6;
  v7 = proto::BlossomChestBin::dead_time(proto_blossom_chest);
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dead_time_);
  }
  this->dead_time_ = v7;
  std::set<unsigned int>::clear(&this->qualify_uid_set_);
  __for_range = proto::BlossomChestBin::qualify_uid_list(proto_blossom_chest);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->qualify_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  std::set<unsigned int>::clear(&this->remain_uid_set_);
  __for_range_0 = proto::BlossomChestBin::remain_uid_list(proto_blossom_chest);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    std::set<unsigned int>::insert(&this->remain_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  chest_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomChestExcelConfig(
                       p_blossom_config_mgr,
                       this->blossom_chest_id_);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( chest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget = this->gadget_;
    if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->chest_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chest_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chest_config_ptr->chest_gadget_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    Gadget::setGadgetId(gadget, chest_config_ptr->chest_gadget_id);
    v12 = proto::BlossomChestBin::item_limit_type(proto_blossom_chest);
    if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->item_limit_type_);
    }
    this->item_limit_type_ = v12;
    refreshed = proto::BlossomChestBin::refresh_id(proto_blossom_chest);
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->refresh_id_);
    }
    this->refresh_id_ = refreshed;
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/blossom_chest_comp.cpp",
      "fromBin",
      85);
    v9 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v23,
           (const char (*)[74])"[BlossomChestComp] findBlossomChestExcelConfig failed, blossim_chest_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->blossom_chest_id_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = -1;
  }
  if ( v24 == (char *)v2 )
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

// Line 95: range 0000000013131CBA-0000000013131CEE
int32_t __cdecl BlossomChestComp::toClient(const BlossomChestComp *const this, proto::SceneGadgetInfo *gadget_info)
{
  proto::BlossomChestInfo *v2; // rdx

  v2 = proto::SceneGadgetInfo::mutable_blossom_chest(gadget_info);
  BlossomChestComp::fillBlossomChestInfo(this, v2);
  return 0;
};

// Line 101: range 0000000013131CF0-0000000013131D4C
int32_t __cdecl BlossomChestComp::start(BlossomChestComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->dead_time_ )
    BlossomChestComp::startLifeTimer(this);
  return 0;
};

// Line 112: range 0000000013131D4E-0000000013132116
int32_t __cdecl BlossomChestComp::getCostItemParam(
        const BlossomChestComp *const this,
        Player *player,
        const EntityInteractParam *param,
        ItemParam *item_param)
{
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t resin; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t CondenseResinMaterialId; // ecx
  uint32_t v11; // ecx
  const data::BlossomChestExcelConfig *chest_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  chest_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomChestExcelConfig(
                       p_blossom_config_mgr,
                       this->blossom_chest_id_);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( !chest_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/blossom_chest_comp.cpp",
      "getCostItemParam",
      116);
    v5 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v16,
           (const char (*)[74])"[BlossomChestComp] findBlossomChestExcelConfig failed, blossim_chest_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->blossom_chest_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( param->resin_cost_type == RESIN_COST_TYPE_CONDENSE )
  {
    if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chest_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    resin = chest_config_ptr->resin;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    LOBYTE(resin) = resin != ConstValueExcelConfigMgr::getCondenseResinReplaceResinCount(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( (_BYTE)resin )
      return 681;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    CondenseResinMaterialId = ConstValueExcelConfigMgr::getCondenseResinMaterialId(&v9->design_config.txt_config_mgr.const_value_config_mgr);
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(item_param);
    }
    item_param->item_id = CondenseResinMaterialId;
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&item_param->count);
    }
    item_param->count = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(item_param);
    }
    item_param->item_id = 106;
    if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chest_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v11 = chest_config_ptr->resin;
    if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&item_param->count);
    }
    item_param->count = v11;
  }
  return 0;
};

// Line 145: range 0000000013132118-00000000131330A4
int32_t __cdecl BlossomChestComp::interactCheck(
        BlossomChestComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool isBlossomClosed; // r15
  char v9; // al
  common::milog::MiLogStream *v10; // rcx
  time_t Now; // rcx
  char v12; // al
  common::milog::MiLogStream *v13; // rcx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v15; // rcx
  _BOOL4 v16; // r15d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t Level; // r15d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int v23; // r15d
  PlayerBasicComp *BasicComp; // rax
  PlayerBasicComp *v25; // rax
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  PlayerReunionComp *ReunionComp; // rcx
  bool isReunionPrivilegeValid; // al
  PlayerReunionComp *v33; // rcx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  PlayerItemComp *ItemComp; // rax
  proto::ResinCostType resin_cost_type; // eax
  PlayerOpActivityComp *OpActivityComp; // rdi
  PlayerItemComp *p_drop_id; // rdi
  uint32_t v41; // esi
  common::milog::MiLogStream *v42; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-15Ch]
  const data::BlossomChestExcelConfig *chest_config_ptr; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v48; // [rsp+30h] [rbp-150h] BYREF
  char v49[304]; // [rsp+50h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 4 7 ret:217 64 4 14 drop_count:229 80 4 15 schedule_id:230 96 16 13 scene_ptr:178 128 16 19"
                        " owner_world_ptr:184 160 16 14 item_param:216 192 24 10 reason:227";
  *(_QWORD *)(v4 + 16) = BlossomChestComp::interactCheck;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 160));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
  isBlossomClosed = FeatureSwitchMgr::isBlossomClosed(&v7->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
  if ( isBlossomClosed )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/blossom_chest_comp.cpp",
      "interactCheck",
      148);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v48,
      (const char (*)[41])"[BlossomChestComp] blosom feature closed");
    common::milog::MiLogStream::~MiLogStream(&v48);
    v3 = 142;
    goto LABEL_102;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Gadget::getState(this->gadget_) )
    goto LABEL_13;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Gadget::getState(this->gadget_) == 102 )
LABEL_13:
    v9 = 0;
  else
    v9 = 1;
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/blossom_chest_comp.cpp",
      "interactCheck",
      155);
    v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v48,
            (const char (*)[46])"[BlossomChestComp] gadget is locked, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v10, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v3 = 804;
    goto LABEL_102;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->dead_time_ )
    goto LABEL_25;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Now >= this->dead_time_ )
    v12 = 1;
  else
LABEL_25:
    v12 = 0;
  if ( v12 )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/blossom_chest_comp.cpp",
      "interactCheck",
      161);
    v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v48,
            (const char (*)[52])"[BlossomChestComp] chest lifetime is over, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v13, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v3 = 815;
    goto LABEL_102;
  }
  *(_DWORD *)(v4 + 80) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->qualify_uid_set_,
          (const unsigned int *)(v4 + 80)) )
  {
    v3 = 814;
    goto LABEL_102;
  }
  *(_DWORD *)(v4 + 80) = Player::getUid(player);
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->remain_uid_set_,
          (const unsigned int *)(v4 + 80)) )
  {
    v3 = 816;
    goto LABEL_102;
  }
  SceneComp = Player::getSceneComp(player);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    goto LABEL_55;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v4 + 96));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/blossom_chest_comp.cpp",
      "interactCheck",
      181);
    v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v48,
            (const char (*)[49])"[BlossomChestComp] getScene is nullptr, gadget: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    v3 = -1;
    v16 = 0;
  }
  else
  {
    v17 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8();
    v18 = *(_QWORD *)v17 + 64LL;
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v18)(v4 + 128, v17);
    Player::getSceneComp(player);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 160));
    if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 160))
      && std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 128))
      && (v19 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160)),
          Level = PlayerWorld::getLevel(v19),
          v21 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128)),
          Level < PlayerWorld::getLevel(v21)) )
    {
      v3 = 817;
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 160));
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 128));
    v16 = v23 == 1;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  if ( v16 )
  {
LABEL_55:
    BasicComp = Player::getBasicComp(player);
    if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x2Du) )
    {
      v25 = Player::getBasicComp(player);
      PlayerBasicComp::setOpenState(v25, 0x2Du, 1u, 1);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 160));
    p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160))->design_config.txt_config_mgr.blossom_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    chest_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomChestExcelConfig(
                         p_blossom_config_mgr,
                         this->blossom_chest_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 160));
    if ( !chest_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/blossom_chest_comp.cpp",
        "interactCheck",
        203);
      v27 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
              &v48,
              (const char (*)[74])"[BlossomChestComp] findBlossomChestExcelConfig failed, blossim_chest_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->blossom_chest_id_);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v3 = -1;
      goto LABEL_102;
    }
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/gadget/blossom_chest_comp.cpp",
      "interactCheck",
      207);
    v28 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v48,
            (const char (*)[50])"[REUNION] blossom interactCheck, resin_cost_type:");
    v29 = common::milog::MiLogStream::operator<<<proto::ResinCostType,(proto::ResinCostType*)0>(
            v28,
            &param->resin_cost_type);
    v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" reunion: ");
    ReunionComp = Player::getReunionComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    isReunionPrivilegeValid = PlayerReunionComp::isReunionPrivilegeValid(
                                ReunionComp,
                                2u,
                                chest_config_ptr->refresh_type);
    common::milog::MiLogStream::operator<<(v30, isReunionPrivilegeValid);
    common::milog::MiLogStream::~MiLogStream(&v48);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( param->resin_cost_type != RESIN_COST_TYPE_REUNION_PRIVILEGE )
      goto LABEL_70;
    v33 = Player::getReunionComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( !PlayerReunionComp::isReunionPrivilegeValid(v33, 2u, chest_config_ptr->refresh_type) )
      v34 = 1;
    else
LABEL_70:
      v34 = 0;
    if ( v34 )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/blossom_chest_comp.cpp",
        "interactCheck",
        211);
      v35 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v48,
              (const char (*)[38])"[REUNION] resin privilege not valid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &this->blossom_chest_id_);
      common::milog::MiLogStream::~MiLogStream(&v48);
      v3 = -1;
      goto LABEL_102;
    }
    *(_DWORD *)(v4 + 160) = 0;
    *(_DWORD *)(v4 + 164) = 0;
    *(_DWORD *)(v4 + 168) = 0;
    *(_DWORD *)(v4 + 172) = 0;
    *(_DWORD *)(v4 + 48) = BlossomChestComp::getCostItemParam(this, player, param, (ItemParam *)(v4 + 160));
    if ( *(_DWORD *)(v4 + 48) )
    {
      v3 = *(_DWORD *)(v4 + 48);
      goto LABEL_102;
    }
    if ( *(_DWORD *)(v4 + 160) )
    {
      if ( *(_DWORD *)(v4 + 164) )
      {
        ItemComp = Player::getItemComp(player);
        if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v4 + 160)) )
        {
          v3 = 660;
          goto LABEL_102;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ActionReason::ActionReason(
      (ActionReason *const)(v4 + 192),
      ACTION_REASON_OPEN_BLOSSOM_CHEST,
      (data::ItemLimitType)this->item_limit_type_);
    *(_DWORD *)(v4 + 64) = 0;
    *(_DWORD *)(v4 + 80) = 0;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    resin_cost_type = param->resin_cost_type;
    if ( param->resin_cost_type > RESIN_COST_TYPE_REUNION_PRIVILEGE )
    {
      if ( resin_cost_type == RESIN_COST_TYPE_OP_ACTIVITY )
      {
        OpActivityComp = Player::getOpActivityComp(player);
        if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          OpActivityComp = (PlayerOpActivityComp *)&this->refresh_id_;
          __asan_report_load4();
        }
        ret = PlayerOpActivityComp::tryGetMaxDropCountInBlossom(
                OpActivityComp,
                this->refresh_id_,
                (uint32_t *)(v4 + 80),
                (uint32_t *)(v4 + 64));
        if ( ret )
        {
          v3 = ret;
          goto LABEL_102;
        }
        goto LABEL_97;
      }
    }
    else if ( resin_cost_type >= RESIN_COST_TYPE_CONDENSE )
    {
      *(_DWORD *)(v4 + 64) = 2;
LABEL_97:
      p_drop_id = Player::getItemComp(player);
      v41 = *(_DWORD *)(v4 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
      {
        p_drop_id = (PlayerItemComp *)&this->drop_id_;
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 48) = PlayerItemComp::checkFrontLooseGrantDropItems(
                               p_drop_id,
                               this->drop_id_,
                               v41,
                               (const ActionReason *)(v4 + 192),
                               0LL);
      if ( *(_DWORD *)(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/blossom_chest_comp.cpp",
          "interactCheck",
          259);
        v42 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v48,
                (const char (*)[43])"checkFrontLooseGrantDropItems failed, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v42, (const int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v48);
      }
      v3 = *(_DWORD *)(v4 + 48);
      goto LABEL_102;
    }
    *(_DWORD *)(v4 + 64) = 1;
    goto LABEL_97;
  }
LABEL_102:
  result = v3;
  if ( v49 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 265: range 00000000131330A6-0000000013134569
int32_t __cdecl BlossomChestComp::interact(
        BlossomChestComp *const this,
        Player *player,
        const EntityInteractParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  int v10; // eax
  PlayerOpActivityComp *OpActivityComp; // rdi
  PlayerItemComp *ItemComp; // rdi
  uint32_t v13; // esi
  uint32_t v14; // ecx
  PlayerItemComp *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t v21; // edi
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  common::milog::MiLogStream *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  common::milog::MiLogStream *v29; // rcx
  PlayerItemComp *v30; // r14
  PlayerItemComp *v31; // rax
  PlayerReunionComp *ReunionComp; // rax
  PlayerOpActivityComp *v33; // rax
  PlayerItemComp *v34; // rax
  __int32 blossom_chest_id; // edi
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  PlayerEventComp *EventComp; // r14
  PlayerWorld *v38; // r14
  uint32_t ConfigId; // r15d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v41; // rcx
  PlayerMpComp *MpComp; // rax
  uint32_t v43; // ecx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  int32_t result; // eax
  std::string v48; // [rsp+0h] [rbp-240h]
  uint32_t player_uid; // [rsp+14h] [rbp-22Ch]
  bool is_use_bonus; // [rsp+33h] [rbp-20Dh]
  unsigned int __args_1; // [rsp+34h] [rbp-20Ch] BYREF
  unsigned int val; // [rsp+38h] [rbp-208h] BYREF
  int32_t ret; // [rsp+3Ch] [rbp-204h]
  const data::BlossomChestExcelConfig *chest_config_ptr; // [rsp+40h] [rbp-200h]
  SubItemReason reason; // [rsp+48h] [rbp-1F8h] BYREF
  std::shared_ptr<OpenBlossomChestEvent> __r; // [rsp+50h] [rbp-1F0h] BYREF
  std::shared_ptr<Config> v59; // [rsp+60h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v60; // [rsp+70h] [rbp-1D0h] BYREF
  char v61[432]; // [rsp+90h] [rbp-1B0h] BYREF

  *(&v48._anon_0._M_allocated_capacity + 1) = (std::string::size_type)param;
  v3 = (unsigned __int64)v61;
  v48._M_string_length = (std::string::size_type)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 1 10 holder:273 64 4 14 drop_count:278 80 4 15 schedule_id:279 96 8 17 output_result:331 1"
                        "28 12 20 drop_bonus_param:282 160 16 13 scene_ptr:345 192 16 13 world_ptr:352 224 16 19 cost_ite"
                        "m_param:360 256 24 10 reason:276 320 24 18 item_param_vec:277";
  *(_QWORD *)(v3 + 16) = BlossomChestComp::interact;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
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
  if ( !(*(unsigned int (__fastcall **)(BlossomChestComp *const, Player *, __int64))v6)(
          this,
          player,
          *(&v48._anon_0._M_allocated_capacity + 1)) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v60, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x611u, v48);
    std::string::~string(&v60);
    if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_type_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 256),
      ACTION_REASON_OPEN_BLOSSOM_CHEST,
      (data::ItemLimitType)this->item_limit_type_);
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 320));
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 80) = 0;
    ret = 0;
    is_use_bonus = 0;
    *(_DWORD *)(v3 + 128) = 0;
    *(_DWORD *)(v3 + 132) = 0;
    *(_DWORD *)(v3 + 136) = 0;
    if ( *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v48._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v10 = **((_DWORD **)&v48._anon_0._M_allocated_capacity + 1);
    if ( **((_DWORD **)&v48._anon_0._M_allocated_capacity + 1) == 4 )
    {
      is_use_bonus = 1;
      OpActivityComp = Player::getOpActivityComp(player);
      if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        OpActivityComp = (PlayerOpActivityComp *)&this->refresh_id_;
        __asan_report_load4();
      }
      ret = PlayerOpActivityComp::tryGetMaxDropCountInBlossom(
              OpActivityComp,
              this->refresh_id_,
              (uint32_t *)(v3 + 80),
              (uint32_t *)(v3 + 64));
      if ( ret )
      {
        v8 = ret;
        goto LABEL_106;
      }
    }
    else
    {
      if ( v10 > 4 )
      {
LABEL_27:
        *(_DWORD *)(v3 + 64) = 1;
        goto LABEL_28;
      }
      if ( v10 == 2 )
      {
        *(_DWORD *)(v3 + 64) = 2;
      }
      else
      {
        if ( v10 != 3 )
          goto LABEL_27;
        is_use_bonus = 1;
        *(_DWORD *)(v3 + 64) = 2;
      }
    }
LABEL_28:
    if ( !is_use_bonus )
      goto LABEL_35;
    ItemComp = Player::getItemComp(player);
    v13 = *(_DWORD *)(v3 + 80);
    v14 = *(_DWORD *)(v3 + 64);
    if ( *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v48._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)*(&v48._anon_0._M_allocated_capacity + 1);
      __asan_report_load4();
    }
    PlayerItemComp::buildDropBonusParam(
      ItemComp,
      (DropBonusParam *)(v3 + 128),
      **((proto::ResinCostType **)&v48._anon_0._M_allocated_capacity + 1),
      v14,
      v13);
    v15 = Player::getItemComp(player);
    ret = PlayerItemComp::checkDropBonus(v15, (const DropBonusParam *)(v3 + 128));
    if ( ret == 698 )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/gadget/blossom_chest_comp.cpp",
        "interact",
        321);
      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
        &v60,
        (const char (*)[50])"bonus check exceed double limit, drop count set 1");
      common::milog::MiLogStream::~MiLogStream(&v60);
      *(_DWORD *)(v3 + 64) = 1;
      goto LABEL_35;
    }
    if ( !ret )
    {
LABEL_35:
      v21 = *(_DWORD *)(v3 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_id_ >> 3) + 0x7FFF8000) )
      {
        v21 = (_DWORD)this + 20;
        __asan_report_load4();
      }
      *(OutputResult *)(v3 + 96) = DropUtils::dropItems(
                                     player,
                                     this->drop_id_,
                                     v21,
                                     (const ActionReason *)(v3 + 256),
                                     (std::vector<ItemParam> *)(v3 + 320));
      if ( *(_DWORD *)(v3 + 96) )
      {
        LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 96));
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          LogLevel,
          "./src/gadget/blossom_chest_comp.cpp",
          "interact",
          334);
        v23 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v60,
                (const char (*)[43])"[BlossomChestComp] dropItems failed, uid: ");
        val = Player::getUid(player);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
        v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" ,gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v25, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v8 = *(_DWORD *)(v3 + 96);
        goto LABEL_106;
      }
      if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 320)) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/blossom_chest_comp.cpp",
          "interact",
          341);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v60,
          (const char (*)[21])"item_param_vec empty");
        common::milog::MiLogStream::~MiLogStream(&v60);
        v8 = -1;
        goto LABEL_106;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Entity::getScene((const Entity *const)(v3 + 160));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/blossom_chest_comp.cpp",
          "interact",
          348);
        v26 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v60,
                (const char (*)[46])"[BlossomChestComp] scene_ptr is null, gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v26, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v8 = -1;
        goto LABEL_105;
      }
      v27 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8();
      v28 = *(_QWORD *)v27 + 64LL;
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        v27 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v28)(v3 + 192, v27);
      if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 192)) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/blossom_chest_comp.cpp",
          "interact",
          355);
        v29 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v60,
                (const char (*)[46])"[BlossomChestComp] world_ptr is null, gadget:");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v29, this->gadget_);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v8 = -1;
        goto LABEL_104;
      }
      *(_DWORD *)(v3 + 224) = 0;
      *(_DWORD *)(v3 + 228) = 0;
      *(_DWORD *)(v3 + 232) = 0;
      *(_DWORD *)(v3 + 236) = 0;
      BlossomChestComp::getCostItemParam(
        this,
        player,
        *((const EntityInteractParam **)&v48._anon_0._M_allocated_capacity + 1),
        (ItemParam *)(v3 + 224));
      if ( *(_DWORD *)(v3 + 224) && *(_DWORD *)(v3 + 228) )
      {
        v30 = Player::getItemComp(player);
        SubItemReason::SubItemReason(&reason, (const ActionReason *)(v3 + 256));
        PlayerItemComp::subItem(v30, (const ItemParam *)(v3 + 224), &reason);
      }
      v31 = Player::getItemComp(player);
      PlayerItemComp::addItemBatch(
        v31,
        (const std::vector<ItemParam> *)(v3 + 320),
        (const ActionReason *)(v3 + 256),
        0LL);
      if ( is_use_bonus && ret != 698 )
      {
        if ( *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((v48._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( **((_DWORD **)&v48._anon_0._M_allocated_capacity + 1) == 3 )
        {
          ReunionComp = Player::getReunionComp(player);
          PlayerReunionComp::addPrivilegeCount(ReunionComp);
        }
        else
        {
          if ( *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
            && (char)((v48._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( **((_DWORD **)&v48._anon_0._M_allocated_capacity + 1) == 4 )
          {
            v33 = Player::getOpActivityComp(player);
            PlayerOpActivityComp::addUseBonusCount(v33, *(_DWORD *)(v3 + 80));
          }
        }
        v34 = Player::getItemComp(player);
        PlayerItemComp::recordDropBonus(v34, (const DropBonusParam *)(v3 + 128));
      }
      val = Player::getUid(player);
      std::set<unsigned int>::erase(&this->remain_uid_set_, &val);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Gadget::setState(this->gadget_, 0x66u, 0, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      blossom_chest_id = this->blossom_chest_id_;
      if ( *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((v48._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v48._anon_0._M_allocated_capacity + 1) >> 3)
                                                                     + 0x7FFF8000) )
      {
        blossom_chest_id = *((_DWORD *)&v48._anon_0._M_allocated_capacity + 2);
        __asan_report_load4();
      }
      BlossomChestComp::logOpenChest(
        this,
        player,
        (const ItemParam *)(v3 + 224),
        **((_DWORD **)&v48._anon_0._M_allocated_capacity + 1),
        (const std::vector<ItemParam> *)(v3 + 320),
        blossom_chest_id);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v59);
      p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59)->design_config.txt_config_mgr.blossom_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      chest_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomChestExcelConfig(
                           p_blossom_config_mgr,
                           this->blossom_chest_id_);
      std::shared_ptr<Config>::~shared_ptr(&v59);
      if ( chest_config_ptr )
      {
        EventComp = Player::getEventComp(player);
        if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        val = chest_config_ptr->refresh_type;
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __args_1 = Gadget::getGadgetId(this->gadget_);
        common::tools::perf::make_shared<OpenBlossomChestEvent,unsigned int,unsigned int>(
          (unsigned int *)&__r,
          &__args_1,
          &val,
          &__args_1);
        std::shared_ptr<BaseEvent>::shared_ptr<OpenBlossomChestEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v59,
          &__r);
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v59);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v59);
        std::shared_ptr<OpenBlossomChestEvent>::~shared_ptr(&__r);
      }
      v38 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      player_uid = Player::getUid(player);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ConfigId = Entity::getConfigId((const Entity *const)this->gadget_);
      if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GroupId = Entity::getGroupId((const Entity *const)this->gadget_);
      PlayerWorld::onInteractRewardPoint(v38, GroupId, ConfigId, player_uid);
      if ( std::set<unsigned int>::empty(&this->remain_uid_set_) )
      {
        BlossomChestComp::destroySelf(this);
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/blossom_chest_comp.cpp",
          "interact",
          401);
        v41 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                &v60,
                (const char (*)[77])"[BlossomChestComp] remain_uid_set_ is empty, destroy blossom chest, gadget: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        MpComp = Player::getMpComp(player);
        if ( PlayerMpComp::isInMpMode(MpComp) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !this->dead_time_ )
          {
            v43 = common::tools::TimeUtils::getNow() + 10;
            if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->dead_time_);
            }
            this->dead_time_ = v43;
            BlossomChestComp::startLifeTimer(this);
            BlossomChestComp::notifyBlossomChestInfo(this);
          }
          goto LABEL_103;
        }
        BlossomChestComp::destroySelf(this);
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/gadget/blossom_chest_comp.cpp",
          "interact",
          419);
        v41 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                &v60,
                (const char (*)[64])"[BlossomChestComp] single type, destroy blossom chest, gadget: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      v44 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v41, this->gadget_);
      v45 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v44, (const char (*)[14])" ,owner_uid: ");
      v46 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      val = Scene::getOwnerUid(v46);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &val);
      common::milog::MiLogStream::~MiLogStream(&v60);
LABEL_103:
      v8 = ret;
LABEL_104:
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 192));
LABEL_105:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 160));
      goto LABEL_106;
    }
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/blossom_chest_comp.cpp",
      "interact",
      326);
    v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v60,
            (const char (*)[35])"checkDropBonus failed, drop_count:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
    v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])", resin_cost_type:");
    v19 = common::milog::MiLogStream::operator<<<proto::ResinCostType,(proto::ResinCostType*)0>(
            v18,
            *((const proto::ResinCostType **)&v48._anon_0._M_allocated_capacity + 1));
    v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])", schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v60);
    v8 = -1;
LABEL_106:
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 320));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    goto LABEL_107;
  }
  common::milog::MiLogStream::create(
    &v60,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/gadget/blossom_chest_comp.cpp",
    "interact",
    269);
  v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
         &v60,
         (const char (*)[50])"[BlossomChestComp] interactCheck failed, gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v7, this->gadget_);
  common::milog::MiLogStream::~MiLogStream(&v60);
  v8 = -1;
LABEL_107:
  result = v8;
  if ( v48._M_string_length == v3 )
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

// Line 427: range 000000001313456A-0000000013134942
int32_t __cdecl BlossomChestComp::fillBlossomChestInfo(
        const BlossomChestComp *const this,
        proto::BlossomChestInfo *proto_blossom_chest_info)
{
  BlossomExcelConfigMgr *p_blossom_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  google::protobuf::uint32 *v5; // rdx
  google::protobuf::uint32 *v6; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const data::BlossomChestExcelConfig *chest_config_ptr; // [rsp+28h] [rbp-58h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  p_blossom_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.blossom_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->blossom_chest_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  chest_config_ptr = data::BlossomExcelConfigMgrBase::findBlossomChestExcelConfig(
                       p_blossom_config_mgr,
                       this->blossom_chest_id_);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( chest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chest_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BlossomChestInfo::set_blossom_refresh_type(proto_blossom_chest_info, chest_config_ptr->refresh_type);
    if ( *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chest_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chest_config_ptr->resin >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlossomChestInfo::set_resin(proto_blossom_chest_info, chest_config_ptr->resin);
    __for_range = &this->remain_uid_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->remain_uid_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->remain_uid_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlossomChestInfo::add_remain_uid_list(proto_blossom_chest_info, *v5);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    __for_range_0 = &this->qualify_uid_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->qualify_uid_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlossomChestInfo::add_qualify_uid_list(proto_blossom_chest_info, *v6);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BlossomChestInfo::set_dead_time(proto_blossom_chest_info, this->dead_time_);
    if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->refresh_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BlossomChestInfo::set_refresh_id(proto_blossom_chest_info, this->refresh_id_);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/blossom_chest_comp.cpp",
      "fillBlossomChestInfo",
      431);
    v3 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v13,
           (const char (*)[74])"[BlossomChestComp] findBlossomChestExcelConfig failed, blossim_chest_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->blossom_chest_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
};

// Line 454: range 0000000013134944-0000000013134B48
void __cdecl BlossomChestComp::notifyBlossomChestInfo(BlossomChestComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::BlossomChestInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto::BlossomChestInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::BlossomChestInfo *v7; // rdx
  Entity *gadget; // r14
  std::shared_ptr<proto::BlossomChestInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:455";
  *(_QWORD *)(v1 + 16) = BlossomChestComp::notifyBlossomChestInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::BlossomChestInfoNotify>();
  v4 = std::__shared_ptr_access<proto::BlossomChestInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BlossomChestInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EntityId = Entity::getEntityId((const Entity *const)this->gadget_);
  proto::BlossomChestInfoNotify::set_entity_id(v4, EntityId);
  v6 = std::__shared_ptr_access<proto::BlossomChestInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BlossomChestInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v7 = proto::BlossomChestInfoNotify::mutable_blossom_chest_info(v6);
  if ( !BlossomChestComp::fillBlossomChestInfo(this, v7) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    gadget = (Entity *)this->gadget_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::BlossomChestInfoNotify>(&__r);
    Entity::notifyViewingPlayers(gadget, (common::minet::ConstMessagePtr *)&__r, 1);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::BlossomChestInfoNotify>::~shared_ptr((std::shared_ptr<proto::BlossomChestInfoNotify> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 465: range 0000000013134D9A-000000001313527A
void __cdecl BlossomChestComp::startLifeTimer(BlossomChestComp *const this)
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
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:466 64 16 14 gadget_wtr:485";
  *(_QWORD *)(v1 + 16) = BlossomChestComp::startLifeTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  GadgetCompBase::getGadget(this);
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/blossom_chest_comp.cpp",
      "startLifeTimer",
      469);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v10,
      (const char (*)[37])"[BlossomChestComp] scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    life_time = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dead_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now < this->dead_time_ )
      life_time = this->dead_time_ - now;
    if ( std::operator!=<SceneUnixTimer>(0LL, &this->life_timer_ptr_) )
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
    common::tools::perf::make_shared<SceneUnixTimer,std::shared_ptr<Scene> &,BlossomChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}>(
      &v9,
      (BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneUnixTimer>::operator=(&this->life_timer_ptr_, (std::shared_ptr<SceneUnixTimer> *)&v9);
    std::shared_ptr<SceneUnixTimer>::~shared_ptr((std::shared_ptr<SceneUnixTimer> *const)&v9);
    BlossomChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::~startLifeTimer((BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneUnixTimer>(0LL, &this->life_timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/gadget/blossom_chest_comp.cpp",
        "startLifeTimer",
        488);
      common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
        &v10,
        (const char (*)[48])"[BlossomChestComp] create SceneUnixTimer failed");
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    else
    {
      v5 = std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->life_timer_ptr_);
      if ( SceneUnixTimer::startS(v5, life_time, 0, "./src/gadget/blossom_chest_comp.cpp", "startLifeTimer", 492) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/gadget/blossom_chest_comp.cpp",
          "startLifeTimer",
          494);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v10,
          (const char (*)[43])"[BlossomChestComp] life_timer start failed");
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

// Line 485: range 0000000013134B4A-0000000013134D7D
void __cdecl BlossomChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::operator()(
        const BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<BlossomChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
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
  *(_QWORD *)(v2 + 8) = "2 32 16 14 gadget_ptr:485 64 16 11 obj_ptr:485";
  *(_QWORD *)(v2 + 16) = BlossomChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::operator();
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
      "./src/gadget/blossom_chest_comp.cpp",
      "operator()",
      485);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"gadget is null when timer call back");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    EcsBase<Gadget,GadgetCompBase,28u>::findComp<BlossomChestComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v2 + 64));
    if ( std::operator!=<BlossomChestComp>((const std::shared_ptr<BlossomChestComp> *)(v2 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<BlossomChestComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlossomChestComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BlossomChestComp::onLifeTimer(v5, now_ms);
    }
    std::shared_ptr<BlossomChestComp>::~shared_ptr((std::shared_ptr<BlossomChestComp> *const)(v2 + 64));
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

// Line 485: range 00000000131AFAF0-00000000131AFB15
void __cdecl BlossomChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::startLifeTimer(
        BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *const this,
        BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 485: range 00000000131B125E-00000000131B1283
void __cdecl BlossomChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::startLifeTimer(
        BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *const this,
        const BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Gadget>::weak_ptr(&this->__gadget_wtr, &a2->__gadget_wtr);
};

// Line 485: range 0000000013134D7E-0000000013134D98
void __cdecl BlossomChestComp::startLifeTimer(void)::{lambda(unsigned long)#1}::~startLifeTimer(
        BlossomChestComp::startLifeTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Gadget>::~weak_ptr(&this->__gadget_wtr);
};

// Line 500: range 000000001313527C-00000000131354E1
void __cdecl BlossomChestComp::onLifeTimer(BlossomChestComp *const this, uint64_t a2)
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
  *(_QWORD *)(v2 + 8) = "2 48 4 13 owner_uid:501 64 16 13 scene_ptr:502";
  *(_QWORD *)(v2 + 16) = BlossomChestComp::onLifeTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v2 + 64));
  if ( std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    v5 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = Scene::getOwnerUid(v5);
  }
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/blossom_chest_comp.cpp",
    "onLifeTimer",
    507);
  v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
         &v9,
         (const char (*)[63])"[BlossomChestComp] onLifeTimer destroy blossom chest, gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v6, this->gadget_);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" ,owner_uid: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v9);
  BlossomChestComp::destroySelf(this);
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

// Line 513: range 00000000131354E2-0000000013135BF8
void __cdecl BlossomChestComp::destroySelf(BlossomChestComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rcx
  Gadget *gadget; // r15
  _QWORD *baseclass_0; // rax
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(Gadget *, VisionContext *); // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  int32_t *p_param1; // rax
  Group *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  PlayerWorld *v17; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t GroupId; // eax
  uint32_t entity_id; // [rsp+1Ch] [rbp-104h]
  uint32_t config_id; // [rsp+20h] [rbp-100h]
  VisionContext v22; // [rsp+24h] [rbp-FCh] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 13 scene_ptr:515 64 16 13 group_ptr:523 96 16 11 evt_ptr:533 128 16 13 world_ptr:541";
  *(_QWORD *)(v1 + 16) = BlossomChestComp::destroySelf;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -202178560;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/gadget/blossom_chest_comp.cpp",
    "destroySelf",
    514);
  v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v23,
         (const char (*)[41])"[BlossomChestComp] destroySelf, gadget: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v4, this->gadget_);
  common::milog::MiLogStream::~MiLogStream(&v23);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Entity::getScene((const Entity *const)(v1 + 32));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/gadget/blossom_chest_comp.cpp",
      "destroySelf",
      518);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v23,
           (const char (*)[42])"[BlossomChestComp] scene is null, gadget:");
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v5, this->gadget_);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Entity::getGroup((const Entity *const)(v1 + 64));
    entity_id = Entity::getEntityId((const Entity *const)this->gadget_);
    if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    config_id = Entity::getConfigId((const Entity *const)this->gadget_);
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
    v8 = *baseclass_0 + 128LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8();
    v9 = *(void (__fastcall **)(Gadget *, VisionContext *))v8;
    VisionContext::VisionContext(&v22, VISION_DIE);
    v9(gadget, &v22);
    if ( std::operator!=<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 64)) )
    {
      EventUtil::createEvent((data::EventType)(v1 + 96));
      if ( std::operator!=<Event>(0LL, (const std::shared_ptr<Event> *)(v1 + 96)) )
      {
        v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        p_source_entity_id = &v10->source_entity_id;
        if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(p_source_entity_id);
        }
        v10->source_entity_id = entity_id;
        v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        p_param1 = &v12->param1;
        if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(p_param1);
        }
        v12->param1 = config_id;
        v14 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        Group::handleEvent(v14, (EventPtr *)(v1 + 96));
      }
      v15 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      v16 = *(_QWORD *)v15 + 64LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64))v16)(v1 + 128, v15);
      if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 128)) )
      {
        v17 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        GroupId = Group::getGroupId(v18);
        PlayerWorld::onDestroyRewardPoint(v17, GroupId, config_id);
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 128));
      std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 96));
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v24 == (char *)v1 )
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

// Line 550: range 0000000013135BFA-0000000013136199
void __cdecl BlossomChestComp::logOpenChest(
        BlossomChestComp *const this,
        Player *player,
        const ItemParam *cost_item_param,
        uint32_t reason_type,
        const std::vector<ItemParam> *item_param_vec,
        uint32_t blossom_chest_id)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  uint32_t GadgetId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  PlayerReunionComp *ReunionComp; // rax
  Entity *gadget; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  proto_log::EntityLog *v20; // rax
  Gadget *v21; // r14
  std::vector<ItemParam>::const_iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<ItemParam>::const_iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  const std::vector<ItemParam> *__for_range; // [rsp+40h] [rbp-C0h]
  const GadgetScriptConfig *gadget_script_config; // [rsp+48h] [rbp-B8h]
  const ItemParam *item_param; // [rsp+50h] [rbp-B0h]
  proto_log::ItemLog *item_log; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<google::protobuf::Message> p_log_message_ptr; // [rsp+60h] [rbp-A0h] BYREF
  std::string value; // [rsp+70h] [rbp-90h] BYREF
  char v34[112]; // [rsp+90h] [rbp-70h] BYREF

  v6 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_0(64LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "1 32 16 11 log_ptr:551";
  *(_QWORD *)(v6 + 16) = BlossomChestComp::logOpenChest;
  v8 = v6 >> 3;
  *(_DWORD *)(v8 + 2147450880) = -235802127;
  *(_DWORD *)(v8 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyOpenBlossomChest>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  GadgetId = Gadget::getGadgetId(this->gadget_);
  proto_log::PlayerLogBodyOpenBlossomChest::set_gadget_id(v9, GadgetId);
  if ( *(_BYTE *)(((unsigned __int64)cost_item_param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cost_item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_item_param >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( cost_item_param->item_id == 106 )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&cost_item_param->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cost_item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item_param->count >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyOpenBlossomChest::set_resin(v11, cost_item_param->count);
  }
  __for_range = item_param_vec;
  __for_begin._M_current = std::vector<ItemParam>::begin(item_param_vec)._M_current;
  __for_end._M_current = std::vector<ItemParam>::end(item_param_vec)._M_current;
  while ( __gnu_cxx::operator!=<ItemParam const*,std::vector<ItemParam>>(&__for_begin, &__for_end) )
  {
    item_param = __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::operator*(&__for_begin);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    item_log = proto_log::PlayerLogBodyOpenBlossomChest::add_item_vec(v12);
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
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&gadget_script_config->gadget_state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gadget_script_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_script_config->gadget_state >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyOpenBlossomChest::set_state(v13, gadget_script_config->gadget_state);
  }
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyOpenBlossomChest::set_blossom_chest_id(v14, blossom_chest_id);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  proto_log::PlayerLogBodyOpenBlossomChest::set_reason_type(v15, reason_type);
  if ( reason_type == 3 )
  {
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
    ReunionComp = Player::getReunionComp(player);
    PlayerReunionComp::getActivatedReunionVersion[abi:cxx11](&value, ReunionComp);
    proto_log::PlayerLogBodyOpenBlossomChest::set_reunion_version(v16, &value);
    std::string::~string(&value);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  gadget = (Entity *)this->gadget_;
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyOpenBlossomChest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 32));
  v20 = proto_log::PlayerLogBodyOpenBlossomChest::mutable_entity_log(v19);
  Entity::getEntityLog(gadget, v20);
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v21 = this->gadget_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyOpenBlossomChest,void>(
    &p_log_message_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyOpenBlossomChest> *)(v6 + 32));
  Gadget::logGadgetInteract(v21, player, &p_log_message_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_log_message_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyOpenBlossomChest>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyOpenBlossomChest> *const)(v6 + 32));
  if ( v34 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
