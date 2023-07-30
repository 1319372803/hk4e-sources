// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/exhibition/player_exhibition_comp.cpp

// Line 26: range 000000001661A8A6-000000001661AB33
__int64 __fastcall ExhibitionTemporaryData::addTemporaryReplaceableDataByLuaTrigger(
        ExhibitionTemporaryData *const this,
        uint32_t uid,
        const std::string *key,
        uint32_t add_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>> *v9; // rax
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::mapped_type *v10; // rax
  unsigned int *v11; // rdx
  SelectType v12; // r14d
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>> *v13; // rax
  const std::string *v14; // rsi
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rax
  SelectType *v16; // rdx
  char v17; // cl
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 6 uid:25";
  *(_QWORD *)(v4 + 16) = ExhibitionTemporaryData::addTemporaryReplaceableDataByLuaTrigger;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  if ( std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::size(&this->player_exhibition_data_map_) <= 0x3E7 )
  {
    v9 = std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::operator[](
           &this->player_exhibition_data_map_,
           (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::key_type *)(v4 + 32));
    v10 = std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::operator[](v9, key);
    v11 = (unsigned int *)v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    v12 = SAFE_ADD<unsigned int,unsigned int>(*v11, add_value);
    v13 = std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::operator[](
            &this->player_exhibition_data_map_,
            (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::key_type *)(v4 + 32));
    v14 = key;
    v15 = std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::operator[](v13, key);
    v16 = (SelectType *)v15;
    v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
    {
      LOBYTE(v14) = v17 != 0;
      __asan_report_store4(v15, v14, v15);
    }
    *v16 = v12;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "addTemporaryReplaceableDataByLuaTrigger",
      29);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v21,
           (const char (*)[47])"player_exhibition_data_map_'s size is too big:");
    val = std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::size(&this->player_exhibition_data_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  if ( v22 == (char *)v4 )
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

// Line 37: range 000000001661AB34-000000001661ADC5
__int64 __fastcall ExhibitionTemporaryData::addTemporaryAccumulableDataByLuaTrigger(
        ExhibitionTemporaryData *const this,
        uint32_t uid,
        const std::string *key,
        uint32_t add_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>> *v9; // rax
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::mapped_type *v10; // rdx
  unsigned int *p_second; // rax
  SelectType v12; // r14d
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>> *v13; // rax
  const std::string *v14; // rsi
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rdx
  char v16; // cl
  unsigned __int64 val; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 6 uid:36";
  *(_QWORD *)(v4 + 16) = ExhibitionTemporaryData::addTemporaryAccumulableDataByLuaTrigger;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = uid;
  if ( std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::size(&this->player_exhibition_data_map_) <= 0x3E7 )
  {
    v9 = std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::operator[](
           &this->player_exhibition_data_map_,
           (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::key_type *)(v4 + 32));
    v10 = std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::operator[](v9, key);
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    v12 = SAFE_ADD<unsigned int,unsigned int>(v10->second, add_value);
    v13 = std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::operator[](
            &this->player_exhibition_data_map_,
            (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::key_type *)(v4 + 32));
    v14 = key;
    v15 = std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::operator[](v13, key);
    v16 = *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)((((_BYTE)v15 + 4) & 7) + 3) >= v16 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(&v15->second, v14, v15);
    }
    v15->second = v12;
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "addTemporaryAccumulableDataByLuaTrigger",
      40);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v20,
           (const char (*)[47])"player_exhibition_data_map_'s size is too big:");
    val = std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::size(&this->player_exhibition_data_map_);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  if ( v21 == (char *)v4 )
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

// Line 48: range 000000001661ADC6-000000001661B2E4
int32_t __cdecl ExhibitionTemporaryData::flushTemporaryData(
        ExhibitionTemporaryData *const this,
        Scene *scene,
        std::set<unsigned int> *player_uid_set)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Player *v16; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  const ExhibitionExcelConfigMgr *exhibition_config_mgr; // [rsp+40h] [rbp-F0h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  ExhibitionTemporaryData::ExhibitionDataMap *exhibition_data_map_ptr; // [rsp+50h] [rbp-E0h]
  std::unordered_map<std::string,std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+58h] [rbp-D8h]
  const std::pair<const std::string,std::pair<unsigned int,unsigned int> > *v28; // [rsp+60h] [rbp-D0h]
  std::tuple_element<0,const std::pair<const std::string,std::pair<unsigned int,unsigned int> > >::type *lua_trigger_key; // [rsp+68h] [rbp-C8h]
  std::tuple_element<1,const std::pair<const std::string,std::pair<unsigned int,unsigned int> > >::type *add_value; // [rsp+70h] [rbp-C0h]
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+78h] [rbp-B8h]
  common::milog::MiLogStream v32; // [rsp+80h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 uid:50 64 16 13 player_ptr:57";
  *(_QWORD *)(v3 + 16) = ExhibitionTemporaryData::flushTemporaryData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.exhibition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  __for_range = player_uid_set;
  __for_begin._M_node = std::set<unsigned int>::begin(player_uid_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(player_uid_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    exhibition_data_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>>(
                                &this->player_exhibition_data_map_,
                                (const std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 48));
    if ( exhibition_data_map_ptr )
    {
      Scene::findPlayer((const Scene *const)(v3 + 64), (uint32_t)scene);
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/exhibition/player_exhibition_comp.cpp",
          "flushTemporaryData",
          60);
        v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               &v32,
               (const char (*)[22])"findPlayer fail, uid:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" scene:");
        common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v10, scene);
        common::milog::MiLogStream::~MiLogStream(&v32);
      }
      else
      {
        __for_range_0 = exhibition_data_map_ptr;
        __for_begin_0._M_cur = std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::begin(exhibition_data_map_ptr)._M_cur;
        __for_end_0._M_cur = std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<std::string const,std::pair<unsigned int,unsigned int>>,true>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v28 = std::__detail::_Node_iterator<std::pair<std::string const,std::pair<unsigned int,unsigned int>>,false,true>::operator*(&__for_begin_0);
          lua_trigger_key = std::get<0ul,std::string const,std::pair<unsigned int,unsigned int>>(v28);
          add_value = (std::tuple_element<1,const std::pair<const std::string,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,std::string const,std::pair<unsigned int,unsigned int>>(v28);
          exhibition_set_ptr = ExhibitionExcelConfigMgr::getLuaKeyExhibitionSet(exhibition_config_mgr, lua_trigger_key);
          if ( exhibition_set_ptr )
          {
            v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            ExhibitionComp = Player::getExhibitionComp(v16);
            PlayerExhibitionComp::addValueByTemporaryData(ExhibitionComp, exhibition_set_ptr, add_value);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/exhibition/player_exhibition_comp.cpp",
              "flushTemporaryData",
              68);
            v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                    &v32,
                    (const char (*)[49])"getLuaKeyExhibitionSet nullptr, lua_trigger_key:");
            v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, lua_trigger_key);
            v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v12,
                    (const char (*)[12])" add_value:");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v13, add_value);
            v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v32);
          }
          std::__detail::_Node_iterator<std::pair<std::string const,std::pair<unsigned int,unsigned int>>,false,true>::operator++(&__for_begin_0);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,std::unordered_map<std::string,std::pair<unsigned int,unsigned int>>>::clear(&this->player_exhibition_data_map_);
  result = 0;
  if ( v33 == (char *)v3 )
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

// Line 79: range 000000001661B2E6-000000001661B470
int32_t __cdecl PlayerExhibitionComp::fromBin(
        PlayerExhibitionComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rcx
  std::pair<unsigned int,unsigned int> *v3; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v4; // rax
  common::milog::MiLogStream *v5; // rbx
  unsigned int __x; // [rsp+14h] [rbp-6Ch] BYREF
  unsigned int __y; // [rsp+18h] [rbp-68h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerExhibitionBin>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerExhibitionBin>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const proto::PlayerExhibitionCompBin *proto_comp; // [rsp+30h] [rbp-50h]
  const google::protobuf::RepeatedPtrField<proto::PlayerExhibitionBin> *__for_range; // [rsp+38h] [rbp-48h]
  const proto::PlayerExhibitionBin *single_exhibition_bin; // [rsp+40h] [rbp-40h]
  std::pair<unsigned int,unsigned int> v15; // [rsp+48h] [rbp-38h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::exhibition_bin(player_data_bin);
  __for_range = proto::PlayerExhibitionCompBin::exhibition_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerExhibitionBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerExhibitionBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerExhibitionBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    single_exhibition_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerExhibitionBin const>::operator*(&__for_begin);
    __y = proto::PlayerExhibitionBin::accumulable_value(single_exhibition_bin);
    __x = proto::PlayerExhibitionBin::replaceable_value(single_exhibition_bin);
    v15 = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
    val = proto::PlayerExhibitionBin::id(single_exhibition_bin);
    v4 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int,std::pair<unsigned int,unsigned int>>(
           &this->exhibition_data_map_,
           &val,
           &v15,
           v2,
           v3);
    if ( !v4.second )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "fromBin",
        86);
      v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v16,
             (const char (*)[29])"duplicate exhibition id, id:");
      val = proto::PlayerExhibitionBin::id(single_exhibition_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerExhibitionBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 93: range 000000001661B472-000000001661B616
int32_t __cdecl PlayerExhibitionComp::toBin(PlayerExhibitionComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::PlayerExhibitionCompBin *proto_comp; // [rsp+20h] [rbp-30h]
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *pair; // [rsp+40h] [rbp-10h]
  proto::PlayerExhibitionBin *single_exhibition_bin; // [rsp+48h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_exhibition_bin(player_data_bin);
  __for_range = &this->exhibition_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(&this->exhibition_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(&this->exhibition_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v7);
    pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v7);
    single_exhibition_bin = proto::PlayerExhibitionCompBin::add_exhibition_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    proto::PlayerExhibitionBin::set_id(single_exhibition_bin, *id);
    if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(pair);
    }
    proto::PlayerExhibitionBin::set_replaceable_value(single_exhibition_bin, pair->first);
    if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&pair->second);
    }
    proto::PlayerExhibitionBin::set_accumulable_value(single_exhibition_bin, pair->second);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 107: range 000000001661B618-000000001661B9F7
__int64 __fastcall PlayerExhibitionComp::addReplaceableDataByLuaTrigger(
        PlayerExhibitionComp *const this,
        uint32_t group_id,
        const std::string *key,
        uint32_t add_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // r15
  uint32_t v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 group_id:106";
  *(_QWORD *)(v4 + 16) = PlayerExhibitionComp::addReplaceableDataByLuaTrigger;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.exhibition_config_mgr;
  v8 = *(_DWORD *)(v4 + 32);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  LOBYTE(v8) = ExhibitionExcelConfigMgr::checkLuaWriteExhibition(
                 p_exhibition_config_mgr,
                 &v9->design_config.txt_config_mgr,
                 key,
                 v8) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( (_BYTE)v8 )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "addReplaceableDataByLuaTrigger",
      110);
    v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v23,
            (const char (*)[45])"canGroupWriteExhibitionKey failed, group_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", key:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, key);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    exhibition_set_ptr = ExhibitionExcelConfigMgr::getLuaKeyExhibitionSet(
                           &v14->design_config.txt_config_mgr.exhibition_config_mgr,
                           key);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( exhibition_set_ptr )
    {
      PlayerExhibitionComp::internalAddReplaceableData(this, exhibition_set_ptr, add_value);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "addReplaceableDataByLuaTrigger",
        116);
      v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v23,
              (const char (*)[42])"getLuaKeyExhibitionSet nullptr, group_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, key);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v24 == (char *)v4 )
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

// Line 124: range 000000001661B9F8-000000001661BDD7
__int64 __fastcall PlayerExhibitionComp::addAccumulableDataByLuaTrigger(
        PlayerExhibitionComp *const this,
        uint32_t group_id,
        const std::string *key,
        uint32_t add_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // r15
  uint32_t v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 group_id:123";
  *(_QWORD *)(v4 + 16) = PlayerExhibitionComp::addAccumulableDataByLuaTrigger;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.exhibition_config_mgr;
  v8 = *(_DWORD *)(v4 + 32);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  LOBYTE(v8) = ExhibitionExcelConfigMgr::checkLuaWriteExhibition(
                 p_exhibition_config_mgr,
                 &v9->design_config.txt_config_mgr,
                 key,
                 v8) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( (_BYTE)v8 )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "addAccumulableDataByLuaTrigger",
      127);
    v10 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v23,
            (const char (*)[45])"canGroupWriteExhibitionKey failed, group_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", key:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, key);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    exhibition_set_ptr = ExhibitionExcelConfigMgr::getLuaKeyExhibitionSet(
                           &v14->design_config.txt_config_mgr.exhibition_config_mgr,
                           key);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( exhibition_set_ptr )
    {
      PlayerExhibitionComp::internalAddAccumulableData(this, exhibition_set_ptr, add_value);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "addAccumulableDataByLuaTrigger",
        133);
      v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v23,
              (const char (*)[42])"getLuaKeyExhibitionSet nullptr, group_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, key);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v24 == (char *)v4 )
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

// Line 142: range 000000001661BDD8-000000001661BF0C
int32_t __cdecl PlayerExhibitionComp::addReplaceableDataByServer(
        PlayerExhibitionComp *const this,
        data::ExhibitionServerTriggerType trigger_type,
        uint32_t add_value)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  char *val; // [rsp+10h] [rbp-50h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSet(
                         &v3->design_config.txt_config_mgr.exhibition_config_mgr,
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( exhibition_set_ptr )
  {
    PlayerExhibitionComp::internalAddReplaceableData(this, exhibition_set_ptr, add_value);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "addReplaceableDataByServer",
      146);
    v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v10,
           (const char (*)[49])"getServerKeyExhibitionSet nullptr, trigger_type:");
    val = (char *)data::enumValToStr(trigger_type);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v4, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 154: range 000000001661BF0E-000000001661C042
int32_t __cdecl PlayerExhibitionComp::addAccumulableDataByServer(
        PlayerExhibitionComp *const this,
        data::ExhibitionServerTriggerType trigger_type,
        uint32_t add_value)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  char *val; // [rsp+10h] [rbp-50h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSet(
                         &v3->design_config.txt_config_mgr.exhibition_config_mgr,
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( exhibition_set_ptr )
  {
    PlayerExhibitionComp::internalAddAccumulableData(this, exhibition_set_ptr, add_value);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "addAccumulableDataByServer",
      158);
    v4 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v10,
           (const char (*)[49])"getServerKeyExhibitionSet nullptr, trigger_type:");
    val = (char *)data::enumValToStr(trigger_type);
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v4, (const char *const *)&val);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 167: range 000000001661C044-000000001661C52B
__int64 __fastcall PlayerExhibitionComp::clearReplaceableDataByLuaTrigger(
        PlayerExhibitionComp *const this,
        uint32_t group_id,
        const std::string *key)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // r15
  uint32_t v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r13
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-90h] BYREF
  char v28[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 group_id:166";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::clearReplaceableDataByLuaTrigger;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.exhibition_config_mgr;
  v7 = *(_DWORD *)(v3 + 32);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  LOBYTE(v7) = ExhibitionExcelConfigMgr::checkLuaWriteExhibition(
                 p_exhibition_config_mgr,
                 &v8->design_config.txt_config_mgr,
                 key,
                 v7) != 0;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( (_BYTE)v7 )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "clearReplaceableDataByLuaTrigger",
      170);
    v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v27,
           (const char (*)[45])"canGroupWriteExhibitionKey failed, group_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", key:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, key);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    exhibition_set_ptr = ExhibitionExcelConfigMgr::getLuaKeyExhibitionSet(
                           &v13->design_config.txt_config_mgr.exhibition_config_mgr,
                           key);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( exhibition_set_ptr )
    {
      PlayerExhibitionComp::internalClearReplaceableData(this, exhibition_set_ptr);
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "clearReplaceableDataByLuaTrigger",
        180);
      v17 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v27,
              (const char (*)[44])"clearReplaceableDataByLuaTrigger succ, key:");
      v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, key);
      v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      v21 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v20,
              (const char (*)[18])", exhibition_set:");
      common::milog::MiLogStream::operator<<<unsigned int>(v21, exhibition_set_ptr);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "clearReplaceableDataByLuaTrigger",
        176);
      v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v27,
              (const char (*)[42])"getLuaKeyExhibitionSet nullptr, group_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, key);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v28 == (char *)v3 )
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

// Line 185: range 000000001661C52C-000000001661C7A3
int32_t __cdecl PlayerExhibitionComp::addMonsterDamageReplaceableDataByServer(
        PlayerExhibitionComp *const this,
        data::ExhibitionServerTriggerType trigger_type,
        Monster *monster,
        uint32_t add_value)
{
  ExhibitionExcelConfigMgr *v4; // rbx
  uint32_t ConfigId; // r12d
  uint32_t v6; // eax
  ExhibitionExcelConfigMgr *v7; // rbx
  uint32_t MonsterId; // eax
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rbx
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v11; // rbx
  char *val; // [rsp+20h] [rbp-50h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  exhibition_set_ptr = 0LL;
  if ( trigger_type == EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUPID )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.exhibition_config_mgr;
    GroupId = Entity::getGroupId((const Entity *const)monster);
    exhibition_set_ptr = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupId(
                           p_exhibition_config_mgr,
                           GroupId);
    std::shared_ptr<Config>::~shared_ptr(&v17);
  }
  else
  {
    if ( trigger_type > EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUPID )
      goto LABEL_9;
    if ( trigger_type == EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUP_CONFIGID )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v4 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.exhibition_config_mgr;
      ConfigId = Entity::getConfigId((const Entity *const)monster);
      v6 = Entity::getGroupId((const Entity *const)monster);
      exhibition_set_ptr = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupConfigId(v4, v6, ConfigId);
      std::shared_ptr<Config>::~shared_ptr(&v17);
      goto LABEL_10;
    }
    if ( trigger_type == EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_MONSTERID )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v7 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.exhibition_config_mgr;
      MonsterId = Monster::getMonsterId(monster);
      exhibition_set_ptr = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByMonsterId(v7, MonsterId);
      std::shared_ptr<Config>::~shared_ptr(&v17);
    }
    else
    {
LABEL_9:
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "addMonsterDamageReplaceableDataByServer",
        206);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v18,
              (const char (*)[22])"invalid trigger_type:");
      val = (char *)data::enumValToStr(trigger_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
LABEL_10:
  if ( !exhibition_set_ptr )
    return -1;
  PlayerExhibitionComp::internalAddReplaceableData(this, exhibition_set_ptr, add_value);
  return 0;
};

// Line 219: range 000000001661C7A4-000000001661CA1B
int32_t __cdecl PlayerExhibitionComp::addMonsterDamageAccumulableDataByServer(
        PlayerExhibitionComp *const this,
        data::ExhibitionServerTriggerType trigger_type,
        Monster *monster,
        uint32_t add_value)
{
  ExhibitionExcelConfigMgr *v4; // rbx
  uint32_t ConfigId; // r12d
  uint32_t v6; // eax
  ExhibitionExcelConfigMgr *v7; // rbx
  uint32_t MonsterId; // eax
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rbx
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v11; // rbx
  char *val; // [rsp+20h] [rbp-50h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-30h] BYREF

  exhibition_set_ptr = 0LL;
  if ( trigger_type == EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUPID )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.exhibition_config_mgr;
    GroupId = Entity::getGroupId((const Entity *const)monster);
    exhibition_set_ptr = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupId(
                           p_exhibition_config_mgr,
                           GroupId);
    std::shared_ptr<Config>::~shared_ptr(&v17);
  }
  else
  {
    if ( trigger_type > EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUPID )
      goto LABEL_9;
    if ( trigger_type == EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUP_CONFIGID )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v4 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.exhibition_config_mgr;
      ConfigId = Entity::getConfigId((const Entity *const)monster);
      v6 = Entity::getGroupId((const Entity *const)monster);
      exhibition_set_ptr = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupConfigId(v4, v6, ConfigId);
      std::shared_ptr<Config>::~shared_ptr(&v17);
      goto LABEL_10;
    }
    if ( trigger_type == EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_MONSTERID )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v7 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.exhibition_config_mgr;
      MonsterId = Monster::getMonsterId(monster);
      exhibition_set_ptr = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByMonsterId(v7, MonsterId);
      std::shared_ptr<Config>::~shared_ptr(&v17);
    }
    else
    {
LABEL_9:
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "addMonsterDamageAccumulableDataByServer",
        240);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v18,
              (const char (*)[22])"invalid trigger_type:");
      val = (char *)data::enumValToStr(trigger_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
  }
LABEL_10:
  if ( !exhibition_set_ptr )
    return -1;
  PlayerExhibitionComp::internalAddAccumulableData(this, exhibition_set_ptr, add_value);
  return 0;
};

// Line 253: range 000000001661CA1C-000000001661CEE6
__int64 __fastcall PlayerExhibitionComp::clearSeriesExhibitionReplaceableData(
        PlayerExhibitionComp *const this,
        uint32_t series_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  char *v12; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const std::set<unsigned int> *exhibition_set; // [rsp+20h] [rbp-D0h]
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+40h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 17 exhibition_id:261 48 4 13 series_id:252 64 8 8 iter:254";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::clearSeriesExhibitionReplaceableData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = series_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &v5->design_config.txt_config_mgr.exhibition_config_mgr.series_exhibition_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v6->design_config.txt_config_mgr.exhibition_config_mgr.series_exhibition_map)._M_cur;
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "clearSeriesExhibitionReplaceableData",
      257);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v26,
           (const char (*)[46])"find series exhibition_set failed, series_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    exhibition_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
    __for_range = exhibition_set;
    __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v2 + 32) = *v11;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
             &this->exhibition_data_map_,
             (const unsigned int *)(v2 + 32)) )
      {
        v12 = (char *)(v2 + 32);
        v13 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                &this->exhibition_data_map_,
                (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
        v14 = v13;
        v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
        if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
        {
          LOBYTE(v12) = v15 != 0;
          __asan_report_store4(v13, v12, v13);
        }
        *v14 = 0;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "clearSeriesExhibitionReplaceableData",
      268);
    v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v26,
            (const char (*)[54])"clearSeriesExhibitionReplaceableData succ, series_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
    v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
    v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v19, (const char (*)[18])", exhibition_set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v20, exhibition_set);
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 0LL;
  }
  if ( v27 == (char *)v2 )
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

// Line 273: range 000000001661CEE8-000000001661D372
__int64 __fastcall PlayerExhibitionComp::clearSeriesExhibitionData(
        PlayerExhibitionComp *const this,
        uint32_t series_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const std::set<unsigned int> *exhibition_set; // [rsp+20h] [rbp-D0h]
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 17 exhibition_id:281 48 4 13 series_id:272 64 8 8 iter:274";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::clearSeriesExhibitionData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = series_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &v5->design_config.txt_config_mgr.exhibition_config_mgr.series_exhibition_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v6->design_config.txt_config_mgr.exhibition_config_mgr.series_exhibition_map)._M_cur;
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "clearSeriesExhibitionData",
      277);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v22,
           (const char (*)[46])"find series exhibition_set failed, series_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    exhibition_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
    __for_range = exhibition_set;
    __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v2 + 32) = *v11;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
             &this->exhibition_data_map_,
             (const unsigned int *)(v2 + 32)) )
      {
        std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::erase(
          &this->exhibition_data_map_,
          (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "clearSeriesExhibitionData",
      288);
    v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v22,
            (const char (*)[43])"clearSeriesExhibitionData succ, series_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
    v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])", exhibition_set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v16, exhibition_set);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0LL;
  }
  if ( v23 == (char *)v2 )
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

// Line 293: range 000000001661D374-000000001661D661
int32_t __cdecl PlayerExhibitionComp::clearExhibitionReplaceableData(
        PlayerExhibitionComp *const this,
        const std::vector<unsigned int> *exhibition_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  char *v7; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 exhibition_id:294";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::clearExhibitionReplaceableData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = exhibition_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(exhibition_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(exhibition_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
           &this->exhibition_data_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      v7 = (char *)(v2 + 32);
      v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
             &this->exhibition_data_map_,
             (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v8, v7, v8);
      }
      *v9 = 0;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/exhibition/player_exhibition_comp.cpp",
    "clearExhibitionReplaceableData",
    301);
  v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          &v19,
          (const char (*)[53])"clearExhibitionReplaceableData succ, exhibition_vec:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, exhibition_vec);
  v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v19);
  result = 0;
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

// Line 307: range 000000001661D662-000000001661DAB1
std::vector<ExhibitionScoreParam> *__fastcall PlayerExhibitionComp::getSettleScoreVec(
        std::vector<ExhibitionScoreParam> *retstr,
        PlayerExhibitionComp *const this,
        uint32_t series_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r13
  std::set<unsigned int>::iterator v11; // rax
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+30h] [rbp-F0h] BYREF
  const std::set<unsigned int> *score_set; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<unsigned int> score_id_vec; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 series_id:306 64 8 8 iter:308";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::getSettleScoreVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = series_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &v6->design_config.txt_config_mgr.exhibition_config_mgr.series_to_score_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v7->design_config.txt_config_mgr.exhibition_config_mgr.series_to_score_map)._M_cur;
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         &__y);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getSettleScoreVec",
      311);
    v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v19,
           (const char (*)[51])"series_to_score_map find series failed, series_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<ExhibitionScoreParam>::vector(retstr);
  }
  else
  {
    score_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64))->second;
    std::allocator<unsigned int>::allocator(&__a);
    M_node = std::set<unsigned int>::end(score_set)._M_node;
    v11._M_node = std::set<unsigned int>::begin(score_set)._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      &score_id_vec,
      v11,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      &__a);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    PlayerExhibitionComp::getSettleScoreVec(retstr, this, &score_id_vec);
    std::vector<unsigned int>::~vector(&score_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  if ( v20 == (char *)v3 )
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
  return retstr;
};

// Line 319: range 000000001661DAB2-000000001661DCD9
std::vector<ExhibitionScoreParam> *__cdecl PlayerExhibitionComp::getSettleScoreVec(
        std::vector<ExhibitionScoreParam> *retstr,
        PlayerExhibitionComp *const this,
        const std::vector<unsigned int> *score_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  ExhibitionScoreParam *v8; // rdx
  uint32_t score_id; // [rsp+24h] [rbp-7Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 12 9 param:325";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::getSettleScoreVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202177536;
  std::vector<ExhibitionScoreParam>::vector(retstr);
  __for_range = score_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(score_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(score_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    score_id = *v7;
    if ( PlayerExhibitionComp::isScoreCondSatisfy(this, *v7) )
    {
      *(_DWORD *)(v3 + 32) = 0;
      *(_DWORD *)(v3 + 36) = 0;
      *(_DWORD *)(v3 + 40) = 0;
      *(_DWORD *)(v3 + 32) = score_id;
      *(_DWORD *)(v3 + 36) = PlayerExhibitionComp::getScoreValue(this, score_id);
      *(_DWORD *)(v3 + 40) = PlayerExhibitionComp::getScoreParam(this, score_id);
      v8 = std::move<ExhibitionScoreParam &>((ExhibitionScoreParam *)(v3 + 32));
      std::vector<ExhibitionScoreParam>::emplace_back<ExhibitionScoreParam>(retstr, v8, v8);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 336: range 000000001661DCDA-000000001661E129
std::vector<ExhibitonCardParam> *__fastcall PlayerExhibitionComp::getSettleCardVec(
        std::vector<ExhibitonCardParam> *retstr,
        PlayerExhibitionComp *const this,
        uint32_t series_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r13
  std::set<unsigned int>::iterator v11; // rax
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-F1h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+30h] [rbp-F0h] BYREF
  const std::set<unsigned int> *card_set; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<unsigned int> card_id_vec; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 series_id:335 64 8 8 iter:337";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::getSettleCardVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = series_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &v6->design_config.txt_config_mgr.exhibition_config_mgr.series_to_card_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v7->design_config.txt_config_mgr.exhibition_config_mgr.series_to_card_map)._M_cur;
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         &__y);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getSettleCardVec",
      340);
    v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v19,
           (const char (*)[50])"series_to_card_map find series failed, series_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    retstr->_M_impl._M_start = 0LL;
    retstr->_M_impl._M_finish = 0LL;
    retstr->_M_impl._M_end_of_storage = 0LL;
    std::vector<ExhibitonCardParam>::vector(retstr);
  }
  else
  {
    card_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64))->second;
    std::allocator<unsigned int>::allocator(&__a);
    M_node = std::set<unsigned int>::end(card_set)._M_node;
    v11._M_node = std::set<unsigned int>::begin(card_set)._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      &card_id_vec,
      v11,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      &__a);
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 24LL);
    }
    PlayerExhibitionComp::getSettleCardVec(retstr, this, &card_id_vec);
    std::vector<unsigned int>::~vector(&card_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  if ( v20 == (char *)v3 )
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
  return retstr;
};

// Line 348: range 000000001661E12A-000000001661E32F
std::vector<ExhibitonCardParam> *__cdecl PlayerExhibitionComp::getSettleCardVec(
        std::vector<ExhibitonCardParam> *retstr,
        PlayerExhibitionComp *const this,
        const std::vector<unsigned int> *card_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  ExhibitonCardParam *v8; // rdx
  uint32_t card_id; // [rsp+24h] [rbp-7Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 9 param:354";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::getSettleCardVec;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  std::vector<ExhibitonCardParam>::vector(retstr);
  __for_range = card_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(card_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(card_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    card_id = *v7;
    if ( PlayerExhibitionComp::isCardCondSatisfy(this, *v7) )
    {
      *(_DWORD *)(v3 + 32) = 0;
      *(_DWORD *)(v3 + 36) = 0;
      *(_DWORD *)(v3 + 32) = card_id;
      *(_DWORD *)(v3 + 36) = PlayerExhibitionComp::getCardParamValue(this, card_id);
      v8 = std::move<ExhibitonCardParam &>((ExhibitonCardParam *)(v3 + 32));
      std::vector<ExhibitonCardParam>::emplace_back<ExhibitonCardParam>(retstr, v8, v8);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 364: range 000000001661E330-000000001661E584
_BOOL8 __fastcall PlayerExhibitionComp::isScoreCondSatisfy(PlayerExhibitionComp *const this, uint32_t score_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  const data::ExhibitionScoreExcelConfig *score_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 score_id:363";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::isScoreCondSatisfy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = score_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  score_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionScoreExcelConfig(
                       &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( score_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)score_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&score_config_ptr->display_id);
    }
    result = PlayerExhibitionComp::getDisplayValue(this, score_config_ptr->display_id) != 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "isScoreCondSatisfy",
      368);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v10,
           (const char (*)[49])"findExhibitionScoreExcelConfig failed, score_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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
  return result;
};

// Line 381: range 000000001661E586-000000001661EAB3
uint32_t __fastcall PlayerExhibitionComp::getScoreParam(PlayerExhibitionComp *const this, uint32_t score_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::vector<data::ExhibitionDisplayCondParam>::size_type display_param_order; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  std::vector<data::ExhibitionDisplayCondParam> *p_cond_param; // rcx
  const data::ExhibitionDisplayCondParam *v15; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-A8h] BYREF
  const data::ExhibitionScoreExcelConfig *score_config_ptr; // [rsp+20h] [rbp-A0h]
  const data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 score_id:380";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getScoreParam;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = score_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  score_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionScoreExcelConfig(
                       &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( score_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.exhibition_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)score_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_id >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&score_config_ptr->display_id);
    }
    display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(
                           p_exhibition_config_mgr,
                           score_config_ptr->display_id);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( display_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)score_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_param_order >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&score_config_ptr->display_param_order);
      }
      if ( score_config_ptr->display_param_order )
      {
        if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)score_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_param_order >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&score_config_ptr->display_param_order);
        }
        display_param_order = score_config_ptr->display_param_order;
        if ( display_param_order <= std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param) )
        {
          p_cond_param = &display_config_ptr->cond_param;
          if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)score_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->display_param_order >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&score_config_ptr->display_param_order);
          }
          v15 = std::vector<data::ExhibitionDisplayCondParam>::operator[](
                  p_cond_param,
                  score_config_ptr->display_param_order - 1);
          result = PlayerExhibitionComp::getDisplayCondParamValue(this, v15);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "getScoreParam",
            401);
          v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v20,
                  (const char (*)[21])"display_param_order:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  &score_config_ptr->display_param_order);
          v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v12,
                  (const char (*)[20])"> cond_param.size()");
          val = std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "getScoreParam",
        391);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v20,
             (const char (*)[53])"findExhibitionDisplayExcelConfig failed, display_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &score_config_ptr->display_id);
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getScoreParam",
      385);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v20,
           (const char (*)[49])"findExhibitionScoreExcelConfig failed, score_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0;
  }
  if ( v21 == (char *)v2 )
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

// Line 408: range 000000001661EAB4-000000001661EE7C
uint32_t __fastcall PlayerExhibitionComp::getScoreValue(PlayerExhibitionComp *const this, uint32_t score_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  data::ExhibitionScoreType score_type; // eax
  unsigned int score; // r14d
  unsigned int ScoreParam; // eax
  common::milog::MiLogStream *v11; // r13
  char *val; // [rsp+10h] [rbp-B0h] BYREF
  const data::ExhibitionScoreExcelConfig *score_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 score_id:407";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getScoreValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = score_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  score_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionScoreExcelConfig(
                       &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                       *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( score_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&score_config_ptr->score_type);
    }
    score_type = score_config_ptr->score_type;
    if ( score_type == EXHIBITION_SCORE_VALUE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)score_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->score >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&score_config_ptr->score);
      }
      result = score_config_ptr->score;
    }
    else if ( score_type == EXHIBITION_SCORE_DISPLAY_PARAM_FACTOR )
    {
      if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)score_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_ptr->score >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&score_config_ptr->score);
      }
      score = score_config_ptr->score;
      ScoreParam = PlayerExhibitionComp::getScoreParam(this, *(_DWORD *)(v2 + 32));
      result = SAFE_MULTIPLY<unsigned int,unsigned int>(ScoreParam, score);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "getScoreValue",
        426);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v15,
              (const char (*)[33])"unsupported ExhibitionScoreType:");
      if ( *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&score_config_ptr->score_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&score_config_ptr->score_type);
      }
      val = (char *)data::enumValToStr(score_config_ptr->score_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getScoreValue",
      412);
    v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v15,
           (const char (*)[49])"findExhibitionScoreExcelConfig failed, score_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0;
  }
  if ( v16 == (char *)v2 )
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

// Line 433: range 000000001661EE7E-000000001661F0D2
_BOOL8 __fastcall PlayerExhibitionComp::isCardCondSatisfy(PlayerExhibitionComp *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  const data::ExhibitionCardExcelConfig *card_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 card_id:432";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::isCardCondSatisfy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  card_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionCardExcelConfig(
                      &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( card_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&card_config_ptr->display_id);
    }
    result = PlayerExhibitionComp::getDisplayValue(this, card_config_ptr->display_id) != 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "isCardCondSatisfy",
      437);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v10,
           (const char (*)[47])"findExhibitionCardExcelConfig failed, card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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
  return result;
};

// Line 450: range 000000001661F0D4-000000001661F601
uint32_t __fastcall PlayerExhibitionComp::getCardParamValue(PlayerExhibitionComp *const this, uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::vector<data::ExhibitionDisplayCondParam>::size_type display_param_order; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r13
  std::vector<data::ExhibitionDisplayCondParam> *p_cond_param; // rcx
  const data::ExhibitionDisplayCondParam *v15; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-A8h] BYREF
  const data::ExhibitionCardExcelConfig *card_config_ptr; // [rsp+20h] [rbp-A0h]
  const data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-80h] BYREF
  char v21[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 card_id:449";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getCardParamValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = card_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  card_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionCardExcelConfig(
                      &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( card_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.exhibition_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&card_config_ptr->display_id);
    }
    display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(
                           p_exhibition_config_mgr,
                           card_config_ptr->display_id);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( display_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_param_order >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&card_config_ptr->display_param_order);
      }
      if ( card_config_ptr->display_param_order )
      {
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_param_order >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config_ptr->display_param_order);
        }
        display_param_order = card_config_ptr->display_param_order;
        if ( display_param_order <= std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param) )
        {
          p_cond_param = &display_config_ptr->cond_param;
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->display_param_order >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr->display_param_order);
          }
          v15 = std::vector<data::ExhibitionDisplayCondParam>::operator[](
                  p_cond_param,
                  card_config_ptr->display_param_order - 1);
          result = PlayerExhibitionComp::getDisplayCondParamValue(this, v15);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "getCardParamValue",
            470);
          v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v20,
                  (const char (*)[21])"display_param_order:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  &card_config_ptr->display_param_order);
          v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v12,
                  (const char (*)[20])"> cond_param.size()");
          val = std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param);
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "getCardParamValue",
        460);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v20,
             (const char (*)[53])"findExhibitionDisplayExcelConfig failed, display_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &card_config_ptr->display_id);
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getCardParamValue",
      454);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v20,
           (const char (*)[47])"findExhibitionCardExcelConfig failed, card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0;
  }
  if ( v21 == (char *)v2 )
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

// Line 477: range 000000001661F8DE-000000001662085E
__int64 __fastcall PlayerExhibitionComp::getDisplayValue(PlayerExhibitionComp *const this, uint32_t display_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t DisplayCondParamValue; // r12d
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  const data::ExhibitionDisplayCondParam *v10; // rax
  const data::ExhibitionDisplayCondParam *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  const data::ExhibitionDisplayCondParam *v14; // rax
  const data::ExhibitionDisplayCondParam *v15; // rax
  uint32_t v16; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const data::ExhibitionDisplayCondParam *v19; // rax
  bool v20; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  const data::ExhibitionDisplayCondParam *v23; // rax
  bool v24; // al
  const data::ExhibitionDisplayCondParam *v25; // rax
  const data::ExhibitionDisplayCondParam *v26; // rax
  const data::ExhibitionDisplayCondParam *v27; // rax
  Scene *v28; // r12
  Scene *v29; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  const data::ExhibitionDisplayCondParam *v32; // rax
  bool v33; // al
  common::milog::MiLogStream *v34; // rbx
  __int64 result; // rax
  PlayerExhibitionComp::getDisplayValue::<lambda(Player&)> v36; // [rsp-20h] [rbp-190h]
  PlayerExhibitionComp::getDisplayValue::<lambda(Player&)> v37; // [rsp-20h] [rbp-190h]
  bool res; // [rsp+15h] [rbp-15Bh]
  bool res_0; // [rsp+16h] [rbp-15Ah]
  bool res_1; // [rsp+17h] [rbp-159h]
  uint32_t idx; // [rsp+18h] [rbp-158h]
  uint32_t idx_0; // [rsp+1Ch] [rbp-154h]
  uint32_t idx_1; // [rsp+20h] [rbp-150h]
  uint32_t lhs_value_0; // [rsp+24h] [rbp-14Ch]
  uint32_t rhs_value_0; // [rsp+28h] [rbp-148h]
  uint32_t param_count_1; // [rsp+30h] [rbp-140h]
  uint32_t value_1; // [rsp+34h] [rbp-13Ch]
  uint32_t uid_0; // [rsp+38h] [rbp-138h]
  uint32_t value_0; // [rsp+3Ch] [rbp-134h]
  uint32_t uid; // [rsp+40h] [rbp-130h]
  uint32_t param_count_0; // [rsp+4Ch] [rbp-124h]
  uint32_t param_count; // [rsp+50h] [rbp-120h]
  uint32_t lhs_value; // [rsp+54h] [rbp-11Ch]
  unsigned __int64 val; // [rsp+60h] [rbp-110h] BYREF
  const data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+68h] [rbp-108h]
  const data::ExhibitionDisplayCondParam *param_0; // [rsp+70h] [rbp-100h]
  const data::ExhibitionDisplayCondParam *param; // [rsp+78h] [rbp-F8h]
  PlayerExhibitionComp::getDisplayValue::<lambda(Player&)> __f; // [rsp+80h] [rbp-F0h]
  PlayerExhibitionComp::getDisplayValue::<lambda(Player&)> v59; // [rsp+A0h] [rbp-D0h]
  common::milog::MiLogStream v60; // [rsp+C0h] [rbp-B0h] BYREF
  char v61[144]; // [rsp+E0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 7 res:596 48 4 14 display_id:476 64 16 13 scene_ptr:556";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getDisplayValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = display_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(
                         &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( display_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&display_config_ptr->cond_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&display_config_ptr->cond_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&display_config_ptr->cond_type);
    }
    switch ( display_config_ptr->cond_type )
    {
      case EXHIBITION_DISPLAY_COND_A_GE_B:
        if ( std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param) > 1 )
        {
          v10 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 0LL);
          lhs_value = PlayerExhibitionComp::getDisplayCondParamValue(this, v10);
          v11 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 1uLL);
          DisplayCondParamValue = lhs_value >= PlayerExhibitionComp::getDisplayCondParamValue(this, v11);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "getDisplayValue",
            490);
          v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                 &v60,
                 (const char (*)[40])"display_config_ptr->cond_param.size(): ");
          val = std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param);
          v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, &val);
          common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v9, (const char (*)[5])" < 2");
          common::milog::MiLogStream::~MiLogStream(&v60);
          DisplayCondParamValue = 0;
        }
        break;
      case EXHIBITION_DISPLAY_COND_AND:
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        param_count = ExhibitionExcelConfigMgr::getDisplayParamNum(
                        &v17->design_config.txt_config_mgr.exhibition_config_mgr,
                        *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( param_count )
        {
          res = 1;
          for ( idx = 0; idx < param_count; ++idx )
          {
            v20 = 0;
            if ( res )
            {
              v19 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, idx);
              if ( PlayerExhibitionComp::getDisplayCondParamValue(this, v19) )
                v20 = 1;
            }
            res = v20;
          }
          DisplayCondParamValue = res;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "getDisplayValue",
            515);
          v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v60,
                  (const char (*)[34])"getDisplayParamNum 0, display_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v60);
          DisplayCondParamValue = 0;
        }
        break;
      case EXHIBITION_DISPLAY_COND_OR:
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        param_count_0 = ExhibitionExcelConfigMgr::getDisplayParamNum(
                          &v21->design_config.txt_config_mgr.exhibition_config_mgr,
                          *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( param_count_0 )
        {
          res_0 = 0;
          for ( idx_0 = 0; idx_0 < param_count_0; ++idx_0 )
          {
            v24 = 1;
            if ( !res_0 )
            {
              v23 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, idx_0);
              if ( !PlayerExhibitionComp::getDisplayCondParamValue(this, v23) )
                v24 = 0;
            }
            res_0 = v24;
          }
          DisplayCondParamValue = res_0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "getDisplayValue",
            530);
          v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v60,
                  (const char (*)[34])"getDisplayParamNum 0, display_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v60);
          DisplayCondParamValue = 0;
        }
        break;
      case EXHIBITION_DISPLAY_COND_RETURN_A_IF_B_MEET:
        v25 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 1uLL);
        if ( PlayerExhibitionComp::getDisplayCondParamValue(this, v25) )
          goto LABEL_39;
        DisplayCondParamValue = 0;
        break;
      case EXHIBITION_DISPLAY_COND_RETURN_TRUE_IF_B_MEET:
        v27 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 1uLL);
        DisplayCondParamValue = PlayerExhibitionComp::getDisplayCondParamValue(this, v27);
        break;
      case EXHIBITION_DISPLAY_COND_SCENE_PLAYER_LARGEST:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
        {
          DisplayCondParamValue = 0;
        }
        else
        {
          param = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 0LL);
          value_0 = PlayerExhibitionComp::getDisplayCondParamValue(this, param);
          if ( value_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            uid = Player::getUid(this->player_);
            *(_BYTE *)(v2 + 32) = 1;
            v28 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            *(_QWORD *)&__f.__uid = __PAIR64__(value_0, uid);
            __f.__res = (bool *)(v2 + 32);
            __f.__param = param;
            v36.__param = param;
            v36.__res = (bool *)(v2 + 32);
            *(_QWORD *)&v36.__uid = __PAIR64__(value_0, uid);
            std::function<ForeachPolicy ()(Player &)>::function<PlayerExhibitionComp::getDisplayValue(unsigned int)::{lambda(Player &)#1},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v60,
              v36);
            Scene::foreachPlayer(v28, (std::function<ForeachPolicy(Player&)> *)&v60);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v60);
            DisplayCondParamValue = *(unsigned __int8 *)(v2 + 32);
          }
          else
          {
            DisplayCondParamValue = 0;
          }
        }
        goto LABEL_51;
      case EXHIBITION_DISPLAY_COND_SCENE_PLAYER_SMALLEST:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
        {
          DisplayCondParamValue = 0;
        }
        else
        {
          param_0 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 0LL);
          value_1 = PlayerExhibitionComp::getDisplayCondParamValue(this, param_0);
          if ( value_1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            uid_0 = Player::getUid(this->player_);
            *(_BYTE *)(v2 + 32) = 1;
            v29 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            *(_QWORD *)&v59.__uid = __PAIR64__(value_1, uid_0);
            v59.__res = (bool *)(v2 + 32);
            v59.__param = param_0;
            v37.__param = param_0;
            v37.__res = (bool *)(v2 + 32);
            *(_QWORD *)&v37.__uid = __PAIR64__(value_1, uid_0);
            std::function<ForeachPolicy ()(Player &)>::function<PlayerExhibitionComp::getDisplayValue(unsigned int)::{lambda(Player &)#2},void,void>(
              (std::function<ForeachPolicy(Player&)> *const)&v60,
              v37);
            Scene::foreachPlayer(v29, (std::function<ForeachPolicy(Player&)> *)&v60);
            std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v60);
            DisplayCondParamValue = *(unsigned __int8 *)(v2 + 32);
          }
          else
          {
            DisplayCondParamValue = 1;
          }
        }
LABEL_51:
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
        break;
      case EXHIBITION_DISPLAY_COND_RETURN_A_IF_AND_IS_TRUE:
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        param_count_1 = ExhibitionExcelConfigMgr::getDisplayParamNum(
                          &v30->design_config.txt_config_mgr.exhibition_config_mgr,
                          *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( param_count_1 )
        {
          res_1 = 1;
          for ( idx_1 = 0; idx_1 < param_count_1; ++idx_1 )
          {
            v33 = 0;
            if ( res_1 )
            {
              v32 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, idx_1);
              if ( PlayerExhibitionComp::getDisplayCondParamValue(this, v32) )
                v33 = 1;
            }
            res_1 = v33;
          }
          if ( res_1 )
          {
LABEL_39:
            v26 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 0LL);
            DisplayCondParamValue = PlayerExhibitionComp::getDisplayCondParamValue(this, v26);
          }
          else
          {
            DisplayCondParamValue = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "getDisplayValue",
            613);
          v31 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v60,
                  (const char (*)[34])"getDisplayParamNum 0, display_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v60);
          DisplayCondParamValue = 0;
        }
        break;
      case EXHIBITION_DISPLAY_COND_A_SUB_B:
        if ( std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param) > 1 )
        {
          v14 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 0LL);
          lhs_value_0 = PlayerExhibitionComp::getDisplayCondParamValue(this, v14);
          v15 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&display_config_ptr->cond_param, 1uLL);
          rhs_value_0 = PlayerExhibitionComp::getDisplayCondParamValue(this, v15);
          if ( lhs_value_0 <= rhs_value_0 )
            v16 = 0;
          else
            v16 = lhs_value_0 - rhs_value_0;
          DisplayCondParamValue = v16;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "getDisplayValue",
            502);
          v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v60,
                  (const char (*)[40])"display_config_ptr->cond_param.size(): ");
          val = std::vector<data::ExhibitionDisplayCondParam>::size(&display_config_ptr->cond_param);
          v13 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, &val);
          common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v13, (const char (*)[5])" < 2");
          common::milog::MiLogStream::~MiLogStream(&v60);
          DisplayCondParamValue = 0;
        }
        break;
      default:
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/exhibition/player_exhibition_comp.cpp",
          "getDisplayValue",
          628);
        v34 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v60,
                (const char (*)[39])"unsupported ExhibitionDisplayCondType:");
        if ( *(_BYTE *)(((unsigned __int64)&display_config_ptr->cond_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&display_config_ptr->cond_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&display_config_ptr->cond_type);
        }
        val = (unsigned __int64)data::enumValToStr(display_config_ptr->cond_type);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v34, (const char *const *)&val);
        common::milog::MiLogStream::~MiLogStream(&v60);
        DisplayCondParamValue = 0;
        break;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getDisplayValue",
      481);
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v60,
           (const char (*)[53])"findExhibitionDisplayExcelConfig failed, display_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v60);
    DisplayCondParamValue = 0;
  }
  result = DisplayCondParamValue;
  if ( v61 == (char *)v2 )
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

// Line 570: range 000000001661F602-000000001661F76F
ForeachPolicy __cdecl PlayerExhibitionComp::getDisplayValue(unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerExhibitionComp::getDisplayValue::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerExhibitionComp *ExhibitionComp; // rcx
  uint32_t DisplayCondParamValue; // ecx
  char v5; // al
  bool *res; // rdx
  char v7; // cl

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Uid == __closure->__uid )
    goto LABEL_10;
  ExhibitionComp = Player::getExhibitionComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  player = (Player *)__closure->__param;
  DisplayCondParamValue = PlayerExhibitionComp::getDisplayCondParamValue(
                            ExhibitionComp,
                            (const data::ExhibitionDisplayCondParam *)player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__value);
  }
  if ( DisplayCondParamValue <= __closure->__value )
LABEL_10:
    v5 = 0;
  else
    v5 = 1;
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__res >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__res);
  res = __closure->__res;
  v7 = *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000);
  if ( v7 != 0 && ((__int64)__closure->__res & 7) >= v7 )
  {
    LOBYTE(player) = v7 != 0;
    __asan_report_store1(__closure->__res, player, res);
  }
  *res = 0;
  return 1;
};

// Line 597: range 000000001661F770-000000001661F8DD
ForeachPolicy __cdecl PlayerExhibitionComp::getDisplayValue(unsigned int)::{lambda(Player &)#2}::operator()(
        const PlayerExhibitionComp::getDisplayValue::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerExhibitionComp *ExhibitionComp; // rcx
  uint32_t DisplayCondParamValue; // ecx
  char v5; // al
  bool *res; // rdx
  char v7; // cl

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Uid == __closure->__uid )
    goto LABEL_10;
  ExhibitionComp = Player::getExhibitionComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  player = (Player *)__closure->__param;
  DisplayCondParamValue = PlayerExhibitionComp::getDisplayCondParamValue(
                            ExhibitionComp,
                            (const data::ExhibitionDisplayCondParam *)player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__value);
  }
  if ( DisplayCondParamValue >= __closure->__value )
LABEL_10:
    v5 = 0;
  else
    v5 = 1;
  if ( !v5 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__res >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__res);
  res = __closure->__res;
  v7 = *(_BYTE *)(((unsigned __int64)res >> 3) + 0x7FFF8000);
  if ( v7 != 0 && ((__int64)__closure->__res & 7) >= v7 )
  {
    LOBYTE(player) = v7 != 0;
    __asan_report_store1(__closure->__res, player, res);
  }
  *res = 0;
  return 1;
};

// Line 635: range 0000000016620860-0000000016620E80
uint32_t __cdecl PlayerExhibitionComp::getDisplayCondParamValue(
        PlayerExhibitionComp *const this,
        const data::ExhibitionDisplayCondParam *cond_param)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::ExhibitionDisplayCondParamType param_type; // eax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v11; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rbx
  char *val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-80h] BYREF
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 display_id:678";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getDisplayCondParamValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&cond_param->param_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond_param->param_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond_param->param_type);
  }
  param_type = cond_param->param_type;
  if ( param_type == EXHIBITION_DISPLAY_COND_PARAM_DISPLAY_VALUE )
  {
    *(_DWORD *)(v2 + 32) = 0;
    if ( common::tools::StringUtils::strToNum<unsigned int>(&cond_param->param, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "getDisplayCondParamValue",
        681);
      v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v17,
              (const char (*)[24])"strToNum failed, param:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &cond_param->param);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0;
    }
    else
    {
      result = PlayerExhibitionComp::getDisplayValue(this, *(_DWORD *)(v2 + 32));
    }
    goto LABEL_35;
  }
  if ( param_type > EXHIBITION_DISPLAY_COND_PARAM_DISPLAY_VALUE )
    goto LABEL_32;
  switch ( param_type )
  {
    case EXHIBITION_DISPLAY_COND_PARAM_UNSIGNED_INTEGER:
      *(_DWORD *)(v2 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&cond_param->param, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/exhibition/player_exhibition_comp.cpp",
          "getDisplayCondParamValue",
          671);
        v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v17,
                (const char (*)[24])"strToNum failed, param:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &cond_param->param);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 0;
      }
      else
      {
        result = *(_DWORD *)(v2 + 32);
      }
      break;
    case EXHIBITION_DISPLAY_COND_PARAM_REPLACEABLE_VALUE:
      *(_DWORD *)(v2 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&cond_param->param, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/exhibition/player_exhibition_comp.cpp",
          "getDisplayCondParamValue",
          643);
        v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               &v17,
               (const char (*)[24])"strToNum failed, param:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &cond_param->param);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 0;
      }
      else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
                   &this->exhibition_data_map_,
                   (const unsigned int *)(v2 + 32)) )
      {
        result = 0;
      }
      else
      {
        v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
               &this->exhibition_data_map_,
               (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
        v9 = (uint32_t *)v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        result = *v9;
      }
      break;
    case EXHIBITION_DISPLAY_COND_PARAM_ACCUMULABLE_VALUE:
      *(_DWORD *)(v2 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&cond_param->param, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/exhibition/player_exhibition_comp.cpp",
          "getDisplayCondParamValue",
          657);
        v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v17,
                (const char (*)[24])"strToNum failed, param:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &cond_param->param);
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 0;
      }
      else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
                   &this->exhibition_data_map_,
                   (const unsigned int *)(v2 + 32)) )
      {
        result = 0;
      }
      else
      {
        v11 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                &this->exhibition_data_map_,
                (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
        p_second = &v11->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        result = v11->second;
      }
      break;
    default:
LABEL_32:
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "getDisplayCondParamValue",
        687);
      v15 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v17,
              (const char (*)[46])"unsupported DisplayCondParamType, param_type:");
      if ( *(_BYTE *)(((unsigned __int64)&cond_param->param_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond_param->param_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond_param->param_type);
      }
      val = (char *)data::enumValToStr(cond_param->param_type);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)&val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0;
      break;
  }
LABEL_35:
  if ( v18 == (char *)v2 )
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

// Line 694: range 0000000016620E82-00000000166214E1
void __cdecl PlayerExhibitionComp::addValueByTemporaryData(
        PlayerExhibitionComp *const this,
        const std::set<unsigned int> *exhibition_set,
        const std::pair<unsigned int,unsigned int> *add_value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type v8; // ecx
  char v9; // dl
  __int64 first; // rsi
  __int64 v11; // rdx
  PlayerWatcherComp *WatcherComp; // rdi
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type v13; // ecx
  char v14; // dl
  __int64 second; // rsi
  __int64 v16; // rdx
  PlayerWatcherComp *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  uint32_t before_value; // [rsp+28h] [rbp-C8h]
  uint32_t before_value_0; // [rsp+2Ch] [rbp-C4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  std::pair<unsigned int,unsigned int> *__in; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *replaceable_value; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *accumulable_value; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-90h] BYREF
  char v38[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 exhibtion_id:695";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::addValueByTemporaryData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = exhibition_set;
  __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(exhibition_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
    if ( PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v3 + 32)) )
    {
      __in = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
               &this->exhibition_data_map_,
               (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
      replaceable_value = std::get<0ul,unsigned int,unsigned int>(__in);
      accumulable_value = std::get<1ul,unsigned int,unsigned int>(__in);
      if ( *(_BYTE *)(((unsigned __int64)add_value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)add_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)add_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(add_value);
      }
      if ( add_value->first )
      {
        if ( *(_BYTE *)(((unsigned __int64)replaceable_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)replaceable_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)replaceable_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(replaceable_value);
        }
        before_value = *replaceable_value;
        first = add_value->first;
        v8 = SAFE_ADD<unsigned int,unsigned int>(*replaceable_value, first);
        v9 = *(_BYTE *)(((unsigned __int64)replaceable_value >> 3) + 0x7FFF8000);
        LOBYTE(first) = v9 != 0;
        v11 = (v9 != 0) & (unsigned __int8)((char)(((unsigned __int8)replaceable_value & 7) + 3) >= v9);
        if ( (_BYTE)v11 )
          __asan_report_store4(replaceable_value, first, v11);
        *replaceable_value = v8;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)replaceable_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)replaceable_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)replaceable_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          WatcherComp = (PlayerWatcherComp *)replaceable_value;
          __asan_report_load4(replaceable_value);
        }
        PlayerWatcherComp::triggerExhibitionReplaceableValueIncrease(
          WatcherComp,
          *(_DWORD *)(v3 + 32),
          before_value,
          *replaceable_value);
      }
      if ( *(_BYTE *)(((unsigned __int64)&add_value->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)add_value + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&add_value->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&add_value->second);
      }
      if ( add_value->second )
      {
        if ( *(_BYTE *)(((unsigned __int64)accumulable_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)accumulable_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)accumulable_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(accumulable_value);
        }
        before_value_0 = *accumulable_value;
        second = add_value->second;
        v13 = SAFE_ADD<unsigned int,unsigned int>(*accumulable_value, second);
        v14 = *(_BYTE *)(((unsigned __int64)accumulable_value >> 3) + 0x7FFF8000);
        LOBYTE(second) = v14 != 0;
        v16 = (v14 != 0) & (unsigned __int8)((char)(((unsigned __int8)accumulable_value & 7) + 3) >= v14);
        if ( (_BYTE)v16 )
          __asan_report_store4(accumulable_value, second, v16);
        *accumulable_value = v13;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v17 = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)accumulable_value >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)accumulable_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)accumulable_value >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(accumulable_value);
        }
        PlayerWatcherComp::triggerExhibitionAccumulableValueIncrease(
          v17,
          *(_DWORD *)(v3 + 32),
          *accumulable_value - before_value_0);
      }
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "addValueByTemporaryData",
        714);
      v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v37,
              (const char (*)[40])"addValueByTemporaryData, exhibition_id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
      v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])", add_value:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v20, add_value);
      v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])", cur_value:");
      v23 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
      v24 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v22, v23);
      v25 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v24, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v38 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 720: range 00000000166214E2-00000000166219C0
void __fastcall PlayerExhibitionComp::internalAddReplaceableData(
        PlayerExhibitionComp *const this,
        const std::set<unsigned int> *exhibition_set,
        uint32_t add_value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  unsigned int v10; // r14d
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  SelectType v13; // r14d
  char *v14; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rax
  SelectType *v16; // rdx
  char v17; // cl
  PlayerWatcherComp *WatcherComp; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v19; // rax
  uint32_t *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  unsigned int val; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t before_value; // [rsp+24h] [rbp-CCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 exhibtion_id:721 64 4 13 add_value:719";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::internalAddReplaceableData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = add_value;
  __for_range = exhibition_set;
  __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(exhibition_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    if ( PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v3 + 48)) )
    {
      v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
             &this->exhibition_data_map_,
             (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v9 = (uint32_t *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      before_value = *v9;
      v10 = *(_DWORD *)(v3 + 64);
      v11 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v12 = (unsigned int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = SAFE_ADD<unsigned int,unsigned int>(*v12, v10);
      v14 = (char *)(v3 + 48);
      v15 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v16 = (SelectType *)v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(v15, v14, v15);
      }
      *v16 = v13;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      v19 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v20 = (uint32_t *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      PlayerWatcherComp::triggerExhibitionReplaceableValueIncrease(
        WatcherComp,
        *(_DWORD *)(v3 + 48),
        before_value,
        *v20);
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "internalAddReplaceableData",
        730);
      v21 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v35,
              (const char (*)[43])"internalAddReplaceableData, exhibition_id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])", add_value:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
      v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])", cur_value:");
      v26 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)v26);
      v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v36 == (char *)v3 )
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

// Line 736: range 00000000166219C2-0000000016621EAE
void __fastcall PlayerExhibitionComp::internalAddAccumulableData(
        PlayerExhibitionComp *const this,
        const std::set<unsigned int> *exhibition_set,
        uint32_t add_value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v8; // rdx
  unsigned int *p_second; // rax
  unsigned int v10; // r14d
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v11; // rdx
  unsigned int *v12; // rax
  SelectType v13; // r14d
  char *v14; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rdx
  char v16; // cl
  PlayerWatcherComp *WatcherComp; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v18; // rdx
  unsigned int *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  unsigned int val; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t before_value; // [rsp+24h] [rbp-CCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 exhibtion_id:737 64 4 13 add_value:735";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::internalAddAccumulableData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = add_value;
  __for_range = exhibition_set;
  __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(exhibition_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    if ( PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v3 + 48)) )
    {
      v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
             &this->exhibition_data_map_,
             (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      p_second = &v8->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      before_value = v8->second;
      v10 = *(_DWORD *)(v3 + 64);
      v11 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v12 = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v13 = SAFE_ADD<unsigned int,unsigned int>(v11->second, v10);
      v14 = (char *)(v3 + 48);
      v15 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v16 = *(_BYTE *)(((unsigned __int64)&v15->second >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)((((_BYTE)v15 + 4) & 7) + 3) >= v16 )
      {
        LOBYTE(v14) = v16 != 0;
        __asan_report_store4(&v15->second, v14, v15);
      }
      v15->second = v13;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      v18 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v19 = &v18->second;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      PlayerWatcherComp::triggerExhibitionAccumulableValueIncrease(
        WatcherComp,
        *(_DWORD *)(v3 + 48),
        v18->second - before_value);
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "internalAddAccumulableData",
        746);
      v20 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v34,
              (const char (*)[43])"internalAddAccumulableData, exhibition_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])", add_value:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
      v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])", cur_value:");
      v25 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &v25->second);
      v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v35 == (char *)v3 )
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

// Line 752: range 0000000016621EB0-000000001662208A
void __cdecl PlayerExhibitionComp::internalClearReplaceableData(
        PlayerExhibitionComp *const this,
        const std::set<unsigned int> *exhibition_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  char *v7; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 exhibtion_id:753";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::internalClearReplaceableData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = exhibition_set;
  __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(exhibition_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v2 + 32)) )
    {
      v7 = (char *)(v2 + 32);
      v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
             &this->exhibition_data_map_,
             (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 32));
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v8, v7, v8);
      }
      *v9 = 0;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
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

// Line 764: range 000000001662208C-0000000016622219
__int64 __fastcall PlayerExhibitionComp::getExhibitionAccumulableData(
        PlayerExhibitionComp *const this,
        uint32_t exhibition_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 exhibition_id:763 64 8 8 iter:765";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getExhibitionAccumulableData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = exhibition_id;
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(
                                                                                                    &this->exhibition_data_map_,
                                                                                                    (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(&this->exhibition_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
    p_second = &v6->second.second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second.second;
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

// Line 774: range 000000001662221A-00000000166223A7
__int64 __fastcall PlayerExhibitionComp::getExhibitionReplaceableData(
        PlayerExhibitionComp *const this,
        uint32_t exhibition_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::pointer v6; // rdx
  std::pair<unsigned int,unsigned int> *p_second; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 exhibition_id:773 64 8 8 iter:775";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getExhibitionReplaceableData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = exhibition_id;
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(
                                                                                                    &this->exhibition_data_map_,
                                                                                                    (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(&this->exhibition_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second.first;
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

// Line 785: range 00000000166223A8-0000000016622439
bool __cdecl PlayerExhibitionComp::isInActiveSeries(PlayerExhibitionComp *const this, uint32_t exhibtion_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t SeriesIdByExhibitionId; // edx
  bool isSeriesIdActive; // bl
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  SeriesIdByExhibitionId = ExhibitionExcelConfigMgr::getSeriesIdByExhibitionId(
                             &v2->design_config.txt_config_mgr.exhibition_config_mgr,
                             exhibtion_id);
  isSeriesIdActive = PlayerExhibitionComp::isSeriesIdActive(this, SeriesIdByExhibitionId);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return isSeriesIdActive;
};

// Line 790: range 000000001662243A-0000000016622B05
_BOOL8 __fastcall PlayerExhibitionComp::isSeriesIdActive(PlayerExhibitionComp *const this, uint32_t series_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL4 v7; // r14d
  data::ExhibitionSeriesType series_type; // eax
  common::milog::MiLogStream *v9; // rax
  uint32_t ActivityComp; // eax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // al
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v16; // rax
  _BOOL8 result; // rax
  std::allocator<char> __a; // [rsp+17h] [rbp-119h] BYREF
  const data::ExhibitionSeriesExcelConfig *series_config_ptr; // [rsp+18h] [rbp-118h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-110h] BYREF
  char v21[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 18 cur_dungeon_id:822 64 4 13 series_id:789 80 16 16 activity_ptr:807 112 48 18 dungeon_id_set:816";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::isSeriesIdActive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 64) = series_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 80));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
  series_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(
                        &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                        *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 80));
  if ( !series_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "isSeriesIdActive",
      794);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v20,
           (const char (*)[51])"findExhibitionSeriesExcelConfig failed, series_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v20);
    v7 = 0;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&series_config_ptr->series_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)series_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&series_config_ptr->series_type >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(&series_config_ptr->series_type);
  }
  series_type = series_config_ptr->series_type;
  if ( series_type == EXHIBITION_SERIES_PERMANENT )
  {
    v7 = 1;
    goto LABEL_32;
  }
  if ( series_type > EXHIBITION_SERIES_PERMANENT )
    goto LABEL_31;
  if ( series_type == EXHIBITION_SERIES_ACTIVITY )
  {
    *(_DWORD *)(v2 + 48) = 0;
    if ( common::tools::StringUtils::strToNum<unsigned int>(
           &series_config_ptr->series_param,
           (unsigned int *)(v2 + 48),
           1) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "isSeriesIdActive",
        804);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v20,
             (const char (*)[27])"strToNum failed, series_id");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ActivityComp = (unsigned int)Player::getActivityComp(this->player_);
      PlayerActivityComp::findBaseActivity((PlayerActivityComp *const)(v2 + 80), ActivityComp);
      v12 = 1;
      if ( !std::operator==<BaseActivity>((const std::shared_ptr<BaseActivity> *)(v2 + 80), 0LL) )
      {
        v11 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( BaseActivity::isOpening(v11, 0) )
          v12 = 0;
      }
      v7 = !v12;
      std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v2 + 80));
    }
  }
  else
  {
    if ( series_type != EXHIBITION_SERIES_DUNGEON )
    {
LABEL_31:
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "isSeriesIdActive",
        839);
      v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v20,
              (const char (*)[34])"unsupported param_type, series_id");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = 0;
      goto LABEL_32;
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
    std::allocator<char>::allocator(&__a, (((_BYTE)series_config_ptr + 12) & 7u) + 3);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v20, ",", &__a);
    v13 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
            &series_config_ptr->series_param,
            (const std::string *)&v20,
            (std::set<unsigned int> *)(v2 + 112),
            1) != 0;
    std::string::~string(&v20);
    std::allocator<char>::~allocator(&__a);
    if ( v13 )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "isSeriesIdActive",
        819);
      v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v20,
              (const char (*)[28])"splitToList fail, series_id");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v20);
      v7 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      DungeonComp = Player::getDungeonComp(this->player_);
      *(_DWORD *)(v2 + 48) = PlayerDungeonComp::getCurDungeonId(DungeonComp);
      if ( *(_DWORD *)(v2 + 48) )
        v7 = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               (std::set<unsigned int> *)(v2 + 112),
               (const unsigned int *)(v2 + 48));
      else
        v7 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
  }
LABEL_32:
  result = v7;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 846: range 0000000016622B06-0000000016622D0E
void __cdecl PlayerExhibitionComp::onEnterScene(
        PlayerExhibitionComp *const this,
        ScenePtr *p_scene_ptr,
        bool is_reenter)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t DungeonId; // eax
  uint32_t series_id; // [rsp+2Ch] [rbp-84h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 dungeon_scene_ptr:851";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::onEnterScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Scene>(0LL, p_scene_ptr) && !is_reenter )
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 32));
    if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 32)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v12);
      p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.exhibition_config_mgr;
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      DungeonId = DungeonScene::getDungeonId(v8);
      series_id = ExhibitionExcelConfigMgr::getSeriesIdByDungeonId(p_exhibition_config_mgr, DungeonId);
      std::shared_ptr<Config>::~shared_ptr(&v12);
      if ( series_id )
        PlayerExhibitionComp::clearSeriesExhibitionReplaceableData(this, series_id);
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
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
};

// Line 865: range 0000000016622D10-0000000016622DED
void __cdecl PlayerExhibitionComp::onMonsterHurt(PlayerExhibitionComp *const this, Monster *monster, float damage)
{
  PlayerExhibitionComp::addMonsterDamageReplaceableDataByServer(
    this,
    EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUP_CONFIGID,
    monster,
    (int)damage);
  PlayerExhibitionComp::addMonsterDamageAccumulableDataByServer(
    this,
    EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUP_CONFIGID,
    monster,
    (int)damage);
  PlayerExhibitionComp::addMonsterDamageReplaceableDataByServer(
    this,
    EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_MONSTERID,
    monster,
    (int)damage);
  PlayerExhibitionComp::addMonsterDamageAccumulableDataByServer(
    this,
    EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_MONSTERID,
    monster,
    (int)damage);
  PlayerExhibitionComp::addMonsterDamageReplaceableDataByServer(
    this,
    EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUPID,
    monster,
    (int)damage);
  PlayerExhibitionComp::addMonsterDamageAccumulableDataByServer(
    this,
    EXHIBITION_SERVER_TRIGGER_DAMAGE_BY_GROUPID,
    monster,
    (int)damage);
};

// Line 875: range 0000000016622DEE-000000001662325A
std::vector<ExhibitionListDataParam> *__fastcall PlayerExhibitionComp::getSettleListDataVec(
        std::vector<ExhibitionListDataParam> *retstr,
        PlayerExhibitionComp *const this,
        uint32_t series_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v10; // rax
  unsigned int *v11; // rax
  uint32_t *v12; // rdx
  ExhibitionListDataParam *v13; // rax
  uint32_t list_data_id; // [rsp+24h] [rbp-13Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-110h] BYREF
  char v22[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 series_id:874 48 8 8 iter:877 80 12 9 param:888 112 48 17 list_data_set:883";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::getSettleListDataVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = 0x4000000;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = series_id;
  std::vector<ExhibitionListDataParam>::vector(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &v6->design_config.txt_config_mgr.exhibition_config_mgr.series_to_list_data_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v20);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,std::set<unsigned int>>::end(&v7->design_config.txt_config_mgr.exhibition_config_mgr.series_to_list_data_map)._M_cur;
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 48),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)&__for_end);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( v8 )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getSettleListDataVec",
      880);
    v9 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v21,
           (const char (*)[55])"series_to_list_data_map find series failed, series_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 48));
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112), &v10->second);
    __for_range = (const std::set<unsigned int> *)(v3 + 112);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 112))._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      list_data_id = *v12;
      if ( PlayerExhibitionComp::isListDataCondSatisfy(this, *v12) )
      {
        *(_DWORD *)(v3 + 80) = 0;
        *(_DWORD *)(v3 + 84) = 0;
        *(_DWORD *)(v3 + 88) = 0;
        *(_DWORD *)(v3 + 80) = list_data_id;
        *(_DWORD *)(v3 + 84) = PlayerExhibitionComp::getListDataParamValue(this, list_data_id);
        v13 = std::move<ExhibitionListDataParam &>((ExhibitionListDataParam *)(v3 + 80));
        std::vector<ExhibitionListDataParam>::emplace_back<ExhibitionListDataParam>(retstr, v13, v13);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
  }
  if ( v22 == (char *)v3 )
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
  return retstr;
};

// Line 898: range 000000001662325C-000000001662354C
__int64 __fastcall PlayerExhibitionComp::getExhibitionListDataParam(
        PlayerExhibitionComp *const this,
        uint32_t list_data_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t display_value; // [rsp+24h] [rbp-CCh]
  const data::ExhibitionListExcelConfig *list_data_config_ptr; // [rsp+28h] [rbp-C8h]
  __int64 v10; // [rsp+34h] [rbp-BCh]
  std::shared_ptr<Config> v11; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+50h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 list_data_id:897 64 12 7 res:899";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getExhibitionListDataParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202177536;
  *(_DWORD *)(v2 + 48) = list_data_id;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 48);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  list_data_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionListExcelConfig(
                           &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( list_data_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&list_data_config_ptr->display_id);
    }
    display_value = PlayerExhibitionComp::getDisplayValue(this, list_data_config_ptr->display_id);
    if ( display_value )
    {
      *(_DWORD *)(v2 + 68) = PlayerExhibitionComp::getListDataParamValue(this, *(_DWORD *)(v2 + 48));
      *(_DWORD *)(v2 + 72) = display_value;
    }
    v10 = *(_QWORD *)(v2 + 64);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getExhibitionListDataParam",
      905);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v12,
           (const char (*)[52])"findExhibitionListExcelConfig failed, list_data_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v10 = *(_QWORD *)(v2 + 64);
  }
  result = v10;
  if ( v13 == (char *)v2 )
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

// Line 922: range 000000001662354E-0000000016623797
_BOOL8 __fastcall PlayerExhibitionComp::isListDataCondSatisfy(PlayerExhibitionComp *const this, uint32_t list_data_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  const data::ExhibitionListExcelConfig *list_data_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 list_data_id:921";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::isListDataCondSatisfy;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = list_data_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  list_data_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionListExcelConfig(
                           &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                           *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( list_data_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&list_data_config_ptr->display_id);
    }
    result = (unsigned int)PlayerExhibitionComp::getDisplayValue(this, list_data_config_ptr->display_id) != 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "isListDataCondSatisfy",
      926);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v10,
           (const char (*)[52])"findExhibitionListExcelConfig failed, list_data_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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
  return result;
};

// Line 939: range 0000000016623798-0000000016623B76
uint32_t __fastcall PlayerExhibitionComp::getListDataParamValue(
        PlayerExhibitionComp *const this,
        uint32_t list_data_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  const std::vector<data::ExhibitionDisplayCondParam> *p_cond_param; // rcx
  const data::ExhibitionDisplayCondParam *v11; // rax
  const data::ExhibitionListExcelConfig *list_data_config_ptr; // [rsp+10h] [rbp-A0h]
  const data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-80h] BYREF
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 list_data_id:938";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getListDataParamValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = list_data_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  list_data_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionListExcelConfig(
                           &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                           *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( list_data_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.exhibition_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&list_data_config_ptr->display_id);
    }
    display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(
                           p_exhibition_config_mgr,
                           list_data_config_ptr->display_id);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( display_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_param_order >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&list_data_config_ptr->display_param_order);
      }
      if ( list_data_config_ptr->display_param_order )
      {
        p_cond_param = &display_config_ptr->cond_param;
        if ( *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_param_order >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&list_data_config_ptr->display_param_order >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&list_data_config_ptr->display_param_order);
        }
        v11 = std::vector<data::ExhibitionDisplayCondParam>::operator[](
                p_cond_param,
                list_data_config_ptr->display_param_order - 1);
        result = PlayerExhibitionComp::getDisplayCondParamValue(this, v11);
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "getListDataParamValue",
        949);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v15,
             (const char (*)[53])"findExhibitionDisplayExcelConfig failed, display_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &list_data_config_ptr->display_id);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getListDataParamValue",
      943);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v15,
           (const char (*)[52])"findExhibitionListExcelConfig failed, list_data_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0;
  }
  if ( v16 == (char *)v2 )
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

// Line 962: range 0000000016623B78-0000000016623DCB
__int64 __fastcall PlayerExhibitionComp::setReplaceableDataWithParam(
        PlayerExhibitionComp *const this,
        uint32_t param,
        data::ExhibitionServerTriggerType trigger_type,
        uint32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  char *val; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-90h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 param:961";
  *(_QWORD *)(v4 + 16) = PlayerExhibitionComp::setReplaceableDataWithParam;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = param;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
                         &v7->design_config.txt_config_mgr.exhibition_config_mgr,
                         *(_DWORD *)(v4 + 32),
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( exhibition_set_ptr )
  {
    PlayerExhibitionComp::internalSetReplaceableData(this, exhibition_set_ptr, value);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "setReplaceableDataWithParam",
      967);
    v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v17,
           (const char (*)[70])"getServerKeyExhibitionSetByParamAndTriggerType nullptr, trigger_type:");
    val = (char *)data::enumValToStr(trigger_type);
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])", dungeon_scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
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

// Line 976: range 0000000016623DCC-000000001662401F
__int64 __fastcall PlayerExhibitionComp::setMaxReplaceableDataWithParam(
        PlayerExhibitionComp *const this,
        uint32_t param,
        data::ExhibitionServerTriggerType trigger_type,
        uint32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  char *val; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-90h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 param:975";
  *(_QWORD *)(v4 + 16) = PlayerExhibitionComp::setMaxReplaceableDataWithParam;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = param;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
                         &v7->design_config.txt_config_mgr.exhibition_config_mgr,
                         *(_DWORD *)(v4 + 32),
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( exhibition_set_ptr )
  {
    PlayerExhibitionComp::internalSetMaxReplaceableData(this, exhibition_set_ptr, value);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "setMaxReplaceableDataWithParam",
      981);
    v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v17,
           (const char (*)[70])"getServerKeyExhibitionSetByParamAndTriggerType nullptr, trigger_type:");
    val = (char *)data::enumValToStr(trigger_type);
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])", dungeon_scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
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

// Line 990: range 0000000016624020-0000000016624273
__int64 __fastcall PlayerExhibitionComp::addSuccessTimesWithParam(
        PlayerExhibitionComp *const this,
        uint32_t param,
        data::ExhibitionServerTriggerType trigger_type,
        uint32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  char *val; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-90h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 9 param:989";
  *(_QWORD *)(v4 + 16) = PlayerExhibitionComp::addSuccessTimesWithParam;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = param;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
                         &v7->design_config.txt_config_mgr.exhibition_config_mgr,
                         *(_DWORD *)(v4 + 32),
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( exhibition_set_ptr )
  {
    PlayerExhibitionComp::internalAddAccumulableData(this, exhibition_set_ptr, value);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "addSuccessTimesWithParam",
      995);
    v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v17,
           (const char (*)[70])"getServerKeyExhibitionSetByParamAndTriggerType nullptr, trigger_type:");
    val = (char *)data::enumValToStr(trigger_type);
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])", dungeon_scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
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

// Line 1006: range 0000000016624274-00000000166244C9
__int64 __fastcall PlayerExhibitionComp::setMaxReplaceableDataByMapWithParam(
        PlayerExhibitionComp *const this,
        uint32_t param,
        data::ExhibitionServerTriggerType trigger_type,
        const std::unordered_map<data::ElementReactionType,unsigned int> *type_cnt_map)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  char *val; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-90h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 10 param:1003";
  *(_QWORD *)(v4 + 16) = PlayerExhibitionComp::setMaxReplaceableDataByMapWithParam;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = param;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
                         &v7->design_config.txt_config_mgr.exhibition_config_mgr,
                         *(_DWORD *)(v4 + 32),
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( exhibition_set_ptr )
  {
    PlayerExhibitionComp::internalSetMaxElementReactionCntByMap(this, exhibition_set_ptr, type_cnt_map);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "setMaxReplaceableDataByMapWithParam",
      1011);
    v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v17,
           (const char (*)[70])"getServerKeyExhibitionSetByParamAndTriggerType nullptr, trigger_type:");
    val = (char *)data::enumValToStr(trigger_type);
    v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)&val);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])", dungeon_scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
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

// Line 1020: range 00000000166244CA-0000000016624900
void __cdecl PlayerExhibitionComp::internalSetReplaceableData(
        PlayerExhibitionComp *const this,
        const std::set<unsigned int> *exhibition_set,
        uint32_t value)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  char *v10; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v11; // rax
  uint32_t *v12; // rdx
  char v13; // cl
  PlayerWatcherComp *WatcherComp; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rax
  uint32_t *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  unsigned int val; // [rsp+20h] [rbp-B0h] BYREF
  uint32_t before_value; // [rsp+24h] [rbp-ACh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-90h] BYREF
  char v30[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 18 exhibition_id:1021";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::internalSetReplaceableData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = exhibition_set;
  __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(exhibition_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
    if ( PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v3 + 32)) )
    {
      v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
             &this->exhibition_data_map_,
             (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
      v9 = (uint32_t *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      before_value = *v9;
      v10 = (char *)(v3 + 32);
      v11 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
      v12 = (uint32_t *)v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(v11, v10, v11);
      }
      *v12 = value;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      v15 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
      v16 = (uint32_t *)v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      PlayerWatcherComp::triggerExhibitionReplaceableValueIncrease(
        WatcherComp,
        *(_DWORD *)(v3 + 32),
        before_value,
        *v16);
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "internalSetReplaceableData",
        1030);
      v17 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v29,
              (const char (*)[43])"internalSetReplaceableData, exhibition_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 32));
      v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])", cur_value:");
      v20 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)v20);
      v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1036: range 0000000016624902-0000000016625015
void __cdecl PlayerExhibitionComp::internalSetMaxElementReactionCntByMap(
        PlayerExhibitionComp *const this,
        const std::set<unsigned int> *exhibition_set,
        const std::unordered_map<data::ElementReactionType,unsigned int> *type_cnt_map)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  uint32_t v14; // r14d
  char *v15; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v16; // rax
  uint32_t *v17; // rdx
  char v18; // cl
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  unsigned int value; // [rsp+20h] [rbp-100h] BYREF
  uint32_t sum_count; // [rsp+24h] [rbp-FCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  std::unordered_map<data::ElementReactionType,unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-E8h] BYREF
  std::unordered_map<data::ElementReactionType,unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-E0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-D8h]
  const std::set<unsigned int> *needed_reaction_set_ptr; // [rsp+50h] [rbp-D0h]
  const data::PlayerExhibitionExcelConfig *player_exhibition_config_ptr; // [rsp+58h] [rbp-C8h]
  const std::unordered_map<data::ElementReactionType,unsigned int> *__for_range_0; // [rsp+60h] [rbp-C0h]
  const std::pair<const data::ElementReactionType,unsigned int> *v36; // [rsp+68h] [rbp-B8h]
  std::tuple_element<0,const std::pair<const data::ElementReactionType,unsigned int> >::type *type; // [rsp+70h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::ElementReactionType,unsigned int> >::type *count; // [rsp+78h] [rbp-A8h]
  std::shared_ptr<Config> v39; // [rsp+80h] [rbp-A0h] BYREF
  common::milog::MiLogStream v40; // [rsp+90h] [rbp-90h] BYREF
  char v41[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 18 exhibition_id:1037";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::internalSetMaxElementReactionCntByMap;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = exhibition_set;
  __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(exhibition_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
    if ( PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v3 + 32)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      needed_reaction_set_ptr = ExhibitionExcelConfigMgr::getElementReactionSetByExhibitionId(
                                  &v8->design_config.txt_config_mgr.exhibition_config_mgr,
                                  *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( needed_reaction_set_ptr )
      {
        sum_count = 0;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        player_exhibition_config_ptr = data::ExhibitionExcelConfigMgrBase::findPlayerExhibitionExcelConfig(
                                         &v10->design_config.txt_config_mgr.exhibition_config_mgr,
                                         *(_DWORD *)(v3 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v39);
        if ( player_exhibition_config_ptr )
        {
          __for_range_0 = type_cnt_map;
          __for_begin_0._M_cur = std::unordered_map<data::ElementReactionType,unsigned int>::begin(type_cnt_map)._M_cur;
          __for_end_0._M_cur = std::unordered_map<data::ElementReactionType,unsigned int>::end(__for_range_0)._M_cur;
          while ( std::__detail::operator!=<std::pair<data::ElementReactionType const,unsigned int>,false>(
                    &__for_begin_0,
                    &__for_end_0) )
          {
            v36 = std::__detail::_Node_const_iterator<std::pair<data::ElementReactionType const,unsigned int>,false,false>::operator*(&__for_begin_0);
            type = std::get<0ul,data::ElementReactionType const,unsigned int>(v36);
            count = (std::tuple_element<1,const std::pair<const data::ElementReactionType,unsigned int> >::type *)std::get<1ul,data::ElementReactionType const,unsigned int>(v36);
            if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(type);
            }
            value = *type;
            if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                   needed_reaction_set_ptr,
                   &value) )
            {
              if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(count);
              }
              sum_count += *count;
            }
            std::__detail::_Node_const_iterator<std::pair<data::ElementReactionType const,unsigned int>,false,false>::operator++(&__for_begin_0);
          }
          v12 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                  &this->exhibition_data_map_,
                  (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
          v13 = (uint32_t *)v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          if ( sum_count > *v13 )
          {
            v14 = sum_count;
            v15 = (char *)(v3 + 32);
            v16 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                    &this->exhibition_data_map_,
                    (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
            v17 = (uint32_t *)v16;
            v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
            if ( v18 != 0 && (char)(((unsigned __int8)v16 & 7) + 3) >= v18 )
            {
              LOBYTE(v15) = v18 != 0;
              __asan_report_store4(v16, v15, v16);
            }
            *v17 = v14;
          }
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "internalSetMaxElementReactionCntByMap",
            1072);
          v19 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v40,
                  (const char (*)[54])"internalSetMaxElementReactionCntByMap, exhibition_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 32));
          v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])", cur_value:");
          v22 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
                  &this->exhibition_data_map_,
                  (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 32));
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)v22);
          v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          value = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &value);
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/exhibition/player_exhibition_comp.cpp",
            "internalSetMaxElementReactionCntByMap",
            1056);
          v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v40,
                  (const char (*)[53])"findPlayerExhibitionExcelConfig fails, exhibiton_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v40);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/exhibition/player_exhibition_comp.cpp",
          "internalSetMaxElementReactionCntByMap",
          1048);
        v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v40,
               (const char (*)[53])"exhibition doesn't have reaction_set, exhibition_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v40);
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v41 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1078: range 0000000016625016-00000000166254F6
void __fastcall PlayerExhibitionComp::internalSetMaxReplaceableData(
        PlayerExhibitionComp *const this,
        const std::set<unsigned int> *exhibition_set,
        uint32_t value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v10; // rax
  unsigned int *v11; // rax
  int *v12; // rdx
  int v13; // r14d
  char *v14; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  char v17; // cl
  PlayerWatcherComp *WatcherComp; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v19; // rax
  uint32_t *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  unsigned int val; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t before_value; // [rsp+24h] [rbp-CCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-B0h] BYREF
  char v36[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 exhibition_id:1079 64 4 10 value:1077";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::internalSetMaxReplaceableData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = value;
  __for_range = exhibition_set;
  __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(exhibition_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    if ( PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v3 + 48)) )
    {
      v8 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
             &this->exhibition_data_map_,
             (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v9 = (uint32_t *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      before_value = *v9;
      v10 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v11 = (unsigned int *)std::max<unsigned int>((const unsigned int *)v10, (const unsigned int *)(v3 + 64));
      v12 = (int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v13 = *v12;
      v14 = (char *)(v3 + 48);
      v15 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v16 = v15;
      v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(v15, v14, v15);
      }
      *v16 = v13;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      v19 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v20 = (uint32_t *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      PlayerWatcherComp::triggerExhibitionReplaceableValueIncrease(
        WatcherComp,
        *(_DWORD *)(v3 + 48),
        before_value,
        *v20);
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "internalSetMaxReplaceableData",
        1088);
      v21 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v35,
              (const char (*)[46])"internalSetMaxReplaceableData, exhibition_id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])", value:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
      v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])", cur_value:");
      v26 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 48));
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)v26);
      v28 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v27, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v36 == (char *)v3 )
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

// Line 1094: range 00000000166254F8-0000000016625865
__int64 __fastcall PlayerExhibitionComp::getReplaceableValueWithParam(
        PlayerExhibitionComp *const this,
        uint32_t param,
        data::ExhibitionServerTriggerType trigger_type)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // r13
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  char *val; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 10 param:1093";
  *(_QWORD *)(v3 + 16) = PlayerExhibitionComp::getReplaceableValueWithParam;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = param;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
                         &v6->design_config.txt_config_mgr.exhibition_config_mgr,
                         *(_DWORD *)(v3 + 32),
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( exhibition_set_ptr )
  {
    if ( std::set<unsigned int>::size(exhibition_set_ptr) == 1 )
    {
      val = (char *)std::set<unsigned int>::begin(exhibition_set_ptr)._M_node;
      v12 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&val);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      result = PlayerExhibitionComp::getExhibitionReplaceableData(this, *v13);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "getReplaceableValueWithParam",
        1105);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v18,
              (const char (*)[33])"exhibition_set_ size != 1, size:");
      val = (char *)std::set<unsigned int>::size(exhibition_set_ptr);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)&val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "getReplaceableValueWithParam",
      1099);
    v7 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
           &v18,
           (const char (*)[74])"getServerKeyExhibitionSetByDungeonIdAndTriggerType nullptr, trigger_type:");
    val = (char *)data::enumValToStr(trigger_type);
    v8 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)&val);
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])", dungeon_scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0LL;
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
  return result;
};

// Line 1114: range 0000000016625866-00000000166259A1
void __cdecl PlayerExhibitionComp::triggerMonsterDamageHurtPercentOnDie(
        PlayerExhibitionComp *const this,
        Monster *monster,
        float damage_percentage)
{
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rbx
  uint32_t MonsterId; // eax
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+40h] [rbp-30h] BYREF

  if ( damage_percentage >= 0.0 && damage_percentage <= 100.0 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.exhibition_config_mgr;
    MonsterId = Monster::getMonsterId(monster);
    exhibition_set_ptr = ExhibitionExcelConfigMgr::getMonsterDamagePercentageExhibitionSetByMonsterId(
                           p_exhibition_config_mgr,
                           MonsterId);
    std::shared_ptr<Config>::~shared_ptr(&v6);
    if ( exhibition_set_ptr )
      PlayerExhibitionComp::internalSetMaxReplaceableData(this, exhibition_set_ptr, (int)damage_percentage);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "triggerMonsterDamageHurtPercentOnDie",
      1117);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      &v7,
      (const char (*)[37])"damage percentage should in [0, 100]");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 1131: range 00000000166259A2-0000000016625C96
void __cdecl PlayerExhibitionComp::triggerMonsterDrawnTimeOnDie(
        PlayerExhibitionComp *const this,
        Monster *monster,
        uint32_t delta_time)
{
  std::set<unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // r14
  uint32_t GroupId; // eax
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *v8; // rax
  std::set<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::set<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const std::set<std::pair<unsigned int,unsigned int>> *exhibition_time_set_ptr; // [rsp+38h] [rbp-E8h]
  const std::set<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::pair<unsigned int,unsigned int> *v14; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *time; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+60h] [rbp-C0h] BYREF
  char v18[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (std::set<unsigned int> *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::set<unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 19 exhibition_set:1137";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerExhibitionComp::triggerMonsterDrawnTimeOnDie;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.exhibition_config_mgr;
  GroupId = Entity::getGroupId((const Entity *const)monster);
  exhibition_time_set_ptr = ExhibitionExcelConfigMgr::getMonsterDrawnExhibitionSetByGroupId(
                              p_exhibition_config_mgr,
                              GroupId);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( exhibition_time_set_ptr )
  {
    std::set<unsigned int>::set(v3 + 1);
    __for_range = exhibition_time_set_ptr;
    __for_begin._M_node = std::set<std::pair<unsigned int,unsigned int>>::begin(exhibition_time_set_ptr)._M_node;
    __for_end._M_node = std::set<std::pair<unsigned int,unsigned int>>::end(exhibition_time_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator*(&__for_begin);
      id = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v14);
      v8 = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v14);
      time = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      if ( delta_time <= *time )
        std::set<unsigned int>::insert(v3 + 1, id);
      std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator++(&__for_begin);
    }
    PlayerExhibitionComp::internalAddReplaceableData(this, v3 + 1, 1u);
    std::set<unsigned int>::~set(v3 + 1);
  }
  if ( v18 == (char *)v3 )
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
};

// Line 1151: range 0000000016625C98-0000000016625E50
void __cdecl PlayerExhibitionComp::triggerGallerySuccLastTimeOnStop(
        PlayerExhibitionComp *const this,
        uint32_t gallery_id,
        uint32_t last_time)
{
  std::set<unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-B0h] BYREF
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (std::set<unsigned int> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::set<unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 19 exhibition_set:1152";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerExhibitionComp::triggerGallerySuccLastTimeOnStop;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  ExhibitionExcelConfigMgr::getGallerySuccLastTimeSetByGalleryId(
    v3 + 1,
    &v6->design_config.txt_config_mgr.exhibition_config_mgr,
    gallery_id);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  PlayerExhibitionComp::internalSetReplaceableData(this, v3 + 1, last_time);
  std::set<unsigned int>::~set(v3 + 1);
  if ( v9 == (char *)v3 )
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
};

// Line 1158: range 0000000016625E52-000000001662617A
uint32_t __cdecl PlayerExhibitionComp::getSeriesIdByActivityId(
        const PlayerExhibitionComp *const this,
        uint32_t activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  Player *player; // r14
  uint32_t v10; // r14d
  unsigned int *v11; // rax
  uint32_t *v12; // rdx
  uint32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+10h] [rbp-C0h] BYREF
  const std::set<unsigned int> *series_id_set_ptr; // [rsp+18h] [rbp-B8h]
  std::string server_log; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 iter:1167 64 16 8 oss:1162";
  *(_QWORD *)(v2 + 16) = PlayerExhibitionComp::getSeriesIdByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  series_id_set_ptr = ExhibitionExcelConfigMgr::getSeriesIdSetByActivityId(
                        &v5->design_config.txt_config_mgr.exhibition_config_mgr,
                        activity_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( !series_id_set_ptr || std::set<unsigned int>::size(series_id_set_ptr) != 1 )
  {
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
    v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
           (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64),
           "activity_id:");
    v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, activity_id);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, asc_25D3A240);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      &server_log,
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
    Player::notifyGMServerLog(player, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, &server_log);
    std::string::~string(&server_log);
    v10 = 0;
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 64));
  }
  else
  {
    *(std::set<unsigned int>::iterator *)(v2 + 32) = std::set<unsigned int>::begin(series_id_set_ptr);
    __y._M_node = std::set<unsigned int>::end(series_id_set_ptr)._M_node;
    if ( std::operator==((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 32), &__y) )
    {
      v10 = 0;
    }
    else
    {
      v11 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 32));
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      v10 = *v12;
    }
  }
  result = v10;
  if ( v17 == (char *)v2 )
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

// Line 1176: range 000000001662617C-000000001662679B
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerExhibitionComp::setExhibitionValueByMuip(
        PlayerExhibitionComp *const this,
        uint32_t exhibition_id,
        std::pair<bool,unsigned int> replace_op_pair,
        std::pair<bool,unsigned int> accu_op_pair)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  int v15; // r14d
  char *v16; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v17; // rax
  _DWORD *v18; // rdx
  char v19; // cl
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v25; // rdx
  unsigned int *p_second; // rax
  unsigned int v27; // r14d
  char *v28; // rsi
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v29; // rdx
  char v30; // cl
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream v38; // [rsp+20h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 17 before_value:1190 48 4 18 exhibition_id:1175 64 8 20 replace_op_pair:1175 96 8 17 accu_op_pair:1175";
  *(_QWORD *)(v4 + 16) = PlayerExhibitionComp::setExhibitionValueByMuip;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = exhibition_id;
  *(std::pair<bool,unsigned int> *)(v4 + 64) = replace_op_pair;
  *(std::pair<bool,unsigned int> *)(v4 + 96) = accu_op_pair;
  if ( !PlayerExhibitionComp::isInActiveSeries(this, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/exhibition/player_exhibition_comp.cpp",
      "setExhibitionValueByMuip",
      1179);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v38,
           (const char (*)[38])"isInActiveSeries fail exhibition_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])", replace_op_pair: ");
    v10 = common::milog::MiLogStream::operator<<<bool,unsigned int>(v9, (const std::pair<bool,unsigned int> *)(v4 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])", accu_op_pair: ");
    common::milog::MiLogStream::operator<<<bool,unsigned int>(v11, (const std::pair<bool,unsigned int> *)(v4 + 96));
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 64) & 7) >= *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v4 + 64);
    }
    if ( *(_BYTE *)(v4 + 64) )
    {
      v13 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      *(_DWORD *)(v4 + 32) = *v14;
      if ( *(_BYTE *)(((v4 + 68) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 68) & 7) + 3) >= *(_BYTE *)(((v4 + 68) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 68);
      }
      v15 = *(_DWORD *)(v4 + 68);
      v16 = (char *)(v4 + 48);
      v17 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      v18 = v17;
      v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
      {
        LOBYTE(v16) = v19 != 0;
        __asan_report_store4(v17, v16, v17);
      }
      *v18 = v15;
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "setExhibitionValueByMuip",
        1186);
      v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v38,
              (const char (*)[40])"setReplaceableDataByMuip exhibition_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])", before_value:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 32));
      v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])", cur_value:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 68));
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 96) & 7) >= *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v4 + 96);
    }
    if ( *(_BYTE *)(v4 + 96) )
    {
      v25 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      p_second = &v25->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      *(_DWORD *)(v4 + 32) = v25->second;
      if ( *(_BYTE *)(((v4 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v4 + 100) & 7) + 3) >= *(_BYTE *)(((v4 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4 + 100);
      }
      v27 = *(_DWORD *)(v4 + 100);
      v28 = (char *)(v4 + 48);
      v29 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::operator[](
              &this->exhibition_data_map_,
              (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v4 + 48));
      v30 = *(_BYTE *)(((unsigned __int64)&v29->second >> 3) + 0x7FFF8000);
      if ( v30 != 0 && (char)((((_BYTE)v29 + 4) & 7) + 3) >= v30 )
      {
        LOBYTE(v28) = v30 != 0;
        __asan_report_store4(&v29->second, v28, v29);
      }
      v29->second = v27;
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/exhibition/player_exhibition_comp.cpp",
        "setExhibitionValueByMuip",
        1192);
      v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v38,
              (const char (*)[40])"setAccumulableDataByMuip exhibition_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 48));
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v32, (const char (*)[16])", before_value:");
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 32));
      v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v34, (const char (*)[13])", cur_value:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v4 + 100));
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
    result = 0LL;
  }
  if ( v39 == (char *)v4 )
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
