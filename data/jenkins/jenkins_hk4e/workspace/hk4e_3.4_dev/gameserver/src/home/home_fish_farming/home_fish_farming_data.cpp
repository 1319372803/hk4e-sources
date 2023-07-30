// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_fish_farming/home_fish_farming_data.cpp

// Line 21: range 00000000145DB054-00000000145DB17A
int32_t __cdecl HomeFishFarmingData::fromBin(HomeFishFarmingData *const this, const proto::HomeFishpondFarmingBin *bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  uint32_t v4; // edx
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax

  std::vector<unsigned int>::clear(&this->fish_id_vec);
  v2 = proto::HomeFishpondFarmingBin::fishpond_guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fishpond_guid);
  }
  this->fishpond_guid = v2;
  v3 = proto::HomeFishpondFarmingBin::furniture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v3;
  v4 = proto::HomeFishpondFarmingBin::scene_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = v4;
  v5 = proto::HomeFishpondFarmingBin::fish_id_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v5, &this->fish_id_vec);
  return 0;
};

// Line 31: range 00000000145DB17C-00000000145DB290
int32_t __cdecl HomeFishFarmingData::toBin(const HomeFishFarmingData *const this, proto::HomeFishpondFarmingBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFishpondFarmingBin::set_fishpond_guid(bin, this->fishpond_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeFishpondFarmingBin::set_furniture_id(bin, this->furniture_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFishpondFarmingBin::set_scene_id(bin, this->scene_id);
  v2 = proto::HomeFishpondFarmingBin::mutable_fish_id_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->fish_id_vec, v2);
  return 0;
};

// Line 40: range 00000000145DB292-00000000145DB3DE
int32_t __cdecl HomeFishFarmingData::fromClient(
        HomeFishFarmingData *const this,
        const proto::HomeFishFarmingInfo *proto)
{
  uint32_t fishpond_guid; // ebx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  fishpond_guid = this->fishpond_guid;
  if ( fishpond_guid == proto::HomeFishFarmingInfo::fishpond_guid(proto) )
  {
    std::vector<unsigned int>::clear(&this->fish_id_vec);
    v7 = proto::HomeFishFarmingInfo::fish_id_list(proto);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v7, &this->fish_id_vec);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_fish_farming/home_fish_farming_data.cpp",
      "fromClient",
      44);
    v3 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v9,
           (const char (*)[56])"[HOME_FISH_FARMING] fishpond guid not same, data guid: ");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->fishpond_guid);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v4, (const char (*)[11])" req guid:");
    val = proto::HomeFishFarmingInfo::fishpond_guid(proto);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 53: range 00000000145DB3E0-00000000145DB45C
int32_t __cdecl HomeFishFarmingData::toClient(const HomeFishFarmingData *const this, proto::HomeFishFarmingInfo *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeFishFarmingInfo::set_fishpond_guid(proto, this->fishpond_guid);
  v2 = proto::HomeFishFarmingInfo::mutable_fish_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->fish_id_vec, v2);
  return 0;
};

// Line 60: range 00000000145DB45E-00000000145DB613
void __cdecl HomeFishDataBase::fillFishIdCountMap(
        const HomeFishDataBase *const this,
        std::map<unsigned int,unsigned int> *fish_id_count_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 fish_id:61";
  *(_QWORD *)(v2 + 16) = HomeFishDataBase::fillFishIdCountMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &this->fish_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->fish_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->fish_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    v6 = std::map<unsigned int,unsigned int>::operator[](
           fish_id_count_map,
           (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ++*v6;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 68: range 00000000145DB614-00000000145DBA78
int32_t __cdecl HomeModuleFishFarmingData::fromBin(
        HomeModuleFishFarmingData *const this,
        const proto::HomeModuleFishFarmingBin *module_fish_farming_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  HomeFishFarmingData *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  HomeScenePointFishFarmingData *v10; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingBin>::const_iterator __for_begin_0; // [rsp+18h] [rbp-E8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingBin>::const_iterator __for_end_0; // [rsp+20h] [rbp-E0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeFishpondFarmingBin> *__for_range; // [rsp+28h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingBin> *__for_range_0; // [rsp+30h] [rbp-D0h]
  const proto::HomeScenePointFishFarmingBin *fish_farming_bin_0; // [rsp+38h] [rbp-C8h]
  const proto::HomeFishpondFarmingBin *fish_farming_bin; // [rsp+40h] [rbp-C0h]
  google::protobuf::RepeatedPtrField<proto::HomeFishpondFarmingBin>::const_iterator __for_end; // [rsp+48h] [rbp-B8h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 scene_id:84 64 4 18 local_entity_id:85";
  *(_QWORD *)(v2 + 16) = HomeModuleFishFarmingData::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  std::unordered_map<unsigned int,HomeFishFarmingData>::clear(&this->fish_farming_data_map);
  __for_range = proto::HomeModuleFishFarmingBin::fishpond_farming_bin_list(module_fish_farming_bin);
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeFishpondFarmingBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeFishpondFarmingBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeFishpondFarmingBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFishpondFarmingBin> *const)&__for_end_0,
            &__for_end) )
  {
    fish_farming_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeFishpondFarmingBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFishpondFarmingBin> *const)&__for_end_0);
    *(_DWORD *)(v2 + 64) = proto::HomeFishpondFarmingBin::fishpond_guid(fish_farming_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeFishFarmingData>,unsigned int>(
           &this->fish_farming_data_map,
           (const unsigned int *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_fish_farming/home_fish_farming_data.cpp",
        "fromBin",
        75);
      v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v19,
             (const char (*)[52])"[HOME_FISH_FARMING] duplicate guid. fishpond_guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v6 = std::unordered_map<unsigned int,HomeFishFarmingData>::operator[](
             &this->fish_farming_data_map,
             (const std::unordered_map<unsigned int,HomeFishFarmingData>::key_type *)(v2 + 64));
      HomeFishFarmingData::fromBin(v6, fish_farming_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeFishpondFarmingBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::HomeFishpondFarmingBin> *const)&__for_end_0);
  }
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::clear(&this->scene_point_fish_farming_data_map);
  __for_range_0 = proto::HomeModuleFishFarmingBin::scene_point_fish_farming_bin_list(module_fish_farming_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeScenePointFishFarmingBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    fish_farming_bin_0 = google::protobuf::internal::RepeatedPtrIterator<proto::HomeScenePointFishFarmingBin const>::operator*(&__for_begin_0);
    *(_DWORD *)(v2 + 48) = proto::HomeScenePointFishFarmingBin::scene_id(fish_farming_bin_0);
    *(_DWORD *)(v2 + 64) = proto::HomeScenePointFishFarmingBin::local_entity_id(fish_farming_bin_0);
    __for_end.it_ = (void *const *)std::make_pair<unsigned int &,unsigned int &>(
                                     (unsigned int *)(v2 + 48),
                                     (unsigned int *)(v2 + 64));
    if ( common::tools::MiscUtils::isContains<std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>,std::pair<unsigned int,unsigned int>>(
           &this->scene_point_fish_farming_data_map,
           (const std::pair<unsigned int,unsigned int> *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_fish_farming/home_fish_farming_data.cpp",
        "fromBin",
        88);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v19,
             (const char (*)[47])"[HOME_FISH_FARMING] duplicate guid. scene_id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])", local_entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      __for_end.it_ = (void *const *)std::make_pair<unsigned int &,unsigned int &>(
                                       (unsigned int *)(v2 + 48),
                                       (unsigned int *)(v2 + 64));
      v10 = std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::operator[](
              &this->scene_point_fish_farming_data_map,
              (std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > >::key_type *)&__for_end);
      HomeScenePointFishFarmingData::fromBin(v10, fish_farming_bin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeScenePointFishFarmingBin const>::operator++(&__for_begin_0);
  }
  result = 0;
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

// Line 98: range 00000000145DBA7A-00000000145DBD68
int32_t __cdecl HomeModuleFishFarmingData::toBin(
        const HomeModuleFishFarmingData *const this,
        proto::HomeModuleFishFarmingBin *module_fish_farming_bin)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::unordered_map<unsigned int,HomeFishFarmingData>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::unordered_map<unsigned int,HomeFishFarmingData> *__for_range; // [rsp+20h] [rbp-80h]
  const std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > > *__for_range_0; // [rsp+28h] [rbp-78h]
  const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> *v11; // [rsp+30h] [rbp-70h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *key_pair; // [rsp+38h] [rbp-68h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *fish_farming_data_0; // [rsp+40h] [rbp-60h]
  proto::HomeScenePointFishFarmingBin *fish_farming_bin_0; // [rsp+48h] [rbp-58h]
  const std::pair<unsigned int const,HomeFishFarmingData> *v15; // [rsp+50h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFishFarmingData> >::type *fishpond_guid; // [rsp+58h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *fish_farming_data; // [rsp+60h] [rbp-40h]
  proto::HomeFishpondFarmingBin *fish_farming_bin; // [rsp+68h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-30h] BYREF

  __for_range = &this->fish_farming_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::begin(&this->fish_farming_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(&this->fish_farming_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFishFarmingData>,false>(&__for_begin, &__for_end) )
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator*(&__for_begin);
    fishpond_guid = std::get<0ul,unsigned int const,HomeFishFarmingData>(v15);
    fish_farming_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *)std::get<1ul,unsigned int const,HomeFishFarmingData>(v15);
    fish_farming_bin = proto::HomeModuleFishFarmingBin::add_fishpond_farming_bin_list(module_fish_farming_bin);
    if ( HomeFishFarmingData::toBin(fish_farming_data, fish_farming_bin) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_fish_farming/home_fish_farming_data.cpp",
        "toBin",
        104);
      v2 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v19,
             (const char (*)[68])"[HOME_FISH_FARMING] fish farming data toBin failed, fishpond_guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, fishpond_guid);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->scene_point_fish_farming_data_map;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::begin(&this->scene_point_fish_farming_data_map)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_end) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
    key_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v11);
    fish_farming_data_0 = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v11);
    fish_farming_bin_0 = proto::HomeModuleFishFarmingBin::add_scene_point_fish_farming_bin_list(module_fish_farming_bin);
    if ( HomeScenePointFishFarmingData::toBin(fish_farming_data_0, fish_farming_bin_0) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_fish_farming/home_fish_farming_data.cpp",
        "toBin",
        114);
      v4 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             &v19,
             (const char (*)[63])"[HOME_FISH_FARMING] fish farming data toBin failed, scene_id: ");
      v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &fish_farming_data_0->scene_id);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])", local_entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &fish_farming_data_0->local_entity_id);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return -1;
    }
    std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
  }
  return 0;
};

// Line 123: range 00000000145DBD6A-00000000145DC7FE
int32_t __cdecl HomeModuleFishFarmingData::fromData(
        HomeModuleFishFarmingData *const this,
        const HomeSceneArrangementData *data)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  uint32_t furniture_id; // ecx
  uint32_t v7; // ecx
  uint32_t v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  data::SpeicalFurnitureType furniture_speical_type; // [rsp+1Ch] [rbp-184h]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin_0; // [rsp+20h] [rbp-180h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end_0; // [rsp+28h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData>::iterator __for_begin; // [rsp+30h] [rbp-170h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData>::iterator __for_end; // [rsp+38h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData> *__for_range; // [rsp+40h] [rbp-160h]
  const std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+48h] [rbp-158h]
  std::unordered_set<unsigned int> *__for_range_2; // [rsp+50h] [rbp-150h]
  const std::pair<unsigned int const,HomeBlockData> *v27; // [rsp+58h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+60h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+68h] [rbp-138h]
  const std::vector<HomeFurnitureData> *__for_range_1; // [rsp+70h] [rbp-130h]
  const HomeFurnitureData *furniture; // [rsp+78h] [rbp-128h]
  HomeFishFarmingData *fish_farming_data_0; // [rsp+80h] [rbp-120h]
  const std::pair<unsigned int const,HomeFishFarmingData> *v33; // [rsp+88h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFishFarmingData> >::type *guid; // [rsp+90h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *fish_farming_data; // [rsp+98h] [rbp-108h]
  std::shared_ptr<Config> v36; // [rsp+A0h] [rbp-100h] BYREF
  common::milog::MiLogStream v37; // [rsp+B0h] [rbp-F0h] BYREF
  char v38[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 scene_id:124 48 4 8 guid:163 64 56 19 guid_delete_set:125";
  *(_QWORD *)(v2 + 16) = HomeModuleFishFarmingData::fromData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 32) = data->scene_id;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  __for_range = &this->fish_farming_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::begin(&this->fish_farming_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(&this->fish_farming_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFishFarmingData>,false>(&__for_begin, &__for_end) )
  {
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFishFarmingData>(v33);
    fish_farming_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *)std::get<1ul,unsigned int const,HomeFishFarmingData>(v33);
    if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data->scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&fish_farming_data->scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( fish_farming_data->scene_id == *(_DWORD *)(v2 + 32) )
      std::unordered_set<unsigned int>::insert((std::unordered_set<unsigned int> *const)(v2 + 64), guid);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &data->block_data_map;
  __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&data->block_data_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v27);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v27);
    __for_range_1 = &block_data->deploy_furniure_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::vector<HomeFurnitureData>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
              (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_end) )
    {
      furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.home_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      furniture_speical_type = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(
                                 p_home_config_mgr,
                                 furniture->furniture_id);
      std::shared_ptr<Config>::~shared_ptr(&v36);
      if ( furniture_speical_type == Fishpond || furniture_speical_type == Fishtank )
      {
        std::unordered_set<unsigned int>::erase((std::unordered_set<unsigned int> *const)(v2 + 64), &furniture->guid);
        fish_farming_data_0 = std::unordered_map<unsigned int,HomeFishFarmingData>::operator[](
                                &this->fish_farming_data_map,
                                &furniture->guid);
        if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->furniture_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)fish_farming_data_0 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->furniture_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        furniture_id = fish_farming_data_0->furniture_id;
        if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( furniture_id != furniture->furniture_id )
        {
          v7 = *(_DWORD *)(v2 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->scene_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->scene_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&fish_farming_data_0->scene_id);
          }
          fish_farming_data_0->scene_id = v7;
          if ( *(_BYTE *)(((unsigned __int64)&furniture->guid >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)furniture + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture->guid >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v8 = furniture->guid;
          if ( *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->fishpond_guid >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->fishpond_guid >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&fish_farming_data_0->fishpond_guid);
          }
          fish_farming_data_0->fishpond_guid = v8;
          fish_farming_data_0->furniture_id = furniture->furniture_id;
          std::vector<unsigned int>::clear(&fish_farming_data_0->fish_id_vec);
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_fish_farming/home_fish_farming_data.cpp",
            "fromData",
            153);
          v9 = common::milog::MiLogStream::operator<<<char [99],(char *[99])0>(
                 &v37,
                 (const char (*)[99])"[HOME_FISH_FARMING] HomeModuleFishFarmingData.fromData, add new fish farming data, fishpond_guid: ");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &furniture->guid);
          v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v10,
                  (const char (*)[15])" furniture_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &furniture->furniture_id);
          v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
        if ( *(char *)(((unsigned __int64)&fish_farming_data_0->position >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&fish_farming_data_0->position.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)fish_farming_data_0 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&fish_farming_data_0->position.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_store_n(&fish_farming_data_0->position, 12LL);
        }
        if ( (((unsigned __int8)furniture + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&furniture->spawn_pos >> 3)
                                                                + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&furniture->spawn_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&furniture->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)furniture + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&furniture->spawn_pos.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load_n(&furniture->spawn_pos, 12LL);
        }
        fish_farming_data_0->position = furniture->spawn_pos;
        if ( (((unsigned __int8)fish_farming_data_0 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->rotation >> 3)
                                                                           + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&fish_farming_data_0->rotation >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&fish_farming_data_0->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)fish_farming_data_0 + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&fish_farming_data_0->rotation.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_store_n(&fish_farming_data_0->rotation, 12LL);
        }
        if ( (((unsigned __int8)furniture + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&furniture->spawn_rot >> 3)
                                                                 + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&furniture->spawn_rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&furniture->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)furniture + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&furniture->spawn_rot.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load_n(&furniture->spawn_rot, 12LL);
        }
        fish_farming_data_0->rotation = furniture->spawn_rot;
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
  }
  __for_range_2 = (std::unordered_set<unsigned int> *)(v2 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v2 + 64))._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v14 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v14;
    std::unordered_map<unsigned int,HomeFishFarmingData>::erase(
      &this->fish_farming_data_map,
      (const std::unordered_map<unsigned int,HomeFishFarmingData>::key_type *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_fish_farming/home_fish_farming_data.cpp",
      "fromData",
      166);
    v15 = common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(
            &v37,
            (const char (*)[98])"[HOME_FISH_FARMING] HomeModuleFishFarmingData.fromData, remove fish farming data, fishpond_guid: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v37);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v2 + 64));
  result = 0;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 173: range 00000000145DC800-00000000145DC8DD
int32_t __cdecl HomeScenePointFishFarmingData::fromBin(
        HomeScenePointFishFarmingData *const this,
        const proto::HomeScenePointFishFarmingBin *bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v4; // rax

  std::vector<unsigned int>::clear(&this->fish_id_vec);
  v2 = proto::HomeScenePointFishFarmingBin::scene_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = v2;
  v3 = proto::HomeScenePointFishFarmingBin::local_entity_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->local_entity_id);
  }
  this->local_entity_id = v3;
  v4 = proto::HomeScenePointFishFarmingBin::fish_id_list(bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v4, &this->fish_id_vec);
  return 0;
};

// Line 182: range 00000000145DC8DE-00000000145DC9AA
int32_t __cdecl HomeScenePointFishFarmingData::toBin(
        const HomeScenePointFishFarmingData *const this,
        proto::HomeScenePointFishFarmingBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeScenePointFishFarmingBin::set_scene_id(bin, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeScenePointFishFarmingBin::set_local_entity_id(bin, this->local_entity_id);
  v2 = proto::HomeScenePointFishFarmingBin::mutable_fish_id_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->fish_id_vec, v2);
  return 0;
};

// Line 190: range 00000000145DC9AC-00000000145DCA89
int32_t __cdecl HomeScenePointFishFarmingData::fromClient(
        HomeScenePointFishFarmingData *const this,
        const proto::HomeScenePointFishFarmingInfo *proto)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  const google::protobuf::RepeatedField<unsigned int> *v4; // rax

  v2 = proto::HomeScenePointFishFarmingInfo::scene_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = v2;
  v3 = proto::HomeScenePointFishFarmingInfo::local_entity_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->local_entity_id);
  }
  this->local_entity_id = v3;
  std::vector<unsigned int>::clear(&this->fish_id_vec);
  v4 = proto::HomeScenePointFishFarmingInfo::fish_id_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v4, &this->fish_id_vec);
  return 0;
};

// Line 199: range 00000000145DCA8A-00000000145DCB56
int32_t __cdecl HomeScenePointFishFarmingData::toClient(
        const HomeScenePointFishFarmingData *const this,
        proto::HomeScenePointFishFarmingInfo *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeScenePointFishFarmingInfo::set_scene_id(proto, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->local_entity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeScenePointFishFarmingInfo::set_local_entity_id(proto, this->local_entity_id);
  v2 = proto::HomeScenePointFishFarmingInfo::mutable_fish_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->fish_id_vec, v2);
  return 0;
};

// Line 207: range 00000000145DCB58-00000000145DCDC8
void __fastcall HomeModuleFishFarmingData::deleteDataBySceneId(
        HomeModuleFishFarmingData *const this,
        uint32_t scene_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::pointer v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 scene_id:206 64 8 8 iter:208";
  *(_QWORD *)(v2 + 16) = HomeModuleFishFarmingData::deleteDataBySceneId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = scene_id;
  *(std::unordered_map<unsigned int,HomeFishFarmingData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeFishFarmingData>::begin(&this->fish_farming_data_map);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(&this->fish_farming_data_map)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,HomeFishFarmingData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false> *)(v2 + 64),
            &__y) )
      break;
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second.scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second.scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v5->second.scene_id == *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_fish_farming/home_fish_farming_data.cpp",
        "deleteDataBySceneId",
        212);
      v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v11,
             (const char (*)[53])"[HOME_FISH_FARMING] delete fish farming data, guid: ");
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 64));
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &v7->first);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
      *(std::unordered_map<unsigned int,HomeFishFarmingData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeFishFarmingData>::erase(
                                                                                       &this->fish_farming_data_map,
                                                                                       *(std::unordered_map<unsigned int,HomeFishFarmingData>::iterator *)(v2 + 64));
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator++(
        (std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 64),
        0);
    }
  }
  if ( v12 == (char *)v2 )
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
