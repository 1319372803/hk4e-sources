// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/ugc/player_ugc_comp.cpp

// Line 42: range 000000001797DAB6-000000001797DBC1
int32_t __cdecl PlayerUgcComp::init(PlayerUgcComp *const this)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BaseUgc> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseUgc> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseUgc> > >::type *ugc_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->ugc_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::begin(&this->ugc_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::end(&this->ugc_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseUgc>>(__in);
    ugc_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseUgc>>(__in);
    if ( std::operator!=<BaseUgc>(0LL, ugc_ptr) )
    {
      v1 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)ugc_ptr);
      if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
        v1 = __asan_report_load8(v1);
      v2 = *(_QWORD *)v1 + 40LL;
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v1 = __asan_report_load8(*(_QWORD *)v1 + 40LL);
      (*(void (__fastcall **)(unsigned __int64))v2)(v1);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 54: range 000000001797DBC2-000000001797E191
int32_t __cdecl PlayerUgcComp::fromBin(PlayerUgcComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t v6; // ecx
  char v7; // dl
  bool v8; // dl
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  bool v12; // r15
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  const proto::PlayerUgcCompBin *proto_comp; // [rsp+20h] [rbp-100h]
  const google::protobuf::Map<unsigned int,proto::UgcBin> *__for_range; // [rsp+30h] [rbp-F0h]
  google::protobuf::Map<unsigned int,proto::UgcBin>::const_reference p_ugc_id; // [rsp+38h] [rbp-E8h]
  PlayerUgcComp v23; // [rsp+40h] [rbp-E0h] BYREF
  char v24[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 10 ugc_ptr:62";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::fromBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::ugc_bin(player_data_bin);
  v6 = proto::PlayerUgcCompBin::ban_publish_expire_time(proto_comp);
  v7 = *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3) + 0x7FFF8000);
  LOBYTE(player_data_bin) = v7 != 0;
  v8 = v7 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v7;
  if ( v8 )
    __asan_report_store4(&this->ban_publish_expire_time_, player_data_bin, v8);
  this->ban_publish_expire_time_ = v6;
  __for_range = proto::PlayerUgcCompBin::ugc_bin_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::UgcBin>::begin(
    (google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator *)&v23._M_weak_this._M_refcount,
    __for_range);
  google::protobuf::Map<unsigned int,proto::UgcBin>::end(
    (google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator *)&v23.ugc_map_._M_h._M_bucket_count,
    __for_range);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator *)&v23._M_weak_this._M_refcount,
            (const google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator *)&v23.ugc_map_._M_h._M_bucket_count) )
  {
    p_ugc_id = google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator *const)&v23._M_weak_this._M_refcount);
    if ( *(_BYTE *)(((unsigned __int64)p_ugc_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_ugc_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_ugc_id);
    }
    PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (uint32_t)this);
    if ( !std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      goto LABEL_17;
    if ( *(_BYTE *)(((unsigned __int64)p_ugc_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_ugc_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(p_ugc_id);
    }
    PlayerUgcComp::createUgc(&v23, (uint32_t)this);
    std::shared_ptr<BaseUgc>::operator=((std::shared_ptr<BaseUgc> *const)(v3 + 32), (std::shared_ptr<BaseUgc> *)&v23);
    std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)&v23);
    if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "fromBin",
        68);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
             (common::milog::MiLogStream *const)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize,
             (const char (*)[17])"findOrCreateUgc ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &p_ugc_id->first);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize);
      v2 = -1;
      v11 = 0;
      goto LABEL_24;
    }
    std::shared_ptr<BaseUgc>::shared_ptr(
      (std::shared_ptr<BaseUgc> *const)&v23,
      (const std::shared_ptr<BaseUgc> *)(v3 + 32));
    v12 = PlayerUgcComp::insertUgcPtr(this, (BaseUgcPtr *)&v23) != 0;
    std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)&v23);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "fromBin",
        73);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
              (common::milog::MiLogStream *const)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize,
              (const char (*)[14])"insertUgcPtr ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &p_ugc_id->first);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize);
      v2 = -1;
      v11 = 0;
    }
    else
    {
LABEL_17:
      v15 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(v15);
      v16 = *(_QWORD *)v15 + 32LL;
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(*(_QWORD *)v15 + 32LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::UgcBin *))v16)(v15, &p_ugc_id->second) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ugc/player_ugc_comp.cpp",
          "fromBin",
          79);
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                (common::milog::MiLogStream *const)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize,
                (const char (*)[13])off_26255F00);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &p_ugc_id->first);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23.ugc_map_._M_h._M_rehash_policy._M_next_resize);
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
    }
LABEL_24:
    std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
    if ( v11 != 1 )
      goto LABEL_27;
    google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::UgcBin>::const_iterator *const)&v23._M_weak_this._M_refcount);
  }
  v2 = 0;
LABEL_27:
  result = v2;
  if ( v24 == (char *)v3 )
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

// Line 87: range 000000001797E192-000000001797E44C
int32_t __cdecl PlayerUgcComp::toBin(PlayerUgcComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  char v4; // al
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::PlayerUgcCompBin *proto_comp; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::UgcBin> *ugc_bin_map; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>> *__for_range; // [rsp+38h] [rbp-58h]
  std::pair<unsigned int const,std::shared_ptr<BaseUgc> > *__in; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseUgc> > >::type *ugc_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseUgc> > >::type *ugc_ptr; // [rsp+50h] [rbp-40h]
  proto::UgcBin *ugc_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_ugc_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_publish_expire_time_);
  }
  proto::PlayerUgcCompBin::set_ban_publish_expire_time(proto_comp, this->ban_publish_expire_time_);
  ugc_bin_map = proto::PlayerUgcCompBin::mutable_ugc_bin_map(proto_comp);
  __for_range = &this->ugc_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::begin(&this->ugc_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::end(&this->ugc_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false,false>::operator*(&__for_begin);
    ugc_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseUgc>>(__in);
    ugc_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseUgc>>(__in);
    if ( !std::operator!=<BaseUgc>(0LL, ugc_ptr) )
      goto LABEL_12;
    v2 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)ugc_ptr);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(v2);
    v3 = *(_QWORD *)v2 + 72LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8(*(_QWORD *)v2 + 72LL);
    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v3)(v2) )
      v4 = 1;
    else
LABEL_12:
      v4 = 0;
    if ( v4 )
    {
      ugc_bin = google::protobuf::Map<unsigned int,proto::UgcBin>::operator[](ugc_bin_map, ugc_id);
      v5 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)ugc_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 24LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 24LL);
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::UgcBin *))v6)(v5, ugc_bin) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/ugc/player_ugc_comp.cpp",
          "toBin",
          100);
        v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v18,
               (const char (*)[31])"ugc_ptr to bin error, ugc_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, ugc_id);
        common::milog::MiLogStream::~MiLogStream(&v18);
        return -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 109: range 000000001797E44E-000000001797E461
int32_t __cdecl PlayerUgcComp::onLogin(PlayerUgcComp *const this, bool is_new_player)
{
  return 0;
};

// Line 114: range 000000001797E462-000000001797E470
int32_t __cdecl PlayerUgcComp::onLogout(PlayerUgcComp *const this)
{
  return 0;
};

// Line 119: range 000000001797E472-000000001797E79B
int32_t __cdecl PlayerUgcComp::notifyAllData(PlayerUgcComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  bool isUgcPublishBan; // al
  std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isUgcClosed; // al
  std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isUgcPublishClosed; // al
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<const google::protobuf::Message> v15; // [rsp+10h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:120";
  *(_QWORD *)(v1 + 16) = PlayerUgcComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::UgcNotify>();
  if ( std::operator==<proto::UgcNotify>(0LL, (const std::shared_ptr<proto::UgcNotify> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ugc/player_ugc_comp.cpp",
      "notifyAllData",
      123);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v16, (const char (*)[22])"notify_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v4 = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    isUgcPublishBan = PlayerUgcComp::isUgcPublishBan(this);
    proto::UgcNotify::set_is_ugc_publish_ban(v5, isUgcPublishBan);
    v7 = std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v8->feature_switch_mgr);
    proto::UgcNotify::set_is_ugc_feature_closed(v7, isUgcClosed);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v15);
    v10 = std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::UgcNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    isUgcPublishClosed = FeatureSwitchMgr::isUgcPublishClosed(&v11->feature_switch_mgr);
    proto::UgcNotify::set_is_ugc_publish_feature_closed(v10, isUgcPublishClosed);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::UgcNotify>((const std::shared_ptr<proto::UgcNotify> *)&v15);
    Player::sendMessage(player, &v15, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v15);
    v4 = 0;
  }
  std::shared_ptr<proto::UgcNotify>::~shared_ptr((std::shared_ptr<proto::UgcNotify> *const)(v1 + 32));
  result = v4;
  if ( v17 == (char *)v1 )
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

// Line 134: range 000000001797E79C-000000001797E7A6
void __cdecl PlayerUgcComp::onDailyRefresh(PlayerUgcComp *const this)
{
  ;
};

// Line 138: range 000000001797E7A8-000000001797E930
PlayerUgcComp *__fastcall PlayerUgcComp::findBaseUgc(PlayerUgcComp *const this, __int64 ugc_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseUgc> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 ugc_id:137 64 8 8 iter:139";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::findBaseUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::find(
                                                                                        (std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>> *const)(ugc_id + 40),
                                                                                        (const std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::end((std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>> *const)(ugc_id + 40))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<BaseUgc> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc> >,false,false> *const)(v3 + 64));
    std::shared_ptr<BaseUgc>::shared_ptr((std::shared_ptr<BaseUgc> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<BaseUgc>::shared_ptr((std::shared_ptr<BaseUgc> *const)this, 0LL);
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
  return this;
};

// Line 148: range 000000001797E932-000000001797EB54
PlayerUgcComp *__fastcall PlayerUgcComp::createUgc(PlayerUgcComp *const this, __int64 ugc_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::shared_ptr<MusicGameUgc> __r; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 ugc_id:147";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::createUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, ugc_id);
  this->_vptr_PlayerCompBase = 0LL;
  this->_M_weak_this._M_ptr = 0LL;
  if ( *(_DWORD *)(v3 + 32) == 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)(ugc_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(ugc_id + 24);
    common::tools::perf::make_shared<MusicGameUgc,Player &,unsigned int &>(
      (Player *)&__r,
      *(unsigned int **)(ugc_id + 24),
      (Player *)(v3 + 32),
      *(unsigned int **)(ugc_id + 24));
    std::shared_ptr<BaseUgc>::operator=<MusicGameUgc>((std::shared_ptr<BaseUgc> *const)this, &__r);
    std::shared_ptr<MusicGameUgc>::~shared_ptr(&__r);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ugc/player_ugc_comp.cpp",
      "createUgc",
      156);
    v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(&v10, (const char (*)[29])byte_262560E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 163: range 000000001797EB56-000000001797EDBE
int32_t __cdecl PlayerUgcComp::insertUgcPtr(PlayerUgcComp *const this, BaseUgcPtr *p_ugc_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::shared_ptr<BaseUgc> *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-80h] BYREF
  char v13[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 ugc_id:166";
  *(_QWORD *)(v2 + 16) = PlayerUgcComp::insertUgcPtr;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::operator==<BaseUgc>(0LL, p_ugc_ptr) )
  {
    result = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_ugc_ptr);
    *(_DWORD *)(v2 + 32) = BaseUgc::getUgcId(v6);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>,unsigned int>(
           &this->ugc_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "insertUgcPtr",
        169);
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v12, (const char (*)[9])"ugc_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])off_262561C0);
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = -1;
    }
    else
    {
      v9 = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::operator[](
             &this->ugc_map_,
             (const std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::key_type *)(v2 + 32));
      std::shared_ptr<BaseUgc>::operator=(v9, p_ugc_ptr);
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "insertUgcPtr",
        173);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v12, (const char (*)[9])"ugc_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])off_26256200);
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 0;
    }
  }
  if ( v13 == (char *)v2 )
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

// Line 178: range 000000001797EDC0-000000001797F31E
int32_t __cdecl PlayerUgcComp::requestUgc(PlayerUgcComp *const this, proto::ServerGetUgcReq *server_req)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t last_request_time; // ecx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r12
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint64_t v16; // rdx
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  uint32_t now; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-90h] BYREF
  char v20[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 ugc_guid:180";
  *(_QWORD *)(v2 + 16) = PlayerUgcComp::requestUgc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  now = common::tools::TimeUtils::getNow();
  *(_QWORD *)(v2 + 32) = proto::ServerGetUgcReq::ugc_guid(server_req);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_ugc_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_request_ugc_guid_);
  if ( this->last_request_ugc_guid_ != *(_QWORD *)(v2 + 32) )
    goto LABEL_33;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_request_time_);
  }
  last_request_time = this->last_request_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->MAX_REQUEST_WAIT_TIME >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->MAX_REQUEST_WAIT_TIME);
  }
  if ( now <= last_request_time + this->MAX_REQUEST_WAIT_TIME )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/player_ugc_comp.cpp",
      "requestUgc",
      184);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v19,
           (const char (*)[24])"is requesting ugc_guid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0;
  }
  else
  {
LABEL_33:
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    if ( sendProtoToActivityService<proto::ServerGetUgcReq>(this->player_, server_req) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "requestUgc",
        191);
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v19,
              (const char (*)[18])"request ugc_guid:");
      v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v10,
              (const unsigned __int64 *)(v2 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "requestUgc",
        195);
      v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v19,
              (const char (*)[20])"requested ugc_guid:");
      v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v13,
              (const unsigned __int64 *)(v2 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v16 = *(_QWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_request_ugc_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_request_ugc_guid_, &val);
      this->last_request_ugc_guid_ = v16;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_request_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_request_time_, &val, (_BYTE)this + 104);
      }
      this->last_request_time_ = now;
      result = 0;
    }
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
  return result;
};

// Line 205: range 000000001797F320-000000001797F4DA
void __fastcall PlayerUgcComp::clearUgc(PlayerUgcComp *const this, uint32_t ugc_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 ugc_id:204 64 16 11 ugc_ptr:206";
  *(_QWORD *)(v2 + 16) = PlayerUgcComp::clearUgc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = ugc_id;
  PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v2 + 64)) )
  {
    v5 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(v5);
    v6 = *(_QWORD *)v5 + 80LL;
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8(*(_QWORD *)v5 + 80LL);
    (*(void (__fastcall **)(unsigned __int64))v6)(v5);
  }
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::erase(
    &this->ugc_map_,
    (const std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::key_type *)(v2 + 48));
  std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v2 + 64));
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

// Line 215: range 000000001797F4DC-000000001797F7D2
__int64 __fastcall PlayerUgcComp::openUgc(PlayerUgcComp *const this, uint32_t ugc_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::shared_ptr<BaseUgc> p_ugc_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 ugc_id:214 64 16 11 ugc_ptr:219";
  *(_QWORD *)(v2 + 16) = PlayerUgcComp::openUgc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = ugc_id;
  PlayerUgcComp::clearUgc(this, *(_DWORD *)(v2 + 48));
  PlayerUgcComp::createUgc((PlayerUgcComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/ugc/player_ugc_comp.cpp",
      "openUgc",
      222);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v13, (const char (*)[11])"createUgc ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v7 = -1;
  }
  else
  {
    std::shared_ptr<BaseUgc>::shared_ptr(&p_ugc_ptr, (const std::shared_ptr<BaseUgc> *)(v2 + 64));
    v8 = PlayerUgcComp::insertUgcPtr(this, &p_ugc_ptr) != 0;
    std::shared_ptr<BaseUgc>::~shared_ptr(&p_ugc_ptr);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "openUgc",
        227);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v13, (const char (*)[14])"insertUgcPtr ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v7 = -1;
    }
    else
    {
      v7 = 0;
    }
  }
  std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v2 + 64));
  result = v7;
  if ( v14 == (char *)v2 )
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

// Line 234: range 000000001797F7D4-000000001797F7FA
int32_t __cdecl PlayerUgcComp::closeUgc(PlayerUgcComp *const this, uint32_t ugc_id)
{
  PlayerUgcComp::clearUgc(this, ugc_id);
  return 0;
};

// Line 240: range 000000001797F7FC-000000001797FB62
void __cdecl PlayerUgcComp::getUgc(PlayerUgcComp *const this, const proto::GetUgcReq *req, proto::GetUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  google::protobuf::uint64 v7; // rdx
  GameserverService *v8; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char v19[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:243";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::getUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::GetUgcReq::ugc_type(req);
  proto::GetUgcRsp::set_ugc_type(rsp_0, v6);
  v7 = proto::GetUgcReq::ugc_guid(req);
  proto::GetUgcRsp::set_ugc_guid(rsp_0, v7);
  v8 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v9->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( isUgcClosed )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v11)(this, v8);
    proto::GetUgcRsp::set_retcode(rsp_0, 11154);
  }
  else
  {
    v12 = proto::GetUgcReq::ugc_type(req);
    PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v12);
    if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
    {
      proto::GetUgcRsp::set_retcode(rsp_0, 11158);
    }
    else
    {
      v13 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13);
      v14 = *(_QWORD *)v13 + 72LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(*(_QWORD *)v13 + 72LL);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v14)(v13) != 1 )
      {
        proto::GetUgcRsp::set_retcode(rsp_0, 11156);
      }
      else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        v15 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v15);
        v16 = *(_QWORD *)v15 + 88LL;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(*(_QWORD *)v15 + 88LL);
        (*(void (__fastcall **)(unsigned __int64, const proto::GetUgcReq *, proto::GetUgcRsp *))v16)(v15, req, rsp_0);
      }
    }
    std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 251: range 000000001797FB64-00000000179802DB
void __cdecl PlayerUgcComp::serverGetUgc(
        PlayerUgcComp *const this,
        const proto::ServerGetUgcRsp *server_rsp,
        proto::GetUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  proto::UgcType v6; // edx
  proto::RecordUsage v7; // edx
  google::protobuf::uint64 v8; // rsi
  common::milog::MiLogStream *v9; // rbx
  google::protobuf::int32 v10; // edx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  GameserverService *v19; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 12 ugc_guid:254 64 16 11 ugc_ptr:281";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::serverGetUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  v6 = proto::ServerGetUgcRsp::ugc_type(server_rsp);
  proto::GetUgcRsp::set_ugc_type(rsp_0, v6);
  v7 = proto::ServerGetUgcRsp::ugc_record_usage(server_rsp);
  proto::GetUgcRsp::set_ugc_record_usage(rsp_0, v7);
  *(_QWORD *)(v3 + 32) = proto::ServerGetUgcRsp::ugc_guid(server_rsp);
  v8 = *(_QWORD *)(v3 + 32);
  proto::GetUgcRsp::set_ugc_guid(rsp_0, v8);
  if ( proto::ServerGetUgcRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/player_ugc_comp.cpp",
      "serverGetUgc",
      259);
    v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v31,
           (const char (*)[33])"internal server get ugc retcode:");
    val = proto::ServerGetUgcRsp::retcode(server_rsp);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v31);
    v10 = proto::ServerGetUgcRsp::retcode(server_rsp);
    proto::GetUgcRsp::set_retcode(rsp_0, v10);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_request_ugc_guid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->last_request_ugc_guid_);
    if ( this->last_request_ugc_guid_ == *(_QWORD *)(v3 + 32) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_request_ugc_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_request_ugc_guid_, v8);
      this->last_request_ugc_guid_ = 0LL;
      if ( !proto::ServerGetUgcRsp::is_exist(server_rsp) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/ugc/player_ugc_comp.cpp",
          "serverGetUgc",
          277);
        v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v31, (const char (*)[21])off_26256520);
        v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v16,
                (const unsigned __int64 *)(v3 + 32));
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" data, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)&val);
        common::milog::MiLogStream::~MiLogStream(&v31);
        proto::GetUgcRsp::set_retcode(rsp_0, 11152);
      }
      else
      {
        v19 = ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 64));
        v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v20->feature_switch_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
        if ( isUgcClosed )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v22 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
          (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v22)(this, v19);
          proto::GetUgcRsp::set_retcode(rsp_0, 11154);
        }
        else
        {
          v23 = proto::ServerGetUgcRsp::ugc_type(server_rsp);
          PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 64), (__int64)this, v23);
          if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 64)) )
          {
            proto::GetUgcRsp::set_retcode(rsp_0, 11158);
          }
          else
          {
            v24 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
              v24 = __asan_report_load8(v24);
            v25 = *(_QWORD *)v24 + 72LL;
            if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
              v24 = __asan_report_load8(*(_QWORD *)v24 + 72LL);
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v25)(v24) != 1 )
            {
              proto::GetUgcRsp::set_retcode(rsp_0, 11156);
            }
            else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 64)) )
            {
              v26 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
                v26 = __asan_report_load8(v26);
              v27 = *(_QWORD *)v26 + 96LL;
              if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
                v26 = __asan_report_load8(*(_QWORD *)v26 + 96LL);
              (*(void (__fastcall **)(unsigned __int64, const proto::ServerGetUgcRsp *, proto::GetUgcRsp *))v27)(
                v26,
                server_rsp,
                rsp_0);
            }
          }
          std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 64));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ugc/player_ugc_comp.cpp",
        "serverGetUgc",
        267);
      v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              &v31,
              (const char (*)[21])"server rsp ugc guid:");
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v11,
              (const unsigned __int64 *)(v3 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v12,
              (const char (*)[25])", but last request guid:");
      v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &this->last_request_ugc_guid_);
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)&val);
      common::milog::MiLogStream::~MiLogStream(&v31);
      proto::GetUgcRsp::set_retcode(rsp_0, 11151);
    }
  }
  if ( v32 == (char *)v3 )
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

// Line 289: range 00000000179802DC-0000000017980642
void __cdecl PlayerUgcComp::getUgcBriefInfo(
        PlayerUgcComp *const this,
        const proto::GetUgcBriefInfoReq *req,
        proto::GetUgcBriefInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  google::protobuf::uint64 v7; // rdx
  GameserverService *v8; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char v19[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:292";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::getUgcBriefInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::GetUgcBriefInfoReq::ugc_type(req);
  proto::GetUgcBriefInfoRsp::set_ugc_type(rsp_0, v6);
  v7 = proto::GetUgcBriefInfoReq::ugc_guid(req);
  proto::GetUgcBriefInfoRsp::set_ugc_guid(rsp_0, v7);
  v8 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v9->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( isUgcClosed )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v11)(this, v8);
    proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 11154);
  }
  else
  {
    v12 = proto::GetUgcBriefInfoReq::ugc_type(req);
    PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v12);
    if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
    {
      proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 11158);
    }
    else
    {
      v13 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(v13);
      v14 = *(_QWORD *)v13 + 72LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(*(_QWORD *)v13 + 72LL);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v14)(v13) != 1 )
      {
        proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 11156);
      }
      else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        v15 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v15);
        v16 = *(_QWORD *)v15 + 104LL;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(*(_QWORD *)v15 + 104LL);
        (*(void (__fastcall **)(unsigned __int64, const proto::GetUgcBriefInfoReq *, proto::GetUgcBriefInfoRsp *))v16)(
          v15,
          req,
          rsp_0);
      }
    }
    std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 300: range 0000000017980644-0000000017980B5B
void __cdecl PlayerUgcComp::serverGetUgcBrief(
        PlayerUgcComp *const this,
        const proto::ServerGetUgcBriefRsp *server_rsp,
        proto::GetUgcBriefInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  proto::UgcType v6; // edx
  const proto::UgcBriefRedisData *v7; // rax
  google::protobuf::int32 v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  GameserverService *v12; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 12 ugc_guid:302 64 16 11 ugc_ptr:319";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::serverGetUgcBrief;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  v6 = proto::ServerGetUgcBriefRsp::ugc_type(server_rsp);
  proto::GetUgcBriefInfoRsp::set_ugc_type(rsp_0, v6);
  v7 = proto::ServerGetUgcBriefRsp::ugc_brief_redis_data(server_rsp);
  *(_QWORD *)(v3 + 32) = proto::UgcBriefRedisData::ugc_guid(v7);
  proto::GetUgcBriefInfoRsp::set_ugc_guid(rsp_0, *(_QWORD *)(v3 + 32));
  if ( proto::ServerGetUgcBriefRsp::retcode(server_rsp) )
  {
    v8 = proto::ServerGetUgcBriefRsp::retcode(server_rsp);
    proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, v8);
  }
  else if ( !proto::ServerGetUgcBriefRsp::is_exist(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/player_ugc_comp.cpp",
      "serverGetUgcBrief",
      314);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v24, (const char (*)[27])off_26256600);
    v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v9,
            (const unsigned __int64 *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" data, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 11153);
  }
  else
  {
    v12 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v13->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    if ( isUgcClosed )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v15 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v15)(this, v12);
      proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 11154);
    }
    else
    {
      v16 = proto::ServerGetUgcBriefRsp::ugc_type(server_rsp);
      PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 64), (__int64)this, v16);
      if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 64)) )
      {
        proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 11158);
      }
      else
      {
        v17 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(v17);
        v18 = *(_QWORD *)v17 + 72LL;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(*(_QWORD *)v17 + 72LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v18)(v17) != 1 )
        {
          proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 11156);
        }
        else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 64)) )
        {
          v19 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(v19);
          v20 = *(_QWORD *)v19 + 112LL;
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(*(_QWORD *)v19 + 112LL);
          (*(void (__fastcall **)(unsigned __int64, const proto::ServerGetUgcBriefRsp *, proto::GetUgcBriefInfoRsp *))v20)(
            v19,
            server_rsp,
            rsp_0);
        }
      }
      std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 64));
    }
  }
  if ( v25 == (char *)v3 )
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

// Line 327: range 0000000017980B5C-0000000017980EA1
void __cdecl PlayerUgcComp::saveUgc(PlayerUgcComp *const this, const proto::SaveUgcReq *req, proto::SaveUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  GameserverService *v7; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char v18[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:329";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::saveUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::SaveUgcReq::ugc_type(req);
  proto::SaveUgcRsp::set_ugc_type(rsp_0, v6);
  v7 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v8->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( isUgcClosed )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v10)(this, v7);
    proto::SaveUgcRsp::set_retcode(rsp_0, 11154);
  }
  else
  {
    v11 = proto::SaveUgcReq::ugc_type(req);
    PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v11);
    if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
    {
      proto::SaveUgcRsp::set_retcode(rsp_0, 11158);
    }
    else
    {
      v12 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      v13 = *(_QWORD *)v12 + 72LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(*(_QWORD *)v12 + 72LL);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v13)(v12) != 1 )
      {
        proto::SaveUgcRsp::set_retcode(rsp_0, 11156);
      }
      else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        v14 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14);
        v15 = *(_QWORD *)v14 + 120LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(*(_QWORD *)v14 + 120LL);
        (*(void (__fastcall **)(unsigned __int64, const proto::SaveUgcReq *, proto::SaveUgcRsp *))v15)(v14, req, rsp_0);
      }
    }
    std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 337: range 0000000017980EA2-0000000017981249
void __cdecl PlayerUgcComp::serverSaveUgc(
        PlayerUgcComp *const this,
        const proto::ServerSaveUgcRsp *server_rsp,
        proto::SaveUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  const proto::UgcBriefRedisData *v7; // rax
  google::protobuf::uint64 v8; // rdx
  google::protobuf::int32 v9; // edx
  GameserverService *v10; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char v21[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:345";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::serverSaveUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::ServerSaveUgcRsp::ugc_type(server_rsp);
  proto::SaveUgcRsp::set_ugc_type(rsp_0, v6);
  v7 = proto::ServerSaveUgcRsp::ugc_brief_redis_data(server_rsp);
  v8 = proto::UgcBriefRedisData::ugc_guid(v7);
  proto::SaveUgcRsp::set_ugc_guid(rsp_0, v8);
  if ( proto::ServerSaveUgcRsp::retcode(server_rsp) )
  {
    v9 = proto::ServerSaveUgcRsp::retcode(server_rsp);
    proto::SaveUgcRsp::set_retcode(rsp_0, v9);
  }
  else
  {
    v10 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 32));
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v11->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
    if ( isUgcClosed )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v13 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v13)(this, v10);
      proto::SaveUgcRsp::set_retcode(rsp_0, 11154);
    }
    else
    {
      v14 = proto::ServerSaveUgcRsp::ugc_type(server_rsp);
      PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v14);
      if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        proto::SaveUgcRsp::set_retcode(rsp_0, 11158);
      }
      else
      {
        v15 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(v15);
        v16 = *(_QWORD *)v15 + 72LL;
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(*(_QWORD *)v15 + 72LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v16)(v15) != 1 )
        {
          proto::SaveUgcRsp::set_retcode(rsp_0, 11156);
        }
        else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
        {
          v17 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(v17);
          v18 = *(_QWORD *)v17 + 128LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v17 = __asan_report_load8(*(_QWORD *)v17 + 128LL);
          (*(void (__fastcall **)(unsigned __int64, const proto::ServerSaveUgcRsp *, proto::SaveUgcRsp *))v18)(
            v17,
            server_rsp,
            rsp_0);
        }
      }
      std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
    }
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 353: range 000000001798124A-00000000179816B1
void __cdecl PlayerUgcComp::publishUgc(
        PlayerUgcComp *const this,
        const proto::PublishUgcReq *req,
        proto::PublishUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  google::protobuf::uint64 v7; // rdx
  GameserverService *v8; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isUgcPublishClosed; // r14
  unsigned __int64 v11; // rax
  GameserverService *v12; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v15; // rax
  int v16; // eax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char v23[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:370";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::publishUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::PublishUgcReq::ugc_type(req);
  proto::PublishUgcRsp::set_ugc_type(rsp_0, v6);
  v7 = proto::PublishUgcReq::ugc_guid(req);
  proto::PublishUgcRsp::set_ugc_guid(rsp_0, v7);
  v8 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  isUgcPublishClosed = FeatureSwitchMgr::isUgcPublishClosed(&v9->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( isUgcPublishClosed )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v11 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v11)(this, v8);
    proto::PublishUgcRsp::set_retcode(rsp_0, 11155);
  }
  else if ( PlayerUgcComp::isUgcPublishBan(this) )
  {
    proto::PublishUgcRsp::set_retcode(rsp_0, 11159);
  }
  else
  {
    v12 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 32));
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v13->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
    if ( isUgcClosed )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v15 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v15)(this, v12);
      proto::PublishUgcRsp::set_retcode(rsp_0, 11154);
    }
    else
    {
      v16 = proto::PublishUgcReq::ugc_type(req);
      PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v16);
      if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        proto::PublishUgcRsp::set_retcode(rsp_0, 11158);
      }
      else
      {
        v17 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(v17);
        v18 = *(_QWORD *)v17 + 72LL;
        if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
          v17 = __asan_report_load8(*(_QWORD *)v17 + 72LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v18)(v17) != 1 )
        {
          proto::PublishUgcRsp::set_retcode(rsp_0, 11156);
        }
        else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
        {
          v19 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(v19);
          v20 = *(_QWORD *)v19 + 136LL;
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(*(_QWORD *)v19 + 136LL);
          (*(void (__fastcall **)(unsigned __int64, const proto::PublishUgcReq *, proto::PublishUgcRsp *))v20)(
            v19,
            req,
            rsp_0);
        }
      }
      std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
    }
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 378: range 00000000179816B2-0000000017981A54
void __cdecl PlayerUgcComp::serverPublishUgc(
        PlayerUgcComp *const this,
        const proto::ServerPublishUgcRsp *server_rsp,
        proto::PublishUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  google::protobuf::uint64 v7; // rdx
  google::protobuf::int32 v8; // edx
  GameserverService *v9; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v12; // rax
  int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char v20[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:386";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::serverPublishUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::ServerPublishUgcRsp::ugc_type(server_rsp);
  proto::PublishUgcRsp::set_ugc_type(rsp_0, v6);
  v7 = proto::ServerPublishUgcRsp::ugc_guid(server_rsp);
  proto::PublishUgcRsp::set_ugc_guid(rsp_0, v7);
  if ( proto::ServerPublishUgcRsp::retcode(server_rsp) )
  {
    v8 = proto::ServerPublishUgcRsp::retcode(server_rsp);
    proto::PublishUgcRsp::set_retcode(rsp_0, v8);
  }
  else
  {
    v9 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 32));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v10->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
    if ( isUgcClosed )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v12 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v12)(this, v9);
      proto::PublishUgcRsp::set_retcode(rsp_0, 11154);
    }
    else
    {
      v13 = proto::ServerPublishUgcRsp::ugc_type(server_rsp);
      PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v13);
      if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        proto::PublishUgcRsp::set_retcode(rsp_0, 11158);
      }
      else
      {
        v14 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14);
        v15 = *(_QWORD *)v14 + 72LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(*(_QWORD *)v14 + 72LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v15)(v14) != 1 )
        {
          proto::PublishUgcRsp::set_retcode(rsp_0, 11156);
        }
        else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
        {
          v16 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(v16);
          v17 = *(_QWORD *)v16 + 144LL;
          if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(*(_QWORD *)v16 + 144LL);
          (*(void (__fastcall **)(unsigned __int64, const proto::ServerPublishUgcRsp *, proto::PublishUgcRsp *))v17)(
            v16,
            server_rsp,
            rsp_0);
        }
      }
      std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 394: range 0000000017981A56-0000000017981D9E
void __cdecl PlayerUgcComp::checkUgcUpdate(
        PlayerUgcComp *const this,
        const proto::CheckUgcUpdateReq *req,
        proto::CheckUgcUpdateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  GameserverService *v7; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  char v18[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:396";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::checkUgcUpdate;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::CheckUgcUpdateReq::ugc_type(req);
  proto::CheckUgcUpdateRsp::set_ugc_type(rsp_0, v6);
  v7 = ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v8->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( isUgcClosed )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v10)(this, v7);
    proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 11154);
  }
  else
  {
    v11 = proto::CheckUgcUpdateReq::ugc_type(req);
    PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v11);
    if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
    {
      proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 11158);
    }
    else
    {
      v12 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(v12);
      v13 = *(_QWORD *)v12 + 72LL;
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8(*(_QWORD *)v12 + 72LL);
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v13)(v12) != 1 )
      {
        proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 11156);
      }
      else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        v14 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(v14);
        v15 = *(_QWORD *)v14 + 152LL;
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v14 = __asan_report_load8(*(_QWORD *)v14 + 152LL);
        (*(void (__fastcall **)(unsigned __int64, const proto::CheckUgcUpdateReq *, proto::CheckUgcUpdateRsp *))v15)(
          v14,
          req,
          rsp_0);
      }
    }
    std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 404: range 0000000017981DA0-0000000017982121
void __cdecl PlayerUgcComp::serverCheckUgcUpdate(
        PlayerUgcComp *const this,
        const proto::ServerCheckUgcUpdateRsp *server_rsp,
        proto::CheckUgcUpdateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::UgcType v6; // edx
  google::protobuf::int32 v7; // edx
  GameserverService *v8; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isUgcClosed; // r14
  unsigned __int64 v11; // rax
  int v12; // eax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  char v19[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 11 ugc_ptr:411";
  *(_QWORD *)(v3 + 16) = PlayerUgcComp::serverCheckUgcUpdate;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = proto::ServerCheckUgcUpdateRsp::ugc_type(server_rsp);
  proto::CheckUgcUpdateRsp::set_ugc_type(rsp_0, v6);
  if ( proto::ServerCheckUgcUpdateRsp::retcode(server_rsp) )
  {
    v7 = proto::ServerCheckUgcUpdateRsp::retcode(server_rsp);
    proto::CheckUgcUpdateRsp::set_retcode(rsp_0, v7);
  }
  else
  {
    v8 = ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 32));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isUgcClosed = FeatureSwitchMgr::isUgcClosed(&v9->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
    if ( isUgcClosed )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v11 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
      (*(void (__fastcall **)(PlayerUgcComp *const, GameserverService *))v11)(this, v8);
      proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 11154);
    }
    else
    {
      v12 = proto::ServerCheckUgcUpdateRsp::ugc_type(server_rsp);
      PlayerUgcComp::findBaseUgc((PlayerUgcComp *const)(v3 + 32), (__int64)this, v12);
      if ( std::operator==<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
      {
        proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 11158);
      }
      else
      {
        v13 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(v13);
        v14 = *(_QWORD *)v13 + 72LL;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(*(_QWORD *)v13 + 72LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v14)(v13) != 1 )
        {
          proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 11156);
        }
        else if ( std::operator!=<BaseUgc>(0LL, (const std::shared_ptr<BaseUgc> *)(v3 + 32)) )
        {
          v15 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8(v15);
          v16 = *(_QWORD *)v15 + 160LL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8(*(_QWORD *)v15 + 160LL);
          (*(void (__fastcall **)(unsigned __int64, const proto::ServerCheckUgcUpdateRsp *, proto::CheckUgcUpdateRsp *))v16)(
            v15,
            server_rsp,
            rsp_0);
        }
      }
      std::shared_ptr<BaseUgc>::~shared_ptr((std::shared_ptr<BaseUgc> *const)(v3 + 32));
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 419: range 0000000017982122-00000000179821A1
void __cdecl PlayerUgcComp::checkUgcState(
        PlayerUgcComp *const this,
        const proto::CheckUgcStateReq *req,
        proto::CheckUgcStateRsp *rsp_0)
{
  unsigned __int64 v3; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
  (*(void (__fastcall **)(PlayerUgcComp *const))v3)(this);
  proto::CheckUgcStateRsp::set_retcode(rsp_0, 0);
};

// Line 426: range 00000000179821A2-0000000017982202
bool __cdecl PlayerUgcComp::isUgcPublishBan(PlayerUgcComp *const this)
{
  time_t Now; // rcx

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_publish_expire_time_);
  }
  return Now <= this->ban_publish_expire_time_;
};

// Line 431: range 0000000017982204-00000000179825B7
void __fastcall PlayerUgcComp::banUgcPublish(PlayerUgcComp *const this, uint32_t expire_time)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  uint32_t v8; // ecx
  char v9; // dl
  uint32_t *p_ban_publish_expire_time; // rsi
  bool v11; // dl
  unsigned __int64 v12; // rax
  time_t Now; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  bool is_ban; // [rsp+1Fh] [rbp-B1h]
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>> *__for_range; // [rsp+30h] [rbp-A0h]
  std::pair<unsigned int const,std::shared_ptr<BaseUgc> > *__in; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BaseUgc> > >::type *_; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BaseUgc> > >::type *ugc_ptr; // [rsp+48h] [rbp-88h]
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-80h] BYREF
  char v24[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 expire_time:430";
  *(_QWORD *)(v2 + 16) = PlayerUgcComp::banUgcPublish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = expire_time;
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/ugc/player_ugc_comp.cpp",
    "banUgcPublish",
    432);
  v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v23, (const char (*)[30])off_26256740);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" before:");
  p_ban_publish_expire_time = &this->ban_publish_expire_time_;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->ban_publish_expire_time_);
  common::milog::MiLogStream::~MiLogStream(&v23);
  v8 = *(_DWORD *)(v2 + 32);
  v9 = *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3) + 0x7FFF8000);
  LOBYTE(p_ban_publish_expire_time) = v9 != 0;
  v11 = v9 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v9;
  if ( v11 )
    __asan_report_store4(&this->ban_publish_expire_time_, p_ban_publish_expire_time, v11);
  this->ban_publish_expire_time_ = v8;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v12 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
  (*(void (__fastcall **)(PlayerUgcComp *const))v12)(this);
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_publish_expire_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_publish_expire_time_);
  }
  is_ban = Now < this->ban_publish_expire_time_;
  __for_range = &this->ugc_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::begin(&this->ugc_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<BaseUgc>>::end(&this->ugc_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<BaseUgc>>(__in);
    ugc_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BaseUgc>>(__in);
    if ( std::operator!=<BaseUgc>(0LL, ugc_ptr) )
    {
      v14 = (unsigned __int64)std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)ugc_ptr);
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v14);
      v15 = *(_QWORD *)v14 + 168LL;
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(*(_QWORD *)v14 + 168LL);
      (*(void (__fastcall **)(unsigned __int64, bool))v15)(v14, is_ban);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<BaseUgc>>,false,false>::operator++(&__for_begin);
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
};
