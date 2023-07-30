// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/block_data.cpp

// Line 36: range 0000000017989D66-000000001798A8A6
int32_t __cdecl BlockData::fromBin(BlockData *const this, const proto::BlockInfo *block_info)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  google::protobuf::uint32 v6; // ecx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r15
  uint32_t v10; // edi
  __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  bool *p_is_group_bin_lazy_parse; // rax
  char v16; // al
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::shared_ptr<proto::GroupBin> *v23; // rax
  google::protobuf::Map<unsigned int,std::string >::const_iterator *p_for_end; // rsi
  const proto::GroupProductBin *v25; // r14
  proto::GroupProductBin *v26; // rax
  uint32_t v27; // ecx
  char v28; // dl
  __int64 v29; // rdx
  unsigned int v30; // eax
  __int64 v31; // rdx
  char v32; // al
  __int64 v33; // rsi
  uint32_t data_version; // ecx
  char v35; // al
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  const std::string *bin_str; // [rsp+30h] [rbp-160h]
  const google::protobuf::Map<unsigned int,std::string > *__for_range; // [rsp+40h] [rbp-150h]
  const unsigned int *p_group_id; // [rsp+48h] [rbp-148h]
  const google::protobuf::Map<unsigned int,proto::GroupProductBin> *__for_range_0; // [rsp+50h] [rbp-140h]
  const unsigned int *p_group_id_0; // [rsp+58h] [rbp-138h]
  google::protobuf::Map<unsigned int,std::string >::const_iterator __for_begin; // [rsp+60h] [rbp-130h] BYREF
  google::protobuf::Map<unsigned int,std::string >::const_iterator __for_end; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v47; // [rsp+A0h] [rbp-F0h] BYREF
  char v48[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 16 13 config_ptr:70 64 16 16 group_bin_ptr:76 96 32 13 uncomp_str:48";
  *(_QWORD *)(v3 + 16) = BlockData::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  v6 = proto::BlockInfo::block_id(block_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->block_id_);
  }
  if ( v6 != this->block_id_ )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "fromBin",
      39);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v47,
           (const char (*)[38])"[BLOCK]:block id not same, block_id_:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->block_id_);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", block_id:");
    val = proto::BlockInfo::block_id(block_info);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v47);
  }
  bin_str = proto::BlockInfo::bin_data[abi:cxx11](block_info);
  v10 = std::string::size(bin_str);
  v11 = (*(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
  {
    v10 = (_DWORD)this + 292;
    __asan_report_store4(&this->bin_len_, (((_BYTE)this + 36) & 7u) + 3, v11);
  }
  this->bin_len_ = v10;
  if ( common::tools::ZlibUtil::isCompressWithPad(bin_str) )
  {
    common::tools::ZlibUtil::uncompressWithPad((std::string *)(v3 + 96), bin_str);
    if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(&this->block_bin_, v3 + 96) != 1 )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "fromBin",
        51);
      v12 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v47,
              (const char (*)[41])"[BLOCK]:ParseFromString fails, block_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->block_id_);
      common::milog::MiLogStream::~MiLogStream(&v47);
      v2 = -1;
      v13 = 0;
    }
    else
    {
      v13 = 1;
    }
    std::string::~string((void *)(v3 + 96));
    if ( v13 != 1 )
      goto LABEL_47;
  }
  else if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(&this->block_bin_, bin_str) != 1 )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "fromBin",
      65);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v47,
      (const char (*)[30])"[BLOCK]:ParseFromString fails");
    common::milog::MiLogStream::~MiLogStream(&v47);
    v2 = -1;
    goto LABEL_47;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  if ( !std::operator!=<Config>((const std::shared_ptr<Config> *)(v3 + 32), 0LL) )
    goto LABEL_23;
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  p_is_group_bin_lazy_parse = &v14->is_group_bin_lazy_parse;
  if ( *(_BYTE *)(((unsigned __int64)p_is_group_bin_lazy_parse >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_group_bin_lazy_parse & 7) >= *(_BYTE *)(((unsigned __int64)p_is_group_bin_lazy_parse >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_group_bin_lazy_parse);
  }
  if ( !v14->is_group_bin_lazy_parse )
    v16 = 1;
  else
LABEL_23:
    v16 = 0;
  if ( v16 )
  {
    __for_range = proto::BlockBin::group_map[abi:cxx11](&this->block_bin_);
    google::protobuf::Map<unsigned int,std::string>::begin(&__for_begin, __for_range);
    google::protobuf::Map<unsigned int,std::string>::end(&__for_end, __for_range);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_group_id = (const unsigned int *)google::protobuf::Map<unsigned int,std::string>::const_iterator::operator*(&__for_begin);
      common::tools::perf::make_shared<proto::GroupBin>();
      if ( std::operator==<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/block_data.cpp",
          "fromBin",
          79);
        v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v47,
                (const char (*)[33])"group_bin_ptr is null, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, p_group_id);
        common::milog::MiLogStream::~MiLogStream(&v47);
        v2 = -1;
        v18 = 0;
      }
      else
      {
        v19 = std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v19, p_group_id + 2) != 1 )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/block_data.cpp",
            "fromBin",
            84);
          v20 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v47,
                  (const char (*)[44])"BlockBin parse from string failed,block_id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->block_id_);
          v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])", group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, p_group_id);
          common::milog::MiLogStream::~MiLogStream(&v47);
          v2 = -1;
          v18 = 0;
        }
        else
        {
          v23 = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::operator[](
                  &this->group_bin_map_,
                  p_group_id);
          std::shared_ptr<proto::GroupBin>::operator=(v23, (const std::shared_ptr<proto::GroupBin> *)(v3 + 64));
          v18 = 1;
        }
      }
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v3 + 64));
      if ( v18 != 1 )
        goto LABEL_46;
      google::protobuf::Map<unsigned int,std::string>::const_iterator::operator++(&__for_begin);
    }
  }
  __for_range_0 = proto::BlockBin::group_product_map(&this->block_bin_);
  google::protobuf::Map<unsigned int,proto::GroupProductBin>::begin(
    (google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator *)&__for_begin,
    __for_range_0);
  google::protobuf::Map<unsigned int,proto::GroupProductBin>::end(
    (google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator *)&__for_end,
    __for_range_0);
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator *)&__for_end) )
      break;
    p_group_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator *const)&__for_begin);
    v25 = (const proto::GroupProductBin *)(p_group_id_0 + 2);
    v26 = std::unordered_map<unsigned int,proto::GroupProductBin>::operator[](&this->group_product_map_, p_group_id_0);
    proto::GroupProductBin::operator=(v26, v25);
    google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::GroupProductBin>::const_iterator *const)&__for_begin);
  }
  v27 = proto::BlockInfo::data_version(block_info);
  v28 = *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v28 != 0;
  v29 = (v28 != 0) & (unsigned __int8)((char)((((_BYTE)this - 28) & 7) + 3) >= v28);
  if ( (_BYTE)v29 )
    __asan_report_store4(&this->data_version_, p_for_end, v29);
  this->data_version_ = v27;
  LOBYTE(v30) = proto::BlockInfo::is_dirty(block_info);
  v31 = v30;
  v32 = *(_BYTE *)(((unsigned __int64)&this->is_dirty_ >> 3) + 0x7FFF8000);
  if ( v32 < 0 )
  {
    LOBYTE(p_for_end) = v32 != 0;
    __asan_report_store1(&this->is_dirty_, p_for_end, v31);
  }
  this->is_dirty_ = v31;
  v33 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->data_version_);
  }
  data_version = this->data_version_;
  v35 = *(_BYTE *)(((unsigned __int64)&this->last_save_data_version_ >> 3) + 0x7FFF8000);
  if ( v35 != 0 && v35 <= 3 )
  {
    LOBYTE(v33) = v35 != 0;
    __asan_report_store4(&this->last_save_data_version_, v33, &this->last_save_data_version_);
  }
  this->last_save_data_version_ = data_version;
  v2 = 0;
LABEL_46:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
LABEL_47:
  result = v2;
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 104: range 000000001798A8A8-000000001798B51C
int32_t __cdecl BlockData::toBin(BlockData *const this, proto::BlockInfo *block_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false,false>::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::remove_reference<std::string&>::type *v14; // r14
  std::string *v15; // rax
  proto::GroupProductBin *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t v18; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  bool *p_is_open_compress; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  char v22; // al
  unsigned int v23; // r14d
  __int64 v24; // rsi
  uint32_t v25; // edi
  __int64 v26; // rdx
  std::remove_reference<std::string&>::type *v27; // r14
  std::string *v28; // rax
  __int64 v29; // rsi
  uint32_t data_version; // ecx
  char v31; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  int32_t result; // eax
  uint32_t before_length; // [rsp+1Ch] [rbp-184h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,proto::GroupProductBin>::iterator __for_end_0; // [rsp+30h] [rbp-170h] BYREF
  google::protobuf::Map<unsigned int,std::string > *group_bytes_map; // [rsp+38h] [rbp-168h]
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-160h]
  google::protobuf::Map<unsigned int,proto::GroupProductBin> *group_product_map_bin; // [rsp+48h] [rbp-158h]
  std::unordered_map<unsigned int,proto::GroupProductBin> *__for_range_0; // [rsp+50h] [rbp-150h]
  const std::pair<unsigned int const,proto::GroupProductBin> *v46; // [rsp+58h] [rbp-148h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::GroupProductBin> >::type *group_id; // [rsp+60h] [rbp-140h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::GroupProductBin> >::type *group_product_bin; // [rsp+68h] [rbp-138h]
  common::milog::MiLogStream v49; // [rsp+70h] [rbp-130h] BYREF
  char v50[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 group_id:111 64 8 8 iter:113 96 16 9 timer:105 128 16 14 config_ptr:150 160 32 11 bin_str:143";
  *(_QWORD *)(v2 + 16) = BlockData::toBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->block_id_);
  }
  proto::BlockInfo::set_block_id(block_info, this->block_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->data_version_);
  }
  proto::BlockInfo::set_data_version(block_info, this->data_version_);
  if ( *(char *)(((unsigned __int64)&this->is_dirty_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_dirty_);
  proto::BlockInfo::set_is_dirty(block_info, this->is_dirty_);
  group_bytes_map = proto::BlockBin::mutable_group_map[abi:cxx11](&this->block_bin_);
  __for_range = &this->wait_to_bin_group_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->wait_to_bin_group_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->wait_to_bin_group_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    *(std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::find(
                                                                                                  &this->group_bin_map_,
                                                                                                  (const std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::key_type *)(v2 + 48));
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::GroupProductBin>,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::end(&this->group_bin_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false> *)(v2 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false> *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "toBin",
        116);
      v7 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
             &v49,
             (const char (*)[70])"[BLOCK] wait_to_bin_group_set_ cannot find in group_bin_map,group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v49);
    }
    else
    {
      v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false,false> *const)(v2 + 64));
      std::shared_ptr<proto::GroupBin>::shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v2 + 128), &v8->second);
      if ( std::operator==<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/block_data.cpp",
          "toBin",
          122);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v49,
               (const char (*)[33])"group_bin_ptr is null, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v49);
      }
      else
      {
        std::string::basic_string(v2 + 160);
        v10 = std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( !google::protobuf::MessageLite::SerializeToString(v10, (std::string *)(v2 + 160)) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/block_data.cpp",
            "toBin",
            128);
          v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v49,
                  (const char (*)[43])"[BLOCK]:SerializeToString failed,block_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->block_id_);
          v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])",group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v49);
        }
        else
        {
          ++BlockData::to_bin_group_count;
          v14 = std::move<std::string &>((std::string *)(v2 + 160));
          v15 = google::protobuf::Map<unsigned int,std::string>::operator[](
                  group_bytes_map,
                  (const google::protobuf::Map<unsigned int,std::string >::key_type *)(v2 + 48));
          std::string::operator=(v15, v14);
        }
        std::string::~string((void *)(v2 + 160));
      }
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v2 + 128));
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->wait_to_bin_group_set_);
  group_product_map_bin = proto::BlockBin::mutable_group_product_map(&this->block_bin_);
  __for_range_0 = &this->group_product_map_;
  *(std::unordered_map<unsigned int,proto::GroupProductBin>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,proto::GroupProductBin>::begin(&this->group_product_map_);
  __for_end_0._M_cur = std::unordered_map<unsigned int,proto::GroupProductBin>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,proto::GroupProductBin>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::GroupProductBin>,false> *)(v2 + 64),
            &__for_end_0) )
  {
    v46 = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::GroupProductBin>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,proto::GroupProductBin>,false,false> *const)(v2 + 64));
    group_id = std::get<0ul,unsigned int const,proto::GroupProductBin>(v46);
    group_product_bin = (std::tuple_element<1,const std::pair<unsigned int const,proto::GroupProductBin> >::type *)std::get<1ul,unsigned int const,proto::GroupProductBin>(v46);
    v16 = google::protobuf::Map<unsigned int,proto::GroupProductBin>::operator[](group_product_map_bin, group_id);
    proto::GroupProductBin::operator=(v16, group_product_bin);
    std::__detail::_Node_iterator<std::pair<unsigned int const,proto::GroupProductBin>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,proto::GroupProductBin>,false,false> *const)(v2 + 64));
  }
  std::string::basic_string(v2 + 160);
  if ( !google::protobuf::MessageLite::SerializeToString(&this->block_bin_, (std::string *)(v2 + 160)) )
  {
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "toBin",
      146);
    v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v49,
            (const char (*)[43])"[BLOCK]:SerializeToString failed,block_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->block_id_);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v18 = -1;
  }
  else
  {
    before_length = std::string::length(v2 + 160);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    p_is_open_compress = &v19->is_open_compress;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open_compress >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open_compress & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open_compress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open_compress);
    }
    if ( !v19->is_open_compress )
      goto LABEL_36;
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&v21->min_compress_size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v21->min_compress_size >> 3) + 0x7FFF8000) <= 3 )
    {
      v21 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v21->min_compress_size);
    }
    if ( before_length > v21->min_compress_size )
      v22 = 1;
    else
LABEL_36:
      v22 = 0;
    if ( v22 )
    {
      common::tools::ZlibUtil::compressWithPad((std::string *)&v49, (const std::string *)(v2 + 160), -1);
      std::string::operator=(v2 + 160, &v49);
      std::string::~string(&v49);
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/block_data.cpp",
        "toBin",
        154);
      v23 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
      v24 = std::string::length(v2 + 160);
      if ( *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->block_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->block_id_);
      }
      common::milog::MiLogStream::operator()(
        &v49,
        "[BLOCK]:block_id=%u bin compress before=%u after=%lu,time_cost=%u.",
        this->block_id_,
        before_length,
        v24,
        v23);
      common::milog::MiLogStream::~MiLogStream(&v49);
    }
    v25 = std::string::size(v2 + 160);
    v26 = (*(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bin_len_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v26 )
    {
      v25 = (_DWORD)this + 292;
      __asan_report_store4(&this->bin_len_, (((_BYTE)this + 36) & 7u) + 3, v26);
    }
    this->bin_len_ = v25;
    v27 = std::move<std::string &>((std::string *)(v2 + 160));
    v28 = proto::BlockInfo::mutable_bin_data[abi:cxx11](block_info);
    std::string::operator=(v28, v27);
    v29 = (((_BYTE)this - 28) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->data_version_);
    }
    data_version = this->data_version_;
    v31 = *(_BYTE *)(((unsigned __int64)&this->last_save_data_version_ >> 3) + 0x7FFF8000);
    if ( v31 != 0 && v31 <= 3 )
    {
      LOBYTE(v29) = v31 != 0;
      __asan_report_store4(&this->last_save_data_version_, v29, &this->last_save_data_version_);
    }
    this->last_save_data_version_ = data_version;
    common::milog::MiLogStream::create(
      &v49,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "toBin",
      163);
    v32 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v49,
            (const char (*)[31])"[BLOCK]:block tobin, block_id:");
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &this->block_id_);
    v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v33, (const char (*)[16])", data_version:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &this->data_version_);
    common::milog::MiLogStream::~MiLogStream(&v49);
    v18 = 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  }
  std::string::~string((void *)(v2 + 160));
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  result = v18;
  if ( v50 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 170: range 000000001798B51E-000000001798B98F
BlockData *__fastcall BlockData::findGroupBin(BlockData *const this, __int64 group_id, int a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false,false>::pointer v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::shared_ptr<proto::GroupBin> *v12; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false> __y; // [rsp+28h] [rbp-138h] BYREF
  const google::protobuf::Map<unsigned int,std::string > *serialized_group_bin_map; // [rsp+30h] [rbp-130h]
  const std::string *group_byte; // [rsp+38h] [rbp-128h]
  google::protobuf::Map<unsigned int,std::string >::const_iterator b; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-100h] BYREF
  char v20[224]; // [rsp+80h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 group_id:169 64 8 8 iter:171 96 16 17 group_bin_ptr:182 128 24 19 group_byte_iter:178";
  *(_QWORD *)(v3 + 16) = BlockData::findGroupBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::find(
                                                                                                (std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>> *const)group_id,
                                                                                                (const std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::end((std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>> *const)group_id)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false,false> *const)(v3 + 64));
    std::shared_ptr<proto::GroupBin>::shared_ptr((std::shared_ptr<proto::GroupBin> *const)this, &v6->second);
  }
  else
  {
    serialized_group_bin_map = proto::BlockBin::group_map[abi:cxx11]((const proto::BlockBin *const)(group_id + 56));
    google::protobuf::Map<unsigned int,std::string>::find(
      (google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v3 + 128),
      serialized_group_bin_map,
      (const google::protobuf::Map<unsigned int,std::string >::key_type *)(v3 + 48));
    google::protobuf::Map<unsigned int,std::string>::end(&b, serialized_group_bin_map);
    if ( google::protobuf::operator!=(
           (const google::protobuf::Map<unsigned int,std::string >::const_iterator *)(v3 + 128),
           &b) )
    {
      group_byte = &google::protobuf::Map<unsigned int,std::string>::const_iterator::operator->((const google::protobuf::Map<unsigned int,std::string >::const_iterator *const)(v3 + 128))->second;
      common::tools::perf::make_shared<proto::GroupBin>();
      if ( std::operator==<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/block_data.cpp",
          "findGroupBin",
          185);
        v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v19,
               (const char (*)[33])"group_bin_ptr is null, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
        std::shared_ptr<proto::GroupBin>::shared_ptr((std::shared_ptr<proto::GroupBin> *const)this, 0LL);
      }
      else
      {
        v8 = std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( (unsigned __int8)google::protobuf::MessageLite::ParseFromString(v8, group_byte) != 1 )
        {
          common::milog::MiLogStream::create(
            &v19,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/block_data.cpp",
            "findGroupBin",
            190);
          v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                 &v19,
                 (const char (*)[44])"BlockBin parse from string failed,block_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v9,
                  (const unsigned int *)(group_id + 224));
          v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v19);
          std::shared_ptr<proto::GroupBin>::shared_ptr((std::shared_ptr<proto::GroupBin> *const)this, 0LL);
        }
        else
        {
          v12 = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::operator[](
                  (std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>> *const)group_id,
                  (const std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::key_type *)(v3 + 48));
          std::shared_ptr<proto::GroupBin>::operator=(v12, (const std::shared_ptr<proto::GroupBin> *)(v3 + 96));
          std::shared_ptr<proto::GroupBin>::shared_ptr(
            (std::shared_ptr<proto::GroupBin> *const)this,
            (std::shared_ptr<proto::GroupBin> *)(v3 + 96));
        }
      }
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v3 + 96));
    }
    else
    {
      std::shared_ptr<proto::GroupBin>::shared_ptr((std::shared_ptr<proto::GroupBin> *const)this, 0LL);
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 200: range 000000001798B990-000000001798BB88
__int64 __fastcall BlockData::insituSaveGroupBin(BlockData *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false> __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-A0h] BYREF
  char v9[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:199 64 8 8 iter:201";
  *(_QWORD *)(v2 + 16) = BlockData::insituSaveGroupBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  *(std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::find(
                                                                                                &this->group_bin_map_,
                                                                                                (const std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::end(&this->group_bin_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<proto::GroupBin> >,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "insituSaveGroupBin",
      204);
    v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v8,
           (const char (*)[23])" group bin not exist, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::set<unsigned int>::insert(&this->wait_to_bin_group_set_, (const std::set<unsigned int>::value_type *)(v2 + 48));
    BlockData::setDirty(this);
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 213: range 000000001798BB8A-000000001798C081
__int64 __fastcall BlockData::saveGroupBin(
        BlockData *const this,
        uint32_t group_id,
        const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *p_group_ptr)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Scene *v9; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  proto::GroupBin *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::shared_ptr<proto::GroupBin> *v19; // rax
  __int64 result; // rax
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 group_id:212 64 16 17 group_bin_ptr:230";
  *(_QWORD *)(v4 + 16) = BlockData::saveGroupBin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = group_id;
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)p_group_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveGroupBin",
      216);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v22,
           (const char (*)[37])"[BLOCK]:group ptr is null, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v3 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_group_ptr);
    if ( Group::getGroupType(v8) != DYNAMIC )
      goto LABEL_15;
    std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_group_ptr);
    Group::getScene((const Group *const)(v4 + 64));
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v4 + 64), 0LL)
      && (v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64)),
          BlockGroupComp = Scene::getBlockGroupComp(v9),
          SceneBlockGroupComp::isGroupDelayUnregister(BlockGroupComp, *(_DWORD *)(v4 + 48))) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "saveGroupBin",
        225);
      v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*(p_group_ptr);
      v13 = common::milog::MiLogStream::operator<<<Group,(Group*)0>(&v22, v12);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v13, (const char (*)[36])off_262586E0);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v3 = 0;
      v14 = 0;
    }
    else
    {
      v14 = 1;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
    if ( v14 == 1 )
    {
LABEL_15:
      common::tools::perf::make_shared<proto::GroupBin>();
      if ( std::operator==<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v4 + 64), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/block_data.cpp",
          "saveGroupBin",
          233);
        v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v22,
                (const char (*)[32])"group_bin_ptr is null,group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v22);
        v3 = -1;
      }
      else
      {
        v16 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_group_ptr);
        v17 = std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::GroupBin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( Group::toBin(v16, v17) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/block_data.cpp",
            "saveGroupBin",
            238);
          v18 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v22,
                  (const char (*)[43])"[BLOCK]:group_ptr->toBin failed, group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
          v3 = -1;
        }
        else
        {
          v19 = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::operator[](
                  &this->group_bin_map_,
                  (const std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::key_type *)(v4 + 48));
          std::shared_ptr<proto::GroupBin>::operator=(v19, (const std::shared_ptr<proto::GroupBin> *)(v4 + 64));
          std::set<unsigned int>::insert(
            &this->wait_to_bin_group_set_,
            (const std::set<unsigned int>::value_type *)(v4 + 48));
          BlockData::setDirty(this);
          v3 = 0;
        }
      }
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v4 + 64));
    }
  }
  result = v3;
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

// Line 249: range 000000001798C082-000000001798C290
void __fastcall BlockData::clearGroupBin(BlockData *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  google::protobuf::Map<unsigned int,std::string > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const google::protobuf::Map<unsigned int,std::string > *serialized_group_bin_map; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:248";
  *(_QWORD *)(v2 + 16) = BlockData::clearGroupBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  serialized_group_bin_map = proto::BlockBin::group_map[abi:cxx11](&this->block_bin_);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>,unsigned int>(
         &this->group_bin_map_,
         (const unsigned int *)(v2 + 32))
    || common::tools::MiscUtils::isContains<google::protobuf::Map<unsigned int,std::string> const,unsigned int>(
         serialized_group_bin_map,
         (const unsigned int *)(v2 + 32)) )
  {
    std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::erase(
      &this->group_bin_map_,
      (const std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::key_type *)(v2 + 32));
    std::set<unsigned int>::erase(&this->wait_to_bin_group_set_, (const std::set<unsigned int>::key_type *)(v2 + 32));
    v6 = proto::BlockBin::mutable_group_map[abi:cxx11](&this->block_bin_);
    google::protobuf::Map<unsigned int,std::string>::erase(
      v6,
      (const google::protobuf::Map<unsigned int,std::string >::key_type *)(v2 + 32));
    BlockData::setDirty(this);
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "clearGroupBin",
      258);
    v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v9, (const char (*)[17])"erase group bin:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
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

// Line 264: range 000000001798C292-000000001798C39E
void __fastcall BlockData::moveGroupBin(BlockData *const this, uint32_t group_id, GroupBinPtr *p_group_bin_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::shared_ptr<proto::GroupBin> *v6; // rax
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 group_id:263";
  *(_QWORD *)(v3 + 16) = BlockData::moveGroupBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = group_id;
  v6 = std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::operator[](
         &this->group_bin_map_,
         (const std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::key_type *)(v3 + 32));
  std::shared_ptr<proto::GroupBin>::operator=(v6, p_group_bin_ptr);
  std::set<unsigned int>::insert(&this->wait_to_bin_group_set_, (const std::set<unsigned int>::value_type *)(v3 + 32));
  BlockData::setDirty(this);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 271: range 000000001798C3A0-000000001798C569
void __cdecl BlockData::setDirty(BlockData *const this)
{
  __int64 v1; // rsi
  uint32_t data_version; // ecx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_dirty_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dirty_, v1, &this->is_dirty_);
  this->is_dirty_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->data_version_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->data_version_);
  }
  data_version = this->data_version_;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_save_data_version_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_save_data_version_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_save_data_version_);
  }
  if ( data_version <= this->last_save_data_version_ )
  {
    ++this->data_version_;
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "setDirty",
      276);
    v3 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v8,
           (const char (*)[34])"[BLOCK]:block is dirty, block_id:");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->block_id_);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v4, (const char (*)[16])", data_version:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->data_version_);
    v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           v6,
           (const char (*)[26])", last_save_data_version:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->last_save_data_version_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 282: range 000000001798C56A-000000001798C68C
void __cdecl BlockData::cleanDirty(BlockData *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_dirty_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dirty_, v1, &this->is_dirty_);
  this->is_dirty_ = 0;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/block_data.cpp",
    "cleanDirty",
    284);
  v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v7,
         (const char (*)[34])"[BLOCK]:block is clean, block_id:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->block_id_);
  v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3, (const char (*)[16])", data_version:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->data_version_);
  v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         v5,
         (const char (*)[26])", last_save_data_version:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->last_save_data_version_);
  common::milog::MiLogStream::~MiLogStream(&v7);
};

// Line 289: range 000000001798C68E-000000001798C6DE
void __cdecl BlockData::clear(BlockData *const this)
{
  google::protobuf::Map<unsigned int,std::string > *v1; // rax

  std::unordered_map<unsigned int,std::shared_ptr<proto::GroupBin>>::clear(&this->group_bin_map_);
  std::set<unsigned int>::clear(&this->wait_to_bin_group_set_);
  v1 = proto::BlockBin::mutable_group_map[abi:cxx11](&this->block_bin_);
  google::protobuf::Map<unsigned int,std::string>::clear(v1);
  BlockData::setDirty(this);
};

// Line 297: range 000000001798C6E0-000000001798C838
const proto::GroupProductBin *__fastcall BlockData::findGroupProductBin(const BlockData *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const proto::GroupProductBin *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::GroupProductBin>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:296 64 8 8 iter:298";
  *(_QWORD *)(v2 + 16) = BlockData::findGroupProductBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  *(std::unordered_map<unsigned int,proto::GroupProductBin>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,proto::GroupProductBin>::find(
                                                                                            &this->group_product_map_,
                                                                                            (const std::unordered_map<unsigned int,proto::GroupProductBin>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,proto::GroupProductBin>::end(&this->group_product_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,proto::GroupProductBin>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::GroupProductBin>,false> *)(v2 + 64),
         &__y) )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::GroupProductBin>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::GroupProductBin>,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
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
  return result;
};

// Line 307: range 000000001798C83A-000000001798C90B
proto::GroupProductBin *__fastcall BlockData::getGroupProductBin(BlockData *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::GroupProductBin *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:306";
  *(_QWORD *)(v2 + 16) = BlockData::getGroupProductBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  result = std::unordered_map<unsigned int,proto::GroupProductBin>::operator[](
             &this->group_product_map_,
             (const std::unordered_map<unsigned int,proto::GroupProductBin>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 312: range 000000001798C90C-000000001798CC8F
__int64 __fastcall BlockData::addOneOffRecord(
        BlockData *const this,
        proto::ProtEntityType type,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t version)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned int v8; // r13d
  const std::string *v9; // rax
  const char *v10; // rax
  __int64 result; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v12; // rax
  unsigned int *v13; // rax
  __int64 v14; // r14
  unsigned int v15; // r13d
  const std::string *v16; // rax
  const char *v17; // rax
  __int64 v18; // rdx
  proto::GroupProductBin *product_bin; // [rsp+28h] [rbp-A8h]
  unsigned int *old_version; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-90h] BYREF
  char v25[112]; // [rsp+60h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 13 config_id:311";
  *(_QWORD *)(v5 + 16) = BlockData::addOneOffRecord;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = config_id;
  if ( type == PROT_ENTITY_GADGET || type == PROT_ENTITY_MONSTER )
  {
    product_bin = BlockData::getGroupProductBin(this, group_id);
    if ( type == PROT_ENTITY_GADGET )
      v12 = proto::GroupProductBin::mutable_gadget_one_off_map(product_bin);
    else
      v12 = proto::GroupProductBin::mutable_monster_one_off_map(product_bin);
    v13 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
            v12,
            (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v5 + 32));
    old_version = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    if ( version >= *old_version )
    {
      v18 = (*(_BYTE *)(((unsigned __int64)old_version >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)old_version & 7) + 3) >= *(_BYTE *)(((unsigned __int64)old_version >> 3) + 0x7FFF8000));
      if ( (_BYTE)v18 )
        __asan_report_store4(old_version, ((unsigned __int8)old_version & 7u) + 3, v18);
      *old_version = version;
      BlockData::setDirty(this);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/block_data.cpp",
        "addOneOffRecord",
        323);
      v14 = *old_version;
      v15 = *(_DWORD *)(v5 + 32);
      v16 = proto::ProtEntityType_Name[abi:cxx11](type);
      v17 = (const char *)std::string::c_str(v16);
      common::milog::MiLogStream::operator()(
        &v24,
        "type=%s group_id=%u config_id=%u version=%u can NOT be smaller than current version=%u",
        v17,
        group_id,
        v15,
        version,
        v14);
      common::milog::MiLogStream::~MiLogStream(&v24);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "addOneOffRecord",
      315);
    v8 = *(_DWORD *)(v5 + 32);
    v9 = proto::ProtEntityType_Name[abi:cxx11](type);
    v10 = (const char *)std::string::c_str(v9);
    common::milog::MiLogStream::operator()(&v24, "invalid type=%s for config_id=%u version=%u", v10, v8, version);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0xFFFFFFFFLL;
  }
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 334: range 000000001798CC90-000000001798CFFD
void __fastcall BlockData::delOneOffRecord(
        BlockData *const this,
        proto::ProtEntityType type,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r12d
  const std::string *v8; // rax
  const char *v9; // rax
  common::milog::MiLogStream *v10; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v11; // rax
  proto::GroupProductBin *product_bin; // [rsp+20h] [rbp-B0h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 group_id:333 64 4 13 config_id:333";
  *(_QWORD *)(v4 + 16) = BlockData::delOneOffRecord;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = group_id;
  *(_DWORD *)(v4 + 64) = config_id;
  if ( type == PROT_ENTITY_GADGET || type == PROT_ENTITY_MONSTER )
  {
    if ( BlockData::findGroupProductBin(this, *(_DWORD *)(v4 + 48)) )
    {
      product_bin = BlockData::getGroupProductBin(this, *(_DWORD *)(v4 + 48));
      if ( type == PROT_ENTITY_GADGET )
        v11 = proto::GroupProductBin::mutable_gadget_one_off_map(product_bin);
      else
        v11 = proto::GroupProductBin::mutable_monster_one_off_map(product_bin);
      if ( google::protobuf::Map<unsigned int,unsigned int>::erase(
             v11,
             (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v4 + 64)) )
      {
        BlockData::setDirty(this);
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/block_data.cpp",
          "delOneOffRecord",
          351);
        common::milog::MiLogStream::operator()(
          &v15,
          "type %u group_id %u config_id %u",
          (unsigned int)type,
          *(unsigned int *)(v4 + 48),
          *(unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/block_data.cpp",
        "delOneOffRecord",
        343);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v15,
              (const char (*)[39])"findGroupProductBin failed, group_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "delOneOffRecord",
      337);
    v7 = *(_DWORD *)(v4 + 64);
    v8 = proto::ProtEntityType_Name[abi:cxx11](type);
    v9 = (const char *)std::string::c_str(v8);
    common::milog::MiLogStream::operator()(&v15, "invalid type=%s for config_id=%u", v9, v7);
    common::milog::MiLogStream::~MiLogStream(&v15);
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
};

// Line 356: range 000000001798CFFE-000000001798D673
__int64 __fastcall BlockData::setOneOffRecordVersion(
        BlockData *const this,
        proto::ProtEntityType type,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t version)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // ebx
  const std::string *v9; // rax
  const char *v10; // rax
  __int64 result; // rax
  unsigned int v12; // ebx
  const std::string *v13; // rax
  const char *v14; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v15; // rax
  unsigned int *v16; // rax
  unsigned int v17; // r14d
  unsigned int v18; // ebx
  const std::string *v19; // rax
  const char *v20; // rax
  unsigned int v21; // r14d
  unsigned int v22; // ebx
  const std::string *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // ebx
  const std::string *v27; // rax
  const char *v28; // rax
  proto::GroupProductBin *product_bin; // [rsp+28h] [rbp-108h]
  google::protobuf::Map<unsigned int,unsigned int> *one_off_map; // [rsp+30h] [rbp-100h]
  unsigned int *old_version; // [rsp+38h] [rbp-F8h]
  google::protobuf::Map<unsigned int,unsigned int>::iterator b; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-D0h] BYREF
  char v37[176]; // [rsp+80h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 13 config_id:355 64 24 8 iter:371";
  *(_QWORD *)(v5 + 16) = BlockData::setOneOffRecordVersion;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218103808;
  v7[536862723] = -202116109;
  *(_DWORD *)(v5 + 48) = config_id;
  if ( BlockData::findGroupProductBin(this, group_id) )
  {
    if ( type == PROT_ENTITY_GADGET || type == PROT_ENTITY_MONSTER )
    {
      product_bin = BlockData::getGroupProductBin(this, group_id);
      if ( type == PROT_ENTITY_GADGET )
        v15 = proto::GroupProductBin::mutable_gadget_one_off_map(product_bin);
      else
        v15 = proto::GroupProductBin::mutable_monster_one_off_map(product_bin);
      one_off_map = v15;
      google::protobuf::Map<unsigned int,unsigned int>::find(
        (google::protobuf::Map<unsigned int,unsigned int>::iterator *)(v5 + 64),
        v15,
        (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v5 + 48));
      google::protobuf::Map<unsigned int,unsigned int>::end(&b, one_off_map);
      if ( google::protobuf::operator!=(
             (const google::protobuf::Map<unsigned int,unsigned int>::iterator *)(v5 + 64),
             &b) )
      {
        v16 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                one_off_map,
                (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v5 + 48));
        old_version = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        if ( version > *old_version )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/block_data.cpp",
            "setOneOffRecordVersion",
            380);
          if ( *(_BYTE *)(((unsigned __int64)old_version >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)old_version & 7) + 3) >= *(_BYTE *)(((unsigned __int64)old_version >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(old_version);
          }
          v21 = *old_version;
          v22 = *(_DWORD *)(v5 + 48);
          v23 = proto::ProtEntityType_Name[abi:cxx11](type);
          v24 = std::string::c_str(v23);
          common::milog::MiLogStream::operator()(&v36, off_26258EC0, v24, v22, v21, version);
          common::milog::MiLogStream::~MiLogStream(&v36);
          v25 = (*(_BYTE *)(((unsigned __int64)old_version >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)old_version & 7) + 3) >= *(_BYTE *)(((unsigned __int64)old_version >> 3) + 0x7FFF8000));
          if ( (_BYTE)v25 )
            __asan_report_store4(old_version, ((unsigned __int8)old_version & 7u) + 3, v25);
          *old_version = version;
          BlockData::setDirty(this);
          result = 1LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/block_data.cpp",
            "setOneOffRecordVersion",
            377);
          v17 = *old_version;
          v18 = *(_DWORD *)(v5 + 48);
          v19 = proto::ProtEntityType_Name[abi:cxx11](type);
          v20 = (const char *)std::string::c_str(v19);
          common::milog::MiLogStream::operator()(
            &v36,
            "type=%s config_id=%u version=%u MUST be larger than current version=%u",
            v20,
            v18,
            version,
            v17);
          common::milog::MiLogStream::~MiLogStream(&v36);
          result = 0LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/block_data.cpp",
          "setOneOffRecordVersion",
          386);
        v26 = *(_DWORD *)(v5 + 48);
        v27 = proto::ProtEntityType_Name[abi:cxx11](type);
        v28 = (const char *)std::string::c_str(v27);
        common::milog::MiLogStream::operator()(
          &v36,
          "type=%s group_id=%u config_id=%u version=%u does NOT exist in one off map",
          v28,
          group_id,
          v26,
          version);
        common::milog::MiLogStream::~MiLogStream(&v36);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/block_data.cpp",
        "setOneOffRecordVersion",
        366);
      v12 = *(_DWORD *)(v5 + 48);
      v13 = proto::ProtEntityType_Name[abi:cxx11](type);
      v14 = (const char *)std::string::c_str(v13);
      common::milog::MiLogStream::operator()(&v36, "invalid type=%s for config_id=%u version=%u", v14, v12, version);
      common::milog::MiLogStream::~MiLogStream(&v36);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "setOneOffRecordVersion",
      360);
    v8 = *(_DWORD *)(v5 + 48);
    v9 = proto::ProtEntityType_Name[abi:cxx11](type);
    v10 = (const char *)std::string::c_str(v9);
    common::milog::MiLogStream::operator()(
      &v36,
      "oneoff record does NOT exist for type=%s group_id=%u config_id=%u version=%u",
      v10,
      group_id,
      v8,
      version);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0LL;
  }
  if ( v37 == (char *)v5 )
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

// Line 391: range 000000001798D674-000000001798D87E
void __fastcall BlockData::removeProductBin(BlockData *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  proto::GroupProductBin *GroupProductBin; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:390";
  *(_QWORD *)(v2 + 16) = BlockData::removeProductBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  if ( BlockData::findGroupProductBin(this, *(_DWORD *)(v2 + 32)) )
  {
    GroupProductBin = BlockData::getGroupProductBin(this, *(_DWORD *)(v2 + 32));
    proto::GroupProductBin::Clear(GroupProductBin);
    BlockData::setDirty(this);
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "removeProductBin",
      399);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v7,
           (const char (*)[38])"group product bin removed, group_id: ");
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "removeProductBin",
      394);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v7,
           (const char (*)[42])"cannot find group product bin, group_id: ");
  }
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 402: range 000000001798D880-000000001798D8FF
void __cdecl BlockDataMgr::BlockDataMgr(BlockDataMgr *const this, Player *player)
{
  std::map<unsigned int,std::shared_ptr<BlockData>>::map(&this->block_data_map_);
  std::shared_ptr<BlockData>::shared_ptr(&this->virtual_block_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->frombin_scene_dynamic_groups_map_);
  std::map<unsigned int,std::vector<unsigned int>>::map(&this->frombin_abandon_blockbin_scene_groups_map_);
};

// Line 410: range 000000001798D900-000000001798D9F1
int32_t __cdecl BlockDataMgr::init(BlockDataMgr *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::shared_ptr<BlockData> __r; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  BlockDataMgr::findBlock((BlockDataMgr *const)&__r, (uint32_t)this);
  std::shared_ptr<BlockData>::operator=(&this->virtual_block_ptr_, &__r);
  std::shared_ptr<BlockData>::~shared_ptr(&__r);
  if ( !std::operator==<BlockData>(&this->virtual_block_ptr_, 0LL) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/block_data.cpp",
    "init",
    414);
  v1 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v4,
         (const char (*)[37])"find virtual block failed, block_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, LuaConfigMgr::VIRTUAL_BLOCK_ID);
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 422: range 000000001798D9F2-000000001798E53A
std::pair<int,proto::GroupBin*> __fastcall BlockDataMgr::findGroupBin(
        BlockDataMgr *const this,
        uint32_t scene_id,
        std::_Rb_tree_color group_id)
{
  unsigned __int64 v3; // r15
  __int64 v4; // rax
  _DWORD *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::pair<int,std::nullptr_t> v9; // rax
  unsigned int M_right; // r12d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::pair<int,std::nullptr_t> v14; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r12
  std::pair<int,std::nullptr_t> v19; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r12
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r12
  BlockData *v28; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // r12
  BlockData *v30; // rax
  std::pair<int,std::nullptr_t> v31; // rax
  int __x; // [rsp+2Ch] [rbp-164h] BYREF
  proto::GroupBin *__y; // [rsp+30h] [rbp-160h] BYREF
  const GroupScriptConfig *group_config; // [rsp+38h] [rbp-158h]
  std::pair<int,std::nullptr_t> v36; // [rsp+40h] [rbp-150h] BYREF
  BlockDataMgr v37; // [rsp+50h] [rbp-140h] BYREF
  std::pair<int,proto::GroupBin*> result; // 0:eax.4,8:rdx.8

  v3 = (unsigned __int64)&v37.frombin_scene_dynamic_groups_map_._M_t._M_impl.std::_Rb_tree_header;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 12 block_id:429 64 4 12 scene_id:421 80 4 12 group_id:421 96 16 20 from_virtual_ptr:437 1"
                        "28 16 13 block_ptr:438 160 16 19 from_origin_ptr:444";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::findGroupBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 64) = scene_id;
  *(_DWORD *)(v3 + 80) = group_id;
  group_config = BlockDataMgr::findGroupConfig(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80));
  if ( !group_config )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37.virtual_block_ptr_,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "findGroupBin",
      426);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)&v37.virtual_block_ptr_,
           (const char (*)[33])"findGroupConfig failed,scene_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37.virtual_block_ptr_);
    __y = 0LL;
    __x = -1;
    v9 = std::make_pair<int,decltype(nullptr)>(&__x, &__y);
    LODWORD(v37.block_data_map_._M_t._M_impl._M_header._M_parent) = v9.first;
    v37.block_data_map_._M_t._M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v9.second;
    std::pair<int,proto::GroupBin *>::pair<int,decltype(nullptr),true>(
      (std::pair<int,proto::GroupBin*> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right,
      (std::pair<int,std::nullptr_t> *)&v37.block_data_map_._M_t._M_impl._M_header._M_parent);
    M_right = (unsigned int)v37.block_data_map_._M_t._M_impl._M_header._M_right;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&group_config->block_id);
  }
  *(_DWORD *)(v3 + 48) = group_config->block_id;
  if ( std::operator==<BlockData>(&this->virtual_block_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37.virtual_block_ptr_,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "findGroupBin",
      433);
    v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            (common::milog::MiLogStream *const)&v37.virtual_block_ptr_,
            (const char (*)[50])"virtual_block_data_ptr_ cannot be null, scene_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37.virtual_block_ptr_);
    __y = 0LL;
    __x = -1;
    v14 = std::make_pair<int,decltype(nullptr)>(&__x, &__y);
    LODWORD(v37.block_data_map_._M_t._M_impl._M_header._M_parent) = v14.first;
    v37.block_data_map_._M_t._M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v14.second;
    std::pair<int,proto::GroupBin *>::pair<int,decltype(nullptr),true>(
      (std::pair<int,proto::GroupBin*> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right,
      (std::pair<int,std::nullptr_t> *)&v37.block_data_map_._M_t._M_impl._M_header._M_parent);
    M_right = (unsigned int)v37.block_data_map_._M_t._M_impl._M_header._M_right;
    goto LABEL_34;
  }
  v15 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
  BlockData::findGroupBin((BlockData *const)(v3 + 96), (__int64)v15, *(_DWORD *)(v3 + 80));
  BlockDataMgr::findBlock((BlockDataMgr *const)(v3 + 128), (uint32_t)this);
  if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37.virtual_block_ptr_,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "findGroupBin",
      441);
    v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)&v37.virtual_block_ptr_,
            (const char (*)[34])"[BLOCK]:get block error,block_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 48));
    v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])", scene_owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)&__x);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37.virtual_block_ptr_);
    __y = 0LL;
    __x = -1;
    v19 = std::make_pair<int,decltype(nullptr)>(&__x, &__y);
    v36.first = v19.first;
    v36.second = v19.second;
    std::pair<int,proto::GroupBin *>::pair<int,decltype(nullptr),true>(
      (std::pair<int,proto::GroupBin*> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right,
      &v36);
    M_right = (unsigned int)v37.block_data_map_._M_t._M_impl._M_header._M_right;
    goto LABEL_33;
  }
  v20 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  BlockData::findGroupBin((BlockData *const)(v3 + 160), (__int64)v20, *(_DWORD *)(v3 + 80));
  if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 96), 0LL)
    && std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37.virtual_block_ptr_,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "findGroupBin",
      449);
    v22 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            (common::milog::MiLogStream *const)&v37.virtual_block_ptr_,
            (const char (*)[58])"block not expected in virtual and origin block, block_id:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
    v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])", group_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
    v26 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v25, (const char (*)[19])", scene_owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)&__x);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37.virtual_block_ptr_);
  }
  if ( !GroupScriptConfig::isRemoteVision(group_config) )
  {
    if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 160), 0LL) )
    {
      __y = std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 160));
      __x = 0;
      M_right = std::make_pair<int,proto::GroupBin *>(&__x, &__y).first;
      goto LABEL_32;
    }
    if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 96), 0LL) )
    {
      std::shared_ptr<proto::GroupBin>::shared_ptr(
        (std::shared_ptr<proto::GroupBin> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_parent,
        (const std::shared_ptr<proto::GroupBin> *)(v3 + 96));
      v29 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      v30 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
      BlockDataMgr::moveGroupBin(
        (BlockDataMgr *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right,
        (uint32_t)this,
        (BlockData *)*(unsigned int *)(v3 + 80),
        v30,
        (GroupBinPtr *)v29);
      std::shared_ptr<proto::GroupBin>::operator=(
        (std::shared_ptr<proto::GroupBin> *const)(v3 + 160),
        (std::shared_ptr<proto::GroupBin> *)&v37.block_data_map_._M_t._M_impl._M_header._M_right);
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right);
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_parent);
      __y = std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 160));
      __x = 0;
      M_right = std::make_pair<int,proto::GroupBin *>(&__x, &__y).first;
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  if ( !std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 96), 0LL) )
  {
    if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 160), 0LL) )
    {
      std::shared_ptr<proto::GroupBin>::shared_ptr(
        (std::shared_ptr<proto::GroupBin> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right,
        (const std::shared_ptr<proto::GroupBin> *)(v3 + 160));
      v27 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
      v28 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      BlockDataMgr::moveGroupBin(&v37, (uint32_t)this, (BlockData *)*(unsigned int *)(v3 + 80), v28, (GroupBinPtr *)v27);
      std::shared_ptr<proto::GroupBin>::operator=(
        (std::shared_ptr<proto::GroupBin> *const)(v3 + 96),
        (std::shared_ptr<proto::GroupBin> *)&v37);
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)&v37);
      std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right);
      __y = std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 96));
      __x = 0;
      M_right = std::make_pair<int,proto::GroupBin *>(&__x, &__y).first;
      goto LABEL_32;
    }
LABEL_31:
    __y = 0LL;
    __x = 0;
    v31 = std::make_pair<int,decltype(nullptr)>(&__x, &__y);
    LODWORD(v37.block_data_map_._M_t._M_impl._M_header._M_parent) = v31.first;
    v37.block_data_map_._M_t._M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)v31.second;
    std::pair<int,proto::GroupBin *>::pair<int,decltype(nullptr),true>(
      (std::pair<int,proto::GroupBin*> *const)&v37.block_data_map_._M_t._M_impl._M_header._M_right,
      (std::pair<int,std::nullptr_t> *)&v37.block_data_map_._M_t._M_impl._M_header._M_parent);
    M_right = (unsigned int)v37.block_data_map_._M_t._M_impl._M_header._M_right;
    goto LABEL_32;
  }
  __y = std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<proto::GroupBin,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 96));
  __x = 0;
  M_right = std::make_pair<int,proto::GroupBin *>(&__x, &__y).first;
LABEL_32:
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v3 + 160));
LABEL_33:
  std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v3 + 128));
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v3 + 96));
LABEL_34:
  if ( &v37.frombin_scene_dynamic_groups_map_._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  *(_QWORD *)&result.first = M_right;
  return result;
};

// Line 484: range 000000001798E53C-000000001798EE45
__int64 __fastcall BlockDataMgr::saveGroupBin(BlockDataMgr *const this, uint32_t scene_id, GroupPtr *p_group_ptr)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  BlockData *v25; // r14
  BlockData *v26; // r14
  BlockData *v27; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-12Ch] BYREF
  const GroupScriptConfig *group_config; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Group> v32; // [rsp+30h] [rbp-120h] BYREF
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
  *(_QWORD *)(v3 + 8) = "6 48 4 12 group_id:491 64 4 12 block_id:503 80 4 12 scene_id:483 96 16 20 from_virtual_ptr:505 1"
                        "28 16 13 block_ptr:506 160 16 19 from_origin_ptr:512";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::saveGroupBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 80) = scene_id;
  if ( std::operator==<Group>(p_group_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveGroupBin",
      487);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v33, (const char (*)[18])"group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
    goto LABEL_34;
  }
  v7 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
  *(_DWORD *)(v3 + 48) = Group::getGroupId(v7);
  group_config = BlockDataMgr::findGroupConfig(this, *(_DWORD *)(v3 + 80), *(_DWORD *)(v3 + 48));
  if ( !group_config )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveGroupBin",
      495);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v33,
           (const char (*)[33])"findGroupConfig failed,scene_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
    goto LABEL_34;
  }
  if ( std::operator==<BlockData>(&this->virtual_block_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveGroupBin",
      500);
    v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v33,
            (const char (*)[50])"virtual_block_data_ptr_ cannot be null, scene_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&group_config->block_id);
  }
  *(_DWORD *)(v3 + 64) = group_config->block_id;
  v14 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
  BlockData::findGroupBin((BlockData *const)(v3 + 96), (__int64)v14, *(_DWORD *)(v3 + 48));
  BlockDataMgr::findBlock((BlockDataMgr *const)(v3 + 128), (uint32_t)this);
  if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v3 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveGroupBin",
      509);
    v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v33,
            (const char (*)[34])"[BLOCK]:get block error,block_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
    v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v16, (const char (*)[19])", scene_owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v6 = -1;
    goto LABEL_33;
  }
  v18 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  BlockData::findGroupBin((BlockData *const)(v3 + 160), (__int64)v18, *(_DWORD *)(v3 + 48));
  if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 96), 0LL)
    && std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveGroupBin",
      517);
    v20 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v33,
            (const char (*)[58])"block not expected in virtual and origin block, block_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])", group_id:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
    v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v23, (const char (*)[19])", scene_owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    goto LABEL_28;
  }
  if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 96), 0LL) )
  {
    v25 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
    std::shared_ptr<Group>::shared_ptr(&v32, p_group_ptr);
    v6 = BlockData::saveGroupBin(
           v25,
           *(_DWORD *)(v3 + 48),
           (const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *)&v32);
    std::shared_ptr<Group>::~shared_ptr(&v32);
  }
  else
  {
    if ( !std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v3 + 160), 0LL) )
    {
LABEL_28:
      if ( GroupScriptConfig::isRemoteVision(group_config) )
        v27 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
      else
        v27 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      std::shared_ptr<Group>::shared_ptr(&v32, p_group_ptr);
      v6 = BlockData::saveGroupBin(
             v27,
             *(_DWORD *)(v3 + 48),
             (const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *)&v32);
      std::shared_ptr<Group>::~shared_ptr(&v32);
      goto LABEL_32;
    }
    v26 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    std::shared_ptr<Group>::shared_ptr(&v32, p_group_ptr);
    v6 = BlockData::saveGroupBin(
           v26,
           *(_DWORD *)(v3 + 48),
           (const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *)&v32);
    std::shared_ptr<Group>::~shared_ptr(&v32);
  }
LABEL_32:
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v3 + 160));
LABEL_33:
  std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v3 + 128));
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v3 + 96));
LABEL_34:
  result = v6;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 545: range 000000001798EE46-000000001798F27C
__int64 __fastcall BlockDataMgr::clearGroupBin(BlockDataMgr *const this, uint32_t scene_id, uint32_t group_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  BlockData *v13; // rax
  common::milog::MiLogStream *v14; // rax
  BlockData *v15; // rax
  __int64 result; // rax
  const GroupScriptConfig *group_config; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 block_id:558 64 4 12 scene_id:544 80 4 12 group_id:544 96 16 13 block_ptr:560";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::clearGroupBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 64) = scene_id;
  *(_DWORD *)(v3 + 80) = group_id;
  group_config = BlockDataMgr::findGroupConfig(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80));
  if ( group_config )
  {
    if ( std::operator==<BlockData>(&this->virtual_block_ptr_, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "clearGroupBin",
        554);
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v19,
              (const char (*)[50])"virtual_block_data_ptr_ cannot be null, scene_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v9 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&group_config->block_id);
      }
      *(_DWORD *)(v3 + 48) = group_config->block_id;
      v13 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
      BlockData::clearGroupBin(v13, *(_DWORD *)(v3 + 80));
      BlockDataMgr::findBlock((BlockDataMgr *const)(v3 + 96), (uint32_t)this);
      if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v3 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/block_data.cpp",
          "clearGroupBin",
          563);
        v14 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v19,
                (const char (*)[34])"cannot find block data, block_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v19);
        v9 = -1;
      }
      else
      {
        v15 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        BlockData::clearGroupBin(v15, *(_DWORD *)(v3 + 80));
        v9 = 0;
      }
      std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v3 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "clearGroupBin",
      549);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v19,
           (const char (*)[33])"findGroupConfig failed,scene_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])", group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v9 = -1;
  }
  result = v9;
  if ( v20 == (char *)v3 )
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

// Line 572: range 000000001798F27E-000000001798F512
BlockDataMgr *__fastcall BlockDataMgr::findBlock(
        BlockDataMgr *const this,
        std::map<unsigned int,std::shared_ptr<BlockData>> *block_id,
        int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > >::pointer v6; // rax
  std::shared_ptr<BlockData> *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-C0h] BYREF
  char v12[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 block_id:571 64 8 8 iter:573 96 16 13 block_ptr:579";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::findBlock;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<BlockData>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BlockData>>::find(
                                                                                block_id,
                                                                                (const std::map<unsigned int,std::shared_ptr<BlockData>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::end(block_id)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > > *const)(v3 + 64));
    std::shared_ptr<BlockData>::shared_ptr((std::shared_ptr<BlockData> *const)this, &v6->second);
  }
  else
  {
    common::tools::perf::make_shared<BlockData,unsigned int &>((unsigned int *)(v3 + 96), (unsigned int *)(v3 + 48));
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "findBlock",
        582);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v11,
        (const char (*)[35])"[BLOCK]:create BlockDataPtr failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      std::shared_ptr<BlockData>::shared_ptr((std::shared_ptr<BlockData> *const)this, 0LL);
    }
    else
    {
      v7 = std::map<unsigned int,std::shared_ptr<BlockData>>::operator[](
             block_id,
             (const std::map<unsigned int,std::shared_ptr<BlockData>>::key_type *)(v3 + 48));
      std::shared_ptr<BlockData>::operator=(v7, (const std::shared_ptr<BlockData> *)(v3 + 96));
      std::shared_ptr<BlockData>::shared_ptr(
        (std::shared_ptr<BlockData> *const)this,
        (std::shared_ptr<BlockData> *)(v3 + 96));
    }
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v3 + 96));
  }
  if ( v12 == (char *)v3 )
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
  return this;
};

// Line 592: range 000000001798F514-000000001798F859
int32_t __cdecl BlockDataMgr::checkSave(BlockDataMgr *const this)
{
  std::map<unsigned int,proto::BlockInfo> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  BlockData *v5; // rax
  uint32_t LastSavePlayerBinSize; // r15d
  std::pair<unsigned int,unsigned int> LastGateSession; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  uint32_t total_bin_size; // [rsp+1Ch] [rbp-E4h]
  std::map<unsigned int,std::shared_ptr<BlockData>>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<BlockData>>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,std::shared_ptr<BlockData>> *__for_range; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<BlockData> > *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BlockData> > >::type *block_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BlockData> > >::type *block_ptr; // [rsp+48h] [rbp-B8h]
  char v17[176]; // [rsp+50h] [rbp-B0h] BYREF
  std::pair<unsigned int,unsigned int> v18; // 0:rdx.8

  v1 = (std::map<unsigned int,proto::BlockInfo> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,proto::BlockInfo> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 18 block_info_map:593";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BlockDataMgr::checkSave;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::map<unsigned int,proto::BlockInfo>::map(v1 + 1);
  BlockDataMgr::toBin(this, v1 + 1, 1, 0);
  if ( std::map<unsigned int,proto::BlockInfo>::empty(v1 + 1) )
  {
    v4 = 0;
  }
  else
  {
    total_bin_size = 0;
    __for_range = &this->block_data_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::begin(&this->block_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::end(&this->block_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator*(&__for_begin);
      block_id = std::get<0ul,unsigned int const,std::shared_ptr<BlockData>>(__in);
      block_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BlockData>>(__in);
      if ( std::__shared_ptr<BlockData,(__gnu_cxx::_Lock_policy)2>::operator bool(block_ptr) )
      {
        v5 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)block_ptr);
        total_bin_size += BlockData::getBinLen(v5);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::setLastSaveBlockBinSize(this->player_, total_bin_size);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    LastSavePlayerBinSize = Player::getLastSavePlayerBinSize(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    LastGateSession = Player::getLastGateSession(this->player_);
    Uid = Player::getUid(this->player_);
    v18 = LastGateSession;
    v4 = BlockDataMgr::saveToDb(Uid, v1 + 1, v18, total_bin_size, LastSavePlayerBinSize);
  }
  std::map<unsigned int,proto::BlockInfo>::~map(v1 + 1);
  result = v4;
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 614: range 000000001798F85A-000000001798FD1D
void __fastcall BlockDataMgr::onSaveSucc(BlockDataMgr *const this, uint32_t block_id, uint32_t data_version)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > >::pointer v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  BlockData *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool isDirty; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int val; // [rsp+14h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+40h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 block_id:613 48 4 16 data_version:613 64 8 8 iter:615 96 16 13 block_ptr:618";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::onSaveSucc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = block_id;
  *(_DWORD *)(v3 + 48) = data_version;
  *(std::map<unsigned int,std::shared_ptr<BlockData>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BlockData>>::find(
                                                                                &this->block_data_map_,
                                                                                (const std::map<unsigned int,std::shared_ptr<BlockData>>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::end(&this->block_data_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > > *const)(v3 + 64));
    std::shared_ptr<BlockData>::shared_ptr((std::shared_ptr<BlockData> *const)(v3 + 96), &v6->second);
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v3 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "onSaveSucc",
        621);
      v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v27,
             (const char (*)[25])"block is null, block_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      v8 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( BlockData::isDirty(v8)
        && (v9 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96)),
            BlockData::getDataVersion(v9) == *(_DWORD *)(v3 + 48)) )
      {
        v11 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        BlockData::cleanDirty(v11);
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/block_data.cpp",
          "onSaveSucc",
          628);
        v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v27,
                (const char (*)[26])"block is clean, block_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/block_data.cpp",
          "onSaveSucc",
          632);
        v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v27,
                (const char (*)[40])"[BLOCK]:block state not right,block id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", isDirty:");
        v16 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        isDirty = BlockData::isDirty(v16);
        v18 = common::milog::MiLogStream::operator<<(v15, isDirty);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v18,
                (const char (*)[16])", data_version:");
        v20 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        val = BlockData::getDataVersion(v20);
        v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v19, &val);
        v22 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v21,
                (const char (*)[20])", rsp_data_version:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
    }
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v3 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "onSaveSucc",
      638);
    v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v27,
            (const char (*)[36])"[BLOCK]:cannot find block,block id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  if ( v28 == (char *)v3 )
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
};

// Line 643: range 000000001798FD1E-00000000179903BD
int32_t __cdecl BlockDataMgr::toBin(
        BlockDataMgr *const this,
        std::map<unsigned int,proto::BlockInfo> *block_info_map,
        bool is_force,
        bool is_all_block)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  PlayerSceneComp *v10; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  BlockData *v13; // rax
  common::milog::MiLogStream *v14; // rax
  proto::BlockInfo *v15; // r14
  proto::BlockInfo *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-144h] BYREF
  std::map<unsigned int,std::shared_ptr<BlockData>>::iterator __for_begin; // [rsp+30h] [rbp-140h] BYREF
  std::map<unsigned int,std::shared_ptr<BlockData>>::iterator __for_end; // [rsp+38h] [rbp-138h] BYREF
  std::map<unsigned int,std::shared_ptr<BlockData>> *__for_range; // [rsp+40h] [rbp-130h]
  std::pair<unsigned int const,std::shared_ptr<BlockData> > *__in; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BlockData> > >::type *block_id; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BlockData> > >::type *block_ptr; // [rsp+58h] [rbp-118h]
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-110h] BYREF
  char v37[240]; // [rsp+80h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 28 total_active_group_count:652 64 4 14 timer_cost:672 80 16 9 timer:644 112 40 14 block_info:663";
  *(_QWORD *)(v4 + 16) = BlockDataMgr::toBin;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::saveAllGroup(SceneComp, is_force) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "toBin",
      648);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v36,
           (const char (*)[34])"player save all group failed,uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v9 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v10 = Player::getSceneComp(this->player_);
    *(_DWORD *)(v4 + 48) = PlayerSceneComp::getActiveGroupCount(v10);
    BlockData::to_bin_group_count[0] = 0;
    __for_range = &this->block_data_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::begin(&this->block_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::end(&this->block_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator*(&__for_begin);
      block_id = std::get<0ul,unsigned int const,std::shared_ptr<BlockData>>(__in);
      block_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BlockData>>(__in);
      if ( !std::operator==<BlockData>(block_ptr, 0LL) )
      {
        v11 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)block_ptr);
        if ( BlockData::isDirty(v11) || is_all_block )
        {
          proto::BlockInfo::BlockInfo((proto::BlockInfo *const)(v4 + 112));
          v13 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)block_ptr);
          if ( BlockData::toBin(v13, (proto::BlockInfo *)(v4 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/block_data.cpp",
              "toBin",
              666);
            v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v36,
                    (const char (*)[37])"[BLOCK]:block tobin failed,block_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, block_id);
            common::milog::MiLogStream::~MiLogStream(&v36);
          }
          else
          {
            v15 = std::move<proto::BlockInfo &>((proto::BlockInfo *)(v4 + 112));
            v16 = std::map<unsigned int,proto::BlockInfo>::operator[](block_info_map, block_id);
            proto::BlockInfo::operator=(v16, v15);
          }
          proto::BlockInfo::~BlockInfo((proto::BlockInfo *const)(v4 + 112));
        }
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator++(&__for_begin);
    }
    *(_DWORD *)(v4 + 64) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 80));
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "toBin",
      674);
    v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v36,
            (const char (*)[20])"[BLOCK]: save_cost:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 64));
    v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])" block_size:");
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData> > >::_Base_ptr)std::map<unsigned int,proto::BlockInfo>::size(block_info_map);
    v20 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v19,
            (const unsigned __int64 *)&__for_end);
    v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
    v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v22,
            (const char (*)[21])" to_bin_group_count:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, BlockData::to_bin_group_count);
    v25 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v24,
            (const char (*)[20])" total_group_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v9 = 0;
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 80));
  result = v9;
  if ( v37 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 681: range 00000000179903BE-0000000017990DC1
int32_t __cdecl BlockDataMgr::fromBin(
        BlockDataMgr *const this,
        const std::map<unsigned int,proto::BlockInfo> *block_info_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  int v9; // r15d
  BlockData *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::shared_ptr<BlockData> *v13; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r15
  common::milog::MiLogStream *v20; // rax
  std::vector<unsigned int> *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int> *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r15
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-154h] BYREF
  std::map<unsigned int,proto::BlockInfo>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::map<unsigned int,proto::BlockInfo>::const_iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  const LuaConfigMgr *lua_config_mgr; // [rsp+40h] [rbp-140h]
  const TxtConfigMgr *txt_config_mgr; // [rsp+48h] [rbp-138h]
  const std::map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,proto::BlockInfo> *v34; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::BlockInfo> >::type *block_id; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::BlockInfo> >::type *block_info; // [rsp+68h] [rbp-118h]
  const google::protobuf::Map<unsigned int,std::string > *group_bin_map; // [rsp+70h] [rbp-110h]
  const google::protobuf::Map<unsigned int,std::string > *__for_range_0; // [rsp+78h] [rbp-108h]
  const unsigned int *p_group_id; // [rsp+80h] [rbp-100h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+88h] [rbp-F8h]
  google::protobuf::Map<unsigned int,std::string >::const_iterator __for_begin_0; // [rsp+90h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,std::string >::const_iterator __for_end_0; // [rsp+B0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v43; // [rsp+D0h] [rbp-B0h] BYREF
  char v44[144]; // [rsp+F0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 scene_id:705 64 16 13 block_ptr:688";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  std::map<unsigned int,std::vector<unsigned int>>::clear(&this->frombin_scene_dynamic_groups_map_);
  std::map<unsigned int,std::vector<unsigned int>>::clear(&this->frombin_abandon_blockbin_scene_groups_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.lua_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  __for_range = block_info_map;
  __for_begin._M_node = std::map<unsigned int,proto::BlockInfo>::begin(block_info_map)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::BlockInfo>::end(block_info_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,proto::BlockInfo>(v34);
    block_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::BlockInfo> >::type *)std::get<1ul,unsigned int const,proto::BlockInfo>(v34);
    common::tools::perf::make_shared<BlockData,unsigned int const&>((const unsigned int *)(v3 + 64), block_id);
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/block_data.cpp",
        "fromBin",
        691);
      v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v43,
             (const char (*)[45])"[BLOCK]:MAKE_SHARED<Block> failed, block_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, block_id);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
LABEL_9:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v43);
      v2 = -1;
      v9 = 0;
      goto LABEL_34;
    }
    v10 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( BlockData::fromBin(v10, block_info) )
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/block_data.cpp",
        "fromBin",
        696);
      v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v43,
              (const char (*)[40])"[BLOCK]:block from bin error, block_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, block_id);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             v12,
             (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_9;
    }
    v13 = std::map<unsigned int,std::shared_ptr<BlockData>>::operator[](&this->block_data_map_, block_id);
    std::shared_ptr<BlockData>::operator=(v13, (const std::shared_ptr<BlockData> *)(v3 + 64));
    v14 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    group_bin_map = BlockData::getSerializedGroupBinMap[abi:cxx11](v14);
    __for_range_0 = group_bin_map;
    google::protobuf::Map<unsigned int,std::string>::begin(&__for_begin_0, group_bin_map);
    google::protobuf::Map<unsigned int,std::string>::end(&__for_end_0, __for_range_0);
    while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
    {
      p_group_id = (const unsigned int *)google::protobuf::Map<unsigned int,std::string>::const_iterator::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(p_group_id);
      }
      *(_DWORD *)(v3 + 48) = LuaConfigMgr::getSceneIdByGroupId(lua_config_mgr, *p_group_id);
      if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(p_group_id);
      }
      group_info_config_ptr = Group::getGroupInfoScriptConfig(*(_DWORD *)(v3 + 48), *p_group_id, 0);
      if ( group_info_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&group_info_config_ptr->is_dynamic_load);
        if ( group_info_config_ptr->is_dynamic_load )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/block_data.cpp",
            "fromBin",
            714);
          v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v43,
                  (const char (*)[40])"[BLOCK]:block from bin dynamic group_id");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, p_group_id);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v21 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->frombin_scene_dynamic_groups_map_,
                  (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
          std::vector<unsigned int>::push_back(v21, p_group_id);
        }
        if ( SceneExcelConfigMgr::isSceneAbandonBlockbin(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v43,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/block_data.cpp",
            "fromBin",
            719);
          v22 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                  &v43,
                  (const char (*)[55])"[BLOCK]:block from bin abandon blockbin scene group_id");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, p_group_id);
          common::milog::MiLogStream::~MiLogStream(&v43);
          v23 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->frombin_abandon_blockbin_scene_groups_map_,
                  (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
          std::vector<unsigned int>::push_back(v23, p_group_id);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v43,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/block_data.cpp",
          "fromBin",
          709);
        v15 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v43,
                (const char (*)[50])"[BLOCK]:getGroupInfoScriptConfig error, group_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, p_group_id);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])", scene_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v18,
                (const char (*)[19])", scene_owner_uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
        common::milog::MiLogStream::~MiLogStream(&v43);
      }
      google::protobuf::Map<unsigned int,std::string>::const_iterator::operator++(&__for_begin_0);
    }
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "fromBin",
      724);
    v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v43,
            (const char (*)[35])"block loaded by frombin, block_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, block_id);
    v26 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v25, (const char (*)[19])", scene_owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
    common::milog::MiLogStream::~MiLogStream(&v43);
    v9 = 1;
LABEL_34:
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v3 + 64));
    if ( v9 != 1 )
      goto LABEL_37;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_37:
  result = v2;
  if ( v44 == (char *)v3 )
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

// Line 731: range 0000000017990DC2-0000000017990E96
void __cdecl BlockDataMgr::clear(BlockDataMgr *const this)
{
  BlockData *v1; // rax
  std::map<unsigned int,std::shared_ptr<BlockData>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<BlockData>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<BlockData>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<BlockData> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<BlockData> > >::type *block_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<BlockData> > >::type *block_data_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->block_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::begin(&this->block_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BlockData>>::end(&this->block_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,std::shared_ptr<BlockData>>(__in);
    block_data_ptr = std::get<1ul,unsigned int const,std::shared_ptr<BlockData>>(__in);
    if ( std::operator!=<BlockData>(block_data_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)block_data_ptr);
      BlockData::clear(v1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BlockData>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::vector<unsigned int>>::clear(&this->frombin_scene_dynamic_groups_map_);
  std::map<unsigned int,std::vector<unsigned int>>::clear(&this->frombin_abandon_blockbin_scene_groups_map_);
};

// Line 745: range 0000000017990E98-0000000017991DF7
__int64 __fastcall BlockDataMgr::saveToDb(
        __int32 uid,
        std::map<unsigned int,proto::BlockInfo> *block_info_map,
        unsigned __int64 gate_session_info,
        __int32 total_bin_size,
        __int32 player_bin_size)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const char *v8; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  uint32_t *p_max_sum_bin_len; // rax
  MonitorReport *v17; // r14
  MonitorReport *v18; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  uint32_t *p_max_block_bin_len; // rax
  google::protobuf::uint32 v21; // r14d
  std::tuple_element<0,std::pair<unsigned int const,proto::BlockInfo> >::type *v22; // rsi
  unsigned int *v23; // rax
  google::protobuf::uint32 *v24; // rdx
  char v25; // cl
  unsigned int v26; // r14d
  common::minet::Packet *v27; // rax
  common::minet::Packet *v28; // rcx
  common::minet::Packet *v29; // rcx
  GameserverService *v30; // r14
  common::minet::PacketPtr v31; // rdi
  common::milog::MiLogStream *v32; // rax
  proto::BlockInfo *v33; // r14
  proto::BlockInfo *v34; // rax
  common::minet::Packet *v35; // rax
  common::minet::Packet *v36; // rcx
  common::minet::Packet *v37; // rcx
  GameserverService *v38; // r14
  unsigned __int64 v39; // rdx
  GameserverService *v40; // r14
  NetworkMgrBase *v41; // r14
  uint32_t v42; // r8d
  __int64 result; // rax
  std::string v44; // [rsp+0h] [rbp-210h]
  std::string v45; // [rsp+0h] [rbp-210h]
  std::map<unsigned int,proto::BlockInfo> *block_info_mapa; // [rsp+10h] [rbp-200h]
  uint32_t total_bin_sizea; // [rsp+18h] [rbp-1F8h]
  std::allocator<char> __a; // [rsp+2Bh] [rbp-1E5h] BYREF
  uint32_t bin_sum_size; // [rsp+2Ch] [rbp-1E4h]
  std::map<unsigned int,proto::BlockInfo>::iterator __for_begin; // [rsp+30h] [rbp-1E0h] BYREF
  std::map<unsigned int,proto::BlockInfo>::iterator __for_end; // [rsp+38h] [rbp-1D8h] BYREF
  google::protobuf::Map<unsigned int,proto::BlockInfo> *pb_block_info_map; // [rsp+40h] [rbp-1D0h]
  std::map<unsigned int,proto::BlockInfo> *__for_range_0; // [rsp+48h] [rbp-1C8h]
  std::pair<unsigned int const,proto::BlockInfo> *v54; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<0,std::pair<unsigned int const,proto::BlockInfo> >::type *block_id_0; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<1,std::pair<unsigned int const,proto::BlockInfo> >::type *block_info_0; // [rsp+60h] [rbp-1B0h]
  google::protobuf::Map<unsigned int,unsigned int> *block_succ_save_map; // [rsp+68h] [rbp-1A8h]
  std::map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+70h] [rbp-1A0h]
  std::pair<unsigned int const,proto::BlockInfo> *__in; // [rsp+78h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,proto::BlockInfo> >::type *block_id; // [rsp+80h] [rbp-190h]
  std::tuple_element<1,std::pair<unsigned int const,proto::BlockInfo> >::type *block_info; // [rsp+88h] [rbp-188h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+90h] [rbp-180h] BYREF
  common::milog::MiLogStream v63; // [rsp+A0h] [rbp-170h] BYREF
  char v64[336]; // [rsp+C0h] [rbp-150h] BYREF

  *((_DWORD *)&v44._anon_0._M_allocated_capacity + 3) = uid;
  v44._anon_0._M_allocated_capacity = (std::string::size_type)block_info_map;
  v44._M_string_length = gate_session_info;
  *((_DWORD *)&v44._anon_0._M_allocated_capacity + 2) = total_bin_size;
  HIDWORD(v44._M_dataplus._M_p) = player_bin_size;
  v5 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 7 uid:744 64 8 21 gate_session_info:744 96 16 14 config_ptr:746 128 16 14 packet_ptr:801 "
                        "160 96 7 req:794";
  *(_QWORD *)(v5 + 16) = BlockDataMgr::saveToDb;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -219021312;
  v7[536862724] = -219021312;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 48) = uid;
  *(_QWORD *)(v5 + 64) = v44._M_string_length;
  v8 = (const char *)ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 96));
  bin_sum_size = *((_DWORD *)&v44._anon_0._M_allocated_capacity + 2) + HIDWORD(v44._M_dataplus._M_p);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v9->warn_block_bin_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->warn_block_bin_len >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v9->warn_block_bin_len);
  }
  if ( *((_DWORD *)&v44._anon_0._M_allocated_capacity + 2) > v9->warn_block_bin_len )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveToDb",
      751);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v10->warn_block_bin_len >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v10->warn_block_bin_len >> 3) + 0x7FFF8000) <= 3 )
    {
      v10 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->warn_block_bin_len);
    }
    v8 = "block_bin.length=%u is very long, limit=%u";
    common::milog::MiLogStream::operator()(
      &v63,
      "block_bin.length=%u is very long, limit=%u",
      *((unsigned int *)&v44._anon_0._M_allocated_capacity + 2),
      v10->warn_block_bin_len);
    common::milog::MiLogStream::~MiLogStream(&v63);
  }
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&v11->warn_sum_bin_len >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->warn_sum_bin_len >> 3) + 0x7FFF8000) <= 3 )
  {
    v11 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v11->warn_sum_bin_len);
  }
  if ( bin_sum_size > v11->warn_sum_bin_len )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "saveToDb",
      755);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v12->warn_sum_bin_len >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v12->warn_sum_bin_len >> 3) + 0x7FFF8000) <= 3 )
    {
      v12 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v12->warn_sum_bin_len);
    }
    v8 = "uid=%u, last save bin length=%u block length=%u bin_sum_size=%u is very long, bin_sum limit=%u";
    common::milog::MiLogStream::operator()(
      &v63,
      "uid=%u, last save bin length=%u block length=%u bin_sum_size=%u is very long, bin_sum limit=%u",
      *(unsigned int *)(v5 + 48),
      HIDWORD(v44._M_dataplus._M_p),
      *((unsigned int *)&v44._anon_0._M_allocated_capacity + 2),
      bin_sum_size,
      v12->warn_sum_bin_len);
    common::milog::MiLogStream::~MiLogStream(&v63);
  }
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  v14 = *(_BYTE *)(((unsigned __int64)&v13->max_sum_bin_len >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v14 != 0;
  if ( v14 != 0 && (char)((((_BYTE)v13 + 20) & 7) + 3) >= v14 )
    __asan_report_load4(&v13->max_sum_bin_len);
  if ( bin_sum_size > v13->max_sum_bin_len )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      6u,
      "./src/player/block_data.cpp",
      "saveToDb",
      760);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
    p_max_sum_bin_len = &v15->max_sum_bin_len;
    if ( *(_BYTE *)(((unsigned __int64)p_max_sum_bin_len >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_max_sum_bin_len & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_sum_bin_len >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_max_sum_bin_len);
    }
    v8 = "uid=%u, last save bin length=%u block length=%u bin_sum_size=%u is more than max, bin_sum max=%u";
    common::milog::MiLogStream::operator()(
      &v63,
      "uid=%u, last save bin length=%u block length=%u bin_sum_size=%u is more than max, bin_sum max=%u",
      *(unsigned int *)(v5 + 48),
      HIDWORD(v44._M_dataplus._M_p),
      *((unsigned int *)&v44._anon_0._M_allocated_capacity + 2),
      bin_sum_size,
      v15->max_sum_bin_len);
    common::milog::MiLogStream::~MiLogStream(&v63);
  }
  v17 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator(&__a, v8);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v63, byte_261E1600, &__a);
  MonitorReport::addValue(v17, MONITOR_BIN_BLOCK_SIZE, *((int32_t *)&v44._anon_0._M_allocated_capacity + 2), v44);
  std::string::~string(&v63);
  std::allocator<char>::~allocator(&__a);
  v18 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  std::allocator<char>::allocator(&__a, 27LL);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v63, byte_261E1600, &__a);
  MonitorReport::addValue(v18, MONITOR_BIN_SUM_SIZE, bin_sum_size, v45);
  std::string::~string(&v63);
  std::allocator<char>::~allocator(&__a);
  v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
  p_max_block_bin_len = &v19->max_block_bin_len;
  if ( *(_BYTE *)(((unsigned __int64)p_max_block_bin_len >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_max_block_bin_len & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_block_bin_len >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(p_max_block_bin_len);
  }
  if ( total_bin_sizea <= v19->max_block_bin_len )
  {
    proto::SaveBlockDataReq::SaveBlockDataReq((proto::SaveBlockDataReq *const)(v5 + 160));
    pb_block_info_map = proto::SaveBlockDataReq::mutable_block_info_map((proto::SaveBlockDataReq *const)(v5 + 160));
    __for_range_0 = block_info_mapa;
    __for_begin._M_node = std::map<unsigned int,proto::BlockInfo>::begin(block_info_mapa)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::BlockInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v54 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator*(&__for_begin);
      block_id_0 = std::get<0ul,unsigned int const,proto::BlockInfo>(v54);
      block_info_0 = std::get<1ul,unsigned int const,proto::BlockInfo>(v54);
      v33 = std::move<proto::BlockInfo &>(block_info_0);
      v34 = google::protobuf::Map<unsigned int,proto::BlockInfo>::operator[](pb_block_info_map, block_id_0);
      proto::BlockInfo::operator=(v34, v33);
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator++(&__for_begin);
    }
    common::minet::PacketUtils::createPacket<proto::SaveBlockDataReq>((const proto::SaveBlockDataReq *)(v5 + 128));
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v5 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "saveToDb",
        804);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v63, (const char (*)[19])"packet_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v63);
      v26 = -1;
    }
    else
    {
      v35 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      common::minet::Packet::setUserId(v35, *(_DWORD *)(v5 + 48));
      v36 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      if ( *(_BYTE *)(((v5 + 68) >> 3) + 0x7FFF8000) != 0
        && (char)(((v5 + 68) & 7) + 3) >= *(_BYTE *)(((v5 + 68) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5 + 68);
      }
      common::minet::Packet::setUserSessionId(v36, *(_DWORD *)(v5 + 68));
      v37 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0
        && (char)(((v5 + 64) & 7) + 3) >= *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5 + 64);
      }
      common::minet::Packet::setServiceAppId(v37, 2u, *(_DWORD *)(v5 + 64));
      v38 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v5 + 128));
      ServiceBase::setPacketSource(v38, (common::minet::PacketPtr)__PAIR128__(v39, &p_packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v40 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v5 + 128));
      GameserverService::setPacketGameThreadIndex(v40, &p_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v41 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v5 + 128));
      v26 = NetworkMgrBase::sendPacketToTargetService(
              v41,
              (common::minet::PacketPtr)__PAIR128__(5LL, &p_packet_ptr),
              0,
              v42);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 128));
    proto::SaveBlockDataReq::~SaveBlockDataReq((proto::SaveBlockDataReq *const)(v5 + 160));
  }
  else
  {
    proto::SaveBlockDataRsp::SaveBlockDataRsp((proto::SaveBlockDataRsp *const)(v5 + 160));
    proto::SaveBlockDataRsp::set_retcode((proto::SaveBlockDataRsp *const)(v5 + 160), 0);
    block_succ_save_map = proto::SaveBlockDataRsp::mutable_block_succ_save_map((proto::SaveBlockDataRsp *const)(v5 + 160));
    __for_range = block_info_mapa;
    __for_begin._M_node = std::map<unsigned int,proto::BlockInfo>::begin(block_info_mapa)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::BlockInfo>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator*(&__for_begin);
      block_id = std::get<0ul,unsigned int const,proto::BlockInfo>(__in);
      block_info = std::get<1ul,unsigned int const,proto::BlockInfo>(__in);
      v21 = proto::BlockInfo::data_version(block_info);
      v22 = block_id;
      v23 = google::protobuf::Map<unsigned int,unsigned int>::operator[](block_succ_save_map, block_id);
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
      {
        LOBYTE(v22) = v25 != 0;
        __asan_report_store4(v23, v22, v23);
      }
      *v24 = v21;
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator++(&__for_begin);
    }
    common::minet::PacketUtils::createPacket<proto::SaveBlockDataRsp>((const proto::SaveBlockDataRsp *)(v5 + 128));
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v5 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/block_data.cpp",
        "saveToDb",
        781);
      common::milog::MiLogStream::operator()(&v63, "create packet failed");
      common::milog::MiLogStream::~MiLogStream(&v63);
      v26 = -1;
    }
    else
    {
      v27 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      common::minet::Packet::setUserId(v27, *(_DWORD *)(v5 + 48));
      v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      if ( *(_BYTE *)(((v5 + 68) >> 3) + 0x7FFF8000) != 0
        && (char)(((v5 + 68) & 7) + 3) >= *(_BYTE *)(((v5 + 68) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5 + 68);
      }
      common::minet::Packet::setUserSessionId(v28, *(_DWORD *)(v5 + 68));
      v29 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) != 0
        && (char)(((v5 + 64) & 7) + 3) >= *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5 + 64);
      }
      common::minet::Packet::setServiceAppId(v29, 2u, *(_DWORD *)(v5 + 64));
      v30 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v5 + 128));
      GameserverService::setPacketGameThreadIndex(v30, &p_packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      v31._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(v5 + 128);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &p_packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v5 + 128));
      v31._M_ptr = (std::__shared_ptr<common::minet::Packet,(__gnu_cxx::_Lock_policy)2>::element_type *)&p_packet_ptr;
      ServiceBox::pushPacketToService(v31);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        6u,
        "./src/player/block_data.cpp",
        "saveToDb",
        789);
      v32 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v63,
              (const char (*)[36])"make fake SaveBlockDataRsp for uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v63);
      v26 = 0;
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v5 + 128));
    proto::SaveBlockDataRsp::~SaveBlockDataRsp((proto::SaveBlockDataRsp *const)(v5 + 160));
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 96));
  result = v26;
  if ( v64 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 818: range 0000000017991DF8-0000000017991FE0
const GroupScriptConfig *__fastcall BlockDataMgr::findGroupConfig(
        BlockDataMgr *const this,
        uint32_t scene_id,
        uint32_t group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const GroupScriptConfig *result; // rax
  const SceneScriptConfig *script_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 scene_id:817";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::findGroupConfig;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = scene_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  script_config_ptr = LuaConfigMgr::findSceneScriptConfig(&v6->design_config.lua_config_mgr, *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( script_config_ptr )
  {
    result = SceneScriptConfig::findGroupScriptConfig(script_config_ptr, group_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "findGroupConfig",
      822);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v12,
           (const char (*)[39])"findSceneScriptConfig fails, scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0LL;
  }
  if ( v13 == (char *)v3 )
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

// Line 830: range 0000000017991FE2-00000000179924A2
BlockDataMgr *__fastcall BlockDataMgr::moveGroupBin(
        BlockDataMgr *const this,
        __int64 group_id,
        BlockData *from,
        BlockData *to,
        BlockData *p_group_bin_ptr,
        const std::shared_ptr<proto::GroupBin> *a6)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int v27; // [rsp+1Ch] [rbp-D4h]
  unsigned int val; // [rsp+34h] [rbp-BCh] BYREF
  unsigned int BlockId; // [rsp+38h] [rbp-B8h] BYREF
  unsigned int Uid; // [rsp+3Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+60h] [rbp-90h] BYREF

  v27 = (int)from;
  v6 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 12 group_id:829 64 16 21 new_group_bin_ptr:836";
  *(_QWORD *)(v6 + 16) = BlockDataMgr::moveGroupBin;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202178560;
  *(_DWORD *)(v6 + 48) = v27;
  common::milog::MiLogStream::create(
    &v31,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/block_data.cpp",
    "moveGroupBin",
    831);
  v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v31,
         (const char (*)[34])"[BLOCK]:group move from block_id:");
  val = BlockData::getBlockId(to);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])off_2625A240);
  BlockId = BlockData::getBlockId(p_group_bin_ptr);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &BlockId);
  v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])",group_id:");
  v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 48));
  v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])",uid:");
  if ( *(_BYTE *)(((unsigned __int64)(group_id + 64) >> 3) + 0x7FFF8000) )
    __asan_report_load8(group_id + 64);
  Uid = Player::getUid(*(const Player *const *)(group_id + 64));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v31);
  std::shared_ptr<proto::GroupBin>::shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v6 + 64), a6);
  BlockData::moveGroupBin(p_group_bin_ptr, *(_DWORD *)(v6 + 48), (GroupBinPtr *)(v6 + 64));
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v6 + 64));
  BlockData::clearGroupBin(to, *(_DWORD *)(v6 + 48));
  BlockData::findGroupBin((BlockData *const)(v6 + 64), (__int64)p_group_bin_ptr, *(_DWORD *)(v6 + 48));
  if ( std::operator==<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v6 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "moveGroupBin",
      839);
    v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v31,
            (const char (*)[43])"[BLOCK]:moveGroupBin failed from block_id:");
    val = BlockData::getBlockId(to);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])off_2625A240);
    BlockId = BlockData::getBlockId(p_group_bin_ptr);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &BlockId);
    v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])",group_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v6 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])",uid:");
    if ( *(_BYTE *)(((unsigned __int64)(group_id + 64) >> 3) + 0x7FFF8000) )
      __asan_report_load8(group_id + 64);
    Uid = Player::getUid(*(const Player *const *)(group_id + 64));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v31);
    std::shared_ptr<proto::GroupBin>::shared_ptr((std::shared_ptr<proto::GroupBin> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<proto::GroupBin>::shared_ptr(
      (std::shared_ptr<proto::GroupBin> *const)this,
      (std::shared_ptr<proto::GroupBin> *)(v6 + 64));
  }
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v6 + 64));
  if ( v32 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 847: range 00000000179924A4-0000000017992573
const std::vector<unsigned int> *__fastcall BlockDataMgr::getFromBinSceneDynamicGroupsVec(
        BlockDataMgr *const this,
        uint32_t scene_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::vector<unsigned int> *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 scene_id:846";
  *(_QWORD *)(v2 + 16) = BlockDataMgr::getFromBinSceneDynamicGroupsVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = scene_id;
  result = std::map<unsigned int,std::vector<unsigned int>>::operator[](
             &this->frombin_scene_dynamic_groups_map_,
             (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 852: range 0000000017992574-0000000017992643
const std::vector<unsigned int> *__fastcall BlockDataMgr::getFromBinAbandonBlockbinSceneGroupsVec(
        BlockDataMgr *const this,
        uint32_t scene_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const std::vector<unsigned int> *result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 scene_id:851";
  *(_QWORD *)(v2 + 16) = BlockDataMgr::getFromBinAbandonBlockbinSceneGroupsVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = scene_id;
  result = std::map<unsigned int,std::vector<unsigned int>>::operator[](
             &this->frombin_abandon_blockbin_scene_groups_map_,
             (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 857: range 0000000017992644-0000000017992D52
__int64 __fastcall BlockDataMgr::forceSaveGroupBinByMUIP(BlockDataMgr *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  BlockData *v20; // rax
  BlockData *v21; // rax
  BlockData *v22; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  const GroupScriptConfig *group_config; // [rsp+18h] [rbp-F8h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 12 block_id:869 48 4 12 group_id:856 64 16 20 from_virtual_ptr:871 96 16 13 block_ptr:872"
                        " 128 16 19 from_origin_ptr:878";
  *(_QWORD *)(v2 + 16) = BlockDataMgr::forceSaveGroupBinByMUIP;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  if ( std::operator==<BlockData>(&this->virtual_block_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "forceSaveGroupBinByMUIP",
      860);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v26,
           (const char (*)[50])"virtual_block_data_ptr_ cannot be null, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
    goto LABEL_32;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  group_config = LuaConfigMgr::findGroupScriptConfig(&v7->design_config.lua_config_mgr, *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( !group_config )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "forceSaveGroupBinByMUIP",
      866);
    v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v26,
           (const char (*)[34])"findGroupConfig failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&group_config->block_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&group_config->block_id);
  }
  *(_DWORD *)(v2 + 32) = group_config->block_id;
  v9 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
  BlockData::findGroupBin((BlockData *const)(v2 + 64), (__int64)v9, *(_DWORD *)(v2 + 48));
  BlockDataMgr::findBlock((BlockDataMgr *const)(v2 + 96), &this->block_data_map_, *(_DWORD *)(v2 + 32));
  if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "forceSaveGroupBinByMUIP",
      875);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v26,
            (const char (*)[34])"[BLOCK]:get block error,block_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v11, (const char (*)[19])", scene_owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = -1;
    goto LABEL_31;
  }
  v13 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  BlockData::findGroupBin((BlockData *const)(v2 + 128), (__int64)v13, *(_DWORD *)(v2 + 48));
  if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v2 + 64), 0LL)
    && std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v2 + 128), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "forceSaveGroupBinByMUIP",
      883);
    v15 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v26,
            (const char (*)[58])"block not expected in virtual and origin block, block_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])", group_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])", scene_owner_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
    common::milog::MiLogStream::~MiLogStream(&v26);
    goto LABEL_26;
  }
  if ( std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v2 + 64), 0LL) )
  {
    v20 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
    v6 = BlockData::insituSaveGroupBin(v20, *(_DWORD *)(v2 + 48));
  }
  else
  {
    if ( !std::operator!=<proto::GroupBin>((const std::shared_ptr<proto::GroupBin> *)(v2 + 128), 0LL) )
    {
LABEL_26:
      if ( GroupScriptConfig::isRemoteVision(group_config) )
        v22 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->virtual_block_ptr_);
      else
        v22 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v6 = BlockData::insituSaveGroupBin(v22, *(_DWORD *)(v2 + 48));
      goto LABEL_30;
    }
    v21 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v6 = BlockData::insituSaveGroupBin(v21, *(_DWORD *)(v2 + 48));
  }
LABEL_30:
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v2 + 128));
LABEL_31:
  std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v2 + 96));
  std::shared_ptr<proto::GroupBin>::~shared_ptr((std::shared_ptr<proto::GroupBin> *const)(v2 + 64));
LABEL_32:
  result = v6;
  if ( v27 == (char *)v2 )
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

// Line 910: range 0000000017992D54-000000001799319C
const proto::GroupProductBin *__fastcall BlockDataMgr::findGroupProductBin(BlockDataMgr *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  const proto::GroupProductBin *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  const proto::GroupProductBin *result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  const GroupScriptConfig *group_config_ptr; // [rsp+20h] [rbp-C0h]
  const proto::GroupProductBin *product_bin_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 12 block_id:917 48 4 12 group_id:909 64 16 13 block_ptr:919";
  *(_QWORD *)(v2 + 16) = BlockDataMgr::findGroupProductBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v5->design_config.lua_config_mgr, *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( group_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_config_ptr->block_id);
    }
    *(_DWORD *)(v2 + 32) = group_config_ptr->block_id;
    BlockDataMgr::findBlock((BlockDataMgr *const)(v2 + 64), &this->block_data_map_, *(_DWORD *)(v2 + 32));
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "findGroupProductBin",
        922);
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v17,
             (const char (*)[34])"[BLOCK]:get block error,block_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v9,
              (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v7 = 0LL;
    }
    else
    {
      v11 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      product_bin_ptr = BlockData::findGroupProductBin(v11, *(_DWORD *)(v2 + 48));
      if ( product_bin_ptr )
      {
        v7 = product_bin_ptr;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/block_data.cpp",
          "findGroupProductBin",
          928);
        v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v17,
                (const char (*)[50])"[BLOCK]: cannot find group product bin, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v7 = 0LL;
      }
    }
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/block_data.cpp",
      "findGroupProductBin",
      914);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v17,
           (const char (*)[42])"[BLOCK]:findGroupConfig failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v7 = 0LL;
  }
  result = v7;
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

// Line 935: range 000000001799319E-000000001799356E
__int64 __fastcall BlockDataMgr::addOneOffRecord(
        BlockDataMgr *const this,
        proto::ProtEntityType type,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t version)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  BlockData *v14; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const GroupScriptConfig *group_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 12 block_id:942 48 4 12 group_id:934 64 16 13 block_ptr:944";
  *(_QWORD *)(v5 + 16) = BlockDataMgr::addOneOffRecord;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 64));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v8->design_config.lua_config_mgr, *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 64));
  if ( group_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_config_ptr->block_id);
    }
    *(_DWORD *)(v5 + 32) = group_config_ptr->block_id;
    BlockDataMgr::findBlock((BlockDataMgr *const)(v5 + 64), &this->block_data_map_, *(_DWORD *)(v5 + 32));
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "addOneOffRecord",
        947);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v21,
              (const char (*)[34])"[BLOCK]:get block error,block_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v12,
              (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v10 = -1;
    }
    else
    {
      v14 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      v10 = BlockData::addOneOffRecord(v14, type, *(_DWORD *)(v5 + 48), config_id, version);
    }
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "addOneOffRecord",
      939);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v21,
           (const char (*)[42])"[BLOCK]:findGroupConfig failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v10 = -1;
  }
  result = v10;
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 954: range 0000000017993570-000000001799359C
void __cdecl BlockDataMgr::delOneOffRecordByMuip(
        BlockDataMgr *const this,
        proto::ProtEntityType type,
        uint32_t group_id,
        uint32_t config_id)
{
  BlockDataMgr::delOneOffRecord(this, type, group_id, config_id);
};

// Line 959: range 000000001799359E-0000000017993958
void __fastcall BlockDataMgr::delOneOffRecord(
        BlockDataMgr *const this,
        proto::ProtEntityType type,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  BlockData *v12; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const GroupScriptConfig *group_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 block_id:966 48 4 12 group_id:958 64 16 13 block_ptr:968";
  *(_QWORD *)(v4 + 16) = BlockDataMgr::delOneOffRecord;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v7->design_config.lua_config_mgr, *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( group_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_config_ptr->block_id);
    }
    *(_DWORD *)(v4 + 32) = group_config_ptr->block_id;
    BlockDataMgr::findBlock((BlockDataMgr *const)(v4 + 64), &this->block_data_map_, *(_DWORD *)(v4 + 32));
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v4 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "delOneOffRecord",
        971);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v17,
             (const char (*)[34])"[BLOCK]:get block error,block_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v10,
              (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    else
    {
      v12 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      BlockData::delOneOffRecord(v12, type, *(_DWORD *)(v4 + 48), config_id);
    }
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v4 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "delOneOffRecord",
      963);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v17,
           (const char (*)[42])"[BLOCK]:findGroupConfig failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v4 )
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
};

// Line 978: range 000000001799395A-0000000017993D2A
__int64 __fastcall BlockDataMgr::setOneOffRecordVersion(
        BlockDataMgr *const this,
        proto::ProtEntityType type,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t version)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  BlockData *v14; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const GroupScriptConfig *group_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 12 block_id:985 48 4 12 group_id:977 64 16 13 block_ptr:987";
  *(_QWORD *)(v5 + 16) = BlockDataMgr::setOneOffRecordVersion;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 64));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v8->design_config.lua_config_mgr, *(_DWORD *)(v5 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 64));
  if ( group_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_config_ptr->block_id);
    }
    *(_DWORD *)(v5 + 32) = group_config_ptr->block_id;
    BlockDataMgr::findBlock((BlockDataMgr *const)(v5 + 64), &this->block_data_map_, *(_DWORD *)(v5 + 32));
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "setOneOffRecordVersion",
        990);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v21,
              (const char (*)[34])"[BLOCK]:get block error,block_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v12,
              (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v10 = 1;
    }
    else
    {
      v14 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      v10 = BlockData::setOneOffRecordVersion(v14, type, *(_DWORD *)(v5 + 48), config_id, version);
    }
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v5 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "setOneOffRecordVersion",
      982);
    v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v21,
           (const char (*)[42])"[BLOCK]:findGroupConfig failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    v10 = 1;
  }
  result = v10;
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 997: range 0000000017993D2C-00000000179940D1
void __fastcall BlockDataMgr::removeProductRecordByGm(BlockDataMgr *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  BlockData *v10; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  const GroupScriptConfig *group_config_ptr; // [rsp+18h] [rbp-B8h]
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
  *(_QWORD *)(v2 + 8) = "3 32 4 13 block_id:1004 48 4 12 group_id:996 64 16 14 block_ptr:1006";
  *(_QWORD *)(v2 + 16) = BlockDataMgr::removeProductRecordByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v5->design_config.lua_config_mgr, *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( group_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&group_config_ptr->block_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&group_config_ptr->block_id);
    }
    *(_DWORD *)(v2 + 32) = group_config_ptr->block_id;
    BlockDataMgr::findBlock((BlockDataMgr *const)(v2 + 64), &this->block_data_map_, *(_DWORD *)(v2 + 32));
    if ( std::operator==<BlockData>((const std::shared_ptr<BlockData> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/block_data.cpp",
        "removeProductRecordByGm",
        1009);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v13,
             (const char (*)[34])"[BLOCK]:get block error,block_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])", scene_owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v10 = std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BlockData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BlockData::removeProductBin(v10, *(_DWORD *)(v2 + 48));
    }
    std::shared_ptr<BlockData>::~shared_ptr((std::shared_ptr<BlockData> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "removeProductRecordByGm",
      1001);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v13,
           (const char (*)[42])"[BLOCK]:findGroupConfig failed, group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
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
};

// Line 1016: range 00000000179940D2-00000000179941B2
__int64 __fastcall BlockDataMgr::removeFromGadgetMap(proto::GroupBin *mutable_group_bin, uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::Map<unsigned int,proto::GroupGadgetBin> *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 config_id:1015";
  *(_QWORD *)(v2 + 16) = BlockDataMgr::removeFromGadgetMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = config_id;
  v5 = proto::GroupBin::mutable_gadget_map(mutable_group_bin);
  google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::erase(
    v5,
    (const google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::key_type *)(v2 + 32));
  result = 0LL;
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

// Line 1022: range 00000000179941B4-0000000017994294
__int64 __fastcall BlockDataMgr::removeFromMonsterMap(proto::GroupBin *mutable_group_bin, uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::Map<unsigned int,proto::GroupMonsterBin> *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 config_id:1021";
  *(_QWORD *)(v2 + 16) = BlockDataMgr::removeFromMonsterMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = config_id;
  v5 = proto::GroupBin::mutable_monster_map(mutable_group_bin);
  google::protobuf::Map<unsigned int,proto::GroupMonsterBin>::erase(
    v5,
    (const google::protobuf::Map<unsigned int,proto::GroupMonsterBin>::key_type *)(v2 + 32));
  result = 0LL;
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

// Line 1028: range 0000000017994296-000000001799467B
__int64 __fastcall BlockDataMgr::procDelGadgetList(proto::GroupBin *mutable_group_bin, uint32_t config_id, bool is_add)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  __int64 result; // rax
  bool has; // [rsp+1Bh] [rbp-F5h]
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::iterator __for_begin_1; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedField<unsigned int> *del_list; // [rsp+40h] [rbp-D0h]
  google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+48h] [rbp-C8h]
  google::protobuf::RepeatedField<unsigned int>::iterator __for_end_1; // [rsp+50h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+58h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::iterator __for_end; // [rsp+60h] [rbp-B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  char v21[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 id:1039 48 4 14 config_id:1027 64 24 16 del_id_list:1032";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::procDelGadgetList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = config_id;
  del_list = proto::GroupBin::mutable_del_gadget_list(mutable_group_bin);
  if ( !is_add )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    __for_range = del_list;
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(del_list);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(del_list);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 32) = *__for_begin;
      if ( *(_DWORD *)(v3 + 32) != *(_DWORD *)(v3 + 48) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 64),
          (const std::vector<unsigned int>::value_type *)(v3 + 32));
      ++__for_begin;
    }
    google::protobuf::RepeatedField<unsigned int>::Clear(del_list);
    __for_range_0 = (std::vector<unsigned int> *)(v3 + 64);
    __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v3 + 32) = *v7;
      google::protobuf::RepeatedField<unsigned int>::Add(del_list, (const unsigned int *)(v3 + 32));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  }
  else
  {
    has = 0;
    __for_range_1 = del_list;
    __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(del_list);
    __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(del_list);
    while ( __for_begin_1 != __for_end_1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_1);
      }
      if ( *__for_begin_1 == *(_DWORD *)(v3 + 48) )
      {
        has = 1;
        break;
      }
      ++__for_begin_1;
    }
    if ( !has )
      google::protobuf::RepeatedField<unsigned int>::Add(del_list, (const unsigned int *)(v3 + 48));
  }
  result = 0LL;
  if ( v21 == (char *)v3 )
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

// Line 1065: range 000000001799467C-0000000017994A61
__int64 __fastcall BlockDataMgr::procDelMonsterList(
        proto::GroupBin *mutable_group_bin,
        uint32_t config_id,
        bool is_add)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  __int64 result; // rax
  bool has; // [rsp+1Bh] [rbp-F5h]
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::iterator __for_begin_1; // [rsp+38h] [rbp-D8h]
  google::protobuf::RepeatedField<unsigned int> *del_list; // [rsp+40h] [rbp-D0h]
  google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+48h] [rbp-C8h]
  google::protobuf::RepeatedField<unsigned int>::iterator __for_end_1; // [rsp+50h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+58h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::iterator __for_end; // [rsp+60h] [rbp-B0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  char v21[160]; // [rsp+70h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 id:1077 48 4 14 config_id:1064 64 24 16 del_id_list:1070";
  *(_QWORD *)(v3 + 16) = BlockDataMgr::procDelMonsterList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = config_id;
  del_list = proto::GroupBin::mutable_del_monster_list(mutable_group_bin);
  if ( !is_add )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    __for_range = del_list;
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(del_list);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(del_list);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      *(_DWORD *)(v3 + 32) = *__for_begin;
      if ( *(_DWORD *)(v3 + 32) != *(_DWORD *)(v3 + 48) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 64),
          (const std::vector<unsigned int>::value_type *)(v3 + 32));
      ++__for_begin;
    }
    google::protobuf::RepeatedField<unsigned int>::Clear(del_list);
    __for_range_0 = (std::vector<unsigned int> *)(v3 + 64);
    __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v3 + 32) = *v7;
      google::protobuf::RepeatedField<unsigned int>::Add(del_list, (const unsigned int *)(v3 + 32));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  }
  else
  {
    has = 0;
    __for_range_1 = del_list;
    __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(del_list);
    __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(del_list);
    while ( __for_begin_1 != __for_end_1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin_1);
      }
      if ( *__for_begin_1 == *(_DWORD *)(v3 + 48) )
      {
        has = 1;
        break;
      }
      ++__for_begin_1;
    }
    if ( !has )
      google::protobuf::RepeatedField<unsigned int>::Add(del_list, (const unsigned int *)(v3 + 48));
  }
  result = 0LL;
  if ( v21 == (char *)v3 )
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

// Line 1103: range 0000000017994A62-0000000017994D1C
__int64 __fastcall BlockDataMgr::setGadgetState(
        proto::GroupBin *mutable_group_bin,
        uint32_t group_id,
        uint32_t config_id,
        uint32_t state,
        bool is_create)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  __int64 result; // rax
  unsigned int old_state; // [rsp+24h] [rbp-9Ch]
  google::protobuf::Map<unsigned int,proto::GroupGadgetBin> *gadget_map; // [rsp+28h] [rbp-98h]
  proto::GroupGadgetBin *gadget_0; // [rsp+30h] [rbp-90h]
  proto::GroupGadgetBin *gadget; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v5 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 4 14 config_id:1102";
  *(_QWORD *)(v5 + 16) = BlockDataMgr::setGadgetState;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116348;
  *(_DWORD *)(v5 + 32) = config_id;
  gadget_map = proto::GroupBin::mutable_gadget_map(mutable_group_bin);
  if ( google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::count(
         gadget_map,
         (const google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::key_type *)(v5 + 32)) )
  {
    gadget_0 = google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::operator[](
                 gadget_map,
                 (const google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::key_type *)(v5 + 32));
    old_state = proto::GroupGadgetBin::gadget_state(gadget_0);
    proto::GroupGadgetBin::set_gadget_state(gadget_0, state);
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "setGadgetState",
      1119);
    common::milog::MiLogStream::operator()(
      &v16,
      "group %u set gadget config %u state from %u to %u.",
      group_id,
      *(unsigned int *)(v5 + 32),
      old_state,
      state);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else if ( is_create )
  {
    gadget = google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::operator[](
               gadget_map,
               (const google::protobuf::Map<unsigned int,proto::GroupGadgetBin>::key_type *)(v5 + 32));
    proto::GroupGadgetBin::set_gadget_state(gadget, state);
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/block_data.cpp",
      "setGadgetState",
      1111);
    common::milog::MiLogStream::operator()(
      &v16,
      "group %u create new gadget config %u and set state to %u",
      group_id,
      *(unsigned int *)(v5 + 32),
      state);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  result = 0LL;
  if ( v17 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1125: range 0000000017994D1E-000000001799540A
__int64 __fastcall BlockDataMgr::procTrigger(
        proto::GroupBin *mutable_group_bin,
        uint32_t group_id,
        uint32_t uid,
        const std::string *trigger_name,
        uint32_t trigger_count,
        bool is_del)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  _DWORD *v8; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  proto::GroupTriggerBin *v19; // rax
  int v20; // eax
  google::protobuf::uint32 v21; // r14d
  const char *v22; // rax
  const char *v23; // rax
  bool is_find; // [rsp+23h] [rbp-10Dh]
  int target_index; // [rsp+24h] [rbp-10Ch]
  int32_t i; // [rsp+28h] [rbp-108h]
  google::protobuf::uint32 trigger_config_id; // [rsp+2Ch] [rbp-104h]
  google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const GroupScriptConfig *group_config_ptr; // [rsp+40h] [rbp-F0h]
  const TriggerScriptConfig *trigger_script_config_ptr; // [rsp+48h] [rbp-E8h]
  google::protobuf::RepeatedPtrField<proto::GroupTriggerBin> *trigger_list; // [rsp+50h] [rbp-E0h]
  google::protobuf::RepeatedPtrField<proto::GroupTriggerBin> *__for_range; // [rsp+58h] [rbp-D8h]
  proto::GroupTriggerBin *trigger_bin; // [rsp+60h] [rbp-D0h]
  proto::GroupTriggerBin *new_trigger_bin; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v40; // [rsp+70h] [rbp-C0h] BYREF
  common::milog::MiLogStream v41; // [rsp+80h] [rbp-B0h] BYREF
  char v42[144]; // [rsp+A0h] [rbp-90h] BYREF

  v6 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(96LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "2 48 4 13 group_id:1124 64 4 8 uid:1124";
  *(_QWORD *)(v6 + 16) = BlockDataMgr::procTrigger;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -202116348;
  *(_DWORD *)(v6 + 48) = group_id;
  *(_DWORD *)(v6 + 64) = uid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
  group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v9->design_config.lua_config_mgr, *(_DWORD *)(v6 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v40);
  if ( group_config_ptr )
  {
    trigger_script_config_ptr = GroupScriptConfig::findTriggerConfig(group_config_ptr, trigger_name);
    if ( trigger_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trigger_script_config_ptr->config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&trigger_script_config_ptr->config_id);
      }
      trigger_config_id = trigger_script_config_ptr->config_id;
      trigger_list = proto::GroupBin::mutable_trigger_list(mutable_group_bin);
      if ( is_del )
      {
        target_index = -1;
        for ( i = 0; i < google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::size(trigger_list); ++i )
        {
          v19 = google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::operator[](trigger_list, i);
          if ( trigger_config_id == proto::GroupTriggerBin::config_id(v19) )
          {
            target_index = i;
            break;
          }
        }
        if ( target_index >= 0 )
        {
          v20 = google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::size(trigger_list);
          google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::SwapElements(trigger_list, target_index, v20 - 1);
          google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::RemoveLast(trigger_list);
        }
      }
      else
      {
        is_find = 0;
        __for_range = trigger_list;
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::begin(trigger_list).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::end(trigger_list).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::GroupTriggerBin>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          trigger_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GroupTriggerBin>::operator*(&__for_begin);
          if ( trigger_config_id == proto::GroupTriggerBin::config_id(trigger_bin) )
          {
            is_find = 1;
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/block_data.cpp",
              "procTrigger",
              1165);
            v21 = proto::GroupTriggerBin::trigger_count(trigger_bin);
            v22 = (const char *)std::string::c_str(trigger_name);
            common::milog::MiLogStream::operator()(
              &v41,
              "group %u trigger %s set count %u ==> %u.",
              *(unsigned int *)(v6 + 48),
              v22,
              v21,
              trigger_count);
            common::milog::MiLogStream::~MiLogStream(&v41);
            proto::GroupTriggerBin::set_trigger_count(trigger_bin, trigger_count);
            break;
          }
          google::protobuf::internal::RepeatedPtrIterator<proto::GroupTriggerBin>::operator++(&__for_begin);
        }
        if ( !is_find )
        {
          new_trigger_bin = google::protobuf::RepeatedPtrField<proto::GroupTriggerBin>::Add(trigger_list);
          proto::GroupTriggerBin::set_config_id(new_trigger_bin, trigger_config_id);
          proto::GroupTriggerBin::set_trigger_count(new_trigger_bin, trigger_count);
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/block_data.cpp",
            "procTrigger",
            1175);
          v23 = (const char *)std::string::c_str(trigger_name);
          common::milog::MiLogStream::operator()(
            &v41,
            "group %u new trigger %s count %u.",
            *(unsigned int *)(v6 + 48),
            v23,
            trigger_count);
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
      }
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/block_data.cpp",
        "procTrigger",
        1135);
      v14 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v41,
              (const char (*)[29])"findTriggerConfig group_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v6 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])", trigger:");
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, trigger_name);
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" fails, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v6 + 64));
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "procTrigger",
      1129);
    v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v41,
            (const char (*)[33])"findGroupScriptConfig group_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" fails, uid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v6 + 64));
    common::milog::MiLogStream::~MiLogStream(&v41);
    result = 0xFFFFFFFFLL;
  }
  if ( v42 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1182: range 000000001799540C-00000000179959DB
__int64 __fastcall BlockDataMgr::procVariable(
        proto::GroupBin *mutable_group_bin,
        uint32_t group_id,
        const std::string *var_name,
        unsigned int var_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::string,VariableScriptConfig>,false,true>::pointer v13; // rax
  const char *v14; // rax
  const char *v15; // rax
  uint32_t config_id; // [rsp+28h] [rbp-E8h]
  unsigned int old_val; // [rsp+2Ch] [rbp-E4h]
  google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-D0h]
  google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin> *__for_range; // [rsp+48h] [rbp-C8h]
  proto::GroupVariableConfigIdBin *variable_bin; // [rsp+50h] [rbp-C0h]
  proto::GroupVariableConfigIdBin *v25; // [rsp+58h] [rbp-B8h]
  std::shared_ptr<Config> v26; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+90h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 group_id:1181 64 8 7 it:1189";
  *(_QWORD *)(v4 + 16) = BlockDataMgr::procVariable;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v7->design_config.lua_config_mgr, *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( group_script_config_ptr )
  {
    *(std::unordered_map<std::string,VariableScriptConfig>::const_iterator *)(v4 + 64) = std::unordered_map<std::string,VariableScriptConfig>::find(
                                                                                           &group_script_config_ptr->variable_map,
                                                                                           var_name);
    __for_end.it_ = (void *const *)std::unordered_map<std::string,VariableScriptConfig>::end(&group_script_config_ptr->variable_map)._M_cur;
    if ( std::__detail::operator==<std::pair<std::string const,VariableScriptConfig>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)(v4 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,VariableScriptConfig>,true> *)&__for_end) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/block_data.cpp",
        "procVariable",
        1192);
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v27,
              (const char (*)[40])"cannot find variable config, group_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", var_name: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, var_name);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v13 = std::__detail::_Node_const_iterator<std::pair<std::string const,VariableScriptConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,VariableScriptConfig>,false,true> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) <= 3 )
      {
        v13 = (std::__detail::_Node_const_iterator<std::pair<const std::string,VariableScriptConfig>,false,true>::pointer)__asan_report_load4(&v13->second);
      }
      config_id = v13->second.config_id;
      __for_range = proto::GroupBin::mutable_variable_config_id_bin_list(mutable_group_bin);
      __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::begin(__for_range).it_;
      __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GroupVariableConfigIdBin>::end(__for_range).it_;
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::GroupVariableConfigIdBin>::operator!=(
                &__for_begin,
                &__for_end) )
      {
        v25 = google::protobuf::internal::RepeatedPtrIterator<proto::GroupVariableConfigIdBin>::operator*(&__for_begin);
        if ( config_id == proto::GroupVariableConfigIdBin::config_id(v25) )
        {
          old_val = proto::GroupVariableConfigIdBin::value(v25);
          proto::GroupVariableConfigIdBin::set_value(v25, var_value);
          common::milog::MiLogStream::create(
            &v27,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/block_data.cpp",
            "procVariable",
            1203);
          v14 = (const char *)std::string::c_str(var_name);
          common::milog::MiLogStream::operator()(
            &v27,
            "group %u var %s set val %d ==> %d",
            *(unsigned int *)(v4 + 48),
            v14,
            old_val,
            var_value);
          common::milog::MiLogStream::~MiLogStream(&v27);
          result = 0LL;
          goto LABEL_16;
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::GroupVariableConfigIdBin>::operator++(&__for_begin);
      }
      variable_bin = proto::GroupBin::add_variable_config_id_bin_list(mutable_group_bin);
      proto::GroupVariableConfigIdBin::set_config_id(variable_bin, config_id);
      proto::GroupVariableConfigIdBin::set_value(variable_bin, var_value);
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/block_data.cpp",
        "procVariable",
        1211);
      v15 = (const char *)std::string::c_str(var_name);
      common::milog::MiLogStream::operator()(
        &v27,
        "group %u var %s new create val %d",
        *(unsigned int *)(v4 + 48),
        v15,
        var_value);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/block_data.cpp",
      "procVariable",
      1186);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v27,
           (const char (*)[41])"cannot findGroupScriptConfig, group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
LABEL_16:
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

// Line 1216: range 00000000179959DC-0000000017995A94
int32_t __cdecl BlockDataMgr::setTargetSuite(
        proto::GroupBin *mutable_group_bin,
        uint32_t group_id,
        uint32_t target_suite)
{
  unsigned int old_suite; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  old_suite = proto::GroupBin::target_suite_index(mutable_group_bin);
  proto::GroupBin::set_target_suite_index(mutable_group_bin, target_suite);
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/block_data.cpp",
    "setTargetSuite",
    1219);
  common::milog::MiLogStream::operator()(&v6, off_2625AE60, group_id, old_suite, target_suite);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return 0;
};
