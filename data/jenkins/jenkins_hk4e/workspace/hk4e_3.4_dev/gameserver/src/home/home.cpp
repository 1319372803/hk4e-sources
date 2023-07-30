// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home.cpp

// Line 49: range 0000000014579922-0000000014579B0F
void __cdecl HomeEventInfo::toClient(const HomeEventInfo *const this, proto::HomeAvatarSummonEventInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarSummonEventInfo::set_event_id(proto, this->event_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarSummonEventInfo::set_avatar_id(proto, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->suit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->suit_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarSummonEventInfo::set_suit_id(proto, this->suit_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_over_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_over_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarSummonEventInfo::set_event_over_time(proto, this->event_over_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->random_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_position >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarSummonEventInfo::set_random_position(proto, this->random_position);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarSummonEventInfo::set_guid(proto, this->guid);
};

// Line 60: range 0000000014579B10-0000000014579D3B
std::string *__cdecl Home::getDesc[abi:cxx11](std::string *retstr, const Home *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 ostr:61";
  *(_QWORD *)(v2 + 16) = Home::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[home_uid_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->home_uid_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",state:");
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->state_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, "]");
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

// Line 67: range 0000000014579D3C-000000001457A0C1
int32_t __cdecl Home::constructHome(Home *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::enable_shared_from_this<Home> v8; // [rsp+10h] [rbp-A0h] BYREF
  std::shared_ptr<Home> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 6 ret:82";
  *(_QWORD *)(v1 + 16) = Home::constructHome;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::enable_shared_from_this<Home>::shared_from_this(&v8);
  common::tools::perf::make_shared<HomeTimerMgr,std::shared_ptr<Home>>(&v9, (std::shared_ptr<Home> *)&v8);
  std::shared_ptr<HomeTimerMgr>::operator=(&this->home_timer_mgr_ptr_, (std::shared_ptr<HomeTimerMgr> *)&v9);
  std::shared_ptr<HomeTimerMgr>::~shared_ptr((std::shared_ptr<HomeTimerMgr> *const)&v9);
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v8);
  if ( std::operator==<HomeTimerMgr>(&this->home_timer_mgr_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructHome",
      71);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v10,
      (const char (*)[32])"[HOME] make HomeTimerMgr failed");
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = -1;
  }
  else
  {
    common::tools::perf::make_shared<UnixTimerMgr>();
    std::shared_ptr<UnixTimerMgr>::operator=(&this->unix_timer_mgr_ptr_, (std::shared_ptr<UnixTimerMgr> *)&v9);
    std::shared_ptr<UnixTimerMgr>::~shared_ptr((std::shared_ptr<UnixTimerMgr> *const)&v9);
    if ( std::operator==<UnixTimerMgr>(&this->unix_timer_mgr_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "constructHome",
        78);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v10,
        (const char (*)[32])"[HOME] make UnixTimerMgr failed");
      common::milog::MiLogStream::~MiLogStream(&v10);
      result = -1;
    }
    else
    {
      *(_DWORD *)(v1 + 32) = 0;
      *(_DWORD *)(v1 + 32) = Home::constructAllHomeComp(this);
      if ( *(_DWORD *)(v1 + 32) )
      {
        common::milog::MiLogStream::create(
          &v10,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home.cpp",
          "constructHome",
          86);
        v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v10,
               (const char (*)[41])"[HOME] constructAllHomeComp failed. ret:");
        v6 = common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v1 + 32));
        v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream(&v10);
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
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

// Line 94: range 000000001457A0C2-000000001457A172
int32_t __cdecl Home::clearHome(Home *const this)
{
  std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  UnixTimerMgr *v2; // rax

  EcsBase<Home,HomeCompBase,12u>::clearAllComp(&this->EcsBase<Home,HomeCompBase,12>);
  if ( std::operator!=<HomeTimerMgr>(&this->home_timer_mgr_ptr_, 0LL) )
  {
    v1 = std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_timer_mgr_ptr_);
    PausableTimerMgr::cancel(v1);
  }
  std::__shared_ptr<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2>::reset(&this->home_timer_mgr_ptr_);
  if ( std::operator!=<UnixTimerMgr>(&this->unix_timer_mgr_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->unix_timer_mgr_ptr_);
    UnixTimerMgr::cancel(v2);
  }
  std::__shared_ptr<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2>::reset(&this->unix_timer_mgr_ptr_);
  return 0;
};

// Line 112: range 000000001457A174-000000001457A7B6
int32_t __cdecl Home::constructAllHomeComp(Home *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeBasicComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      115);
    common::milog::MiLogStream::operator()(&v2, off_25407080);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeSceneComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      120);
    common::milog::MiLogStream::operator()(&v2, off_254070C0);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeOfflineMsgComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      125);
    common::milog::MiLogStream::operator()(&v2, off_25407100);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeFurnitureMakeComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      130);
    common::milog::MiLogStream::operator()(&v2, off_25407140);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeLimitedShopComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      135);
    common::milog::MiLogStream::operator()(&v2, off_254071A0);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomePlantComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      140);
    common::milog::MiLogStream::operator()(&v2, off_254071E0);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeFishFarmingComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      145);
    common::milog::MiLogStream::operator()(&v2, off_25407220);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeCustomFurnitureComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      150);
    common::milog::MiLogStream::operator()(&v2, off_25407260);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomePictureFrameComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      155);
    common::milog::MiLogStream::operator()(&v2, off_254072C0);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeGroupRecordComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      160);
    common::milog::MiLogStream::operator()(&v2, off_25407300);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else if ( EcsBase<Home,HomeCompBase,12u>::addComp<HomeBlueprintComp>(&this->EcsBase<Home,HomeCompBase,12>) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "constructAllHomeComp",
      165);
    common::milog::MiLogStream::operator()(&v2, off_25407340);
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 173: range 000000001457A7B8-000000001457B02F
int32_t __cdecl Home::fromBin(Home *const this, const proto::HomeData *data)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  uint32_t v6; // ecx
  int32_t v7; // edx
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  uint32_t Now; // esi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  const std::string *bin_str; // [rsp+30h] [rbp-1A0h]
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *v21; // [rsp+48h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_type; // [rsp+50h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+58h] [rbp-178h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+60h] [rbp-170h] BYREF
  EcsBase<Home,HomeCompBase,12>::Iterator __for_end; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v26; // [rsp+80h] [rbp-150h] BYREF
  char v27[304]; // [rsp+A0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 32 14 uncomp_str:185 112 112 12 data_bin:178";
  *(_QWORD *)(v3 + 16) = Home::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = -219021312;
  v5[536862723] = 62194;
  v5[536862727] = -202116109;
  v6 = proto::HomeData::data_version(data);
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->data_version_);
  }
  this->data_version_ = v6;
  v7 = proto::HomeData::block_end_time(data);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_end_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->block_end_time_);
  }
  this->block_end_time_ = v7;
  proto::HomeDataBin::HomeDataBin((proto::HomeDataBin *const)(v3 + 112));
  bin_str = proto::HomeData::bin_data[abi:cxx11](data);
  if ( common::tools::ZlibUtil::isCompressWithPad(bin_str) )
  {
    common::tools::ZlibUtil::uncompressWithPad((std::string *)(v3 + 48), bin_str);
    if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 112, v3 + 48) != 1 )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "fromBin",
        188);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v26,
             (const char (*)[33])"ParseFromString fails, home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v2 = -1;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    std::string::~string((void *)(v3 + 48));
    if ( v9 != 1 )
      goto LABEL_32;
  }
  else if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v3 + 112, bin_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "fromBin",
      202);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v26, (const char (*)[22])"ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v2 = -1;
    goto LABEL_32;
  }
  EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
  EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)&__for_end);
  while ( EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v21 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v21);
    comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v21);
    v10 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    v11 = *(_QWORD *)v10 + 16LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v11)(v10, v3 + 112) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "fromBin",
        214);
      if ( *(_BYTE *)(((unsigned __int64)comp_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)comp_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)comp_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v12 = *comp_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(&v26, "fromBin for home_uid=%u comp_type=%u failed", this->home_uid_, v12);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v2 = -1;
      goto LABEL_32;
    }
    EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
  }
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_from_bin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_from_bin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_from_bin_time_);
  }
  this->last_from_bin_time_ = Now;
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home.cpp",
    "fromBin",
    221);
  v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          &v26,
          (const char (*)[49])"[DATA_VERSION] home from bin succ, data_version:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->data_version_);
  v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])", block_end_time:");
  v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, &this->block_end_time_);
  v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])", home_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->home_uid_);
  common::milog::MiLogStream::~MiLogStream(&v26);
  v2 = 0;
LABEL_32:
  proto::HomeDataBin::~HomeDataBin((proto::HomeDataBin *const)(v3 + 112));
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 228: range 000000001457B030-000000001457BB85
int32_t __cdecl Home::toBin(Home *const this, proto::HomeData *data)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 home_uid; // rcx
  int v9; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  char v12; // al
  unsigned int v13; // r15d
  __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned int v18; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  __int64 v20; // rcx
  MonitorReport *v21; // r15
  int32_t v22; // eax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r15
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int32_t result; // eax
  uint32_t warn_home_bin_len; // [rsp+Ch] [rbp-1D4h]
  unsigned __int64 val; // [rsp+28h] [rbp-1B8h] BYREF
  std::string *bin_str; // [rsp+30h] [rbp-1B0h]
  Home *__for_range; // [rsp+38h] [rbp-1A8h]
  const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > *v35; // [rsp+40h] [rbp-1A0h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_type; // [rsp+48h] [rbp-198h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+50h] [rbp-190h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+60h] [rbp-180h] BYREF
  std::string v39; // [rsp+70h] [rbp-170h] BYREF
  common::milog::MiLogStream v40; // [rsp+90h] [rbp-150h] BYREF
  char v41[304]; // [rsp+B0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 17 before_length:250 48 16 9 timer:231 80 16 14 config_ptr:251 112 112 12 data_bin:238";
  *(_QWORD *)(v3 + 16) = Home::toBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862727] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v3 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeData::set_uid(data, this->home_uid_);
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeData::set_data_version(data, this->data_version_);
  bin_str = proto::HomeData::mutable_bin_data[abi:cxx11](data);
  proto::HomeDataBin::HomeDataBin((proto::HomeDataBin *const)(v3 + 112));
  __for_range = this;
  EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
  EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)(v3 + 80));
  while ( EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(
            &__for_begin,
            (const EcsBase<Home,HomeCompBase,12>::Iterator *)(v3 + 80)) )
  {
    v35 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v35);
    comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v35);
    v6 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    v7 = *(_QWORD *)v6 + 24LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v7)(v6, v3 + 112) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "toBin",
        244);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      home_uid = this->home_uid_;
      if ( *(_BYTE *)(((unsigned __int64)comp_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)comp_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)comp_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(&v40, "toBin type=%u failed, home_uid=%u", *comp_type, home_uid);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v2 = -1;
      v9 = 0;
      goto LABEL_44;
    }
    EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
  }
  google::protobuf::MessageLite::SerializeToString((const google::protobuf::MessageLite *const)(v3 + 112), bin_str);
  *(_DWORD *)(v3 + 32) = std::string::length(bin_str);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 80));
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&v10->is_open_compress >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v10 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->is_open_compress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v10->is_open_compress);
  }
  if ( !v10->is_open_compress )
    goto LABEL_28;
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&v11->min_compress_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->min_compress_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v11->min_compress_size < *(_DWORD *)(v3 + 32) )
    v12 = 1;
  else
LABEL_28:
    v12 = 0;
  if ( v12 )
  {
    common::tools::ZlibUtil::compressWithPad(&v39, bin_str, -1);
    std::string::operator=(bin_str, &v39);
    std::string::~string(&v39);
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home.cpp",
      "toBin",
      255);
    v13 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 48));
    v14 = std::string::length(bin_str);
    v15 = *(unsigned int *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v40,
      "home_uid=%u bin compress before=%u after=%lu,time_cost=%u.",
      this->home_uid_,
      v15,
      v14,
      v13);
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
  v16 = std::string::length(bin_str);
  v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&v17->warn_home_bin_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v17->warn_home_bin_len >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v16 > v17->warn_home_bin_len )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "toBin",
      260);
    v18 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v3 + 48));
    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&v19->warn_home_bin_len >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v19->warn_home_bin_len >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    warn_home_bin_len = v19->warn_home_bin_len;
    v20 = std::string::length(bin_str);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v40,
      "home_uid=%u, bin.length=%lu is very long, limit=%u, timer_cost:%u.",
      this->home_uid_,
      v20,
      warn_home_bin_len,
      v18);
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
  if ( std::string::length(bin_str) )
  {
    v21 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    v22 = std::string::length(bin_str);
    MonitorReport::addValue(v21, MONITOR_BIN_HOME_SIZE, v22);
  }
  common::milog::MiLogStream::create(
    &v40,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home.cpp",
    "toBin",
    268);
  v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
          &v40,
          (const char (*)[48])"[ZT_PERF][HOME] home to bin succ, data_version:");
  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->data_version_);
  v25 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          v24,
          (const char (*)[34])", bin_str before_compress_length:");
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 32));
  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v26, (const char (*)[16])", final_length:");
  val = std::string::length(bin_str);
  v28 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v27, &val);
  v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v28, (const char (*)[12])", home_uid:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->home_uid_);
  common::milog::MiLogStream::~MiLogStream(&v40);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
  v9 = 1;
LABEL_44:
  proto::HomeDataBin::~HomeDataBin((proto::HomeDataBin *const)(v3 + 112));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v3 + 48));
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
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

// Line 280: range 000000001457BB86-000000001457BD91
int32_t __cdecl Home::toSnapshotBin(Home *const this, proto::HomeSnapshotBin *snapshot_bin)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 home_uid; // rcx
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *v6; // [rsp+18h] [rbp-68h]
  std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_type; // [rsp+20h] [rbp-60h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+28h] [rbp-58h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  EcsBase<Home,HomeCompBase,12>::Iterator __for_end; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
  EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)&__for_end);
  while ( 1 )
  {
    if ( !EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(&__for_begin, &__for_end) )
      return 0;
    v6 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
    comp_type = (std::tuple_element<0,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v6);
    comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v6);
    v2 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    v3 = *(_QWORD *)v2 + 32LL;
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v2 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::HomeSnapshotBin *))v3)(v2, snapshot_bin) )
      break;
    EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home.cpp",
    "toSnapshotBin",
    286);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  home_uid = this->home_uid_;
  if ( *(_BYTE *)(((unsigned __int64)comp_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)comp_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)comp_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  common::milog::MiLogStream::operator()(&v11, "toSnapshotBin type=%u failed, home_uid=%u", *comp_type, home_uid);
  common::milog::MiLogStream::~MiLogStream(&v11);
  return -1;
};

// Line 294: range 000000001457BD92-000000001457C06C
int32_t __cdecl Home::init(Home *const this)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *v4; // [rsp+18h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+28h] [rbp-58h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  EcsBase<Home,HomeCompBase,12>::Iterator __for_end; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+50h] [rbp-30h] BYREF

  if ( std::operator==<HomeTimerMgr>(&this->home_timer_mgr_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "init",
      297);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v8,
      (const char (*)[31])"home_timer_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else if ( std::operator==<UnixTimerMgr>(&this->unix_timer_mgr_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "init",
      303);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v8,
      (const char (*)[31])"unix_timer_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
    EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)&__for_end);
    while ( 1 )
    {
      if ( !EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(&__for_begin, &__for_end) )
        return 0;
      v4 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
      std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v4);
      comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v4);
      v2 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      v3 = *(_QWORD *)v2 + 40LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v3)(v2) )
        break;
      EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "init",
      313);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v8, "init for home_uid=%u failed", this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 321: range 000000001457C06E-000000001457C5B9
int32_t __cdecl Home::start(Home *const this)
{
  HomeTimerMgr *v2; // rax
  UnixTimerMgr *p_home_uid; // rdi
  common::milog::MiLogStream *v4; // rax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *v8; // [rsp+28h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Home,HomeCompBase,12>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+60h] [rbp-30h] BYREF

  if ( std::operator==<HomeTimerMgr>(&this->home_timer_mgr_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "start",
      324);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v12,
      (const char (*)[31])"home_timer_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else if ( std::operator==<UnixTimerMgr>(&this->unix_timer_mgr_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "start",
      330);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      &v12,
      (const char (*)[31])"unix_timer_mgr_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return -1;
  }
  else
  {
    v2 = std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_timer_mgr_ptr_);
    if ( HomeTimerMgr::start(v2, "./src/home/home.cpp", "start", 334) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "start",
        336);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v12,
        (const char (*)[33])"home_timer_mgr_ptr_ start failed");
      common::milog::MiLogStream::~MiLogStream(&v12);
      return -1;
    }
    else
    {
      p_home_uid = std::__shared_ptr_access<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->unix_timer_mgr_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_home_uid = (UnixTimerMgr *)&this->home_uid_;
        __asan_report_load4();
      }
      if ( UnixTimerMgr::start(p_home_uid, "./src/home/home.cpp", "start", 340, this->home_uid_, 0) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home.cpp",
          "start",
          342);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v12,
          (const char (*)[32])"unix_timer_mgr_ptr start failed");
        common::milog::MiLogStream::~MiLogStream(&v12);
        return -1;
      }
      else if ( Home::addTimer(this) )
      {
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home.cpp",
          "start",
          349);
        v4 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v12,
               (const char (*)[27])"addTimer failed. home_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->home_uid_);
        common::milog::MiLogStream::~MiLogStream(&v12);
        return -1;
      }
      else
      {
        EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
        EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)&__for_end);
        while ( 1 )
        {
          if ( !EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(&__for_begin, &__for_end) )
          {
            Home::setState(this, HOME_STATE_RUNING);
            return 0;
          }
          v8 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
          std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v8);
          comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v8);
          v5 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
          if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
            v5 = __asan_report_load8();
          v6 = *(_QWORD *)v5 + 48LL;
          if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
            v5 = __asan_report_load8();
          if ( (*(unsigned int (__fastcall **)(unsigned __int64))v6)(v5) )
            break;
          EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v12,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home.cpp",
          "start",
          359);
        if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        common::milog::MiLogStream::operator()(&v12, "start for home_uid=%u failed", this->home_uid_);
        common::milog::MiLogStream::~MiLogStream(&v12);
        return -1;
      }
    }
  }
};

// Line 370: range 000000001457C5BA-000000001457C9F0
int32_t __cdecl Home::stop(Home *const this)
{
  UnixTimerMgr *v1; // rax
  std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  GameserverService *v6; // rax
  HomeMgr *p_home_mgr; // rbx
  uint32_t cur_time; // [rsp+1Ch] [rbp-74h]
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *v9; // [rsp+28h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+38h] [rbp-58h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  EcsBase<Home,HomeCompBase,12>::Iterator __for_end; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+60h] [rbp-30h] BYREF

  cur_time = common::tools::TimeUtils::getNow();
  Home::delTimer(this);
  if ( std::operator!=<UnixTimerMgr>(0LL, &this->unix_timer_mgr_ptr_) )
  {
    v1 = std::__shared_ptr_access<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->unix_timer_mgr_ptr_);
    UnixTimerMgr::cancel(v1);
  }
  if ( std::operator!=<HomeTimerMgr>(0LL, &this->home_timer_mgr_ptr_) )
  {
    v2 = std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeTimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_timer_mgr_ptr_);
    PausableTimerMgr::cancel(v2);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == HOME_STATE_RUNING )
  {
    Home::setState(this, HOME_STATE_STOPING);
    EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
    EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)&__for_end);
    while ( EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(&__for_begin, &__for_end) )
    {
      v9 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
      std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v9);
      comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v9);
      v4 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8();
      v5 = *(_QWORD *)v4 + 56LL;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v5)(v4);
      EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->data_version_;
    v6 = ServiceBox::findService<GameserverService>();
    p_home_mgr = &GameserverService::getGameThreadLocal(v6)->home_mgr;
    std::enable_shared_from_this<Home>::shared_from_this((std::enable_shared_from_this<Home> *const)&__for_end);
    HomeMgr::enqueueSaveHome(p_home_mgr, (HomePtr *)&__for_end, cur_time);
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&__for_end);
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/home/home.cpp",
      "stop",
      401);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v13, "[HOME] home_uid=%u stop, reason=%u", this->home_uid_, 1LL);
    common::milog::MiLogStream::~MiLogStream(&v13);
    Home::setState(this, HOME_STATE_STOPPED);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home.cpp",
      "stop",
      385);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v13, off_25407B80, this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
};

// Line 408: range 000000001457C9F2-000000001457CE2A
int32_t __cdecl Home::saveToDb(Home *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::HomeData *v4; // rdx
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  int v7; // eax
  common::milog::MiLogStream *v8; // rdx
  __int64 NowMs; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 7 req:417";
  *(_QWORD *)(v1 + 16) = Home::saveToDb;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == HOME_STATE_RUNING )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++this->data_version_;
  }
  proto::SaveHomeDataReq::SaveHomeDataReq((proto::SaveHomeDataReq *const)(v1 + 32));
  v4 = proto::SaveHomeDataReq::mutable_home_data((proto::SaveHomeDataReq *const)(v1 + 32));
  if ( Home::toBin(this, v4) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "saveToDb",
      421);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v14, (const char (*)[12])"toBin fails");
    common::milog::MiLogStream::operator<<<Home,(Home*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
  else
  {
    v7 = *(unsigned __int8 *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 != 0 && (char)v7 <= 3 )
      __asan_report_load4();
    if ( Home::sendSaveHomeDataReq(this->home_uid_, (proto::SaveHomeDataReq *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "saveToDb",
        427);
      v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v14, (const char (*)[15])"saveToDb fails");
      common::milog::MiLogStream::operator<<<Home,(Home*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = -1;
    }
    else
    {
      NowMs = common::tools::TimeUtils::getNowMs();
      if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
        NowMs = __asan_report_store8(&this->last_save_time_ms_);
      this->last_save_time_ms_ = NowMs;
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home.cpp",
        "saveToDb",
        433);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v14,
              (const char (*)[51])"[DATA_VERSION] save to db from home, data_version:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->data_version_);
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->home_uid_);
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = 0;
    }
  }
  proto::SaveHomeDataReq::~SaveHomeDataReq((proto::SaveHomeDataReq *const)(v1 + 32));
  result = v6;
  if ( v15 == (char *)v1 )
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

// Line 438: range 000000001457CE2C-000000001457CEE5
int32_t __cdecl Home::onOwnerPlayerEnter(Home *const this, Player *player)
{
  PlayerBasicComp *BasicComp; // rax
  HomeBasicComp *v3; // rbx
  PlayerBasicComp *v4; // rax
  const std::string *v5; // rax
  HomeCustomFurnitureComp *CustomFurnitureComp; // rax
  HomeCustomFurnitureComp *v7; // rdx
  std::set<unsigned int> v9; // [rsp+10h] [rbp-40h] BYREF

  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::setOpenState(BasicComp, 0x5DCu, 1u, 1);
  v3 = Home::getBasicComp(this);
  v4 = Player::getBasicComp(player);
  v5 = PlayerBasicComp::getNickName[abi:cxx11](v4);
  HomeBasicComp::setOwnerNickName(v3, v5);
  CustomFurnitureComp = Home::getCustomFurnitureComp(this);
  HomeCustomFurnitureComp::checkAndRepaireCustomFurniture(&v9, CustomFurnitureComp, player);
  std::set<unsigned int>::~set(&v9);
  v7 = Home::getCustomFurnitureComp(this);
  HomeCustomFurnitureComp::syncCustomFurnitureData(v7, player);
  return 0;
};

// Line 448: range 000000001457CEE6-000000001457CF93
int32_t __cdecl Home::onOwnerPlayerLeave(Home *const this, Player *player)
{
  PlayerHomeComp *HomeComp; // rax
  proto::HomeSnapshotBin *HomeSnapshot; // rdx
  PlayerHomeComp *v4; // rax
  HomeBasicComp *BasicComp; // rbx
  PlayerBasicComp *v6; // rax
  const std::string *v7; // rax
  PlayerHomeComp *v8; // rax

  Home::changeEditMode(this, 0, player);
  HomeComp = Player::getHomeComp(player);
  HomeSnapshot = PlayerHomeComp::getHomeSnapshot(HomeComp);
  Home::toSnapshotBin(this, HomeSnapshot);
  v4 = Player::getHomeComp(player);
  PlayerHomeComp::syncWeekendDjinnInfo(v4);
  BasicComp = Home::getBasicComp(this);
  v6 = Player::getBasicComp(player);
  v7 = PlayerBasicComp::getNickName[abi:cxx11](v6);
  HomeBasicComp::setOwnerNickName(BasicComp, v7);
  v8 = Player::getHomeComp(player);
  PlayerHomeComp::sendHomeMarkPointNotify(v8);
  return 0;
};

// Line 462: range 000000001457CF94-000000001457D6AD
__int64 __fastcall Home::sendSaveHomeDataReq(uint32_t home_uid, proto::SaveHomeDataReq *req)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const proto::HomeData *v6; // rax
  const std::string *v7; // rax
  unsigned __int64 v8; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  const proto::HomeData *v10; // rax
  google::protobuf::uint32 v11; // eax
  int v12; // r15d
  common::minet::Packet *v13; // rax
  common::minet::Packet *v14; // rax
  GameserverService *v15; // r15
  common::minet::PacketPtr v16; // rdi
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r15
  const proto::HomeData *v20; // rax
  int v21; // r15d
  common::minet::Packet *v22; // rax
  common::minet::Packet *v23; // rax
  GameserverService *v24; // r15
  unsigned __int64 v25; // rdx
  GameserverService *v26; // r15
  NetworkMgrBase *v27; // r15
  uint32_t v28; // r8d
  __int64 result; // rax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-110h] BYREF
  char v34[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 home_uid:461 64 16 14 config_ptr:463 96 16 14 packet_ptr:483 128 32 7 rsp:466";
  *(_QWORD *)(v3 + 16) = Home::sendSaveHomeDataReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = home_uid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = proto::SaveHomeDataReq::home_data(req);
  v7 = proto::HomeData::bin_data[abi:cxx11](v6);
  v8 = std::string::length(v7);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v9->max_home_bin_len >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->max_home_bin_len >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( v8 <= v9->max_home_bin_len )
  {
    common::minet::PacketUtils::createPacket<proto::SaveHomeDataReq>((const proto::SaveHomeDataReq *)(v3 + 96));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home.cpp",
        "sendSaveHomeDataReq",
        486);
      common::milog::MiLogStream::operator()(&v33, "create packet failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
      v2 = -1;
      v21 = 0;
    }
    else
    {
      v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      common::minet::Packet::setUserId(v22, *(_DWORD *)(v3 + 48));
      v23 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      common::minet::Packet::setHomeUserId(v23, *(_DWORD *)(v3 + 48));
      v24 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
      ServiceBase::setPacketSource(v24, (common::minet::PacketPtr)__PAIR128__(v25, &p_packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v26 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
      GameserverService::setPacketGameThreadIndex(v26, &p_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v27 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
      NetworkMgrBase::sendPacketToTargetService(v27, (common::minet::PacketPtr)__PAIR128__(5LL, &p_packet_ptr), 0, v28);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v21 = 1;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 96));
    if ( v21 == 1 )
      goto LABEL_16;
  }
  else
  {
    proto::SaveHomeDataRsp::SaveHomeDataRsp((proto::SaveHomeDataRsp *const)(v3 + 128));
    proto::SaveHomeDataRsp::set_retcode((proto::SaveHomeDataRsp *const)(v3 + 128), 0);
    v10 = proto::SaveHomeDataReq::home_data(req);
    v11 = proto::HomeData::data_version(v10);
    proto::SaveHomeDataRsp::set_data_version((proto::SaveHomeDataRsp *const)(v3 + 128), v11);
    common::minet::PacketUtils::createPacket<proto::SaveHomeDataRsp>((const proto::SaveHomeDataRsp *)(v3 + 96));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home.cpp",
        "sendSaveHomeDataReq",
        472);
      common::milog::MiLogStream::operator()(&v33, "create packet failed");
      common::milog::MiLogStream::~MiLogStream(&v33);
      v2 = -1;
      v12 = 0;
    }
    else
    {
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      common::minet::Packet::setUserId(v13, *(_DWORD *)(v3 + 48));
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      common::minet::Packet::setHomeUserId(v14, *(_DWORD *)(v3 + 48));
      v15 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
      GameserverService::setPacketGameThreadIndex(v15, &p_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v16._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v3 + 96);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v3 + 96));
      v16._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_packet_ptr;
      ServiceBox::pushPacketToService(v16);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        6u,
        "./src/home/home.cpp",
        "sendSaveHomeDataReq",
        479);
      v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v33,
              (const char (*)[40])"make fake SaveHomeDataRsp for home_uid:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])", data_version:");
      v20 = proto::SaveHomeDataReq::home_data(req);
      val = proto::HomeData::data_version(v20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v12 = 1;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 96));
    proto::SaveHomeDataRsp::~SaveHomeDataRsp((proto::SaveHomeDataRsp *const)(v3 + 128));
    if ( v12 == 1 )
LABEL_16:
      v2 = 0;
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  result = v2;
  if ( v34 == (char *)v3 )
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
  return result;
};

// Line 499: range 000000001457D6AE-000000001457D6B8
void __cdecl Home::onDailyRefresh(Home *const this)
{
  ;
};

// Line 504: range 000000001457D6BA-000000001457D891
void __fastcall Home::setState(Home *const this, HomeState state)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  HomeState v10; // ecx
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-80h] BYREF
  char v12[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 state:503";
  *(_QWORD *)(v2 + 16) = Home::setState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = state;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/home/home.cpp",
    "setState",
    505);
  v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v11, (const char (*)[17])"[HOME] home_uid:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->home_uid_);
  v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])" set state from ");
  v8 = common::milog::MiLogStream::operator<<<HomeState,(HomeState*)0>(v7, &this->state_);
  v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v8, (const char (*)[5])off_25407FC0);
  common::milog::MiLogStream::operator<<<HomeState,(HomeState*)0>(v9, (const HomeState *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v11);
  v10 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_);
  }
  this->state_ = v10;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 511: range 000000001457D892-000000001457E0A6
void __cdecl Home::onTimer(Home *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  uint64_t last_save_time_ms; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GameserverService *v8; // rax
  HomeMgr *p_home_mgr; // r14
  HomeSceneComp *SceneComp; // rax
  uint32_t HasPlayerTime; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  GameserverService *v16; // rax
  HomeMgr *v17; // rcx
  GameserverService *v18; // rcx
  HomeSceneComp *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t now; // [rsp+10h] [rbp-F0h]
  int begin_time; // [rsp+14h] [rbp-ECh]
  const HomeWorld *home_world; // [rsp+18h] [rbp-E8h]
  std::enable_shared_from_this<Home> v25; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 cost_time:553 64 16 9 timer:513 96 16 14 config_ptr:515";
  *(_QWORD *)(v2 + 16) = Home::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  now = now_ms / 0x3E8;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v2 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  if ( std::operator==<Config>((const std::shared_ptr<Config> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home.cpp",
      "onTimer",
      518);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v26, (const char (*)[17])off_254080A0);
    common::milog::MiLogStream::operator<<<Home,(Home*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    last_save_time_ms = this->last_save_time_ms_;
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v7->home_timer_save_time_interval >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->home_timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( now_ms > last_save_time_ms + SAFE_MULTIPLY<unsigned int,int>(v7->home_timer_save_time_interval, 1000) )
    {
      v8 = ServiceBox::findService<GameserverService>();
      p_home_mgr = &GameserverService::getGameThreadLocal(v8)->home_mgr;
      std::enable_shared_from_this<Home>::shared_from_this(&v25);
      HomeMgr::enqueueSaveHome(p_home_mgr, (HomePtr *)&v25);
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v25);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_save_time_ms_);
      this->last_save_time_ms_ = now_ms;
    }
    SceneComp = Home::getSceneComp(this);
    home_world = HomeSceneComp::getHomeWorld(SceneComp);
    HasPlayerTime = HomeWorld::getLastHasPlayerTime(home_world);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v12->home_no_player_destroy_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v12 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->home_no_player_destroy_time >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( now <= HasPlayerTime + v12->home_no_player_destroy_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->state_ == HOME_STATE_RUNING )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_send_online_notify_time_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( now > this->last_send_online_notify_time_ && now - this->last_send_online_notify_time_ > 0x12C )
        {
          this->last_send_online_notify_time_ = now;
          v18 = ServiceBox::findService<GameserverService>();
          if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          GameserverService::updateHomeOnlineStatus(v18, this->home_uid_, HomeOnlineStatusInfo_StatusType_ONLINE);
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->last_check_force_silent_reload_group_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_check_force_silent_reload_group_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( now > this->last_check_force_silent_reload_group_time_ + 10 )
      {
        this->last_check_force_silent_reload_group_time_ = now;
        begin_time = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 64));
        v19 = Home::getSceneComp(this);
        HomeSceneComp::checkSilentUpdate(v19);
        *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 64))
                             - begin_time;
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home.cpp",
          "onTimer",
          554);
        v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v26,
                (const char (*)[25])"checkSilentUpdate cost [");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])"] us.");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home.cpp",
        "onTimer",
        532);
      v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              &v26,
              (const char (*)[55])"[HOME] has no player for a long time. stop this home. ");
      common::milog::MiLogStream::operator<<<Home,(Home*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v26);
      if ( Home::stop(this) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home.cpp",
          "onTimer",
          537);
        v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v26, (const char (*)[10])"home_uid:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->home_uid_);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" stop failed");
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      v16 = ServiceBox::findService<GameserverService>();
      v17 = &GameserverService::getGameThreadLocal(v16)->home_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HomeMgr::mvOnlineHomeToSaveWait(v17, this->home_uid_);
    }
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 64));
  if ( v27 == (char *)v2 )
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

// Line 560: range 000000001457E0A8-000000001457E1DD
int32_t __cdecl Home::addTimer(Home *const this)
{
  common::tools::MiTimer *p_s_timer; // rdi
  char v2; // al
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( common::tools::MiTimer::isActive(&this->s_timer_) )
    goto LABEL_6;
  p_s_timer = &this->s_timer_;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_s_timer = (common::tools::MiTimer *)&this->home_uid_;
    __asan_report_load4();
  }
  if ( common::tools::MiTimer::startS(p_s_timer, 1u, 1, "./src/home/home.cpp", "addTimer", 561, this->home_uid_, 0) )
    v2 = 1;
  else
LABEL_6:
    v2 = 0;
  if ( !v2 )
    return 0;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/home/home.cpp",
    "addTimer",
    563);
  v3 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v6, (const char (*)[15])"addTimer fails");
  common::milog::MiLogStream::operator<<<Home,(Home*)0>(v3, this);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 571: range 000000001457E1DE-000000001457E202
int32_t __cdecl Home::delTimer(Home *const this)
{
  common::tools::MiTimer::cancel(&this->s_timer_);
  return 0;
};

// Line 577: range 000000001457E204-000000001457E22D
uint32_t __cdecl Home::getPlayerCount(Home *const this)
{
  HomeSceneComp *SceneComp; // rax
  HomeWorld *HomeWorld; // rax

  SceneComp = Home::getSceneComp(this);
  HomeWorld = HomeSceneComp::getHomeWorld(SceneComp);
  return World::getPlayerCount(HomeWorld);
};

// Line 582: range 000000001457E22E-000000001457E291
// local variable allocation has failed, the output may be wrong!
PlayerPtr __cdecl Home::findPlayer(Home *const this, uint32_t uid)
{
  HomeSceneComp *SceneComp; // rax
  uint32_t HomeWorld; // ecx
  PlayerPtr result; // rax

  SceneComp = Home::getSceneComp(*(Home *const *)&uid);
  HomeWorld = (unsigned int)HomeSceneComp::getHomeWorld(SceneComp);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = World::findPlayerPtr((World *const)this, HomeWorld);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 587: range 000000001457E292-000000001457E316
PlayerPtr __cdecl Home::findOwnerPlayer(Home *const this)
{
  __int64 v1; // rsi
  PlayerPtr result; // rax

  if ( *(_BYTE *)(((unsigned __int64)(v1 + 72) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(v1 + 72) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = Home::findPlayer(this, v1);
  result._M_ptr = (std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 592: range 000000001457E318-000000001457E396
int32_t __cdecl Home::foreachPlayer(Home *const this, std::function<ForeachPolicy(Player&)> *p_func)
{
  HomeSceneComp *SceneComp; // rax
  HomeWorld *HomeWorld; // rbx
  std::function<ForeachPolicy(Player&)> v5; // [rsp+10h] [rbp-30h] BYREF

  SceneComp = Home::getSceneComp(this);
  HomeWorld = HomeSceneComp::getHomeWorld(SceneComp);
  std::function<ForeachPolicy ()(Player &)>::function(&v5, p_func);
  LODWORD(HomeWorld) = World::foreachPlayer(HomeWorld, &v5);
  std::function<ForeachPolicy ()(Player &)>::~function(&v5);
  return (int)HomeWorld;
};

// Line 597: range 000000001457E398-000000001457E507
int32_t __cdecl Home::bindHomeSession(Home *const this, HomeSessionPtr *p_session_ptr)
{
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  __int64 LoadRand; // rax
  HomeSession *v6; // rbx
  std::enable_shared_from_this<Home> v7; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<HomeSession>(p_session_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "bindHomeSession",
      600);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v8,
           (const char (*)[38])"[HOME] session_ptr is null. home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->home_uid_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    std::weak_ptr<HomeSession>::operator=<HomeSession>(&this->session_wtr_, p_session_ptr);
    v4 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    LoadRand = HomeSession::getLoadRand(v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
      LoadRand = __asan_report_store8(&this->load_rand_);
    this->load_rand_ = LoadRand;
    v6 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_session_ptr);
    std::enable_shared_from_this<Home>::shared_from_this(&v7);
    HomeSession::bindHome(v6, (HomePtr *)&v7);
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)&v7);
    return 0;
  }
};

// Line 610: range 000000001457E508-000000001457E5A4
HomeSessionPtr __cdecl Home::unbindHomeSession(Home *const this)
{
  HomeSessionPtr result; // rax
  HomeSession *v2; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  std::weak_ptr<HomeSession>::lock((const std::weak_ptr<HomeSession> *const)this);
  if ( std::operator!=<HomeSession>((const std::shared_ptr<HomeSession> *)this, 0LL) )
  {
    v2 = std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeSession,(__gnu_cxx::_Lock_policy)2,false,false> *const)this);
    HomeSession::unbindHome(v2);
  }
  result._M_ptr = (std::__shared_ptr<HomeSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 620: range 000000001457E5A6-000000001457E5F4
HomeSessionPtr __cdecl Home::getHomeSession(const Home *const this)
{
  HomeSessionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  result = std::weak_ptr<HomeSession>::lock((const std::weak_ptr<HomeSession> *const)this);
  result._M_ptr = (std::__shared_ptr<HomeSession,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 625: range 000000001457E5F6-000000001457EEA5
void __fastcall Home::processTryEnterPlayer(
        Home *const this,
        uint32_t uid,
        uint32_t gameserver_app_id,
        uint64_t load_rand)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const std::string *v10; // rax
  const char *v11; // r13
  __int64 v12; // rcx
  time_t BlockEndTime; // r13
  const std::string *v14; // rax
  const char *v15; // r13
  uint32_t HomeUid; // eax
  HomeBasicComp *BasicComp; // rax
  const std::string *v19; // rax
  const char *v20; // r13
  uint32_t v21; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  bool isHomeModuleClosed; // r13
  uint32_t v24; // eax
  uint32_t v25; // eax
  const std::string *v26; // rax
  __int64 v27; // r13
  uint32_t v28; // eax
  const std::string *v29; // rax
  const char *v30; // r13
  uint32_t v31; // eax
  int32_t retcode; // [rsp+24h] [rbp-ACh]
  uint32_t cur_module_id; // [rsp+28h] [rbp-A8h]
  uint32_t new_module_id; // [rsp+2Ch] [rbp-A4h]
  HomeSceneComp *scene_comp; // [rsp+30h] [rbp-A0h]
  HomeWorld *home_world; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-80h] BYREF
  char v41[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 13 load_rand:624";
  *(_QWORD *)(v4 + 16) = Home::processTryEnterPlayer;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  *(_QWORD *)(v4 + 32) = load_rand;
  retcode = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->load_rand_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->load_rand_ != *(_QWORD *)(v4 + 32) )
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "processTryEnterPlayer",
      631);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v40,
           (const char (*)[43])"[HOME] load_rand is differect. load_rand_:");
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &this->load_rand_);
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])off_25408420);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v40);
    retcode = 9701;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ == HOME_STATE_RUNING )
  {
    BlockEndTime = Home::getBlockEndTime(this);
    if ( BlockEndTime >= common::tools::TimeUtils::getNow() )
    {
      retcode = 9706;
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home.cpp",
        "processTryEnterPlayer",
        644);
      v14 = proto::Retcode_Name[abi:cxx11](RET_HOME_BLOCKED);
      v15 = (const char *)std::string::c_str(v14);
      HomeUid = Home::getHomeUid(this);
      common::milog::MiLogStream::operator()(&v40, "in block time. home_uid:%u retcode:%s", HomeUid, v15);
      common::milog::MiLogStream::~MiLogStream(&v40);
      goto LABEL_29;
    }
    if ( uid != Home::getHomeUid(this) )
    {
      BasicComp = Home::getBasicComp(this);
      if ( HomeBasicComp::getIsInEditMode(BasicComp) )
      {
        retcode = 9711;
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home.cpp",
          "processTryEnterPlayer",
          650);
        v19 = proto::Retcode_Name[abi:cxx11](RET_HOME_CANT_ENTER_BY_IN_EDIT_MODE);
        v20 = (const char *)std::string::c_str(v19);
        v21 = Home::getHomeUid(this);
        common::milog::MiLogStream::operator()(&v40, "in edit mode. home_uid:%u retcode:%s", v21, v20);
        common::milog::MiLogStream::~MiLogStream(&v40);
        goto LABEL_29;
      }
    }
    scene_comp = Home::getSceneComp(this);
    cur_module_id = Home::getCurModuleId(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
    isHomeModuleClosed = FeatureSwitchMgr::isHomeModuleClosed(&v22->feature_switch_mgr, cur_module_id);
    std::shared_ptr<Config>::~shared_ptr(&v39);
    if ( isHomeModuleClosed )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home.cpp",
        "processTryEnterPlayer",
        657);
      v24 = Home::getHomeUid(this);
      common::milog::MiLogStream::operator()(
        &v40,
        "[FEATURE_SWITCH] cur_module_id:%u is feature closed. home_uid:%u",
        cur_module_id,
        v24);
      common::milog::MiLogStream::~MiLogStream(&v40);
      new_module_id = HomeSceneComp::getOneNotClosedModuleId(scene_comp);
      if ( !new_module_id )
      {
        retcode = 142;
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home.cpp",
          "processTryEnterPlayer",
          669);
        v26 = proto::Retcode_Name[abi:cxx11](RET_FEATURE_CLOSED);
        v27 = std::string::c_str(v26);
        v28 = Home::getHomeUid(this);
        common::milog::MiLogStream::operator()(&v40, off_25408680, v28, v27);
        common::milog::MiLogStream::~MiLogStream(&v40);
        goto LABEL_29;
      }
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/home/home.cpp",
        "processTryEnterPlayer",
        662);
      v25 = Home::getHomeUid(this);
      common::milog::MiLogStream::operator()(
        &v40,
        "because cur_module is closed. home change cur_module from %u to %u, home_uid:%u",
        cur_module_id,
        new_module_id,
        v25);
      common::milog::MiLogStream::~MiLogStream(&v40);
      HomeSceneComp::changeCurModule(scene_comp, new_module_id);
    }
    home_world = HomeSceneComp::getHomeWorld(scene_comp);
    if ( !HomeWorld::canTryEnter(home_world, uid) )
    {
      retcode = 9705;
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home.cpp",
        "processTryEnterPlayer",
        677);
      v29 = proto::Retcode_Name[abi:cxx11](RET_HOME_PLAYER_FULL);
      v30 = (const char *)std::string::c_str(v29);
      v31 = Home::getHomeUid(this);
      common::milog::MiLogStream::operator()(
        &v40,
        "home_world.canTryEnter() return failed. home_uid:%u retcode:%s",
        v31,
        v30);
      common::milog::MiLogStream::~MiLogStream(&v40);
    }
    else
    {
      HomeWorld::allowEnter(home_world, uid);
    }
  }
  else
  {
    retcode = 9704;
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home.cpp",
      "processTryEnterPlayer",
      638);
    v10 = proto::Retcode_Name[abi:cxx11](RET_HOME_NOT_ONLINE);
    v11 = (const char *)std::string::c_str(v10);
    v12 = Home::getHomeUid(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v40,
      "state_:%u not runing. home_uid:%u retcode:%s",
      (unsigned int)this->state_,
      v12,
      v11);
    common::milog::MiLogStream::~MiLogStream(&v40);
  }
LABEL_29:
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  HomeHandler::sendServerTryEnterHomeRsp(retcode, this->home_uid_, uid, gameserver_app_id);
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 688: range 000000001457EEA6-000000001457F979
void __cdecl Home::changeEditMode(Home *const this, bool is_in_edit_mode, Player *player)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  const char *v7; // rax
  HomeBlueprintComp *BlueprintComp; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurSceneId; // edx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  bool *p_is_ip_port_log_report; // rax
  bool is_ip_port_log_report; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  uint32_t PlayerClientPort; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  uint32_t PlayerGatePort; // eax
  PlayerBasicComp *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  proto_log::FurnitureArrangementLog *v29; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  bool *v31; // rax
  bool v32; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  uint32_t v35; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r14
  uint32_t v38; // eax
  std::string v39; // [rsp+0h] [rbp-150h]
  Player *playera; // [rsp+8h] [rbp-148h]
  Player *playerb; // [rsp+8h] [rbp-148h]
  google::protobuf::uint32 home_level; // [rsp+20h] [rbp-130h]
  uint32_t cur_module_id; // [rsp+24h] [rbp-12Ch]
  google::protobuf::uint32 cur_module_comfort_value; // [rsp+28h] [rbp-128h]
  uint32_t edit_scene_id; // [rsp+2Ch] [rbp-124h]
  HomeBasicComp *basic_comp; // [rsp+30h] [rbp-120h]
  HomeSceneComp *scene_comp; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> v48; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v50; // [rsp+60h] [rbp-F0h] BYREF
  char v51[208]; // [rsp+80h] [rbp-D0h] BYREF

  *(&v39._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v39._M_string_length = (std::string::size_type)player;
  v39._anon_0._M_local_buf[4] = is_in_edit_mode;
  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 10 holder:742 64 16 11 log_ptr:744 96 24 10 notify:702";
  *(_QWORD *)(v3 + 16) = Home::changeEditMode;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  basic_comp = Home::getBasicComp(this);
  scene_comp = Home::getSceneComp(this);
  if ( is_in_edit_mode == HomeBasicComp::getIsInEditMode(basic_comp) )
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home.cpp",
      "changeEditMode",
      694);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v50,
           (const char (*)[25])"already is_in_edit_mode:");
    common::milog::MiLogStream::operator<<(v6, is_in_edit_mode);
    common::milog::MiLogStream::~MiLogStream(&v50);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home.cpp",
      "changeEditMode",
      698);
    if ( is_in_edit_mode )
      v7 = "enter";
    else
      v7 = "leave";
    if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(&v50, "home:%u %s edit_mode.", this->home_uid_, v7);
    common::milog::MiLogStream::~MiLogStream(&v50);
    proto::HomePreChangeEditModeNotify::HomePreChangeEditModeNotify((proto::HomePreChangeEditModeNotify *const)(v3 + 96));
    proto::HomePreChangeEditModeNotify::set_is_enter_edit_mode(
      (proto::HomePreChangeEditModeNotify *const)(v3 + 96),
      is_in_edit_mode);
    Home::notifyAllPlayer<proto::HomePreChangeEditModeNotify>(
      this,
      (const proto::HomePreChangeEditModeNotify *)(v3 + 96),
      0);
    HomeBasicComp::setIsInEditMode(basic_comp, is_in_edit_mode);
    HomeSceneComp::onEditModeChange(scene_comp);
    BlueprintComp = Home::getBlueprintComp(this);
    HomeBlueprintComp::onEditModeChange(BlueprintComp);
    Home::notifyHomeBasicInfo(this, (Player *)v39._M_string_length);
    Home::notifyHomeComfortInfo(this, (Player *)v39._M_string_length);
    home_level = Home::getLevel(this);
    cur_module_id = Home::getCurModuleId(this);
    cur_module_comfort_value = HomeSceneComp::getModuleComfortValue(scene_comp, cur_module_id);
    if ( is_in_edit_mode )
    {
      SceneComp = Player::getSceneComp((Player *const)v39._M_string_length);
      CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
      HomeBasicComp::setEditSceneId(basic_comp, CurSceneId);
      BasicComp = Player::getBasicComp((Player *const)v39._M_string_length);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v50, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCE9u, v39);
      std::string::~string(&v50);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeEnterEditMode>();
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto_log::PlayerLogBodyHomeEnterEditMode::set_home_level(v12, home_level);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto_log::PlayerLogBodyHomeEnterEditMode::set_module_id(v13, cur_module_id);
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto_log::PlayerLogBodyHomeEnterEditMode::set_comfort_value(v14, cur_module_comfort_value);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v48);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
      p_is_ip_port_log_report = &v15->is_ip_port_log_report;
      if ( *(_BYTE *)(((unsigned __int64)p_is_ip_port_log_report >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_ip_port_log_report & 7) >= *(_BYTE *)(((unsigned __int64)p_is_ip_port_log_report >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_ip_port_log_report);
      }
      is_ip_port_log_report = v15->is_ip_port_log_report;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v48);
      if ( is_ip_port_log_report )
      {
        v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::getPlayerClientIpForStatLog[abi:cxx11]((std::string *)&v50, playera);
        proto_log::PlayerLogBodyHomeEnterEditMode::set_client_ip(v18, (std::string *)&v50);
        std::string::~string(&v50);
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        PlayerClientPort = Player::getPlayerClientPort(playera);
        proto_log::PlayerLogBodyHomeEnterEditMode::set_client_port(v19, PlayerClientPort);
        v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::getPlayerGateIp[abi:cxx11]((std::string *)&v50, playera);
        proto_log::PlayerLogBodyHomeEnterEditMode::set_gate_ip(v21, (std::string *)&v50);
        std::string::~string(&v50);
        v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeEnterEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        PlayerGatePort = Player::getPlayerGatePort(playera);
        proto_log::PlayerLogBodyHomeEnterEditMode::set_gate_port(v22, PlayerGatePort);
      }
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeEnterEditMode,void>(
        &v48,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomeEnterEditMode> *)(v3 + 64));
      Player::printStatLog(playera, &v48, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v48);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyHomeEnterEditMode>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeEnterEditMode> *const)(v3 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    else
    {
      edit_scene_id = HomeBasicComp::getEditSceneId(basic_comp);
      v24 = Player::getBasicComp((Player *const)v39._M_string_length);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v50, v24);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCEAu, v39);
      std::string::~string(&v50);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeLeaveEditMode>();
      v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto_log::PlayerLogBodyHomeLeaveEditMode::set_home_level(v25, home_level);
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto_log::PlayerLogBodyHomeLeaveEditMode::set_module_id(v26, cur_module_id);
      v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      proto_log::PlayerLogBodyHomeLeaveEditMode::set_comfort_value(v27, cur_module_comfort_value);
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v29 = proto_log::PlayerLogBodyHomeLeaveEditMode::mutable_furniture_arrangement_log(v28);
      HomeSceneComp::makeFurnitureArrangementLog(scene_comp, cur_module_id, edit_scene_id, v29);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_body_ext_ptr);
      v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_body_ext_ptr);
      v31 = &v30->is_ip_port_log_report;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v31 & 7) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v31);
      }
      v32 = v30->is_ip_port_log_report;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_body_ext_ptr);
      if ( v32 )
      {
        v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::getPlayerClientIpForStatLog[abi:cxx11]((std::string *)&v50, playerb);
        proto_log::PlayerLogBodyHomeLeaveEditMode::set_client_ip(v33, (std::string *)&v50);
        std::string::~string(&v50);
        v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v35 = Player::getPlayerClientPort(playerb);
        proto_log::PlayerLogBodyHomeLeaveEditMode::set_client_port(v34, v35);
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Player::getPlayerGateIp[abi:cxx11]((std::string *)&v50, playerb);
        proto_log::PlayerLogBodyHomeLeaveEditMode::set_gate_ip(v36, (std::string *)&v50);
        std::string::~string(&v50);
        v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeLeaveEditMode,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v38 = Player::getPlayerGatePort(playerb);
        proto_log::PlayerLogBodyHomeLeaveEditMode::set_gate_port(v37, v38);
      }
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeLeaveEditMode,void>(
        &v48,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomeLeaveEditMode> *)(v3 + 64));
      Player::printStatLog(playerb, &v48, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v48);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      HomeBasicComp::setEditSceneId(basic_comp, 0);
      std::shared_ptr<proto_log::PlayerLogBodyHomeLeaveEditMode>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeLeaveEditMode> *const)(v3 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    proto::HomePreChangeEditModeNotify::~HomePreChangeEditModeNotify((proto::HomePreChangeEditModeNotify *const)(v3 + 96));
  }
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 765: range 000000001457F97A-000000001457F99B
uint32_t __cdecl Home::getLevel(Home *const this)
{
  HomeBasicComp *BasicComp; // rax

  BasicComp = Home::getBasicComp(this);
  return HomeBasicComp::getLevel(BasicComp);
};

// Line 770: range 000000001457F99C-000000001457F9BD
uint32_t __cdecl Home::getCurModuleId(Home *const this)
{
  HomeSceneComp *SceneComp; // rax

  SceneComp = Home::getSceneComp(this);
  return HomeSceneComp::getCurModuleId(SceneComp);
};

// Line 775: range 000000001457F9BE-000000001457FA06
HomeBasicComp *__cdecl Home::getBasicComp(Home *const this)
{
  HomeBasicComp *v1; // rbx
  std::shared_ptr<HomeBasicComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeBasicComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeBasicComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeBasicComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeBasicComp>::~shared_ptr(v3);
  return v1;
};

// Line 776: range 000000001457FA08-000000001457FA50
HomeSceneComp *__cdecl Home::getSceneComp(Home *const this)
{
  HomeSceneComp *v1; // rbx
  std::shared_ptr<HomeSceneComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeSceneComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeSceneComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeSceneComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeSceneComp>::~shared_ptr(v3);
  return v1;
};

// Line 777: range 000000001457FA52-000000001457FA9A
HomeOfflineMsgComp *__cdecl Home::getOfflineMsgComp(Home *const this)
{
  std::__shared_ptr_access<HomeOfflineMsgComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomeOfflineMsgComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeOfflineMsgComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeOfflineMsgComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeOfflineMsgComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeOfflineMsgComp>::~shared_ptr(v3);
  return v1;
};

// Line 778: range 000000001457FA9C-000000001457FAE4
HomeFurnitureMakeComp *__cdecl Home::getFurnitureMakeComp(Home *const this)
{
  std::__shared_ptr_access<HomeFurnitureMakeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomeFurnitureMakeComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeFurnitureMakeComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeFurnitureMakeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeFurnitureMakeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeFurnitureMakeComp>::~shared_ptr(v3);
  return v1;
};

// Line 779: range 000000001457FAE6-000000001457FB2E
HomeLimitedShopComp *__cdecl Home::getHomeLimitedShopComp(Home *const this)
{
  std::__shared_ptr_access<HomeLimitedShopComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomeLimitedShopComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeLimitedShopComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeLimitedShopComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeLimitedShopComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeLimitedShopComp>::~shared_ptr(v3);
  return v1;
};

// Line 780: range 000000001457FB30-000000001457FB78
HomePlantComp *__cdecl Home::getPlantComp(Home *const this)
{
  std::__shared_ptr_access<HomePlantComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomePlantComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomePlantComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomePlantComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomePlantComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomePlantComp>::~shared_ptr(v3);
  return v1;
};

// Line 781: range 000000001457FB7A-000000001457FBC2
HomeFishFarmingComp *__cdecl Home::getFishFarmingComp(Home *const this)
{
  std::__shared_ptr_access<HomeFishFarmingComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomeFishFarmingComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeFishFarmingComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeFishFarmingComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeFishFarmingComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeFishFarmingComp>::~shared_ptr(v3);
  return v1;
};

// Line 782: range 000000001457FBC4-000000001457FC0C
HomeCustomFurnitureComp *__cdecl Home::getCustomFurnitureComp(Home *const this)
{
  std::__shared_ptr_access<HomeCustomFurnitureComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomeCustomFurnitureComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeCustomFurnitureComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeCustomFurnitureComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeCustomFurnitureComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeCustomFurnitureComp>::~shared_ptr(v3);
  return v1;
};

// Line 783: range 000000001457FC0E-000000001457FC56
HomePictureFrameComp *__cdecl Home::getPictureFrameComp(Home *const this)
{
  std::__shared_ptr_access<HomePictureFrameComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomePictureFrameComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomePictureFrameComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomePictureFrameComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomePictureFrameComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomePictureFrameComp>::~shared_ptr(v3);
  return v1;
};

// Line 784: range 000000001457FC58-000000001457FCA0
HomeGroupRecordComp *__cdecl Home::getGroupRecordComp(Home *const this)
{
  std::__shared_ptr_access<HomeGroupRecordComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomeGroupRecordComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeGroupRecordComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeGroupRecordComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeGroupRecordComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeGroupRecordComp>::~shared_ptr(v3);
  return v1;
};

// Line 785: range 000000001457FCA2-000000001457FCEA
HomeBlueprintComp *__cdecl Home::getBlueprintComp(Home *const this)
{
  std::__shared_ptr_access<HomeBlueprintComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rbx
  std::shared_ptr<HomeBlueprintComp> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  EcsBase<Home,HomeCompBase,12u>::findComp<HomeBlueprintComp>((const EcsBase<Home,HomeCompBase,12> *const)v3);
  v1 = std::__shared_ptr_access<HomeBlueprintComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeBlueprintComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3);
  std::shared_ptr<HomeBlueprintComp>::~shared_ptr(v3);
  return v1;
};

// Line 789: range 000000001457FCEC-0000000014580174
int32_t __cdecl Home::onGetHomeDataRsp(Home *const this, const proto::GetHomeDataRsp *rsp_0)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  uint32_t v7; // ecx
  const proto::HomeData *v8; // rdx
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  HomeBasicComp *BasicComp; // rax
  common::milog::MiLogStream v19; // [rsp+10h] [rbp-80h] BYREF
  char v20[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 ret:800";
  *(_QWORD *)(v2 + 16) = Home::onGetHomeDataRsp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->state_ )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "onGetHomeDataRsp",
      792);
    v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v19,
           (const char (*)[22])"[HOME] invalid state:");
    common::milog::MiLogStream::operator<<<Home,(Home*)0>(v5, this);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = -1;
  }
  else
  {
    Home::setState(this, HOME_STATE_INIT);
    v7 = proto::GetHomeDataRsp::data_version(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->data_version_);
    }
    this->data_version_ = v7;
    v8 = proto::GetHomeDataRsp::home_data(rsp_0);
    *(_DWORD *)(v2 + 32) = Home::fromBin(this, v8);
    if ( *(_DWORD *)(v2 + 32) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "onGetHomeDataRsp",
        803);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v19, (const char (*)[8])"[HOME] ");
      v10 = common::milog::MiLogStream::operator<<<Home,(Home*)0>(v9, this);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v10,
              (const char (*)[22])" fromBin failed. ret:");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = *(_DWORD *)(v2 + 32);
    }
    else
    {
      *(_DWORD *)(v2 + 32) = Home::init(this);
      if ( *(_DWORD *)(v2 + 32) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home.cpp",
          "onGetHomeDataRsp",
          810);
        v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v19, (const char (*)[8])"[HOME] ");
        v13 = common::milog::MiLogStream::operator<<<Home,(Home*)0>(v12, this);
        v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v13,
                (const char (*)[19])" init failed. ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = *(_DWORD *)(v2 + 32);
      }
      else
      {
        *(_DWORD *)(v2 + 32) = Home::start(this);
        if ( *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home.cpp",
            "onGetHomeDataRsp",
            817);
          v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v19, (const char (*)[8])"[HOME] ");
          v16 = common::milog::MiLogStream::operator<<<Home,(Home*)0>(v15, this);
          v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v16,
                  (const char (*)[20])" start failed. ret:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v19);
          result = *(_DWORD *)(v2 + 32);
        }
        else
        {
          if ( proto::GetHomeDataRsp::is_new_home(rsp_0) )
          {
            BasicComp = Home::getBasicComp(this);
            HomeBasicComp::onNewHome(BasicComp);
          }
          result = 0;
        }
      }
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

// Line 830: range 0000000014580176-0000000014580188
int32_t __cdecl Home::onSaveHomeDataRsp(Home *const this, const proto::SaveHomeDataRsp *rsp_0)
{
  return 0;
};

// Line 835: range 000000001458018A-00000000145801E6
int32_t __cdecl Home::onServerTryEnterHomeReq(Home *const this, const proto::ServerTryEnterHomeReq *req)
{
  uint64_t rand; // r12
  uint32_t v3; // ebx
  uint32_t v4; // esi

  rand = proto::ServerTryEnterHomeReq::cur_load_rand(req);
  v3 = proto::ServerTryEnterHomeReq::source_app_id(req);
  v4 = proto::ServerTryEnterHomeReq::source_uid(req);
  Home::processTryEnterPlayer(this, v4, v3, rand);
  return 0;
};

// Line 841: range 00000000145801E8-00000000145804F9
int32_t __cdecl Home::onServerBlockHomeNotify(Home *const this, const proto::ServerBlockHomeNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  time_t v5; // r14
  common::milog::MiLogStream *v6; // r13
  int32_t v7; // edx
  google::protobuf::uint32 v8; // eax
  HomeSceneComp *SceneComp; // rax
  unsigned __int64 v10; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  HomeWorld *home_world; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 17 client_notify:856";
  *(_QWORD *)(v2 + 16) = Home::onServerBlockHomeNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( proto::ServerBlockHomeNotify::is_unlock(notify) )
  {
    Home::setBlockEndTime(this, 0);
  }
  else
  {
    v5 = proto::ServerBlockHomeNotify::end_time(notify);
    if ( v5 >= common::tools::TimeUtils::getNow() )
    {
      v7 = proto::ServerBlockHomeNotify::end_time(notify);
      Home::setBlockEndTime(this, v7);
      proto::HomeBlockNotify::HomeBlockNotify((proto::HomeBlockNotify *const)(v2 + 32));
      v8 = proto::ServerBlockHomeNotify::end_time(notify);
      proto::HomeBlockNotify::set_end_time((proto::HomeBlockNotify *const)(v2 + 32), v8);
      Home::notifyAllPlayer<proto::HomeBlockNotify>(this, (const proto::HomeBlockNotify *)(v2 + 32), 0);
      SceneComp = Home::getSceneComp(this);
      home_world = HomeSceneComp::getHomeWorld(SceneComp);
      if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (unsigned __int64)(home_world->_vptr_World + 15);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      (*(void (__fastcall **)(HomeWorld *, __int64, __int64))v10)(home_world, 3LL, 1LL);
      proto::HomeBlockNotify::~HomeBlockNotify((proto::HomeBlockNotify *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home.cpp",
        "onServerBlockHomeNotify",
        850);
      v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v14,
             (const char (*)[34])"[HOME] end time expired, end_time");
      val = proto::ServerBlockHomeNotify::end_time(notify);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  result = 0;
  if ( v15 == (char *)v2 )
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

// Line 868: range 00000000145804FA-0000000014580550
void __cdecl Home::notifyAllDataToPlayer(Home *const this, Player *player)
{
  HomeLimitedShopComp *HomeLimitedShopComp; // rdx

  Home::notifyHomeBasicInfo(this, player);
  Home::notifyHomeComfortInfo(this, player);
  HomeLimitedShopComp = Home::getHomeLimitedShopComp(this);
  HomeLimitedShopComp::notifyShopInfo(HomeLimitedShopComp, player);
};

// Line 875: range 0000000014580552-0000000014580824
void __cdecl Home::notifyHomeBasicInfo(Home *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::string *v5; // rdx
  uint32_t CurModuleId; // edx
  uint32_t CurRoomSceneId; // edx
  bool v8; // dl
  uint64_t Exp; // rdx
  uint32_t Level; // edx
  HomeLimitedShopComp *HomeLimitedShopComp; // r14
  proto::HomeLimitedShopInfo *v12; // rax
  const HomeBasicComp *basic_comp; // [rsp+10h] [rbp-B0h]
  const HomeSceneComp *scene_comp; // [rsp+18h] [rbp-A8h]
  HomeWorld *home_world; // [rsp+20h] [rbp-A0h]
  proto::HomeBasicInfo *basic_info; // [rsp+28h] [rbp-98h]
  char v17[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:880";
  *(_QWORD *)(v2 + 16) = Home::notifyHomeBasicInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  basic_comp = Home::getBasicComp(this);
  scene_comp = Home::getSceneComp(this);
  home_world = HomeSceneComp::getHomeWorld(scene_comp);
  proto::HomeBasicInfoNotify::HomeBasicInfoNotify((proto::HomeBasicInfoNotify *const)(v2 + 32));
  basic_info = proto::HomeBasicInfoNotify::mutable_basic_info((proto::HomeBasicInfoNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeBasicInfo::set_home_owner_uid(basic_info, this->home_uid_);
  v5 = HomeBasicComp::getOwnerNickName[abi:cxx11](basic_comp);
  proto::HomeBasicInfo::set_owner_nick_name(basic_info, v5);
  CurModuleId = HomeSceneComp::getCurModuleId(scene_comp);
  proto::HomeBasicInfo::set_cur_module_id(basic_info, CurModuleId);
  CurRoomSceneId = HomeWorld::getCurRoomSceneId(home_world);
  proto::HomeBasicInfo::set_cur_room_scene_id(basic_info, CurRoomSceneId);
  v8 = HomeBasicComp::getIsInEditMode(basic_comp);
  proto::HomeBasicInfo::set_is_in_edit_mode(basic_info, v8);
  Exp = HomeBasicComp::getExp(basic_comp);
  proto::HomeBasicInfo::set_exp(basic_info, Exp);
  Level = HomeBasicComp::getLevel(basic_comp);
  proto::HomeBasicInfo::set_level(basic_info, Level);
  HomeLimitedShopComp = Home::getHomeLimitedShopComp(this);
  v12 = proto::HomeBasicInfo::mutable_limited_shop_info(basic_info);
  HomeLimitedShopComp::fillShopInfo(HomeLimitedShopComp, v12);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  proto::HomeBasicInfoNotify::~HomeBasicInfoNotify((proto::HomeBasicInfoNotify *const)(v2 + 32));
  if ( v17 == (char *)v2 )
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

// Line 895: range 0000000014580826-0000000014580EDB
void __cdecl Home::notifyHomeComfortInfo(Home *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeModuleData *v5; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 WorldSceneId; // rcx
  HomeModuleData *v8; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  __int64 CurRoomSceneId; // rcx
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_begin_0; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end_0; // [rsp+28h] [rbp-138h] BYREF
  HomeSceneComp *scene_comp; // [rsp+30h] [rbp-130h]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+38h] [rbp-128h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v17; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+50h] [rbp-110h]
  proto::HomeModuleComfortInfo *module_proto; // [rsp+58h] [rbp-108h]
  HomeSceneData *world_scene_data_ptr; // [rsp+60h] [rbp-100h]
  HomeSceneData *cur_room_scene_data_ptr; // [rsp+68h] [rbp-F8h]
  std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+70h] [rbp-F0h]
  const std::pair<unsigned int const,HomeBlockData> *v24; // [rsp+78h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+80h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+88h] [rbp-D8h]
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:896";
  *(_QWORD *)(v2 + 16) = Home::notifyHomeComfortInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::HomeComfortInfoNotify::HomeComfortInfoNotify((proto::HomeComfortInfoNotify *const)(v2 + 48));
  scene_comp = Home::getSceneComp(this);
  __for_range = HomeSceneComp::getModuleDataMap(scene_comp);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(__for_range)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
      goto LABEL_30;
    }
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v17);
    module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v17);
    if ( std::operator==<HomeModuleData>(module_data_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home.cpp",
        "notifyHomeComfortInfo",
        902);
      if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v27,
        "[HOME] getModuleDataMap module_id:%u module_data_ptr is nullptr.",
        *module_id);
      common::milog::MiLogStream::~MiLogStream(&v27);
      goto LABEL_28;
    }
    module_proto = proto::HomeComfortInfoNotify::add_module_info_list((proto::HomeComfortInfoNotify *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeModuleComfortInfo::set_module_id(module_proto, *module_id);
    v5 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
    world_scene_data_ptr = HomeModuleData::findWorldHomeSceneData(v5);
    if ( !world_scene_data_ptr )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home.cpp",
        "notifyHomeComfortInfo",
        910);
      v6 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
      WorldSceneId = HomeModuleData::getWorldSceneId(v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v27,
        "[HOME] home_uid:%u world_scene_data_ptr is null. scene_id:%u",
        this->home_uid_,
        WorldSceneId);
      common::milog::MiLogStream::~MiLogStream(&v27);
      goto LABEL_30;
    }
    v8 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
    cur_room_scene_data_ptr = HomeModuleData::findRoomHomeSceneData(v8);
    if ( !cur_room_scene_data_ptr )
      break;
    __for_range_0 = &world_scene_data_ptr->arrangement_data.block_data_map;
    __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&world_scene_data_ptr->arrangement_data.block_data_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
      block_id = std::get<0ul,unsigned int const,HomeBlockData>(v24);
      block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v24);
      if ( *(_BYTE *)(((unsigned __int64)&block_data->comfort_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&block_data->comfort_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::HomeModuleComfortInfo::add_world_scene_block_comfort_value_list(module_proto, block_data->comfort_value);
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&cur_room_scene_data_ptr->arrangement_data.comfort_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cur_room_scene_data_ptr->arrangement_data.comfort_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeModuleComfortInfo::set_room_scene_comfort_value(
      module_proto,
      cur_room_scene_data_ptr->arrangement_data.comfort_value);
LABEL_28:
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home.cpp",
    "notifyHomeComfortInfo",
    916);
  v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
  CurRoomSceneId = HomeModuleData::getCurRoomSceneId(v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  common::milog::MiLogStream::operator()(
    &v27,
    "[HOME] home_uid:%u cur_room_scene_data_ptr is null. scene_id:%u",
    this->home_uid_,
    CurRoomSceneId);
  common::milog::MiLogStream::~MiLogStream(&v27);
LABEL_30:
  proto::HomeComfortInfoNotify::~HomeComfortInfoNotify((proto::HomeComfortInfoNotify *const)(v2 + 48));
  if ( v28 == (char *)v2 )
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
};

// Line 930: range 0000000014580EDC-0000000014581192
void __cdecl Home::notifyHomeSummonEventInfo(Home *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::pointer v5; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::pointer v6; // rax
  uint32_t cur_time; // [rsp+1Ch] [rbp-D4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  proto::HomeAvatarSummonEventInfo *info_notify; // [rsp+28h] [rbp-C8h]
  char v10[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 8 8 iter:935 80 48 16 event_notify:934";
  *(_QWORD *)(v2 + 16) = Home::notifyHomeSummonEventInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  cur_time = common::tools::TimeUtils::getNow();
  if ( !std::map<unsigned int,HomeEventInfo>::empty(&this->event_data_.summon_event_map) )
  {
    proto::HomeAvatarSummonAllEventNotify::HomeAvatarSummonAllEventNotify((proto::HomeAvatarSummonAllEventNotify *const)(v2 + 80));
    *(std::map<unsigned int,HomeEventInfo>::iterator *)(v2 + 48) = std::map<unsigned int,HomeEventInfo>::begin(&this->event_data_.summon_event_map);
    while ( 1 )
    {
      __y._M_node = std::map<unsigned int,HomeEventInfo>::end(&this->event_data_.summon_event_map)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Self *)(v2 + 48),
              &__y) )
        break;
      v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v5->second.event_over_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v5 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second.event_over_time >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( cur_time <= v5->second.event_over_time )
      {
        info_notify = proto::HomeAvatarSummonAllEventNotify::add_summon_event_list((proto::HomeAvatarSummonAllEventNotify *const)(v2 + 80));
        v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v2 + 48));
        HomeEventInfo::toClient(&v6->second, info_notify);
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v2 + 48));
      }
      else
      {
        *(std::map<unsigned int,HomeEventInfo>::iterator *)(v2 + 48) = std::map<unsigned int,HomeEventInfo>::erase[abi:cxx11](
                                                                         &this->event_data_.summon_event_map,
                                                                         *(std::map<unsigned int,HomeEventInfo>::iterator *)(v2 + 48));
      }
    }
    Player::sendProto(player, (const google::protobuf::Message *)(v2 + 80));
    proto::HomeAvatarSummonAllEventNotify::~HomeAvatarSummonAllEventNotify((proto::HomeAvatarSummonAllEventNotify *const)(v2 + 80));
  }
  if ( v10 == (char *)v2 )
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
};

// Line 953: range 0000000014581194-0000000014581243
bool __cdecl Home::isInUpdateArrangementCD(const Home *const this)
{
  time_t Now; // rbx
  uint32_t last_update_arrangement_time; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v4; // bl
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_arrangement_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  last_update_arrangement_time = this->last_update_arrangement_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  v4 = Now < last_update_arrangement_time
           + ConstValueExcelConfigMgr::getHomeFurnitureUpdateCD(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return v4;
};

// Line 958: range 0000000014581244-00000000145812FB
bool __cdecl Home::isInEditModeCD(const Home *const this)
{
  time_t Now; // rbx
  uint32_t last_edit_mode_time; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool v4; // bl
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_edit_mode_time_ >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  last_edit_mode_time = this->last_edit_mode_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  v4 = Now < last_edit_mode_time
           + ConstValueExcelConfigMgr::getHomeEditModeCD(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return v4;
};

// Line 963: range 00000000145812FC-000000001458151F
void __cdecl Home::updateRewardEventInfo(Home *const this, const proto::HomeAvatarRewardEventNotify *notify)
{
  bool is_event_trigger; // cl
  const proto::HomeAvatarRewardEventInfo *v3; // rax
  uint32_t v4; // edx
  const proto::HomeAvatarRewardEventInfo *v5; // rax
  uint32_t v6; // ecx
  const proto::HomeAvatarRewardEventInfo *v7; // rax
  uint32_t v8; // edx
  const proto::HomeAvatarRewardEventInfo *v9; // rax
  uint32_t v10; // edx
  const proto::HomeAvatarRewardEventInfo *v11; // rax
  uint32_t v12; // ecx

  is_event_trigger = proto::HomeAvatarRewardEventNotify::is_event_trigger(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.is_reward_event_trigger >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->event_data_.is_reward_event_trigger >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->event_data_.is_reward_event_trigger);
  }
  this->event_data_.is_reward_event_trigger = is_event_trigger;
  v3 = proto::HomeAvatarRewardEventNotify::reward_event(notify);
  v4 = proto::HomeAvatarRewardEventInfo::avatar_id(v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->event_data_);
  }
  this->event_data_.reward_event_avatar_id = v4;
  v5 = proto::HomeAvatarRewardEventNotify::reward_event(notify);
  v6 = proto::HomeAvatarRewardEventInfo::event_id(v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_data_.reward_event_id);
  }
  this->event_data_.reward_event_id = v6;
  v7 = proto::HomeAvatarRewardEventNotify::reward_event(notify);
  v8 = proto::HomeAvatarRewardEventInfo::random_position(v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_random_position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_random_position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->event_data_.reward_event_random_position);
  }
  this->event_data_.reward_event_random_position = v8;
  v9 = proto::HomeAvatarRewardEventNotify::reward_event(notify);
  v10 = proto::HomeAvatarRewardEventInfo::suite_id(v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->event_data_.reward_suite_id);
  }
  this->event_data_.reward_suite_id = v10;
  v11 = proto::HomeAvatarRewardEventNotify::reward_event(notify);
  v12 = proto::HomeAvatarRewardEventInfo::guid(v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_guid >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->event_data_.reward_guid);
  }
  this->event_data_.reward_guid = v12;
};

// Line 974: range 0000000014581520-0000000014581729
void __cdecl Home::fillHomeRewardEvent(Home *const this, proto::HomeAvatarRewardEventNotify *notify)
{
  proto::HomeAvatarRewardEventInfo *reward_info; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.is_reward_event_trigger >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->event_data_.is_reward_event_trigger >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->event_data_.is_reward_event_trigger);
  }
  proto::HomeAvatarRewardEventNotify::set_is_event_trigger(notify, this->event_data_.is_reward_event_trigger);
  reward_info = proto::HomeAvatarRewardEventNotify::mutable_reward_event(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_data_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarRewardEventInfo::set_avatar_id(reward_info, this->event_data_.reward_event_avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarRewardEventInfo::set_event_id(reward_info, this->event_data_.reward_event_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_suite_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_suite_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarRewardEventInfo::set_suite_id(reward_info, this->event_data_.reward_suite_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_random_position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_event_random_position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarRewardEventInfo::set_random_position(reward_info, this->event_data_.reward_event_random_position);
  if ( *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->event_data_.reward_guid >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeAvatarRewardEventInfo::set_guid(reward_info, this->event_data_.reward_guid);
};

// Line 986: range 000000001458172A-00000000145818B9
void __cdecl Home::notifyHomeRewardEventToAllPlayer(Home *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 56 17 reward_notify:987";
  *(_QWORD *)(v1 + 16) = Home::notifyHomeRewardEventToAllPlayer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::HomeAvatarRewardEventNotify::HomeAvatarRewardEventNotify((proto::HomeAvatarRewardEventNotify *const)(v1 + 32));
  Home::fillHomeRewardEvent(this, (proto::HomeAvatarRewardEventNotify *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Home::notifyAllPlayer<proto::HomeAvatarRewardEventNotify>(
    this,
    (const proto::HomeAvatarRewardEventNotify *)(v1 + 32),
    this->home_uid_);
  proto::HomeAvatarRewardEventNotify::~HomeAvatarRewardEventNotify((proto::HomeAvatarRewardEventNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 993: range 00000000145818BA-0000000014581A10
void __cdecl Home::notifyHomeRewardEvent(Home *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 10 notify:994";
  *(_QWORD *)(v2 + 16) = Home::notifyHomeRewardEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::HomeAvatarRewardEventNotify::HomeAvatarRewardEventNotify((proto::HomeAvatarRewardEventNotify *const)(v2 + 32));
  Home::fillHomeRewardEvent(this, (proto::HomeAvatarRewardEventNotify *)(v2 + 32));
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  proto::HomeAvatarRewardEventNotify::~HomeAvatarRewardEventNotify((proto::HomeAvatarRewardEventNotify *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1000: range 0000000014581A12-0000000014581F60
void __fastcall Home::updateSummonEventInfo(Home *const this, uint32_t event_id, uint32_t guid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::pointer v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::pointer v9; // rdx
  char v10; // al
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  uint32_t cur_time; // [rsp+1Ch] [rbp-104h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const data::HomeWorldEventExcelConfig *event_config_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-E0h] BYREF
  char v19[192]; // [rsp+60h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 event_id:999 64 8 9 iter:1018 96 24 15 event_info:1009";
  *(_QWORD *)(v3 + 16) = Home::updateSummonEventInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = event_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  event_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldEventExcelConfig(
                       &v6->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( event_config_ptr )
  {
    cur_time = common::tools::TimeUtils::getNow();
    *(_DWORD *)(v3 + 96) = 0;
    *(_DWORD *)(v3 + 100) = 0;
    *(_DWORD *)(v3 + 104) = 0;
    *(_DWORD *)(v3 + 108) = 0;
    *(_DWORD *)(v3 + 112) = 0;
    *(_DWORD *)(v3 + 116) = 0;
    *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event_config_ptr->avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 100) = event_config_ptr->avatar_id;
    if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event_config_ptr->furniture_suit_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 104) = event_config_ptr->furniture_suit_id;
    if ( *(_BYTE *)(((unsigned __int64)&event_config_ptr->lasttime >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event_config_ptr->lasttime >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 108) = event_config_ptr->lasttime + cur_time;
    *(_DWORD *)(v3 + 112) = common::tools::RandomUtils::rand<unsigned int>(1u, 0x64u);
    *(_DWORD *)(v3 + 116) = guid;
    *(std::map<unsigned int,HomeEventInfo>::iterator *)(v3 + 64) = std::map<unsigned int,HomeEventInfo>::begin(&this->event_data_.summon_event_map);
    while ( 1 )
    {
      __y._M_node = std::map<unsigned int,HomeEventInfo>::end(&this->event_data_.summon_event_map)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Self *)(v3 + 64),
              &__y) )
        break;
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v8->second.avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v8 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second.avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v8->second.avatar_id == *(_DWORD *)(v3 + 100) )
        goto LABEL_20;
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second.guid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v9 + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second.guid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v9->second.guid == *(_DWORD *)(v3 + 116) )
LABEL_20:
        v10 = 1;
      else
        v10 = 0;
      if ( v10 )
        *(std::map<unsigned int,HomeEventInfo>::iterator *)(v3 + 64) = std::map<unsigned int,HomeEventInfo>::erase[abi:cxx11](
                                                                         &this->event_data_.summon_event_map,
                                                                         *(std::map<unsigned int,HomeEventInfo>::iterator *)(v3 + 64));
      else
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v3 + 64));
    }
    v11 = (unsigned __int64)std::map<unsigned int,HomeEventInfo>::operator[](
                              &this->event_data_.summon_event_map,
                              (const std::map<unsigned int,HomeEventInfo>::key_type *)(v3 + 48));
    if ( (char)(v11 & 7) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) && *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v11 + 23) >> 3) + 0x7FFF8000) != 0
      && (char)((v11 + 23) & 7) >= *(_BYTE *)(((v11 + 23) >> 3) + 0x7FFF8000) )
    {
      v11 = __asan_report_store_n(v11, 24LL);
    }
    v12 = *(_QWORD *)(v3 + 104);
    *(_QWORD *)v11 = *(_QWORD *)(v3 + 96);
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)(v11 + 16) = *(_QWORD *)(v3 + 112);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home.cpp",
      "updateSummonEventInfo",
      1004);
    v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v18,
           (const char (*)[53])"findHomeWorldEventExcelConfig return null. event_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 1034: range 0000000014581F62-0000000014582034
void __fastcall Home::summonEventFinish(Home *const this, uint32_t event_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 event_id:1033";
  *(_QWORD *)(v2 + 16) = Home::summonEventFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = event_id;
  std::map<unsigned int,HomeEventInfo>::erase(
    &this->event_data_.summon_event_map,
    (const std::map<unsigned int,HomeEventInfo>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1039: range 0000000014582036-0000000014582062
void __cdecl Home::clearAllSummonEvent(Home *const this)
{
  std::map<unsigned int,HomeEventInfo>::clear(&this->event_data_.summon_event_map);
  Home::notifyHomeSummonEventToAllPlayer(this);
};

// Line 1045: range 0000000014582064-00000000145822F8
void __cdecl Home::notifyHomeSummonEventToAllPlayer(Home *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::pointer v4; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::pointer v5; // rax
  uint32_t cur_time; // [rsp+1Ch] [rbp-D4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  proto::HomeAvatarSummonEventInfo *info_notify; // [rsp+28h] [rbp-C8h]
  char v9[192]; // [rsp+30h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 8 9 iter:1048 80 48 17 event_notify:1047";
  *(_QWORD *)(v1 + 16) = Home::notifyHomeSummonEventToAllPlayer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  cur_time = common::tools::TimeUtils::getNow();
  proto::HomeAvatarSummonAllEventNotify::HomeAvatarSummonAllEventNotify((proto::HomeAvatarSummonAllEventNotify *const)(v1 + 80));
  *(std::map<unsigned int,HomeEventInfo>::iterator *)(v1 + 48) = std::map<unsigned int,HomeEventInfo>::begin(&this->event_data_.summon_event_map);
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,HomeEventInfo>::end(&this->event_data_.summon_event_map)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Self *)(v1 + 48),
            &__y) )
      break;
    v4 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&v4->second.event_over_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->second.event_over_time >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( cur_time <= v4->second.event_over_time )
    {
      info_notify = proto::HomeAvatarSummonAllEventNotify::add_summon_event_list((proto::HomeAvatarSummonAllEventNotify *const)(v1 + 80));
      v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v1 + 48));
      HomeEventInfo::toClient(&v5->second, info_notify);
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *const)(v1 + 48));
    }
    else
    {
      *(std::map<unsigned int,HomeEventInfo>::iterator *)(v1 + 48) = std::map<unsigned int,HomeEventInfo>::erase[abi:cxx11](
                                                                       &this->event_data_.summon_event_map,
                                                                       *(std::map<unsigned int,HomeEventInfo>::iterator *)(v1 + 48));
    }
  }
  Home::notifyAllPlayer<proto::HomeAvatarSummonAllEventNotify>(
    this,
    (const proto::HomeAvatarSummonAllEventNotify *)(v1 + 80),
    0);
  proto::HomeAvatarSummonAllEventNotify::~HomeAvatarSummonAllEventNotify((proto::HomeAvatarSummonAllEventNotify *const)(v1 + 80));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 1065: range 00000000145822FA-0000000014582467
void __cdecl Home::notifyHomeDataAftereSceneInitFinish(Home *const this, Player *player)
{
  uint32_t Uid; // ebx
  PlayerHomeComp *HomeComp; // rax
  HomeAvatar *HomeAvatar; // rax
  PlayerHomeComp *v5; // rax
  HomeAvatar *v6; // rax
  HomePlantComp *PlantComp; // rdx
  HomeFishFarmingComp *FishFarmingComp; // rdx
  HomeFishFarmingComp *v9; // rdx
  HomeSceneComp *SceneComp; // rdx
  HomeCustomFurnitureComp *CustomFurnitureComp; // rdx
  HomePictureFrameComp *PictureFrameComp; // rdx
  HomeBlueprintComp *BlueprintComp; // rdx

  Uid = Player::getUid(player);
  if ( Uid == Home::getHomeUid(this) )
  {
    HomeComp = Player::getHomeComp(player);
    HomeAvatar = PlayerHomeComp::getHomeAvatar(HomeComp);
    HomeAvatar::updateAllHomeAvatarCostumeInfo(HomeAvatar);
    v5 = Player::getHomeComp(player);
    v6 = PlayerHomeComp::getHomeAvatar(v5);
    HomeAvatar::notifyHomeAvatarEventData(v6);
  }
  else
  {
    Home::notifyHomeRewardEvent(this, player);
  }
  Home::notifyHomeSummonEventInfo(this, player);
  PlantComp = Home::getPlantComp(this);
  HomePlantComp::notifyCurFieldData(PlantComp, player);
  FishFarmingComp = Home::getFishFarmingComp(this);
  HomeFishFarmingComp::notifyCurFishFarmingData(FishFarmingComp, player);
  v9 = Home::getFishFarmingComp(this);
  HomeFishFarmingComp::notifyScenePointFishFarmingData(v9, player);
  SceneComp = Home::getSceneComp(this);
  HomeSceneComp::sendHomeMarkPointNotify(SceneComp, player);
  CustomFurnitureComp = Home::getCustomFurnitureComp(this);
  HomeCustomFurnitureComp::notifyCurCustomFurnitureData(CustomFurnitureComp, player);
  PictureFrameComp = Home::getPictureFrameComp(this);
  HomePictureFrameComp::notifyCurPictureFrameData(PictureFrameComp, player);
  BlueprintComp = Home::getBlueprintComp(this);
  HomeBlueprintComp::notifyBlueprintInfo(BlueprintComp, player);
};

// Line 1089: range 0000000014582468-0000000014582561
void __cdecl Home::resetByGm(Home *const this)
{
  HomeSceneComp *SceneComp; // rax
  unsigned __int64 HomeWorld; // rax
  unsigned __int64 v3; // rdx
  GameserverService *v4; // rax
  HomeMgr *p_home_mgr; // rcx

  SceneComp = Home::getSceneComp(this);
  HomeWorld = (unsigned __int64)HomeSceneComp::getHomeWorld(SceneComp);
  if ( *(_BYTE *)((HomeWorld >> 3) + 0x7FFF8000) )
    HomeWorld = __asan_report_load8();
  v3 = *(_QWORD *)HomeWorld + 120LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    HomeWorld = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, __int64, __int64))v3)(HomeWorld, 1LL, 1LL);
  Home::clearHome(this);
  Home::constructHome(this);
  Home::stop(this);
  v4 = ServiceBox::findService<GameserverService>();
  p_home_mgr = &GameserverService::getGameThreadLocal(v4)->home_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  HomeMgr::mvOnlineHomeToSaveWait(p_home_mgr, this->home_uid_);
};

// Line 1099: range 0000000014582562-00000000145826E8
void __cdecl Home::delSummonEventInfoByGm(Home *const this, uint32_t event_id)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::pointer v5; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Self __y; // [rsp+18h] [rbp-68h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Base_ptr)"1 32 8 9 iter:1100";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Base_ptr)Home::delSummonEventInfoByGm;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  v2[4]._M_node = std::map<unsigned int,HomeEventInfo>::begin(&this->event_data_.summon_event_map)._M_node;
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,HomeEventInfo>::end(&this->event_data_.summon_event_map)._M_node;
    if ( !std::operator!=(v2 + 4, &__y) )
      break;
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator->(v2 + 4);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( event_id == v5->first )
      v2[4]._M_node = std::map<unsigned int,HomeEventInfo>::erase[abi:cxx11](&this->event_data_.summon_event_map, v2[4])._M_node;
    else
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo>>::operator++(v2 + 4);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeEventInfo> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1114: range 00000000145826EA-00000000145826F4
void __cdecl Home::notifyHomeTime(const Home *const this)
{
  ;
};

// Line 1119: range 00000000145826F6-0000000014582737
void __cdecl Home::onPlayerEnter(Home *const this, Player *player)
{
  HomeBasicComp *BasicComp; // rax

  if ( Home::getPlayerCount(this) == 1 )
  {
    BasicComp = Home::getBasicComp(this);
    HomeBasicComp::tryStartGameTimer(BasicComp, 0);
  }
};

// Line 1127: range 0000000014582738-0000000014582746
void __cdecl Home::onPlayerLeave(Home *const this, Player *player)
{
  ;
};

// Line 1132: range 0000000014582748-0000000014582853
void __cdecl Home::onUpdateArrangementInfo(Home *const this, uint32_t module_id, uint32_t scene_id)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *v6; // [rsp+18h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+28h] [rbp-28h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+30h] [rbp-20h] BYREF
  EcsBase<Home,HomeCompBase,12>::Iterator __for_end; // [rsp+40h] [rbp-10h] BYREF

  EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
  EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)&__for_end);
  while ( EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v6 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v6);
    comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v6);
    v3 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    v4 = *(_QWORD *)v3 + 72LL;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v3 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD))v4)(v3, module_id, scene_id);
    EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
  }
};

// Line 1140: range 0000000014582854-0000000014582963
void __cdecl Home::onChangeRoomScene(
        Home *const this,
        uint32_t module_id,
        uint32_t old_room_scene_id,
        uint32_t new_room_scene_id)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  const EcsBase<Home,HomeCompBase,12>::CompBasePair *v8; // [rsp+28h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *comp_ptr; // [rsp+38h] [rbp-28h]
  EcsBase<Home,HomeCompBase,12>::Iterator __for_begin; // [rsp+40h] [rbp-20h] BYREF
  EcsBase<Home,HomeCompBase,12>::Iterator __for_end; // [rsp+50h] [rbp-10h] BYREF

  EcsBase<Home,HomeCompBase,12u>::begin((const EcsBase<Home,HomeCompBase,12> *const)&__for_begin);
  EcsBase<Home,HomeCompBase,12u>::end((const EcsBase<Home,HomeCompBase,12> *const)&__for_end);
  while ( EcsBase<Home,HomeCompBase,12u>::Iterator::operator!=(&__for_begin, &__for_end) )
  {
    v8 = EcsBase<Home,HomeCompBase,12u>::Iterator::operator*(&__for_begin);
    std::get<0ul,unsigned int,std::shared_ptr<HomeCompBase>>(v8);
    comp_ptr = (std::tuple_element<1,const std::pair<unsigned int,std::shared_ptr<HomeCompBase> > >::type *)std::get<1ul,unsigned int,std::shared_ptr<HomeCompBase>>(v8);
    v4 = (unsigned __int64)std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCompBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)comp_ptr);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    v5 = *(_QWORD *)v4 + 80LL;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, _QWORD))v5)(
      v4,
      module_id,
      old_room_scene_id,
      new_room_scene_id);
    EcsBase<Home,HomeCompBase,12u>::Iterator::operator++(&__for_begin);
  }
};
