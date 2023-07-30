// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/collection/player_aranara_collection_comp.cpp

// Line 23: range 00000000175CF39E-00000000175CF89A
int32_t __cdecl PlayerAranaraCollectionComp::fromBin(
        PlayerAranaraCollectionComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const unsigned int *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::map<unsigned int,unsigned int> *v12; // r15
  unsigned int *v13; // rcx
  std::map<unsigned int,unsigned int> *v14; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >,bool> v15; // rax
  common::milog::MiLogStream *v16; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-164h] BYREF
  google::protobuf::RepeatedPtrField<proto::AranaraCollectionSuiteBin>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  google::protobuf::RepeatedPtrField<proto::AranaraCollectionSuiteBin>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-150h]
  const proto::PlayerAranaraCollectionCompBin *proto_comp; // [rsp+48h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::AranaraCollectionSuiteBin> *__for_range; // [rsp+50h] [rbp-140h]
  const proto::AranaraCollectionSuiteBin *collection_suite_bin; // [rsp+58h] [rbp-138h]
  const google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin> *__for_range_0; // [rsp+60h] [rbp-130h]
  const unsigned int *p_collection_state; // [rsp+68h] [rbp-128h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+70h] [rbp-120h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+78h] [rbp-118h]
  google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin>::const_iterator __for_begin_0; // [rsp+80h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin>::const_iterator __for_end_0; // [rsp+A0h] [rbp-F0h] BYREF
  common::milog::MiLogStream v31; // [rsp+C0h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 16 collection_id:30 48 48 28 collection_id_2_state_map:27";
  *(_QWORD *)(v2 + 16) = PlayerAranaraCollectionComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  proto_comp = proto::PlayerDataBin::aranara_collection_bin(player_data_bin);
  __for_range = proto::PlayerAranaraCollectionCompBin::collection_suite_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::AranaraCollectionSuiteBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::AranaraCollectionSuiteBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::AranaraCollectionSuiteBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    collection_suite_bin = google::protobuf::internal::RepeatedPtrIterator<proto::AranaraCollectionSuiteBin const>::operator*(&__for_begin);
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
    __for_range_0 = proto::AranaraCollectionSuiteBin::state_collection_map(collection_suite_bin);
    google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin>::begin(&__for_begin_0, __for_range_0);
    google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin>::end(&__for_end_0, __for_range_0);
    while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
    {
      p_collection_state = (const unsigned int *)google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin>::const_iterator::operator*(&__for_begin_0);
      __for_range_1 = proto::AranaraCollectionListBin::collection_id_list((const proto::AranaraCollectionListBin *const)(p_collection_state + 2));
      __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
      __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
      while ( __for_begin_1 != __for_end_1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(__for_begin_1);
        }
        *(_DWORD *)(v2 + 32) = *__for_begin_1;
        v6 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
               (std::map<unsigned int,unsigned int> *const)(v2 + 48),
               (unsigned int *)(v2 + 32),
               p_collection_state,
               (unsigned int *)(v2 + 32),
               v5);
        if ( !v6.second )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/collection/player_aranara_collection_comp.cpp",
            "fromBin",
            34);
          v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                 &v31,
                 (const char (*)[25])"duplicate collection_id:");
          v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v7,
                 (const unsigned int *)(v2 + 32));
          v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v8,
                 (const char (*)[19])" collection_state:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, p_collection_state);
          v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v10,
                  (const char (*)[18])" collection_type:");
          val = proto::AranaraCollectionSuiteBin::collection_type(collection_suite_bin);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
        ++__for_begin_1;
      }
      google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin>::const_iterator::operator++(&__for_begin_0);
    }
    v12 = std::move<std::map<unsigned int,unsigned int> &>((std::map<unsigned int,unsigned int> *)(v2 + 48));
    val = proto::AranaraCollectionSuiteBin::collection_type(collection_suite_bin);
    v15 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::emplace<unsigned int,std::map<unsigned int,unsigned int>>(
            &this->type_2_collection_map_map_,
            &val,
            v12,
            v13,
            v14);
    if ( !v15.second )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/collection/player_aranara_collection_comp.cpp",
        "fromBin",
        40);
      v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v31,
              (const char (*)[27])"duplicate collection_type:");
      val = proto::AranaraCollectionSuiteBin::collection_type(collection_suite_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::AranaraCollectionSuiteBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v32 == (char *)v2 )
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

// Line 48: range 00000000175CF89C-00000000175CFB5B
int32_t __cdecl PlayerAranaraCollectionComp::toBin(
        PlayerAranaraCollectionComp *const this,
        proto::PlayerDataBin *player_data_bin)
{
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  proto::AranaraCollectionListBin *v5; // rcx
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  proto::PlayerAranaraCollectionCompBin *proto_comp; // [rsp+38h] [rbp-58h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v13; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *collection_type; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *collection_id_2_state_map; // [rsp+58h] [rbp-38h]
  proto::AranaraCollectionSuiteBin *collection_suite_bin; // [rsp+60h] [rbp-30h]
  google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin> *state_collection_map; // [rsp+68h] [rbp-28h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+70h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+78h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *state; // [rsp+80h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+88h] [rbp-8h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_aranara_collection_bin(player_data_bin);
  __for_range = &this->type_2_collection_map_map_;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->type_2_collection_map_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->type_2_collection_map_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    collection_type = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v13);
    collection_id_2_state_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v13);
    collection_suite_bin = proto::PlayerAranaraCollectionCompBin::add_collection_suite_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)collection_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)collection_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)collection_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(collection_type);
    }
    proto::AranaraCollectionSuiteBin::set_collection_type(collection_suite_bin, *collection_type);
    state_collection_map = proto::AranaraCollectionSuiteBin::mutable_state_collection_map(collection_suite_bin);
    __for_range_0 = collection_id_2_state_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(collection_id_2_state_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v2 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v3 = v2;
      if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v2, 8LL);
      }
      __in = *v3;
      id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v4 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      state = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      if ( *state )
      {
        v5 = google::protobuf::Map<unsigned int,proto::AranaraCollectionListBin>::operator[](
               state_collection_map,
               state);
        if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(id);
        }
        proto::AranaraCollectionListBin::add_collection_id_list(v5, *id);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 68: range 00000000175CFB5C-00000000175CFB7A
int32_t __cdecl PlayerAranaraCollectionComp::init(PlayerAranaraCollectionComp *const this)
{
  PlayerAranaraCollectionComp::initEventObservers(this);
  return 0;
};

// Line 77: range 00000000175CFB7C-00000000175D0562
int32_t __cdecl PlayerAranaraCollectionComp::notifyAllData(PlayerAranaraCollectionComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *v6; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t v13; // r14d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v14; // rsi
  proto::AranaraCollectionState *v15; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v16; // rdx
  char v17; // cl
  std::_Rb_tree_const_iterator<unsigned int>::reference v18; // rax
  _DWORD *v19; // rdx
  PlayerWatcherComp *WatcherComp; // rax
  int32_t result; // eax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type state; // [rsp+1Ch] [rbp-1F4h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+20h] [rbp-1F0h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator __for_begin_1; // [rsp+28h] [rbp-1E8h] BYREF
  std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-1D8h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+40h] [rbp-1D0h]
  const CatalogExcelConfigMgr *catalog_config_mgr; // [rsp+48h] [rbp-1C8h]
  const std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_1; // [rsp+50h] [rbp-1C0h]
  const std::pair<unsigned int const,std::set<unsigned int> > *v30; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::set<unsigned int> > >::type *catalog_type; // [rsp+60h] [rbp-1B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *watcher_set; // [rsp+68h] [rbp-1A8h]
  proto::CataLogGlobalWatcherFinishedData *finished_global_watcher_data; // [rsp+70h] [rbp-1A0h]
  google::protobuf::RepeatedField<unsigned int> *watcher_list; // [rsp+78h] [rbp-198h]
  const std::set<unsigned int> *__for_range_2; // [rsp+80h] [rbp-190h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v36; // [rsp+88h] [rbp-188h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *collection_type; // [rsp+90h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *collection_id_map; // [rsp+98h] [rbp-178h]
  proto::AranaraCollectionSuite *collection_suite; // [rsp+A0h] [rbp-170h]
  google::protobuf::Map<unsigned int,proto::AranaraCollectionState> *collection_id_state_map; // [rsp+A8h] [rbp-168h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+B0h] [rbp-160h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *collection_id; // [rsp+B8h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *uint_state; // [rsp+C0h] [rbp-150h]
  std::set<unsigned int>::iterator __for_end_0; // [rsp+C8h] [rbp-148h] BYREF
  std::shared_ptr<Config> v45; // [rsp+D0h] [rbp-140h] BYREF
  common::milog::MiLogStream v46; // [rsp+E0h] [rbp-130h] BYREF
  char v47[272]; // [rsp+100h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 14 watcher_id:114 64 48 9 notify:78 144 48 34 global_watcher_all_data_notify:108";
  *(_QWORD *)(v1 + 16) = PlayerAranaraCollectionComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  proto::AranaraCollectionDataNotify::AranaraCollectionDataNotify((proto::AranaraCollectionDataNotify *const)(v1 + 64));
  __for_range = &this->type_2_collection_map_map_;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->type_2_collection_map_map_)._M_node;
  __for_begin_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->type_2_collection_map_map_)._M_node;
  while ( std::operator!=(
            &__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_begin_1) )
  {
    v36 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    collection_type = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v36);
    collection_id_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v36);
    collection_suite = proto::AranaraCollectionDataNotify::add_collection_suite_list((proto::AranaraCollectionDataNotify *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)collection_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)collection_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)collection_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(collection_type);
    }
    if ( !data::isValidAranaraCollectionType(*collection_type) )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/collection/player_aranara_collection_comp.cpp",
        "notifyAllData",
        84);
      v4 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v46,
             (const char (*)[25])"invalid collection_type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, collection_type);
      common::milog::MiLogStream::~MiLogStream(&v46);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)collection_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)collection_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)collection_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(collection_type);
      }
      proto::AranaraCollectionSuite::set_collection_type(collection_suite, *collection_type);
      collection_id_state_map = proto::AranaraCollectionSuite::mutable_collection_id_state_map(collection_suite);
      __for_range_0 = collection_id_map;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::map<unsigned int,unsigned int>::begin(collection_id_map)._M_node;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
      {
        v5 = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
        v6 = v5;
        if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v5 + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v5, 8LL);
        }
        __for_end_0._M_node = *v6;
        collection_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
        v7 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end_0);
        uint_state = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        if ( !proto::AranaraCollectionState_IsValid(*uint_state) )
        {
          common::milog::MiLogStream::create(
            &v46,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/collection/player_aranara_collection_comp.cpp",
            "notifyAllData",
            93);
          v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                 &v46,
                 (const char (*)[26])"invalid collection_state:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, uint_state);
          v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v9,
                  (const char (*)[16])" collection_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, collection_id);
          v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v11,
                  (const char (*)[18])" collection_type:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, collection_type);
          common::milog::MiLogStream::~MiLogStream(&v46);
          v13 = -1;
          goto LABEL_47;
        }
        if ( *(_BYTE *)(((unsigned __int64)uint_state >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uint_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uint_state >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(uint_state);
        }
        state = *uint_state;
        if ( *uint_state )
        {
          v14 = collection_id;
          v15 = google::protobuf::Map<unsigned int,proto::AranaraCollectionState>::operator[](
                  collection_id_state_map,
                  collection_id);
          v16 = (std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *)v15;
          v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
          if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
          {
            LOBYTE(v14) = v17 != 0;
            __asan_report_store4(v15, v14, v15);
          }
          *v16 = state;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_end);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  catalog_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.catalog_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v45);
  proto::CataLogFinishedGlobalWatcherAllDataNotify::CataLogFinishedGlobalWatcherAllDataNotify((proto::CataLogFinishedGlobalWatcherAllDataNotify *const)(v1 + 144));
  __for_range_1 = CatalogExcelConfigMgr::getCatalogType2GlobalWatcherSetMap(catalog_config_mgr);
  __for_begin_1._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_1)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            &__for_begin_1,
            &__for_end) )
  {
    v30 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*(&__for_begin_1);
    catalog_type = std::get<0ul,unsigned int const,std::set<unsigned int>>(v30);
    watcher_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v30);
    finished_global_watcher_data = proto::CataLogFinishedGlobalWatcherAllDataNotify::add_finished_global_watcher_data_list((proto::CataLogFinishedGlobalWatcherAllDataNotify *const)(v1 + 144));
    if ( *(_BYTE *)(((unsigned __int64)catalog_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)catalog_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)catalog_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(catalog_type);
    }
    proto::CataLogGlobalWatcherFinishedData::set_catalog_type(finished_global_watcher_data, *catalog_type);
    watcher_list = proto::CataLogGlobalWatcherFinishedData::mutable_finished_global_watcher_list(finished_global_watcher_data);
    __for_range_2 = watcher_set;
    __for_begin_0._M_node = std::set<unsigned int>::begin(watcher_set)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_2)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v18 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      v19 = v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      *(_DWORD *)(v1 + 48) = *v19;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      if ( PlayerWatcherComp::isGlobalWatcherFinished(WatcherComp, *(_DWORD *)(v1 + 48)) )
        google::protobuf::RepeatedField<unsigned int>::Add(watcher_list, (const unsigned int *)(v1 + 48));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++(&__for_begin_1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 144));
  v13 = 0;
  proto::CataLogFinishedGlobalWatcherAllDataNotify::~CataLogFinishedGlobalWatcherAllDataNotify((proto::CataLogFinishedGlobalWatcherAllDataNotify *const)(v1 + 144));
LABEL_47:
  proto::AranaraCollectionDataNotify::~AranaraCollectionDataNotify((proto::AranaraCollectionDataNotify *const)(v1 + 64));
  result = v13;
  if ( v47 == (char *)v1 )
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
  return result;
};

// Line 130: range 00000000175D0564-00000000175D0716
bool __fastcall PlayerAranaraCollectionComp::isCollectionExist(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        uint32_t collection_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::pointer v7; // rax
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __x; // [rsp+10h] [rbp-90h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 19 collection_type:129 48 4 17 collection_id:129 64 8 8 iter:131";
  *(_QWORD *)(v3 + 16) = PlayerAranaraCollectionComp::isCollectionExist;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = collection_type;
  *(_DWORD *)(v3 + 48) = collection_id;
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                         &this->type_2_collection_map_map_,
                                                                                         (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->type_2_collection_map_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 64));
    __y._M_node = std::map<unsigned int,unsigned int>::end(&v6->second)._M_node;
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 64));
    __x._M_node = std::map<unsigned int,unsigned int>::find(
                    &v7->second,
                    (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48))._M_node;
    result = std::operator!=(
               &__x,
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__y);
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v3 )
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

// Line 141: range 00000000175D0718-00000000175D0B41
__int64 __fastcall PlayerAranaraCollectionComp::isCollectionValid(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        uint32_t collection_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const data::AranaraCollectionExcelConfig *aranara_collection_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 26 config_collection_type:153 48 4 19 collection_type:140 64 4 17 collection_id:140";
  *(_QWORD *)(v3 + 16) = PlayerAranaraCollectionComp::isCollectionValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = collection_type;
  *(_DWORD *)(v3 + 64) = collection_id;
  if ( !data::isValidAranaraCollectionType(*(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "isCollectionValid",
      144);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v22,
           (const char (*)[25])"invalid collection_type:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" collection_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    aranara_collection_config_ptr = data::CatalogExcelConfigMgrBase::findAranaraCollectionExcelConfig(
                                      &v10->design_config.txt_config_mgr.catalog_config_mgr,
                                      *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( aranara_collection_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&aranara_collection_config_ptr->aranara_collection_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)aranara_collection_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&aranara_collection_config_ptr->aranara_collection_type >> 3)
                                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&aranara_collection_config_ptr->aranara_collection_type);
      }
      *(_DWORD *)(v3 + 32) = aranara_collection_config_ptr->aranara_collection_type;
      if ( *(_DWORD *)(v3 + 32) == *(_DWORD *)(v3 + 48) )
      {
        result = 1LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/collection/player_aranara_collection_comp.cpp",
          "isCollectionValid",
          156);
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v22,
                (const char (*)[44])"collection_type not match, collection_type:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v15,
                (const char (*)[24])" config_collection_type");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 32));
        v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" collection_id");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/collection/player_aranara_collection_comp.cpp",
        "isCollectionValid",
        150);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v22,
              (const char (*)[23])"invalid collection_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v12,
              (const char (*)[18])" collection_type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0LL;
    }
  }
  if ( v23 == (char *)v3 )
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

// Line 164: range 00000000175D0B42-00000000175D0E32
__int64 __fastcall PlayerAranaraCollectionComp::getCollectionState(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        uint32_t collection_id,
        unsigned __int64 state)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int> *v11; // rax
  char *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rdx
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 19 collection_type:163 64 4 17 collection_id:163";
  *(_QWORD *)(v4 + 16) = PlayerAranaraCollectionComp::getCollectionState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = collection_type;
  *(_DWORD *)(v4 + 64) = collection_id;
  if ( (unsigned __int8)PlayerAranaraCollectionComp::isCollectionValid(this, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64)) != 1 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "getCollectionState",
      167);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v21,
           (const char (*)[25])"invalid collection_type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" collection_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( PlayerAranaraCollectionComp::isCollectionExist(this, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64)) )
    {
      v11 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
              &this->type_2_collection_map_map_,
              (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      v12 = (char *)(v4 + 64);
      v13 = std::map<unsigned int,unsigned int>::operator[](
              v11,
              (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)((state >> 3) + 0x7FFF8000);
      LOBYTE(v12) = v16 != 0;
      v17 = (v16 != 0) & (unsigned __int8)((char)((state & 7) + 3) >= v16);
      if ( (_BYTE)v17 )
        __asan_report_store4(state, v12, v17);
      *(_DWORD *)state = v15;
    }
    else
    {
      v18 = (*(_BYTE *)((state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((state & 7) + 3) >= *(_BYTE *)((state >> 3) + 0x7FFF8000));
      if ( (_BYTE)v18 )
        __asan_report_store4(state, (unsigned int)(state & 7) + 3, v18);
      *(_DWORD *)state = 0;
    }
    result = 0LL;
  }
  if ( v22 == (char *)v4 )
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

// Line 183: range 00000000175D0E34-00000000175D103E
int32_t __fastcall PlayerAranaraCollectionComp::modifyCollectionState(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        uint32_t collection_id,
        uint32_t target_state)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 19 collection_type:182 48 4 17 collection_id:182 64 4 16 target_state:182";
  *(_QWORD *)(v4 + 16) = PlayerAranaraCollectionComp::modifyCollectionState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 32) = collection_type;
  *(_DWORD *)(v4 + 48) = collection_id;
  *(_DWORD *)(v4 + 64) = target_state;
  if ( !proto::AranaraCollectionState_IsValid(*(_DWORD *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "modifyCollectionState",
      186);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v15,
           (const char (*)[26])"invalid collection state:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" collection_type:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" collection_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    result = PlayerAranaraCollectionComp::modifyCollectionState(
               this,
               *(_DWORD *)(v4 + 32),
               *(_DWORD *)(v4 + 48),
               *(proto::AranaraCollectionState *)(v4 + 64));
  }
  if ( v16 == (char *)v4 )
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

// Line 194: range 00000000175D1040-00000000175D13BF
__int64 __fastcall PlayerAranaraCollectionComp::modifyCollectionState(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        uint32_t collection_id,
        proto::AranaraCollectionState target_state)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int> *v11; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  proto::AranaraCollectionState from_state; // [rsp+2Ch] [rbp-A4h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 19 uint_from_state:203 48 4 19 collection_type:193 64 4 17 collection_id:193";
  *(_QWORD *)(v4 + 16) = PlayerAranaraCollectionComp::modifyCollectionState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = collection_type;
  *(_DWORD *)(v4 + 64) = collection_id;
  if ( (unsigned __int8)PlayerAranaraCollectionComp::isCollectionValid(this, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64)) != 1 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "modifyCollectionState",
      197);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v22,
           (const char (*)[37])"collection invalid, collection_type:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" collection_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
    goto LABEL_13;
  }
  from_state = ARANARA_COLLECTION_STATE_NONE;
  if ( PlayerAranaraCollectionComp::isCollectionExist(this, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 64)) )
  {
    v11 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
            &this->type_2_collection_map_map_,
            (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
    v12 = std::map<unsigned int,unsigned int>::operator[](
            v11,
            (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    *(_DWORD *)(v4 + 32) = *v13;
    if ( !proto::AranaraCollectionState_IsValid(*(_DWORD *)(v4 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/collection/player_aranara_collection_comp.cpp",
        "modifyCollectionState",
        206);
      v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v22,
              (const char (*)[26])"invalid collection state:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v15,
              (const char (*)[18])" collection_type:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])" collection_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
      goto LABEL_13;
    }
    from_state = *(_DWORD *)(v4 + 32);
  }
  PlayerAranaraCollectionComp::changeCollectionState(
    this,
    *(_DWORD *)(v4 + 48),
    *(_DWORD *)(v4 + 64),
    from_state,
    target_state);
  result = 0LL;
LABEL_13:
  if ( v23 == (char *)v4 )
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

// Line 217: range 00000000175D13C0-00000000175D18C7
__int64 __fastcall PlayerAranaraCollectionComp::getCollectionCountByTypeAndState(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        proto::AranaraCollectionState state,
        unsigned __int64 count)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // edi
  __int64 v10; // rdx
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  __int64 v19; // rdx
  uint32_t uint_state; // [rsp+2Ch] [rbp-F4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const std::vector<unsigned int> *collection_id_vec; // [rsp+40h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v27; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v28; // [rsp+60h] [rbp-C0h] BYREF
  char v29[160]; // [rsp+80h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 17 collection_id:229 64 4 19 uint_real_state:231 80 4 19 collection_type:216 96 4 9 state:216";
  *(_QWORD *)(v4 + 16) = PlayerAranaraCollectionComp::getCollectionCountByTypeAndState;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202116348;
  *(_DWORD *)(v4 + 80) = collection_type;
  *(_DWORD *)(v4 + 96) = state;
  v7 = (*(_BYTE *)((count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((count & 7) + 3) >= *(_BYTE *)((count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(count, (unsigned int)(count & 7) + 3, v7);
  *(_DWORD *)count = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  collection_id_vec = CatalogExcelConfigMgr::getCollectionIdVecByType(
                        &v8->design_config.txt_config_mgr.catalog_config_mgr,
                        *(_DWORD *)(v4 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v27);
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->type_2_collection_map_map_)._M_node;
  __for_begin._M_current = (const unsigned int *)std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                   &this->type_2_collection_map_map_,
                                                   (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 80))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_begin,
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_end) )
  {
    if ( !*(_DWORD *)(v4 + 96) )
    {
      v9 = std::vector<unsigned int>::size(collection_id_vec);
      v10 = (*(_BYTE *)((count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((count & 7) + 3) >= *(_BYTE *)((count >> 3) + 0x7FFF8000));
      if ( (_BYTE)v10 )
      {
        v9 = count;
        __asan_report_store4(count, (unsigned int)(count & 7) + 3, v10);
      }
      *(_DWORD *)count = v9;
    }
    result = 0LL;
  }
  else
  {
    uint_state = *(_DWORD *)(v4 + 96);
    __for_range = collection_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(collection_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        result = 0LL;
        goto LABEL_26;
      }
      v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v4 + 48) = *v13;
      *(_DWORD *)(v4 + 64) = 0;
      if ( (unsigned int)PlayerAranaraCollectionComp::getCollectionState(
                           this,
                           *(_DWORD *)(v4 + 80),
                           *(_DWORD *)(v4 + 48),
                           v4 + 64) )
        break;
      if ( uint_state == *(_DWORD *)(v4 + 64) )
      {
        if ( *(_BYTE *)((count >> 3) + 0x7FFF8000) != 0
          && (char)((count & 7) + 3) >= *(_BYTE *)((count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(count);
        }
        ++*(_DWORD *)count;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "getCollectionCountByTypeAndState",
      234);
    v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v28,
            (const char (*)[56])"getCollectionCountByTypeAndState fail, collection_type:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 80));
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" collection_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 48));
    v18 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v17, (const char (*)[8])" state:");
    common::milog::MiLogStream::operator<<<proto::AranaraCollectionState,(proto::AranaraCollectionState*)0>(
      v18,
      (const proto::AranaraCollectionState *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v19 = (*(_BYTE *)((count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((count & 7) + 3) >= *(_BYTE *)((count >> 3) + 0x7FFF8000));
    if ( (_BYTE)v19 )
      __asan_report_store4(count, (unsigned int)(count & 7) + 3, v19);
    *(_DWORD *)count = 0;
    result = 0xFFFFFFFFLL;
  }
LABEL_26:
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 248: range 00000000175D18C8-00000000175D19A0
int32_t __cdecl PlayerAranaraCollectionComp::changeAllCollectionStateByType(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        proto::AranaraCollectionState from_state,
        proto::AranaraCollectionState target_state)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t result; // eax
  char v10[96]; // [rsp+20h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 17 changed_count:249";
  *(_QWORD *)(v4 + 16) = PlayerAranaraCollectionComp::changeAllCollectionStateByType;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = 0;
  result = PlayerAranaraCollectionComp::changeAllCollectionStateByType(
             this,
             collection_type,
             from_state,
             target_state,
             (uint32_t *)(v4 + 32));
  if ( v10 == (char *)v4 )
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

// Line 255: range 00000000175D19A2-00000000175D1E97
__int64 __fastcall PlayerAranaraCollectionComp::changeAllCollectionStateByType(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        proto::AranaraCollectionState from_state,
        proto::AranaraCollectionState target_state,
        unsigned __int64 changed_count)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t uint_from_state; // [rsp+2Ch] [rbp-F4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-E8h] BYREF
  const std::vector<unsigned int> *collection_id_vec; // [rsp+40h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-D8h]
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-C0h] BYREF
  char v31[160]; // [rsp+80h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 17 collection_id:264 48 4 19 uint_real_state:266 64 4 19 collection_type:254 80 4 14 from"
                        "_state:254 96 4 16 target_state:254";
  *(_QWORD *)(v5 + 16) = PlayerAranaraCollectionComp::changeAllCollectionStateByType;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -202116348;
  *(_DWORD *)(v5 + 64) = collection_type;
  *(_DWORD *)(v5 + 80) = from_state;
  *(_DWORD *)(v5 + 96) = target_state;
  v8 = (*(_BYTE *)((changed_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((changed_count & 7) + 3) >= *(_BYTE *)((changed_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store4(changed_count, (unsigned int)(changed_count & 7) + 3, v8);
  *(_DWORD *)changed_count = 0;
  if ( *(_DWORD *)(v5 + 80) == *(_DWORD *)(v5 + 96) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "changeAllCollectionStateByType",
      259);
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v30, (const char (*)[19])"state not changed:");
    v10 = common::milog::MiLogStream::operator<<<proto::AranaraCollectionState,(proto::AranaraCollectionState*)0>(
            v9,
            (const proto::AranaraCollectionState *)(v5 + 80));
    v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])" collection_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0LL;
  }
  else
  {
    uint_from_state = *(_DWORD *)(v5 + 80);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    collection_id_vec = CatalogExcelConfigMgr::getCollectionIdVecByType(
                          &v13->design_config.txt_config_mgr.catalog_config_mgr,
                          *(_DWORD *)(v5 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v29);
    __for_range = collection_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(collection_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(collection_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v14 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      *(_DWORD *)(v5 + 32) = *v15;
      *(_DWORD *)(v5 + 48) = 0;
      if ( (unsigned int)PlayerAranaraCollectionComp::getCollectionState(
                           this,
                           *(_DWORD *)(v5 + 64),
                           *(_DWORD *)(v5 + 32),
                           v5 + 48) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/collection/player_aranara_collection_comp.cpp",
          "changeAllCollectionStateByType",
          269);
        v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                &v30,
                (const char (*)[56])"getCollectionCountByTypeAndState fail, collection_type:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v5 + 64));
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v17,
                (const char (*)[16])" collection_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v5 + 32));
        v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" target_state:");
        common::milog::MiLogStream::operator<<<proto::AranaraCollectionState,(proto::AranaraCollectionState*)0>(
          v20,
          (const proto::AranaraCollectionState *)(v5 + 96));
        common::milog::MiLogStream::~MiLogStream(&v30);
        result = 0xFFFFFFFFLL;
        goto LABEL_20;
      }
      if ( uint_from_state == *(_DWORD *)(v5 + 48) )
      {
        PlayerAranaraCollectionComp::changeCollectionState(
          this,
          *(_DWORD *)(v5 + 64),
          *(_DWORD *)(v5 + 32),
          *(proto::AranaraCollectionState *)(v5 + 80),
          *(proto::AranaraCollectionState *)(v5 + 96));
        if ( *(_BYTE *)((changed_count >> 3) + 0x7FFF8000) != 0
          && (char)((changed_count & 7) + 3) >= *(_BYTE *)((changed_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(changed_count);
        }
        ++*(_DWORD *)changed_count;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
LABEL_20:
  if ( v31 == (char *)v5 )
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
  return result;
};

// Line 283: range 00000000175D1E98-00000000175D23EB
void __fastcall PlayerAranaraCollectionComp::changeCollectionState(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        uint32_t collection_id,
        proto::AranaraCollectionState from_state,
        proto::AranaraCollectionState target_state)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::map<unsigned int,unsigned int> *v11; // rax
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *v12; // rax
  unsigned int *v13; // r8
  unsigned int *v14; // r9
  int v15; // r14d
  std::map<unsigned int,unsigned int> *v16; // rax
  char *v17; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rax
  _DWORD *v19; // rdx
  char v20; // cl
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-F0h] BYREF
  char v34[208]; // [rsp+50h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 48 4 21 uint_target_state:289 64 4 19 collection_type:282 80 4 17 collection_id:282 96 4 14 fr"
                        "om_state:282 112 4 16 target_state:282 128 16 13 event_ptr:304";
  *(_QWORD *)(v5 + 16) = PlayerAranaraCollectionComp::changeCollectionState;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 64) = collection_type;
  *(_DWORD *)(v5 + 80) = collection_id;
  *(_DWORD *)(v5 + 96) = from_state;
  *(_DWORD *)(v5 + 112) = target_state;
  if ( *(_DWORD *)(v5 + 96) == *(_DWORD *)(v5 + 112) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "changeCollectionState",
      286);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v33, (const char (*)[19])"state not changed:");
    v9 = common::milog::MiLogStream::operator<<<proto::AranaraCollectionState,(proto::AranaraCollectionState*)0>(
           v8,
           (const proto::AranaraCollectionState *)(v5 + 96));
    v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" collection_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  else
  {
    *(_DWORD *)(v5 + 48) = *(_DWORD *)(v5 + 112);
    if ( *(_DWORD *)(v5 + 112) )
    {
      v15 = *(_DWORD *)(v5 + 48);
      v16 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
              &this->type_2_collection_map_map_,
              (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 64));
      v17 = (char *)(v5 + 80);
      v18 = std::map<unsigned int,unsigned int>::operator[](
              v16,
              (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 80));
      v19 = v18;
      v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
      {
        LOBYTE(v17) = v20 != 0;
        __asan_report_store4(v18, v17, v18);
      }
      *v19 = v15;
    }
    else
    {
      v11 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
              &this->type_2_collection_map_map_,
              (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 64));
      std::map<unsigned int,unsigned int>::erase(v11, (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 80));
      v12 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
              &this->type_2_collection_map_map_,
              (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 64));
      if ( !std::map<unsigned int,unsigned int>::size(v12) )
        std::map<unsigned int,std::map<unsigned int,unsigned int>>::erase(
          &this->type_2_collection_map_map_,
          (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 64));
    }
    common::tools::perf::make_shared<AranaraCollectionStateChangeEvent,unsigned int &,unsigned int &,unsigned int &>(
      (unsigned int *)(v5 + 128),
      (unsigned int *)(v5 + 64),
      (unsigned int *)(v5 + 80),
      (unsigned int *)(v5 + 48),
      v13,
      v14);
    if ( std::operator==<AranaraCollectionStateChangeEvent>(
           0LL,
           (const std::shared_ptr<AranaraCollectionStateChangeEvent> *)(v5 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/collection/player_aranara_collection_comp.cpp",
        "changeCollectionState",
        307);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v33, (const char (*)[21])"event_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<AranaraCollectionStateChangeEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<AranaraCollectionStateChangeEvent> *)(v5 + 128));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    }
    PlayerAranaraCollectionComp::notifyAddCollection(
      this,
      *(_DWORD *)(v5 + 64),
      *(_DWORD *)(v5 + 80),
      *(proto::AranaraCollectionState *)(v5 + 96),
      *(proto::AranaraCollectionState *)(v5 + 112));
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/collection/player_aranara_collection_comp.cpp",
      "changeCollectionState",
      314);
    v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v33, (const char (*)[15])"collection_id:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 80));
    v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v23,
            (const char (*)[20])" state change from:");
    v25 = common::milog::MiLogStream::operator<<<proto::AranaraCollectionState,(proto::AranaraCollectionState*)0>(
            v24,
            (const proto::AranaraCollectionState *)(v5 + 96));
    v26 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v25, (const char (*)[5])" to:");
    v27 = common::milog::MiLogStream::operator<<<proto::AranaraCollectionState,(proto::AranaraCollectionState*)0>(
            v26,
            (const proto::AranaraCollectionState *)(v5 + 112));
    v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v27, (const char (*)[18])" collection_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v5 + 64));
    common::milog::MiLogStream::~MiLogStream(&v33);
    std::shared_ptr<AranaraCollectionStateChangeEvent>::~shared_ptr((std::shared_ptr<AranaraCollectionStateChangeEvent> *const)(v5 + 128));
  }
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 320: range 00000000175D23EC-00000000175D25C7
void __cdecl PlayerAranaraCollectionComp::notifyAddCollection(
        PlayerAranaraCollectionComp *const this,
        uint32_t collection_type,
        uint32_t collection_id,
        proto::AranaraCollectionState from_state,
        proto::AranaraCollectionState target_state)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  char v11[160]; // [rsp+20h] [rbp-A0h] BYREF

  v5 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 48 40 10 notify:321";
  *(_QWORD *)(v5 + 16) = PlayerAranaraCollectionComp::notifyAddCollection;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  proto::AddAranaraCollectionNotify::AddAranaraCollectionNotify((proto::AddAranaraCollectionNotify *const)(v5 + 48));
  proto::AddAranaraCollectionNotify::set_collection_type(
    (proto::AddAranaraCollectionNotify *const)(v5 + 48),
    collection_type);
  proto::AddAranaraCollectionNotify::set_collection_id(
    (proto::AddAranaraCollectionNotify *const)(v5 + 48),
    collection_id);
  proto::AddAranaraCollectionNotify::set_from_state((proto::AddAranaraCollectionNotify *const)(v5 + 48), from_state);
  proto::AddAranaraCollectionNotify::set_target_state((proto::AddAranaraCollectionNotify *const)(v5 + 48), target_state);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v5 + 48));
  proto::AddAranaraCollectionNotify::~AddAranaraCollectionNotify((proto::AddAranaraCollectionNotify *const)(v5 + 48));
  if ( v11 == (char *)v5 )
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

// Line 331: range 00000000175D25C8-00000000175D27B6
void __cdecl PlayerAranaraCollectionComp::initEventObservers(PlayerAranaraCollectionComp *const this)
{
  unsigned __int64 p_M_refcount; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::weak_ptr<PlayerAranaraCollectionComp> *p_this_wtr; // [rsp+10h] [rbp-A0h]
  std::weak_ptr<PlayerAranaraCollectionComp> v5; // [rsp+20h] [rbp-90h] BYREF
  PlayerAranaraCollectionComp t; // [rsp+30h] [rbp-80h] BYREF

  p_M_refcount = (unsigned __int64)&t._M_weak_this._M_refcount;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      p_M_refcount = v2;
  }
  *(_QWORD *)p_M_refcount = 1102416563LL;
  *(_QWORD *)(p_M_refcount + 8) = "1 32 16 12 this_wtr:332";
  *(_QWORD *)(p_M_refcount + 16) = PlayerAranaraCollectionComp::initEventObservers;
  v3 = p_M_refcount >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<PlayerAranaraCollectionComp>(&t);
  std::weak_ptr<PlayerAranaraCollectionComp>::weak_ptr<PlayerAranaraCollectionComp,void>(
    (std::weak_ptr<PlayerAranaraCollectionComp> *const)(p_M_refcount + 32),
    (const std::shared_ptr<PlayerAranaraCollectionComp> *)&t);
  std::shared_ptr<PlayerAranaraCollectionComp>::~shared_ptr((std::shared_ptr<PlayerAranaraCollectionComp> *const)&t);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  p_this_wtr = (std::weak_ptr<PlayerAranaraCollectionComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerAranaraCollectionComp>::weak_ptr(
    &v5,
    (const std::weak_ptr<PlayerAranaraCollectionComp> *)(p_M_refcount + 32));
  PlayerEventComp::registerObserver<PlayerAranaraCollectionComp,WatcherProgressUpdateEvent>(
    (PlayerEventComp *const)&t,
    p_this_wtr,
    (void (*)(PlayerAranaraCollectionComp *, const WatcherProgressUpdateEvent *))&v5);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&t);
  std::weak_ptr<PlayerAranaraCollectionComp>::~weak_ptr(&v5);
  std::weak_ptr<PlayerAranaraCollectionComp>::~weak_ptr((std::weak_ptr<PlayerAranaraCollectionComp> *const)(p_M_refcount + 32));
  if ( &t._M_weak_this._M_refcount == (std::__weak_count<(__gnu_cxx::_Lock_policy)2> *)p_M_refcount )
  {
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_refcount = 1172321806LL;
    *(_QWORD *)((p_M_refcount >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 337: range 00000000175D27B8-00000000175D2B02
void __cdecl PlayerAranaraCollectionComp::onWatcherProgressUpdate(
        PlayerAranaraCollectionComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t catalog_type; // [rsp+14h] [rbp-CCh]
  PlayerWatcherComp *watcher_comp; // [rsp+18h] [rbp-C8h]
  proto::CataLogGlobalWatcherFinishedData *new_finished_global_watcher_data; // [rsp+20h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int> *watcher_list; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 14 watcher_id:340 48 48 29 new_global_watcher_notify:350";
  *(_QWORD *)(v2 + 16) = PlayerAranaraCollectionComp::onWatcherProgressUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  watcher_comp = Player::getWatcherComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->watcher_id);
  }
  *(_DWORD *)(v2 + 32) = event->watcher_id;
  if ( !PlayerWatcherComp::isGlobalWatcher(watcher_comp, *(_DWORD *)(v2 + 32)) )
    goto LABEL_12;
  if ( *(char *)(((unsigned __int64)&event->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_finished);
  if ( !event->is_finished )
LABEL_12:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
    catalog_type = CatalogExcelConfigMgr::getCatalogTypeByGlobalWatcherId(
                     &v6->design_config.txt_config_mgr.catalog_config_mgr,
                     *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v11);
    if ( catalog_type )
    {
      proto::CataLogNewFinishedGlobalWatcherNotify::CataLogNewFinishedGlobalWatcherNotify((proto::CataLogNewFinishedGlobalWatcherNotify *const)(v2 + 48));
      new_finished_global_watcher_data = proto::CataLogNewFinishedGlobalWatcherNotify::add_new_finished_global_watcher_data_list((proto::CataLogNewFinishedGlobalWatcherNotify *const)(v2 + 48));
      proto::CataLogGlobalWatcherFinishedData::set_catalog_type(new_finished_global_watcher_data, catalog_type);
      watcher_list = proto::CataLogGlobalWatcherFinishedData::mutable_finished_global_watcher_list(new_finished_global_watcher_data);
      google::protobuf::RepeatedField<unsigned int>::Add(watcher_list, (const unsigned int *)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
      proto::CataLogNewFinishedGlobalWatcherNotify::~CataLogNewFinishedGlobalWatcherNotify((proto::CataLogNewFinishedGlobalWatcherNotify *const)(v2 + 48));
    }
  }
  if ( v12 == (char *)v2 )
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
