// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_plant/home_plant_field.cpp

// Line 30: range 000000001687EAFC-000000001687ECEE
int32_t __cdecl HomeSubFieldData::fromData(
        HomeSubFieldData *const this,
        const HomeBlockSubFieldData *block_sub_field_data)
{
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( ((unsigned __int8)block_sub_field_data & 7) >= *(_BYTE *)(((unsigned __int64)block_sub_field_data >> 3)
                                                               + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)block_sub_field_data >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&block_sub_field_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)block_sub_field_data + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&block_sub_field_data->spawn_pos.z
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(block_sub_field_data, 12LL);
  }
  this->pos = block_sub_field_data->spawn_pos;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( (((unsigned __int8)block_sub_field_data + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&block_sub_field_data->spawn_rot >> 3)
                                                                      + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&block_sub_field_data->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&block_sub_field_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)block_sub_field_data + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&block_sub_field_data->spawn_rot.z
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&block_sub_field_data->spawn_rot, 12LL);
  }
  this->rot = block_sub_field_data->spawn_rot;
  return 0;
};

// Line 37: range 000000001687ECF0-000000001687F000
int32_t __cdecl HomeSubFieldData::toClient(
        const HomeSubFieldData *const this,
        proto::HomePlantSubFieldData *sub_field_proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t EntityId; // edx
  proto::HomePlantFieldStatus FieldStatus; // edx
  uint32_t end_time; // [rsp+18h] [rbp-88h]
  uint32_t need_time; // [rsp+1Ch] [rbp-84h]
  std::vector<std::weak_ptr<Gadget>>::const_iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::vector<std::weak_ptr<Gadget>>::const_iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  const std::vector<std::weak_ptr<Gadget>> *__for_range; // [rsp+30h] [rbp-70h]
  const std::weak_ptr<Gadget> *gadget_wtr; // [rsp+38h] [rbp-68h]
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 gadget_ptr:52";
  *(_QWORD *)(v2 + 16) = HomeSubFieldData::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomePlantSubFieldData::set_seed_id(sub_field_proto, this->seed_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->seed_id_ )
  {
    end_time = 0;
    need_time = HomeSubFieldData::getStatusNeedTime(this, HOME_FIELD_STATUE_GATHER);
    if ( need_time )
      end_time = common::tools::TimeUtils::getNow() + need_time;
    proto::HomePlantSubFieldData::set_end_time(sub_field_proto, end_time);
    __for_range = &this->gadget_vec_;
    __for_begin._M_current = std::vector<std::weak_ptr<Gadget>>::begin(&this->gadget_vec_)._M_current;
    __for_end._M_current = std::vector<std::weak_ptr<Gadget>>::end(&this->gadget_vec_)._M_current;
    while ( __gnu_cxx::operator!=<std::weak_ptr<Gadget> const*,std::vector<std::weak_ptr<Gadget>>>(
              &__for_begin,
              &__for_end) )
    {
      gadget_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Gadget> const*,std::vector<std::weak_ptr<Gadget>>>::operator*(&__for_begin);
      std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
      if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
      {
        v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        EntityId = Entity::getEntityId((const Entity *const)v6);
        proto::HomePlantSubFieldData::add_entity_id_list(sub_field_proto, EntityId);
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
      __gnu_cxx::__normal_iterator<std::weak_ptr<Gadget> const*,std::vector<std::weak_ptr<Gadget>>>::operator++(&__for_begin);
    }
    FieldStatus = HomeSubFieldData::getFieldStatus(this);
    proto::HomePlantSubFieldData::set_field_status(sub_field_proto, FieldStatus);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomePlantSubFieldData::set_home_gather_id(sub_field_proto, this->home_gather_id_);
    result = 0;
  }
  else
  {
    result = 0;
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

// Line 64: range 000000001687F002-000000001687F61D
int32_t __cdecl HomeSubFieldData::fromBin(
        HomeSubFieldData *const this,
        const proto::HomePlantSubFieldBin *sub_field_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // edx
  uint32_t v6; // ecx
  uint32_t update_time; // edx
  uint32_t v8; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  common::milog::MiLogStream *v11; // rdx
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rdx
  int32_t result; // eax
  const data::ConfigHomeGather *v15; // rax
  uint32_t v16; // ecx
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 21 home_gather_config:93";
  *(_QWORD *)(v2 + 16) = HomeSubFieldData::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<std::weak_ptr<Gadget>>::clear(&this->gadget_vec_);
  v5 = proto::HomePlantSubFieldBin::seed_id(sub_field_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->seed_id_ = v5;
  v6 = proto::HomePlantSubFieldBin::grow_time(sub_field_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grow_time_);
  }
  this->grow_time_ = v6;
  update_time = proto::HomePlantSubFieldBin::last_update_time(sub_field_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_time_);
  }
  this->last_update_time_ = update_time;
  v8 = proto::HomePlantSubFieldBin::home_gather_id(sub_field_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_gather_id_);
  }
  this->home_gather_id_ = v8;
  v9 = proto::HomePlantSubFieldBin::gather_index_list(sub_field_bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->bundle_index_set_, v9);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->seed_id_ && !std::set<unsigned int>::size(&this->bundle_index_set_) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_field.cpp",
      "fromBin",
      74);
    v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v19,
            (const char (*)[37])"[HOME_PLANT] bundle index set empty.");
    operator<<(v11, this);
    common::milog::MiLogStream::~MiLogStream(&v19);
    HomeSubFieldData::clear(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->seed_id_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !this->home_gather_id_ )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.home_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(
                           p_home_config_mgr,
                           this->seed_id_);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( !plant_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_plant/home_plant_field.cpp",
          "fromBin",
          84);
        v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v19,
                (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->seed_id_);
        common::milog::MiLogStream::~MiLogStream(&v19);
        HomeSubFieldData::clear(this);
        result = 0;
        goto LABEL_36;
      }
      if ( !std::vector<data::ConfigHomeGather>::size(&plant_config_ptr->config_home_gather) )
      {
        result = -1;
        goto LABEL_36;
      }
      v15 = std::vector<data::ConfigHomeGather>::operator[](&plant_config_ptr->config_home_gather, 0LL);
      data::ConfigHomeGather::ConfigHomeGather((data::ConfigHomeGather *const)(v2 + 32), v15);
      v16 = *(_DWORD *)(v2 + 40);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->home_gather_id_);
      }
      this->home_gather_id_ = v16;
      data::ConfigHomeGather::~ConfigHomeGather((data::ConfigHomeGather *const)(v2 + 32));
    }
  }
  result = 0;
LABEL_36:
  if ( v20 == (char *)v2 )
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

// Line 100: range 000000001687F61E-000000001687F781
int32_t __cdecl HomeSubFieldData::toBin(const HomeSubFieldData *const this, proto::HomePlantSubFieldBin *sub_field_bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomePlantSubFieldBin::set_seed_id(sub_field_bin, this->seed_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomePlantSubFieldBin::set_grow_time(sub_field_bin, this->grow_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomePlantSubFieldBin::set_last_update_time(sub_field_bin, this->last_update_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomePlantSubFieldBin::set_home_gather_id(sub_field_bin, this->home_gather_id_);
  v2 = proto::HomePlantSubFieldBin::mutable_gather_index_list(sub_field_bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->bundle_index_set_, v2);
  return 0;
};

// Line 111: range 000000001687F782-000000001687F8BC
int32_t __cdecl HomeSubFieldData::toSnapshotBin(
        const HomeSubFieldData *const this,
        proto::HomeSubFieldSnapShotBin *sub_field_bin)
{
  uint32_t end_time; // [rsp+18h] [rbp-8h]
  uint32_t need_time; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSubFieldSnapShotBin::set_seed_id(sub_field_bin, this->seed_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeSubFieldSnapShotBin::set_home_gather_id(sub_field_bin, this->home_gather_id_);
  end_time = 0;
  need_time = HomeSubFieldData::getStatusNeedTime(this, HOME_FIELD_STATUE_GATHER);
  if ( need_time )
    end_time = common::tools::TimeUtils::getNow() + need_time;
  proto::HomeSubFieldSnapShotBin::set_end_time(sub_field_bin, end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeSubFieldSnapShotBin::set_home_gather_id(sub_field_bin, this->home_gather_id_);
  return 0;
};

// Line 126: range 000000001687F8BE-000000001687FAA0
void __cdecl HomeSubFieldData::setPause(HomeSubFieldData *const this, bool is_pause, uint32_t now)
{
  uint32_t grow_time; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_pause_);
  }
  if ( is_pause != this->is_pause_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_pause_);
    }
    this->is_pause_ = is_pause;
    if ( !HomeSubFieldData::isEmpty(this) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( now >= this->last_update_time_ )
      {
        if ( is_pause )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          grow_time = this->grow_time_;
          if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          this->grow_time_ = grow_time + now - this->last_update_time_;
          this->last_update_time_ = now;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->last_update_time_);
          }
          this->last_update_time_ = now;
        }
      }
    }
  }
};

// Line 152: range 000000001687FAA2-00000000168801F9
void __fastcall HomeSubFieldData::seed(HomeSubFieldData *const this, uint32_t value, uint32_t gather_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // ecx
  uint32_t v15; // ecx
  uint32_t Now; // esi
  GatherExcelConfigMgr *p_gather_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  std::vector<data::PointInfo>::const_reference v19; // rdx
  size_t i; // [rsp+18h] [rbp-D8h]
  const data::ConfigHomeGather *gather_config_ptr; // [rsp+20h] [rbp-D0h]
  const data::GatherBundleExcelConfig *bundle_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 9 value:151 64 4 13 gather_id:151";
  *(_QWORD *)(v3 + 16) = HomeSubFieldData::seed;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = value;
  *(_DWORD *)(v3 + 64) = gather_id;
  HomeSubFieldData::clear(this);
  if ( *(_DWORD *)(v3 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    v8 = !HomeWorldExcelConfigMgr::isHomeGatherIdInSeedConfig(
            &v7->design_config.txt_config_mgr.home_config_mgr,
            *(_DWORD *)(v3 + 48),
            *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_plant/home_plant_field.cpp",
        "seed",
        161);
      v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v25,
             (const char (*)[55])"[HOME_PLANT]isHomeGatherIdInSeedConfig fail. seed_id: ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" gather_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      gather_config_ptr = HomeWorldExcelConfigMgr::findPlantHomeGatherConfig(
                            &v12->design_config.txt_config_mgr.home_config_mgr,
                            *(_DWORD *)(v3 + 48),
                            *(_DWORD *)(v3 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( gather_config_ptr )
      {
        v14 = *(_DWORD *)(v3 + 48);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(this);
        }
        this->seed_id_ = v14;
        v15 = *(_DWORD *)(v3 + 64);
        if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(&this->home_gather_id_);
        }
        this->home_gather_id_ = v15;
        Now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->last_update_time_);
        }
        this->last_update_time_ = Now;
        if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->bundle_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gather_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->bundle_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( gather_config_ptr->bundle_id )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v24);
          p_gather_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.gather_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->bundle_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gather_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->bundle_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          bundle_config_ptr = data::GatherExcelConfigMgrBase::findGatherBundleExcelConfig(
                                p_gather_config_mgr,
                                gather_config_ptr->bundle_id);
          std::shared_ptr<Config>::~shared_ptr(&v24);
          if ( bundle_config_ptr )
          {
            for ( i = 0LL; i < std::vector<data::PointInfo>::size(&bundle_config_ptr->points); ++i )
            {
              v19 = std::vector<data::PointInfo>::operator[](&bundle_config_ptr->points, i);
              if ( *(_BYTE *)(((unsigned __int64)&v19->point_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->point_type >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( v19->point_type )
                HomeSubFieldData::addBundleIndex(this, i);
            }
            HomeSubFieldData::checkAndSetChangeStatus(this);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v25,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/home/home_plant/home_plant_field.cpp",
              "seed",
              184);
            v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v25,
                    (const char (*)[58])"[HOME_PLANT]findGatherBundleExcelConfig fail. bundle id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &gather_config_ptr->bundle_id);
            common::milog::MiLogStream::~MiLogStream(&v25);
            HomeSubFieldData::addBundleIndex(this, 0);
          }
        }
        else
        {
          HomeSubFieldData::addBundleIndex(this, 0);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_plant/home_plant_field.cpp",
          "seed",
          167);
        v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                &v25,
                (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_field.cpp",
      "seed",
      156);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v25,
           (const char (*)[26])"[HOME_PLANT]seed id is 0.");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
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

// Line 203: range 00000000168801FA-000000001688056E
void __cdecl HomeSubFieldData::clearGadget(HomeSubFieldData *const this, const VisionContext *context)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t entity_id; // [rsp+1Ch] [rbp-C4h]
  std::vector<std::weak_ptr<Gadget>>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<std::weak_ptr<Gadget>>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<std::weak_ptr<Gadget>> *__for_range; // [rsp+30h] [rbp-B0h]
  std::weak_ptr<Gadget> *gadget_wtr; // [rsp+38h] [rbp-A8h]
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 14 gadget_ptr:206 64 16 13 scene_ptr:213 96 16 23 scene_home_comp_ptr:217";
  *(_QWORD *)(v2 + 16) = HomeSubFieldData::clearGadget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  __for_range = &this->gadget_vec_;
  __for_begin._M_current = std::vector<std::weak_ptr<Gadget>>::begin(&this->gadget_vec_)._M_current;
  __for_end._M_current = std::vector<std::weak_ptr<Gadget>>::end(&this->gadget_vec_)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Gadget> *,std::vector<std::weak_ptr<Gadget>>>(&__for_begin, &__for_end) )
  {
    gadget_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Gadget> *,std::vector<std::weak_ptr<Gadget>>>::operator*(&__for_begin);
    std::weak_ptr<Gadget>::lock((const std::weak_ptr<Gadget> *const)(v2 + 32));
    if ( std::operator!=<Gadget>((const std::shared_ptr<Gadget> *)(v2 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Creature::changeLifeState(v5, LIFE_DEAD, 0LL, 1);
      v6 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( Entity::isOnScene((const Entity *const)v6) )
      {
        v7 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        entity_id = Entity::getEntityId((const Entity *const)v7);
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        Entity::getScene((const Entity *const)(v2 + 64));
        v8 = (unsigned __int64)std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(_QWORD *)v8 + 128LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, const VisionContext *))v9)(v8, context);
        if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
        {
          std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          EcsBase<Scene,SceneCompBase,12u>::findComp<SceneHomeComp>((const EcsBase<Scene,SceneCompBase,12> *const)(v2 + 96));
          if ( std::operator!=<SceneHomeComp>((const std::shared_ptr<SceneHomeComp> *)(v2 + 96), 0LL) )
          {
            v10 = std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneHomeComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            SceneHomeComp::onRemoveGather(v10, entity_id);
          }
          std::shared_ptr<SceneHomeComp>::~shared_ptr((std::shared_ptr<SceneHomeComp> *const)(v2 + 96));
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
      }
    }
    std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::weak_ptr<Gadget> *,std::vector<std::weak_ptr<Gadget>>>::operator++(&__for_begin);
  }
  std::vector<std::weak_ptr<Gadget>>::clear(&this->gadget_vec_);
  if ( v16 == (char *)v2 )
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

// Line 230: range 0000000016880570-00000000168806E5
void __cdecl HomeSubFieldData::clear(HomeSubFieldData *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->seed_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grow_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grow_time_);
  }
  this->grow_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_update_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_update_time_);
  }
  this->last_update_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_gather_id_);
  }
  this->home_gather_id_ = 0;
  std::set<unsigned int>::clear(&this->bundle_index_set_);
  HomeSubFieldData::clearGadget(this, &VisionContext::miss_context);
  if ( *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->log_status_);
  }
  this->log_status_ = HOME_FIELD_STATUE_NONE;
};

// Line 241: range 00000000168806E6-00000000168808E6
proto::HomePlantFieldStatus __cdecl HomeSubFieldData::getFieldStatus(const HomeSubFieldData *const this)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rdx
  uint32_t grow_time; // [rsp+14h] [rbp-4Ch]
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( HomeSubFieldData::isEmpty(this) )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(p_home_config_mgr, this->seed_id_);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( plant_config_ptr )
  {
    grow_time = HomeSubFieldData::getGrowTime(this);
    if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)plant_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&plant_config_ptr->time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( grow_time < plant_config_ptr->time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->sprout_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&plant_config_ptr->sprout_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( grow_time < plant_config_ptr->sprout_time )
        return 1;
      else
        return 2;
    }
    else
    {
      return 3;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_field.cpp",
      "getFieldStatus",
      249);
    v3 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v7,
           (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->seed_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
};

// Line 265: range 00000000168808E8-0000000016880AFF
uint32_t __cdecl HomeSubFieldData::getStatusConfigTime(
        const HomeSubFieldData *const this,
        proto::HomePlantFieldStatus status)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rdx
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( HomeSubFieldData::isEmpty(this) )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(p_home_config_mgr, this->seed_id_);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( !plant_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_field.cpp",
      "getStatusConfigTime",
      273);
    v4 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v7,
           (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->seed_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
  if ( status == HOME_FIELD_STATUE_GATHER )
  {
    if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)plant_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&plant_config_ptr->time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return plant_config_ptr->time;
  }
  else
  {
    if ( status > HOME_FIELD_STATUE_GATHER )
      return 0;
    if ( status <= HOME_FIELD_STATUE_SEED )
    {
      if ( status >= HOME_FIELD_STATUE_NONE )
        return 0;
      return 0;
    }
    if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->sprout_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&plant_config_ptr->sprout_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return plant_config_ptr->sprout_time;
  }
};

// Line 301: range 0000000016880B00-0000000016880BB9
uint32_t __cdecl HomeSubFieldData::getStatusNeedTime(
        const HomeSubFieldData *const this,
        proto::HomePlantFieldStatus status)
{
  char v2; // al
  uint32_t grow_time; // [rsp+18h] [rbp-8h]
  uint32_t status_time; // [rsp+1Ch] [rbp-4h]

  if ( HomeSubFieldData::isEmpty(this) )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_pause_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_pause_);
  }
  if ( this->is_pause_ )
LABEL_5:
    v2 = 1;
  else
    v2 = 0;
  if ( v2 )
    return 0;
  grow_time = HomeSubFieldData::getGrowTime(this);
  status_time = HomeSubFieldData::getStatusConfigTime(this, status);
  if ( status_time && status_time > grow_time )
    return status_time - grow_time;
  else
    return 0;
};

// Line 316: range 0000000016880BBA-0000000016880BD7
proto::HomePlantFieldStatus __cdecl HomeSubFieldData::getNextStatus(proto::HomePlantFieldStatus status)
{
  if ( (unsigned int)status > HOME_FIELD_STATUE_SEED )
    return 3;
  else
    return 2;
};

// Line 332: range 0000000016880BD8-0000000016880C49
bool __cdecl HomeSubFieldData::checkAndSetChangeStatus(HomeSubFieldData *const this)
{
  proto::HomePlantFieldStatus now_status; // [rsp+1Ch] [rbp-4h]

  now_status = HomeSubFieldData::getFieldStatus(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->log_status_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( now_status == this->log_status_ )
    return 0;
  this->log_status_ = now_status;
  return 1;
};

// Line 343: range 0000000016880C4A-0000000016880C7A
uint32_t __cdecl HomeSubFieldData::getNextStatusTime(const HomeSubFieldData *const this)
{
  proto::HomePlantFieldStatus FieldStatus; // eax
  proto::HomePlantFieldStatus NextStatus; // edx

  FieldStatus = HomeSubFieldData::getFieldStatus(this);
  NextStatus = HomeSubFieldData::getNextStatus(FieldStatus);
  return HomeSubFieldData::getStatusNeedTime(this, NextStatus);
};

// Line 348: range 0000000016880C7C-0000000016880D90
void __fastcall HomeSubFieldData::removeBundleIndex(HomeSubFieldData *const this, uint32_t bundle_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  VisionContext context; // [rsp+14h] [rbp-6Ch] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 bundle_index:347";
  *(_QWORD *)(v2 + 16) = HomeSubFieldData::removeBundleIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = bundle_index;
  std::set<unsigned int>::erase(&this->bundle_index_set_, (const std::set<unsigned int>::key_type *)(v2 + 32));
  if ( std::set<unsigned int>::empty(&this->bundle_index_set_) )
  {
    VisionContext::VisionContext(&context, VISION_DIE);
    HomeSubFieldData::clearGadget(this, &context);
    HomeSubFieldData::clear(this);
  }
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 358: range 0000000016880D92-0000000016880E63
__int64 __fastcall HomeSubFieldData::addBundleIndex(HomeSubFieldData *const this, uint32_t bundle_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v5; // rax
  __int64 result; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 bundle_index:357";
  *(_QWORD *)(v2 + 16) = HomeSubFieldData::addBundleIndex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = bundle_index;
  v5 = std::set<unsigned int>::insert(&this->bundle_index_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  result = *(unsigned int *)&v5.second;
  if ( v7 == (char *)v2 )
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

// Line 363: range 0000000016880E64-0000000016880FED
int32_t __cdecl HomeSubFieldData::setHomeGatherId(HomeSubFieldData *const this, uint32_t home_gather_id)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  bool v3; // bl
  common::milog::MiLogStream *v4; // rdx
  std::shared_ptr<Config> v6; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v3 = !HomeWorldExcelConfigMgr::isHomeGatherIdInSeedConfig(p_home_config_mgr, this->seed_id_, home_gather_id);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( v3 )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_field.cpp",
      "setHomeGatherId",
      366);
    v4 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v7,
           (const char (*)[55])"[HOME_PLANT]isHomeGatherIdInSeedConfig fail. seed id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->seed_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->home_gather_id_);
    }
    this->home_gather_id_ = home_gather_id;
    return 0;
  }
};

// Line 374: range 0000000016880FEE-00000000168812FA
int32_t __cdecl HomeSubFieldData::getGatherOrBundleId(
        const HomeSubFieldData *const this,
        uint32_t *gather_id,
        uint32_t *bundle_id)
{
  uint32_t v3; // ecx
  const HomeWorldExcelConfigMgr *p_home_config_mgr; // rdi
  uint32_t home_gather_id; // edx
  common::milog::MiLogStream *v6; // rdx
  uint32_t v8; // ecx
  uint32_t v9; // ecx
  const data::ConfigHomeGather *gather_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(bundle_id);
  }
  *bundle_id = 0;
  v3 = *bundle_id;
  if ( *(_BYTE *)(((unsigned __int64)gather_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)gather_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(gather_id);
  }
  *gather_id = v3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
  {
    p_home_config_mgr = (const HomeWorldExcelConfigMgr *)&this->home_gather_id_;
    __asan_report_load4();
  }
  home_gather_id = this->home_gather_id_;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    p_home_config_mgr = (const HomeWorldExcelConfigMgr *)this;
    __asan_report_load4();
  }
  gather_config_ptr = HomeWorldExcelConfigMgr::findPlantHomeGatherConfig(
                        p_home_config_mgr,
                        this->seed_id_,
                        home_gather_id);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( gather_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_gather_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v8 = this->home_gather_id_;
    if ( *(_BYTE *)(((unsigned __int64)gather_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gather_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gather_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(gather_id);
    }
    *gather_id = v8;
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gather_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->bundle_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v9 = gather_config_ptr->bundle_id;
    if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(bundle_id);
    }
    *bundle_id = v9;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_field.cpp",
      "getGatherOrBundleId",
      379);
    v6 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v14,
           (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->seed_id_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
};

// Line 388: range 00000000168812FC-000000001688146E
uint32_t __cdecl HomeSubFieldData::getSproutGadgetId(const HomeSubFieldData *const this)
{
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rdx
  const data::HomeWorldPlantExcelConfig *plant_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.home_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  plant_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldPlantExcelConfig(p_home_config_mgr, this->seed_id_);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( plant_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&plant_config_ptr->sprout_gadget_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&plant_config_ptr->sprout_gadget_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return plant_config_ptr->sprout_gadget_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_plant/home_plant_field.cpp",
      "getSproutGadgetId",
      392);
    v2 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v6,
           (const char (*)[58])"[HOME_PLANT]findHomeWorldPlantExcelConfig fail. seed id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->seed_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 399: range 0000000016881470-00000000168815E9
int32_t __cdecl HomeFieldData::toClient(const HomeFieldData *const this, proto::HomePlantFieldData *field_proto)
{
  proto::Vector *v2; // rax
  const HomeSubFieldData *v3; // rdx
  size_t index; // [rsp+10h] [rbp-20h]
  proto::HomePlantSubFieldData *sub_field_proto; // [rsp+18h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomePlantFieldData::set_field_guid(field_proto, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomePlantFieldData::set_furniture_id(field_proto, this->furniture_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomePlantFieldData::set_scene_id(field_proto, this->scene_id);
  v2 = proto::HomePlantFieldData::mutable_spawn_pos(field_proto);
  Vector3::toClient(&this->pos, v2);
  for ( index = 0LL; index < std::vector<HomeSubFieldData>::size(&this->sub_field_vec); ++index )
  {
    sub_field_proto = proto::HomePlantFieldData::add_sub_field_list(field_proto);
    v3 = std::vector<HomeSubFieldData>::operator[](&this->sub_field_vec, index);
    HomeSubFieldData::toClient(v3, sub_field_proto);
  }
  return 0;
};

// Line 413: range 00000000168815EA-00000000168817EF
int32_t __cdecl HomeFieldData::fromBin(HomeFieldData *const this, const proto::HomePlantFieldBin *field_bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  uint32_t v4; // edx
  HomeSubFieldData *v5; // rax
  uint32_t index; // [rsp+1Ch] [rbp-34h]
  google::protobuf::RepeatedPtrField<proto::HomePlantSubFieldBin>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomePlantSubFieldBin>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomePlantSubFieldBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::HomePlantSubFieldBin *sub_field_bin; // [rsp+38h] [rbp-18h]

  std::vector<HomeSubFieldData>::clear(&this->sub_field_vec);
  v2 = proto::HomePlantFieldBin::guid(field_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = v2;
  v3 = proto::HomePlantFieldBin::furniture_id(field_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v3;
  v4 = proto::HomePlantFieldBin::scene_id(field_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = v4;
  __for_range = proto::HomePlantFieldBin::sub_field_bin_list(field_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomePlantSubFieldBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomePlantSubFieldBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomePlantSubFieldBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    sub_field_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomePlantSubFieldBin const>::operator*(&__for_begin);
    index = proto::HomePlantSubFieldBin::index(sub_field_bin);
    if ( index >= std::vector<HomeSubFieldData>::size(&this->sub_field_vec) )
      std::vector<HomeSubFieldData>::resize(&this->sub_field_vec, index + 1);
    if ( index < std::vector<HomeSubFieldData>::size(&this->sub_field_vec) )
    {
      v5 = std::vector<HomeSubFieldData>::operator[](&this->sub_field_vec, index);
      HomeSubFieldData::fromBin(v5, sub_field_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomePlantSubFieldBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 436: range 00000000168817F0-0000000016881981
int32_t __cdecl HomeFieldData::toBin(const HomeFieldData *const this, proto::HomePlantFieldBin *field_bin)
{
  const HomeSubFieldData *v2; // rax
  const HomeSubFieldData *v3; // rdx
  size_t index; // [rsp+10h] [rbp-10h]
  proto::HomePlantSubFieldBin *sub_field_bin; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomePlantFieldBin::set_guid(field_bin, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomePlantFieldBin::set_furniture_id(field_bin, this->furniture_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomePlantFieldBin::set_scene_id(field_bin, this->scene_id);
  for ( index = 0LL; index < std::vector<HomeSubFieldData>::size(&this->sub_field_vec); ++index )
  {
    v2 = std::vector<HomeSubFieldData>::operator[](&this->sub_field_vec, index);
    if ( !HomeSubFieldData::isEmpty(v2) )
    {
      sub_field_bin = proto::HomePlantFieldBin::add_sub_field_bin_list(field_bin);
      proto::HomePlantSubFieldBin::set_index(sub_field_bin, index);
      v3 = std::vector<HomeSubFieldData>::operator[](&this->sub_field_vec, index);
      HomeSubFieldData::toBin(v3, sub_field_bin);
    }
  }
  return 0;
};

// Line 453: range 0000000016881982-0000000016881ACF
int32_t __cdecl HomeFieldData::toSnapshotBin(const HomeFieldData *const this, proto::HomeFieldSnapShotBin *field_bin)
{
  proto::VectorBin *v2; // rax
  proto::HomeSubFieldSnapShotBin *v3; // rax
  std::vector<HomeSubFieldData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<HomeSubFieldData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<HomeSubFieldData> *__for_range; // [rsp+20h] [rbp-20h]
  const HomeSubFieldData *sub_field; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFieldSnapShotBin::set_field_guid(field_bin, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFieldSnapShotBin::set_furniture_id(field_bin, this->furniture_id);
  v2 = proto::HomeFieldSnapShotBin::mutable_spawn_pos(field_bin);
  Vector3::toBin(&this->pos, v2);
  __for_range = &this->sub_field_vec;
  __for_begin._M_current = std::vector<HomeSubFieldData>::begin(&this->sub_field_vec)._M_current;
  __for_end._M_current = std::vector<HomeSubFieldData>::end(&this->sub_field_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeSubFieldData const*,std::vector<HomeSubFieldData>>(&__for_begin, &__for_end) )
  {
    sub_field = __gnu_cxx::__normal_iterator<HomeSubFieldData const*,std::vector<HomeSubFieldData>>::operator*(&__for_begin);
    v3 = proto::HomeFieldSnapShotBin::add_sub_field_list(field_bin);
    HomeSubFieldData::toSnapshotBin(sub_field, v3);
    __gnu_cxx::__normal_iterator<HomeSubFieldData const*,std::vector<HomeSubFieldData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 465: range 0000000016881AD0-0000000016881B6B
int32_t __cdecl HomeFieldData::foreachSubField(
        HomeFieldData *const this,
        std::function<ForeachPolicy(HomeSubFieldData&)> *p_func)
{
  std::vector<HomeSubFieldData>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::vector<HomeSubFieldData> *__for_range; // [rsp+20h] [rbp-10h]
  HomeSubFieldData *sub_field_data; // [rsp+28h] [rbp-8h]

  __for_range = &this->sub_field_vec;
  __for_begin._M_current = std::vector<HomeSubFieldData>::begin(&this->sub_field_vec)._M_current;
  __for_end._M_current = std::vector<HomeSubFieldData>::end(&this->sub_field_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeSubFieldData *,std::vector<HomeSubFieldData>>(&__for_begin, &__for_end) )
  {
    sub_field_data = __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator*(&__for_begin);
    if ( std::function<ForeachPolicy ()(HomeSubFieldData &)>::operator()(p_func, sub_field_data) == FOREACH_BREAK )
      return -1;
    __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 477: range 0000000016881B6C-0000000016882336
int32_t __cdecl HomeFieldData::fromData(HomeFieldData *const this, const HomeBlockFieldData *block_field_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t guid; // ecx
  uint32_t furniture_id; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  std::vector<HomeBlockSubFieldData>::size_type v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  uint32_t v17; // ecx
  uint32_t v18; // esi
  int32_t result; // eax
  unsigned __int64 val; // [rsp+18h] [rbp-A8h] BYREF
  const HomeBlockSubFieldData *block_sub_field_data; // [rsp+20h] [rbp-A0h]
  HomeSubFieldData *sub_field_data; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 5 i:491";
  *(_QWORD *)(v2 + 16) = HomeFieldData::fromData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)block_field_data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)block_field_data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  guid = block_field_data->guid;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->guid = guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  furniture_id = this->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&block_field_data->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)block_field_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_field_data->furniture_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( furniture_id != block_field_data->furniture_id )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_plant/home_plant_field.cpp",
      "fromData",
      482);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v24,
           (const char (*)[39])"furniture id not match. furniture_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->furniture_id);
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" guid: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->guid);
    v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v10,
            (const char (*)[20])" new furniture id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &block_field_data->furniture_id);
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::vector<HomeSubFieldData>::clear(&this->sub_field_vec);
  }
  if ( *(_BYTE *)(((unsigned __int64)&block_field_data->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)block_field_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&block_field_data->furniture_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v12 = block_field_data->furniture_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v12;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&block_field_data->spawn_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&block_field_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)block_field_data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&block_field_data->spawn_pos.z
                                                                    + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load_n(&block_field_data->spawn_pos, 12LL);
  }
  this->pos = block_field_data->spawn_pos;
  if ( *(char *)(((unsigned __int64)&this->rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 59) & 7) >= *(_BYTE *)((((unsigned __int64)&this->rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rot, 12LL);
  }
  if ( (((unsigned __int8)block_field_data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&block_field_data->spawn_rot >> 3)
                                                                  + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&block_field_data->spawn_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&block_field_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)block_field_data + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&block_field_data->spawn_rot.z
                                                                    + 3) >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load_n(&block_field_data->spawn_rot, 12LL);
  }
  this->rot = block_field_data->spawn_rot;
  v13 = std::vector<HomeBlockSubFieldData>::size(&block_field_data->sub_field_vec);
  std::vector<HomeSubFieldData>::resize(&this->sub_field_vec, v13);
  for ( *(_QWORD *)(v2 + 32) = 0LL;
        std::vector<HomeBlockSubFieldData>::size(&block_field_data->sub_field_vec) > *(_QWORD *)(v2 + 32);
        ++*(_QWORD *)(v2 + 32) )
  {
    block_sub_field_data = std::vector<HomeBlockSubFieldData>::operator[](
                             &block_field_data->sub_field_vec,
                             *(_QWORD *)(v2 + 32));
    if ( std::vector<HomeSubFieldData>::size(&this->sub_field_vec) > *(_QWORD *)(v2 + 32) )
    {
      sub_field_data = std::vector<HomeSubFieldData>::operator[](&this->sub_field_vec, *(_QWORD *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v17 = this->guid;
      if ( *(_BYTE *)(((unsigned __int64)&sub_field_data->field_guid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sub_field_data + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sub_field_data->field_guid >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_store4(&sub_field_data->field_guid);
      }
      sub_field_data->field_guid = v17;
      v18 = *(_QWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&sub_field_data->index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&sub_field_data->index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&sub_field_data->index);
      }
      sub_field_data->index = v18;
      HomeSubFieldData::fromData(sub_field_data, block_sub_field_data);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_plant/home_plant_field.cpp",
        "fromData",
        497);
      v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v24,
              (const char (*)[31])"i >= sub_field_vec.size(). i: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v14,
              (const unsigned __int64 *)(v2 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" size: ");
      val = std::vector<HomeSubFieldData>::size(&this->sub_field_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
  }
  result = 0;
  if ( v25 == (char *)v2 )
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

// Line 509: range 0000000016882538-0000000016882C87
int32_t __cdecl HomeModuleFieldData::fromData(
        HomeModuleFieldData *const this,
        const HomeSceneArrangementData *data,
        std::vector<HomePlantCancelLogBody> *cancel_plant_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v6; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v7; // rdx
  HomeFieldData *p_second; // r14
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v9; // rdx
  int32_t result; // eax
  HomeModuleFieldData::fromData::<lambda(HomeSubFieldData&)> v11; // [rsp-20h] [rbp-200h]
  uint32_t scene_id; // [rsp+2Ch] [rbp-1B4h]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end_0; // [rsp+38h] [rbp-1A8h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+40h] [rbp-1A0h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+48h] [rbp-198h]
  const std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+50h] [rbp-190h]
  std::unordered_set<unsigned int> *__for_range_2; // [rsp+58h] [rbp-188h]
  std::unordered_set<unsigned int> *__for_range_3; // [rsp+60h] [rbp-180h]
  const std::pair<unsigned int const,HomeBlockData> *v21; // [rsp+68h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+70h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+78h] [rbp-168h]
  const std::vector<HomeBlockFieldData> *__for_range_1; // [rsp+80h] [rbp-160h]
  const HomeBlockFieldData *field; // [rsp+88h] [rbp-158h]
  HomeFieldData *field_data_0; // [rsp+90h] [rbp-150h]
  const std::pair<unsigned int const,HomeFieldData> *v27; // [rsp+98h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+A0h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+A8h] [rbp-138h]
  HomeModuleFieldData::fromData::<lambda(HomeSubFieldData&)> __f; // [rsp+B0h] [rbp-130h]
  std::function<ForeachPolicy(HomeSubFieldData&)> p_func; // [rsp+D0h] [rbp-110h] BYREF
  char v32[240]; // [rsp+F0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 8 guid:533 48 4 8 guid:553 64 8 8 iter:535 96 56 19 guid_delete_set:511";
  *(_QWORD *)(v3 + 16) = HomeModuleFieldData::fromData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  scene_id = data->scene_id;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v3 + 96));
  __for_range = &this->field_data_map;
  *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeFieldData>::begin(&this->field_data_map);
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v3 + 64),
            &__for_end) )
  {
    v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64));
    guid = std::get<0ul,unsigned int const,HomeFieldData>(v27);
    field_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *)std::get<1ul,unsigned int const,HomeFieldData>(v27);
    if ( *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( scene_id == field_data->scene_id )
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v3 + 96), guid);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64));
  }
  __for_range_0 = &data->block_data_map;
  __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&data->block_data_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end_0) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v21);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v21);
    __for_range_1 = &block_data->deploy_field_vec;
    *(std::vector<HomeBlockFieldData>::const_iterator *)(v3 + 64) = std::vector<HomeBlockFieldData>::begin(&block_data->deploy_field_vec);
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false>::__node_type *)std::vector<HomeBlockFieldData>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>(
              (const __gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *)&__for_end) )
    {
      field = __gnu_cxx::__normal_iterator<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *const)(v3 + 64));
      std::unordered_set<unsigned int>::erase((std::unordered_set<unsigned int> *const)(v3 + 96), &field->guid);
      field_data_0 = std::unordered_map<unsigned int,HomeFieldData>::operator[](&this->field_data_map, &field->guid);
      if ( *(_BYTE *)(((unsigned __int64)&field_data_0->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&field_data_0->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&field_data_0->scene_id);
      }
      field_data_0->scene_id = scene_id;
      HomeFieldData::fromData(field_data_0, field);
      __gnu_cxx::__normal_iterator<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>::operator++((__gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *const)(v3 + 64));
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
  }
  __for_range_2 = (std::unordered_set<unsigned int> *)(v3 + 96);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData> >::_Base_ptr)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 96))._M_cur;
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0) )
  {
    v6 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeFieldData>::find(
                                                                               &this->field_data_map,
                                                                               (const std::unordered_map<unsigned int,HomeFieldData>::key_type *)(v3 + 32));
    __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(&this->field_data_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v3 + 64),
           &__for_end) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->second.furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->second.furniture_id >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = v7->second.furniture_id;
      p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64))->second;
      __f.__cancel_plant_vec = cancel_plant_vec;
      __f.__guid = (uint32_t *)(v3 + 32);
      __f.__furniture_id = (uint32_t *)(v3 + 48);
      v11.__furniture_id = (uint32_t *)(v3 + 48);
      v11.__guid = (uint32_t *)(v3 + 32);
      v11.__cancel_plant_vec = cancel_plant_vec;
      std::function<ForeachPolicy ()(HomeSubFieldData &)>::function<HomeModuleFieldData::fromData(HomeSceneArrangementData const&,std::vector<HomePlantCancelLogBody> &)::{lambda(HomeSubFieldData &)#1},void,void>(
        &p_func,
        v11);
      HomeFieldData::foreachSubField(p_second, &p_func);
      std::function<ForeachPolicy ()(HomeSubFieldData &)>::~function(&p_func);
    }
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  __for_range_3 = (std::unordered_set<unsigned int> *)(v3 + 96);
  *(std::unordered_set<unsigned int>::iterator *)(v3 + 64) = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v3 + 96));
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_3)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v9 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *v9;
    std::unordered_map<unsigned int,HomeFieldData>::erase(
      &this->field_data_map,
      (const std::unordered_map<unsigned int,HomeFieldData>::key_type *)(v3 + 48));
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v3 + 64));
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 96));
  result = 0;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 539: range 0000000016882338-0000000016882537
ForeachPolicy __cdecl HomeModuleFieldData::fromData(HomeSceneArrangementData const&,std::vector<HomePlantCancelLogBody> &)::{lambda(HomeSubFieldData &)#1}::operator()(
        const HomeModuleFieldData::fromData::<lambda(HomeSubFieldData&)> *const __closure,
        HomeSubFieldData *sub_field)
{
  uint32_t *guid; // rdx
  uint32_t v3; // ecx
  uint32_t *furniture_id; // rdx
  uint32_t v5; // ecx
  uint32_t SeedId; // ecx
  std::vector<HomePlantCancelLogBody>::reference cancel_plant_body; // [rsp+18h] [rbp-8h]

  if ( !HomeSubFieldData::isEmpty(sub_field) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    cancel_plant_body = std::vector<HomePlantCancelLogBody>::emplace_back<>(__closure->__cancel_plant_vec);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__guid >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    guid = __closure->__guid;
    if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v3 = *guid;
    if ( *(_BYTE *)(((unsigned __int64)cancel_plant_body >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cancel_plant_body & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cancel_plant_body >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(cancel_plant_body);
    }
    cancel_plant_body->guid = v3;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__furniture_id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    furniture_id = __closure->__furniture_id;
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = *furniture_id;
    if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cancel_plant_body + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&cancel_plant_body->furniture_id);
    }
    cancel_plant_body->furniture_id = v5;
    SeedId = HomeSubFieldData::getSeedId(sub_field);
    if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cancel_plant_body + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&cancel_plant_body->seed_id);
    }
    cancel_plant_body->seed_id = SeedId;
  }
  return 0;
};

// Line 561: range 0000000016882C88-0000000016882E01
int32_t __cdecl HomeModuleFieldData::toSnapshotBin(
        const HomeModuleFieldData *const this,
        proto::HomeModuleSnapshotBin *bin)
{
  uint32_t scene_id; // ebx
  proto::HomeFieldSnapShotBin *v3; // rax
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::const_iterator __for_begin_0; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::const_iterator __for_end_0; // [rsp+28h] [rbp-48h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin> *__for_range; // [rsp+30h] [rbp-40h]
  proto::HomeSceneSnapshotBin *scene_snapshot_bin; // [rsp+38h] [rbp-38h]
  const std::unordered_map<unsigned int,HomeFieldData> *__for_range_0; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,HomeFieldData> *v12; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+58h] [rbp-18h]

  __for_range = proto::HomeModuleSnapshotBin::mutable_scene_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeSceneSnapshotBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    scene_snapshot_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator*(&__for_begin);
    __for_range_0 = &this->field_data_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(&this->field_data_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin_0, &__for_end_0) )
    {
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin_0);
      guid = std::get<0ul,unsigned int const,HomeFieldData>(v12);
      field_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFieldData> >::type *)std::get<1ul,unsigned int const,HomeFieldData>(v12);
      if ( *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&field_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      scene_id = field_data->scene_id;
      if ( scene_id == proto::HomeSceneSnapshotBin::scene_id(scene_snapshot_bin) )
      {
        v3 = proto::HomeSceneSnapshotBin::add_field_bin_list(scene_snapshot_bin);
        HomeFieldData::toSnapshotBin(field_data, v3);
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeSceneSnapshotBin>::operator++(&__for_begin);
  }
  return 0;
};

// Line 576: range 0000000016882E02-0000000016882F21
int32_t __cdecl HomeModuleFieldData::foreachSubField(
        HomeModuleFieldData *const this,
        std::function<ForeachPolicy(HomeSubFieldData&)> *p_func)
{
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_begin_0; // [rsp+20h] [rbp-40h] BYREF
  std::vector<HomeSubFieldData>::iterator __for_end_0; // [rsp+28h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+30h] [rbp-30h]
  std::pair<unsigned int const,HomeFieldData> *__in; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+48h] [rbp-18h]
  std::vector<HomeSubFieldData> *__for_range_0; // [rsp+50h] [rbp-10h]
  HomeSubFieldData *sub_field_data; // [rsp+58h] [rbp-8h]

  __for_range = &this->field_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(&this->field_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(&this->field_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFieldData>(__in);
    field_data = std::get<1ul,unsigned int const,HomeFieldData>(__in);
    __for_range_0 = &field_data->sub_field_vec;
    __for_begin_0._M_current = std::vector<HomeSubFieldData>::begin(&field_data->sub_field_vec)._M_current;
    __for_end_0._M_current = std::vector<HomeSubFieldData>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<HomeSubFieldData *,std::vector<HomeSubFieldData>>(&__for_begin_0, &__for_end_0) )
    {
      sub_field_data = __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator*(&__for_begin_0);
      if ( std::function<ForeachPolicy ()(HomeSubFieldData &)>::operator()(p_func, sub_field_data) == FOREACH_BREAK )
        return -1;
      __gnu_cxx::__normal_iterator<HomeSubFieldData *,std::vector<HomeSubFieldData>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 591: range 0000000016882F22-0000000016882FD9
int32_t __cdecl HomeModuleFieldData::foreachField(
        HomeModuleFieldData *const this,
        std::function<ForeachPolicy(HomeFieldData&)> *p_func)
{
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,HomeFieldData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,HomeFieldData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,HomeFieldData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,HomeFieldData> >::type *guid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,HomeFieldData> >::type *field_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->field_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFieldData>::begin(&this->field_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(&this->field_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFieldData>(__in);
    field_data = std::get<1ul,unsigned int const,HomeFieldData>(__in);
    if ( std::function<ForeachPolicy ()(HomeFieldData &)>::operator()(p_func, field_data) == FOREACH_BREAK )
      return -1;
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 603: range 00000000168831DC-000000001688353A
void __fastcall HomeModuleFieldData::deleteDataBySceneId(
        HomeModuleFieldData *const this,
        uint32_t scene_id,
        std::vector<HomePlantCancelLogBody> *cancel_plant_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v7; // rdx
  HomeFieldData *p_second; // r14
  common::milog::MiLogStream *v9; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  HomeModuleFieldData::deleteDataBySceneId::<lambda(HomeSubFieldData&)> v13; // [rsp-20h] [rbp-140h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  HomeModuleFieldData::deleteDataBySceneId::<lambda(HomeSubFieldData&)> __f; // [rsp+30h] [rbp-F0h]
  std::function<ForeachPolicy(HomeSubFieldData&)> p_func; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 16 furniture_id:608 48 4 12 scene_id:602 64 8 8 iter:604";
  *(_QWORD *)(v3 + 16) = HomeModuleFieldData::deleteDataBySceneId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = scene_id;
  *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeFieldData>::begin(&this->field_data_map);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,HomeFieldData>::end(&this->field_data_map)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,HomeFieldData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFieldData>,false> *)(v3 + 64),
            &__y) )
      break;
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second.scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second.scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v6->second.scene_id == *(_DWORD *)(v3 + 48) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->second.furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v7 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->second.furniture_id >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 32) = v7->second.furniture_id;
      p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64))->second;
      __f.__cancel_plant_vec = cancel_plant_vec;
      __f.__iter = (std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *)(v3 + 64);
      __f.__furniture_id = (uint32_t *)(v3 + 32);
      v13.__furniture_id = (uint32_t *)(v3 + 32);
      v13.__iter = (std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *)(v3 + 64);
      v13.__cancel_plant_vec = cancel_plant_vec;
      std::function<ForeachPolicy ()(HomeSubFieldData &)>::function<HomeModuleFieldData::deleteDataBySceneId(unsigned int,std::vector<HomePlantCancelLogBody> &)::{lambda(HomeSubFieldData &)#1},void,void>(
        &p_func,
        v13);
      HomeFieldData::foreachSubField(p_second, &p_func);
      std::function<ForeachPolicy ()(HomeSubFieldData &)>::~function(&p_func);
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_plant/home_plant_field.cpp",
        "deleteDataBySceneId",
        620);
      v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v18,
             (const char (*)[39])"[HOME_PLANT] delete field data, guid: ");
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64));
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &v10->first);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,HomeFieldData>::erase(
                                                                                 &this->field_data_map,
                                                                                 *(std::unordered_map<unsigned int,HomeFieldData>::iterator *)(v3 + 64));
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator++(
        (std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false> *const)(v3 + 64),
        0);
    }
  }
  if ( v19 == (char *)v3 )
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

// Line 609: range 0000000016882FDA-00000000168831DB
ForeachPolicy __cdecl HomeModuleFieldData::deleteDataBySceneId(unsigned int,std::vector<HomePlantCancelLogBody> &)::{lambda(HomeSubFieldData &)#1}::operator()(
        const HomeModuleFieldData::deleteDataBySceneId::<lambda(HomeSubFieldData&)> *const __closure,
        HomeSubFieldData *sub_field)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::pointer v2; // rax
  uint32_t first; // ecx
  uint32_t *furniture_id; // rdx
  uint32_t v5; // ecx
  uint32_t SeedId; // ecx
  std::vector<HomePlantCancelLogBody>::reference cancel_plant_body; // [rsp+18h] [rbp-8h]

  if ( !HomeSubFieldData::isEmpty(sub_field) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    cancel_plant_body = std::vector<HomePlantCancelLogBody>::emplace_back<>(__closure->__cancel_plant_vec);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__iter >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFieldData>,false,false>::operator->(__closure->__iter);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    first = v2->first;
    if ( *(_BYTE *)(((unsigned __int64)cancel_plant_body >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cancel_plant_body & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cancel_plant_body >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(cancel_plant_body);
    }
    cancel_plant_body->guid = first;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__furniture_id >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    furniture_id = __closure->__furniture_id;
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = *furniture_id;
    if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cancel_plant_body + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->furniture_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&cancel_plant_body->furniture_id);
    }
    cancel_plant_body->furniture_id = v5;
    SeedId = HomeSubFieldData::getSeedId(sub_field);
    if ( *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cancel_plant_body + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cancel_plant_body->seed_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_store4(&cancel_plant_body->seed_id);
    }
    cancel_plant_body->seed_id = SeedId;
  }
  return 0;
};

// Line 633: range 000000001688353B-0000000016883742
common::milog::MiLogStream *__cdecl operator<<(
        common::milog::MiLogStream *stream,
        const HomeSubFieldData *sub_field_data)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  unsigned int val[5]; // [rsp+1Ch] [rbp-14h] BYREF

  v2 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         stream,
         (const char (*)[28])" [HOME_PLANT]subfield data ");
  v3 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v2, (const char (*)[11])" seed_id: ");
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &sub_field_data->seed_id_);
  v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v4, (const char (*)[14])" field_guid: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &sub_field_data->field_guid);
  v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" index: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &sub_field_data->index);
  v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" home_gather_id: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &sub_field_data->home_gather_id_);
  v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])" bundle index set: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, &sub_field_data->bundle_index_set_);
  v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v12, (const char (*)[20])" last_update_time: ");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &sub_field_data->last_update_time_);
  v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" log_status: ");
  v16 = common::milog::MiLogStream::operator<<<proto::HomePlantFieldStatus,(proto::HomePlantFieldStatus*)0>(
          v15,
          &sub_field_data->log_status_);
  v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" grow_time: ");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &sub_field_data->grow_time_);
  v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v18, (const char (*)[20])" last_update_time: ");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &sub_field_data->last_update_time_);
  v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" is_pause_: ");
  if ( *(_BYTE *)(((unsigned __int64)&sub_field_data->is_pause_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)sub_field_data + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&sub_field_data->is_pause_ >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load1(&sub_field_data->is_pause_);
  }
  v22 = common::milog::MiLogStream::operator<<(v21, sub_field_data->is_pause_);
  v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" now time: ");
  val[0] = HomeSubFieldData::getGrowTime(sub_field_data);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, val);
  return stream;
};
