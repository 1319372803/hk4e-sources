// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/extra_prop/extra_prop_comp.cpp

// Line 21: range 00000000150F0746-00000000150F088A
const data::AvatarExtraPropExcelConfig *__cdecl ExtraProp::getExtraPropConfig(const ExtraProp *const this)
{
  AvatarExtraPropExcelConfigMgr *p_avatar_extra_prop_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::AvatarExtraPropExcelConfig *extra_prop_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_avatar_extra_prop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.avatar_extra_prop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  extra_prop_config_ptr = data::AvatarExtraPropExcelConfigMgrBase::findAvatarExtraPropExcelConfig(
                            p_avatar_extra_prop_config_mgr,
                            this->id);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( extra_prop_config_ptr )
    return extra_prop_config_ptr;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/extra_prop/extra_prop_comp.cpp",
    "getExtraPropConfig",
    25);
  v2 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v6,
         (const char (*)[42])"findAvatarExtraPropExcelConfig fails, id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, (const unsigned int *)this);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0LL;
};

// Line 32: range 00000000150F088C-00000000150F0BDB
void __cdecl ExtraProp::getProp(const ExtraProp *const this, std::map<data::FightPropType,float> *prop_map)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  std::map<data::FightPropType,float>::mapped_type *v7; // rax
  float v8; // xmm1_4
  uint32_t prop_count; // [rsp+14h] [rbp-5Ch]
  std::vector<data::ExtraPropConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::vector<data::ExtraPropConfig>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const data::AvatarExtraPropExcelConfig *extra_prop_config_ptr; // [rsp+28h] [rbp-48h]
  const std::vector<data::ExtraPropConfig> *__for_range; // [rsp+30h] [rbp-40h]
  const data::ExtraPropConfig *prop_config; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  extra_prop_config_ptr = ExtraProp::getExtraPropConfig(this);
  if ( extra_prop_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    prop_count = this->count;
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( prop_count > extra_prop_config_ptr->max_count )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/extra_prop/extra_prop_comp.cpp",
        "getProp",
        44);
      v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v15,
             (const char (*)[40])"check max extra_prop count fail, count:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->count);
      v4 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v3, (const char (*)[12])" max_count:");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &extra_prop_config_ptr->max_count);
      v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v5, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)this);
      common::milog::MiLogStream::~MiLogStream(&v15);
      if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      prop_count = extra_prop_config_ptr->max_count;
    }
    __for_range = &extra_prop_config_ptr->extra_props;
    __for_begin._M_current = std::vector<data::ExtraPropConfig>::begin(&extra_prop_config_ptr->extra_props)._M_current;
    __for_end._M_current = std::vector<data::ExtraPropConfig>::end(&extra_prop_config_ptr->extra_props)._M_current;
    while ( __gnu_cxx::operator!=<data::ExtraPropConfig const*,std::vector<data::ExtraPropConfig>>(
              &__for_begin,
              &__for_end) )
    {
      prop_config = __gnu_cxx::__normal_iterator<data::ExtraPropConfig const*,std::vector<data::ExtraPropConfig>>::operator*(&__for_begin);
      v7 = std::map<data::FightPropType,float>::operator[](prop_map, &prop_config->prop_type);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v8 = *v7;
      if ( *(_BYTE *)(((unsigned __int64)&prop_config->prop_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)prop_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prop_config->prop_value >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v7 = (float)(int)(prop_count * prop_config->prop_value) + v8;
      __gnu_cxx::__normal_iterator<data::ExtraPropConfig const*,std::vector<data::ExtraPropConfig>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/extra_prop/extra_prop_comp.cpp",
      "getProp",
      36);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v15,
      (const char (*)[37])"findAvatarExtraPropExcelConfig fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
};

// Line 57: range 00000000150F0BDC-00000000150F0D35
int32_t __cdecl ExtraPropComp::toSnapshot(const ExtraPropComp *const this, proto::AvatarSnapshotBin *snapshot_bin)
{
  std::map<unsigned int,ExtraProp>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,ExtraProp>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::AvatarBin *bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,ExtraProp> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,ExtraProp> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ExtraProp> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ExtraProp> >::type *extra_prop; // [rsp+40h] [rbp-10h]
  proto::AvatarExtraPropBin *avatar_extra_prop_bin; // [rsp+48h] [rbp-8h]

  bin = proto::AvatarSnapshotBin::mutable_avatar_bin(snapshot_bin);
  __for_range = &this->extra_prop_map_;
  __for_begin._M_node = std::map<unsigned int,ExtraProp>::begin(&this->extra_prop_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExtraProp>::end(&this->extra_prop_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExtraProp>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ExtraProp>(v7);
    extra_prop = (std::tuple_element<1,const std::pair<unsigned int const,ExtraProp> >::type *)std::get<1ul,unsigned int const,ExtraProp>(v7);
    avatar_extra_prop_bin = proto::AvatarBin::add_extra_prop_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)extra_prop & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarExtraPropBin::set_id(avatar_extra_prop_bin, extra_prop->id);
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarExtraPropBin::set_count(avatar_extra_prop_bin, extra_prop->count);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExtraProp>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 69: range 00000000150F0D36-00000000150F11B0
void __cdecl ExtraPropComp::changeExtraProp(
        ExtraPropComp *const this,
        ExtraProp *extra_prop,
        uint32_t prop_count,
        proto_log::ChangeAvatarExtraPropReason reason)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // rbx
  FightPropComp *FightPropComp; // rax
  FightPropComp *v8; // rax
  uint32_t prop_id; // [rsp+28h] [rbp-148h]
  uint32_t old_prop_count; // [rsp+2Ch] [rbp-144h]
  char v13[320]; // [rsp+30h] [rbp-140h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 48 19 fight_prop_guard:71 128 48 15 old_prop_map:74 208 48 15 new_prop_map:82";
  *(_QWORD *)(v4 + 16) = ExtraPropComp::changeExtraProp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -218959118;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)extra_prop & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  prop_id = extra_prop->id;
  FightPropGuard::FightPropGuard((FightPropGuard *const)(v4 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FightPropGuard::addCreature((FightPropGuard *const)(v4 + 48), this->avatar_, 0);
  std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v4 + 128));
  ExtraProp::getProp(extra_prop, (std::map<data::FightPropType,float> *)(v4 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  old_prop_count = extra_prop->count;
  if ( old_prop_count )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    FightPropComp = Creature::getFightPropComp(this->avatar_);
    FightPropComp::reduceProps(FightPropComp, (const FightPropMap *)(v4 + 128), 0);
  }
  std::map<data::FightPropType,float>::map((std::map<data::FightPropType,float> *const)(v4 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&extra_prop->count);
  }
  extra_prop->count = prop_count;
  ExtraProp::getProp(extra_prop, (std::map<data::FightPropType,float> *)(v4 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( extra_prop->count )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = Creature::getFightPropComp(this->avatar_);
    FightPropComp::modifyProps(v8, (const FightPropMap *)(v4 + 208), 0);
  }
  ExtraPropComp::printExtraPropChangeStatLog(this, prop_id, old_prop_count, prop_count, reason);
  std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v4 + 208));
  std::map<data::FightPropType,float>::~map((std::map<data::FightPropType,float> *const)(v4 + 128));
  FightPropGuard::~FightPropGuard((FightPropGuard *const)(v4 + 48));
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 95: range 00000000150F11B2-00000000150F1674
void __cdecl ExtraPropComp::printExtraPropChangeStatLog(
        ExtraPropComp *const this,
        uint32_t prop_id,
        uint32_t old_count,
        uint32_t new_count,
        proto_log::ChangeAvatarExtraPropReason reason)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v10; // rax
  common::milog::MiLogStream *v11; // rcx
  Player *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // r14
  std::string v21; // [rsp+0h] [rbp-110h]
  __int64 reasona; // [rsp+8h] [rbp-108h]
  __int64 old_counta; // [rsp+10h] [rbp-100h]
  ExtraPropComp *thisa; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+60h] [rbp-B0h] BYREF

  *(&v21._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v21._anon_0._M_allocated_capacity) = prop_id;
  *(_DWORD *)v21._anon_0._M_local_buf = old_count;
  HIDWORD(v21._M_string_length) = new_count;
  LODWORD(v21._M_string_length) = reason;
  v5 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 1 10 holder:102 64 16 13 player_ptr:96 96 16 11 log_ptr:103";
  *(_QWORD *)(v5 + 16) = ExtraPropComp::printExtraPropChangeStatLog;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar = this->avatar_;
  baseclass_0 = avatar->baseclass_0;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    baseclass_0 = (_QWORD *)__asan_report_load8();
  v10 = *baseclass_0 + 152LL;
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    v10 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v10)(v5 + 64, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v5 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/extra_prop/extra_prop_comp.cpp",
      "printExtraPropChangeStatLog",
      99);
    v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v27,
            (const char (*)[24])"player is null, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    BasicComp = Player::getBasicComp(v12);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v27, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xE42u, v21);
    std::string::~string(&v27);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarExtraPropChange>();
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarId = Avatar::getAvatarId(thisa->avatar_);
    proto_log::PlayerLogBodyAvatarExtraPropChange::set_avatar_id(v14, AvatarId);
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    proto_log::PlayerLogBodyAvatarExtraPropChange::set_extra_prop_id(v16, HIDWORD(old_counta));
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    proto_log::PlayerLogBodyAvatarExtraPropChange::set_old_extra_prop_count(v17, old_counta);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    proto_log::PlayerLogBodyAvatarExtraPropChange::set_new_extra_prop_count(v18, HIDWORD(reasona));
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarExtraPropChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    proto_log::PlayerLogBodyAvatarExtraPropChange::set_reason(v19, reasona);
    v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarExtraPropChange,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAvatarExtraPropChange> *)(v5 + 96));
    Player::printStatLog(v20, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyAvatarExtraPropChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarExtraPropChange> *const)(v5 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v5 + 64));
  if ( v28 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 114: range 00000000150F1676-00000000150F1BCD
__int64 __fastcall ExtraPropComp::addExtraProp(
        ExtraPropComp *const this,
        uint32_t prop_id,
        uint32_t add_prop_count,
        proto_log::ChangeAvatarExtraPropReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::map<unsigned int,ExtraProp>::mapped_type *v10; // rax
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned int new_prop_count; // [rsp+2Ch] [rbp-C4h]
  const data::AvatarExtraPropExcelConfig *extra_prop_config_ptr; // [rsp+30h] [rbp-C0h]
  ExtraProp *extra_prop; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v29; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-A0h] BYREF
  char v31[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 18 old_prop_count:124 48 4 11 prop_id:113 64 4 18 add_prop_count:113";
  *(_QWORD *)(v4 + 16) = ExtraPropComp::addExtraProp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = prop_id;
  *(_DWORD *)(v4 + 64) = add_prop_count;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  extra_prop_config_ptr = data::AvatarExtraPropExcelConfigMgrBase::findAvatarExtraPropExcelConfig(
                            &v7->design_config.txt_config_mgr.avatar_extra_prop_config_mgr,
                            *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( extra_prop_config_ptr )
  {
    v10 = std::map<unsigned int,ExtraProp>::operator[](
            &this->extra_prop_map_,
            (const std::map<unsigned int,ExtraProp>::key_type *)(v4 + 48));
    extra_prop = v10;
    v11 = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    extra_prop->id = v11;
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = extra_prop->count;
    new_prop_count = extra_prop->count + *(_DWORD *)(v4 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( new_prop_count > extra_prop_config_ptr->max_count )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/extra_prop/extra_prop_comp.cpp",
        "addExtraProp",
        128);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v30,
              (const char (*)[39])"addExtraProp max count limit, prop_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" old_count:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" add_count:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" max_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &extra_prop_config_ptr->max_count);
      common::milog::MiLogStream::~MiLogStream(&v30);
      if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      new_prop_count = extra_prop_config_ptr->max_count;
    }
    ExtraPropComp::changeExtraProp(this, extra_prop, new_prop_count, reason);
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/extra_prop/extra_prop_comp.cpp",
      "addExtraProp",
      133);
    v19 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v30,
            (const char (*)[23])"addExtraProp, prop_id:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
    v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" old_count:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 32));
    v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" new_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &extra_prop->count);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/extra_prop/extra_prop_comp.cpp",
      "addExtraProp",
      118);
    v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v30,
           (const char (*)[47])"findAvatarExtraPropExcelConfig fails, prop_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0xFFFFFFFFLL;
  }
  if ( v31 == (char *)v4 )
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

// Line 139: range 00000000150F1BCE-00000000150F20E8
__int64 __fastcall ExtraPropComp::setExtraProp(
        ExtraPropComp *const this,
        uint32_t prop_id,
        uint32_t prop_count,
        proto_log::ChangeAvatarExtraPropReason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::map<unsigned int,ExtraProp>::mapped_type *v10; // rax
  uint32_t v11; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  const data::AvatarExtraPropExcelConfig *extra_prop_config_ptr; // [rsp+20h] [rbp-C0h]
  ExtraProp *extra_prop; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+60h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 18 old_prop_count:148 48 4 11 prop_id:138 64 4 14 prop_count:138";
  *(_QWORD *)(v4 + 16) = ExtraPropComp::setExtraProp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = prop_id;
  *(_DWORD *)(v4 + 64) = prop_count;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  extra_prop_config_ptr = data::AvatarExtraPropExcelConfigMgrBase::findAvatarExtraPropExcelConfig(
                            &v7->design_config.txt_config_mgr.avatar_extra_prop_config_mgr,
                            *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( extra_prop_config_ptr )
  {
    v10 = std::map<unsigned int,ExtraProp>::operator[](
            &this->extra_prop_map_,
            (const std::map<unsigned int,ExtraProp>::key_type *)(v4 + 48));
    extra_prop = v10;
    v11 = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v10);
    }
    extra_prop->id = v11;
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = extra_prop->count;
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( extra_prop_config_ptr->max_count < *(_DWORD *)(v4 + 64) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/extra_prop/extra_prop_comp.cpp",
        "setExtraProp",
        151);
      v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v27,
              (const char (*)[39])"setExtraProp max count limit, prop_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" set:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 64));
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" max_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &extra_prop_config_ptr->max_count);
      common::milog::MiLogStream::~MiLogStream(&v27);
      if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = extra_prop_config_ptr->max_count;
    }
    ExtraPropComp::changeExtraProp(this, extra_prop, *(_DWORD *)(v4 + 64), reason);
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/extra_prop/extra_prop_comp.cpp",
      "setExtraProp",
      156);
    v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            &v27,
            (const char (*)[23])"setExtraProp, prop_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" old_count:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 32));
    v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" new_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &extra_prop->count);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/extra_prop/extra_prop_comp.cpp",
      "setExtraProp",
      143);
    v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v27,
           (const char (*)[47])"findAvatarExtraPropExcelConfig fails, prop_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  if ( v28 == (char *)v4 )
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

// Line 162: range 00000000150F2178-00000000150F2242
void __cdecl ExtraPropComp::clearExtraPropByGM(ExtraPropComp *const this)
{
  std::function<ForeachPolicy(ExtraProp&)> func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ExtraProp &)>::function<ExtraPropComp::clearExtraPropByGM(void)::{lambda(ExtraProp &)#1},void,void>(
    &func,
    (ExtraPropComp::clearExtraPropByGM::<lambda(ExtraProp&)>)this);
  ExtraPropComp::foreachExtraProp(this, &func);
  std::function<ForeachPolicy ()(ExtraProp &)>::~function(&func);
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&func,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/extra_prop/extra_prop_comp.cpp",
    "clearExtraPropByGM",
    168);
  common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
    (common::milog::MiLogStream *const)&func,
    (const char (*)[21])"clearExtraProp by gm");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&func);
};

// Line 163: range 00000000150F20EA-00000000150F2176
ForeachPolicy __cdecl ExtraPropComp::clearExtraPropByGM(void)::{lambda(ExtraProp &)#1}::operator()(
        const ExtraPropComp::clearExtraPropByGM::<lambda(ExtraProp&)> *const __closure,
        ExtraProp *extra_prop)
{
  ExtraPropComp *this; // rdi

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)extra_prop & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) )
  {
    this = (ExtraPropComp *)extra_prop;
    __asan_report_load4();
  }
  ExtraPropComp::setExtraProp(this, extra_prop->id, 0, CHANGE_AVATAR_EXTRA_PROP_REASON_GM);
  return 0;
};

// Line 174: range 00000000150F2244-00000000150F24C4
int32_t __cdecl ExtraPropComp::fromBin(ExtraPropComp *const this, const proto::AvatarBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  ExtraProp *v5; // rax
  unsigned int *v6; // rcx
  ExtraProp *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,ExtraProp> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::AvatarExtraPropBin>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::AvatarExtraPropBin>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::AvatarExtraPropBin> *__for_range; // [rsp+20h] [rbp-C0h]
  const proto::AvatarExtraPropBin *avatar_extra_prop_bin; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 extra_prop_id:177 64 8 14 extra_prop:178";
  *(_QWORD *)(v2 + 16) = ExtraPropComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  __for_range = proto::AvatarBin::extra_prop_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::AvatarExtraPropBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::AvatarExtraPropBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::AvatarExtraPropBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    avatar_extra_prop_bin = google::protobuf::internal::RepeatedPtrIterator<proto::AvatarExtraPropBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::AvatarExtraPropBin::id(avatar_extra_prop_bin);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 68) = proto::AvatarExtraPropBin::count(avatar_extra_prop_bin);
    v5 = std::move<ExtraProp &>((ExtraProp *)(v2 + 64));
    v8 = std::map<unsigned int,ExtraProp>::emplace<unsigned int &,ExtraProp>(
           &this->extra_prop_map_,
           (unsigned int *)(v2 + 48),
           v5,
           v6,
           v7);
    if ( !v8.second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/extra_prop/extra_prop_comp.cpp",
        "fromBin",
        183);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v15,
             (const char (*)[26])"Dumplicate extra_prop_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = -1;
      goto LABEL_10;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::AvatarExtraPropBin const>::operator++(&__for_begin);
  }
  result = 0;
LABEL_10:
  if ( v16 == (char *)v2 )
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

// Line 192: range 00000000150F24C6-00000000150F260F
int32_t __cdecl ExtraPropComp::toBin(const ExtraPropComp *const this, proto::AvatarBin *bin)
{
  std::map<unsigned int,ExtraProp>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,ExtraProp>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,ExtraProp> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,ExtraProp> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ExtraProp> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ExtraProp> >::type *extra_prop; // [rsp+40h] [rbp-10h]
  proto::AvatarExtraPropBin *avatar_extra_prop_bin; // [rsp+48h] [rbp-8h]

  __for_range = &this->extra_prop_map_;
  __for_begin._M_node = std::map<unsigned int,ExtraProp>::begin(&this->extra_prop_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExtraProp>::end(&this->extra_prop_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExtraProp>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ExtraProp>(v6);
    extra_prop = (std::tuple_element<1,const std::pair<unsigned int const,ExtraProp> >::type *)std::get<1ul,unsigned int const,ExtraProp>(v6);
    avatar_extra_prop_bin = proto::AvatarBin::add_extra_prop_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)extra_prop & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarExtraPropBin::set_id(avatar_extra_prop_bin, extra_prop->id);
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AvatarExtraPropBin::set_count(avatar_extra_prop_bin, extra_prop->count);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExtraProp>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 204: range 00000000150F2AA8-00000000150F2B10
int32_t __cdecl ExtraPropComp::init(ExtraPropComp *const this)
{
  std::function<ForeachPolicy(ExtraProp&)> func; // [rsp+10h] [rbp-30h] BYREF

  std::function<ForeachPolicy ()(ExtraProp &)>::function<ExtraPropComp::init(void)::{lambda(ExtraProp &)#1},void,void>(
    &func,
    (ExtraPropComp::init::<lambda(ExtraProp&)>)this);
  ExtraPropComp::foreachExtraProp(this, &func);
  std::function<ForeachPolicy ()(ExtraProp &)>::~function(&func);
  return 0;
};

// Line 206: range 00000000150F2610-00000000150F2AA7
ForeachPolicy __cdecl ExtraPropComp::init(void)::{lambda(ExtraProp &)#1}::operator()(
        const ExtraPropComp::init::<lambda(ExtraProp&)> *const __closure,
        ExtraProp *extra_prop)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  ForeachPolicy result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t max_count; // r14d
  std::map<unsigned int,ExtraProp>::mapped_type *v13; // rdx
  uint32_t *p_count; // rax
  ExtraPropComp *this; // rdi
  const data::AvatarExtraPropExcelConfig *extra_prop_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 prop_id:208 64 4 14 prop_count:209";
  *(_QWORD *)(v2 + 16) = ExtraPropComp::init(void)::{lambda(ExtraProp &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)extra_prop & 7) + 3) >= *(_BYTE *)(((unsigned __int64)extra_prop >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = extra_prop->id;
  if ( *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)extra_prop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&extra_prop->count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 64) = extra_prop->count;
  extra_prop_config_ptr = ExtraProp::getExtraPropConfig(extra_prop);
  if ( extra_prop_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( extra_prop_config_ptr->max_count < *(_DWORD *)(v2 + 64) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/extra_prop/extra_prop_comp.cpp",
        "operator()",
        218);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v17,
             (const char (*)[37])"init check max count limit, prop_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" now:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" max_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &extra_prop_config_ptr->max_count);
      common::milog::MiLogStream::~MiLogStream(&v17);
      if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      max_count = extra_prop_config_ptr->max_count;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = std::map<unsigned int,ExtraProp>::operator[](
              &__closure->__this->extra_prop_map_,
              (const std::map<unsigned int,ExtraProp>::key_type *)(v2 + 48));
      p_count = &v13->count;
      if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_count);
      }
      v13->count = max_count;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      this = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&extra_prop_config_ptr->max_count >> 3) + 0x7FFF8000) <= 3 )
      {
        this = (ExtraPropComp *)&extra_prop_config_ptr->max_count;
        __asan_report_load4();
      }
      ExtraPropComp::printExtraPropChangeStatLog(
        this,
        *(_DWORD *)(v2 + 48),
        *(_DWORD *)(v2 + 64),
        extra_prop_config_ptr->max_count,
        CHANGE_AVATAR_EXTRA_PROP_REASON_NONE);
    }
    result = FOREACH_CONTINUE;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/extra_prop/extra_prop_comp.cpp",
      "operator()",
      213);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v17,
           (const char (*)[47])"findAvatarExtraPropExcelConfig fails, prop_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = FOREACH_CONTINUE;
  }
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
  return result;
};

// Line 229: range 00000000150F2B60-00000000150F2BE8
std::map<data::FightPropType,float> *__cdecl ExtraPropComp::getExtraPropCompProp(
        std::map<data::FightPropType,float> *retstr,
        ExtraPropComp *const this)
{
  std::function<ForeachPolicy(ExtraProp&)> func; // [rsp+10h] [rbp-30h] BYREF

  std::map<data::FightPropType,float>::map(retstr);
  std::function<ForeachPolicy ()(ExtraProp &)>::function<ExtraPropComp::getExtraPropCompProp(void)::{lambda(ExtraProp &)#1},void,void>(
    &func,
    (ExtraPropComp::getExtraPropCompProp::<lambda(ExtraProp&)>)retstr);
  ExtraPropComp::foreachExtraProp(this, &func);
  std::function<ForeachPolicy ()(ExtraProp &)>::~function(&func);
  return retstr;
};

// Line 231: range 00000000150F2B12-00000000150F2B5F
ForeachPolicy __cdecl ExtraPropComp::getExtraPropCompProp(void)::{lambda(ExtraProp &)#1}::operator()(
        const ExtraPropComp::getExtraPropCompProp::<lambda(ExtraProp&)> *const __closure,
        ExtraProp *extra_prop)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ExtraProp::getProp(extra_prop, __closure->__prop_map);
  return 0;
};

// Line 241: range 00000000150F2BEA-00000000150F2E8C
void __cdecl ExtraPropComp::foreachExtraProp(
        ExtraPropComp *const this,
        const std::function<ForeachPolicy(ExtraProp&)> *func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  ExtraProp *p_second; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExtraProp> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  char v12[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 extra_prop_id:243 64 8 8 iter:245 96 24 21 extra_prop_id_vec:242";
  *(_QWORD *)(v2 + 16) = ExtraPropComp::foreachExtraProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,ExtraProp>>(
    (std::vector<unsigned int> *)(v2 + 96),
    &this->extra_prop_map_);
  __for_range = (std::vector<unsigned int> *)(v2 + 96);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 96))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    *(std::map<unsigned int,ExtraProp>::iterator *)(v2 + 64) = std::map<unsigned int,ExtraProp>::find(
                                                                 &this->extra_prop_map_,
                                                                 (const std::map<unsigned int,ExtraProp>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,ExtraProp>::end(&this->extra_prop_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExtraProp> >::_Self *)(v2 + 64),
           &__y) )
    {
      p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,ExtraProp>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExtraProp> > *const)(v2 + 64))->second;
      if ( std::function<ForeachPolicy ()(ExtraProp &)>::operator()(func, p_second) )
        break;
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  if ( v12 == (char *)v2 )
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
