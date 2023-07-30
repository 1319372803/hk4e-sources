// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/item/material.cpp

// Line 20: range 000000001756CCA2-000000001756CF10
int32_t __cdecl Material::fromBin(Material *const this, const proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  __int64 v5; // rdx
  char v6; // al
  const proto::MaterialDeleteBin *v7; // rax
  const google::protobuf::MapPair<unsigned int,unsigned int> *v8; // rax
  unsigned int v9; // ebx
  unsigned int *v10; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  char v13; // cl
  unsigned int val; // [rsp+14h] [rbp-8Ch] BYREF
  const proto::MaterialBin *proto_material_bin; // [rsp+18h] [rbp-88h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  unsigned int time[2]; // [rsp+28h] [rbp-78h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-50h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  if ( Item::fromBin(this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "fromBin",
      23);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v20, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3, (const char (*)[16])" fromBin failed");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    proto_material_bin = proto::ItemBin::material(proto_item_bin);
    v5 = proto::MaterialBin::count(proto_material_bin);
    v6 = *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000);
    if ( v6 != 0 && v6 <= 3 )
    {
      LOBYTE(proto_item_bin) = v6 != 0;
      __asan_report_store4(&this->count_, proto_item_bin, v5);
    }
    this->count_ = v5;
    v7 = proto::MaterialBin::delete_bin(proto_material_bin);
    __for_range = proto::MaterialDeleteBin::delete_time_num_map(v7);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      v8 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
        (google::protobuf::MapPair<unsigned int,unsigned int> *const)time,
        v8);
      v9 = time[1];
      v10 = time;
      v11 = std::map<unsigned int,unsigned int>::operator[](&this->delete_time_num_map_, time);
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(v11, v10, v11);
      }
      *v12 = v9;
      google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)time);
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 37: range 000000001756CF12-000000001756D252
int32_t __cdecl Material::toBin(const Material *const this, proto::ItemBin *proto_item_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  proto::MaterialDeleteBin *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rax
  std::pair<unsigned int const,unsigned int> *v7; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v8; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v9; // ebx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v10; // rsi
  unsigned int *v11; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v12; // rdx
  char v13; // cl
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::MaterialBin *proto_material_bin; // [rsp+30h] [rbp-60h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_map; // [rsp+38h] [rbp-58h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *time; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+50h] [rbp-40h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+58h] [rbp-38h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-30h] BYREF

  if ( Item::toBin(this, proto_item_bin) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "toBin",
      40);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v23, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])" toBin failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
    return -1;
  }
  else
  {
    proto_material_bin = proto::ItemBin::mutable_material(proto_item_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->count_);
    }
    proto::MaterialBin::set_count(proto_material_bin, this->count_);
    v5 = proto::MaterialBin::mutable_delete_bin(proto_material_bin);
    bin_map = proto::MaterialDeleteBin::mutable_delete_time_num_map(v5);
    __for_range = &this->delete_time_num_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->delete_time_num_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->delete_time_num_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v6, 8LL);
      }
      __in = *v7;
      time = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v8 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      num = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      if ( *num )
      {
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(num);
        }
        v9 = *num;
        v10 = time;
        v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_map, time);
        v12 = v11;
        v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
        if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
        {
          LOBYTE(v10) = v13 != 0;
          __asan_report_store4(v11, v10, v11);
        }
        *v12 = v9;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 59: range 000000001756D254-000000001756DB60
int32_t __cdecl Material::toClient(const Material *const this, proto::Item *proto_item)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  MaterialExcelConfigMgr *p_material_config_mgr; // rbx
  uint32_t ItemId; // eax
  proto::MaterialDeleteInfo *v7; // rax
  data::MaterialExpireType expire_type; // eax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  uint32_t *v10; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  uint32_t *v12; // rdx
  proto::MaterialDeleteInfo *v13; // rax
  proto::MaterialDeleteInfo_DelayWeekCountDownDelete *v14; // rax
  std::pair<unsigned int const,unsigned int> *v15; // rax
  std::pair<unsigned int const,unsigned int> *v16; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v17; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v18; // ebx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v19; // rsi
  unsigned int *v20; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v21; // rdx
  char v22; // cl
  proto::MaterialDeleteInfo *v23; // rax
  proto::MaterialDeleteInfo_DelayWeekCountDownDelete *v24; // rax
  proto::MaterialDeleteInfo *v25; // rax
  proto::MaterialDeleteInfo_DelayWeekCountDownDelete *v26; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v27; // rax
  uint32_t *v28; // rdx
  proto::MaterialDeleteInfo *v29; // rax
  proto::MaterialDeleteInfo_CountDownDelete *v30; // rax
  std::pair<unsigned int const,unsigned int> *v31; // rax
  std::pair<unsigned int const,unsigned int> *v32; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v33; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v34; // ebx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v35; // rsi
  unsigned int *v36; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v37; // rdx
  char v38; // cl
  proto::MaterialDeleteInfo *v39; // rax
  proto::MaterialDeleteInfo_CountDownDelete *v40; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v41; // rax
  uint32_t *v42; // rdx
  proto::MaterialDeleteInfo *v43; // rax
  proto::MaterialDeleteInfo_DateTimeDelete *v44; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  uint32_t delay_week; // [rsp+18h] [rbp-B8h]
  uint32_t config_time; // [rsp+1Ch] [rbp-B4h]
  uint32_t time_0; // [rsp+20h] [rbp-B0h]
  uint32_t time_2; // [rsp+24h] [rbp-ACh]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  proto::Material *proto_material; // [rsp+38h] [rbp-98h]
  const data::MaterialDeleteExcelConfig *delete_config_ptr; // [rsp+40h] [rbp-90h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+48h] [rbp-88h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *time; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+60h] [rbp-70h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map_0; // [rsp+68h] [rbp-68h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *time_1; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+80h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+88h] [rbp-48h] BYREF
  std::shared_ptr<Config> v63; // [rsp+90h] [rbp-40h] BYREF
  common::milog::MiLogStream v64; // [rsp+A0h] [rbp-30h] BYREF

  if ( Item::toClient(this, proto_item) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "toClient",
      62);
    v2 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v64, (const char (*)[9])"item_id:");
    val = Item::getItemId(this);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v3, (const char (*)[17])" toClient failed");
    common::milog::MiLogStream::~MiLogStream(&v64);
    return -1;
  }
  else
  {
    proto_material = proto::Item::mutable_material(proto_item);
    if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->count_);
    }
    proto::Material::set_count(proto_material, this->count_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v63);
    p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v63)->design_config.txt_config_mgr.material_config_mgr;
    ItemId = Item::getItemId(this);
    delete_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig(p_material_config_mgr, ItemId);
    std::shared_ptr<Config>::~shared_ptr(&v63);
    if ( delete_config_ptr )
    {
      v7 = proto::Material::mutable_delete_info(proto_material);
      proto::MaterialDeleteInfo::set_has_delete_config(v7, 1);
      if ( *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)delete_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&delete_config_ptr->expire_type);
      }
      expire_type = delete_config_ptr->expire_type;
      if ( expire_type == CountDown )
      {
        time_0 = 0;
        if ( !std::vector<unsigned int>::empty(&delete_config_ptr->expire_time_param_vec) )
        {
          v27 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&delete_config_ptr->expire_time_param_vec, 0LL);
          v28 = v27;
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v27);
          }
          time_0 = *v28;
        }
        v29 = proto::Material::mutable_delete_info(proto_material);
        v30 = proto::MaterialDeleteInfo::mutable_count_down_delete(v29);
        proto_map_0 = proto::MaterialDeleteInfo_CountDownDelete::mutable_delete_time_num_map(v30);
        __for_range_0 = &this->delete_time_num_map_;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->delete_time_num_map_)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->delete_time_num_map_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v31 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v32 = v31;
          if ( ((unsigned __int8)v31 & 7) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v31->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v31 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v31->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v31, 8LL);
          }
          __in = *v32;
          time_1 = std::get<0ul,unsigned int const,unsigned int>(&__in);
          v33 = std::get<1ul,unsigned int const,unsigned int>(&__in);
          num_0 = v33;
          if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v33);
          }
          if ( *num_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(num_0);
            }
            v34 = *num_0;
            v35 = time_1;
            v36 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map_0, time_1);
            v37 = v36;
            v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
            if ( v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38 )
            {
              LOBYTE(v35) = v38 != 0;
              __asan_report_store4(v36, v35, v36);
            }
            *v37 = v34;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        v39 = proto::Material::mutable_delete_info(proto_material);
        v40 = proto::MaterialDeleteInfo::mutable_count_down_delete(v39);
        proto::MaterialDeleteInfo_CountDownDelete::set_config_count_down_time(v40, time_0);
      }
      else if ( expire_type == DelayWeekCountDown )
      {
        delay_week = 0;
        config_time = 0;
        if ( std::vector<unsigned int>::size(&delete_config_ptr->expire_time_param_vec) > 1 )
        {
          v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                     &delete_config_ptr->expire_time_param_vec,
                                                                                                     0LL);
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v9);
          }
          delay_week = *v10;
          v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&delete_config_ptr->expire_time_param_vec, 1uLL);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          config_time = *v12;
        }
        v13 = proto::Material::mutable_delete_info(proto_material);
        v14 = proto::MaterialDeleteInfo::mutable_delay_week_count_down_delete(v13);
        proto_map = proto::MaterialDeleteInfo_DelayWeekCountDownDelete::mutable_delete_time_num_map(v14);
        __for_range = &this->delete_time_num_map_;
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->delete_time_num_map_)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->delete_time_num_map_)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v15 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v16 = v15;
          if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v15, 8LL);
          }
          __in = *v16;
          time = std::get<0ul,unsigned int const,unsigned int>(&__in);
          v17 = std::get<1ul,unsigned int const,unsigned int>(&__in);
          num = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          if ( *num )
          {
            if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(num);
            }
            v18 = *num;
            v19 = time;
            v20 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, time);
            v21 = v20;
            v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
            if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
            {
              LOBYTE(v19) = v22 != 0;
              __asan_report_store4(v20, v19, v20);
            }
            *v21 = v18;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        v23 = proto::Material::mutable_delete_info(proto_material);
        v24 = proto::MaterialDeleteInfo::mutable_delay_week_count_down_delete(v23);
        proto::MaterialDeleteInfo_DelayWeekCountDownDelete::set_config_delay_week(v24, delay_week);
        v25 = proto::Material::mutable_delete_info(proto_material);
        v26 = proto::MaterialDeleteInfo::mutable_delay_week_count_down_delete(v25);
        proto::MaterialDeleteInfo_DelayWeekCountDownDelete::set_config_count_down_time(v26, config_time);
      }
      else
      {
        time_2 = 0;
        if ( !std::vector<unsigned int>::empty(&delete_config_ptr->expire_time_param_vec) )
        {
          v41 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&delete_config_ptr->expire_time_param_vec, 0LL);
          v42 = v41;
          if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v41);
          }
          time_2 = *v42;
        }
        v43 = proto::Material::mutable_delete_info(proto_material);
        v44 = proto::MaterialDeleteInfo::mutable_date_delete(v43);
        proto::MaterialDeleteInfo_DateTimeDelete::set_delete_time(v44, time_2);
      }
    }
    return 0;
  }
};

// Line 132: range 000000001756DB62-000000001756DD3F
int32_t __cdecl Material::init(Material *const this, Player *player, bool is_first_create)
{
  common::milog::MiLogStream *v3; // rbx
  MaterialExcelConfigMgr *p_material_config_mgr; // rbx
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v7; // rbx
  unsigned int val; // [rsp+24h] [rbp-4Ch] BYREF
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  if ( Item::init(this, player, is_first_create) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "init",
      135);
    v3 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v11,
           (const char (*)[27])"Item init failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.material_config_mgr;
    ItemId = Item::getItemId(this);
    material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, ItemId);
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( material_config_ptr )
    {
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/material.cpp",
        "init",
        142);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v11,
             (const char (*)[41])"findMaterialExcelConfig failed, item_id:");
      val = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
  }
};

// Line 154: range 000000001756DD40-000000001756DE76
uint32_t __cdecl Material::getWeight(Material *const this)
{
  common::milog::MiLogStream *v1; // rbx
  uint32_t weight; // ecx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  const data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  item_config_ptr = Item::getItemConfig(this);
  if ( item_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->weight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&item_config_ptr->weight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&item_config_ptr->weight);
    }
    weight = item_config_ptr->weight;
    if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->count_);
    }
    return weight * this->count_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "getWeight",
      158);
    v1 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v6,
           (const char (*)[32])"findItemConfig failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
};

// Line 166: range 000000001756DE78-000000001756DEE5
data::ItemType __cdecl Material::getItemType(const Material *const this)
{
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+18h] [rbp-8h]

  material_config_ptr = Material::getMaterialConfig(this);
  if ( !material_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)material_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->item_type >> 3)
                                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&material_config_ptr->item_type);
  }
  return material_config_ptr->item_type;
};

// Line 176: range 000000001756DEE6-000000001756DF2D
uint32_t __cdecl Material::getItemCount(const Material *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->count_);
  }
  return this->count_;
};

// Line 181: range 000000001756DF2E-000000001756DF3C
int32_t __cdecl Material::checkConsume(Material *const this)
{
  return 0;
};

// Line 189: range 000000001756DF3E-000000001756E4CF
Material *__fastcall Material::split(Material *const this, Material *player, Player *count, int a4)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  const std::shared_ptr<Item> *v20; // rax
  unsigned int val; // [rsp+20h] [rbp-100h] BYREF
  unsigned int ItemId; // [rsp+24h] [rbp-FCh] BYREF
  unsigned __int64 v26; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 9 count:188 64 16 14 item_param:203 96 24 12 item_vec:207";
  *(_QWORD *)(v4 + 16) = Material::split;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = a4;
  if ( *(_BYTE *)(((unsigned __int64)&player->count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&player->count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&player->count_);
  }
  if ( player->count_ >= *(_DWORD *)(v4 + 48) )
  {
    if ( Material::subCount(player, *(_DWORD *)(v4 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/material.cpp",
        "split",
        199);
      v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v27,
              (const char (*)[32])"split subCount failed, item_id:");
      ItemId = Item::getItemId(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &ItemId);
      common::milog::MiLogStream::~MiLogStream(&v27);
      std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)this, 0LL);
    }
    else
    {
      *(_DWORD *)(v4 + 64) = 0;
      *(_DWORD *)(v4 + 68) = 0;
      *(_DWORD *)(v4 + 72) = 0;
      *(_DWORD *)(v4 + 76) = 0;
      *(_DWORD *)(v4 + 64) = Item::getItemId(player);
      *(_DWORD *)(v4 + 68) = *(_DWORD *)(v4 + 48);
      ItemComp = Player::getItemComp(count);
      PlayerItemComp::createItem(
        (std::vector<std::shared_ptr<Item>> *)(v4 + 96),
        ItemComp,
        (const ItemParam *)(v4 + 64));
      if ( std::vector<std::shared_ptr<Item>>::size((const std::vector<std::shared_ptr<Item>> *const)(v4 + 96)) == 1 )
      {
        v20 = std::vector<std::shared_ptr<Item>>::operator[]((std::vector<std::shared_ptr<Item>> *const)(v4 + 96), 0LL);
        std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)this, v20);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/material.cpp",
          "split",
          210);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v27,
                (const char (*)[28])"createItem failed, item_id:");
        ItemId = Item::getItemId(player);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &ItemId);
        v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" count:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v18,
                (const char (*)[16])" item_vec size:");
        v26 = std::vector<std::shared_ptr<Item>>::size((const std::vector<std::shared_ptr<Item>> *const)(v4 + 96));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v19, &v26);
        common::milog::MiLogStream::~MiLogStream(&v27);
        std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)this, 0LL);
      }
      std::vector<std::shared_ptr<Item>>::~vector((std::vector<std::shared_ptr<Item>> *const)(v4 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "split",
      192);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v27,
           (const char (*)[32])"split materail failed, item_id:");
    val = Item::getItemId(player);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" cur_count:");
    if ( *(_BYTE *)(((unsigned __int64)player >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (uint32_t *)(player->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemId = (*(__int64 (__fastcall **)(Material *))v10)(player);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &ItemId);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" split_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    std::shared_ptr<Item>::shared_ptr((std::shared_ptr<Item> *const)this, 0LL);
  }
  if ( v28 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return this;
};

// Line 219: range 000000001756E4D0-000000001756EA07
int32_t __cdecl Material::merge(Material *const this, ItemPtr *p_item_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t ItemId; // r14d
  common::milog::MiLogStream *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r12
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  uint32_t v14; // edx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  __int64 (__fastcall **v18)(Material *const); // rax
  Material *v19; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-90h] BYREF
  char v24[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 material_ptr:233";
  *(_QWORD *)(v2 + 16) = Material::merge;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Item>(p_item_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "merge",
      222);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v23, (const char (*)[20])"item_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v23);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Item,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_item_ptr);
    ItemId = Item::getItemId(v6);
    if ( ItemId == Item::getItemId(this) )
    {
      std::dynamic_pointer_cast<Material,Item>((const std::shared_ptr<Item> *)(v2 + 32));
      if ( std::operator==<Material>((const std::shared_ptr<Material> *)(v2 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/item/material.cpp",
          "merge",
          236);
        v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v23,
                (const char (*)[38])"dynamic_pointer_cast failed, item_id:");
        v22 = Item::getItemId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &v22);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v5 = -1;
      }
      else
      {
        v12 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = (unsigned __int64)(v12->_vptr_Item + 8);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v14 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13)(v12);
        if ( Material::addCount(this, v14) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/item/material.cpp",
            "merge",
            244);
          v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v23,
                  (const char (*)[26])"addCount failed, item_id:");
          val = Item::getItemId(this);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" cur_count:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v18 = (__int64 (__fastcall **)(Material *const))(this->_vptr_Item + 8);
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v22 = (*v18)(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &v22);
          common::milog::MiLogStream::~MiLogStream(&v23);
          v5 = -1;
        }
        else
        {
          v19 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          Material::setCount(v19, 0);
          v5 = 0;
        }
      }
      std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/item/material.cpp",
        "merge",
        228);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v23, (const char (*)[31])off_2612C680);
      val = Item::getItemId(this);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" target item_id:");
      v22 = Item::getItemId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &v22);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v5 = -1;
    }
  }
  result = v5;
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

// Line 255: range 000000001756EA08-000000001756EA56
// local variable allocation has failed, the output may be wrong!
void __cdecl Material::setCount(Material *const this, uint32_t count)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->count_, *(_QWORD *)&count, &this->count_);
  }
  this->count_ = count;
};

// Line 260: range 000000001756EA58-000000001756EF3A
__int64 __fastcall Material::addCount(Material *const this, uint32_t count)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  MaterialExcelConfigMgr *p_material_config_mgr; // r14
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  unsigned int v9; // r14d
  __int64 (__fastcall **v10)(Material *const); // rax
  unsigned int v11; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  __int64 (__fastcall **v15)(Material *const); // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __int64 (__fastcall **v20)(Material *const); // rax
  int v21; // eax
  unsigned int v22; // [rsp+1Ch] [rbp-B4h] BYREF
  unsigned int val; // [rsp+20h] [rbp-B0h] BYREF
  uint32_t total_amount; // [rsp+24h] [rbp-ACh]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-90h] BYREF
  char v28[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 count:259";
  *(_QWORD *)(v2 + 16) = Material::addCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = count;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.material_config_mgr;
  ItemId = Item::getItemId(this);
  material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( material_config_ptr )
  {
    v9 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (__int64 (__fastcall **)(Material *const))(this->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (*v10)(this);
    total_amount = SAFE_ADD<unsigned int,unsigned int>(v11, v9);
    if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&material_config_ptr->stack_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&material_config_ptr->stack_limit);
    }
    if ( total_amount > material_config_ptr->stack_limit )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/material.cpp",
        "addCount",
        274);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v27,
              (const char (*)[32])"addCount exceed limit, item_id:");
      v22 = Item::getItemId(this);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &v22);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" cur_count:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = (__int64 (__fastcall **)(Material *const))(this->_vptr_Item + 8);
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = (*v15)(this);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" add_count:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
      v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" max_count:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &material_config_ptr->stack_limit);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = (__int64 (__fastcall **)(Material *const))(this->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = (*v20)(this);
    Material::tryAddDeleteCount(this, total_amount - v21);
    Material::setCount(this, total_amount);
    Item::notifyItemChange(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "addCount",
      264);
    v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v27,
           (const char (*)[41])"findMaterialExcelConfig failed, item_id:");
    val = Item::getItemId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  if ( v28 == (char *)v2 )
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

// Line 288: range 000000001756EF3C-000000001756F633
__int64 __fastcall Material::tryAddDeleteCount(Material *const this, uint32_t count)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  MaterialExcelConfigMgr *p_material_config_mgr; // r14
  uint32_t ItemId; // eax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  data::MaterialExpireType expire_type; // eax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v10; // rax
  uint32_t *v11; // rdx
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  unsigned int v14; // r14d
  __int64 WeekTime; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v24; // rax
  uint32_t *v25; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v26; // rax
  common::milog::MiLogStream *v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t expire_time; // [rsp+14h] [rbp-DCh]
  uint32_t now; // [rsp+18h] [rbp-D8h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-D4h]
  uint32_t delay_week; // [rsp+20h] [rbp-D0h]
  uint32_t count_down_start_time; // [rsp+24h] [rbp-CCh]
  const data::MaterialDeleteExcelConfig *delete_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v41; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v42; // [rsp+40h] [rbp-B0h] BYREF
  char v43[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 expire_time:300 64 4 9 count:287";
  *(_QWORD *)(v2 + 16) = Material::tryAddDeleteCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = count;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v41);
  p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.material_config_mgr;
  ItemId = Item::getItemId(this);
  delete_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig(p_material_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v41);
  if ( delete_config_ptr )
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v41);
    if ( *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)delete_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&delete_config_ptr->expire_type);
    }
    expire_type = delete_config_ptr->expire_type;
    if ( expire_type == CountDown )
    {
      expire_time = 0;
      if ( std::vector<unsigned int>::size(&delete_config_ptr->expire_time_param_vec) )
      {
        v24 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &delete_config_ptr->expire_time_param_vec,
                                                                                                    0LL);
        v25 = v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        expire_time = *v25;
      }
      val = now + expire_time;
      v26 = std::map<unsigned int,unsigned int>::operator[](&this->delete_time_num_map_, &val);
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v26);
      }
      *v26 += *(_DWORD *)(v2 + 64);
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/material.cpp",
        "tryAddDeleteCount",
        326);
      v27 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v42,
              (const char (*)[28])"[MATERIAL DELETE] material:");
      *(_DWORD *)(v2 + 48) = Item::getItemId(this);
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
      v29 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v28,
              (const char (*)[18])" add delete time:");
      val = now + expire_time;
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
      v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" num:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 64));
      v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])" total:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v33, &this->delete_time_num_map_);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    else if ( expire_type == DelayWeekCountDown )
    {
      *(_DWORD *)(v2 + 48) = 0;
      delay_week = 0;
      if ( std::vector<unsigned int>::size(&delete_config_ptr->expire_time_param_vec) > 1 )
      {
        v10 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &delete_config_ptr->expire_time_param_vec,
                                                                                                    0LL);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        delay_week = *v11;
        v12 = std::vector<unsigned int>::operator[](&delete_config_ptr->expire_time_param_vec, 1uLL);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v2 + 48) = *v13;
        v14 = SAFE_MULTIPLY<int,unsigned int>(604800, delay_week);
        WeekTime = common::tools::TimeUtils::getWeekTime(now, time_offset);
        count_down_start_time = SAFE_ADD<long,unsigned int>(WeekTime, v14);
        *(_DWORD *)(v2 + 48) = SAFE_ADD<unsigned int,unsigned int>(*(_DWORD *)(v2 + 48), count_down_start_time);
      }
      v16 = std::map<unsigned int,unsigned int>::operator[](
              &this->delete_time_num_map_,
              (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      *v16 += *(_DWORD *)(v2 + 64);
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/item/material.cpp",
        "tryAddDeleteCount",
        312);
      v17 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v42,
              (const char (*)[28])"[MATERIAL DELETE] material:");
      val = Item::getItemId(this);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v18,
              (const char (*)[18])" add delete time:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" num:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 64));
      v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" total:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v23, &this->delete_time_num_map_);
      common::milog::MiLogStream::~MiLogStream(&v42);
    }
    result = 0LL;
  }
  else
  {
    result = 0LL;
  }
  if ( v43 == (char *)v2 )
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

// Line 338: range 000000001756F634-000000001756FBAD
__int64 __fastcall Material::subCount(Material *const this, uint32_t count)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned int (__fastcall **v5)(Material *const); // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 (__fastcall **v9)(Material *const); // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 (__fastcall **v12)(Material *const); // rax
  __int64 (__fastcall **v13)(Material *const); // rax
  int v14; // eax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v15; // rax
  uint32_t v16; // eax
  unsigned int (__fastcall **v17)(Material *const); // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  unsigned int v20; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t real_sub_cout; // [rsp+24h] [rbp-CCh]
  uint32_t rest_use; // [rsp+28h] [rbp-C8h]
  uint32_t u; // [rsp+2Ch] [rbp-C4h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-90h] BYREF
  char v31[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 count:337";
  *(_QWORD *)(v2 + 16) = Material::subCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = count;
  real_sub_cout = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned int (__fastcall **)(Material *const))(this->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*v5)(this) < *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/item/material.cpp",
      "subCount",
      342);
    v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v30,
           (const char (*)[32])"split materail failed, item_id:");
    val = Item::getItemId(this);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" cur_count:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v9 = (__int64 (__fastcall **)(Material *const))(this->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = (*v9)(this);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v20);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" split_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v30);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = (__int64 (__fastcall **)(Material *const))(this->_vptr_Item + 8);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    real_sub_cout = (*v12)(this);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v13 = (__int64 (__fastcall **)(Material *const))(this->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = (*v13)(this);
  Material::setCount(this, v14 - real_sub_cout);
  rest_use = real_sub_cout;
  __for_range = &this->delete_time_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->delete_time_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(__in);
    v15 = std::get<1ul,unsigned int const,unsigned int>(__in);
    num = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    if ( rest_use < *num )
      v16 = rest_use;
    else
      v16 = *num;
    u = v16;
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(num);
    }
    *num -= u;
    rest_use -= u;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v17 = (unsigned int (__fastcall **)(Material *const))(this->_vptr_Item + 8);
  if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*v17)(this) )
    Item::notifyItemChange(this);
  result = 0LL;
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

// Line 366: range 000000001756FBAE-0000000017570434
std::pair<unsigned int,std::unordered_map<unsigned int,unsigned int> > *__cdecl Material::getDeleteReturn(
        std::pair<unsigned int,std::unordered_map<unsigned int,unsigned int> > *retstr,
        Material *const this,
        uint32_t now)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  MaterialExcelConfigMgr *p_material_config_mgr; // r14
  uint32_t ItemId; // eax
  data::MaterialExpireType expire_type; // eax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  uint32_t *v10; // rdx
  char v11; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v12; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Base_ptr *v13; // rdx
  const unsigned int *v14; // rax
  _DWORD *v15; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *v16; // rax
  uint32_t v17; // ecx
  float v18; // edx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v19; // rax
  uint32_t return_num; // [rsp+24h] [rbp-13Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,float>::const_iterator __for_begin_0; // [rsp+30h] [rbp-130h] BYREF
  const data::MaterialDeleteExcelConfig *delete_config_ptr; // [rsp+38h] [rbp-128h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *time; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+50h] [rbp-110h]
  const std::map<unsigned int,float> *__for_range_0; // [rsp+58h] [rbp-108h]
  const std::pair<unsigned int const,float> *v30; // [rsp+60h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,float> >::type *item_id; // [rsp+68h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *convert_ratio; // [rsp+70h] [rbp-F0h]
  std::map<unsigned int,float>::const_iterator __for_end; // [rsp+78h] [rbp-E8h] BYREF
  std::shared_ptr<Config> v34; // [rsp+80h] [rbp-E0h] BYREF
  char v35[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 14 delete_num:368 64 56 19 return_item_map:367";
  *(_QWORD *)(v3 + 16) = Material::getDeleteReturn;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 64));
  *(_DWORD *)(v3 + 48) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.material_config_mgr;
  ItemId = Item::getItemId(this);
  delete_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig(p_material_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( !delete_config_ptr )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second._M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_h._M_single_bucket + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 64LL);
    }
    std::make_pair<unsigned int &,std::unordered_map<unsigned int,unsigned int> &>(
      retstr,
      (unsigned int *)(v3 + 48),
      (std::unordered_map<unsigned int,unsigned int> *)(v3 + 64));
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)delete_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&delete_config_ptr->expire_type);
  }
  expire_type = delete_config_ptr->expire_type;
  if ( expire_type == DelayWeekCountDown )
    goto LABEL_24;
  if ( expire_type <= DelayWeekCountDown )
  {
    if ( expire_type != CountDown )
    {
      if ( expire_type == DateTime )
      {
        if ( std::vector<unsigned int>::empty(&delete_config_ptr->expire_time_param_vec) )
          goto LABEL_18;
        v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &delete_config_ptr->expire_time_param_vec,
                                                                                                   0LL);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        if ( now < *v10 )
LABEL_18:
          v11 = 1;
        else
          v11 = 0;
        if ( !v11 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->count_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->count_);
          }
          *(_DWORD *)(v3 + 48) = this->count_;
        }
      }
      goto LABEL_34;
    }
LABEL_24:
    __for_range = &this->delete_time_num_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->delete_time_num_map_)._M_node;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::end(&this->delete_time_num_map_)._M_node;
    while ( std::operator!=(
              &__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v13 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Base_ptr *)v12;
      if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v12, 8LL);
      }
      __for_end._M_node = *v13;
      time = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
      num = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(time);
      }
      if ( now < *time )
        break;
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(num);
      }
      *(_DWORD *)(v3 + 48) += *num;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
LABEL_34:
  if ( *(_DWORD *)(v3 + 48) )
  {
    v14 = std::min<unsigned int>((const unsigned int *)(v3 + 48), &this->count_);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    *(_DWORD *)(v3 + 48) = *v15;
    __for_range_0 = &delete_config_ptr->return_item_map;
    __for_begin_0._M_node = std::map<unsigned int,float>::begin(&delete_config_ptr->return_item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,float>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end) )
    {
      v30 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*(&__for_begin_0);
      item_id = std::get<0ul,unsigned int const,float>(v30);
      v16 = (std::tuple_element<1,const std::pair<unsigned int const,float> >::type *)std::get<1ul,unsigned int const,float>(v30);
      convert_ratio = v16;
      v17 = *(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *convert_ratio;
      if ( *(_BYTE *)(((unsigned __int64)&delete_config_ptr->round_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&delete_config_ptr->round_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&delete_config_ptr->round_type);
      }
      return_num = CommonMiscs::multiplyFloatToUInt(delete_config_ptr->round_type, v18, v17);
      if ( return_num )
      {
        v19 = std::unordered_map<unsigned int,unsigned int>::operator[](
                (std::unordered_map<unsigned int,unsigned int> *const)(v3 + 64),
                item_id);
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        *v19 += return_num;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++(&__for_begin_0);
    }
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->second._M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_h._M_single_bucket + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 64LL);
    }
  }
  else if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
         || *(_BYTE *)((((unsigned __int64)&retstr->second._M_h._M_single_bucket + 7) >> 3) + 0x7FFF8000) != 0
         && (((unsigned __int8)retstr + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_h._M_single_bucket
                                                               + 7) >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 64LL);
  }
  std::make_pair<unsigned int &,std::unordered_map<unsigned int,unsigned int> &>(
    retstr,
    (unsigned int *)(v3 + 48),
    (std::unordered_map<unsigned int,unsigned int> *)(v3 + 64));
LABEL_54:
  std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 64));
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 421: range 0000000017570436-000000001757072C
uint32_t __cdecl Material::getNextDeleteTime(Material *const this)
{
  MaterialExcelConfigMgr *p_material_config_mgr; // rbx
  uint32_t ItemId; // eax
  data::MaterialExpireType expire_type; // eax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v4; // rax
  uint32_t *v5; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v7; // rax
  std::pair<unsigned int const,unsigned int> *v8; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v9; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const data::MaterialDeleteExcelConfig *delete_config_ptr; // [rsp+28h] [rbp-48h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *time; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+40h] [rbp-30h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-28h] BYREF
  std::shared_ptr<Config> v17[2]; // [rsp+50h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v17);
  p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v17)->design_config.txt_config_mgr.material_config_mgr;
  ItemId = Item::getItemId(this);
  delete_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialDeleteExcelConfig(p_material_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(v17);
  if ( !delete_config_ptr )
    return std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)delete_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&delete_config_ptr->expire_type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&delete_config_ptr->expire_type);
  }
  expire_type = delete_config_ptr->expire_type;
  if ( expire_type != DelayWeekCountDown )
  {
    if ( expire_type > DelayWeekCountDown )
      return std::numeric_limits<unsigned int>::max();
    if ( expire_type != CountDown )
    {
      if ( expire_type == DateTime && !std::vector<unsigned int>::empty(&delete_config_ptr->expire_time_param_vec) )
      {
        v4 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &delete_config_ptr->expire_time_param_vec,
                                                                                                   0LL);
        v5 = v4;
        if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v4);
        }
        return *v5;
      }
      return std::numeric_limits<unsigned int>::max();
    }
  }
  __for_range = &this->delete_time_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->delete_time_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->delete_time_num_map_)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
      return std::numeric_limits<unsigned int>::max();
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v8 = v7;
    if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v7, 8LL);
    }
    __in = *v8;
    time = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v9 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    num = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    if ( *num )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(time);
  }
  return *time;
};

// Line 456: range 000000001757072E-000000001757084F
const data::MaterialExcelConfig *__cdecl Material::getMaterialConfig(const Material *const this)
{
  MaterialExcelConfigMgr *p_material_config_mgr; // rbx
  uint32_t ItemId; // eax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.material_config_mgr;
  ItemId = Item::getItemId(this);
  material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, ItemId);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( material_config_ptr )
    return material_config_ptr;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/item/material.cpp",
    "getMaterialConfig",
    460);
  v3 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v8,
         (const char (*)[41])"findMaterialExcelConfig failed, item_id:");
  val = Item::getItemId(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0LL;
};
