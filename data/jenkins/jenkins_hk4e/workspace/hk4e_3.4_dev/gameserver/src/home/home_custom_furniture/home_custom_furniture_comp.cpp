// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_custom_furniture/home_custom_furniture_comp.cpp

// Line 26: range 00000000145D1532-00000000145D1806
int32_t __cdecl HomeCustomFurnitureComp::fromBin(
        HomeCustomFurnitureComp *const this,
        const proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  HomeModuleCustomFurnitureData *v8; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleCustomFurnitureBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleCustomFurnitureBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const proto::HomeCustomFurnitureBin *home_custom_furniture_bin; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleCustomFurnitureBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::HomeModuleCustomFurnitureBin *module_custom_furniture_bin; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 module_id:32";
  *(_QWORD *)(v2 + 16) = HomeCustomFurnitureComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::clear(&this->module_custom_furniture_data_map_);
  home_custom_furniture_bin = proto::HomeDataBin::custom_furniture_bin(home_data_bin);
  __for_range = proto::HomeCustomFurnitureBin::module_custom_furniture_bin_list(home_custom_furniture_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleCustomFurnitureBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleCustomFurnitureBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleCustomFurnitureBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    module_custom_furniture_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleCustomFurnitureBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::HomeModuleCustomFurnitureBin::module_id(module_custom_furniture_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>,unsigned int>(
           &this->module_custom_furniture_data_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
        "fromBin",
        35);
      v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v16,
             (const char (*)[45])"[HOME_CUSTOM_FURNITURE] duplicate module_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v8 = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::operator[](
             &this->module_custom_furniture_data_map_,
             (const std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::key_type *)(v2 + 32));
      HomeModuleCustomFurnitureData::fromBin(v8, module_custom_furniture_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleCustomFurnitureBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 44: range 00000000145D1808-00000000145D1A2A
int32_t __cdecl HomeCustomFurnitureComp::toBin(HomeCustomFurnitureComp *const this, proto::HomeDataBin *home_data_bin)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::HomeCustomFurnitureBin *home_custom_furniture_bin; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,HomeModuleCustomFurnitureData> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeModuleCustomFurnitureData> >::type *module_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeModuleCustomFurnitureData> >::type *module_custom_furniture_data; // [rsp+50h] [rbp-40h]
  proto::HomeModuleCustomFurnitureBin *module_custom_furniture_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  home_custom_furniture_bin = proto::HomeDataBin::mutable_custom_furniture_bin(home_data_bin);
  __for_range = &this->module_custom_furniture_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::begin(&this->module_custom_furniture_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::end(&this->module_custom_furniture_data_map_)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,HomeModuleCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
      return 0;
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleCustomFurnitureData>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,HomeModuleCustomFurnitureData>(v11);
    module_custom_furniture_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeModuleCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeModuleCustomFurnitureData>(v11);
    module_custom_furniture_bin = proto::HomeCustomFurnitureBin::add_module_custom_furniture_bin_list(home_custom_furniture_bin);
    if ( HomeModuleCustomFurnitureData::toBin(module_custom_furniture_data, module_custom_furniture_bin) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeModuleCustomFurnitureBin::set_module_id(module_custom_furniture_bin, *module_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
    "toBin",
    51);
  v2 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
         &v15,
         (const char (*)[81])"[HOME_CUSTOM_FURNITURE] module_custom_furniture_data.toBin() failed, module_id: ");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, module_id);
  v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v15);
  return -1;
};

// Line 60: range 00000000145D1A2C-00000000145D1A4A
int32_t __cdecl HomeCustomFurnitureComp::init(HomeCustomFurnitureComp *const this)
{
  HomeCustomFurnitureComp::initCustomFurnitureData(this);
  return 0;
};

// Line 66: range 00000000145D1A4C-00000000145D1FB7
void __cdecl HomeCustomFurnitureComp::initCustomFurnitureData(HomeCustomFurnitureComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  HomeSceneComp *SceneComp; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  unsigned int val; // [rsp+1Ch] [rbp-1B4h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+20h] [rbp-1B0h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+28h] [rbp-1A8h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_begin_0; // [rsp+30h] [rbp-1A0h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end_0; // [rsp+38h] [rbp-198h] BYREF
  std::set<unsigned int>::iterator __for_begin_1; // [rsp+40h] [rbp-190h] BYREF
  std::set<unsigned int>::iterator __for_end_1; // [rsp+48h] [rbp-188h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+50h] [rbp-180h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v19; // [rsp+58h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+60h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+68h] [rbp-168h]
  HomeModuleCustomFurnitureData *module_custom_furniture_data; // [rsp+70h] [rbp-160h]
  std::map<unsigned int,HomeSceneData> *__for_range_0; // [rsp+78h] [rbp-158h]
  const std::pair<unsigned int const,HomeSceneData> *v24; // [rsp+80h] [rbp-150h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+88h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+90h] [rbp-140h]
  std::set<unsigned int> *__for_range_1; // [rsp+98h] [rbp-138h]
  common::milog::MiLogStream v28; // [rsp+A0h] [rbp-130h] BYREF
  char v29[272]; // [rsp+C0h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 7 guid:75 64 48 18 update_guid_set:72 144 48 18 delete_guid_set:73";
  *(_QWORD *)(v1 + 16) = HomeCustomFurnitureComp::initCustomFurnitureData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Home::getSceneComp(this->home_);
  __for_range = HomeSceneComp::getModuleDataMap(SceneComp);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v19);
    module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v19);
    module_custom_furniture_data = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::operator[](
                                     &this->module_custom_furniture_data_map_,
                                     module_id);
    __for_range_0 = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr)->scene_data_map;
    __for_begin_0._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range_0)._M_node;
    __for_end_0._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin_0);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v24);
      scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v24);
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 64));
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 144));
      HomeModuleCustomFurnitureData::fromData(
        module_custom_furniture_data,
        &scene_data->arrangement_data,
        (std::set<unsigned int> *)(v1 + 64),
        (std::set<unsigned int> *)(v1 + 144));
      __for_range_1 = (std::set<unsigned int> *)(v1 + 144);
      __for_begin_1._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 144))._M_node;
      __for_end_1._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(&__for_begin_1, &__for_end_1) )
      {
        v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_1);
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 48) = *v5;
        std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::erase(
          &module_custom_furniture_data->custom_furniture_data_map,
          (const std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::key_type *)(v1 + 48));
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
          "initCustomFurnitureData",
          78);
        v6 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
               &v28,
               (const char (*)[86])"[HOME_CUSTOM_FURNITURE] initCustomFurnitureData, remove custom furniture data, guid: ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
        v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" scene_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, scene_id);
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" home_uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Home::getHomeUid(this->home_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_1);
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 64));
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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
};

// Line 86: range 00000000145D1FB8-00000000145D2992
void __fastcall HomeCustomFurnitureComp::onUpdateArrangementInfo(
        HomeCustomFurnitureComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  HomeModuleData *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // r14d
  Player *v14; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  Player *v21; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v22; // rdx
  uint32_t v24; // r14d
  Player *v25; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-220h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-218h] BYREF
  const HomeSceneData *home_scene_data_ptr; // [rsp+20h] [rbp-210h]
  HomeModuleCustomFurnitureData *module_custom_furniture_data; // [rsp+28h] [rbp-208h]
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-200h]
  std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1F8h]
  common::milog::MiLogStream v33; // [rsp+40h] [rbp-1F0h] BYREF
  char v34[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 8 guid:110 64 4 8 guid:121 80 4 12 module_id:85 96 4 11 scene_id:85 112 16 18 module_data"
                        "_ptr:87 144 16 14 player_ptr:105 176 48 19 update_guid_set:100 256 48 19 delete_guid_set:101 336"
                        " 48 20 repaire_guid_set:120";
  *(_QWORD *)(v3 + 16) = HomeCustomFurnitureComp::onUpdateArrangementInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862727] = -218959118;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  *(_DWORD *)(v3 + 80) = module_id;
  *(_DWORD *)(v3 + 96) = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(this->home_);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 112), SceneComp);
  if ( std::operator==<HomeModuleData>(0LL, (const std::shared_ptr<HomeModuleData> *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "onUpdateArrangementInfo",
      90);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v33,
           (const char (*)[59])"[HOME_CUSTOM_FURNITURE] getHomeModuleData fail, module_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    *(_DWORD *)(v3 + 64) = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v33);
    goto LABEL_43;
  }
  v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v10, *(_DWORD *)(v3 + 96));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "onUpdateArrangementInfo",
      96);
    v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v33,
            (const char (*)[59])"[HOME_CUSTOM_FURNITURE] findHomeSceneData fail, scene_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 96));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 176));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 256));
  module_custom_furniture_data = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::operator[](
                                   &this->module_custom_furniture_data_map_,
                                   (const std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::key_type *)(v3 + 80));
  HomeModuleCustomFurnitureData::fromData(
    module_custom_furniture_data,
    &home_scene_data_ptr->arrangement_data,
    (std::set<unsigned int> *)(v3 + 176),
    (std::set<unsigned int> *)(v3 + 256));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v3 + 144));
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 144)) )
  {
    v13 = *(_DWORD *)(v3 + 80);
    v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    HomeCustomFurnitureComp::logDeleteCustomFurniture(this, v14, v13, (const std::set<unsigned int> *)(v3 + 256));
  }
  __for_range = (std::set<unsigned int> *)(v3 + 256);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 256))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 256))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *v15;
    std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::erase(
      &module_custom_furniture_data->custom_furniture_data_map,
      (const std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::key_type *)(v3 + 48));
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "onUpdateArrangementInfo",
      113);
    v16 = common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
            &v33,
            (const char (*)[86])"[HOME_CUSTOM_FURNITURE] onUpdateArrangementInfo, remove custom furniture data, guid: ");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" scene_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 96));
    v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v3 + 64) = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v33);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 144)) )
  {
    v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    HomeCustomFurnitureComp::checkAndRepaireCustomFurniture((std::set<unsigned int> *)(v3 + 336), this, v21);
    __for_range_0 = (std::set<unsigned int> *)(v3 + 336);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 336))._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v22 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 64) = *v22;
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v3 + 176),
        (const std::set<unsigned int>::value_type *)(v3 + 64));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 176))
      || !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 256)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Home::getCurModuleId(this->home_) == *(_DWORD *)(v3 + 80) )
        HomeCustomFurnitureComp::notifyChangeCustomFurnitureData(
          this,
          (const std::set<unsigned int> *)(v3 + 176),
          (const std::set<unsigned int> *)(v3 + 256));
      v24 = *(_DWORD *)(v3 + 80);
      v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      HomeCustomFurnitureComp::sendCustomFurnitureChangeEvent(this, v25, v24);
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 336));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 144));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 256));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 176));
LABEL_43:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 112));
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 138: range 00000000145D2994-00000000145D2B15
void __cdecl HomeCustomFurnitureComp::notifyCurCustomFurnitureData(HomeCustomFurnitureComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[288]; // [rsp+10h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 144 10 notify:139";
  *(_QWORD *)(v2 + 16) = HomeCustomFurnitureComp::notifyCurCustomFurnitureData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  proto::HomeCustomFurnitureInfoNotify::HomeCustomFurnitureInfoNotify((proto::HomeCustomFurnitureInfoNotify *const)(v2 + 48));
  HomeCustomFurnitureComp::fillCurCustomFurnitureData(this, (proto::HomeCustomFurnitureInfoNotify *)(v2 + 48));
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::HomeCustomFurnitureInfoNotify::~HomeCustomFurnitureInfoNotify((proto::HomeCustomFurnitureInfoNotify *const)(v2 + 48));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 145: range 00000000145D2B16-00000000145D33DF
void __fastcall HomeCustomFurnitureComp::onChangeRoomScene(
        HomeCustomFurnitureComp *const this,
        uint32_t module_id,
        uint32_t old_room_scene_id,
        uint32_t new_room_scene_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  HomeModuleData *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t v14; // r14d
  Player *v15; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  uint32_t v25; // r14d
  Player *v26; // rax
  unsigned int val; // [rsp+24h] [rbp-1BCh] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1B0h] BYREF
  const HomeSceneData *home_scene_data_ptr; // [rsp+38h] [rbp-1A8h]
  HomeModuleCustomFurnitureData *module_custom_furniture_data; // [rsp+40h] [rbp-1A0h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-198h]
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-190h] BYREF
  char v36[368]; // [rsp+70h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 8 guid:170 48 4 13 module_id:144 64 4 21 old_room_scene_id:144 80 4 21 new_room_scene_id:"
                        "144 96 16 19 module_data_ptr:146 128 16 14 player_ptr:165 160 48 19 delete_guid_set:160 240 48 1"
                        "9 update_guid_set:162";
  *(_QWORD *)(v4 + 16) = HomeCustomFurnitureComp::onChangeRoomScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862729] = -202116109;
  *(_DWORD *)(v4 + 48) = module_id;
  *(_DWORD *)(v4 + 64) = old_room_scene_id;
  *(_DWORD *)(v4 + 80) = new_room_scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(this->home_);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 96), SceneComp);
  if ( std::operator==<HomeModuleData>(0LL, (const std::shared_ptr<HomeModuleData> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "onChangeRoomScene",
      149);
    v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v35,
           (const char (*)[59])"[HOME_CUSTOM_FURNITURE] getHomeModuleData fail, module_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    goto LABEL_37;
  }
  v11 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v11, *(_DWORD *)(v4 + 80));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "onChangeRoomScene",
      155);
    v12 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v35,
            (const char (*)[59])"[HOME_CUSTOM_FURNITURE] findHomeSceneData fail, scene_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  module_custom_furniture_data = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::operator[](
                                   &this->module_custom_furniture_data_map_,
                                   (const std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::key_type *)(v4 + 48));
  HomeModuleCustomFurnitureData::getCustomFurnitureGuids(
    (std::set<unsigned int> *)(v4 + 160),
    module_custom_furniture_data,
    *(_DWORD *)(v4 + 64));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 240));
  HomeModuleCustomFurnitureData::fromData(
    module_custom_furniture_data,
    &home_scene_data_ptr->arrangement_data,
    (std::set<unsigned int> *)(v4 + 240),
    (std::set<unsigned int> *)(v4 + 160));
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v4 + 128));
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 128)) )
  {
    v14 = *(_DWORD *)(v4 + 48);
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    HomeCustomFurnitureComp::logDeleteCustomFurniture(this, v15, v14, (const std::set<unsigned int> *)(v4 + 160));
  }
  __for_range = (std::set<unsigned int> *)(v4 + 160);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 160))._M_node;
  __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 160))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 32) = *v16;
    std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::erase(
      &module_custom_furniture_data->custom_furniture_data_map,
      (const std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::key_type *)(v4 + 32));
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "onChangeRoomScene",
      173);
    v17 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
            &v35,
            (const char (*)[80])"[HOME_CUSTOM_FURNITURE] onChangeRoomScene, remove custom furniture data, guid: ");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 32));
    v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v18,
            (const char (*)[20])" old_room_scene_id:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 64));
    v21 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v20,
            (const char (*)[20])" new_room_scene_id:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 80));
    v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 128))
    && (!std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 240))
     || !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v4 + 160))) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( Home::getCurModuleId(this->home_) == *(_DWORD *)(v4 + 48) )
      HomeCustomFurnitureComp::notifyChangeCustomFurnitureData(
        this,
        (const std::set<unsigned int> *)(v4 + 240),
        (const std::set<unsigned int> *)(v4 + 160));
    v25 = *(_DWORD *)(v4 + 48);
    v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    HomeCustomFurnitureComp::sendCustomFurnitureChangeEvent(this, v26, v25);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 240));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 160));
LABEL_37:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 96));
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 192: range 00000000145D33E0-00000000145D37AB
void __cdecl HomeCustomFurnitureComp::notifyChangeCustomFurnitureData(
        HomeCustomFurnitureComp *const this,
        const std::set<unsigned int> *update_guid_set,
        const std::set<unsigned int> *delete_guid_set)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::mapped_type *v7; // r14
  proto::HomeCustomFurnitureInfo *v8; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  HomeModuleCustomFurnitureData *module_custom_furniture_data; // [rsp+38h] [rbp-158h]
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *custom_furniture_data_map; // [rsp+40h] [rbp-150h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  google::protobuf::RepeatedField<unsigned int> *delete_custom_furniture_list; // [rsp+50h] [rbp-140h]
  const std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-138h]
  char v19[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 8 guid:202 48 144 10 notify:193";
  *(_QWORD *)(v3 + 16) = HomeCustomFurnitureComp::notifyChangeCustomFurnitureData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862726] = -202116109;
  v5[536862727] = -202116109;
  proto::HomeCustomFurnitureInfoNotify::HomeCustomFurnitureInfoNotify((proto::HomeCustomFurnitureInfoNotify *const)(v3 + 48));
  module_custom_furniture_data = HomeCustomFurnitureComp::getCurModuleCustomFurnitureData(this);
  custom_furniture_data_map = &module_custom_furniture_data->custom_furniture_data_map;
  __for_range = update_guid_set;
  __for_begin._M_node = std::set<unsigned int>::begin(update_guid_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(update_guid_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    v7 = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::operator[](
           custom_furniture_data_map,
           (const std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::key_type *)(v3 + 32));
    v8 = proto::HomeCustomFurnitureInfoNotify::add_custom_furniture_info_list((proto::HomeCustomFurnitureInfoNotify *const)(v3 + 48));
    HomeOneCustomFurnitureData::toClient(v7, v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  v9 = proto::HomeCustomFurnitureInfoNotify::mutable_used_sub_furniture_count_map((proto::HomeCustomFurnitureInfoNotify *const)(v3 + 48));
  HomeModuleCustomFurnitureData::getUsedSubFurnitureCountData<google::protobuf::Map<unsigned int,unsigned int>>(
    module_custom_furniture_data,
    v9);
  delete_custom_furniture_list = proto::HomeCustomFurnitureInfoNotify::mutable_delete_custom_furniture_list((proto::HomeCustomFurnitureInfoNotify *const)(v3 + 48));
  __for_range_0 = delete_guid_set;
  __for_begin._M_node = std::set<unsigned int>::begin(delete_guid_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v10;
    google::protobuf::RepeatedField<unsigned int>::Add(delete_custom_furniture_list, (const unsigned int *)(v3 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::notifyAllPlayer<proto::HomeCustomFurnitureInfoNotify>(
    this->home_,
    (const proto::HomeCustomFurnitureInfoNotify *)(v3 + 48),
    0);
  proto::HomeCustomFurnitureInfoNotify::~HomeCustomFurnitureInfoNotify((proto::HomeCustomFurnitureInfoNotify *const)(v3 + 48));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
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
};

// Line 210: range 00000000145D37AC-00000000145D3887
void __cdecl HomeCustomFurnitureComp::fillCurCustomFurnitureData(
        HomeCustomFurnitureComp *const this,
        proto::HomeCustomFurnitureInfoNotify *notify)
{
  proto::HomeCustomFurnitureInfo *v2; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v3; // rax
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const HomeModuleCustomFurnitureData *module_custom_furniture_data; // [rsp+28h] [rbp-28h]
  const std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,HomeOneCustomFurnitureData> *v8; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *guid; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *custom_furniture_data; // [rsp+48h] [rbp-8h]

  module_custom_furniture_data = HomeCustomFurnitureComp::getCurModuleCustomFurnitureData(this);
  __for_range = &module_custom_furniture_data->custom_furniture_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::begin(&module_custom_furniture_data->custom_furniture_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(&module_custom_furniture_data->custom_furniture_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeOneCustomFurnitureData>(v8);
    custom_furniture_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeOneCustomFurnitureData>(v8);
    v2 = proto::HomeCustomFurnitureInfoNotify::add_custom_furniture_info_list(notify);
    HomeOneCustomFurnitureData::toClient(custom_furniture_data, v2);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  v3 = proto::HomeCustomFurnitureInfoNotify::mutable_used_sub_furniture_count_map(notify);
  HomeModuleCustomFurnitureData::getUsedSubFurnitureCountData<google::protobuf::Map<unsigned int,unsigned int>>(
    module_custom_furniture_data,
    v3);
};

// Line 220: range 00000000145D3888-00000000145D398B
HomeModuleCustomFurnitureData *__cdecl HomeCustomFurnitureComp::getCurModuleCustomFurnitureData(
        HomeCustomFurnitureComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  HomeModuleCustomFurnitureData *result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 cur_module_id:221";
  *(_QWORD *)(v1 + 16) = HomeCustomFurnitureComp::getCurModuleCustomFurnitureData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 32) = Home::getCurModuleId(this->home_);
  result = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::operator[](
             &this->module_custom_furniture_data_map_,
             (const std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::key_type *)(v1 + 32));
  if ( v5 == (char *)v1 )
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

// Line 226: range 00000000145D398C-00000000145D3AED
HomeOneCustomFurnitureData *__fastcall HomeCustomFurnitureComp::getCustomFurnitureData(
        HomeCustomFurnitureComp *const this,
        uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeOneCustomFurnitureData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false> __y; // [rsp+10h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *custom_furniture_data_map; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 guid:225 64 8 8 iter:228";
  *(_QWORD *)(v2 + 16) = HomeCustomFurnitureComp::getCustomFurnitureData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = guid;
  custom_furniture_data_map = (std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *)HomeCustomFurnitureComp::getCurModuleCustomFurnitureData(this);
  *(std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::find(
                                                                                          custom_furniture_data_map,
                                                                                          (const std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(custom_furniture_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false> *const)(v2 + 64))->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 237: range 00000000145D3AEE-00000000145D3BD8
void __cdecl HomeCustomFurnitureComp::syncCustomFurnitureData(HomeCustomFurnitureComp *const this, Player *player)
{
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,HomeModuleCustomFurnitureData> *v5; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeModuleCustomFurnitureData> >::type *module_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeModuleCustomFurnitureData> >::type *_; // [rsp+38h] [rbp-8h]

  __for_range = &this->module_custom_furniture_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::begin(&this->module_custom_furniture_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::end(&this->module_custom_furniture_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeModuleCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleCustomFurnitureData>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,HomeModuleCustomFurnitureData>(v5);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,HomeModuleCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeModuleCustomFurnitureData>(v5);
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    HomeCustomFurnitureComp::sendCustomFurnitureChangeEvent(this, player, *module_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
};

// Line 246: range 00000000145D3BDA-00000000145D3E7F
__int64 __fastcall HomeCustomFurnitureComp::sendCustomFurnitureChangeEvent(
        HomeCustomFurnitureComp *const this,
        Player *player,
        uint32_t module_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  uint32_t v7; // r14d
  std::__shared_ptr_access<HomeCustomFurnitureChangeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::mapped_type *v9; // r14
  std::__shared_ptr_access<HomeCustomFurnitureChangeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 module_id:245 64 16 13 event_ptr:247";
  *(_QWORD *)(v3 + 16) = HomeCustomFurnitureComp::sendCustomFurnitureChangeEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = module_id;
  common::tools::perf::make_shared<HomeCustomFurnitureChangeEvent>();
  if ( std::operator==<HomeCustomFurnitureChangeEvent>(
         0LL,
         (const std::shared_ptr<HomeCustomFurnitureChangeEvent> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "sendCustomFurnitureChangeEvent",
      250);
    common::milog::MiLogStream::operator()(&v15, off_2541B700);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v6 = -1;
  }
  else
  {
    v7 = *(_DWORD *)(v3 + 48);
    v8 = std::__shared_ptr_access<HomeCustomFurnitureChangeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCustomFurnitureChangeEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->module_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->module_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::__shared_ptr_access<HomeCustomFurnitureChangeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v8->module_id);
    }
    v8->module_id = v7;
    v9 = std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::operator[](
           &this->module_custom_furniture_data_map_,
           (const std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::key_type *)(v3 + 48));
    v10 = std::__shared_ptr_access<HomeCustomFurnitureChangeEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeCustomFurnitureChangeEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    HomeModuleCustomFurnitureData::getUsedSubFurnitureCountData<std::map<unsigned int,unsigned int>>(
      v9,
      &v10->sub_furniture_count_map);
    EventComp = Player::getEventComp(player);
    std::shared_ptr<BaseEvent>::shared_ptr<HomeCustomFurnitureChangeEvent,void>(
      &p_event_ptr,
      (const std::shared_ptr<HomeCustomFurnitureChangeEvent> *)(v3 + 64));
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    v6 = 0;
  }
  std::shared_ptr<HomeCustomFurnitureChangeEvent>::~shared_ptr((std::shared_ptr<HomeCustomFurnitureChangeEvent> *const)(v3 + 64));
  result = v6;
  if ( v16 == (char *)v3 )
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

// Line 261: range 00000000145D3E80-00000000145D4255
std::set<unsigned int> *__cdecl HomeCustomFurnitureComp::checkAndRepaireCustomFurniture(
        std::set<unsigned int> *retstr,
        HomeCustomFurnitureComp *const this,
        Player *player)
{
  std::map<unsigned int,unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  int v7; // esi
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *custom_furniture_data_map; // [rsp+48h] [rbp-E8h]
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *__for_range; // [rsp+50h] [rbp-E0h]
  std::pair<unsigned int const,HomeOneCustomFurnitureData> *__in; // [rsp+58h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *guid; // [rsp+60h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *custom_furniture_data; // [rsp+68h] [rbp-C8h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+70h] [rbp-C0h]
  const std::pair<unsigned int const,unsigned int> *v21; // [rsp+78h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+80h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+88h] [rbp-A8h]
  char v24[160]; // [rsp+90h] [rbp-A0h] BYREF

  v3 = (std::map<unsigned int,unsigned int> *)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::map<unsigned int,unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 38 total_used_sub_furniture_count_map:264";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)HomeCustomFurnitureComp::checkAndRepaireCustomFurniture;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  std::set<unsigned int>::set(retstr);
  custom_furniture_data_map = (std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *)HomeCustomFurnitureComp::getCurModuleCustomFurnitureData(this);
  std::map<unsigned int,unsigned int>::map(v3 + 1);
  __for_range = custom_furniture_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::begin(custom_furniture_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(custom_furniture_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeOneCustomFurnitureData>(__in);
    custom_furniture_data = std::get<1ul,unsigned int const,HomeOneCustomFurnitureData>(__in);
    if ( HomeCustomFurnitureComp::isCustomFurnitureNeedRepaire(this, player, custom_furniture_data, v3 + 1) )
    {
      HomeCustomFurnitureComp::doCustomFurnitureRepaire(this, player, custom_furniture_data, v3 + 1);
      std::set<unsigned int>::insert(retstr, guid);
    }
    else
    {
      __for_range_0 = &custom_furniture_data->used_sub_furniture_count_map;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&custom_furniture_data->used_sub_furniture_count_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        furniture_id = std::get<0ul,unsigned int const,unsigned int>(v21);
        count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v21);
        v6 = std::map<unsigned int,unsigned int>::operator[](v3 + 1, furniture_id);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v7 = *v6;
        if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v6 = v7 + *count;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  std::map<unsigned int,unsigned int>::~map(v3 + 1);
  if ( v24 == (char *)v3 )
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
  return retstr;
};

// Line 285: range 00000000145D4256-00000000145D4B79
int32_t __cdecl HomeCustomFurnitureComp::doCustomFurnitureRepaire(
        HomeCustomFurnitureComp *const this,
        Player *player,
        HomeOneCustomFurnitureData *custom_furniture_data,
        std::map<unsigned int,unsigned int> *total_used_sub_furniture_count_map)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rdx
  uint32_t v8; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rdx
  int v12; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  int v15; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rax
  _DWORD *v17; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rdx
  std::vector<HomeCustomFurnitureNodeData>::value_type *v19; // rax
  std::vector<HomeCustomFurnitureNodeData> *v20; // rax
  std::map<unsigned int,unsigned int> *v21; // rax
  std::unordered_map<unsigned int,unsigned int> *v22; // rax
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+2Ch] [rbp-2D4h] BYREF
  std::vector<HomeCustomFurnitureNodeData>::iterator __for_begin; // [rsp+30h] [rbp-2D0h] BYREF
  std::vector<HomeCustomFurnitureNodeData>::iterator __for_end; // [rsp+38h] [rbp-2C8h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+40h] [rbp-2C0h] BYREF
  PlayerItemComp *player_item_comp; // [rsp+48h] [rbp-2B8h]
  std::vector<HomeCustomFurnitureNodeData> *__for_range; // [rsp+50h] [rbp-2B0h]
  const HomeCustomFurnitureNodeData *sub_furniture_data; // [rsp+58h] [rbp-2A8h]
  const std::map<unsigned int,unsigned int> *used_sub_furniture_count_map; // [rsp+60h] [rbp-2A0h]
  const std::unordered_map<unsigned int,unsigned int> *used_pass_part_item_count_map; // [rsp+68h] [rbp-298h]
  char v35[656]; // [rsp+70h] [rbp-290h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(608LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 23 sub_furniture_index:291 64 4 16 parent_index:299 80 4 20 sub_furniture_id:307 96 8 8 "
                        "iter:309 128 24 25 new_sub_furniture_vec:287 192 40 26 new_sub_furniture_data:334 272 48 36 new_"
                        "used_sub_furniture_count_map:288 352 48 34 delete_sub_furniture_index_set:292 432 48 27 sub_furn"
                        "iture_index_map:293 512 56 37 new_used_pass_part_item_count_map:289";
  *(_QWORD *)(v4 + 16) = HomeCustomFurnitureComp::doCustomFurnitureRepaire;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -218959360;
  v6[536862728] = 62194;
  v6[536862730] = -218959118;
  v6[536862732] = -219021312;
  v6[536862733] = 62194;
  v6[536862735] = -218959118;
  v6[536862737] = -218103808;
  v6[536862738] = -202116109;
  std::vector<HomeCustomFurnitureNodeData>::vector((std::vector<HomeCustomFurnitureNodeData> *const)(v4 + 128));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 272));
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v4 + 512));
  *(_DWORD *)(v4 + 48) = -1;
  std::set<int>::set((std::set<int> *const)(v4 + 352));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 432));
  player_item_comp = Player::getItemComp(player);
  __for_range = &custom_furniture_data->sub_furniture_vec;
  __for_begin._M_current = std::vector<HomeCustomFurnitureNodeData>::begin(&custom_furniture_data->sub_furniture_vec)._M_current;
  __for_end._M_current = std::vector<HomeCustomFurnitureNodeData>::end(&custom_furniture_data->sub_furniture_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeCustomFurnitureNodeData *,std::vector<HomeCustomFurnitureNodeData>>(
            &__for_begin,
            &__for_end) )
  {
    sub_furniture_data = __gnu_cxx::__normal_iterator<HomeCustomFurnitureNodeData *,std::vector<HomeCustomFurnitureNodeData>>::operator*(&__for_begin);
    ++*(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)sub_furniture_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)sub_furniture_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = sub_furniture_data->parent_index;
    if ( common::tools::MiscUtils::isContains<std::set<int>,int>((std::set<int> *)(v4 + 352), (const int *)(v4 + 64)) )
    {
LABEL_23:
      std::set<int>::insert((std::set<int> *const)(v4 + 352), (const std::set<int>::value_type *)(v4 + 48));
      goto LABEL_36;
    }
    if ( *(_BYTE *)(((unsigned __int64)&sub_furniture_data->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)sub_furniture_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sub_furniture_data->furniture_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 80) = sub_furniture_data->furniture_id;
    used_sub_furniture_count_map = &custom_furniture_data->used_sub_furniture_count_map;
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                          &custom_furniture_data->used_sub_furniture_count_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 80));
    __y._M_node = std::map<unsigned int,unsigned int>::end(used_sub_furniture_count_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 96),
           &__y) )
    {
      v7 = std::map<unsigned int,unsigned int>::operator[](
             total_used_sub_furniture_count_map,
             (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v8 = *v7;
      if ( v8 >= PlayerItemComp::getItemCount(player_item_comp, *(_DWORD *)(v4 + 80)) )
        goto LABEL_23;
      v9 = std::map<unsigned int,unsigned int>::operator[](
             total_used_sub_furniture_count_map,
             (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v9;
      v10 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v4 + 272),
              (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*v10;
    }
    used_pass_part_item_count_map = &custom_furniture_data->used_pass_part_item_count_map;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
           &custom_furniture_data->used_pass_part_item_count_map,
           (const unsigned int *)(v4 + 80)) )
    {
      if ( !PlayerItemComp::hasItemById(player_item_comp, *(_DWORD *)(v4 + 80)) )
        goto LABEL_23;
      v11 = std::unordered_map<unsigned int,unsigned int>::at(
              used_pass_part_item_count_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v12 = *v11;
      v13 = std::unordered_map<unsigned int,unsigned int>::operator[](
              (std::unordered_map<unsigned int,unsigned int> *const)(v4 + 512),
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 80));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v13);
      }
      *v14 = v12;
    }
    v15 = std::vector<HomeCustomFurnitureNodeData>::size((const std::vector<HomeCustomFurnitureNodeData> *const)(v4 + 128));
    __k = *(_DWORD *)(v4 + 48);
    v16 = std::map<unsigned int,unsigned int>::operator[]((std::map<unsigned int,unsigned int> *const)(v4 + 432), &__k);
    v17 = v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v16);
    }
    *v17 = v15;
    HomeCustomFurnitureNodeData::HomeCustomFurnitureNodeData(
      (HomeCustomFurnitureNodeData *const)(v4 + 192),
      sub_furniture_data);
    if ( *(int *)(v4 + 64) >= 0 )
    {
      __k = *(_DWORD *)(v4 + 64);
      v18 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v4 + 432),
              &__k);
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 192) = *v18;
    }
    v19 = std::move<HomeCustomFurnitureNodeData &>((HomeCustomFurnitureNodeData *)(v4 + 192));
    std::vector<HomeCustomFurnitureNodeData>::push_back(
      (std::vector<HomeCustomFurnitureNodeData> *const)(v4 + 128),
      v19);
    HomeCustomFurnitureNodeData::~HomeCustomFurnitureNodeData((HomeCustomFurnitureNodeData *const)(v4 + 192));
LABEL_36:
    __gnu_cxx::__normal_iterator<HomeCustomFurnitureNodeData *,std::vector<HomeCustomFurnitureNodeData>>::operator++(&__for_begin);
  }
  v20 = std::move<std::vector<HomeCustomFurnitureNodeData> &>((std::vector<HomeCustomFurnitureNodeData> *)(v4 + 128));
  std::vector<HomeCustomFurnitureNodeData>::operator=(&custom_furniture_data->sub_furniture_vec, v20);
  v21 = std::move<std::map<unsigned int,unsigned int> &>((std::map<unsigned int,unsigned int> *)(v4 + 272));
  std::map<unsigned int,unsigned int>::operator=(&custom_furniture_data->used_sub_furniture_count_map, v21);
  v22 = std::move<std::unordered_map<unsigned int,unsigned int> &>((std::unordered_map<unsigned int,unsigned int> *)(v4 + 512));
  std::unordered_map<unsigned int,unsigned int>::operator=(&custom_furniture_data->used_pass_part_item_count_map, v22);
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 432));
  std::set<int>::~set((std::set<int> *const)(v4 + 352));
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v4 + 512));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 272));
  std::vector<HomeCustomFurnitureNodeData>::~vector((std::vector<HomeCustomFurnitureNodeData> *const)(v4 + 128));
  result = 0;
  if ( v35 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8044) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 352: range 00000000145D4B7A-00000000145D50A2
bool __cdecl HomeCustomFurnitureComp::isCustomFurnitureNeedRepaire(
        HomeCustomFurnitureComp *const this,
        Player *player,
        const HomeOneCustomFurnitureData *custom_furniture_data,
        std::map<unsigned int,unsigned int> *total_used_sub_furniture_count_map)
{
  uint32_t ItemCount; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rdx
  int v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned int val; // [rsp+24h] [rbp-8Ch] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-80h] BYREF
  PlayerItemComp *player_item_comp; // [rsp+38h] [rbp-78h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-70h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v29; // [rsp+50h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id_0; // [rsp+58h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+60h] [rbp-50h]
  const std::pair<unsigned int const,unsigned int> *v32; // [rsp+68h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+70h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+78h] [rbp-38h]
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-30h] BYREF

  player_item_comp = Player::getItemComp(player);
  __for_range = &custom_furniture_data->used_sub_furniture_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&custom_furniture_data->used_sub_furniture_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&custom_furniture_data->used_sub_furniture_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v32 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    furniture_id = std::get<0ul,unsigned int const,unsigned int>(v32);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v32);
    if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ItemCount = PlayerItemComp::getItemCount(player_item_comp, *furniture_id);
    v5 = std::map<unsigned int,unsigned int>::operator[](total_used_sub_furniture_count_map, furniture_id);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *v5;
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( ItemCount < v6 + *count )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
        "isCustomFurnitureNeedRepaire",
        359);
      v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             &v35,
             (const char (*)[62])"[HOME_CUSTOM_FURNITURE] custom furniture need repaire, guid: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &custom_furniture_data->guid);
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" furniture_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v9,
              &custom_furniture_data->furniture_id);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v10,
              (const char (*)[19])" sub_furniture_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, furniture_id);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_12;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &custom_furniture_data->used_pass_part_item_count_map;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&custom_furniture_data->used_pass_part_item_count_map)._M_cur;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      return 0;
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
    furniture_id_0 = std::get<0ul,unsigned int const,unsigned int>(v29);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v29);
    if ( *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)furniture_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !PlayerItemComp::hasItemById(player_item_comp, *furniture_id_0) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
    "isCustomFurnitureNeedRepaire",
    369);
  v15 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
          &v35,
          (const char (*)[62])"[HOME_CUSTOM_FURNITURE] custom furniture need repaire, guid: ");
  v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &custom_furniture_data->guid);
  v17 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v16, (const char (*)[15])" furniture_id:");
  v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v17,
          &custom_furniture_data->furniture_id);
  v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])" sub_furniture_id:");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, furniture_id_0);
  v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
LABEL_12:
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
  common::milog::MiLogStream::~MiLogStream(&v35);
  return 1;
};

// Line 378: range 00000000145D50A4-00000000145D5C2B
void __cdecl HomeCustomFurnitureComp::logEditCustomFurniture(
        HomeCustomFurnitureComp *const this,
        Player *player,
        const HomeOneCustomFurnitureData *pre_data)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::pointer v9; // rax
  unsigned int second; // ecx
  char v11; // al
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::pointer v12; // rax
  unsigned int v13; // ecx
  char v14; // al
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurniturePlace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurniturePlace,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  google::protobuf::RepeatedField<unsigned int> *v18; // rax
  PlayerBasicComp *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  google::protobuf::RepeatedField<unsigned int> *v23; // rax
  std::string v24; // [rsp+0h] [rbp-290h]
  Player *playera; // [rsp+10h] [rbp-280h]
  unsigned int val; // [rsp+2Ch] [rbp-264h] BYREF
  std::map<std::string,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-260h] BYREF
  std::map<std::string,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-258h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self __y; // [rsp+40h] [rbp-250h] BYREF
  const HomeOneCustomFurnitureData *custom_furniture_data_ptr; // [rsp+48h] [rbp-248h]
  std::map<std::string,unsigned int> *__for_range; // [rsp+50h] [rbp-240h]
  std::map<std::string,unsigned int> *__for_range_0; // [rsp+58h] [rbp-238h]
  const std::pair<const std::string,unsigned int> *v33; // [rsp+60h] [rbp-230h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *slot_identifier_0; // [rsp+68h] [rbp-228h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *sub_furniture_id_0; // [rsp+70h] [rbp-220h]
  const std::pair<const std::string,unsigned int> *v36; // [rsp+78h] [rbp-218h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *slot_identifier; // [rsp+80h] [rbp-210h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *sub_furniture_id; // [rsp+88h] [rbp-208h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+90h] [rbp-200h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+A0h] [rbp-1F0h] BYREF
  common::milog::MiLogStream v41; // [rsp+B0h] [rbp-1E0h] BYREF
  char v42[448]; // [rsp+D0h] [rbp-1C0h] BYREF

  *(&v24._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v24._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v24._M_string_length = (std::string::size_type)pre_data;
  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 22 log_context_holder:421 64 8 8 iter:403 96 16 11 log_ptr:422 128 24 27 place_sub_furnit"
                        "ure_vec:391 192 24 29 recycle_sub_furniture_vec:392 256 48 25 pre_sub_furniture_map:386 336 48 2"
                        "5 cur_sub_furniture_map:387";
  *(_QWORD *)(v3 + 16) = HomeCustomFurnitureComp::logEditCustomFurniture;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  if ( *(_BYTE *)(((v24._M_string_length + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v24._M_string_length) + 4) & 7) + 3) >= *(_BYTE *)(((v24._M_string_length + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  custom_furniture_data_ptr = HomeCustomFurnitureComp::getCustomFurnitureData(
                                this,
                                *(_DWORD *)(v24._M_string_length + 4));
  if ( custom_furniture_data_ptr )
  {
    std::map<std::string,unsigned int>::map((std::map<std::string,unsigned int> *const)(v3 + 256));
    std::map<std::string,unsigned int>::map((std::map<std::string,unsigned int> *const)(v3 + 336));
    HomeOneCustomFurnitureData::getSubFurnitureMap(
      (const HomeOneCustomFurnitureData *const)v24._M_string_length,
      (std::map<std::string,unsigned int> *)(v3 + 256));
    HomeOneCustomFurnitureData::getSubFurnitureMap(
      custom_furniture_data_ptr,
      (std::map<std::string,unsigned int> *)(v3 + 336));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 128));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
    __for_range = (std::map<std::string,unsigned int> *)(v3 + 336);
    __for_begin._M_node = std::map<std::string,unsigned int>::begin((std::map<std::string,unsigned int> *const)(v3 + 336))._M_node;
    __for_end._M_node = std::map<std::string,unsigned int>::end((std::map<std::string,unsigned int> *const)(v3 + 336))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v36 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator*(&__for_begin);
      slot_identifier = std::get<0ul,std::string const,unsigned int>(v36);
      sub_furniture_id = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v36);
      *(std::map<std::string,unsigned int>::iterator *)(v3 + 64) = std::map<std::string,unsigned int>::find(
                                                                     (std::map<std::string,unsigned int> *const)(v3 + 256),
                                                                     slot_identifier);
      __y._M_node = std::map<std::string,unsigned int>::end((std::map<std::string,unsigned int> *const)(v3 + 256))._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v3 + 64),
             &__y) )
      {
        goto LABEL_18;
      }
      v9 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      second = v9->second;
      if ( *(_BYTE *)(((unsigned __int64)sub_furniture_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sub_furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sub_furniture_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( second == *sub_furniture_id )
        v11 = 0;
      else
LABEL_18:
        v11 = 1;
      if ( v11 )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 128), sub_furniture_id);
      std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = (std::map<std::string,unsigned int> *)(v3 + 256);
    __for_begin._M_node = std::map<std::string,unsigned int>::begin((std::map<std::string,unsigned int> *const)(v3 + 256))._M_node;
    __for_end._M_node = std::map<std::string,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v33 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator*(&__for_begin);
      slot_identifier_0 = std::get<0ul,std::string const,unsigned int>(v33);
      sub_furniture_id_0 = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v33);
      *(std::map<std::string,unsigned int>::iterator *)(v3 + 64) = std::map<std::string,unsigned int>::find(
                                                                     (std::map<std::string,unsigned int> *const)(v3 + 336),
                                                                     slot_identifier_0);
      __y._M_node = std::map<std::string,unsigned int>::end((std::map<std::string,unsigned int> *const)(v3 + 336))._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> >::_Self *)(v3 + 64),
             &__y) )
      {
        goto LABEL_31;
      }
      v12 = std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,unsigned int> > *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v12->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      v13 = v12->second;
      if ( *(_BYTE *)(((unsigned __int64)sub_furniture_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)sub_furniture_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sub_furniture_id_0 >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v13 == *sub_furniture_id_0 )
        v14 = 0;
      else
LABEL_31:
        v14 = 1;
      if ( v14 )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 192), sub_furniture_id_0);
      std::_Rb_tree_iterator<std::pair<std::string const,unsigned int>>::operator++(&__for_begin);
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 128)) )
    {
      BasicComp = Player::getBasicComp(player);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v41, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCEFu, v24);
      std::string::~string(&v41);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeCustomFurniturePlace>();
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurniturePlace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurniturePlace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&custom_furniture_data_ptr->furniture_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&custom_furniture_data_ptr->furniture_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyHomeCustomFurniturePlace::set_base_furniture_id(
        v16,
        custom_furniture_data_ptr->furniture_id);
      v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurniturePlace,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurniturePlace,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v18 = proto_log::PlayerLogBodyHomeCustomFurniturePlace::mutable_sub_furniture_id_list(v17);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v3 + 128),
        v18);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurniturePlace,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurniturePlace> *)(v3 + 96));
      Player::printStatLog((Player *const)v24._anon_0._M_allocated_capacity, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurniturePlace>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurniturePlace> *const)(v3 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 192)) )
    {
      v19 = Player::getBasicComp((Player *const)v24._anon_0._M_allocated_capacity);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v41, v19);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xCF0u, v24);
      std::string::~string(&v41);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle>();
      v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_log::PlayerLogBodyHomeCustomFurnitureRecycle::set_reason(v20, 1u);
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&custom_furniture_data_ptr->furniture_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&custom_furniture_data_ptr->furniture_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyHomeCustomFurnitureRecycle::set_base_furniture_id(
        v21,
        custom_furniture_data_ptr->furniture_id);
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v23 = proto_log::PlayerLogBodyHomeCustomFurnitureRecycle::mutable_sub_furniture_id_list(v22);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v3 + 192),
        v23);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle> *)(v3 + 96));
      Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle> *const)(v3 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 128));
    std::map<std::string,unsigned int>::~map((std::map<std::string,unsigned int> *const)(v3 + 336));
    std::map<std::string,unsigned int>::~map((std::map<std::string,unsigned int> *const)(v3 + 256));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
      "logEditCustomFurniture",
      382);
    v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v41,
           (const char (*)[63])"[HOME_CUSTOM_FURNITURE] not found custom furniture data, guid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v6,
           (const unsigned int *)(v24._M_string_length + 4));
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
  }
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
};

// Line 431: range 00000000145D5C2C-00000000145D624A
void __fastcall HomeCustomFurnitureComp::logDeleteCustomFurniture(
        HomeCustomFurnitureComp *const this,
        Player *player,
        __int32 module_id,
        std::set<unsigned int> *delete_guid_set)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  google::protobuf::RepeatedField<unsigned int> *v17; // rax
  std::string delete_guid_seta; // [rsp+0h] [rbp-1B0h]
  const std::set<unsigned int> *delete_guid_setb; // [rsp+0h] [rbp-1B0h]
  Player *playera; // [rsp+10h] [rbp-1A0h]
  HomeCustomFurnitureComp *thisa; // [rsp+18h] [rbp-198h]
  unsigned int val; // [rsp+2Ch] [rbp-184h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-180h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-178h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false> __y; // [rsp+40h] [rbp-170h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *custom_furniture_data_map; // [rsp+48h] [rbp-168h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-160h]
  const HomeOneCustomFurnitureData *custom_furniture_data; // [rsp+58h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+70h] [rbp-140h] BYREF
  std::string v31; // [rsp+80h] [rbp-130h] BYREF
  char v32[272]; // [rsp+A0h] [rbp-110h] BYREF

  *(&delete_guid_seta._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  delete_guid_seta._anon_0._M_allocated_capacity = (std::string::size_type)player;
  HIDWORD(delete_guid_seta._M_string_length) = module_id;
  delete_guid_seta._M_dataplus._M_p = (std::string::pointer)delete_guid_set;
  v4 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 1 22 log_context_holder:437 64 4 8 guid:439 80 4 13 module_id:430 96 8 8 iter:441 128 16 11"
                        " log_ptr:449 160 24 24 sub_furniture_id_vec:452";
  *(_QWORD *)(v4 + 16) = HomeCustomFurnitureComp::logDeleteCustomFurniture;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 80) = HIDWORD(delete_guid_seta._M_string_length);
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)delete_guid_seta._M_dataplus._M_p) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v31, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xCF0u, delete_guid_seta);
    std::string::~string(&v31);
    custom_furniture_data_map = (std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *)std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::operator[](
                                                                                                 &thisa->module_custom_furniture_data_map_,
                                                                                                 (const std::unordered_map<unsigned int,HomeModuleCustomFurnitureData>::key_type *)(v4 + 80));
    __for_range = delete_guid_setb;
    __for_begin._M_node = std::set<unsigned int>::begin(delete_guid_setb)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(delete_guid_setb)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = *v8;
      *(std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::iterator *)(v4 + 96) = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::find(
                                                                                              custom_furniture_data_map,
                                                                                              (const std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::key_type *)(v4 + 64));
      __y._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(custom_furniture_data_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false> *)(v4 + 96),
             &__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_custom_furniture/home_custom_furniture_comp.cpp",
          "logDeleteCustomFurniture",
          444);
        v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
               (common::milog::MiLogStream *const)&v31,
               (const char (*)[63])"[HOME_CUSTOM_FURNITURE] not found custom furniture data, guid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v4 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" module_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v4 + 80));
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" home_uid:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->home_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Home::getHomeUid(thisa->home_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v31);
      }
      else
      {
        custom_furniture_data = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false> *const)(v4 + 96))->second;
        common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle>();
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        proto_log::PlayerLogBodyHomeCustomFurnitureRecycle::set_reason(v14, 2u);
        v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&custom_furniture_data->furniture_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&custom_furniture_data->furniture_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyHomeCustomFurnitureRecycle::set_base_furniture_id(
          v15,
          custom_furniture_data->furniture_id);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 160));
        HomeOneCustomFurnitureData::getSubFurnitureIds(custom_furniture_data, (std::vector<unsigned int> *)(v4 + 160));
        v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        v17 = proto_log::PlayerLogBodyHomeCustomFurnitureRecycle::mutable_sub_furniture_id_list(v16);
        common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
          (const std::vector<unsigned int> *)(v4 + 160),
          v17);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle> *)(v4 + 128));
        Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 160));
        std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeCustomFurnitureRecycle> *const)(v4 + 128));
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  }
  if ( v32 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};
