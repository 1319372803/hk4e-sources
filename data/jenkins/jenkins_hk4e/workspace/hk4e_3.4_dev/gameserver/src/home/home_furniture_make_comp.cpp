// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_furniture_make_comp.cpp

// Line 29: range 00000000145857A8-000000001458585D
int32_t __cdecl HomeFurnitureMakeComp::fromBin(
        HomeFurnitureMakeComp *const this,
        const proto::HomeDataBin *home_data_bin)
{
  const proto::HomeFurnitureMakeBin *bin; // rax
  FurnitureMakeData *v3; // rax
  google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin> *__for_range; // [rsp+20h] [rbp-10h]
  const proto::FurnitureMakeSlotsBin *make_slot_data; // [rsp+28h] [rbp-8h]

  std::vector<FurnitureMakeData>::clear(&this->make_slot_copy_vec_);
  bin = proto::HomeDataBin::furniture_make_bin(home_data_bin);
  __for_range = proto::HomeFurnitureMakeBin::furniture_make_slots_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FurnitureMakeSlotsBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeSlotsBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    make_slot_data = google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeSlotsBin const>::operator*(&__for_begin);
    v3 = std::vector<FurnitureMakeData>::emplace_back<>(&this->make_slot_copy_vec_);
    FurnitureMakeData::fromBin(v3, make_slot_data);
    google::protobuf::internal::RepeatedPtrIterator<proto::FurnitureMakeSlotsBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 40: range 000000001458585E-0000000014585908
int32_t __cdecl HomeFurnitureMakeComp::toBin(HomeFurnitureMakeComp *const this, proto::HomeDataBin *home_data_bin)
{
  std::vector<FurnitureMakeData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  proto::HomeFurnitureMakeBin *furniture_make_bin; // [rsp+20h] [rbp-20h]
  std::vector<FurnitureMakeData> *__for_range; // [rsp+28h] [rbp-18h]
  const FurnitureMakeData *make_queue; // [rsp+30h] [rbp-10h]
  proto::FurnitureMakeSlotsBin *make_queue_bin; // [rsp+38h] [rbp-8h]

  furniture_make_bin = proto::HomeDataBin::mutable_furniture_make_bin(home_data_bin);
  __for_range = &this->make_slot_copy_vec_;
  __for_begin._M_current = std::vector<FurnitureMakeData>::begin(&this->make_slot_copy_vec_)._M_current;
  __for_end._M_current = std::vector<FurnitureMakeData>::end(&this->make_slot_copy_vec_)._M_current;
  while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
  {
    make_queue = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
    make_queue_bin = proto::HomeFurnitureMakeBin::add_furniture_make_slots_bin_list(furniture_make_bin);
    FurnitureMakeData::toBin(make_queue, make_queue_bin);
    __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 51: range 000000001458590A-0000000014585918
int32_t __cdecl HomeFurnitureMakeComp::start(HomeFurnitureMakeComp *const this)
{
  return 0;
};

// Line 56: range 000000001458591A-00000000145859B0
void __cdecl HomeFurnitureMakeComp::copy(
        HomeFurnitureMakeComp *const this,
        std::vector<FurnitureMakeData> *source_data_vec)
{
  std::vector<FurnitureMakeData>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<FurnitureMakeData> *__for_range; // [rsp+20h] [rbp-10h]
  FurnitureMakeData *data; // [rsp+28h] [rbp-8h]

  std::vector<FurnitureMakeData>::clear(&this->make_slot_copy_vec_);
  __for_range = source_data_vec;
  __for_begin._M_current = std::vector<FurnitureMakeData>::begin(source_data_vec)._M_current;
  __for_end._M_current = std::vector<FurnitureMakeData>::end(source_data_vec)._M_current;
  while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
  {
    data = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
    std::vector<FurnitureMakeData>::push_back(&this->make_slot_copy_vec_, data);
    __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
  }
};

// Line 66: range 00000000145859B2-0000000014585BF7
int32_t __cdecl HomeFurnitureMakeComp::checkCanAccelerate(HomeFurnitureMakeComp *const this)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rbx
  uint32_t Id; // eax
  common::milog::MiLogStream *v4; // rbx
  uint32_t AccelerateTime; // ecx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  int32_t retcode; // [rsp+20h] [rbp-70h]
  uint32_t now; // [rsp+24h] [rbp-6Ch]
  std::vector<FurnitureMakeData>::iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  std::vector<FurnitureMakeData> *__for_range; // [rsp+38h] [rbp-58h]
  FurnitureMakeData *data; // [rsp+40h] [rbp-50h]
  const data::FurnitureMakeExcelConfig *config_ptr; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  if ( std::vector<FurnitureMakeData>::empty(&this->make_slot_copy_vec_) )
    return 9760;
  now = common::tools::TimeUtils::getNow();
  retcode = 9756;
  __for_range = &this->make_slot_copy_vec_;
  __for_begin._M_current = std::vector<FurnitureMakeData>::begin(&this->make_slot_copy_vec_)._M_current;
  __for_end._M_current = std::vector<FurnitureMakeData>::end(&this->make_slot_copy_vec_)._M_current;
  while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
  {
    data = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
    if ( !FurnitureMakeData::isFinish(data, now) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v14);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.home_config_mgr;
      Id = FurnitureMakeData::getMakeId(data);
      config_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureMakeExcelConfig(p_home_config_mgr, Id);
      std::shared_ptr<Config>::~shared_ptr(&v14);
      if ( config_ptr )
      {
        AccelerateTime = FurnitureMakeData::getAccelerateTime(data);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( AccelerateTime < config_ptr->max_accelerate_time )
          return 0;
        retcode = 9759;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_furniture_make_comp.cpp",
          "checkCanAccelerate",
          84);
        v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v15,
               (const char (*)[23])"make id not in config:");
        val = FurnitureMakeData::getMakeId(data);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
    __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
  }
  return retcode;
};

// Line 100: range 0000000014585BF8-0000000014586269
// local variable allocation has failed, the output may be wrong!
void __cdecl HomeFurnitureMakeComp::setAcclerate(HomeFurnitureMakeComp *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  HomeWorldExcelConfigMgr *p_home_config_mgr; // r14
  uint32_t Id; // eax
  common::milog::MiLogStream *v9; // r14
  uint32_t AccelerateTime; // ecx
  uint32_t max_accelerate_time; // r14d
  uint32_t *v12; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t HomeUid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::string playera; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  uint32_t now; // [rsp+20h] [rbp-100h]
  uint32_t time; // [rsp+24h] [rbp-FCh]
  std::vector<FurnitureMakeData>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<FurnitureMakeData>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<FurnitureMakeData> *__for_range; // [rsp+38h] [rbp-E8h]
  FurnitureMakeData *data; // [rsp+40h] [rbp-E0h]
  const data::FurnitureMakeExcelConfig *config_ptr; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v26; // [rsp+60h] [rbp-C0h] BYREF
  std::string v27; // [rsp+70h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+90h] [rbp-90h] BYREF

  playera._M_string_length = (std::string::size_type)this;
  playera._M_dataplus._M_p = (std::string::pointer)player;
  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 10 holder:101 48 4 21 accelerate_second:102 64 16 11 log_ptr:127";
  *(_QWORD *)(v2 + 16) = HomeFurnitureMakeComp::setAcclerate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  BasicComp = Player::getBasicComp((Player *const)playera._M_dataplus._M_p);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v27, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xCB6u, playera);
  std::string::~string(&v27);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getFurnitureMakeHelpSecond(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
  now = common::tools::TimeUtils::getNow();
  __for_range = (std::vector<FurnitureMakeData> *)(playera._M_string_length + 32);
  __for_begin._M_current = std::vector<FurnitureMakeData>::begin((std::vector<FurnitureMakeData> *const)(playera._M_string_length + 32))._M_current;
  __for_end._M_current = std::vector<FurnitureMakeData>::end((std::vector<FurnitureMakeData> *const)(playera._M_string_length + 32))._M_current;
  while ( __gnu_cxx::operator!=<FurnitureMakeData *,std::vector<FurnitureMakeData>>(&__for_begin, &__for_end) )
  {
    data = __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator*(&__for_begin);
    if ( !FurnitureMakeData::isFinish(data, now) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.home_config_mgr;
      Id = FurnitureMakeData::getMakeId(data);
      config_ptr = data::HomeWorldExcelConfigMgrBase::findFurnitureMakeExcelConfig(p_home_config_mgr, Id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
      if ( config_ptr )
      {
        AccelerateTime = FurnitureMakeData::getAccelerateTime(data);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3)
                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( AccelerateTime < config_ptr->max_accelerate_time )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->max_accelerate_time >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          max_accelerate_time = config_ptr->max_accelerate_time;
          *((_DWORD *)&playera._anon_0._M_allocated_capacity + 3) = max_accelerate_time
                                                                  - FurnitureMakeData::getAccelerateTime(data);
          v12 = (uint32_t *)std::min<unsigned int>(
                              (const unsigned int *)(v2 + 48),
                              (const unsigned int *)&playera._anon_0._M_allocated_capacity + 3);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          time = *v12;
          FurnitureMakeData::accelerate(data, time);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyFurnitureMakeAccelerate>();
          v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((playera._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          HomeUid = Home::getHomeUid(*(const Home *const *)(playera._M_string_length + 24));
          proto_log::PlayerLogBodyFurnitureMakeAccelerate::set_uid(v13, HomeUid);
          v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->furniture_item_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::PlayerLogBodyFurnitureMakeAccelerate::set_furniture_id(v15, config_ptr->furniture_item_id);
          v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFurnitureMakeAccelerate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          proto_log::PlayerLogBodyFurnitureMakeAccelerate::set_accelerate_time(v16, time);
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v26, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate> *)(v2 + 64));
          Player::printStatLog((Player *const)playera._M_dataplus._M_p, &p_body_ptr, &v26, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v26);
          std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFurnitureMakeAccelerate> *const)(v2 + 64));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v27,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_furniture_make_comp.cpp",
          "setAcclerate",
          115);
        v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               (common::milog::MiLogStream *const)&v27,
               (const char (*)[23])"make id not in config:");
        *((_DWORD *)&playera._anon_0._M_allocated_capacity + 3) = FurnitureMakeData::getMakeId(data);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v9,
          (const unsigned int *)&playera._anon_0._M_allocated_capacity + 3);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
      }
    }
    __gnu_cxx::__normal_iterator<FurnitureMakeData *,std::vector<FurnitureMakeData>>::operator++(&__for_begin);
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
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
};
