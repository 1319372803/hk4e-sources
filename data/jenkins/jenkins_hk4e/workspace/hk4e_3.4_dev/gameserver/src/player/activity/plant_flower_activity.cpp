// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/plant_flower_activity.cpp

// Line 33: range 0000000016C07D86-0000000016C07DC6
int32_t __cdecl RecvFlowerRecord::fromBin(
        RecvFlowerRecord *const this,
        const proto::PlantFlowerRecvFlowerDataBin *bin_data)
{
  const google::protobuf::Map<unsigned int,unsigned int> *v2; // rdx

  std::map<unsigned int,unsigned int>::clear(&this->flower_num_map);
  v2 = proto::PlantFlowerRecvFlowerDataBin::flower_num_map(bin_data);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->flower_num_map,
    v2);
  return 0;
};

// Line 40: range 0000000016C07DC8-0000000016C07DFC
int32_t __cdecl RecvFlowerRecord::toBin(
        const RecvFlowerRecord *const this,
        proto::PlantFlowerRecvFlowerDataBin *bin_data)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rdx

  v2 = proto::PlantFlowerRecvFlowerDataBin::mutable_flower_num_map(bin_data);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->flower_num_map,
    v2);
  return 0;
};

// Line 46: range 0000000016C07DFE-0000000016C07F5C
void __cdecl RecvFlowerRecord::updateByGive(
        RecvFlowerRecord *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *give_flower_num_map)
{
  std::map<unsigned int,unsigned int>::mapped_type *v2; // rax
  int v3; // esi
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_flower_id; // [rsp+18h] [rbp-48h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-20h] BYREF

  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_flower_num_map);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_flower_num_map);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_flower_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&p_flower_id->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_flower_id->second >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( p_flower_id->second )
    {
      v2 = std::map<unsigned int,unsigned int>::operator[](
             &this->flower_num_map,
             (const std::map<unsigned int,unsigned int>::key_type *)p_flower_id);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v3 = *v2;
      if ( *(_BYTE *)(((unsigned __int64)&p_flower_id->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_flower_id->second >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v2 = v3 + p_flower_id->second;
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
};

// Line 58: range 0000000016C07F5E-0000000016C07F8F
void __cdecl RecvFlowerRecord::updateByAccept(
        RecvFlowerRecord *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *unaccept_flower_num_map)
{
  std::map<unsigned int,unsigned int>::clear(&this->flower_num_map);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->flower_num_map,
    unaccept_flower_num_map);
};

// Line 64: range 0000000016C07F90-0000000016C08B42
int32_t __cdecl PlantFlowerActivity::fromScheduleBin(
        PlantFlowerActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // edx
  uint32_t awarded_day_index; // ecx
  bool is_content_closed; // dl
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  RecvFlowerRecord *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const google::protobuf::Map<unsigned int,unsigned int> *v17; // r14
  std::unordered_map<unsigned int,unsigned int> *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  const google::protobuf::Map<unsigned int,unsigned int> *v22; // r14
  std::unordered_map<unsigned int,unsigned int> *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::vector<unsigned int> *v27; // r14
  const google::protobuf::RepeatedField<unsigned int> *v28; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::PlantFlowerRecvFlowerDataBin>::const_iterator __for_begin; // [rsp+10h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlantFlowerRecvFlowerDataBin>::const_iterator __for_end; // [rsp+18h] [rbp-138h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-130h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+28h] [rbp-128h]
  const proto::PlantFlowerScheduleBin *plant_flower_bin; // [rsp+30h] [rbp-120h]
  const google::protobuf::RepeatedPtrField<proto::PlantFlowerRecvFlowerDataBin> *__for_range; // [rsp+38h] [rbp-118h]
  const google::protobuf::RepeatedPtrField<proto::PlantFlowerShelfDataBin> *__for_range_0; // [rsp+40h] [rbp-110h]
  const proto::HomeUsedActivityItemDataBin *home_used_flower_data_bin; // [rsp+48h] [rbp-108h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleUsedActivityItemDataBin> *__for_range_1; // [rsp+50h] [rbp-100h]
  const google::protobuf::RepeatedPtrField<proto::PlantFlowerSeedPlantDataBin> *__for_range_2; // [rsp+58h] [rbp-F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_3; // [rsp+60h] [rbp-F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+68h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_4; // [rsp+70h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+78h] [rbp-D8h]
  const proto::PlantFlowerSeedPlantDataBin *seed_plant_data; // [rsp+80h] [rbp-D0h]
  const proto::HomeModuleUsedActivityItemDataBin *module_used_item_bin; // [rsp+88h] [rbp-C8h]
  const proto::PlantFlowerShelfDataBin *flower_shelf_data_bin; // [rsp+90h] [rbp-C0h]
  const proto::PlantFlowerRecvFlowerDataBin *recv_flower_data; // [rsp+98h] [rbp-B8h]
  common::milog::MiLogStream v48; // [rsp+A0h] [rbp-B0h] BYREF
  char v49[144]; // [rsp+C0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 seed_id:114 64 4 15 flower_type:128";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  plant_flower_bin = proto::ActivityScheduleBin::plant_flower_bin(bin);
  v5 = proto::PlantFlowerScheduleBin::day_index(plant_flower_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = v5;
  awarded_day_index = proto::PlantFlowerScheduleBin::last_awarded_day_index(plant_flower_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_awarded_day_index_);
  }
  this->last_awarded_day_index_ = awarded_day_index;
  is_content_closed = proto::PlantFlowerScheduleBin::is_content_closed(plant_flower_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  v8 = proto::PlantFlowerScheduleBin::seed_reward_list(plant_flower_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v8, &this->seed_reward_vec_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->wish_flower_num_map_);
  v9 = proto::PlantFlowerScheduleBin::wish_flower_num_map(plant_flower_bin);
  common::tools::MiscUtils::fromProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->wish_flower_num_map_,
    v9);
  std::unordered_map<unsigned int,RecvFlowerRecord>::clear(&this->recv_flower_record_map_);
  __for_range = proto::PlantFlowerScheduleBin::recv_flower_data_list(plant_flower_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlantFlowerRecvFlowerDataBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlantFlowerRecvFlowerDataBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerRecvFlowerDataBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    recv_flower_data = google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerRecvFlowerDataBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::PlantFlowerRecvFlowerDataBin::uid(recv_flower_data);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,RecvFlowerRecord>,unsigned int>(
           &this->recv_flower_record_map_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/plant_flower_activity.cpp",
        "fromScheduleBin",
        80);
      v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v48,
              (const char (*)[38])"[PLANT_FLOWER] duplicate friend uid: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    else
    {
      v13 = std::unordered_map<unsigned int,RecvFlowerRecord>::operator[](
              &this->recv_flower_record_map_,
              (const std::unordered_map<unsigned int,RecvFlowerRecord>::key_type *)(v2 + 48));
      RecvFlowerRecord::fromBin(v13, recv_flower_data);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerRecvFlowerDataBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlantFlowerScheduleBin::flower_shelf_data_list(plant_flower_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlantFlowerShelfDataBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlantFlowerShelfDataBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerShelfDataBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerShelfDataBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerShelfDataBin>::iterator *)&__for_end) )
  {
    flower_shelf_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerShelfDataBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerShelfDataBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::PlantFlowerShelfDataBin::gadget_config_id(flower_shelf_data_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>,unsigned int>(
           &this->flower_shelf_used_flower_data_map_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/plant_flower_activity.cpp",
        "fromScheduleBin",
        92);
      v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v48,
              (const char (*)[44])"[PLANT_FLOWER] duplicate gadget config id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    else
    {
      v17 = proto::PlantFlowerShelfDataBin::used_flower_num_map(flower_shelf_data_bin);
      v18 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
              &this->flower_shelf_used_flower_data_map_,
              (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
      common::tools::MiscUtils::fromProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        v18,
        v17);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerShelfDataBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerShelfDataBin> *const)&__for_begin);
  }
  home_used_flower_data_bin = proto::PlantFlowerScheduleBin::home_used_flower_data(plant_flower_bin);
  __for_range_1 = proto::HomeUsedActivityItemDataBin::module_used_item_list(home_used_flower_data_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleUsedActivityItemDataBin>::begin(__for_range_1).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleUsedActivityItemDataBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleUsedActivityItemDataBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeModuleUsedActivityItemDataBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeModuleUsedActivityItemDataBin>::iterator *)&__for_end) )
  {
    module_used_item_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleUsedActivityItemDataBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeModuleUsedActivityItemDataBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::HomeModuleUsedActivityItemDataBin::module_id(module_used_item_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>,unsigned int>(
           &this->home_mudule_used_flower_data_map_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/plant_flower_activity.cpp",
        "fromScheduleBin",
        105);
      v19 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v48,
              (const char (*)[37])"[PLANT_FLOWER] duplicate module id: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    else
    {
      v22 = proto::HomeModuleUsedActivityItemDataBin::item_count_map(module_used_item_bin);
      v23 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
              &this->home_mudule_used_flower_data_map_,
              (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
      common::tools::MiscUtils::fromProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        v23,
        v22);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleUsedActivityItemDataBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeModuleUsedActivityItemDataBin> *const)&__for_begin);
  }
  __for_range_2 = proto::PlantFlowerScheduleBin::seed_plant_data_list(plant_flower_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlantFlowerSeedPlantDataBin>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlantFlowerSeedPlantDataBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerSeedPlantDataBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerSeedPlantDataBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerSeedPlantDataBin>::iterator *)&__for_end) )
  {
    seed_plant_data = google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerSeedPlantDataBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerSeedPlantDataBin> *const)&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::PlantFlowerSeedPlantDataBin::seed_id(seed_plant_data);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>>,unsigned int>(
           &this->seed_home_gather_map_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/plant_flower_activity.cpp",
        "fromScheduleBin",
        117);
      v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v48,
              (const char (*)[35])"[PLANT_FLOWER] duplicate seed id: ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
      v26 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    else
    {
      v27 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
              &this->seed_home_gather_map_,
              (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
      v28 = proto::PlantFlowerSeedPlantDataBin::home_gather_id_list(seed_plant_data);
      common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v28, v27);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerSeedPlantDataBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerSeedPlantDataBin> *const)&__for_begin);
  }
  __for_range_3 = proto::PlantFlowerScheduleBin::plant_obtained_flower_type_list(plant_flower_bin);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_3);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_3);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = *__for_begin_0;
    std::set<unsigned int>::insert(
      &this->plant_obtained_flower_type_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 64));
    ++__for_begin_0;
  }
  __for_range_4 = proto::PlantFlowerScheduleBin::common_obtained_flower_type_list(plant_flower_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_4);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_4);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = *__for_begin_1;
    std::set<unsigned int>::insert(
      &this->common_obtained_flower_type_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 64));
    ++__for_begin_1;
  }
  result = 0;
  if ( v49 == (char *)v2 )
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

// Line 137: range 0000000016C08B44-0000000016C09328
int32_t __cdecl PlantFlowerActivity::toScheduleBin(
        const PlantFlowerActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v4; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  google::protobuf::uint32 *v8; // rdx
  std::unordered_map<unsigned int,RecvFlowerRecord>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,RecvFlowerRecord>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  proto::PlantFlowerScheduleBin *plant_flower_bin; // [rsp+30h] [rbp-C0h]
  const std::unordered_map<unsigned int,RecvFlowerRecord> *__for_range; // [rsp+38h] [rbp-B8h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range_0; // [rsp+40h] [rbp-B0h]
  proto::HomeUsedActivityItemDataBin *home_used_flower_data_bin; // [rsp+48h] [rbp-A8h]
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range_1; // [rsp+50h] [rbp-A0h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_2; // [rsp+58h] [rbp-98h]
  const std::set<unsigned int> *__for_range_3; // [rsp+60h] [rbp-90h]
  const std::set<unsigned int> *__for_range_4; // [rsp+68h] [rbp-88h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v20; // [rsp+70h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *seed_id; // [rsp+78h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *home_gather_id_vec; // [rsp+80h] [rbp-70h]
  proto::PlantFlowerSeedPlantDataBin *seed_plant_data; // [rsp+88h] [rbp-68h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > *v24; // [rsp+90h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *module_id; // [rsp+98h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *used_flower_num_map_0; // [rsp+A0h] [rbp-50h]
  proto::HomeModuleUsedActivityItemDataBin *module_used_item_bin; // [rsp+A8h] [rbp-48h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > *v28; // [rsp+B0h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *gadget_config_id; // [rsp+B8h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *used_flower_num_map; // [rsp+C0h] [rbp-30h]
  proto::PlantFlowerShelfDataBin *flower_shelf_data_bin; // [rsp+C8h] [rbp-28h]
  const std::pair<unsigned int const,RecvFlowerRecord> *v32; // [rsp+D0h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,RecvFlowerRecord> >::type *uid; // [rsp+D8h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *recv_flower_record; // [rsp+E0h] [rbp-10h]
  proto::PlantFlowerRecvFlowerDataBin *recv_flower_data; // [rsp+E8h] [rbp-8h]

  plant_flower_bin = proto::ActivityScheduleBin::mutable_plant_flower_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::PlantFlowerScheduleBin::set_day_index(plant_flower_bin, this->day_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlantFlowerScheduleBin::set_last_awarded_day_index(plant_flower_bin, this->last_awarded_day_index_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::PlantFlowerScheduleBin::set_is_content_closed(plant_flower_bin, this->is_content_closed_);
  v2 = proto::PlantFlowerScheduleBin::mutable_seed_reward_list(plant_flower_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->seed_reward_vec_, v2);
  v3 = proto::PlantFlowerScheduleBin::mutable_wish_flower_num_map(plant_flower_bin);
  common::tools::MiscUtils::toProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->wish_flower_num_map_,
    v3);
  __for_range = &this->recv_flower_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::begin(&this->recv_flower_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::end(&this->recv_flower_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,RecvFlowerRecord>,false>(&__for_begin, &__for_end) )
  {
    v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,RecvFlowerRecord>(v32);
    recv_flower_record = (std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *)std::get<1ul,unsigned int const,RecvFlowerRecord>(v32);
    recv_flower_data = proto::PlantFlowerScheduleBin::add_recv_flower_data_list(plant_flower_bin);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::PlantFlowerRecvFlowerDataBin::set_uid(recv_flower_data, *uid);
    RecvFlowerRecord::toBin(recv_flower_record, recv_flower_data);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->flower_shelf_used_flower_data_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(&this->flower_shelf_used_flower_data_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)&__for_end) )
  {
    v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)&__for_begin);
    gadget_config_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v28);
    used_flower_num_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v28);
    flower_shelf_data_bin = proto::PlantFlowerScheduleBin::add_flower_shelf_data_list(plant_flower_bin);
    if ( *(_BYTE *)(((unsigned __int64)gadget_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gadget_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gadget_config_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::PlantFlowerShelfDataBin::set_gadget_config_id(flower_shelf_data_bin, *gadget_config_id);
    v4 = proto::PlantFlowerShelfDataBin::mutable_used_flower_num_map(flower_shelf_data_bin);
    common::tools::MiscUtils::toProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
      used_flower_num_map,
      v4);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)&__for_begin);
  }
  home_used_flower_data_bin = proto::PlantFlowerScheduleBin::mutable_home_used_flower_data(plant_flower_bin);
  __for_range_1 = &this->home_mudule_used_flower_data_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(&this->home_mudule_used_flower_data_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false> *)&__for_end) )
  {
    v24 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v24);
    used_flower_num_map_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v24);
    module_used_item_bin = proto::HomeUsedActivityItemDataBin::add_module_used_item_list(home_used_flower_data_bin);
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeModuleUsedActivityItemDataBin::set_module_id(module_used_item_bin, *module_id);
    v5 = proto::HomeModuleUsedActivityItemDataBin::mutable_item_count_map(module_used_item_bin);
    common::tools::MiscUtils::toProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
      used_flower_num_map_0,
      v5);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> >,false,false> *const)&__for_begin);
  }
  __for_range_2 = &this->seed_home_gather_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(&this->seed_home_gather_map_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)&__for_end) )
  {
    v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)&__for_begin);
    seed_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v20);
    home_gather_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v20);
    seed_plant_data = proto::PlantFlowerScheduleBin::add_seed_plant_data_list(plant_flower_bin);
    if ( *(_BYTE *)(((unsigned __int64)seed_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)seed_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)seed_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::PlantFlowerSeedPlantDataBin::set_seed_id(seed_plant_data, *seed_id);
    v6 = proto::PlantFlowerSeedPlantDataBin::mutable_home_gather_id_list(seed_plant_data);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(home_gather_id_vec, v6);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)&__for_begin);
  }
  __for_range_3 = &this->plant_obtained_flower_type_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::set<unsigned int>::begin(&this->plant_obtained_flower_type_set_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::set<unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v7 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::PlantFlowerScheduleBin::add_plant_obtained_flower_type_list(plant_flower_bin, *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_4 = &this->common_obtained_flower_type_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::set<unsigned int>::begin(&this->common_obtained_flower_type_set_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)std::set<unsigned int>::end(__for_range_4)._M_node;
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
    proto::PlantFlowerScheduleBin::add_common_obtained_flower_type_list(plant_flower_bin, *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  return 0;
};

// Line 192: range 0000000016C0932A-0000000016C09809
int32_t __cdecl PlantFlowerActivity::toClient(PlantFlowerActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t result; // eax
  uint32_t last_awarded_day_index; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  google::protobuf::Map<unsigned int,unsigned int> *v13; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v14; // rdx
  unsigned int val; // [rsp+20h] [rbp-90h] BYREF
  int32_t ret; // [rsp+24h] [rbp-8Ch]
  proto::PlantFlowerActivityDetailInfo *plant_flower_info; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-80h] BYREF
  char v19[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 seed_reward_id:203";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/plant_flower_activity.cpp",
      "toClient",
      195);
    v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v18,
           (const char (*)[58])"[PLANT_FLOWER] BaseActivity::toClient fails, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
  }
  else
  {
    plant_flower_info = proto::ActivityInfo::mutable_plant_flower_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::PlantFlowerActivityDetailInfo::set_day_index(plant_flower_info, this->day_index_);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    last_awarded_day_index = this->last_awarded_day_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::PlantFlowerActivityDetailInfo::set_is_today_has_awarded(
      plant_flower_info,
      last_awarded_day_index >= this->day_index_);
    *(_DWORD *)(v2 + 32) = 0;
    ret = PlantFlowerActivity::getCurSeedRewardId(this, (uint32_t *)(v2 + 32));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/plant_flower_activity.cpp",
        "toClient",
        207);
      v10 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
              &v18,
              (const char (*)[64])"[PLANT_FLOWER] get owner cur seed reward id fails, schedule_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->schedule_id_);
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = ret;
    }
    else
    {
      proto::PlantFlowerActivityDetailInfo::set_today_seed_reward_id(plant_flower_info, *(_DWORD *)(v2 + 32));
      if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_content_closed_);
      proto::PlantFlowerActivityDetailInfo::set_is_content_closed(plant_flower_info, this->is_content_closed_);
      v13 = proto::PlantFlowerActivityDetailInfo::mutable_wish_flower_num_map(plant_flower_info);
      common::tools::MiscUtils::toProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        &this->wish_flower_num_map_,
        v13);
      v14 = proto::PlantFlowerActivityDetailInfo::mutable_used_flower_num_map(plant_flower_info);
      PlantFlowerActivity::getActivityUsedFlowerInfo<google::protobuf::Map<unsigned int,unsigned int>>(this, v14);
      result = 0;
    }
  }
  if ( v19 == (char *)v2 )
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

// Line 218: range 0000000016C0980A-0000000016C09DD0
void __cdecl PlantFlowerActivity::registerObserver(PlantFlowerActivity *const this)
{
  unsigned __int64 p_M_start; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // r12
  PlayerEventComp *v6; // r12
  PlayerEventComp *v7; // r12
  PlayerEventComp v8; // [rsp+50h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v8.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 12 this_ptr:219 64 16 12 this_wtr:220";
  *(_QWORD *)(p_M_start + 16) = PlantFlowerActivity::registerObserver;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)&v8.event_center_.context_.pending_que_);
  std::dynamic_pointer_cast<PlantFlowerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(p_M_start + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v8.event_center_.context_.pending_que_);
  std::weak_ptr<PlantFlowerActivity>::weak_ptr<PlantFlowerActivity,void>(
    (std::weak_ptr<PlantFlowerActivity> *const)(p_M_start + 64),
    (const std::shared_ptr<PlantFlowerActivity> *)(p_M_start + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->home_custom_furniture_change_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<PlantFlowerActivity>::weak_ptr(
      (std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_.context_.pending_que_,
      (const std::weak_ptr<PlantFlowerActivity> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlantFlowerActivity,HomeCustomFurnitureChangeEvent>(
      &v8,
      (std::weak_ptr<PlantFlowerActivity> *)EventComp,
      (void (*)(PlantFlowerActivity *, const HomeCustomFurnitureChangeEvent *))&v8.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::operator=(&this->home_custom_furniture_change_obs_wtr_, (std::weak_ptr<Observer> *)&v8);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v8);
    std::weak_ptr<PlantFlowerActivity>::~weak_ptr((std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_.context_.pending_que_);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->home_plant_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getEventComp(this->player_);
    std::weak_ptr<PlantFlowerActivity>::weak_ptr(
      (std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_.context_.pending_que_,
      (const std::weak_ptr<PlantFlowerActivity> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlantFlowerActivity,HomePlantEvent>(
      (PlayerEventComp *const)&v8._M_weak_this._M_refcount,
      (std::weak_ptr<PlantFlowerActivity> *)v5,
      (void (*)(PlantFlowerActivity *, const HomePlantEvent *))&v8.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::operator=(
      &this->home_plant_obs_wtr_,
      (std::weak_ptr<Observer> *)&v8._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v8._M_weak_this._M_refcount);
    std::weak_ptr<PlantFlowerActivity>::~weak_ptr((std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_.context_.pending_que_);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->home_gather_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getEventComp(this->player_);
    std::weak_ptr<PlantFlowerActivity>::weak_ptr(
      (std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_.context_.pending_que_,
      (const std::weak_ptr<PlantFlowerActivity> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlantFlowerActivity,HomeGatherEvent>(
      (PlayerEventComp *const)&v8.event_center_,
      (std::weak_ptr<PlantFlowerActivity> *)v6,
      (void (*)(PlantFlowerActivity *, const HomeGatherEvent *))&v8.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::operator=(&this->home_gather_obs_wtr_, (std::weak_ptr<Observer> *)&v8.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v8.event_center_);
    std::weak_ptr<PlantFlowerActivity>::~weak_ptr((std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_.context_.pending_que_);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->obtain_item_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getEventComp(this->player_);
    std::weak_ptr<PlantFlowerActivity>::weak_ptr(
      (std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_,
      (const std::weak_ptr<PlantFlowerActivity> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlantFlowerActivity,ObtainItemEvent>(
      (PlayerEventComp *const)&v8.event_center_.context_.pending_que_,
      (std::weak_ptr<PlantFlowerActivity> *)v7,
      (void (*)(PlantFlowerActivity *, const ObtainItemEvent *))&v8.event_center_);
    std::weak_ptr<Observer>::operator=(
      &this->obtain_item_obs_wtr_,
      (std::weak_ptr<Observer> *)&v8.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v8.event_center_.context_.pending_que_);
    std::weak_ptr<PlantFlowerActivity>::~weak_ptr((std::weak_ptr<PlantFlowerActivity> *const)&v8.event_center_);
  }
  std::weak_ptr<PlantFlowerActivity>::~weak_ptr((std::weak_ptr<PlantFlowerActivity> *const)(p_M_start + 64));
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(p_M_start + 32));
  if ( &v8.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 240: range 0000000016C09DD2-0000000016C09FC0
void __cdecl PlantFlowerActivity::unregisterObserver(PlantFlowerActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax
  PlayerEventComp *v3; // rax
  PlayerEventComp *v4; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->home_custom_furniture_change_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->home_custom_furniture_change_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->home_custom_furniture_change_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->home_plant_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->home_plant_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->home_plant_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->home_gather_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v3, &this->home_gather_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->home_gather_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->obtain_item_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v4, &this->obtain_item_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->obtain_item_obs_wtr_);
  }
};

// Line 264: range 0000000016C0A24E-0000000016C0A619
void __cdecl PlantFlowerActivity::registerOfflineOp(PlantFlowerActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerOfflineOpComp *OfflineOpComp; // r14
  PlayerOfflineOpComp *v5; // r14
  proto::OfflineOpType op_type; // [rsp+1Ch] [rbp-C4h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+20h] [rbp-C0h] BYREF
  std::function<void(const proto::SendOfflineOpRsp&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 9 s_ptr:267 64 16 9 w_ptr:267";
  *(_QWORD *)(v1 + 16) = PlantFlowerActivity::registerOfflineOp;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<PlantFlowerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<PlantFlowerActivity>::weak_ptr<PlantFlowerActivity,void>(
    (std::weak_ptr<PlantFlowerActivity> *const)(v1 + 64),
    (const std::shared_ptr<PlantFlowerActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<PlantFlowerActivity>::weak_ptr(
    (std::weak_ptr<PlantFlowerActivity> *const)&v7,
    (const std::weak_ptr<PlantFlowerActivity> *)(v1 + 64));
  std::function<void ()(proto::SendOfflineOpRsp const&)>::function<PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1},void,void>(
    &p_func,
    (PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *)&v7);
  op_type = OFFLINE_OP_PLANT_FLOWER_ACTIVITY_GIVE_FLOWER;
  PlayerOfflineOpComp::registerSendRspCallBack(OfflineOpComp, &op_type, &p_func);
  std::function<void ()(proto::SendOfflineOpRsp const&)>::~function(&p_func);
  PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp((PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const)&v7);
  std::weak_ptr<PlantFlowerActivity>::~weak_ptr((std::weak_ptr<PlantFlowerActivity> *const)(v1 + 64));
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v1 + 32));
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<PlantFlowerActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<PlantFlowerActivity>::weak_ptr<PlantFlowerActivity,void>(
    (std::weak_ptr<PlantFlowerActivity> *const)(v1 + 64),
    (const std::shared_ptr<PlantFlowerActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<PlantFlowerActivity>::weak_ptr(
    (std::weak_ptr<PlantFlowerActivity> *const)&v7,
    (const std::weak_ptr<PlantFlowerActivity> *)(v1 + 64));
  std::function<void ()(proto::OfflineOpBin const&)>::function<PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2},void,void>(
    (std::function<void(const proto::OfflineOpBin&)> *const)&p_func,
    (PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *)&v7);
  op_type = OFFLINE_OP_PLANT_FLOWER_ACTIVITY_GIVE_FLOWER;
  PlayerOfflineOpComp::registerExecOfflineOp(v5, &op_type, (PlayerOfflineOpComp::ExecFunc *)&p_func);
  std::function<void ()(proto::OfflineOpBin const&)>::~function((std::function<void(const proto::OfflineOpBin&)> *const)&p_func);
  PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin((PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *const)&v7);
  std::weak_ptr<PlantFlowerActivity>::~weak_ptr((std::weak_ptr<PlantFlowerActivity> *const)(v1 + 64));
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
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

// Line 266: range 0000000016D337D0-0000000016D337F5
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<PlantFlowerActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 266: range 0000000016D338C0-0000000016D338E5
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::SendOfflineOpRsp(
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this,
        const PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *a2)
{
  std::weak_ptr<PlantFlowerActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 266: range 0000000016C09FC2-0000000016C0A0EA
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator()(
        const PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const __closure,
        const proto::SendOfflineOpRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlantFlowerActivity *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 s_ptr:266";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlantFlowerActivity>::lock((const std::weak_ptr<PlantFlowerActivity> *const)(v2 + 32));
  if ( std::operator!=<PlantFlowerActivity>((const std::shared_ptr<PlantFlowerActivity> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlantFlowerActivity::onSendOfflineOpRsp(v5, rsp_0);
  }
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v2 + 32));
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

// Line 266: range 0000000016C0A0EC-0000000016C0A106
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::SendOfflineOpRsp const&)#1}::~SendOfflineOpRsp(
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::SendOfflineOpRsp&)> *const this)
{
  std::weak_ptr<PlantFlowerActivity>::~weak_ptr(&this->__w_ptr);
};

// Line 267: range 0000000016D339D8-0000000016D339FD
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlantFlowerActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 267: range 0000000016D33AC8-0000000016D33AED
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::OfflineOpBin(
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this,
        const PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlantFlowerActivity>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 267: range 0000000016C0A108-0000000016C0A230
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator()(
        const PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *const __closure,
        const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlantFlowerActivity *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 s_ptr:267";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlantFlowerActivity>::lock((const std::weak_ptr<PlantFlowerActivity> *const)(v2 + 32));
  if ( std::operator!=<PlantFlowerActivity>((const std::shared_ptr<PlantFlowerActivity> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlantFlowerActivity::onOfflineOpExec(v5, bin);
  }
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v2 + 32));
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

// Line 267: range 0000000016C0A232-0000000016C0A24C
void __cdecl PlantFlowerActivity::registerOfflineOp(void)::{lambda(proto::OfflineOpBin const&)#2}::~OfflineOpBin(
        PlantFlowerActivity::registerOfflineOp::<lambda(const proto::OfflineOpBin&)> *const this)
{
  std::weak_ptr<PlantFlowerActivity>::~weak_ptr(&this->__w_ptr);
};

// Line 271: range 0000000016C0A61A-0000000016C0A683
int32_t __cdecl PlantFlowerActivity::init(PlantFlowerActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    PlantFlowerActivity::registerObserver(this);
    PlantFlowerActivity::registerOfflineOp(this);
  }
  return 0;
};

// Line 282: range 0000000016C0A684-0000000016C0A726
void __cdecl PlantFlowerActivity::onLogin(PlantFlowerActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( !std::unordered_map<unsigned int,RecvFlowerRecord>::empty(&this->recv_flower_record_map_) )
      PlantFlowerActivity::sendHaveRecvFlowerNotify(this);
    PlantFlowerActivity::refreshDayIndexByCurrentTime(this);
    BaseActivity::updateAllConds(this);
    BaseActivity::onLogin(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 300: range 0000000016C0A728-0000000016C0A742
void __cdecl PlantFlowerActivity::onPreStart(PlantFlowerActivity *const this)
{
  PlantFlowerActivity::setWorldSeedReward(this);
};

// Line 305: range 0000000016C0A744-0000000016C0A782
void __cdecl PlantFlowerActivity::onStart(PlantFlowerActivity *const this)
{
  PlantFlowerActivity::registerObserver(this);
  PlantFlowerActivity::registerOfflineOp(this);
  PlantFlowerActivity::refreshDayIndexByCurrentTime(this);
  BaseActivity::updateAllConds(this);
};

// Line 314: range 0000000016C0A784-0000000016C0A7F5
void __cdecl PlantFlowerActivity::onDailyRefresh(PlantFlowerActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    PlantFlowerActivity::refreshDayIndexByCurrentTime(this);
    BaseActivity::updateAllConds(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 327: range 0000000016C0A7F6-0000000016C0A810
void __cdecl PlantFlowerActivity::onSettle(PlantFlowerActivity *const this)
{
  PlantFlowerActivity::unregisterObserver(this);
};

// Line 332: range 0000000016C0A812-0000000016C0A97E
void __cdecl PlantFlowerActivity::onClear(PlantFlowerActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_awarded_day_index_);
  }
  this->last_awarded_day_index_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::vector<unsigned int>::clear(&this->seed_reward_vec_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->wish_flower_num_map_);
  std::unordered_map<unsigned int,RecvFlowerRecord>::clear(&this->recv_flower_record_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::clear(&this->home_mudule_used_flower_data_map_);
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::clear(&this->flower_shelf_used_flower_data_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::clear(&this->seed_home_gather_map_);
  std::set<unsigned int>::clear(&this->plant_obtained_flower_type_set_);
  std::set<unsigned int>::clear(&this->common_obtained_flower_type_set_);
};

// Line 347: range 0000000016C0A980-0000000016C0AA75
bool __cdecl PlantFlowerActivity::checkCondIsMeet(PlantFlowerActivity *const this, const data::NewActivityCond *cond)
{
  uint32_t last_awarded_day_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_PLANT_FLOWER_CAN_DELIVER )
    return BaseActivity::checkCondIsMeet(this, cond);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  last_awarded_day_index = this->last_awarded_day_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return last_awarded_day_index < this->day_index_;
};

// Line 361: range 0000000016C0AA76-0000000016C0AAED
int32_t __cdecl PlantFlowerActivity::execAction(
        PlantFlowerActivity *const this,
        const data::NewActivityExec *action_exec)
{
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type != NEW_ACTIVITY_ACTION_CLOSE_PLANT_FLOWER_CONTENT )
    return BaseActivity::execAction(this, action_exec);
  PlantFlowerActivity::closeContent(this);
  return 0;
};

// Line 376: range 0000000016C0AAEE-0000000016C0AF91
void __cdecl PlantFlowerActivity::fillActivitySocialData(
        PlantFlowerActivity *const this,
        proto::ActivitySocialData *social_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  google::protobuf::Map<unsigned int,unsigned int> *v5; // rax
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  uint32_t ItemCount; // r14d
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  proto::PlantFlowerSocialData *plant_flower_social_data; // [rsp+28h] [rbp-C8h]
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+30h] [rbp-C0h]
  PlayerItemComp *player_item_comp; // [rsp+38h] [rbp-B8h]
  google::protobuf::Map<unsigned int,unsigned int> *have_flower_num_map; // [rsp+40h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 flower_id:390";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::fillActivitySocialData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivitySocialData::set_schedule_id(social_data, this->schedule_id_);
  plant_flower_social_data = proto::ActivitySocialData::mutable_plant_flower_data(social_data);
  v5 = proto::PlantFlowerSocialData::mutable_wish_flower_num_map(plant_flower_social_data);
  common::tools::MiscUtils::toProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->wish_flower_num_map_,
    v5);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( plant_flower_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player_item_comp = Player::getItemComp(this->player_);
    have_flower_num_map = proto::PlantFlowerSocialData::mutable_have_flower_num_map(plant_flower_social_data);
    __for_range = &plant_flower_config_ptr->flower_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&plant_flower_config_ptr->flower_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&plant_flower_config_ptr->flower_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v10;
      ItemCount = PlayerItemComp::getItemCount(player_item_comp, *(_DWORD *)(v2 + 32));
      v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
              have_flower_num_map,
              (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12);
      }
      *v13 = ItemCount;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "fillActivitySocialData",
      385);
    v7 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v22,
           (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->schedule_id_);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 397: range 0000000016C0AF92-0000000016C0B037
int32_t __cdecl PlantFlowerActivity::clearByGm(PlantFlowerActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_awarded_day_index_);
  }
  this->last_awarded_day_index_ = 0;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->wish_flower_num_map_);
  std::unordered_map<unsigned int,RecvFlowerRecord>::clear(&this->recv_flower_record_map_);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::clear(&this->seed_home_gather_map_);
  std::set<unsigned int>::clear(&this->plant_obtained_flower_type_set_);
  return 0;
};

// Line 407: range 0000000016C0B038-0000000016C0B420
void __cdecl PlantFlowerActivity::onObtainItemEvent(PlantFlowerActivity *const this, const ObtainItemEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 event_ptr:422";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onObtainItemEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( plant_flower_config_ptr )
  {
    if ( common::tools::MiscUtils::isContains<unsigned int>(&plant_flower_config_ptr->flower_id_list, &event->item_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( event->item_num )
      {
        std::set<unsigned int>::insert(&this->common_obtained_flower_type_set_, &event->item_id);
        common::tools::perf::make_shared<PlantFlowerCommonObtainFlowerEvent>();
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<PlantFlowerCommonObtainFlowerEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v12,
          (const std::shared_ptr<PlantFlowerCommonObtainFlowerEvent> *)(v2 + 32));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v12);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v12);
        std::shared_ptr<PlantFlowerCommonObtainFlowerEvent>::~shared_ptr((std::shared_ptr<PlantFlowerCommonObtainFlowerEvent> *const)(v2 + 32));
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onObtainItemEvent",
      411);
    v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v13,
           (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->schedule_id_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 428: range 0000000016C0B422-0000000016C0B8CD
void __cdecl PlantFlowerActivity::onHomeCustomFurnitureChangeEvent(
        PlantFlowerActivity *const this,
        const HomeCustomFurnitureChangeEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rdx
  unsigned int second; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v12; // rax
  unsigned int *v13; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+28h] [rbp-D8h]
  std::unordered_map<unsigned int,unsigned int> *used_flower_num_map; // [rsp+30h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 flower_id:438 64 8 8 iter:441";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onHomeCustomFurnitureChangeEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( plant_flower_config_ptr )
  {
    used_flower_num_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                            &this->home_mudule_used_flower_data_map_,
                            &event->module_id);
    std::unordered_map<unsigned int,unsigned int>::clear(used_flower_num_map);
    __for_range = &plant_flower_config_ptr->flower_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&plant_flower_config_ptr->flower_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&plant_flower_config_ptr->flower_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v9;
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                            &event->sub_furniture_count_map,
                                                                            (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      __y._M_node = std::map<unsigned int,unsigned int>::end(&event->sub_furniture_count_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
             &__y) )
      {
        v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        second = v10->second;
        v12 = std::unordered_map<unsigned int,unsigned int>::operator[](
                used_flower_num_map,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v12);
        }
        *v13 = second;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onHomeCustomFurnitureChangeEvent",
      432);
    v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v21,
           (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->schedule_id_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v2 )
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

// Line 450: range 0000000016C0B8CE-0000000016C0C221
void __cdecl PlantFlowerActivity::onHomePlantEvent(PlantFlowerActivity *const this, const HomePlantEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  uint32_t home_gather_id; // edx
  PlayerHomeComp *HomeComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  Home *v15; // rax
  HomePlantComp *PlantComp; // rdi
  uint32_t seed_id; // ecx
  uint32_t sub_field_index; // edx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::vector<unsigned int> *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rbx
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t selected_home_gather_id; // [rsp+14h] [rbp-DCh]
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v33; // [rsp+20h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 22 new_home_gather_id:463 48 4 7 ret:472 64 16 18 home_world_ptr:470 96 16 12 home_ptr:471";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onHomePlantEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( !plant_flower_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onHomePlantEvent",
      455);
    v6 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
           &v33,
           (const char (*)[75])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig failed. schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->schedule_id_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    goto LABEL_44;
  }
  if ( !common::tools::MiscUtils::isContains<unsigned int>(&plant_flower_config_ptr->seed_id_list, &event->seed_id) )
    goto LABEL_44;
  if ( *(_BYTE *)(((unsigned __int64)&event->home_gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->home_gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = event->home_gather_id;
  home_gather_id = event->home_gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->seed_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->seed_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  selected_home_gather_id = PlantFlowerActivity::getSeedPlantSelectedHomeGatherId(this, event->seed_id, home_gather_id);
  if ( *(_BYTE *)(((unsigned __int64)&event->home_gather_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->home_gather_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( selected_home_gather_id != event->home_gather_id )
  {
    std::shared_ptr<HomeWorld>::shared_ptr((std::shared_ptr<HomeWorld> *const)(v2 + 64), 0LL);
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v2 + 96), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeComp = Player::getHomeComp(this->player_);
    *(_DWORD *)(v2 + 48) = PlayerHomeComp::getCurHomeWorldAndHome(
                             HomeComp,
                             (HomeWorldPtr *)(v2 + 64),
                             (HomePtr *)(v2 + 96));
    if ( *(_DWORD *)(v2 + 48)
      || std::operator==<HomeWorld>(0LL, (const std::shared_ptr<HomeWorld> *)(v2 + 64))
      || std::operator==<Home>(0LL, (const std::shared_ptr<Home> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/plant_flower_activity.cpp",
        "onHomePlantEvent",
        475);
      v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v33,
              (const char (*)[51])"[PLANT_FLOWER] getCurHomeWorldAndHome failed. ret:");
      v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v15 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      PlantComp = Home::getPlantComp(v15);
      if ( *(_BYTE *)(((unsigned __int64)&event->seed_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->seed_id >> 3) + 0x7FFF8000) <= 3 )
      {
        PlantComp = (HomePlantComp *)&event->seed_id;
        __asan_report_load4();
      }
      seed_id = event->seed_id;
      if ( *(_BYTE *)(((unsigned __int64)&event->sub_field_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->sub_field_index >> 3)
                                                             + 0x7FFF8000) )
      {
        PlantComp = (HomePlantComp *)&event->sub_field_index;
        __asan_report_load4();
      }
      sub_field_index = event->sub_field_index;
      if ( *(_BYTE *)(((unsigned __int64)&event->field_guid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->field_guid >> 3) + 0x7FFF8000) <= 3 )
      {
        PlantComp = (HomePlantComp *)&event->field_guid;
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = HomePlantComp::setChangePlantGather(
                               PlantComp,
                               event->field_guid,
                               sub_field_index,
                               seed_id,
                               selected_home_gather_id);
      if ( !*(_DWORD *)(v2 + 48) )
      {
        *(_DWORD *)(v2 + 32) = selected_home_gather_id;
        goto LABEL_40;
      }
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/plant_flower_activity.cpp",
        "onHomePlantEvent",
        481);
      v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v33,
              (const char (*)[49])"[PLANT_FLOWER] setChangePlantGather failed. ret:");
      v20 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
LABEL_40:
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 96));
    std::shared_ptr<HomeWorld>::~shared_ptr((std::shared_ptr<HomeWorld> *const)(v2 + 64));
  }
  v21 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
          &this->seed_home_gather_map_,
          &event->seed_id);
  std::vector<unsigned int>::push_back(v21, (const std::vector<unsigned int>::value_type *)(v2 + 32));
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/plant_flower_activity.cpp",
    "onHomePlantEvent",
    491);
  v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v33,
          (const char (*)[41])"[PLANT_FLOWER] onHomePlantEvent seed_id:");
  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &event->seed_id);
  v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])" home_gather_id:");
  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &event->home_gather_id);
  v26 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v25, (const char (*)[21])" new_home_gather_id:");
  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 32));
  v28 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v27, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
  common::milog::MiLogStream::~MiLogStream(&v33);
LABEL_44:
  if ( v34 == (char *)v2 )
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

// Line 496: range 0000000016C0C222-0000000016C0C4B5
void __cdecl PlantFlowerActivity::onHomeGatherEvent(PlantFlowerActivity *const this, const HomeGatherEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rdi
  uint32_t gather_id; // ecx
  bool v7; // r14
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<Config> v10; // [rsp+10h] [rbp-80h] BYREF
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 event_ptr:503";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onHomeGatherEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->gather_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gather_id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_plant_flower_config_mgr = (const ActivityPlantFlowerExcelConfigMgr *)&event->gather_id;
    __asan_report_load4();
  }
  gather_id = event->gather_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_plant_flower_config_mgr = (const ActivityPlantFlowerExcelConfigMgr *)&this->schedule_id_;
    __asan_report_load4();
  }
  v7 = !ActivityPlantFlowerExcelConfigMgr::isFlowerGatherId(
          p_activity_plant_flower_config_mgr,
          this->schedule_id_,
          gather_id);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( !v7 )
  {
    std::set<unsigned int>::insert(&this->plant_obtained_flower_type_set_, &event->gather_id);
    common::tools::perf::make_shared<PlantFlowerObtainFlowerEvent>();
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<PlantFlowerObtainFlowerEvent,void>(
      (std::shared_ptr<BaseEvent> *const)&v10,
      (const std::shared_ptr<PlantFlowerObtainFlowerEvent> *)(v2 + 32));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v10);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v10);
    std::shared_ptr<PlantFlowerObtainFlowerEvent>::~shared_ptr((std::shared_ptr<PlantFlowerObtainFlowerEvent> *const)(v2 + 32));
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 508: range 0000000016C0C4B6-0000000016C0CDE2
__int64 __fastcall PlantFlowerActivity::getSeedPlantSelectedHomeGatherId(
        PlantFlowerActivity *const this,
        uint32_t seed_id,
        uint32_t cur_home_gather_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::vector<unsigned int>::size_type v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rdx
  std::set<unsigned int>::size_type v15; // r14
  uint32_t weight; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  uint32_t *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 result; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-1E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1E0h] BYREF
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+28h] [rbp-1D8h]
  std::vector<unsigned int> *home_gather_id_vec; // [rsp+30h] [rbp-1D0h]
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+38h] [rbp-1C8h]
  const std::unordered_map<unsigned int,data::ConfigHomeGather> *home_gather_config_map_ptr; // [rsp+40h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-1B8h]
  const std::unordered_map<unsigned int,data::ConfigHomeGather> *__for_range_0; // [rsp+50h] [rbp-1B0h]
  const std::pair<unsigned int const,data::ConfigHomeGather> *v32; // [rsp+58h] [rbp-1A8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ConfigHomeGather> >::type *home_gather_id; // [rsp+60h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeGather> >::type *config; // [rsp+68h] [rbp-198h]
  std::shared_ptr<Config> v35; // [rsp+70h] [rbp-190h] BYREF
  std::shared_ptr<Config> v36; // [rsp+80h] [rbp-180h] BYREF
  common::milog::MiLogStream v37; // [rsp+90h] [rbp-170h] BYREF
  common::milog::MiLogStream v38; // [rsp+B0h] [rbp-150h] BYREF
  char v39[304]; // [rsp+D0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 27 selected_home_gather_id:509 64 4 18 home_gather_id:534 80 4 11 seed_id:507 96 48 22 ho"
                        "me_gather_id_set:533 176 48 14 weight_map:545";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::getSeedPlantSelectedHomeGatherId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 80) = seed_id;
  *(_DWORD *)(v3 + 48) = cur_home_gather_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( plant_flower_config_ptr )
  {
    home_gather_id_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                           &this->seed_home_gather_map_,
                           (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 80));
    v10 = std::vector<unsigned int>::size(home_gather_id_vec) + 1;
    if ( *(_BYTE *)(((unsigned __int64)&plant_flower_config_ptr->guarantee_start_times >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&plant_flower_config_ptr->guarantee_start_times >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v10 >= plant_flower_config_ptr->guarantee_start_times )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.home_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v36);
      home_gather_config_map_ptr = HomeWorldExcelConfigMgr::findPlantHomeGatherConfigMap(
                                     home_config_mgr,
                                     *(_DWORD *)(v3 + 80));
      if ( home_gather_config_map_ptr )
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 96));
        __for_range = home_gather_id_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(home_gather_id_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(home_gather_id_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 64) = *v14;
          std::set<unsigned int>::insert(
            (std::set<unsigned int> *const)(v3 + 96),
            (const std::set<unsigned int>::value_type *)(v3 + 64));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        v15 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 96));
        if ( v15 < std::unordered_map<unsigned int,data::ConfigHomeGather>::size(home_gather_config_map_ptr) )
        {
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
          __for_range_0 = home_gather_config_map_ptr;
          __for_begin._M_current = (unsigned int *)std::unordered_map<unsigned int,data::ConfigHomeGather>::begin(home_gather_config_map_ptr)._M_cur;
          __for_end._M_current = (unsigned int *)std::unordered_map<unsigned int,data::ConfigHomeGather>::end(__for_range_0)._M_cur;
          while ( std::__detail::operator!=<std::pair<unsigned int const,data::ConfigHomeGather>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeGather>,false> *)&__for_begin,
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ConfigHomeGather>,false> *)&__for_end) )
          {
            v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false> *const)&__for_begin);
            home_gather_id = std::get<0ul,unsigned int const,data::ConfigHomeGather>(v32);
            config = (std::tuple_element<1,const std::pair<unsigned int const,data::ConfigHomeGather> >::type *)std::get<1ul,unsigned int const,data::ConfigHomeGather>(v32);
            if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                    (std::set<unsigned int> *)(v3 + 96),
                    home_gather_id) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->weight >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              weight = config->weight;
              v17 = std::map<unsigned int,unsigned int>::operator[](
                      (std::map<unsigned int,unsigned int> *const)(v3 + 176),
                      home_gather_id);
              v18 = v17;
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v17);
              }
              *v18 = weight;
            }
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ConfigHomeGather>,false,false> *const)&__for_begin);
          }
          if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
                 (const std::map<unsigned int,unsigned int> *)(v3 + 176),
                 (unsigned int *)(v3 + 48),
                 0) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/plant_flower_activity.cpp",
              "getSeedPlantSelectedHomeGatherId",
              555);
            v19 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v38,
                    (const char (*)[47])"[PLANT_FLOWER] weightSelectOne fail. seed id: ");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v3 + 80));
            v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 176));
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/plant_flower_activity.cpp",
          "getSeedPlantSelectedHomeGatherId",
          530);
        v11 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v38,
                (const char (*)[60])"[PLANT_FLOWER] findPlantHomeGatherConfigMap fail. seed id: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v3 + 80));
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "getSeedPlantSelectedHomeGatherId",
      516);
    v7 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
           &v37,
           (const char (*)[75])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig failed. schedule_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->schedule_id_);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v37);
  }
  result = *(unsigned int *)(v3 + 48);
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 566: range 0000000016C0CDE4-0000000016C0CF9D
void __cdecl PlantFlowerActivity::refreshDayIndexByCurrentTime(PlantFlowerActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  uint32_t new_day_index; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  new_day_index = BaseActivity::getDayIndexAfterStart(this);
  if ( new_day_index )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( new_day_index > this->day_index_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->day_index_);
      }
      this->day_index_ = new_day_index;
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/plant_flower_activity.cpp",
        "refreshDayIndexByCurrentTime",
        578);
      v1 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v8,
             (const char (*)[26])"[PLANT_FLOWER] day_index:");
      v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->day_index_);
      v3 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v2, (const char (*)[14])" schedule_id:");
      v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->schedule_id_);
      v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v4, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
};

// Line 582: range 0000000016C0CF9E-0000000016C0D043
void __cdecl PlantFlowerActivity::closeContent(PlantFlowerActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 593: range 0000000016C0D044-0000000016C0D1ED
void __cdecl PlantFlowerActivity::sendHaveRecvFlowerNotify(PlantFlowerActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 10 notify:594";
  *(_QWORD *)(v1 + 16) = PlantFlowerActivity::sendHaveRecvFlowerNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::PlantFlowerHaveRecvFlowerNotify::PlantFlowerHaveRecvFlowerNotify((proto::PlantFlowerHaveRecvFlowerNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlantFlowerHaveRecvFlowerNotify::set_schedule_id(
    (proto::PlantFlowerHaveRecvFlowerNotify *const)(v1 + 32),
    this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::PlantFlowerHaveRecvFlowerNotify::~PlantFlowerHaveRecvFlowerNotify((proto::PlantFlowerHaveRecvFlowerNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
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

// Line 600: range 0000000016C0D1EE-0000000016C0D4ED
void __cdecl PlantFlowerActivity::setWorldSeedReward(PlantFlowerActivity *const this)
{
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // r12
  unsigned int *M_current; // rbx
  std::vector<unsigned int>::iterator v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( plant_flower_config_ptr )
  {
    std::vector<unsigned int>::operator=(&this->seed_reward_vec_, &plant_flower_config_ptr->seed_reward_id_list);
    RandGenerator = common::tools::RandomUtils::getRandGenerator();
    M_current = std::vector<unsigned int>::end(&this->seed_reward_vec_)._M_current;
    v7._M_current = std::vector<unsigned int>::begin(&this->seed_reward_vec_)._M_current;
    std::shuffle<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &>(
      v7,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
      RandGenerator);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "setWorldSeedReward",
      610);
    v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v15,
           (const char (*)[56])"[PLANT_FLOWER] shuffle player world seed reward vector:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int>(v8, &this->seed_reward_vec_);
    v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" schedule_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "setWorldSeedReward",
      604);
    v2 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v15,
           (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->schedule_id_);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v15);
};

// Line 614: range 0000000016C0D4EE-0000000016C0D970
int32_t __cdecl PlantFlowerActivity::getCurSeedRewardId(PlantFlowerActivity *const this, uint32_t *seed_reward_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t result; // eax
  unsigned __int64 v9; // r14
  std::vector<unsigned int>::size_type v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r13
  std::vector<unsigned int>::reference v18; // rdx
  uint32_t v19; // ecx
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-90h] BYREF
  char v23[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 21 seed_reward_index:621";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::getCurSeedRewardId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::vector<unsigned int>::empty(&this->seed_reward_vec_) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "getCurSeedRewardId",
      617);
    v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v22,
           (const char (*)[47])"[PLANT_FLOWER] seed reward empty, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v9 = this->day_index_ - 1;
    *(_DWORD *)(v2 + 32) = v9 % std::vector<unsigned int>::size(&this->seed_reward_vec_);
    v10 = *(unsigned int *)(v2 + 32);
    if ( v10 < std::vector<unsigned int>::size(&this->seed_reward_vec_) )
    {
      v18 = std::vector<unsigned int>::operator[](&this->seed_reward_vec_, *(unsigned int *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v19 = *v18;
      if ( *(_BYTE *)(((unsigned __int64)seed_reward_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)seed_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)seed_reward_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_store4(seed_reward_id);
      }
      *seed_reward_id = v19;
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/plant_flower_activity.cpp",
        "getCurSeedRewardId",
        624);
      v11 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v22,
              (const char (*)[56])"[PLANT_FLOWER] get seed reward fail, seed reward index:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v12,
              (const char (*)[23])" seed reward vec size:");
      v21 = std::vector<unsigned int>::size(&this->seed_reward_vec_);
      v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &v21);
      v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" schedule_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->schedule_id_);
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 634: range 0000000016C0D972-0000000016C0DDB4
int32_t __cdecl PlantFlowerActivity::getOwnerCurSeedRewardId(PlantFlowerActivity *const this, uint32_t *seed_reward_id)
{
  int32_t CurSeedRewardId; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Player *v6; // rax
  uint32_t ActivityComp; // r15d
  std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlantFlowerActivity *v10; // rdx
  int v11; // r15d
  int v12; // r15d
  common::milog::MiLogStream *v13; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 13 world_ptr:635 64 16 13 owner_ptr:638 96 16 16 activity_ptr:642";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::getOwnerCurSeedRewardId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 32));
  if ( !std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
    goto LABEL_21;
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 64));
  if ( !std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
    goto LABEL_19;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  ActivityComp = (unsigned int)Player::getActivityComp(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  NewActivityExcelConfigMgr::getActivityIdByScheduleId(conf_mgr, this->schedule_id_);
  PlayerActivityComp::findActivity<PlantFlowerActivity>((PlayerActivityComp *const)(v3 + 96), ActivityComp);
  if ( std::operator!=<PlantFlowerActivity>(0LL, (const std::shared_ptr<PlantFlowerActivity> *)(v3 + 96))
    && (v8 = std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
        BaseActivity::isOpening(v8, 0)) )
  {
    v10 = std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlantFlowerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    CurSeedRewardId = PlantFlowerActivity::getCurSeedRewardId(v10, seed_reward_id);
    v11 = 0;
  }
  else
  {
    v11 = 1;
  }
  std::shared_ptr<PlantFlowerActivity>::~shared_ptr((std::shared_ptr<PlantFlowerActivity> *const)(v3 + 96));
  if ( v11 == 1 )
LABEL_19:
    v12 = 1;
  else
    v12 = 0;
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v12 == 1 )
  {
LABEL_21:
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/plant_flower_activity.cpp",
      "getOwnerCurSeedRewardId",
      650);
    v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v17,
            (const char (*)[50])"[PLANT_FLOWER] getOwnerCurSeedRewardId fail, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    CurSeedRewardId = PlantFlowerActivity::getCurSeedRewardId(this, seed_reward_id);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  result = CurSeedRewardId;
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

// Line 655: range 0000000016C0DDB6-0000000016C0E39D
int32_t __cdecl PlantFlowerActivity::getCanGiveFriendFlower(
        PlantFlowerActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *flower_num_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  unsigned int *v18; // rax
  _DWORD *v19; // rdx
  int v20; // r14d
  unsigned int *v21; // rax
  int *v22; // rdx
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+28h] [rbp-D8h]
  PlayerItemComp *player_item_comp; // [rsp+30h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v29; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 flower_id:664 48 4 19 used_flower_num:666 64 4 19 have_flower_num:667";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::getCanGiveFriendFlower;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( plant_flower_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player_item_comp = Player::getItemComp(this->player_);
    __for_range = &plant_flower_config_ptr->flower_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&plant_flower_config_ptr->flower_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&plant_flower_config_ptr->flower_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v10;
      *(_DWORD *)(v2 + 48) = PlantFlowerActivity::getUsedFlowerNum(this, *(_DWORD *)(v2 + 32));
      *(_DWORD *)(v2 + 64) = PlayerItemComp::getItemCount(player_item_comp, *(_DWORD *)(v2 + 32));
      if ( *(_DWORD *)(v2 + 48) <= *(_DWORD *)(v2 + 64) )
      {
        v20 = *(_DWORD *)(v2 + 64) - *(_DWORD *)(v2 + 48);
        v21 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                flower_num_map,
                (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 32));
        v22 = (int *)v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v21);
        }
        *v22 = v20;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/plant_flower_activity.cpp",
          "getCanGiveFriendFlower",
          670);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v30,
                (const char (*)[26])"[PLANT_FLOWER] flower_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v12,
                (const char (*)[18])" used_flower_num:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v14,
                (const char (*)[30])" bigger than have_flower_num:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v18 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                flower_num_map,
                (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 32));
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v18);
        }
        *v19 = 0;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "getCanGiveFriendFlower",
      659);
    v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v30,
           (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->schedule_id_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = -1;
  }
  if ( v31 == (char *)v2 )
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

// Line 683: range 0000000016C0E39E-0000000016C0F2B8
int32_t __cdecl PlantFlowerActivity::takeSeedReward(PlantFlowerActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  uint32_t last_awarded_day_index; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  const ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rdi
  uint32_t day_index; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  PlayerItemComp *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  PlayerItemComp *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  PlayerItemComp *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  uint32_t v46; // ecx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  const data::ActivityPlantFlowerDailyExcelConfig *daily_config_ptr; // [rsp+18h] [rbp-148h]
  std::shared_ptr<Config> v51; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v52; // [rsp+30h] [rbp-130h] BYREF
  char v53[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 18 seed_reward_id:698 48 4 7 ret:699 64 8 19 sub_item_reason:736 96 24 17 reward_id_vec:7"
                        "23 160 24 10 reason:727";
  *(_QWORD *)(v1 + 16) = PlantFlowerActivity::takeSeedReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "takeSeedReward",
      686);
    v4 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v52,
           (const char (*)[47])"[PLANT_FLOWER] content is closed, schedule_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->schedule_id_);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = 860;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  last_awarded_day_index = this->last_awarded_day_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( last_awarded_day_index >= this->day_index_ )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "takeSeedReward",
      693);
    v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v52,
           (const char (*)[66])"[PLANT_FLOWER] already take seed reward. last_awarded_day_index_:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->last_awarded_day_index_);
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" day_index:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->day_index_);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" schedule_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->schedule_id_);
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = 10056;
    goto LABEL_60;
  }
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 48) = PlantFlowerActivity::getOwnerCurSeedRewardId(this, (uint32_t *)(v1 + 32));
  if ( *(_DWORD *)(v1 + 48) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/plant_flower_activity.cpp",
      "takeSeedReward",
      702);
    v16 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v52,
            (const char (*)[64])"[PLANT_FLOWER] get owner cur seed reward id fails, schedule_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->schedule_id_);
    v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = *(_DWORD *)(v1 + 48);
    goto LABEL_60;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v51);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_plant_flower_config_mgr = (const ActivityPlantFlowerExcelConfigMgr *)&this->day_index_;
    __asan_report_load4();
  }
  day_index = this->day_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    p_activity_plant_flower_config_mgr = (const ActivityPlantFlowerExcelConfigMgr *)&this->schedule_id_;
    __asan_report_load4();
  }
  daily_config_ptr = ActivityPlantFlowerExcelConfigMgr::findDailyConfig(
                       p_activity_plant_flower_config_mgr,
                       this->schedule_id_,
                       day_index);
  std::shared_ptr<Config>::~shared_ptr(&v51);
  if ( !daily_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/plant_flower_activity.cpp",
      "takeSeedReward",
      710);
    v21 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v52,
            (const char (*)[50])"[PLANT_FLOWER] findDailyConfig fail, schedule_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->schedule_id_);
    v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" day_index:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->day_index_);
    v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = 5;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  *(_DWORD *)(v1 + 48) = PlayerItemComp::checkSubItemBatch(ItemComp, &daily_config_ptr->cost_item_list);
  if ( !*(_DWORD *)(v1 + 48) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96), &daily_config_ptr->reward_id_list);
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v1 + 96),
      (const std::vector<unsigned int>::value_type *)(v1 + 32));
    ActionReason::ActionReason(
      (ActionReason *const)(v1 + 160),
      ACTION_REASON_PLANT_FLOWER_REWARD,
      ITEM_LIMIT_ACTIVITY_PLANT_FLOWER);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v30 = Player::getItemComp(this->player_);
    *(_DWORD *)(v1 + 48) = PlayerItemComp::checkGrantRewards(
                             v30,
                             (const std::vector<unsigned int> *)(v1 + 96),
                             (const ActionReason *)(v1 + 160));
    if ( *(_DWORD *)(v1 + 48) )
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/plant_flower_activity.cpp",
        "takeSeedReward",
        731);
      v31 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v52,
              (const char (*)[56])"[PLANT_FLOWER] checkGrantRewards failed, reward_id_vec:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int>(v31, (const std::vector<unsigned int> *)(v1 + 96));
      v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])" schedule_id:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->schedule_id_);
      v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      SubItemReason::SubItemReason((SubItemReason *const)(v1 + 64), ACTION_REASON_PLANT_FLOWER_DELIVER_ITEM);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v36 = Player::getItemComp(this->player_);
      *(_DWORD *)(v1 + 48) = PlayerItemComp::subItemBatch(
                               v36,
                               &daily_config_ptr->cost_item_list,
                               (const SubItemReason *)(v1 + 64));
      if ( *(_DWORD *)(v1 + 48) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/plant_flower_activity.cpp",
          "takeSeedReward",
          740);
        v37 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v52,
                (const char (*)[39])"[PLANT_FLOWER] subItemBatch fail, ret:");
        v38 = common::milog::MiLogStream::operator<<<int,(int *)0>(v37, (const int *)(v1 + 48));
        v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])" schedule_id:");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &this->schedule_id_);
        v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v41 = Player::getItemComp(this->player_);
        *(_DWORD *)(v1 + 48) = PlayerItemComp::grantRewards(
                                 v41,
                                 (const std::vector<unsigned int> *)(v1 + 96),
                                 (const ActionReason *)(v1 + 160),
                                 0LL);
        if ( !*(_DWORD *)(v1 + 48) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v46 = this->day_index_;
          if ( *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_awarded_day_index_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&this->last_awarded_day_index_);
          }
          this->last_awarded_day_index_ = v46;
          BaseActivity::updateAllConds(this);
          BaseActivity::notifyClientData(this, 0);
          v7 = 0;
          goto LABEL_59;
        }
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/plant_flower_activity.cpp",
          "takeSeedReward",
          748);
        v42 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v52,
                (const char (*)[38])"[PLANT_FLOWER] grantReward fail, ret:");
        v43 = common::milog::MiLogStream::operator<<<int,(int *)0>(v42, (const int *)(v1 + 48));
        v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v43, (const char (*)[12])" reward_id:");
        v45 = common::milog::MiLogStream::operator<<<unsigned int>(v44, (const std::vector<unsigned int> *)(v1 + 96));
        v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v45, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = *(_DWORD *)(v1 + 48);
LABEL_59:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
    goto LABEL_60;
  }
  common::milog::MiLogStream::create(
    &v52,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/plant_flower_activity.cpp",
    "takeSeedReward",
    718);
  v27 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v52,
          (const char (*)[44])"[PLANT_FLOWER] checkSubItemBatch fail, ret:");
  v28 = common::milog::MiLogStream::operator<<<int,(int *)0>(v27, (const int *)(v1 + 48));
  v29 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v28, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
  common::milog::MiLogStream::~MiLogStream(&v52);
  v7 = *(_DWORD *)(v1 + 48);
LABEL_60:
  result = v7;
  if ( v53 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 762: range 0000000016C0F2BA-0000000016C0FB2F
int32_t __cdecl PlantFlowerActivity::onGiveFriendFlowerReq(
        PlantFlowerActivity *const this,
        uint32_t friend_uid,
        const google::protobuf::Map<unsigned int,unsigned int> *flower_num_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  int32_t FriendFlowerData; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // esi
  google::protobuf::Map<unsigned int,unsigned int> *v23; // rdx
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  int32_t ret; // [rsp+24h] [rbp-17Ch]
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+28h] [rbp-178h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-170h]
  const unsigned int *p_flower_id; // [rsp+38h] [rbp-168h]
  std::shared_ptr<Config> v32; // [rsp+40h] [rbp-160h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-150h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v35; // [rsp+90h] [rbp-110h] BYREF
  char v36[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 104 14 server_req:794";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::onGiveFriendFlowerReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( plant_flower_config_ptr )
  {
    __for_range = flower_num_map;
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, flower_num_map);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, flower_num_map);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_flower_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      if ( !common::tools::MiscUtils::isContains<unsigned int>(&plant_flower_config_ptr->flower_id_list, p_flower_id) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/plant_flower_activity.cpp",
          "onGiveFriendFlowerReq",
          775);
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v35,
                (const char (*)[43])"[PLANT_FLOWER] can not give friend flower:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, p_flower_id);
        v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" schedule_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->schedule_id_);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_15:
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v35);
        FriendFlowerData = -1;
        goto LABEL_34;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v32);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.home_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v17 = !HomeWorldExcelConfigMgr::isCustomNodeFurnitrue(p_home_config_mgr, *p_flower_id);
      std::shared_ptr<Config>::~shared_ptr(&v32);
      if ( v17 )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/plant_flower_activity.cpp",
          "onGiveFriendFlowerReq",
          782);
        v18 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v35,
                (const char (*)[63])"[PLANT_FLOWER] flower is not custom node furnitrue, flower_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, p_flower_id);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" schedule_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->schedule_id_);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_15;
      }
      if ( *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v22 = p_flower_id[1];
      if ( *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ret = PlantFlowerActivity::checkGiveFlowerNumLimit(this, *p_flower_id, v22);
      if ( ret )
      {
        FriendFlowerData = ret;
        goto LABEL_34;
      }
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    proto::ServerPlantFlowerGetFriendFlowerDataReq::ServerPlantFlowerGetFriendFlowerDataReq((proto::ServerPlantFlowerGetFriendFlowerDataReq *const)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ServerPlantFlowerGetFriendFlowerDataReq::set_schedule_id(
      (proto::ServerPlantFlowerGetFriendFlowerDataReq *const)(v3 + 48),
      this->schedule_id_);
    proto::ServerPlantFlowerGetFriendFlowerDataReq::set_friend_uid(
      (proto::ServerPlantFlowerGetFriendFlowerDataReq *const)(v3 + 48),
      friend_uid);
    v23 = proto::ServerPlantFlowerGetFriendFlowerDataReq::mutable_give_flower_num_map((proto::ServerPlantFlowerGetFriendFlowerDataReq *const)(v3 + 48));
    common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
      flower_num_map,
      v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    FriendFlowerData = sendProtoToSocialService<proto::ServerPlantFlowerGetFriendFlowerDataReq>(
                         this->player_,
                         (proto::ServerPlantFlowerGetFriendFlowerDataReq *)(v3 + 48));
    proto::ServerPlantFlowerGetFriendFlowerDataReq::~ServerPlantFlowerGetFriendFlowerDataReq((proto::ServerPlantFlowerGetFriendFlowerDataReq *const)(v3 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onGiveFriendFlowerReq",
      766);
    v7 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v35,
           (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->schedule_id_);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    FriendFlowerData = 5;
  }
LABEL_34:
  result = FriendFlowerData;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 803: range 0000000016C0FB30-0000000016C103B5
__int64 __fastcall PlantFlowerActivity::doGiveFriendFlower(
        PlantFlowerActivity *const this,
        uint32_t friend_uid,
        const google::protobuf::Map<unsigned int,unsigned int> *give_flower_num_map,
        const google::protobuf::Map<unsigned int,unsigned int> *have_flower_num_map,
        std::vector<unsigned int> *limit_flower_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  google::protobuf::Map<unsigned int,unsigned int>::const_pointer v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  unsigned int v14; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t Uid; // eax
  google::protobuf::Map<unsigned int,unsigned int> *v18; // rax
  proto::OfflineOpContext *v19; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v20; // rax
  PlayerOfflineOpComp *OfflineOpComp; // rax
  __int64 result; // rax
  std::string v23; // [rsp+0h] [rbp-230h]
  const google::protobuf::Map<unsigned int,unsigned int> *give_flower_num_mapa; // [rsp+18h] [rbp-218h]
  unsigned int val; // [rsp+38h] [rbp-1F8h] BYREF
  uint32_t new_flower_num; // [rsp+3Ch] [rbp-1F4h]
  int ret; // [rsp+40h] [rbp-1F0h]
  uint32_t flower_stack_limit; // [rsp+44h] [rbp-1ECh]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-1E8h]
  proto::OfflineOpBin *offline_op_bin; // [rsp+50h] [rbp-1E0h]
  proto::OfflineOpPlantFlowerActivityGiveFlower *give_flower_op; // [rsp+58h] [rbp-1D8h]
  proto::OfflineOpPlantFlowerActivityGiveFlowerContext *give_flower_op_context; // [rsp+60h] [rbp-1D0h]
  const unsigned int *p_flower_id; // [rsp+68h] [rbp-1C8h]
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+70h] [rbp-1C0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+80h] [rbp-1B0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+A0h] [rbp-190h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator b; // [rsp+C0h] [rbp-170h] BYREF
  common::milog::MiLogStream v38; // [rsp+E0h] [rbp-150h] BYREF
  char v39[304]; // [rsp+100h] [rbp-130h] BYREF

  *(&v23._anon_0._M_allocated_capacity + 1) = (std::string::size_type)give_flower_num_map;
  v23._anon_0._M_allocated_capacity = (std::string::size_type)have_flower_num_map;
  v23._M_string_length = (std::string::size_type)limit_flower_vec;
  v5 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 1 10 holder:834 64 4 14 friend_uid:801 80 16 13 event_ptr:836 112 24 8 iter:808 176 40 19 o"
                        "ffline_op_data:840";
  *(_QWORD *)(v5 + 16) = PlantFlowerActivity::doGiveFriendFlower;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = -218959360;
  v7[536862725] = 62194;
  v7[536862726] = -218103808;
  v7[536862727] = -202116109;
  *(_DWORD *)(v5 + 64) = friend_uid;
  __for_range = (const google::protobuf::Map<unsigned int,unsigned int> *)*(&v23._anon_0._M_allocated_capacity + 1);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    &__for_begin,
    *((const google::protobuf::Map<unsigned int,unsigned int> *const *)&v23._anon_0._M_allocated_capacity + 1));
  google::protobuf::Map<unsigned int,unsigned int>::end(
    &__for_end,
    *((const google::protobuf::Map<unsigned int,unsigned int> *const *)&v23._anon_0._M_allocated_capacity + 1));
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_flower_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    new_flower_num = p_flower_id[1];
    google::protobuf::Map<unsigned int,unsigned int>::find(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v5 + 112),
      (const google::protobuf::Map<unsigned int,unsigned int> *const)v23._anon_0._M_allocated_capacity,
      p_flower_id);
    google::protobuf::Map<unsigned int,unsigned int>::end(
      &b,
      (const google::protobuf::Map<unsigned int,unsigned int> *const)v23._anon_0._M_allocated_capacity);
    if ( google::protobuf::operator!=(
           (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v5 + 112),
           &b) )
    {
      v8 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator->((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)(v5 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      new_flower_num += v8->second;
    }
    if ( *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    flower_stack_limit = PlantFlowerActivity::getFlowerStackLimit(this, *p_flower_id, 0);
    if ( new_flower_num > flower_stack_limit )
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)v23._M_string_length, p_flower_id);
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)v23._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "doGiveFriendFlower",
      823);
    v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v38,
           (const char (*)[53])"[PLANT_FLOWER] friend flower reach limit, friend_uid");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])" limit_flower_vec:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int>(
            v11,
            (const std::vector<unsigned int> *)v23._M_string_length);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v38);
    v14 = 10057;
  }
  else
  {
    ret = PlantFlowerActivity::subGiveFlower(
            this,
            *((const google::protobuf::Map<unsigned int,unsigned int> **)&v23._anon_0._M_allocated_capacity + 1));
    if ( ret )
    {
      v14 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v38, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xDC7u, v23);
      std::string::~string(&v38);
      PlantFlowerActivity::logFlowerNumChange<google::protobuf::Map<unsigned int,unsigned int>>(
        this,
        *(_DWORD *)(v5 + 64),
        give_flower_num_mapa,
        1u);
      common::tools::perf::make_shared<PlantFlowerGiveFlowerEvent>();
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<PlantFlowerGiveFlowerEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<PlantFlowerGiveFlowerEvent> *)(v5 + 80));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      proto::OfflineOpData::OfflineOpData((proto::OfflineOpData *const)(v5 + 176));
      proto::OfflineOpData::set_max_length((proto::OfflineOpData *const)(v5 + 176), 0x32u);
      offline_op_bin = proto::OfflineOpData::mutable_bin((proto::OfflineOpData *const)(v5 + 176));
      give_flower_op = proto::OfflineOpBin::mutable_plant_flower_give_flower_op(offline_op_bin);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      proto::OfflineOpPlantFlowerActivityGiveFlower::set_uid(give_flower_op, Uid);
      v18 = proto::OfflineOpPlantFlowerActivityGiveFlower::mutable_flower_num_map(give_flower_op);
      common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        give_flower_num_mapa,
        v18);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::OfflineOpPlantFlowerActivityGiveFlower::set_schedule_id(give_flower_op, this->schedule_id_);
      v19 = proto::OfflineOpData::mutable_context((proto::OfflineOpData *const)(v5 + 176));
      give_flower_op_context = proto::OfflineOpContext::mutable_plant_flower_give_flower_context(v19);
      proto::OfflineOpPlantFlowerActivityGiveFlowerContext::set_uid(give_flower_op_context, *(_DWORD *)(v5 + 64));
      v20 = proto::OfflineOpPlantFlowerActivityGiveFlowerContext::mutable_flower_num_map(give_flower_op_context);
      common::tools::MiscUtils::toProtoMap<google::protobuf::Map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        give_flower_num_mapa,
        v20);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      OfflineOpComp = Player::getOfflineOpComp(this->player_);
      PlayerOfflineOpComp::sendOfflineOp(
        OfflineOpComp,
        *(_DWORD *)(v5 + 64),
        OFFLINE_OP_PLANT_FLOWER_ACTIVITY_GIVE_FLOWER,
        (proto::OfflineOpData *)(v5 + 176));
      v14 = 0;
      proto::OfflineOpData::~OfflineOpData((proto::OfflineOpData *const)(v5 + 176));
      std::shared_ptr<PlantFlowerGiveFlowerEvent>::~shared_ptr((std::shared_ptr<PlantFlowerGiveFlowerEvent> *const)(v5 + 80));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
    }
  }
  result = v14;
  if ( v39 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 855: range 0000000016C103B6-0000000016C1065E
__int64 __fastcall PlantFlowerActivity::checkGiveFlowerNumLimit(
        PlantFlowerActivity *const this,
        uint32_t flower_id,
        uint32_t give_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 19 cost_flower_num:857 48 4 19 have_flower_num:858 64 4 13 flower_id:854";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::checkGiveFlowerNumLimit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = flower_id;
  *(_DWORD *)(v3 + 32) = give_num + PlantFlowerActivity::getUsedFlowerNum(this, *(_DWORD *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  *(_DWORD *)(v3 + 48) = PlayerItemComp::getItemCount(ItemComp, *(_DWORD *)(v3 + 64));
  if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "checkGiveFlowerNumLimit",
      861);
    v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v17,
           (const char (*)[45])"[PLANT_FLOWER] flower not enough, flower_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" have_flower_num:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" cost_flower_num:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 10058LL;
  }
  if ( v18 == (char *)v3 )
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
  return result;
};

// Line 869: range 0000000016C10660-0000000016C10BE8
int32_t __cdecl PlantFlowerActivity::subGiveFlower(
        PlantFlowerActivity *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *give_flower_num_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // esi
  int32_t v6; // r14d
  std::vector<ItemParam>::value_type *v7; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-164h] BYREF
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-160h]
  const unsigned int *p_flower_id; // [rsp+28h] [rbp-158h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-130h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-110h] BYREF
  char v22[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 ret:870 64 8 19 sub_item_reason:894 96 16 13 del_param:880 128 24 17 del_param_vec:871";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::subGiveFlower;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = 0;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 128));
  __for_range = give_flower_num_map;
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_flower_num_map);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_flower_num_map);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_flower_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = p_flower_id[1];
    if ( *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = PlantFlowerActivity::checkGiveFlowerNumLimit(this, *p_flower_id, v5);
    if ( *(_DWORD *)(v2 + 48) )
    {
      v6 = *(_DWORD *)(v2 + 48);
      goto LABEL_30;
    }
    *(_DWORD *)(v2 + 96) = 0;
    *(_DWORD *)(v2 + 100) = 0;
    *(_DWORD *)(v2 + 104) = 0;
    *(_DWORD *)(v2 + 108) = 0;
    if ( *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 96) = *p_flower_id;
    if ( *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_flower_id + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 100) = p_flower_id[1];
    if ( *(_DWORD *)(v2 + 100) )
    {
      v7 = std::move<ItemParam &>((ItemParam *)(v2 + 96));
      std::vector<ItemParam>::push_back((std::vector<ItemParam> *const)(v2 + 128), v7);
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  *(_DWORD *)(v2 + 48) = PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v2 + 128));
  if ( *(_DWORD *)(v2 + 48) )
  {
    v6 = *(_DWORD *)(v2 + 48);
  }
  else
  {
    SubItemReason::SubItemReason((SubItemReason *const)(v2 + 64), ACTION_REASON_PLANT_FLOWER_GIVE_FLOWER);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = Player::getItemComp(this->player_);
    *(_DWORD *)(v2 + 48) = PlayerItemComp::subItemBatch(
                             v9,
                             (const std::vector<ItemParam> *)(v2 + 128),
                             (const SubItemReason *)(v2 + 64));
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/plant_flower_activity.cpp",
        "subGiveFlower",
        898);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v21,
              (const char (*)[39])"[PLANT_FLOWER] subItemBatch fail, ret:");
      v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" schedule_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->schedule_id_);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    v6 = *(_DWORD *)(v2 + 48);
  }
LABEL_30:
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 128));
  result = v6;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 904: range 0000000016C10BEA-0000000016C10F32
void __cdecl PlantFlowerActivity::onSendOfflineOpRsp(
        PlantFlowerActivity *const this,
        const proto::SendOfflineOpRsp *server_rsp)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const proto::OfflineOpContext *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  int val; // [rsp+10h] [rbp-E0h] BYREF
  unsigned int Uid; // [rsp+14h] [rbp-DCh] BYREF
  const proto::OfflineOpPlantFlowerActivityGiveFlowerContext *give_flower_op_context; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 14 friend_uid:906 48 48 7 rsp:915";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onSendOfflineOpRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  v5 = proto::SendOfflineOpRsp::context(server_rsp);
  give_flower_op_context = proto::OfflineOpContext::plant_flower_give_flower_context(v5);
  *(_DWORD *)(v2 + 32) = proto::OfflineOpPlantFlowerActivityGiveFlowerContext::uid(give_flower_op_context);
  if ( proto::SendOfflineOpRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onSendOfflineOpRsp",
      911);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v14,
           (const char (*)[40])"[PLANT_FLOWER] onSendOfflineOpRsp, ret:");
    val = proto::SendOfflineOpRsp::retcode(server_rsp);
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" friend_uid:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  proto::PlantFlowerGiveFriendFlowerRsp::PlantFlowerGiveFriendFlowerRsp((proto::PlantFlowerGiveFriendFlowerRsp *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlantFlowerGiveFriendFlowerRsp::set_schedule_id(
    (proto::PlantFlowerGiveFriendFlowerRsp *const)(v2 + 48),
    this->schedule_id_);
  proto::PlantFlowerGiveFriendFlowerRsp::set_retcode((proto::PlantFlowerGiveFriendFlowerRsp *const)(v2 + 48), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
  proto::PlantFlowerGiveFriendFlowerRsp::~PlantFlowerGiveFriendFlowerRsp((proto::PlantFlowerGiveFriendFlowerRsp *const)(v2 + 48));
  if ( v15 == (char *)v2 )
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

// Line 922: range 0000000016C10F34-0000000016C11554
void __cdecl PlantFlowerActivity::onOfflineOpExec(PlantFlowerActivity *const this, const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  uint32_t schedule_id; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r12
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  RecvFlowerRecord *v20; // r12
  const google::protobuf::Map<unsigned int,unsigned int> *v21; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-A0h] BYREF
  const proto::OfflineOpPlantFlowerActivityGiveFlower *give_flower_op; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v25; // [rsp+30h] [rbp-90h] BYREF
  char v26[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 friend_uid:935";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onOfflineOpExec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onOfflineOpExec",
      925);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v25,
           (const char (*)[41])"[PLANT_FLOWER] activity is settled. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_25;
  }
  give_flower_op = proto::OfflineOpBin::plant_flower_give_flower_op(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  schedule_id = this->schedule_id_;
  if ( schedule_id != proto::OfflineOpPlantFlowerActivityGiveFlower::schedule_id(give_flower_op) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onOfflineOpExec",
      931);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v25,
           (const char (*)[57])"[PLANT_FLOWER] old offline message. messege schedule_id:");
    *(_DWORD *)(v2 + 32) = proto::OfflineOpPlantFlowerActivityGiveFlower::schedule_id(give_flower_op);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" now schedule_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->schedule_id_);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  *(_DWORD *)(v2 + 32) = proto::OfflineOpPlantFlowerActivityGiveFlower::uid(give_flower_op);
  if ( std::unordered_map<unsigned int,RecvFlowerRecord>::size(&this->recv_flower_record_map_) > 0x18F
    && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,RecvFlowerRecord>,unsigned int>(
          &this->recv_flower_record_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onOfflineOpExec",
      938);
    v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v25,
            (const char (*)[49])"[PLANT_FLOWER] recv flower record reach max num:");
    v23 = std::unordered_map<unsigned int,RecvFlowerRecord>::size(&this->recv_flower_record_map_);
    v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &v23);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" friend_uid:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onOfflineOpExec",
      941);
    v17 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            &v25,
            (const char (*)[64])"[PLANT_FLOWER] recv friend give flower offline msg, friend_uid:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
    v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v20 = std::unordered_map<unsigned int,RecvFlowerRecord>::operator[](
            &this->recv_flower_record_map_,
            (const std::unordered_map<unsigned int,RecvFlowerRecord>::key_type *)(v2 + 32));
    v21 = proto::OfflineOpPlantFlowerActivityGiveFlower::flower_num_map(give_flower_op);
    RecvFlowerRecord::updateByGive(v20, v21);
    PlantFlowerActivity::sendHaveRecvFlowerNotify(this);
  }
LABEL_25:
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 948: range 0000000016C11556-0000000016C11630
std::set<unsigned int> *__cdecl PlantFlowerActivity::getRecvFlowerUids(
        std::set<unsigned int> *retstr,
        PlantFlowerActivity *const this)
{
  std::unordered_map<unsigned int,RecvFlowerRecord>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,RecvFlowerRecord>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,RecvFlowerRecord> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,RecvFlowerRecord> *v6; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,RecvFlowerRecord> >::type *uid; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *_; // [rsp+38h] [rbp-18h]

  std::set<unsigned int>::set(retstr);
  __for_range = &this->recv_flower_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::begin(&this->recv_flower_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::end(&this->recv_flower_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,RecvFlowerRecord>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,RecvFlowerRecord>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *)std::get<1ul,unsigned int const,RecvFlowerRecord>(v6);
    std::set<unsigned int>::insert(retstr, uid);
    std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 958: range 0000000016C11632-0000000016C11B63
void __cdecl PlantFlowerActivity::onServerGetFriendBriefRsp(
        PlantFlowerActivity *const this,
        const proto::ServerGetFriendBriefRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const proto::ProfilePicture *v5; // rax
  google::protobuf::uint32 v6; // eax
  const proto::ProfilePicture *v7; // rax
  google::protobuf::uint32 v8; // eax
  const std::string *v9; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v10; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::pointer v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  google::protobuf::int32 v17; // eax
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false> __y; // [rsp+28h] [rbp-138h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+30h] [rbp-130h]
  const proto::FriendBrief *friend_brief; // [rsp+38h] [rbp-128h]
  proto::PlantFlowerRecvFlowerData *record; // [rsp+40h] [rbp-120h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-110h] BYREF
  char v27[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:969 64 8 15 record_iter:970 96 56 7 rsp:959";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onServerGetFriendBriefRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::PlantFlowerGetRecvFlowerListRsp::PlantFlowerGetRecvFlowerListRsp((proto::PlantFlowerGetRecvFlowerListRsp *const)(v2 + 96));
  if ( !proto::ServerGetFriendBriefRsp::retcode(server_rsp) )
  {
    __for_range = proto::ServerGetFriendBriefRsp::friend_brief_list(server_rsp);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
      *(_DWORD *)(v2 + 48) = proto::FriendBrief::uid(friend_brief);
      *(std::unordered_map<unsigned int,RecvFlowerRecord>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,RecvFlowerRecord>::find(
                                                                                    &this->recv_flower_record_map_,
                                                                                    (const std::unordered_map<unsigned int,RecvFlowerRecord>::key_type *)(v2 + 48));
      __y._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::end(&this->recv_flower_record_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,RecvFlowerRecord>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false> *)(v2 + 64),
             &__y) )
      {
        record = proto::PlantFlowerGetRecvFlowerListRsp::add_recv_flower_list((proto::PlantFlowerGetRecvFlowerListRsp *const)(v2 + 96));
        proto::PlantFlowerRecvFlowerData::set_uid(record, *(_DWORD *)(v2 + 48));
        profile_picture_proto = proto::PlantFlowerRecvFlowerData::mutable_profile_picture(record);
        v5 = proto::FriendBrief::profile_picture(friend_brief);
        v6 = proto::ProfilePicture::avatar_id(v5);
        proto::ProfilePicture::set_avatar_id(profile_picture_proto, v6);
        v7 = proto::FriendBrief::profile_picture(friend_brief);
        v8 = proto::ProfilePicture::costume_id(v7);
        proto::ProfilePicture::set_costume_id(profile_picture_proto, v8);
        v9 = proto::FriendBrief::nickname[abi:cxx11](friend_brief);
        proto::PlantFlowerRecvFlowerData::set_nickname(record, v9);
        v10 = proto::PlantFlowerRecvFlowerData::mutable_flower_num_map(record);
        v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false> *const)(v2 + 64));
        common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
          &v11->second.flower_num_map,
          v10);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/plant_flower_activity.cpp",
          "onServerGetFriendBriefRsp",
          984);
        v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v26,
                (const char (*)[55])"[PLANT_FLOWER] recv flower data not found, friend uid:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])"schedule_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->schedule_id_);
        v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
    }
  }
  v17 = proto::ServerGetFriendBriefRsp::retcode(server_rsp);
  proto::PlantFlowerGetRecvFlowerListRsp::set_retcode((proto::PlantFlowerGetRecvFlowerListRsp *const)(v2 + 96), v17);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PlantFlowerGetRecvFlowerListRsp::set_schedule_id(
    (proto::PlantFlowerGetRecvFlowerListRsp *const)(v2 + 96),
    this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
  proto::PlantFlowerGetRecvFlowerListRsp::~PlantFlowerGetRecvFlowerListRsp((proto::PlantFlowerGetRecvFlowerListRsp *const)(v2 + 96));
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 996: range 0000000016C11B64-0000000016C1229F
int32_t __cdecl PlantFlowerActivity::setFlowerWish(
        PlantFlowerActivity *const this,
        const google::protobuf::Map<unsigned int,unsigned int> *flower_num_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  int32_t result; // eax
  google::protobuf::Map<unsigned int,unsigned int>::size_type v10; // rcx
  common::milog::MiLogStream *v11; // r13
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r13
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-100h] BYREF
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+28h] [rbp-F8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  const unsigned int *p_flower_id; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v27; // [rsp+40h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-90h] BYREF
  char v31[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 event_ptr:1028";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::setFlowerWish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                              p_activity_plant_flower_config_mgr,
                              this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( plant_flower_config_ptr )
  {
    v10 = google::protobuf::Map<unsigned int,unsigned int>::size(flower_num_map);
    if ( *(_BYTE *)(((unsigned __int64)&plant_flower_config_ptr->max_wish_flower_kinds >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&plant_flower_config_ptr->max_wish_flower_kinds >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v10 <= plant_flower_config_ptr->max_wish_flower_kinds )
    {
      __for_range = flower_num_map;
      google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, flower_num_map);
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, flower_num_map);
      while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
      {
        p_flower_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
        if ( !common::tools::MiscUtils::isContains<unsigned int>(&plant_flower_config_ptr->flower_id_list, p_flower_id) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/plant_flower_activity.cpp",
            "setFlowerWish",
            1017);
          v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v30,
                  (const char (*)[36])"[PLANT_FLOWER] can not wish flower:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, p_flower_id);
          v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v17,
                  (const char (*)[14])" schedule_id:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->schedule_id_);
          v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          common::milog::MiLogStream::~MiLogStream(&v30);
          result = -1;
          goto LABEL_28;
        }
        google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
      }
      std::unordered_map<unsigned int,unsigned int>::clear(&this->wish_flower_num_map_);
      common::tools::MiscUtils::fromProtoMap<std::unordered_map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
        &this->wish_flower_num_map_,
        flower_num_map);
      if ( !std::unordered_map<unsigned int,unsigned int>::empty(&this->wish_flower_num_map_) )
      {
        common::tools::perf::make_shared<PlantFlowerSetWishEvent>();
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<PlantFlowerSetWishEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v27,
          (const std::shared_ptr<PlantFlowerSetWishEvent> *)(v2 + 32));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v27);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v27);
        std::shared_ptr<PlantFlowerSetWishEvent>::~shared_ptr((std::shared_ptr<PlantFlowerSetWishEvent> *const)(v2 + 32));
      }
      BaseActivity::notifyClientData(this, 0);
      PlantFlowerActivity::logSetFlowerWish(this);
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/plant_flower_activity.cpp",
        "setFlowerWish",
        1007);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v30,
              (const char (*)[34])"[PLANT_FLOWER] wish flower kinds:");
      v23 = google::protobuf::Map<unsigned int,unsigned int>::size(flower_num_map);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &v23);
      v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              v12,
              (const char (*)[36])" bigger than max_wish_flower_kinds:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &plant_flower_config_ptr->max_wish_flower_kinds);
      v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = 10059;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "setFlowerWish",
      1000);
    v6 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
           &v30,
           (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->schedule_id_);
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 5;
  }
LABEL_28:
  if ( v31 == (char *)v2 )
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

// Line 1039: range 0000000016C122A0-0000000016C12ADE
__int64 __fastcall PlantFlowerActivity::onAcceptGiveFlowerReq(
        PlantFlowerActivity *const this,
        __int32 friend_uid,
        proto::PlantFlowerAcceptGiveFlowerRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v13; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v15; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v16; // r14d
  unsigned int *v17; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v18; // rdx
  common::milog::MiLogStream *v19; // r14
  PlayerBasicComp *BasicComp; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v21; // r14
  uint32_t v22; // eax
  __int64 result; // rax
  std::string v24; // [rsp+0h] [rbp-180h]
  PlantFlowerActivity *const thisa; // [rsp+18h] [rbp-168h]
  unsigned int val; // [rsp+20h] [rbp-160h] BYREF
  int ret; // [rsp+24h] [rbp-15Ch]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  proto::PlantFlowerAcceptFlowerResultInfo *accept_flower_result_info; // [rsp+38h] [rbp-148h]
  const RecvFlowerRecord *recv_flower_record; // [rsp+40h] [rbp-140h]
  google::protobuf::Map<unsigned int,unsigned int> *accept_flower_num_map; // [rsp+48h] [rbp-138h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,unsigned int> *v34; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v37; // [rsp+70h] [rbp-110h] BYREF
  char v38[240]; // [rsp+90h] [rbp-F0h] BYREF

  *(&v24._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v24._anon_0._M_allocated_capacity) = friend_uid;
  v24._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 11 holder:1077 64 4 15 friend_uid:1038 80 8 9 iter:1043 112 48 24 recv_flower_num_map:1051";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::onAcceptGiveFlowerReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 64) = friend_uid;
  accept_flower_result_info = proto::PlantFlowerAcceptGiveFlowerRsp::mutable_accept_flower_result_info((proto::PlantFlowerAcceptGiveFlowerRsp *const)v24._M_string_length);
  proto::PlantFlowerAcceptFlowerResultInfo::set_uid(accept_flower_result_info, *(_DWORD *)(v3 + 64));
  *(std::unordered_map<unsigned int,RecvFlowerRecord>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,RecvFlowerRecord>::find(
                                                                                &this->recv_flower_record_map_,
                                                                                (const std::unordered_map<unsigned int,RecvFlowerRecord>::key_type *)(v3 + 64));
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,RecvFlowerRecord>::end(&this->recv_flower_record_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,RecvFlowerRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false> *)(v3 + 80),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false> *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onAcceptGiveFlowerReq",
      1046);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v37,
           (const char (*)[63])"[PLANT_FLOWER] not find friend recv flower record, friend_uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v37);
    v9 = -1;
  }
  else
  {
    recv_flower_record = &std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false> *const)(v3 + 80))->second;
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
    if ( PlantFlowerActivity::checkCanAddRecvFlower(this, &recv_flower_record->flower_num_map) )
    {
      PlantFlowerActivity::getRecvFlower(
        this,
        (std::map<unsigned int,unsigned int> *)(v3 + 112),
        recv_flower_record,
        accept_flower_result_info);
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/plant_flower_activity.cpp",
        "onAcceptGiveFlowerReq",
        1055);
      v10 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              &v37,
              (const char (*)[62])"[PLANT_FLOWER]  cannot direct accept give flower, friend_uid:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    else
    {
      accept_flower_num_map = proto::PlantFlowerAcceptFlowerResultInfo::mutable_accept_flower_num_map(accept_flower_result_info);
      __for_range = &recv_flower_record->flower_num_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&recv_flower_record->flower_num_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        flower_id = std::get<0ul,unsigned int const,unsigned int>(v34);
        num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v34);
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v13 = *num;
        v14 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 112),
                flower_id);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v14);
        }
        *v15 = v13;
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v16 = *num;
        v17 = google::protobuf::Map<unsigned int,unsigned int>::operator[](accept_flower_num_map, flower_id);
        v18 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v17);
        }
        *v18 = v16;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
    }
    ret = PlantFlowerActivity::addRecvFlower(this, (const std::map<unsigned int,unsigned int> *)(v3 + 112));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/plant_flower_activity.cpp",
        "onAcceptGiveFlowerReq",
        1070);
      v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v37,
              (const char (*)[41])"[PLANT_FLOWER] addRecvFlower fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v9 = ret;
    }
    else
    {
      PlantFlowerActivity::updateRecvFlowerRecordByAccept(this, accept_flower_result_info);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v37, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDC7u, v24);
      std::string::~string(&v37);
      v21 = proto::PlantFlowerAcceptFlowerResultInfo::accept_flower_num_map(accept_flower_result_info);
      v22 = proto::PlantFlowerAcceptFlowerResultInfo::uid(accept_flower_result_info);
      PlantFlowerActivity::logFlowerNumChange<google::protobuf::Map<unsigned int,unsigned int>>(thisa, v22, v21, 2u);
      v9 = 0;
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 112));
  }
  result = v9;
  if ( v38 == (char *)v3 )
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

// Line 1083: range 0000000016C12AE0-0000000016C130BD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlantFlowerActivity::onAcceptAllGiveFlowerReq(
        PlantFlowerActivity *const this,
        proto::PlantFlowerAcceptAllGiveFlowerRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  int32_t M_allocated_capacity_high; // r14d
  PlayerBasicComp *BasicComp; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v9; // r14
  uint32_t v10; // eax
  int32_t result; // eax
  std::string rsp_0a; // [rsp+0h] [rbp-130h] OVERLAPPED BYREF
  std::unordered_map<unsigned int,RecvFlowerRecord>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,RecvFlowerRecord> *__for_range; // [rsp+28h] [rbp-108h]
  const std::pair<unsigned int const,RecvFlowerRecord> *v15; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,RecvFlowerRecord> >::type *friend_uid; // [rsp+38h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *record; // [rsp+40h] [rbp-F0h]
  proto::PlantFlowerAcceptFlowerResultInfo *accept_flower_result_info; // [rsp+48h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::PlantFlowerAcceptFlowerResultInfo> *__for_range_0; // [rsp+50h] [rbp-E0h]
  const proto::PlantFlowerAcceptFlowerResultInfo *accept_flower_result_info_0; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+80h] [rbp-B0h] BYREF

  rsp_0a._M_string_length = (std::string::size_type)this;
  rsp_0a._M_dataplus._M_p = (std::string::pointer)rsp_0;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 1 11 holder:1105 48 48 24 recv_flower_num_map:1084";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::onAcceptAllGiveFlowerReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
  if ( PlantFlowerActivity::tryDirectGetAllRecvFlower(
         (PlantFlowerActivity *const)rsp_0a._M_string_length,
         (std::map<unsigned int,unsigned int> *)(v2 + 48),
         (proto::PlantFlowerAcceptAllGiveFlowerRsp *)rsp_0a._M_dataplus._M_p) )
  {
    __for_range = (std::unordered_map<unsigned int,RecvFlowerRecord> *)(rsp_0a._M_string_length + 1096);
    *((std::unordered_map<unsigned int,RecvFlowerRecord>::iterator *)&rsp_0a._anon_0._M_allocated_capacity + 1) = std::unordered_map<unsigned int,RecvFlowerRecord>::begin((std::unordered_map<unsigned int,RecvFlowerRecord> *const)(rsp_0a._M_string_length + 1096));
    __for_end._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::end((std::unordered_map<unsigned int,RecvFlowerRecord> *const)(rsp_0a._M_string_length + 1096))._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,RecvFlowerRecord>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false> *)&rsp_0a._anon_0._M_allocated_capacity
            + 1,
              &__for_end) )
    {
      v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator*(
              (const std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false> *const)&rsp_0a._anon_0._M_allocated_capacity
            + 1);
      friend_uid = std::get<0ul,unsigned int const,RecvFlowerRecord>(v15);
      record = (std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *)std::get<1ul,unsigned int const,RecvFlowerRecord>(v15);
      accept_flower_result_info = proto::PlantFlowerAcceptAllGiveFlowerRsp::add_accept_flower_result_info_list((proto::PlantFlowerAcceptAllGiveFlowerRsp *const)rsp_0a._M_dataplus._M_p);
      if ( *(_BYTE *)(((unsigned __int64)friend_uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)friend_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)friend_uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::PlantFlowerAcceptFlowerResultInfo::set_uid(accept_flower_result_info, *friend_uid);
      PlantFlowerActivity::getRecvFlower(
        (PlantFlowerActivity *const)rsp_0a._M_string_length,
        (std::map<unsigned int,unsigned int> *)(v2 + 48),
        record,
        accept_flower_result_info);
      std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator++(
        (std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false> *const)&rsp_0a._anon_0._M_allocated_capacity
      + 1);
    }
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onAcceptAllGiveFlowerReq",
      1094);
    v5 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v21,
           (const char (*)[59])"[PLANT_FLOWER]  cannot direct accept all give flower, uid:");
    if ( *(_BYTE *)(((rsp_0a._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)rsp_0a._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(rsp_0a._M_string_length + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)&rsp_0a._anon_0);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  HIDWORD(rsp_0a._anon_0._M_allocated_capacity) = PlantFlowerActivity::addRecvFlower(
                                                    (PlantFlowerActivity *const)rsp_0a._M_string_length,
                                                    (const std::map<unsigned int,unsigned int> *)(v2 + 48));
  if ( HIDWORD(rsp_0a._anon_0._M_allocated_capacity) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onAcceptAllGiveFlowerReq",
      1100);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v21,
           (const char (*)[41])"[PLANT_FLOWER] addRecvFlower fails, uid:");
    if ( *(_BYTE *)(((rsp_0a._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)rsp_0a._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(rsp_0a._M_string_length + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)&rsp_0a._anon_0);
    common::milog::MiLogStream::~MiLogStream(&v21);
    M_allocated_capacity_high = HIDWORD(rsp_0a._anon_0._M_allocated_capacity);
  }
  else
  {
    if ( *(_BYTE *)(((rsp_0a._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(rsp_0a._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xDC7u, rsp_0a);
    std::string::~string(&v21);
    __for_range_0 = proto::PlantFlowerAcceptAllGiveFlowerRsp::accept_flower_result_info_list((const proto::PlantFlowerAcceptAllGiveFlowerRsp *const)rsp_0a._M_dataplus._M_p);
    *((google::protobuf::RepeatedPtrField<proto::PlantFlowerAcceptFlowerResultInfo>::const_iterator *)&rsp_0a._anon_0._M_allocated_capacity
    + 1) = google::protobuf::RepeatedPtrField<proto::PlantFlowerAcceptFlowerResultInfo>::begin(__for_range_0);
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,RecvFlowerRecord>,false>::__node_type *)google::protobuf::RepeatedPtrField<proto::PlantFlowerAcceptFlowerResultInfo>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerAcceptFlowerResultInfo const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerAcceptFlowerResultInfo> *const)&rsp_0a._anon_0._M_allocated_capacity
            + 1,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerAcceptFlowerResultInfo>::iterator *)&__for_end) )
    {
      accept_flower_result_info_0 = google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerAcceptFlowerResultInfo const>::operator*(
                                      (const google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerAcceptFlowerResultInfo> *const)&rsp_0a._anon_0._M_allocated_capacity
                                    + 1);
      PlantFlowerActivity::updateRecvFlowerRecordByAccept(
        (PlantFlowerActivity *const)rsp_0a._M_string_length,
        accept_flower_result_info_0);
      v9 = proto::PlantFlowerAcceptFlowerResultInfo::accept_flower_num_map(accept_flower_result_info_0);
      v10 = proto::PlantFlowerAcceptFlowerResultInfo::uid(accept_flower_result_info_0);
      PlantFlowerActivity::logFlowerNumChange<google::protobuf::Map<unsigned int,unsigned int>>(
        (PlantFlowerActivity *const)rsp_0a._M_string_length,
        v10,
        v9,
        2u);
      google::protobuf::internal::RepeatedPtrIterator<proto::PlantFlowerAcceptFlowerResultInfo const>::operator++(
        (google::protobuf::internal::RepeatedPtrIterator<const proto::PlantFlowerAcceptFlowerResultInfo> *const)&rsp_0a._anon_0._M_allocated_capacity
      + 1);
    }
    M_allocated_capacity_high = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
  result = M_allocated_capacity_high;
  if ( v22 == (char *)v2 )
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

// Line 1116: range 0000000016C130BE-0000000016C133A2
int32_t __cdecl PlantFlowerActivity::tryDirectGetAllRecvFlower(
        PlantFlowerActivity *const this,
        std::map<unsigned int,unsigned int> *recv_flower_num_map,
        proto::PlantFlowerAcceptAllGiveFlowerRsp *rsp_0)
{
  std::map<unsigned int,unsigned int>::mapped_type *v3; // rax
  int v4; // esi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v5; // ebx
  unsigned int *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v7; // rdx
  int32_t ret; // [rsp+2Ch] [rbp-84h]
  std::unordered_map<unsigned int,RecvFlowerRecord>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,RecvFlowerRecord>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-70h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,RecvFlowerRecord> *__for_range; // [rsp+50h] [rbp-60h]
  const std::pair<unsigned int const,RecvFlowerRecord> *v17; // [rsp+58h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,RecvFlowerRecord> >::type *friend_uid; // [rsp+60h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *record; // [rsp+68h] [rbp-48h]
  proto::PlantFlowerAcceptFlowerResultInfo *accept_flower_result_info; // [rsp+70h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *accept_flower_num_map; // [rsp+78h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+80h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v23; // [rsp+88h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+90h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+98h] [rbp-18h]

  __for_range = &this->recv_flower_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::begin(&this->recv_flower_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,RecvFlowerRecord>::end(&this->recv_flower_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,RecvFlowerRecord>,false>(&__for_begin, &__for_end) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator*(&__for_begin);
    friend_uid = std::get<0ul,unsigned int const,RecvFlowerRecord>(v17);
    record = (std::tuple_element<1,const std::pair<unsigned int const,RecvFlowerRecord> >::type *)std::get<1ul,unsigned int const,RecvFlowerRecord>(v17);
    accept_flower_result_info = proto::PlantFlowerAcceptAllGiveFlowerRsp::add_accept_flower_result_info_list(rsp_0);
    if ( *(_BYTE *)(((unsigned __int64)friend_uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)friend_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)friend_uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::PlantFlowerAcceptFlowerResultInfo::set_uid(accept_flower_result_info, *friend_uid);
    accept_flower_num_map = proto::PlantFlowerAcceptFlowerResultInfo::mutable_accept_flower_num_map(accept_flower_result_info);
    __for_range_0 = &record->flower_num_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&record->flower_num_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      flower_id = std::get<0ul,unsigned int const,unsigned int>(v23);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v23);
      v3 = std::map<unsigned int,unsigned int>::operator[](recv_flower_num_map, flower_id);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v4 = *v3;
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v3 = v4 + *num;
      v5 = *num;
      v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](accept_flower_num_map, flower_id);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v6);
      }
      *v7 = v5;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,RecvFlowerRecord>,false,false>::operator++(&__for_begin);
  }
  ret = PlantFlowerActivity::checkCanAddRecvFlower(this, recv_flower_num_map);
  if ( !ret )
    return 0;
  std::map<unsigned int,unsigned int>::clear(recv_flower_num_map);
  proto::PlantFlowerAcceptAllGiveFlowerRsp::clear_accept_flower_result_info_list(rsp_0);
  return ret;
};

// Line 1140: range 0000000016C133A4-0000000016C1392F
int32_t __cdecl PlantFlowerActivity::getRecvFlower(
        PlantFlowerActivity *const this,
        std::map<unsigned int,unsigned int> *recv_flower_num_map,
        const RecvFlowerRecord *record,
        proto::PlantFlowerAcceptFlowerResultInfo *result)
{
  uint32_t ItemCount; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  int v7; // esi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v8; // ebx
  unsigned int *v9; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v10; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v14; // ebx
  unsigned int *v15; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v16; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v17; // ebx
  unsigned int *v18; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v19; // rdx
  uint32_t flower_stack_limit; // [rsp+2Ch] [rbp-74h]
  uint32_t have_flower_num; // [rsp+30h] [rbp-70h]
  uint32_t can_recv_flower_num; // [rsp+34h] [rbp-6Ch]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-68h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-60h] BYREF
  PlayerItemComp *player_item_comp; // [rsp+48h] [rbp-58h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v31; // [rsp+58h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+60h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *flower_num; // [rsp+68h] [rbp-38h]
  google::protobuf::Map<unsigned int,unsigned int> *unaccept_flower_num_map_0; // [rsp+70h] [rbp-30h]
  google::protobuf::Map<unsigned int,unsigned int> *accept_flower_num_map_0; // [rsp+78h] [rbp-28h]
  google::protobuf::Map<unsigned int,unsigned int> *unaccept_flower_num_map; // [rsp+80h] [rbp-20h]
  google::protobuf::Map<unsigned int,unsigned int> *accept_flower_num_map; // [rsp+88h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_item_comp = Player::getItemComp(this->player_);
  __for_range = &record->flower_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&record->flower_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&record->flower_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v31 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    flower_id = std::get<0ul,unsigned int const,unsigned int>(v31);
    flower_num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v31);
    if ( *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    flower_stack_limit = PlantFlowerActivity::getFlowerStackLimit(this, *flower_id, 1);
    if ( *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ItemCount = PlayerItemComp::getItemCount(player_item_comp, *flower_id);
    v5 = std::map<unsigned int,unsigned int>::operator[](recv_flower_num_map, flower_id);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    have_flower_num = ItemCount + *v5;
    if ( have_flower_num >= flower_stack_limit )
    {
      unaccept_flower_num_map_0 = proto::PlantFlowerAcceptFlowerResultInfo::mutable_unaccept_flower_num_map(result);
      if ( *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)flower_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v17 = *flower_num;
      v18 = google::protobuf::Map<unsigned int,unsigned int>::operator[](unaccept_flower_num_map_0, flower_id);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v18);
      }
      *v19 = v17;
    }
    else
    {
      can_recv_flower_num = flower_stack_limit - have_flower_num;
      if ( *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)flower_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( can_recv_flower_num < *flower_num )
      {
        v11 = std::map<unsigned int,unsigned int>::operator[](recv_flower_num_map, flower_id);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v11 += can_recv_flower_num;
        accept_flower_num_map_0 = proto::PlantFlowerAcceptFlowerResultInfo::mutable_accept_flower_num_map(result);
        v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](accept_flower_num_map_0, flower_id);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v12);
        }
        *v13 = can_recv_flower_num;
        unaccept_flower_num_map = proto::PlantFlowerAcceptFlowerResultInfo::mutable_unaccept_flower_num_map(result);
        if ( *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)flower_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v14 = *flower_num - can_recv_flower_num;
        v15 = google::protobuf::Map<unsigned int,unsigned int>::operator[](unaccept_flower_num_map, flower_id);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v15);
        }
        *v16 = v14;
      }
      else
      {
        v6 = std::map<unsigned int,unsigned int>::operator[](recv_flower_num_map, flower_id);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v7 = *v6;
        if ( *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)flower_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v6 = v7 + *flower_num;
        accept_flower_num_map = proto::PlantFlowerAcceptFlowerResultInfo::mutable_accept_flower_num_map(result);
        if ( *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)flower_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v8 = *flower_num;
        v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](accept_flower_num_map, flower_id);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v9);
        }
        *v10 = v8;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1175: range 0000000016C13930-0000000016C13C83
int32_t __cdecl PlantFlowerActivity::checkCanAddRecvFlower(
        PlantFlowerActivity *const this,
        const std::map<unsigned int,unsigned int> *recv_flower_num_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  PlayerItemComp *ItemComp; // rax
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-100h]
  const std::pair<unsigned int const,unsigned int> *v11; // [rsp+28h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+38h] [rbp-E8h]
  std::vector<ItemParam>::value_type __x; // [rsp+40h] [rbp-E0h] BYREF
  char v15[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 19 item_param_vec:1176 96 24 11 reason:1190";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::checkCanAddRecvFlower;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 32));
  __for_range = recv_flower_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(recv_flower_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(recv_flower_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    flower_id = std::get<0ul,unsigned int const,unsigned int>(v11);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v11);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *num )
    {
      if ( *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __x.item_id = *flower_id;
      __x.count = *num;
      __x.level = 0;
      __x.promote_level = 0;
      std::vector<ItemParam>::push_back((std::vector<ItemParam> *const)(v2 + 32), &__x);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v2 + 96),
      ACTION_REASON_PLANT_FLOWER_RECV_FLOWER,
      ITEM_LIMIT_ACTIVITY_PLANT_FLOWER);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    v5 = PlayerItemComp::checkAddItemBatch(
           ItemComp,
           (const std::vector<ItemParam> *)(v2 + 32),
           (const ActionReason *)(v2 + 96));
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 32));
  result = v5;
  if ( v15 == (char *)v2 )
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
  return result;
};

// Line 1195: range 0000000016C13C84-0000000016C14111
int32_t __cdecl PlantFlowerActivity::addRecvFlower(
        PlantFlowerActivity *const this,
        const std::map<unsigned int,unsigned int> *recv_flower_num_map)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int32_t v5; // r14d
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v7; // r14
  PlayerItemComp *v8; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-138h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-134h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-120h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+38h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+40h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-108h]
  std::vector<ItemParam>::value_type __x; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+80h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 19 item_param_vec:1197 96 24 11 reason:1211";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::addRecvFlower;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 32));
  __for_range = recv_flower_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(recv_flower_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(recv_flower_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    flower_id = std::get<0ul,unsigned int const,unsigned int>(v15);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *num )
    {
      if ( *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      __x.item_id = *flower_id;
      __x.count = *num;
      __x.level = 0;
      __x.promote_level = 0;
      std::vector<ItemParam>::push_back((std::vector<ItemParam> *const)(v2 + 32), &__x);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v2 + 96),
      ACTION_REASON_PLANT_FLOWER_RECV_FLOWER,
      ITEM_LIMIT_ACTIVITY_PLANT_FLOWER);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    ret = PlayerItemComp::checkAddItemBatch(
            ItemComp,
            (const std::vector<ItemParam> *)(v2 + 32),
            (const ActionReason *)(v2 + 96));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/plant_flower_activity.cpp",
        "addRecvFlower",
        1215);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v19,
             (const char (*)[45])"[PLANT_FLOWER] checkAddItemBatch fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = ret;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = Player::getItemComp(this->player_);
      PlayerItemComp::addItemBatch(v8, (const std::vector<ItemParam> *)(v2 + 32), (const ActionReason *)(v2 + 96), 0LL);
      v5 = 0;
    }
  }
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
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
  return result;
};

// Line 1224: range 0000000016C14112-0000000016C14240
void __cdecl PlantFlowerActivity::updateRecvFlowerRecordByAccept(
        PlantFlowerActivity *const this,
        const proto::PlantFlowerAcceptFlowerResultInfo *result)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  RecvFlowerRecord *v5; // rdx
  const google::protobuf::Map<unsigned int,unsigned int> *unaccept_flower_num_map; // [rsp+18h] [rbp-68h]
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 friend_uid:1225";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::updateRecvFlowerRecordByAccept;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::PlantFlowerAcceptFlowerResultInfo::uid(result);
  unaccept_flower_num_map = proto::PlantFlowerAcceptFlowerResultInfo::unaccept_flower_num_map(result);
  if ( google::protobuf::Map<unsigned int,unsigned int>::empty(unaccept_flower_num_map) )
  {
    std::unordered_map<unsigned int,RecvFlowerRecord>::erase(
      &this->recv_flower_record_map_,
      (const std::unordered_map<unsigned int,RecvFlowerRecord>::key_type *)(v2 + 32));
  }
  else
  {
    v5 = std::unordered_map<unsigned int,RecvFlowerRecord>::operator[](
           &this->recv_flower_record_map_,
           (const std::unordered_map<unsigned int,RecvFlowerRecord>::key_type *)(v2 + 32));
    RecvFlowerRecord::updateByAccept(v5, unaccept_flower_num_map);
  }
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1238: range 0000000016C14242-0000000016C146E7
__int64 __fastcall PlantFlowerActivity::getFlowerStackLimit(
        PlantFlowerActivity *const this,
        uint32_t flower_id,
        bool is_self)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  const data::HomeWorldFurnitureExcelConfig *home_furniture_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v22; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 25 furniture_item_limit:1242 48 4 24 total_furniture_num:1243 64 4 14 flower_id:1237";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::getFlowerStackLimit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = flower_id;
  if ( is_self )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    *(_DWORD *)(v3 + 32) = ConstValueExcelConfigMgr::getFurnitureItemLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    *(_DWORD *)(v3 + 48) = PlayerItemComp::getTotalFurnitureNum(ItemComp);
    if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/plant_flower_activity.cpp",
        "getFlowerStackLimit",
        1246);
      v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             &v23,
             (const char (*)[59])"[PLANT_FLOWER] furniture total num reach limit, flower id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v9,
              (const char (*)[22])" total_furniture_num:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v11,
              (const char (*)[23])" furniture_item_limit:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_10:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0LL;
      goto LABEL_18;
    }
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  home_furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                                &v16->design_config.txt_config_mgr.home_config_mgr,
                                *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( !home_furniture_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/plant_flower_activity.cpp",
      "getFlowerStackLimit",
      1255);
    v17 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
            &v23,
            (const char (*)[66])"[PLANT_FLOWER] not find flower furniture excel config, flower id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 64));
    v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_10;
  }
  if ( *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)home_furniture_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->stack_limit >> 3)
                                                                              + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  result = home_furniture_config_ptr->stack_limit;
LABEL_18:
  if ( v24 == (char *)v3 )
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
  return result;
};

// Line 1262: range 0000000016C146E8-0000000016C15505
int32_t __cdecl PlantFlowerActivity::onEditFlowerCombinationReq(
        PlantFlowerActivity *const this,
        const proto::PlantFlowerEditFlowerCombinationReq *req,
        proto::PlantFlowerEditFlowerCombinationRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t OwnerUid; // r14d
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  ActivityPlantFlowerExcelConfigMgr *p_activity_plant_flower_config_mgr; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  JsonConfigMgr *p_json_config_mgr; // r14
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v34; // r15
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t GadgetId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  CustomGadgetComp *v43; // rax
  int32_t result; // eax
  unsigned int GroupId; // [rsp+20h] [rbp-200h] BYREF
  unsigned int val; // [rsp+24h] [rbp-1FCh] BYREF
  uint32_t gadget_config_id; // [rsp+28h] [rbp-1F8h]
  int32_t ret; // [rsp+2Ch] [rbp-1F4h]
  const data::ActivityPlantFlowerMainExcelConfig *plant_flower_config_ptr; // [rsp+30h] [rbp-1F0h]
  const proto::CustomGadgetTreeInfo *info; // [rsp+38h] [rbp-1E8h]
  std::shared_ptr<Config> v51; // [rsp+40h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v52; // [rsp+50h] [rbp-1D0h] BYREF
  char v53[432]; // [rsp+70h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 14 entity_id:1276 48 16 14 scene_ptr:1263 80 16 15 gadget_ptr:1277 112 16 27 custom_gadge"
                        "t_comp_ptr:1283 144 24 13 node_vec:1305 208 48 24 used_flower_num_map:1307 288 56 29 pass_part_i"
                        "tem_count_map:1308";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::onEditFlowerCombinationReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862728] = -218959118;
  v5[536862730] = -218103808;
  v5[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 48));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/plant_flower_activity.cpp",
      "onEditFlowerCombinationReq",
      1266);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v52,
           (const char (*)[39])"[PLANT_FLOWER] scene_ptr is null, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v52);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    OwnerUid = Scene::getOwnerUid(v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
    {
      *(_DWORD *)(v3 + 32) = proto::PlantFlowerEditFlowerCombinationReq::entity_id(req);
      v14 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      Scene::findEntity<Gadget>((const Scene *const)(v3 + 80), v14);
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/plant_flower_activity.cpp",
          "onEditFlowerCombinationReq",
          1280);
        v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v52,
                (const char (*)[44])"[PLANT_FLOWER] findEntity fails, entity_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v52);
        v7 = 504;
      }
      else
      {
        std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        EcsBase<Gadget,GadgetCompBase,28u>::findComp<CustomGadgetComp>((const EcsBase<Gadget,GadgetCompBase,28> *const)(v3 + 112));
        if ( std::operator==<CustomGadgetComp>(0LL, (const std::shared_ptr<CustomGadgetComp> *)(v3 + 112)) )
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/plant_flower_activity.cpp",
            "onEditFlowerCombinationReq",
            1286);
          v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v52,
                  (const char (*)[26])"[PLANT_FLOWER] entity id:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 32));
          v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v19, (const char (*)[22])off_25F05140);
          v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          common::milog::MiLogStream::~MiLogStream(&v52);
          v7 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v51);
          p_activity_plant_flower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.txt_config_mgr.activity_plant_flower_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          plant_flower_config_ptr = data::ActivityPlantFlowerExcelConfigMgrBase::findActivityPlantFlowerMainExcelConfig(
                                      p_activity_plant_flower_config_mgr,
                                      this->schedule_id_);
          std::shared_ptr<Config>::~shared_ptr(&v51);
          if ( plant_flower_config_ptr )
          {
            v26 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
            val = Entity::getGroupId((const Entity *const)v26);
            if ( !common::tools::MiscUtils::isContains<unsigned int>(&plant_flower_config_ptr->group_id_list, &val) )
            {
              common::milog::MiLogStream::create(
                &v52,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/plant_flower_activity.cpp",
                "onEditFlowerCombinationReq",
                1299);
              v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v52,
                      (const char (*)[33])"[PLANT_FLOWER] invalid group id:");
              v28 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
              GroupId = Entity::getGroupId((const Entity *const)v28);
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &GroupId);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v29,
                      (const char (*)[16])" group_id_list:");
              v31 = common::milog::MiLogStream::operator<<<unsigned int>(v30, &plant_flower_config_ptr->group_id_list);
              v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])" uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
              common::milog::MiLogStream::~MiLogStream(&v52);
              v7 = -1;
            }
            else
            {
              info = proto::PlantFlowerEditFlowerCombinationReq::flower_combination_info(req);
              std::vector<std::shared_ptr<CustomCommonNodeData>>::vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v3 + 144));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v51);
              p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51)->design_config.json_config_mgr;
              v34 = proto::CustomGadgetTreeInfo::node_list(info);
              v35 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
              GadgetId = Gadget::getGadgetId(v35);
              JsonConfigMgr::convertCustomTreeInfo(
                p_json_config_mgr,
                GadgetId,
                v34,
                (std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v3 + 144));
              std::shared_ptr<Config>::~shared_ptr(&v51);
              std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
              std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 288));
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v51);
              v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v51);
              LOBYTE(p_json_config_mgr) = JsonConfigMgr::checkCustomTreeInfo(
                                            &v37->design_config.json_config_mgr,
                                            (const std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v3 + 144),
                                            (std::map<unsigned int,unsigned int> *)(v3 + 208),
                                            (std::unordered_map<unsigned int,unsigned int> *)(v3 + 288)) != 0;
              std::shared_ptr<Config>::~shared_ptr(&v51);
              if ( (_BYTE)p_json_config_mgr )
              {
                common::milog::MiLogStream::create(
                  &v52,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/plant_flower_activity.cpp",
                  "onEditFlowerCombinationReq",
                  1311);
                v38 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                        &v52,
                        (const char (*)[52])"[PLANT_FLOWER] checkCustomTreeInfo fail, gadget_id:");
                v39 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                GroupId = Gadget::getGadgetId(v39);
                v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &GroupId);
                v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])" uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
                common::milog::MiLogStream::~MiLogStream(&v52);
                v7 = 10061;
              }
              else
              {
                v42 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
                gadget_config_id = Entity::getConfigId((const Entity *const)v42);
                ret = PlantFlowerActivity::checkUsedFlowerNumLimit(
                        this,
                        gadget_config_id,
                        (const std::map<unsigned int,unsigned int> *)(v3 + 208));
                if ( ret )
                {
                  v7 = ret;
                }
                else
                {
                  PlantFlowerActivity::updateActivityUsedFlowerInfo(
                    this,
                    gadget_config_id,
                    (std::map<unsigned int,unsigned int> *)(v3 + 208));
                  BaseActivity::notifyClientData(this, 0);
                  v43 = std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CustomGadgetComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                  CustomGadgetComp::updateCustomGadgetInfo(v43, info);
                  PlantFlowerActivity::logEditFlowerCombination(this, gadget_config_id, info);
                  v7 = 0;
                }
              }
              std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 288));
              std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
              std::vector<std::shared_ptr<CustomCommonNodeData>>::~vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v3 + 144));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/plant_flower_activity.cpp",
              "onEditFlowerCombinationReq",
              1294);
            v23 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                    &v52,
                    (const char (*)[73])"[PLANT_FLOWER] findActivityPlantFlowerMainExcelConfig fail, schedule_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->schedule_id_);
            v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
            common::milog::MiLogStream::~MiLogStream(&v52);
            v7 = -1;
          }
        }
        std::shared_ptr<CustomGadgetComp>::~shared_ptr((std::shared_ptr<CustomGadgetComp> *const)(v3 + 112));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v52,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/plant_flower_activity.cpp",
        "onEditFlowerCombinationReq",
        1272);
      v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v52,
              (const char (*)[44])"[PLANT_FLOWER] not in self scene, OwnerUid:");
      v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      GroupId = Scene::getOwnerUid(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &GroupId);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v52);
      v7 = 512;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 48));
  result = v7;
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
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

// Line 1333: range 0000000016C15506-0000000016C15CFE
int32_t __cdecl PlantFlowerActivity::checkUsedFlowerNumLimit(
        PlantFlowerActivity *const this,
        uint32_t gadget_config_id,
        const std::map<unsigned int,unsigned int> *used_flower_num_map)
{
  std::map<unsigned int,unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  int v10; // esi
  uint32_t ItemCount; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  int32_t v19; // r14d
  int32_t result; // eax
  unsigned int val; // [rsp+20h] [rbp-180h] BYREF
  unsigned int Uid; // [rsp+24h] [rbp-17Ch] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+28h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator __for_end_0; // [rsp+30h] [rbp-170h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-160h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-158h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range_0; // [rsp+50h] [rbp-150h]
  PlayerItemComp *player_item_comp; // [rsp+58h] [rbp-148h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-140h]
  const std::pair<unsigned int const,unsigned int> *v33; // [rsp+68h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id_1; // [rsp+70h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_1; // [rsp+78h] [rbp-128h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > *v36; // [rsp+80h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *flower_shelf_gadget_config_id; // [rsp+88h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *flower_shelf_used_flower_num_map; // [rsp+90h] [rbp-110h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+98h] [rbp-108h]
  const std::pair<unsigned int const,unsigned int> *v40; // [rsp+A0h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id_0; // [rsp+A8h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+B0h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v43; // [rsp+B8h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+C0h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+C8h] [rbp-D8h]
  common::milog::MiLogStream v46; // [rsp+D0h] [rbp-D0h] BYREF
  char v47[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v3 = (std::map<unsigned int,unsigned int> *)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::map<unsigned int,unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 30 total_used_flower_num_map:1334";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlantFlowerActivity::checkUsedFlowerNumLimit;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::map<unsigned int,unsigned int>::map(v3 + 1);
  __for_range = used_flower_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(used_flower_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(used_flower_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v43 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    flower_id = std::get<0ul,unsigned int const,unsigned int>(v43);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v43);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *num;
    v7 = std::map<unsigned int,unsigned int>::operator[](v3 + 1, flower_id);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = v6;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->flower_shelf_used_flower_data_map_;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(&this->flower_shelf_used_flower_data_map_)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin_0);
    flower_shelf_gadget_config_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v36);
    flower_shelf_used_flower_num_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v36);
    if ( *(_BYTE *)(((unsigned __int64)flower_shelf_gadget_config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_shelf_gadget_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_shelf_gadget_config_id >> 3)
                                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( gadget_config_id != *flower_shelf_gadget_config_id )
    {
      __for_range_1 = flower_shelf_used_flower_num_map;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(flower_shelf_used_flower_num_map)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      {
        v40 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
        flower_id_0 = std::get<0ul,unsigned int const,unsigned int>(v40);
        num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v40);
        v9 = std::map<unsigned int,unsigned int>::operator[](v3 + 1, flower_id_0);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v10 = *v9;
        if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v9 = v10 + *num_0;
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_item_comp = Player::getItemComp(this->player_);
  __for_range_2 = v3 + 1;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(v3 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
    {
      v19 = 0;
      goto LABEL_40;
    }
    v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    flower_id_1 = std::get<0ul,unsigned int const,unsigned int>(v33);
    num_1 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v33);
    if ( *(_BYTE *)(((unsigned __int64)flower_id_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ItemCount = PlayerItemComp::getItemCount(player_item_comp, *flower_id_1);
    if ( *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( ItemCount < *num_1 )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v46,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/plant_flower_activity.cpp",
    "checkUsedFlowerNumLimit",
    1357);
  v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v46,
          (const char (*)[43])"[PLANT_FLOWER] flower not enough. fish id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, flower_id_1);
  v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" need count:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, num_1);
  v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" has count:");
  if ( *(_BYTE *)(((unsigned __int64)flower_id_1 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)flower_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id_1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  val = PlayerItemComp::getItemCount(player_item_comp, *flower_id_1);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
  v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v46);
  v19 = 10060;
LABEL_40:
  std::map<unsigned int,unsigned int>::~map(v3 + 1);
  result = v19;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1367: range 0000000016C15D00-0000000016C15F2F
void __fastcall PlantFlowerActivity::updateActivityUsedFlowerInfo(
        PlantFlowerActivity *const this,
        uint32_t gadget_config_id,
        std::map<unsigned int,unsigned int> *flower_num_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r13d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,unsigned int> *used_flower_num_map; // [rsp+38h] [rbp-88h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-80h]
  const std::pair<unsigned int const,unsigned int> *v14; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-68h]
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 gadget_config_id:1366";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::updateActivityUsedFlowerInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = gadget_config_id;
  used_flower_num_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                          &this->flower_shelf_used_flower_data_map_,
                          (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  std::unordered_map<unsigned int,unsigned int>::clear(used_flower_num_map);
  __for_range = flower_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(flower_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(flower_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    flower_id = std::get<0ul,unsigned int const,unsigned int>(v14);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v14);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *num;
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](used_flower_num_map, flower_id);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = v6;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1377: range 0000000016C15F30-0000000016C1615F
void __fastcall PlantFlowerActivity::updateHomeUsedFlowerInfo(
        PlantFlowerActivity *const this,
        uint32_t home_mudule_id,
        std::map<unsigned int,unsigned int> *flower_num_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v6; // r13d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,unsigned int> *used_flower_num_map; // [rsp+38h] [rbp-88h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-80h]
  const std::pair<unsigned int const,unsigned int> *v14; // [rsp+48h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+50h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-68h]
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 19 home_mudule_id:1376";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::updateHomeUsedFlowerInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = home_mudule_id;
  used_flower_num_map = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                          &this->home_mudule_used_flower_data_map_,
                          (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  std::unordered_map<unsigned int,unsigned int>::clear(used_flower_num_map);
  __for_range = flower_num_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(flower_num_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(flower_num_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    flower_id = std::get<0ul,unsigned int const,unsigned int>(v14);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v14);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *num;
    v7 = std::unordered_map<unsigned int,unsigned int>::operator[](used_flower_num_map, flower_id);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = v6;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1387: range 0000000016C16160-0000000016C16561
__int64 __fastcall PlantFlowerActivity::getUsedFlowerNum(PlantFlowerActivity *const this, uint32_t flower_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v5; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v6; // rdx
  char v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  __int64 result; // rax
  uint32_t flower_num; // [rsp+14h] [rbp-DCh]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range; // [rsp+30h] [rbp-C0h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range_0; // [rsp+38h] [rbp-B8h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > *v16; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *__0; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *used_flower_num_map_0; // [rsp+50h] [rbp-A0h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > *v19; // [rsp+58h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *_; // [rsp+60h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *used_flower_num_map; // [rsp+68h] [rbp-88h]
  char v22[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 flower_id:1386 64 8 21 used_flower_iter:1401";
  *(_QWORD *)(v2 + 16) = PlantFlowerActivity::getUsedFlowerNum;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = flower_id;
  flower_num = 0;
  __for_range = &this->flower_shelf_used_flower_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(&this->flower_shelf_used_flower_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(&this->flower_shelf_used_flower_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v19);
    used_flower_num_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v19);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    used_flower_num_map,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(used_flower_num_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
           &__y) )
    {
      v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      flower_num += v5->second;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->home_mudule_used_flower_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(&this->home_mudule_used_flower_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin);
    __0 = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v16);
    used_flower_num_map_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v16);
    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                    used_flower_num_map_0,
                                                                                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(used_flower_num_map_0)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
            &__y) )
      goto LABEL_18;
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( flower_num < v6->second )
      v7 = 1;
    else
LABEL_18:
      v7 = 0;
    if ( v7 )
    {
      v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      flower_num = v8->second;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin);
  }
  result = flower_num;
  if ( v22 == (char *)v2 )
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

// Line 1412: range 0000000016D7CCA2-0000000016D7CE56
int32_t __cdecl PlantFlowerActivity::getActivityUsedFlowerInfo<google::protobuf::Map<unsigned int,unsigned int>>(
        PlantFlowerActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *used_flower_num_map)
{
  unsigned int *v2; // rax
  int v3; // esi
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > *v11; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *_; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *flower_num_map; // [rsp+48h] [rbp-28h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+58h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+60h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+68h] [rbp-8h]

  __for_range = &this->flower_shelf_used_flower_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::begin(&this->flower_shelf_used_flower_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::end(&this->flower_shelf_used_flower_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v11);
    flower_num_map = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_map<unsigned int,unsigned int>>(v11);
    __for_range_0 = flower_num_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(flower_num_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_0, &__for_end_0) )
    {
      v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
      flower_id = std::get<0ul,unsigned int const,unsigned int>(v15);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
      v2 = google::protobuf::Map<unsigned int,unsigned int>::operator[](used_flower_num_map, flower_id);
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v3 = *v2;
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *v2 = v3 + *num;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1425: range 0000000016D7D990-0000000016D7DCEA
void __cdecl PlantFlowerActivity::logFlowerNumChange<google::protobuf::Map<unsigned int,unsigned int>>(
        PlantFlowerActivity *const this,
        uint32_t interact_uid,
        const google::protobuf::Map<unsigned int,unsigned int> *flower_num_map,
        uint32_t reason)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *player; // r14
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_flower_id; // [rsp+30h] [rbp-E0h]
  proto_log::PlantFlowerItemLog *flower_log; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-C0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+60h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+80h] [rbp-90h] BYREF
  char v19[112]; // [rsp+A0h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 12 log_ptr:1427";
  *(_QWORD *)(v4 + 16) = PlantFlowerActivity::logFlowerNumChange<google::protobuf::Map<unsigned int,unsigned int>>;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerNumChange>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyPlantFlowerNumChange::set_interact_uid(v7, interact_uid);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  proto_log::PlayerLogBodyPlantFlowerNumChange::set_reason(v8, reason);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, flower_num_map);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, flower_num_map);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_flower_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    flower_log = proto_log::PlayerLogBodyPlantFlowerNumChange::add_flower_log(v9);
    if ( *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_flower_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlantFlowerItemLog::set_flower_id(flower_log, p_flower_id->first);
    if ( *(_BYTE *)(((unsigned __int64)&p_flower_id->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_flower_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_flower_id->second >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlantFlowerItemLog::set_flower_num(flower_log, p_flower_id->second);
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange> *)(v4 + 32));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerNumChange> *const)(v4 + 32));
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1440: range 0000000016C16562-0000000016C1696D
// local variable allocation has failed, the output may be wrong!
void __cdecl PlantFlowerActivity::logSetFlowerWish(PlantFlowerActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerSetWish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Player *v6; // r14
  std::string v7; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  const std::pair<unsigned int const,unsigned int> *v10; // [rsp+30h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *flower_id; // [rsp+38h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+40h] [rbp-E0h]
  proto_log::PlantFlowerItemLog *flower_log; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-C0h] BYREF
  std::string v16; // [rsp+70h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+90h] [rbp-90h] BYREF

  v7._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 11 holder:1441 64 16 12 log_ptr:1442";
  *(_QWORD *)(v1 + 16) = PlantFlowerActivity::logSetFlowerWish;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((v7._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(v7._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v16, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xDC8u, v7);
  std::string::~string(&v16);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerSetWish>();
  __for_range = (std::unordered_map<unsigned int,unsigned int> *)(v7._M_string_length + 1040);
  *((std::unordered_map<unsigned int,unsigned int>::iterator *)&v7._anon_0._M_allocated_capacity + 1) = std::unordered_map<unsigned int,unsigned int>::begin((std::unordered_map<unsigned int,unsigned int> *const)(v7._M_string_length + 1040));
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end((std::unordered_map<unsigned int,unsigned int> *const)(v7._M_string_length + 1040))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&v7._anon_0._M_allocated_capacity
          + 1,
            &__for_end) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(
            (const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&v7._anon_0._M_allocated_capacity
          + 1);
    flower_id = std::get<0ul,unsigned int const,unsigned int>(v10);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerSetWish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerSetWish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    flower_log = proto_log::PlayerLogBodyPlantFlowerSetWish::add_flower_log(v5);
    if ( *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)flower_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)flower_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlantFlowerItemLog::set_flower_id(flower_log, *flower_id);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlantFlowerItemLog::set_flower_num(flower_log, *num);
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&v7._anon_0._M_allocated_capacity
    + 1);
  }
  if ( *(_BYTE *)(((v7._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = *(Player **)(v7._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish> *)(v1 + 64));
  Player::printStatLog(v6, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerSetWish> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v17 == (char *)v1 )
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

// Line 1453: range 0000000016C1696E-0000000016C16D5A
void __cdecl PlantFlowerActivity::logEditFlowerCombination(
        PlantFlowerActivity *const this,
        uint32_t gadget_config_id,
        const proto::CustomGadgetTreeInfo *info)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  google::protobuf::uint32 v9; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::string *v11; // rax
  google::protobuf::uint32 v12; // eax
  Player *player; // r14
  std::string v14; // [rsp+0h] [rbp-120h]
  const proto::CustomGadgetTreeInfo *const infoa; // [rsp+8h] [rbp-118h]
  google::protobuf::uint32 gadget_config_ida; // [rsp+14h] [rbp-10Ch]
  PlantFlowerActivity *thisa; // [rsp+18h] [rbp-108h]
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *__for_range; // [rsp+38h] [rbp-E8h]
  const proto::CustomCommonNodeInfo *node; // [rsp+40h] [rbp-E0h]
  proto_log::PlantFlowerShelfSlotLog *slot_log; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+60h] [rbp-C0h] BYREF
  std::string v25; // [rsp+70h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+90h] [rbp-90h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = gadget_config_id;
  v14._M_string_length = (std::string::size_type)info;
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:1454 64 16 12 log_ptr:1455";
  *(_QWORD *)(v3 + 16) = PlantFlowerActivity::logEditFlowerCombination;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xDC9u, v14);
  std::string::~string(&v25);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyPlantFlowerCombinationEdit::set_gadget_config_id(v7, gadget_config_ida);
  __for_range = proto::CustomGadgetTreeInfo::node_list(infoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    node = google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator*(&__for_begin);
    if ( proto::CustomCommonNodeInfo::parent_index(node) >= 0 )
    {
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      slot_log = proto_log::PlayerLogBodyPlantFlowerCombinationEdit::add_slot_log(v10);
      v11 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](node);
      proto_log::PlantFlowerShelfSlotLog::set_slot_identifier(slot_log, v11);
      v12 = proto::CustomCommonNodeInfo::config_id(node);
      proto_log::PlantFlowerShelfSlotLog::set_flower_id(slot_log, v12);
    }
    else
    {
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v9 = proto::CustomCommonNodeInfo::config_id(node);
      proto_log::PlayerLogBodyPlantFlowerCombinationEdit::set_flower_shelf_id(v8, v9);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::CustomCommonNodeInfo const>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *)(v3 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyPlantFlowerCombinationEdit> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
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
