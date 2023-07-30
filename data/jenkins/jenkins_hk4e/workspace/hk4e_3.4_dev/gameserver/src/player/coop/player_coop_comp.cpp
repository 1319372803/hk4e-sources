// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/coop/player_coop_comp.cpp

// Line 27: range 000000001414DD00-000000001414E078
int32_t __cdecl MainCoop::initStartCoopPointConfig(MainCoop *const this)
{
  JsonConfigMgr *p_json_config_mgr; // rcx
  __int64 v2; // rsi
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v5; // rdx
  int *p_second; // rax
  int second; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<bool,int> > >::type *v8; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v9; // rax
  int *v10; // rdx
  char v11; // cl
  uint32_t default_confidence; // [rsp+14h] [rbp-7Ch]
  std::unordered_map<unsigned int,std::pair<bool,int>>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,std::pair<bool,int>>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const MainCoopJsonConfig *config_ptr; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,std::pair<bool,int>> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,std::pair<bool,int> > *v17; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<bool,int> > >::type *id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,int> > >::type *p; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v2 = this->id;
  config_ptr = JsonConfigMgr::findMainCoopJsonConfig(p_json_config_mgr, v2);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->default_confidence >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->default_confidence >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->default_confidence);
    }
    default_confidence = config_ptr->default_confidence;
    if ( default_confidence )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->self_confidence, v2, &this->self_confidence);
      }
      this->self_confidence = default_confidence;
      __for_range = &config_ptr->temp_var_map;
      __for_begin._M_cur = std::unordered_map<unsigned int,std::pair<bool,int>>::begin(&config_ptr->temp_var_map)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,std::pair<bool,int>>::end(&config_ptr->temp_var_map)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<bool,int>>,false>(
                &__for_begin,
                &__for_end) )
      {
        v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<bool,int>>,false,false>::operator*(&__for_begin);
        id = std::get<0ul,unsigned int const,std::pair<bool,int>>(v17);
        p = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<bool,int> > >::type *)std::get<1ul,unsigned int const,std::pair<bool,int>>(v17);
        p_second = &p->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        second = p->second;
        v8 = id;
        v9 = std::unordered_map<unsigned int,int>::operator[](&this->temp_var_map, id);
        v10 = v9;
        v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
        if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
        {
          LOBYTE(v8) = v11 != 0;
          __asan_report_store4(v9, v8, v9);
        }
        *v10 = second;
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<bool,int>>,false,false>::operator++(&__for_begin);
      }
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "initStartCoopPointConfig",
        38);
      v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v21,
             (const char (*)[52])"chapter default_confidence equals zero, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->id);
      common::milog::MiLogStream::~MiLogStream(&v21);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/coop/player_coop_comp.cpp",
      "initStartCoopPointConfig",
      31);
    v3 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v21,
           (const char (*)[43])"chapter json config not found, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->id);
    common::milog::MiLogStream::~MiLogStream(&v21);
    return -1;
  }
};

// Line 51: range 000000001414E07A-000000001414E52B
int32_t __cdecl MainCoop::fromBin(MainCoop *const this, const proto::MainCoopBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  google::protobuf::uint32 v7; // edi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  google::protobuf::int32 v12; // r14d
  char *v13; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v14; // rax
  google::protobuf::int32 *v15; // rdx
  char v16; // cl
  google::protobuf::int32 v17; // r14d
  char *v18; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v19; // rax
  google::protobuf::int32 *v20; // rdx
  char v21; // cl
  int32_t result; // eax
  const proto::MainCoopBin *bina; // [rsp+10h] [rbp-D0h]
  google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin>::const_iterator __for_end_0; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-A8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin> *__for_range_0; // [rsp+50h] [rbp-90h]
  const google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin> *__for_range_1; // [rsp+58h] [rbp-88h]
  const proto::Uint32ToInt32PairBin *p_0; // [rsp+60h] [rbp-80h]
  const proto::Uint32ToInt32PairBin *p; // [rsp+68h] [rbp-78h]
  char v34[112]; // [rsp+70h] [rbp-70h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 5 id:56";
  *(_QWORD *)(v2 + 16) = MainCoop::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::MainCoopBin::id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->id = v5;
  v7 = proto::MainCoopBin::status(bina);
  v8 = (((_BYTE)this + 4) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
  {
    v7 = (_DWORD)this + 4;
    __asan_report_store4(&this->status, v8, v9);
  }
  this->status = v7;
  v10 = proto::MainCoopBin::confidence(bina);
  v11 = *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v8) = v11 != 0;
    __asan_report_store4(&this->self_confidence, v8, v10);
  }
  this->self_confidence = v10;
  std::unordered_map<unsigned int,int>::clear(&this->normal_var_map);
  __for_range = proto::MainCoopBin::save_point_id_list(bina);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::vector<unsigned int>::push_back(
      &this->save_point_vec,
      (const std::vector<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  __for_range_0 = proto::MainCoopBin::normal_var_list(bina);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32ToInt32PairBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    p = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32ToInt32PairBin const>::operator*(&__for_begin_0);
    v12 = proto::Uint32ToInt32PairBin::value(p);
    *(_DWORD *)(v2 + 32) = proto::Uint32ToInt32PairBin::key(p);
    v13 = (char *)(v2 + 32);
    v14 = std::unordered_map<unsigned int,int>::operator[](
            &this->normal_var_map,
            (std::unordered_map<unsigned int,int>::key_type *)(v2 + 32));
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v14, v13, v14);
    }
    *v15 = v12;
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32ToInt32PairBin const>::operator++(&__for_begin_0);
  }
  std::unordered_map<unsigned int,int>::clear(&this->temp_var_map);
  __for_range_1 = proto::MainCoopBin::temp_var_list(bina);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin>::begin(__for_range_1).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::Uint32ToInt32PairBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32ToInt32PairBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    p_0 = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32ToInt32PairBin const>::operator*(&__for_begin_0);
    v17 = proto::Uint32ToInt32PairBin::value(p_0);
    *(_DWORD *)(v2 + 32) = proto::Uint32ToInt32PairBin::key(p_0);
    v18 = (char *)(v2 + 32);
    v19 = std::unordered_map<unsigned int,int>::operator[](
            &this->temp_var_map,
            (std::unordered_map<unsigned int,int>::key_type *)(v2 + 32));
    v20 = v19;
    v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
    {
      LOBYTE(v18) = v21 != 0;
      __asan_report_store4(v19, v18, v19);
    }
    *v20 = v17;
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32ToInt32PairBin const>::operator++(&__for_begin_0);
  }
  result = 0;
  if ( v34 == (char *)v2 )
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

// Line 73: range 000000001414E52C-000000001414EA13
int32_t __cdecl MainCoop::toBin(const MainCoop *const this, proto::MainCoopBin *bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::pair<unsigned int const,int> *v4; // rax
  std::pair<unsigned int const,int> *v5; // rdx
  std::pair<unsigned int const,int> *v6; // rax
  std::pair<unsigned int const,int> *v7; // rdx
  std::unordered_map<unsigned int,int>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,int>::const_iterator __for_end_0; // [rsp+28h] [rbp-58h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::unordered_map<unsigned int,int> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::unordered_map<unsigned int,int> *__for_range_1; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *k_0; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v_0; // [rsp+50h] [rbp-30h]
  proto::Uint32ToInt32PairBin *p_0; // [rsp+58h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *k; // [rsp+60h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v; // [rsp+68h] [rbp-18h]
  proto::Uint32ToInt32PairBin *p; // [rsp+70h] [rbp-10h]
  std::pair<unsigned int const,int> __for_end; // [rsp+78h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::MainCoopBin::set_id(bin, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->status);
  }
  proto::MainCoopBin::set_status(bin, this->status);
  if ( *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->self_confidence);
  }
  proto::MainCoopBin::set_confidence(bin, this->self_confidence);
  __for_range = &this->save_point_vec;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,int>,false>::__node_type *)std::vector<unsigned int>::begin(&this->save_point_vec)._M_current;
  __for_end = (std::pair<unsigned int const,int>)std::vector<unsigned int>::end(&this->save_point_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end_0,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::MainCoopBin::add_save_point_id_list(bin, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
  }
  __for_range_0 = &this->normal_var_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin(&this->normal_var_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end_0) )
  {
    v4 = (std::pair<unsigned int const,int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    v5 = v4;
    if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4, 8LL);
    }
    __for_end = *v5;
    k = std::get<0ul,unsigned int const,int>(&__for_end);
    v = std::get<1ul,unsigned int const,int>(&__for_end);
    p = proto::MainCoopBin::add_normal_var_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(k);
    }
    proto::Uint32ToInt32PairBin::set_key(p, *k);
    if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v);
    }
    proto::Uint32ToInt32PairBin::set_value(p, *v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
  __for_range_1 = &this->temp_var_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin(&this->temp_var_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end_0) )
  {
    v6 = (std::pair<unsigned int const,int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    __for_end = *v7;
    k_0 = std::get<0ul,unsigned int const,int>(&__for_end);
    v_0 = std::get<1ul,unsigned int const,int>(&__for_end);
    p_0 = proto::MainCoopBin::add_temp_var_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)k_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(k_0);
    }
    proto::Uint32ToInt32PairBin::set_key(p_0, *k_0);
    if ( *(_BYTE *)(((unsigned __int64)v_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v_0);
    }
    proto::Uint32ToInt32PairBin::set_value(p_0, *v_0);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 100: range 000000001414EA14-000000001414EEE1
int32_t __cdecl MainCoop::toClient(const MainCoop *const this, proto::MainCoop *proto)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::pair<unsigned int const,int> *v4; // rax
  std::pair<unsigned int const,int> *v5; // rdx
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v6; // rax
  std::tuple_element<1,std::pair<unsigned int const,int> >::type v7; // ebx
  google::protobuf::Map<unsigned int,int> *v8; // rax
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *v9; // rsi
  int *v10; // rax
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v11; // rdx
  char v12; // cl
  std::pair<unsigned int const,int> *v13; // rax
  std::pair<unsigned int const,int> *v14; // rdx
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v15; // rax
  std::tuple_element<1,std::pair<unsigned int const,int> >::type v16; // ebx
  google::protobuf::Map<unsigned int,int> *v17; // rax
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *v18; // rsi
  int *v19; // rax
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v20; // rdx
  char v21; // cl
  std::unordered_map<unsigned int,int>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,int>::const_iterator __for_end_0; // [rsp+28h] [rbp-58h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::unordered_map<unsigned int,int> *__for_range_0; // [rsp+38h] [rbp-48h]
  const std::unordered_map<unsigned int,int> *__for_range_1; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *k_0; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v_0; // [rsp+50h] [rbp-30h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *k; // [rsp+58h] [rbp-28h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *v; // [rsp+60h] [rbp-20h]
  std::pair<unsigned int const,int> __for_end; // [rsp+68h] [rbp-18h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::MainCoop::set_id(proto, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->status);
  }
  proto::MainCoop::set_status(proto, this->status);
  if ( *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->self_confidence);
  }
  proto::MainCoop::set_self_confidence(proto, this->self_confidence);
  __for_range = &this->save_point_vec;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,int>,false>::__node_type *)std::vector<unsigned int>::begin(&this->save_point_vec)._M_current;
  __for_end = (std::pair<unsigned int const,int>)std::vector<unsigned int>::end(&this->save_point_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end_0,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::MainCoop::add_save_point_id_list(proto, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0);
  }
  __for_range_0 = &this->normal_var_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin(&this->normal_var_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end_0) )
  {
    v4 = (std::pair<unsigned int const,int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    v5 = v4;
    if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4, 8LL);
    }
    __for_end = *v5;
    k = std::get<0ul,unsigned int const,int>(&__for_end);
    v6 = std::get<1ul,unsigned int const,int>(&__for_end);
    v = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    v7 = *v;
    v8 = proto::MainCoop::mutable_normal_var_map(proto);
    v9 = k;
    v10 = google::protobuf::Map<unsigned int,int>::operator[](v8, k);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(v9) = v12 != 0;
      __asan_report_store4(v10, v9, v10);
    }
    *v11 = v7;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
  __for_range_1 = &this->temp_var_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin(&this->temp_var_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end_0) )
  {
    v13 = (std::pair<unsigned int const,int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    v14 = v13;
    if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v13, 8LL);
    }
    __for_end = *v14;
    k_0 = std::get<0ul,unsigned int const,int>(&__for_end);
    v15 = std::get<1ul,unsigned int const,int>(&__for_end);
    v_0 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    v16 = *v_0;
    v17 = proto::MainCoop::mutable_temp_var_map(proto);
    v18 = k_0;
    v19 = google::protobuf::Map<unsigned int,int>::operator[](v17, k_0);
    v20 = v19;
    v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
    {
      LOBYTE(v18) = v21 != 0;
      __asan_report_store4(v19, v18, v19);
    }
    *v20 = v16;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 123: range 000000001414EEE2-000000001414F0AD
MainCoop *__cdecl MainCoop::operator=(MainCoop *const this, const MainCoop *main_coop)
{
  uint32_t id; // ecx
  char v3; // al
  __int64 v4; // rsi
  proto::MainCoop::Status status; // ecx
  char v6; // dl
  __int64 v7; // rdx
  std::vector<unsigned int> *p_save_point_vec; // rsi
  uint32_t self_confidence; // ecx
  char v10; // al
  const MainCoop *main_coopa; // [rsp+0h] [rbp-10h]

  main_coopa = main_coop;
  if ( *(_BYTE *)(((unsigned __int64)main_coop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)main_coop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(main_coop);
  }
  id = main_coop->id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(main_coop) = v3 != 0;
    __asan_report_store4(this, main_coop, this);
  }
  this->id = id;
  v4 = (((_BYTE)main_coopa + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&main_coopa->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)main_coopa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_coopa->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&main_coopa->status);
  }
  status = main_coopa->status;
  v6 = *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->status, v4, v7);
  this->status = status;
  p_save_point_vec = &main_coopa->save_point_vec;
  std::vector<unsigned int>::operator=(&this->save_point_vec, &main_coopa->save_point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&main_coopa->self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&main_coopa->self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&main_coopa->self_confidence);
  }
  self_confidence = main_coopa->self_confidence;
  v10 = *(_BYTE *)(((unsigned __int64)&this->self_confidence >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_save_point_vec) = v10 != 0;
    __asan_report_store4(&this->self_confidence, p_save_point_vec, &this->self_confidence);
  }
  this->self_confidence = self_confidence;
  std::unordered_map<unsigned int,int>::operator=(&this->normal_var_map, &main_coopa->normal_var_map);
  std::unordered_map<unsigned int,int>::operator=(&this->temp_var_map, &main_coopa->temp_var_map);
  return this;
};

// Line 134: range 000000001414F0AE-000000001414F17D
int32_t __cdecl CoopPoint::fromBin(CoopPoint *const this, const proto::CoopPointBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  google::protobuf::uint32 v4; // edi
  __int64 v5; // rdx
  const proto::MainCoopBin *started; // rax
  const proto::CoopPointBin *bina; // [rsp+0h] [rbp-20h]

  bina = bin;
  v2 = proto::CoopPointBin::id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->id = v2;
  v4 = proto::CoopPointBin::state(bina);
  v5 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
  {
    v4 = (_DWORD)this + 4;
    __asan_report_store4(&this->state, (((_BYTE)this + 4) & 7u) + 3, v5);
  }
  this->state = v4;
  started = proto::CoopPointBin::start_main_coop(bina);
  MainCoop::fromBin(&this->start_main_coop, started);
  return 0;
};

// Line 142: range 000000001414F17E-000000001414F24E
int32_t __cdecl CoopPoint::toBin(const CoopPoint *const this, proto::CoopPointBin *bin)
{
  proto::MainCoopBin *started; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CoopPointBin::set_id(bin, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::CoopPointBin::set_state(bin, this->state);
  started = proto::CoopPointBin::mutable_start_main_coop(bin);
  MainCoop::toBin(&this->start_main_coop, started);
  return 0;
};

// Line 150: range 000000001414F250-000000001414F341
int32_t __cdecl CoopPoint::toClient(const CoopPoint *const this, proto::CoopPoint *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CoopPoint::set_id(proto, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::CoopPoint::set_state(proto, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_main_coop.self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_main_coop.self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->start_main_coop.self_confidence);
  }
  proto::CoopPoint::set_self_confidence(proto, this->start_main_coop.self_confidence);
  return 0;
};

// Line 158: range 000000001414F342-000000001414FB32
int32_t __cdecl CoopChapter::fromBin(CoopChapter *const this, const proto::CoopChapterBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rdx
  char v6; // al
  google::protobuf::uint32 v7; // edi
  __int64 v8; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t id; // r14d
  uint32_t v16; // eax
  CoopPoint *v17; // rax
  unsigned int *v18; // rcx
  CoopPoint *v19; // r8
  google::protobuf::uint32 v20; // r13d
  std::unordered_map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v22; // rax
  google::protobuf::uint32 *v23; // rdx
  char v24; // cl
  int32_t result; // eax
  const proto::CoopChapterBin *bina; // [rsp+0h] [rbp-200h]
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-1E4h] BYREF
  google::protobuf::RepeatedPtrField<proto::CoopPointBin>::const_iterator __for_begin_2; // [rsp+20h] [rbp-1E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::CoopPointBin>::const_iterator __for_end_2; // [rsp+28h] [rbp-1D8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-1D0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-1C8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-1C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+48h] [rbp-1B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-1B0h]
  const unsigned int *cg_id; // [rsp+58h] [rbp-1A8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+60h] [rbp-1A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+68h] [rbp-198h]
  const unsigned int *reward_config_id; // [rsp+70h] [rbp-190h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+78h] [rbp-188h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+80h] [rbp-180h]
  const unsigned int *dialog_id; // [rsp+88h] [rbp-178h]
  const google::protobuf::RepeatedPtrField<proto::CoopPointBin> *__for_range_2; // [rsp+90h] [rbp-170h]
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range_3; // [rsp+98h] [rbp-168h]
  const proto::Uint32PairBin *p; // [rsp+A0h] [rbp-160h]
  const proto::CoopPointBin *coop_point_bin; // [rsp+A8h] [rbp-158h]
  common::milog::MiLogStream v47; // [rsp+B0h] [rbp-150h] BYREF
  char v48[304]; // [rsp+D0h] [rbp-130h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 160 14 coop_point:188";
  *(_QWORD *)(v2 + 16) = CoopChapter::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  v5 = proto::CoopChapterBin::id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->id = v5;
  v7 = proto::CoopChapterBin::state(bina);
  v8 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
  {
    v7 = (_DWORD)this + 4;
    __asan_report_store4(&this->state, (((_BYTE)this + 4) & 7u) + 3, v8);
  }
  this->state = v7;
  std::unordered_set<unsigned int>::clear(&this->cg_set);
  __for_range = proto::CoopChapterBin::cg_list(bina);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    cg_id = __for_begin;
    v9 = std::unordered_set<unsigned int>::insert(&this->cg_set, __for_begin);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "fromBin",
        166);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v47,
              (const char (*)[39])"cg_set insert failed, duplicate cg_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, cg_id);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    ++__for_begin;
  }
  std::unordered_set<unsigned int>::clear(&this->reward_set);
  __for_range_0 = proto::CoopChapterBin::reward_list(bina);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    reward_config_id = __for_begin_0;
    v11 = std::unordered_set<unsigned int>::insert(&this->reward_set, __for_begin_0);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "fromBin",
        174);
      v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v47,
              (const char (*)[54])"reward_set insert failed, duplicate reward_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, reward_config_id);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    ++__for_begin_0;
  }
  std::unordered_set<unsigned int>::clear(&this->dialog_set);
  __for_range_1 = proto::CoopChapterBin::dialog_list(bina);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    dialog_id = __for_begin_1;
    v13 = std::unordered_set<unsigned int>::insert(&this->dialog_set, __for_begin_1);
    if ( !v13.second )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "fromBin",
        182);
      v14 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v47,
              (const char (*)[46])"dialog_set insert failed, duplicate dialog_id");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, dialog_id);
      common::milog::MiLogStream::~MiLogStream(&v47);
    }
    ++__for_begin_1;
  }
  std::unordered_map<unsigned int,CoopPoint>::clear(&this->coop_point_map);
  __for_range_2 = proto::CoopChapterBin::coop_point_list(bina);
  __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::CoopPointBin>::begin(__for_range_2).it_;
  __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::CoopPointBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CoopPointBin const>::operator!=(
            &__for_begin_2,
            &__for_end_2) )
  {
    coop_point_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CoopPointBin const>::operator*(&__for_begin_2);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    id = this->id;
    v16 = proto::CoopPointBin::id(coop_point_bin);
    CoopPoint::CoopPoint((CoopPoint *const)(v2 + 32), v16, id);
    CoopPoint::fromBin((CoopPoint *const)(v2 + 32), coop_point_bin);
    v17 = std::move<CoopPoint &>((CoopPoint *)(v2 + 32));
    std::unordered_map<unsigned int,CoopPoint>::emplace<unsigned int &,CoopPoint>(
      &this->coop_point_map,
      (unsigned int *)(v2 + 32),
      v17,
      v18,
      v19);
    CoopPoint::~CoopPoint((CoopPoint *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::CoopPointBin const>::operator++(&__for_begin_2);
  }
  std::unordered_map<unsigned int,unsigned int>::clear(&this->seen_ending_map);
  __for_range_3 = proto::CoopChapterBin::seen_ending_list(bina);
  __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range_3).it_;
  __for_end_2.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range_3).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin_2,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin>::iterator *)&__for_end_2) )
  {
    p = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin_2);
    v20 = proto::Uint32PairBin::value(p);
    __k = proto::Uint32PairBin::key(p);
    p_k = &__k;
    v22 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->seen_ending_map, &__k);
    v23 = v22;
    v24 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
    if ( v24 != 0 && (char)(((unsigned __int8)v22 & 7) + 3) >= v24 )
    {
      LOBYTE(p_k) = v24 != 0;
      __asan_report_store4(v22, p_k, v22);
    }
    *v23 = v20;
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin_2);
  }
  result = 0;
  if ( v48 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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
  return result;
};

// Line 201: range 000000001414FB34-000000001415006D
int32_t __cdecl CoopChapter::toBin(const CoopChapter *const this, proto::CoopChapterBin *bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  proto::CoopPointBin *v8; // rax
  std::pair<unsigned int const,unsigned int> *v9; // rax
  std::pair<unsigned int const,unsigned int> *v10; // rdx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-68h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-60h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-58h]
  const std::unordered_set<unsigned int> *__for_range_1; // [rsp+40h] [rbp-50h]
  const std::unordered_map<unsigned int,CoopPoint> *__for_range_2; // [rsp+48h] [rbp-48h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_3; // [rsp+50h] [rbp-40h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *k; // [rsp+58h] [rbp-38h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v; // [rsp+60h] [rbp-30h]
  proto::Uint32PairBin *p; // [rsp+68h] [rbp-28h]
  const std::pair<unsigned int const,CoopPoint> *v22; // [rsp+70h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,CoopPoint> >::type *id; // [rsp+78h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,CoopPoint> >::type *coop_point; // [rsp+80h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+88h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CoopChapterBin::set_id(bin, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->state);
  }
  proto::CoopChapterBin::set_state(bin, this->state);
  __for_range = &this->cg_set;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->cg_set)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(&this->cg_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::CoopChapterBin::add_cg_list(bin, *v3);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
  }
  __for_range_0 = &this->reward_set;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->reward_set)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v4 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::CoopChapterBin::add_reward_list(bin, *v5);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
  }
  __for_range_1 = &this->dialog_set;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->dialog_set)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end_0,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v6 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::CoopChapterBin::add_dialog_list(bin, *v7);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)&__for_end_0);
  }
  __for_range_2 = &this->coop_point_map;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<unsigned int,CoopPoint>::begin(&this->coop_point_map)._M_cur;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,CoopPoint>::end(__for_range_2)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CoopPoint>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopPoint>,false> *)&__for_end_0,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopPoint>,false> *)&__for_end) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,CoopPoint>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,CoopPoint>,false,false> *const)&__for_end_0);
    id = std::get<0ul,unsigned int const,CoopPoint>(v22);
    coop_point = (std::tuple_element<1,const std::pair<unsigned int const,CoopPoint> >::type *)std::get<1ul,unsigned int const,CoopPoint>(v22);
    v8 = proto::CoopChapterBin::add_coop_point_list(bin);
    CoopPoint::toBin(coop_point, v8);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,CoopPoint>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,CoopPoint>,false,false> *const)&__for_end_0);
  }
  __for_range_3 = &this->seen_ending_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->seen_ending_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_3)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_0, &__for_end_0) )
  {
    v9 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
    v10 = v9;
    if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v9, 8LL);
    }
    __for_end = *v10;
    k = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    v = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    p = proto::CoopChapterBin::add_seen_ending_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(k);
    }
    proto::Uint32PairBin::set_key(p, *k);
    if ( *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v);
    }
    proto::Uint32PairBin::set_value(p, *v);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
  }
  return 0;
};

// Line 230: range 000000001415006E-00000000141507F4
int32_t __cdecl CoopChapter::initWhenCreate(CoopChapter *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rdx
  int32_t result; // eax
  __int64 v7; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  CoopPoint *v10; // rax
  unsigned int *v11; // rcx
  CoopPoint *v12; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false>,bool> v13; // rax
  CoopExcelConfigMgr *v14; // rcx
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  char *v18; // rsi
  std::unordered_map<unsigned int,CoopPoint>::mapped_type *v19; // rdx
  char v20; // cl
  std::unordered_map<unsigned int,CoopPoint>::mapped_type *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-1A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-198h] BYREF
  const std::set<unsigned int> *point_set_ptr; // [rsp+20h] [rbp-190h]
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-188h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-170h] BYREF
  char v31[336]; // [rsp+60h] [rbp-150h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 18 start_point_id:247 64 160 9 point:240";
  *(_QWORD *)(v1 + 16) = CoopChapter::initWhenCreate;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862727] = -202116109;
  v3[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.coop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  point_set_ptr = CoopExcelConfigMgr::findChapterCoopPointSet(p_coop_config_mgr, this->id);
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( point_set_ptr )
  {
    v7 = (*(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store4(&this->state, (((_BYTE)this + 4) & 7u) + 3, v7);
    this->state = CoopChapter_State_STATE_ACCEPT;
    __for_range = point_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(point_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(point_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v1 + 48) = *v9;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      CoopPoint::CoopPoint((CoopPoint *const)(v1 + 64), *(_DWORD *)(v1 + 48), this->id);
      v10 = std::move<CoopPoint &>((CoopPoint *)(v1 + 64));
      v13 = std::unordered_map<unsigned int,CoopPoint>::emplace<unsigned int &,CoopPoint>(
              &this->coop_point_map,
              (unsigned int *)(v1 + 48),
              v10,
              v11,
              v12);
      if ( !v13.second )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/coop/player_coop_comp.cpp",
          "initWhenCreate",
          244);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v30, (const char (*)[15])"emplace failed");
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      CoopPoint::~CoopPoint((CoopPoint *const)(v1 + 64));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v14 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.coop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    *(_DWORD *)(v1 + 48) = CoopExcelConfigMgr::findChapterStartCoopPoint(v14, this->id);
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopPoint>,unsigned int>(
            &this->coop_point_map,
            (const unsigned int *)(v1 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "initWhenCreate",
        250);
      v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v30,
              (const char (*)[43])"chapter start_point not exist, chapter_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->id);
      v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v16,
              (const char (*)[18])", start_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = -1;
    }
    else
    {
      v18 = (char *)(v1 + 48);
      v19 = std::unordered_map<unsigned int,CoopPoint>::at(
              &this->coop_point_map,
              (const std::unordered_map<unsigned int,CoopPoint>::key_type *)(v1 + 48));
      v20 = *(_BYTE *)(((unsigned __int64)&v19->state >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)((((_BYTE)v19 + 4) & 7) + 3) >= v20 )
      {
        LOBYTE(v18) = v20 != 0;
        __asan_report_store4(&v19->state, v18, v19);
      }
      v19->state = CoopPoint_State_STATE_STARTED;
      v21 = std::unordered_map<unsigned int,CoopPoint>::at(
              &this->coop_point_map,
              (const std::unordered_map<unsigned int,CoopPoint>::key_type *)(v1 + 48));
      if ( MainCoop::initStartCoopPointConfig(&v21->start_main_coop) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/coop/player_coop_comp.cpp",
          "initWhenCreate",
          258);
        v22 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v30,
                (const char (*)[45])"initStartCoopPointConfig failed, chapter_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->id);
        v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v23,
                (const char (*)[18])", start_point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/coop/player_coop_comp.cpp",
      "initWhenCreate",
      234);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v30,
           (const char (*)[44])"findChapterCoopPointSet failed, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->id);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = -1;
  }
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 265: range 00000000141507F6-0000000014150A90
int32_t __cdecl CoopProgress::fromBin(CoopProgress *const this, const proto::CoopProgressBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // eax
  MainCoop *v8; // rdx
  const unsigned int *v9; // rcx
  MainCoop *v10; // r8
  int32_t result; // eax
  const proto::CoopProgressBin *bina; // [rsp+0h] [rbp-190h]
  const google::protobuf::Map<unsigned int,proto::MainCoopBin> *__for_range; // [rsp+10h] [rbp-180h]
  google::protobuf::Map<unsigned int,proto::MainCoopBin>::const_reference p_quest_id; // [rsp+18h] [rbp-178h]
  google::protobuf::Map<unsigned int,proto::MainCoopBin>::const_iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  google::protobuf::Map<unsigned int,proto::MainCoopBin>::const_iterator __for_end; // [rsp+40h] [rbp-150h] BYREF
  char v17[304]; // [rsp+60h] [rbp-130h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 152 13 main_coop:269";
  *(_QWORD *)(v2 + 16) = CoopProgress::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  v5 = proto::CoopProgressBin::coop_point_id(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->coop_point_id = v5;
  __for_range = proto::CoopProgressBin::main_coop_map(bina);
  google::protobuf::Map<unsigned int,proto::MainCoopBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::MainCoopBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_quest_id = google::protobuf::Map<unsigned int,proto::MainCoopBin>::const_iterator::operator*(&__for_begin);
    v7 = proto::MainCoopBin::id(&p_quest_id->second);
    MainCoop::MainCoop((MainCoop *const)(v2 + 32), v7);
    MainCoop::fromBin((MainCoop *const)(v2 + 32), &p_quest_id->second);
    v8 = std::move<MainCoop &>((MainCoop *)(v2 + 32));
    std::unordered_map<unsigned int,MainCoop>::emplace<unsigned int const&,MainCoop>(
      &this->main_coop_map,
      &p_quest_id->first,
      v8,
      v9,
      v10);
    MainCoop::~MainCoop((MainCoop *const)(v2 + 32));
    google::protobuf::Map<unsigned int,proto::MainCoopBin>::const_iterator::operator++(&__for_begin);
  }
  result = 0;
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 277: range 0000000014150A92-0000000014150BA6
int32_t __cdecl CoopProgress::toBin(const CoopProgress *const this, proto::CoopProgressBin *bin)
{
  std::unordered_map<unsigned int,MainCoop>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,MainCoop>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  google::protobuf::Map<unsigned int,proto::MainCoopBin> *main_coop_bin_map; // [rsp+20h] [rbp-30h]
  const std::unordered_map<unsigned int,MainCoop> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,MainCoop> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,MainCoop> >::type *id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,MainCoop> >::type *main_coop; // [rsp+40h] [rbp-10h]
  proto::MainCoopBin *main_coop_bin; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::CoopProgressBin::set_coop_point_id(bin, this->coop_point_id);
  main_coop_bin_map = proto::CoopProgressBin::mutable_main_coop_map(bin);
  __for_range = &this->main_coop_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,MainCoop>::begin(&this->main_coop_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,MainCoop>::end(&this->main_coop_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,MainCoop>,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,MainCoop>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,MainCoop>(v7);
    main_coop = (std::tuple_element<1,const std::pair<unsigned int const,MainCoop> >::type *)std::get<1ul,unsigned int const,MainCoop>(v7);
    main_coop_bin = google::protobuf::Map<unsigned int,proto::MainCoopBin>::operator[](main_coop_bin_map, id);
    MainCoop::toBin(main_coop, main_coop_bin);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,MainCoop>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 289: range 0000000014150BA8-0000000014150BFF
void __cdecl CoopProgress::clear(CoopProgress *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->coop_point_id = 0;
  std::unordered_map<unsigned int,MainCoop>::clear(&this->main_coop_map);
};

// Line 296: range 0000000014150C00-0000000014150E99
int32_t __cdecl PlayerCoopComp::fromBin(PlayerCoopComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // eax
  CoopChapter *v6; // r8
  const proto::CoopProgressBin *v7; // rax
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::CoopChapterBin>::const_iterator __for_begin; // [rsp+18h] [rbp-1C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CoopChapterBin>::const_iterator __for_end; // [rsp+20h] [rbp-1C0h] BYREF
  const proto::PlayerCoopCompBin *comp_bin; // [rsp+28h] [rbp-1B8h]
  const google::protobuf::RepeatedPtrField<proto::CoopChapterBin> *__for_range; // [rsp+30h] [rbp-1B0h]
  const proto::CoopChapterBin *chapter_bin; // [rsp+38h] [rbp-1A8h]
  char v15[416]; // [rsp+40h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 288 16 coop_chapter:300";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
  comp_bin = proto::PlayerDataBin::coop_bin(player_data_bin);
  __for_range = proto::PlayerCoopCompBin::chapter_bin_list(comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CoopChapterBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CoopChapterBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CoopChapterBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    chapter_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CoopChapterBin const>::operator*(&__for_begin);
    v5 = proto::CoopChapterBin::id(chapter_bin);
    CoopChapter::CoopChapter((CoopChapter *const)(v2 + 32), v5);
    CoopChapter::fromBin((CoopChapter *const)(v2 + 32), chapter_bin);
    std::unordered_map<unsigned int,CoopChapter>::emplace<unsigned int &,CoopChapter&>(
      &this->chapter_map_,
      (unsigned int *)(v2 + 32),
      (CoopChapter *)(v2 + 32),
      (unsigned int *)&this->chapter_map_,
      v6);
    CoopChapter::~CoopChapter((CoopChapter *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::CoopChapterBin const>::operator++(&__for_begin);
  }
  v7 = proto::PlayerCoopCompBin::progress_bin(comp_bin);
  CoopProgress::fromBin(&this->cur_progress_, v7);
  v8 = proto::PlayerCoopCompBin::viewed_chapter_list(comp_bin);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->viewed_chapter_set_,
    v8);
  result = 0;
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 310: range 0000000014150E9A-0000000014150EB8
int32_t __cdecl PlayerCoopComp::init(PlayerCoopComp *const this)
{
  PlayerCoopComp::initEventObservers(this);
  return 0;
};

// Line 316: range 0000000014150EBA-0000000014150FED
int32_t __cdecl PlayerCoopComp::start(PlayerCoopComp *const this)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( common::tools::MiTimer::isActive(&this->coop_timer_)
    || !PlayerUnixTimer::startS(&this->coop_timer_, 0x3Cu, 1, "./src/player/coop/player_coop_comp.cpp", "start", 317) )
  {
    return 0;
  }
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/coop/player_coop_comp.cpp",
    "start",
    319);
  v2 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v5,
         (const char (*)[31])"coop_timer_ start failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};

// Line 326: range 0000000014150FEE-0000000014150FFC
int32_t __cdecl PlayerCoopComp::onFirstLogin(PlayerCoopComp *const this)
{
  return 0;
};

// Line 331: range 0000000014150FFE-000000001415105A
int32_t __cdecl PlayerCoopComp::onLogin(PlayerCoopComp *const this, bool is_new_player)
{
  std::set<unsigned int> v3; // [rsp+10h] [rbp-30h] BYREF

  PlayerCoopComp::reloadChapterStartCoopPointConfig(this);
  PlayerCoopComp::getUpdateOpeningChapter(&v3, this);
  std::set<unsigned int>::operator=(&this->opening_chapter_set_, &v3);
  std::set<unsigned int>::~set(&v3);
  return 0;
};

// Line 340: range 000000001415105C-00000000141513F7
int32_t __cdecl PlayerCoopComp::notifyAllData(PlayerCoopComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  proto::CoopChapter *v4; // rdx
  bool v5; // al
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  int32_t result; // eax
  int value; // [rsp+1Ch] [rbp-134h] BYREF
  std::unordered_map<unsigned int,CoopChapter>::iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::unordered_map<unsigned int,CoopChapter>::iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  std::unordered_map<unsigned int,CoopChapter> *__for_range; // [rsp+30h] [rbp-120h]
  std::pair<unsigned int const,CoopChapter> *__in; // [rsp+38h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,CoopChapter> >::type *chapter_id; // [rsp+40h] [rbp-110h]
  std::tuple_element<1,std::pair<unsigned int const,CoopChapter> >::type *coop_chapter; // [rsp+48h] [rbp-108h]
  std::set<unsigned int> p_chapter_set; // [rsp+50h] [rbp-100h] BYREF
  char v16[208]; // [rsp+80h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 80 10 notify:341";
  *(_QWORD *)(v1 + 16) = PlayerCoopComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862724] = -202116109;
  proto::CoopDataNotify::CoopDataNotify((proto::CoopDataNotify *const)(v1 + 48));
  __for_range = &this->chapter_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CoopChapter>::begin(&this->chapter_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CoopChapter>::end(&this->chapter_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CoopChapter>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>::operator*(&__for_begin);
    chapter_id = std::get<0ul,unsigned int const,CoopChapter>(__in);
    coop_chapter = std::get<1ul,unsigned int const,CoopChapter>(__in);
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->opening_chapter_set_,
           chapter_id) )
    {
      v4 = proto::CoopDataNotify::add_chapter_list((proto::CoopDataNotify *const)(v1 + 48));
      PlayerCoopComp::fillInProtoChapter(this, coop_chapter, v4);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>::operator++(&__for_begin);
  }
  std::set<unsigned int>::set(&p_chapter_set, &this->opening_chapter_set_);
  PlayerCoopComp::fillInOpeningProtoChapter(this, &p_chapter_set, (proto::CoopDataNotify *)(v1 + 48));
  std::set<unsigned int>::~set(&p_chapter_set);
  value = 0;
  v5 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
         &this->cur_progress_.main_coop_map,
         &value);
  proto::CoopDataNotify::set_is_have_progress((proto::CoopDataNotify *const)(v1 + 48), v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  proto::CoopDataNotify::set_cur_coop_point((proto::CoopDataNotify *const)(v1 + 48), this->cur_progress_.coop_point_id);
  v6 = proto::CoopDataNotify::mutable_viewed_chapter_list((proto::CoopDataNotify *const)(v1 + 48));
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->viewed_chapter_set_, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  PlayerCoopComp::notifyMainCoop(this);
  proto::CoopDataNotify::~CoopDataNotify((proto::CoopDataNotify *const)(v1 + 48));
  result = 0;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 366: range 00000000141513F8-0000000014151506
int32_t __cdecl PlayerCoopComp::toBin(PlayerCoopComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::CoopChapterBin *v2; // rax
  proto::CoopProgressBin *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::unordered_map<unsigned int,CoopChapter>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,CoopChapter>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::PlayerCoopCompBin *comp_bin; // [rsp+28h] [rbp-38h]
  std::unordered_map<unsigned int,CoopChapter> *__for_range; // [rsp+30h] [rbp-30h]
  std::pair<unsigned int const,CoopChapter> *__in; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,CoopChapter> >::type *chapter_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,CoopChapter> >::type *coop_chapter; // [rsp+48h] [rbp-18h]

  comp_bin = proto::PlayerDataBin::mutable_coop_bin(player_data_bin);
  __for_range = &this->chapter_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CoopChapter>::begin(&this->chapter_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CoopChapter>::end(&this->chapter_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CoopChapter>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>::operator*(&__for_begin);
    chapter_id = std::get<0ul,unsigned int const,CoopChapter>(__in);
    coop_chapter = std::get<1ul,unsigned int const,CoopChapter>(__in);
    v2 = proto::PlayerCoopCompBin::add_chapter_bin_list(comp_bin);
    CoopChapter::toBin(coop_chapter, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>::operator++(&__for_begin);
  }
  v3 = proto::PlayerCoopCompBin::mutable_progress_bin(comp_bin);
  CoopProgress::toBin(&this->cur_progress_, v3);
  v4 = proto::PlayerCoopCompBin::mutable_viewed_chapter_list(comp_bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(&this->viewed_chapter_set_, v4);
  return 0;
};

// Line 378: range 0000000014151508-00000000141515CE
MainCoop *__cdecl PlayerCoopComp::findMainCoop(PlayerCoopComp *const this)
{
  int value; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  value = 0;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
          &this->cur_progress_.main_coop_map,
          &value) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "findMainCoop",
      381);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v3, (const char (*)[21])off_25252100);
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0LL;
  }
  else
  {
    value = 0;
    return std::unordered_map<unsigned int,MainCoop>::at(
             &this->cur_progress_.main_coop_map,
             (const std::unordered_map<unsigned int,MainCoop>::key_type *)&value);
  }
};

// Line 389: range 00000000141515D0-000000001415189C
__int64 __fastcall PlayerCoopComp::isMainCoopRunning(PlayerCoopComp *const this, uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  bool v8; // al
  __int64 result; // rax
  MainCoop *coop_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 id:388";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::isMainCoopRunning;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = id;
  coop_ptr = PlayerCoopComp::findMainCoop(this);
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/coop/player_coop_comp.cpp",
    "isMainCoopRunning",
    392);
  v5 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
         &v11,
         (const char (*)[23])"isMainCoopRunning, id:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", res:");
  if ( !coop_ptr )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(coop_ptr);
  }
  if ( coop_ptr->id != *(_DWORD *)(v2 + 32) )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)&coop_ptr->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)coop_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&coop_ptr->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&coop_ptr->status);
  }
  if ( coop_ptr->status == MainCoop_Status_RUNNING )
    v8 = 1;
  else
LABEL_12:
    v8 = 0;
  common::milog::MiLogStream::operator<<(v7, v8);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( !coop_ptr )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(coop_ptr);
  }
  if ( coop_ptr->id != *(_DWORD *)(v2 + 32) )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)&coop_ptr->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)coop_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&coop_ptr->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&coop_ptr->status);
  }
  if ( coop_ptr->status == MainCoop_Status_RUNNING )
    result = 1LL;
  else
LABEL_21:
    result = 0LL;
  if ( v12 == (char *)v2 )
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

// Line 399: range 000000001415189E-0000000014151B71
__int64 __fastcall PlayerCoopComp::isMainCoopHasSavePoint(
        PlayerCoopComp *const this,
        uint32_t id,
        uint32_t save_point_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  bool v11; // al
  __int64 result; // rax
  MainCoop *coop_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:398 64 4 17 save_point_id:398";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::isMainCoopHasSavePoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = id;
  *(_DWORD *)(v3 + 64) = save_point_id;
  coop_ptr = PlayerCoopComp::findMainCoop(this);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/coop/player_coop_comp.cpp",
    "isMainCoopHasSavePoint",
    402);
  v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
         &v15,
         (const char (*)[28])"isMainCoopHasSavePoint, id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])", save_point_id:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 64));
  v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", res:");
  if ( !coop_ptr )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(coop_ptr);
  }
  if ( coop_ptr->id == *(_DWORD *)(v3 + 48)
    && common::tools::MiscUtils::isContains<unsigned int>(&coop_ptr->save_point_vec, (const unsigned int *)(v3 + 64)) )
  {
    v11 = 1;
  }
  else
  {
LABEL_10:
    v11 = 0;
  }
  common::milog::MiLogStream::operator<<(v10, v11);
  common::milog::MiLogStream::~MiLogStream(&v15);
  if ( !coop_ptr )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)coop_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(coop_ptr);
  }
  if ( coop_ptr->id == *(_DWORD *)(v3 + 48)
    && common::tools::MiscUtils::isContains<unsigned int>(&coop_ptr->save_point_vec, (const unsigned int *)(v3 + 64)) )
  {
    result = 1LL;
  }
  else
  {
LABEL_17:
    result = 0LL;
  }
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

// Line 409: range 0000000014151B72-0000000014151D4B
void __cdecl PlayerCoopComp::notifyMainCoop(PlayerCoopComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::unordered_map<unsigned int,MainCoop>::mapped_type *v4; // r14
  proto::MainCoop *v5; // rax
  int value; // [rsp+1Ch] [rbp-B4h] BYREF
  char v7[176]; // [rsp+20h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:412";
  *(_QWORD *)(v1 + 16) = PlayerCoopComp::notifyMainCoop;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  value = 0;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
         &this->cur_progress_.main_coop_map,
         &value) )
  {
    proto::MainCoopUpdateNotify::MainCoopUpdateNotify((proto::MainCoopUpdateNotify *const)(v1 + 48));
    value = 0;
    v4 = std::unordered_map<unsigned int,MainCoop>::at(
           &this->cur_progress_.main_coop_map,
           (const std::unordered_map<unsigned int,MainCoop>::key_type *)&value);
    v5 = proto::MainCoopUpdateNotify::add_main_coop_list((proto::MainCoopUpdateNotify *const)(v1 + 48));
    MainCoop::toClient(v4, v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
    proto::MainCoopUpdateNotify::~MainCoopUpdateNotify((proto::MainCoopUpdateNotify *const)(v1 + 48));
  }
  if ( v7 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 419: range 0000000014151D4C-000000001415310D
int32_t __cdecl PlayerCoopComp::saveMainCoop(
        PlayerCoopComp *const this,
        const proto::SaveMainCoopReq *req,
        proto::SaveMainCoopRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  google::protobuf::uint32 v6; // edx
  JsonConfigMgr *p_json_config_mgr; // r14
  uint32_t v8; // r15d
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  int32_t result; // eax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  uint32_t v18; // edx
  common::milog::MiLogStream *v19; // rbx
  google::protobuf::uint32 v20; // r14d
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  bool v22; // r14
  common::milog::MiLogStream *v23; // rbx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  google::protobuf::uint32 v26; // ecx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rbx
  common::milog::MiLogStream *v30; // rbx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v31; // rax
  _DWORD *v32; // rdx
  JsonConfigMgr *v33; // r15
  uint32_t v34; // r14d
  uint32_t v35; // eax
  common::milog::MiLogStream *v36; // r14
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  google::protobuf::uint32 v39; // r14d
  JsonConfigMgr *v40; // r15
  uint32_t v41; // eax
  common::milog::MiLogStream *v42; // r14
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rbx
  std::vector<unsigned int> *p_save_point_vec; // r14
  unsigned int *p_val; // rsi
  __int64 v47; // rdx
  char v48; // al
  const google::protobuf::MapPair<unsigned int,int> *v49; // rax
  int M_current_high; // r14d
  std::vector<unsigned int>::iterator *p_for_end_0; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v52; // rax
  _DWORD *v53; // rdx
  char v54; // cl
  const google::protobuf::MapPair<unsigned int,int> *v55; // rax
  int v56; // r14d
  std::vector<unsigned int>::iterator *v57; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v58; // rax
  _DWORD *v59; // rdx
  char v60; // cl
  PlayerWatcherComp *WatcherComp; // r14
  uint32_t v62; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v63; // rax
  unsigned int *v64; // rdx
  PlayerWatcherComp *v65; // r15
  std::vector<unsigned int> *v66; // r14
  uint32_t v67; // eax
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+28h] [rbp-168h] BYREF
  unsigned int save_point_id; // [rsp+2Ch] [rbp-164h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  CoopChapter *chapter_ptr; // [rsp+38h] [rbp-158h]
  MainCoop *main_coop_ptr; // [rsp+40h] [rbp-150h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  const google::protobuf::Map<unsigned int,int> *__for_range_0; // [rsp+50h] [rbp-140h]
  const google::protobuf::Map<unsigned int,int> *__for_range_1; // [rsp+58h] [rbp-138h]
  std::vector<unsigned int> *__for_range_2; // [rsp+60h] [rbp-130h]
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+68h] [rbp-128h] BYREF
  std::shared_ptr<MainCoopSavePointEvent> __r; // [rsp+70h] [rbp-120h] BYREF
  std::shared_ptr<Config> v82; // [rsp+80h] [rbp-110h] BYREF
  google::protobuf::Map<unsigned int,int>::const_iterator __for_begin_0; // [rsp+90h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,int>::const_iterator __for_end; // [rsp+B0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v85; // [rsp+D0h] [rbp-C0h] BYREF
  MainCoopVarEqualEvent event; // [rsp+F0h] [rbp-A0h] BYREF
  char v87[112]; // [rsp+120h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 save_point_id:472";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::saveMainCoop;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  v6 = proto::SaveMainCoopReq::id(req);
  proto::SaveMainCoopRsp::set_id(rsp_0, v6);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v82);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82)->design_config.json_config_mgr;
  v8 = proto::SaveMainCoopReq::save_point_id(req);
  v9 = proto::SaveMainCoopReq::id(req);
  LOBYTE(p_json_config_mgr) = !JsonConfigMgr::isMainCoopSavePoint(p_json_config_mgr, v9, v8);
  std::shared_ptr<Config>::~shared_ptr(&v82);
  if ( (_BYTE)p_json_config_mgr )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "saveMainCoop",
      424);
    v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v85,
            (const char (*)[41])"isMainCoopSavePoint false, main_coop_id:");
    *(_DWORD *)(v3 + 32) = proto::SaveMainCoopReq::id(req);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])", save_point_id:");
    val = proto::SaveMainCoopReq::save_point_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    result = -1;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "saveMainCoop",
      430);
    v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v85,
            (const char (*)[44])"inMpMode saveMainCoop failed, main_coop_id:");
    *(_DWORD *)(v3 + 32) = proto::SaveMainCoopReq::id(req);
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v16, (const char (*)[17])", save_point_id:");
    val = proto::SaveMainCoopReq::save_point_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    result = -1;
    goto LABEL_67;
  }
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_test);
  if ( this->is_in_test )
    goto LABEL_26;
  v18 = proto::SaveMainCoopReq::id(req);
  chapter_ptr = PlayerCoopComp::findCoopChapter(this, v18);
  if ( !chapter_ptr )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)chapter_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&chapter_ptr->state);
  }
  if ( chapter_ptr->state != CoopChapter_State_STATE_ACCEPT )
  {
LABEL_17:
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "saveMainCoop",
      438);
    v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v85,
            (const char (*)[41])"invalid coop chapter status, chapter_id:");
    val = proto::SaveMainCoopReq::id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    result = -1;
    goto LABEL_67;
  }
  v20 = proto::SaveMainCoopReq::id(req);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v82);
  p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82)->design_config.txt_config_mgr.coop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  v22 = v20 != CoopExcelConfigMgr::getCoopPointChapterId(p_coop_config_mgr, this->cur_progress_.coop_point_id);
  std::shared_ptr<Config>::~shared_ptr(&v82);
  if ( v22 )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "saveMainCoop",
      444);
    v23 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v85,
            (const char (*)[42])"player have no coop progress, chapter_id:");
    val = proto::SaveMainCoopReq::id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
    common::milog::MiLogStream::~MiLogStream(&v85);
    result = -1;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(chapter_ptr);
  }
  if ( !PlayerCoopComp::isChapterOpening(this, chapter_ptr->id) )
  {
    common::milog::MiLogStream::create(
      &v85,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "saveMainCoop",
      449);
    v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v85,
            (const char (*)[46])"chapter is taken but not opening, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &chapter_ptr->id);
    common::milog::MiLogStream::~MiLogStream(&v85);
    result = 9601;
  }
  else
  {
LABEL_26:
    main_coop_ptr = PlayerCoopComp::findMainCoop(this);
    if ( main_coop_ptr )
    {
      v26 = proto::SaveMainCoopReq::id(req);
      if ( *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(main_coop_ptr);
      }
      if ( v26 == main_coop_ptr->id )
      {
        val = proto::SaveMainCoopReq::save_point_id(req);
        if ( common::tools::MiscUtils::isContains<unsigned int>(&main_coop_ptr->save_point_vec, &val) )
        {
          common::milog::MiLogStream::create(
            &v85,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/coop/player_coop_comp.cpp",
            "saveMainCoop",
            468);
          v30 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  &v85,
                  (const char (*)[66])"save_point_id has been restored in save_point_vec, save_point_id:");
          val = proto::SaveMainCoopReq::save_point_id(req);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
          common::milog::MiLogStream::~MiLogStream(&v85);
          result = -1;
        }
        else
        {
          __for_range = &main_coop_ptr->save_point_vec;
          __for_begin._M_current = std::vector<unsigned int>::begin(&main_coop_ptr->save_point_vec)._M_current;
          __for_end_0._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end_0) )
          {
            v31 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
            v32 = v31;
            if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v31);
            }
            *(_DWORD *)(v3 + 32) = *v32;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v82);
            v33 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82)->design_config.json_config_mgr;
            v34 = *(_DWORD *)(v3 + 32);
            v35 = proto::SaveMainCoopReq::id(req);
            LOBYTE(v34) = !JsonConfigMgr::isMainCoopSavePoint(v33, v35, v34);
            std::shared_ptr<Config>::~shared_ptr(&v82);
            if ( (_BYTE)v34 )
            {
              common::milog::MiLogStream::create(
                &v85,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/coop/player_coop_comp.cpp",
                "saveMainCoop",
                476);
              v36 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      &v85,
                      (const char (*)[41])"isMainCoopSavePoint false, main_coop_id:");
              val = proto::SaveMainCoopReq::id(req);
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &val);
              v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v37,
                      (const char (*)[17])", save_point_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v85);
              result = -1;
              goto LABEL_67;
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
          }
          v39 = proto::SaveMainCoopReq::self_confidence(req);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v82);
          v40 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v82)->design_config.json_config_mgr;
          v41 = proto::SaveMainCoopReq::id(req);
          LOBYTE(v39) = v39 > JsonConfigMgr::getMainCoopMaxConfidence(v40, v41);
          std::shared_ptr<Config>::~shared_ptr(&v82);
          if ( (_BYTE)v39 )
          {
            common::milog::MiLogStream::create(
              &v85,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/coop/player_coop_comp.cpp",
              "saveMainCoop",
              483);
            v42 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    &v85,
                    (const char (*)[54])"coop confidence exceeds max_confidence, main_coop_id:");
            *(_DWORD *)(v3 + 32) = proto::SaveMainCoopReq::id(req);
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v42,
                    (const unsigned int *)(v3 + 32));
            v44 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v43,
                    (const char (*)[19])", save_confidence:");
            val = proto::SaveMainCoopReq::self_confidence(req);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &val);
            common::milog::MiLogStream::~MiLogStream(&v85);
            result = -1;
          }
          else
          {
            p_save_point_vec = &main_coop_ptr->save_point_vec;
            val = proto::SaveMainCoopReq::save_point_id(req);
            p_val = &val;
            std::vector<unsigned int>::push_back(p_save_point_vec, &val);
            v47 = proto::SaveMainCoopReq::self_confidence(req);
            v48 = *(_BYTE *)(((unsigned __int64)&main_coop_ptr->self_confidence >> 3) + 0x7FFF8000);
            if ( v48 != 0 && v48 <= 3 )
            {
              LOBYTE(p_val) = v48 != 0;
              __asan_report_store4(&main_coop_ptr->self_confidence, p_val, v47);
            }
            main_coop_ptr->self_confidence = v47;
            std::unordered_map<unsigned int,int>::clear(&main_coop_ptr->normal_var_map);
            __for_range_0 = proto::SaveMainCoopReq::normal_var_map(req);
            google::protobuf::Map<unsigned int,int>::begin(&__for_begin_0, __for_range_0);
            google::protobuf::Map<unsigned int,int>::end(&__for_end, __for_range_0);
            while ( google::protobuf::operator!=(&__for_begin_0, &__for_end) )
            {
              v49 = google::protobuf::Map<unsigned int,int>::const_iterator::operator*(&__for_begin_0);
              google::protobuf::MapPair<unsigned int,int>::MapPair(
                (google::protobuf::MapPair<unsigned int,int> *const)&__for_end_0,
                v49);
              M_current_high = HIDWORD(__for_end_0._M_current);
              p_for_end_0 = &__for_end_0;
              v52 = std::unordered_map<unsigned int,int>::operator[](
                      &main_coop_ptr->normal_var_map,
                      (const std::unordered_map<unsigned int,int>::key_type *)&__for_end_0);
              v53 = v52;
              v54 = *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000);
              if ( v54 != 0 && (char)(((unsigned __int8)v52 & 7) + 3) >= v54 )
              {
                LOBYTE(p_for_end_0) = v54 != 0;
                __asan_report_store4(v52, p_for_end_0, v52);
              }
              *v53 = M_current_high;
              google::protobuf::MapPair<unsigned int,int>::~MapPair((google::protobuf::MapPair<unsigned int,int> *const)&__for_end_0);
              google::protobuf::Map<unsigned int,int>::const_iterator::operator++(&__for_begin_0);
            }
            std::unordered_map<unsigned int,int>::clear(&main_coop_ptr->temp_var_map);
            __for_range_1 = proto::SaveMainCoopReq::temp_var_map(req);
            google::protobuf::Map<unsigned int,int>::begin(&__for_begin_0, __for_range_1);
            google::protobuf::Map<unsigned int,int>::end(&__for_end, __for_range_1);
            while ( google::protobuf::operator!=(&__for_begin_0, &__for_end) )
            {
              v55 = google::protobuf::Map<unsigned int,int>::const_iterator::operator*(&__for_begin_0);
              google::protobuf::MapPair<unsigned int,int>::MapPair(
                (google::protobuf::MapPair<unsigned int,int> *const)&__for_end_0,
                v55);
              v56 = HIDWORD(__for_end_0._M_current);
              v57 = &__for_end_0;
              v58 = std::unordered_map<unsigned int,int>::operator[](
                      &main_coop_ptr->temp_var_map,
                      (const std::unordered_map<unsigned int,int>::key_type *)&__for_end_0);
              v59 = v58;
              v60 = *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000);
              if ( v60 != 0 && (char)(((unsigned __int8)v58 & 7) + 3) >= v60 )
              {
                LOBYTE(v57) = v60 != 0;
                __asan_report_store4(v58, v57, v58);
              }
              *v59 = v56;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              WatcherComp = Player::getWatcherComp(this->player_);
              v62 = proto::SaveMainCoopReq::id(req);
              MainCoopVarEqualEvent::MainCoopVarEqualEvent(
                &event,
                v62,
                (uint32_t)__for_end_0._M_current,
                SHIDWORD(__for_end_0._M_current));
              PlayerWatcherComp::triggerMainCoopSetVar(WatcherComp, &event);
              MainCoopVarEqualEvent::~MainCoopVarEqualEvent(&event);
              google::protobuf::MapPair<unsigned int,int>::~MapPair((google::protobuf::MapPair<unsigned int,int> *const)&__for_end_0);
              google::protobuf::Map<unsigned int,int>::const_iterator::operator++(&__for_begin_0);
            }
            __for_range_2 = &main_coop_ptr->save_point_vec;
            __for_begin._M_current = std::vector<unsigned int>::begin(&main_coop_ptr->save_point_vec)._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_2)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end_0) )
            {
              v63 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
              v64 = v63;
              if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v63);
              }
              save_point_id = *v64;
              proto::SaveMainCoopRsp::add_save_point_id_list(rsp_0, save_point_id);
              __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            PlayerCoopComp::notifyMainCoop(this);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v65 = Player::getWatcherComp(this->player_);
            v66 = &main_coop_ptr->save_point_vec;
            v67 = proto::SaveMainCoopReq::id(req);
            PlayerWatcherComp::triggerSaveMainCoop(v65, v67, v66);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            EventComp = Player::getEventComp(this->player_);
            val = proto::SaveMainCoopReq::save_point_id(req);
            *(_DWORD *)(v3 + 32) = proto::SaveMainCoopReq::id(req);
            common::tools::perf::make_shared<MainCoopSavePointEvent,unsigned int,unsigned int>(
              (unsigned int *)&__r,
              (unsigned int *)(v3 + 32),
              &val,
              (unsigned int *)(v3 + 32));
            std::shared_ptr<BaseEvent>::shared_ptr<MainCoopSavePointEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v82,
              &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v82);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v82);
            std::shared_ptr<MainCoopSavePointEvent>::~shared_ptr(&__r);
            result = 0;
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v85,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "saveMainCoop",
          462);
        v27 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(&v85, (const char (*)[56])off_252525E0);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &main_coop_ptr->id);
        v29 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v28,
                (const char (*)[21])", finish_chapter_id:");
        val = proto::SaveMainCoopReq::id(req);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
        common::milog::MiLogStream::~MiLogStream(&v85);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v85,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "saveMainCoop",
        457);
      v25 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v85,
              (const char (*)[46])"player have no current main_coop, chapter_id:");
      val = proto::SaveMainCoopReq::id(req);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
      common::milog::MiLogStream::~MiLogStream(&v85);
      result = -1;
    }
  }
LABEL_67:
  if ( v87 == (char *)v3 )
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

// Line 513: range 000000001415310E-0000000014153D26
__int64 __fastcall PlayerCoopComp::finishMainCoop(
        PlayerCoopComp *const this,
        uint32_t id,
        uint32_t ending_save_point_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t v25; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  PlayerWatcherComp *WatcherComp; // rax
  __int64 v31; // rdx
  PlayerEventComp *EventComp; // r14
  uint32_t point_id; // [rsp+1Ch] [rbp-E4h]
  MainCoop *main_coop_ptr; // [rsp+20h] [rbp-E0h]
  CoopChapter *chapter_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<MainCoopSavePointEvent> __r; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<Config> v38; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v39; // [rsp+50h] [rbp-B0h] BYREF
  char v40[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:512 64 4 24 ending_save_point_id:512";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::finishMainCoop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = id;
  *(_DWORD *)(v3 + 64) = ending_save_point_id;
  main_coop_ptr = PlayerCoopComp::findMainCoop(this);
  if ( !main_coop_ptr )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "finishMainCoop",
      517);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v39,
           (const char (*)[42])"player have no coop progress, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(main_coop_ptr);
  }
  if ( main_coop_ptr->id != *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "finishMainCoop",
      522);
    v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(&v39, (const char (*)[56])off_252525E0);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &main_coop_ptr->id);
    v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v9,
            (const char (*)[21])", finish_chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
    goto LABEL_49;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
  v12 = !JsonConfigMgr::isMainCoopEndSavePoint(
           &v11->design_config.json_config_mgr,
           *(_DWORD *)(v3 + 48),
           *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v38);
  if ( v12 )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "finishMainCoop",
      528);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v39,
            (const char (*)[44])"isMainCoopEndSavePoint false, main_coop_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])", save_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "finishMainCoop",
      534);
    v17 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v39,
            (const char (*)[46])"inMpMode finishMainCoop failed, main_coop_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v18, (const char (*)[17])", save_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
    goto LABEL_49;
  }
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_test);
  if ( !this->is_in_test )
  {
    chapter_ptr = PlayerCoopComp::findCoopChapter(this, *(_DWORD *)(v3 + 48));
    if ( !chapter_ptr )
      goto LABEL_23;
    if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chapter_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&chapter_ptr->state);
    }
    if ( chapter_ptr->state != CoopChapter_State_STATE_ACCEPT )
    {
LABEL_23:
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "finishMainCoop",
        542);
      v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v39,
              (const char (*)[41])"invalid coop chapter status, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = 0xFFFFFFFFLL;
      goto LABEL_49;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.coop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_progress_);
    }
    v22 = CoopExcelConfigMgr::getCoopPointChapterId(p_coop_config_mgr, this->cur_progress_.coop_point_id) != *(_DWORD *)(v3 + 48);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( v22 )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "finishMainCoop",
        548);
      v23 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v39,
              (const char (*)[42])"player have no coop progress, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = 0xFFFFFFFFLL;
      goto LABEL_49;
    }
    if ( *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(chapter_ptr);
    }
    if ( !PlayerCoopComp::isChapterOpening(this, chapter_ptr->id) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "finishMainCoop",
        553);
      v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v39,
              (const char (*)[46])"chapter is taken but not opening, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &chapter_ptr->id);
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = 9601LL;
      goto LABEL_49;
    }
    v25 = *(_DWORD *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(chapter_ptr);
    }
    if ( !PlayerCoopComp::canFinishMainCoopInCurProgress(this, chapter_ptr->id, v25) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "finishMainCoop",
        559);
      v26 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v39,
              (const char (*)[51])"canFinishMainCoopInCurProgress failed, chapter_id:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &chapter_ptr->id);
      v28 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v27,
              (const char (*)[24])", ending_save_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v39);
      result = 0xFFFFFFFFLL;
      goto LABEL_49;
    }
    if ( *(_DWORD *)(v3 + 64) )
    {
      v29 = (unsigned __int64)std::unordered_map<unsigned int,unsigned int>::operator[](
                                &chapter_ptr->seen_ending_map,
                                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 64));
      if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) != 0 && (char)((v29 & 7) + 3) >= *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
        v29 = __asan_report_load4(v29);
      ++*(_DWORD *)v29;
    }
  }
  std::vector<unsigned int>::push_back(
    &main_coop_ptr->save_point_vec,
    (const std::vector<unsigned int>::value_type *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  WatcherComp = Player::getWatcherComp(this->player_);
  PlayerWatcherComp::triggerSaveMainCoop(WatcherComp, *(_DWORD *)(v3 + 48), &main_coop_ptr->save_point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  point_id = this->cur_progress_.coop_point_id;
  v31 = (*(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)main_coop_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_store4(&main_coop_ptr->status, (((_BYTE)main_coop_ptr + 4) & 7u) + 3, v31);
  main_coop_ptr->status = MainCoop_Status_FINISHED;
  PlayerCoopComp::notifyMainCoop(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  common::tools::perf::make_shared<MainCoopSavePointEvent,unsigned int &,unsigned int &>(
    (unsigned int *)&__r,
    (unsigned int *)(v3 + 48),
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 48));
  std::shared_ptr<BaseEvent>::shared_ptr<MainCoopSavePointEvent,void>((std::shared_ptr<BaseEvent> *const)&v38, &__r);
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v38);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v38);
  std::shared_ptr<MainCoopSavePointEvent>::~shared_ptr(&__r);
  PlayerCoopComp::onFinishMainCoop(this, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
  PlayerCoopComp::clearCoopProgress(this);
  PlayerCoopComp::notifyCoopProgress(this);
  PlayerCoopComp::notifyChapterUpdate(this, *(_DWORD *)(v3 + 48));
  PlayerCoopComp::logFinishMainCoop(this, point_id, *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
  result = 0LL;
LABEL_49:
  if ( v40 == (char *)v3 )
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

// Line 595: range 0000000014153D28-00000000141547DF
__int64 __fastcall PlayerCoopComp::unlockCoopChapter(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::mapped_type *v15; // rax
  _QWORD *v16; // rdx
  PlayerItemComp *ItemComp; // rax
  CoopChapter *v18; // r8
  common::milog::MiLogStream *v19; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  PlayerItemComp *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t v24; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t ChapterStartCoopPoint; // eax
  __int64 result; // rax
  const data::CoopChapterExcelConfig *chapter_config_ptr; // [rsp+18h] [rbp-268h]
  std::shared_ptr<Config> v29; // [rsp+20h] [rbp-260h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-250h] BYREF
  char v31[560]; // [rsp+50h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 ret:625 48 4 14 chapter_id:594 64 8 13 item_pair:623 96 8 10 reason:643 128 16 14 item_"
                        "param:624 160 288 11 chapter:631";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::unlockCoopChapter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  *(_DWORD *)(v2 + 48) = chapter_id;
  if ( !PlayerCoopComp::isChapterOpening(this, *(_DWORD *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "unlockCoopChapter",
      598);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v30,
           (const char (*)[36])"chapter is not opening, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v6 = 9601;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopChapter>,unsigned int>(
              &this->chapter_map_,
              (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "unlockCoopChapter",
      603);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v30,
           (const char (*)[33])"chapter is unlocked, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v6 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    chapter_config_ptr = data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(
                           &v8->design_config.txt_config_mgr.coop_config_mgr,
                           *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( chapter_config_ptr )
    {
      if ( !PlayerCoopComp::isCoopCondSatisfy(this, &chapter_config_ptr->unlock_cond) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "unlockCoopChapter",
          614);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v30,
                (const char (*)[39])"CoopCond is not satisfied, chapter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        v6 = 9602;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        v12 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> const,unsigned int>(
                 &v11->design_config.txt_config_mgr.coop_config_mgr.chapter_unlock_item_map,
                 (const unsigned int *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( v12 )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/coop/player_coop_comp.cpp",
            "unlockCoopChapter",
            619);
          v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v30,
                  (const char (*)[31])"chapter not config unlock item");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v30);
          v6 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v29);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
          v15 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::at(
                  &v14->design_config.txt_config_mgr.coop_config_mgr.chapter_unlock_item_map,
                  (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 48));
          v16 = v15;
          if ( ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v15 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v15->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v15, 8LL);
          }
          *(_QWORD *)(v2 + 64) = *v16;
          std::shared_ptr<Config>::~shared_ptr(&v29);
          *(_QWORD *)(v2 + 128) = 0LL;
          *(_QWORD *)(v2 + 136) = 0LL;
          *(_DWORD *)(v2 + 128) = *(_DWORD *)(v2 + 64);
          *(_DWORD *)(v2 + 132) = *(_DWORD *)(v2 + 68);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          ItemComp = Player::getItemComp(this->player_);
          *(_DWORD *)(v2 + 32) = PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 128));
          if ( *(_DWORD *)(v2 + 32) )
          {
            v6 = *(_DWORD *)(v2 + 32);
          }
          else
          {
            CoopChapter::CoopChapter((CoopChapter *const)(v2 + 160), *(_DWORD *)(v2 + 48));
            if ( CoopChapter::initWhenCreate((CoopChapter *const)(v2 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/coop/player_coop_comp.cpp",
                "unlockCoopChapter",
                634);
              v19 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      &v30,
                      (const char (*)[43])"chapter initWhenCreate failed, chapter_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v30);
              v6 = -1;
            }
            else
            {
              v20 = std::unordered_map<unsigned int,CoopChapter>::emplace<unsigned int &,CoopChapter&>(
                      &this->chapter_map_,
                      (unsigned int *)(v2 + 48),
                      (CoopChapter *)(v2 + 160),
                      (unsigned int *)&this->chapter_map_,
                      v18);
              if ( !v20.second )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/coop/player_coop_comp.cpp",
                  "unlockCoopChapter",
                  639);
                v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        &v30,
                        (const char (*)[33])"chapter is unlocked, chapter_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
                common::milog::MiLogStream::~MiLogStream(&v30);
                v6 = -1;
              }
              else
              {
                SubItemReason::SubItemReason((SubItemReason *const)(v2 + 96), ACTION_REASON_UNLOCK_COOP_CHAPTER);
                *(_DWORD *)(v2 + 100) = *(_DWORD *)(v2 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                v22 = Player::getItemComp(this->player_);
                *(_DWORD *)(v2 + 32) = PlayerItemComp::subItem(
                                         v22,
                                         (const ItemParam *)(v2 + 128),
                                         (const SubItemReason *)(v2 + 96));
                if ( *(_DWORD *)(v2 + 32) )
                {
                  common::milog::MiLogStream::create(
                    &v30,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/coop/player_coop_comp.cpp",
                    "unlockCoopChapter",
                    648);
                  v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                          &v30,
                          (const char (*)[21])"subItem failed, ret:");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v23, (const int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream(&v30);
                }
                PlayerCoopComp::notifyChapterUpdate(this, *(_DWORD *)(v2 + 48));
                PlayerCoopComp::logUnlockCoopChapter(this, *(_DWORD *)(v2 + 48));
                v24 = *(_DWORD *)(v2 + 48);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v29);
                v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
                ChapterStartCoopPoint = CoopExcelConfigMgr::findChapterStartCoopPoint(
                                          &v25->design_config.txt_config_mgr.coop_config_mgr,
                                          *(_DWORD *)(v2 + 48));
                PlayerCoopComp::logInvokeCoopPoint(this, ChapterStartCoopPoint, v24);
                std::shared_ptr<Config>::~shared_ptr(&v29);
                v6 = *(_DWORD *)(v2 + 32);
              }
            }
            CoopChapter::~CoopChapter((CoopChapter *const)(v2 + 160));
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "unlockCoopChapter",
        609);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v30,
             (const char (*)[47])"findCoopChapterExcelConfig failed, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      v6 = -1;
    }
  }
  result = v6;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 660: range 00000000141547E0-0000000014154E99
int32_t __cdecl PlayerCoopComp::startCoopPoint(
        PlayerCoopComp *const this,
        const proto::StartCoopPointReq *req,
        proto::StartCoopPointRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerMpComp *MpComp; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t CoopPointChapterId; // edx
  bool v12; // r14
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::unordered_map<unsigned int,MainCoop>::mapped_type *v16; // r12
  proto::MainCoop *started; // rax
  unsigned int val; // [rsp+20h] [rbp-B0h] BYREF
  int32_t ret; // [rsp+24h] [rbp-ACh]
  const data::CoopPointExcelConfig *point_config_ptr; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-90h] BYREF
  char v24[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 coop_point_id:661";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::startCoopPoint;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = proto::StartCoopPointReq::coop_point(req);
  proto::StartCoopPointRsp::set_coop_point(rsp_0, *(_DWORD *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "startCoopPoint",
      667);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v23,
      (const char (*)[30])"MpMode can not startCoopPoint");
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    point_config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(
                         &v8->design_config.txt_config_mgr.coop_config_mgr,
                         *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( point_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(
                             &v10->design_config.txt_config_mgr.coop_config_mgr,
                             *(_DWORD *)(v3 + 32));
      v12 = !PlayerCoopComp::isChapterOpening(this, CoopPointChapterId);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "startCoopPoint",
          679);
        v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v23,
                (const char (*)[46])"chapter is taken but not opening, chapter_id:");
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v22);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
        val = CoopExcelConfigMgr::getCoopPointChapterId(
                &v14->design_config.txt_config_mgr.coop_config_mgr,
                *(_DWORD *)(v3 + 32));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        std::shared_ptr<Config>::~shared_ptr(&v22);
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = 9601;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_progress_);
        }
        if ( this->cur_progress_.coop_point_id == *(_DWORD *)(v3 + 32) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/coop/player_coop_comp.cpp",
            "startCoopPoint",
            685);
          v15 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v23,
                  (const char (*)[61])"current CoopPoint is request start CoopPoint, coop_point_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v23);
          result = -1;
        }
        else
        {
          ret = PlayerCoopComp::internalStartCoopPoint(this, *(_DWORD *)(v3 + 32));
          if ( ret )
          {
            result = ret;
          }
          else
          {
            val = 0;
            if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
                    &this->cur_progress_.main_coop_map,
                    (const int *)&val) )
            {
              common::milog::MiLogStream::create(
                &v23,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/coop/player_coop_comp.cpp",
                "startCoopPoint",
                695);
              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v23, (const char (*)[24])off_25252E20);
              common::milog::MiLogStream::~MiLogStream(&v23);
            }
            else
            {
              val = 0;
              v16 = std::unordered_map<unsigned int,MainCoop>::at(&this->cur_progress_.main_coop_map, &val);
              started = proto::StartCoopPointRsp::mutable_start_main_coop(rsp_0);
              MainCoop::toClient(v16, started);
            }
            if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&point_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&point_config_ptr->type);
            }
            proto::StartCoopPointRsp::set_is_start(rsp_0, point_config_ptr->type == POINT_START);
            result = 0;
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "startCoopPoint",
        674);
      v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v23,
             (const char (*)[48])"findCoopPointExcelConfig failed, coop_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = -1;
    }
  }
  if ( v24 == (char *)v3 )
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

// Line 706: range 0000000014154E9A-000000001415543F
__int64 __fastcall PlayerCoopComp::cancelCookTask(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerMpComp *MpComp; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9; // r14
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  char v11; // r15
  common::milog::MiLogStream *v12; // r14
  CoopExcelConfigMgr *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int val; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 chapter_id:705";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::cancelCookTask;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = chapter_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "cancelCookTask",
      710);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v18,
      (const char (*)[30])"MpMode can not cancelCookTask");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopChapter>,unsigned int>(
               &this->chapter_map_,
               (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "cancelCookTask",
      716);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v18,
           (const char (*)[32])"chapter not unlock, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else if ( !PlayerCoopComp::isChapterOpening(this, *(_DWORD *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "cancelCookTask",
      721);
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v18,
           (const char (*)[46])"chapter is taken but not opening, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 9601LL;
  }
  else
  {
    v9 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_progress_);
    }
    if ( !this->cur_progress_.coop_point_id )
      goto LABEL_19;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v9 = 1;
    p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.coop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_progress_);
    }
    if ( CoopExcelConfigMgr::getCoopPointChapterId(p_coop_config_mgr, this->cur_progress_.coop_point_id) == *(_DWORD *)(v2 + 32) )
LABEL_19:
      v11 = 0;
    else
      v11 = 1;
    if ( v9 )
      std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( v11 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "cancelCookTask",
        728);
      v12 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(&v18, (const char (*)[53])off_25252F40);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v13 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.coop_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_progress_);
      }
      val = CoopExcelConfigMgr::getCoopPointChapterId(v13, this->cur_progress_.coop_point_id);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v14,
              (const char (*)[21])", cancel_chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v17);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    PlayerCoopComp::clearCoopProgress(this);
    PlayerCoopComp::notifyCoopProgress(this);
    result = 0LL;
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

// Line 740: range 0000000014155440-0000000014156003
__int64 __fastcall PlayerCoopComp::internalStartCoopPoint(PlayerCoopComp *const this, uint32_t coop_point_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v14; // rax
  _DWORD *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  __int64 v20; // rsi
  uint32_t v21; // ecx
  char v22; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t CoopPointChapterId; // eax
  MainCoop *v25; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,MainCoop>,false,false>,bool> v26; // rax
  PlayerEventComp *EventComp; // r14
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v29; // rax
  __int64 result; // rax
  int value; // [rsp+1Ch] [rbp-1C4h] BYREF
  const data::CoopPointExcelConfig *point_config_ptr; // [rsp+20h] [rbp-1C0h]
  CoopPoint *point_ptr; // [rsp+28h] [rbp-1B8h]
  std::shared_ptr<MainCoopStartEvent> __r; // [rsp+30h] [rbp-1B0h] BYREF
  std::shared_ptr<Config> v35; // [rsp+40h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-190h] BYREF
  char v37[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 quest_id:764 64 4 14 chapter_id:771 80 4 17 coop_point_id:739 96 152 13 main_coop:785";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::internalStartCoopPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 80) = coop_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
  point_config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(
                       &v5->design_config.txt_config_mgr.coop_config_mgr,
                       *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( point_config_ptr )
  {
    point_ptr = PlayerCoopComp::findCoopPoint(this, *(_DWORD *)(v2 + 80));
    if ( point_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&point_ptr->state);
      }
      if ( point_ptr->state )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v35);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
        v11 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
                 &v10->design_config.txt_config_mgr.coop_config_mgr.point_accept_quest_map,
                 (const unsigned int *)(v2 + 80));
        std::shared_ptr<Config>::~shared_ptr(&v35);
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/coop/player_coop_comp.cpp",
            "internalStartCoopPoint",
            761);
          v12 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                  &v36,
                  (const char (*)[64])"coop_point not config accept quest cannot start, coop_point_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v36);
          v7 = -1;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v35);
          v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
          v14 = std::unordered_map<unsigned int,unsigned int>::at(
                  &v13->design_config.txt_config_mgr.coop_config_mgr.point_accept_quest_map,
                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 80));
          v15 = v14;
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v14);
          }
          *(_DWORD *)(v2 + 48) = *v15;
          std::shared_ptr<Config>::~shared_ptr(&v35);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v35);
          v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
          v17 = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                  &v16->design_config.txt_config_mgr.quest_config_mgr,
                  *(_DWORD *)(v2 + 48)) == 0LL;
          std::shared_ptr<Config>::~shared_ptr(&v35);
          if ( v17 )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/coop/player_coop_comp.cpp",
              "internalStartCoopPoint",
              767);
            v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v36,
                    (const char (*)[39])"findQuestExcelConfig failed, quest_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v36);
            v7 = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v35);
            v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
            *(_DWORD *)(v2 + 64) = CoopExcelConfigMgr::getCoopPointChapterId(
                                     &v19->design_config.txt_config_mgr.coop_config_mgr,
                                     *(_DWORD *)(v2 + 80));
            std::shared_ptr<Config>::~shared_ptr(&v35);
            value = 0;
            if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
                   &this->cur_progress_.main_coop_map,
                   &value) )
            {
              PlayerCoopComp::clearCoopProgress(this);
            }
            v20 = *(unsigned int *)(v2 + 64);
            PlayerCoopComp::clearCoopQuestSeries(this, v20);
            v21 = *(_DWORD *)(v2 + 80);
            v22 = *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000);
            if ( v22 != 0 && v22 <= 3 )
            {
              LOBYTE(v20) = v22 != 0;
              __asan_report_store4(&this->cur_progress_, v20, &this->cur_progress_);
            }
            this->cur_progress_.coop_point_id = v21;
            std::unordered_map<unsigned int,MainCoop>::clear(&this->cur_progress_.main_coop_map);
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v35);
            v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
            CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(
                                   &v23->design_config.txt_config_mgr.coop_config_mgr,
                                   *(_DWORD *)(v2 + 80));
            MainCoop::MainCoop((MainCoop *const)(v2 + 96), CoopPointChapterId);
            std::shared_ptr<Config>::~shared_ptr(&v35);
            MainCoop::operator=((MainCoop *const)(v2 + 96), &point_ptr->start_main_coop);
            *(_DWORD *)(v2 + 100) = 1;
            value = 0;
            v26 = std::unordered_map<unsigned int,MainCoop>::emplace<int,MainCoop&>(
                    &this->cur_progress_.main_coop_map,
                    &value,
                    (MainCoop *)(v2 + 96),
                    (int *)&this->cur_progress_.main_coop_map,
                    v25);
            if ( !v26.second )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/coop/player_coop_comp.cpp",
                "internalStartCoopPoint",
                795);
              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v36,
                (const char (*)[29])"main_coop_map emplace failed");
              common::milog::MiLogStream::~MiLogStream(&v36);
            }
            PlayerCoopComp::notifyMainCoop(this);
            if ( *(_BYTE *)(((unsigned __int64)&point_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&point_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&point_config_ptr->type);
            }
            if ( point_config_ptr->type == POINT_START )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              EventComp = Player::getEventComp(this->player_);
              common::tools::perf::make_shared<MainCoopStartEvent,unsigned int &>(
                (unsigned int *)&__r,
                (unsigned int *)(v2 + 64));
              std::shared_ptr<BaseEvent>::shared_ptr<MainCoopStartEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&v35,
                &__r);
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v35);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v35);
              std::shared_ptr<MainCoopStartEvent>::~shared_ptr(&__r);
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              QuestComp = Player::getQuestComp(this->player_);
              PlayerQuestComp::acceptQuest(QuestComp, *(_DWORD *)(v2 + 48), 1, 1);
            }
            PlayerCoopComp::notifyCoopProgress(this);
            PlayerCoopComp::logStartCoopPoint(this, *(_DWORD *)(v2 + 80), *(_DWORD *)(v2 + 64));
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/coop/player_coop_comp.cpp",
              "internalStartCoopPoint",
              816);
            v29 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v36,
                    (const char (*)[18])"start coop_point:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::~MiLogStream(&v36);
            v7 = 0;
            MainCoop::~MainCoop((MainCoop *const)(v2 + 96));
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "internalStartCoopPoint",
          755);
        v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v36,
               (const char (*)[49])"coop point is not started, can't play, point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = 9603;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "internalStartCoopPoint",
        750);
      v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v36,
             (const char (*)[37])"findCoopPoint failed, coop_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "internalStartCoopPoint",
      744);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v36,
           (const char (*)[48])"findCoopPointExcelConfig failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = -1;
  }
  result = v7;
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 821: range 0000000014156004-00000000141566D6
__int64 __fastcall PlayerCoopComp::takeCoopReward(PlayerCoopComp *const this, uint32_t reward_config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerItemComp *v14; // rax
  uint32_t chapter_id; // [rsp+18h] [rbp-E8h]
  unsigned int ret; // [rsp+1Ch] [rbp-E4h]
  CoopChapter *chapter_ptr; // [rsp+20h] [rbp-E0h]
  const data::CoopRewardExcelConfig *reward_config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v19; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-C0h] BYREF
  char v21[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 reward_id:846 48 4 20 reward_config_id:820 64 24 10 reason:848";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::takeCoopReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = reward_config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  chapter_id = CoopExcelConfigMgr::getCoopRewardChapterId(
                 &v5->design_config.txt_config_mgr.coop_config_mgr,
                 *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v19);
  chapter_ptr = PlayerCoopComp::findCoopChapter(this, chapter_id);
  if ( !chapter_ptr )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)chapter_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&chapter_ptr->state);
  }
  if ( chapter_ptr->state == CoopChapter_State_STATE_ACCEPT )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    reward_config_ptr = data::CoopExcelConfigMgrBase::findCoopRewardExcelConfig(
                          &v8->design_config.txt_config_mgr.coop_config_mgr,
                          *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( reward_config_ptr )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &chapter_ptr->reward_set,
             (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/coop/player_coop_comp.cpp",
          "takeCoopReward",
          838);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v20,
                (const char (*)[36])"reward has taken, reward_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 9605LL;
      }
      else if ( !PlayerCoopComp::isCoopCondSatisfy(this, &reward_config_ptr->reward_cond) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "takeCoopReward",
          843);
        v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v20,
                (const char (*)[36])"cond not satisfy, reward_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = 9602LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config_ptr->reward_id >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&reward_config_ptr->reward_id);
        }
        *(_DWORD *)(v2 + 32) = reward_config_ptr->reward_id;
        ActionReason::ActionReason(
          (ActionReason *const)(v2 + 64),
          ACTION_REASON_TAKE_COOP_REWARD,
          ITEM_LIMIT_COOP_TASK_REWARD);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        ItemComp = Player::getItemComp(this->player_);
        ret = PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v2 + 32), (const ActionReason *)(v2 + 64));
        if ( ret )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/coop/player_coop_comp.cpp",
            "takeCoopReward",
            852);
          v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v20,
                  (const char (*)[36])"checkGrantReward failed, reward_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = ret;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v14 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v14, *(_DWORD *)(v2 + 32), (const ActionReason *)(v2 + 64), 0LL);
          std::unordered_set<unsigned int>::insert(
            &chapter_ptr->reward_set,
            (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
          PlayerCoopComp::logTakeCoopReward(this, *(_DWORD *)(v2 + 48), chapter_id);
          result = 0LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "takeCoopReward",
        833);
      v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v20,
             (const char (*)[52])"findCoopRewardExcelConfig failed, reward_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v20);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
LABEL_8:
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "takeCoopReward",
      827);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v20,
           (const char (*)[48])"invalid chapter_state failed, reward_config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
  }
  if ( v21 == (char *)v2 )
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
  return result;
};

// Line 866: range 00000000141566D8-00000000141566EC
int32_t __cdecl PlayerCoopComp::saveCoopDialog(PlayerCoopComp *const this, uint32_t main_coop_id, uint32_t dialog_id)
{
  return 0;
};

// Line 873: range 00000000141566EE-0000000014156CBB
__int64 __fastcall PlayerCoopComp::canAcceptCoopPointNormalQuest(PlayerCoopComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  char v13; // r14
  CoopExcelConfigMgr *p_coop_config_mgr; // r15
  bool v15; // r15
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const std::set<unsigned int> *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF
  std::pair<unsigned int,unsigned int> v24; // 0:rsi.8

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 23 start_coop_point_id:887 64 4 12 quest_id:872";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::canAcceptCoopPointNormalQuest;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = quest_id;
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_test);
  if ( this->is_in_test )
  {
    result = 1LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    v7 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
            &v6->design_config.txt_config_mgr.quest_config_mgr.quest_to_coop_point_map,
            (const unsigned int *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( v7 )
    {
      result = 1LL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      v9 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
             &v8->design_config.txt_config_mgr.coop_config_mgr.quest_start_point_map,
             (const unsigned int *)(v2 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( v9 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        v11 = std::unordered_map<unsigned int,unsigned int>::at(
                &v10->design_config.txt_config_mgr.coop_config_mgr.quest_start_point_map,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v2 + 48) = *v12;
        std::shared_ptr<Config>::~shared_ptr(&v21);
        v13 = 0;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_progress_);
        }
        v15 = 1;
        if ( this->cur_progress_.coop_point_id != *(_DWORD *)(v2 + 48) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v21);
          v13 = 1;
          p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.coop_config_mgr;
          v24 = std::make_pair<unsigned int &,unsigned int &>(
                  &this->cur_progress_.coop_point_id,
                  (unsigned int *)(v2 + 48));
          if ( !CoopExcelConfigMgr::isCoopPointEdge(p_coop_config_mgr, v24) )
            v15 = 0;
        }
        if ( v13 )
          std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( v15 )
        {
          result = 1LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/coop/player_coop_comp.cpp",
            "canAcceptCoopPointNormalQuest",
            896);
          v16 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v22,
                  (const char (*)[47])"canAcceptCoopPointNormalQuest false, quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = 0LL;
        }
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        v18 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v17->design_config.txt_config_mgr.quest_config_mgr.quest_to_coop_point_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 64));
        v19 = !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                 v18,
                 &this->cur_progress_.coop_point_id);
        std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( v19 )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/coop/player_coop_comp.cpp",
            "canAcceptCoopPointNormalQuest",
            906);
          v20 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v22,
                  (const char (*)[47])"canAcceptCoopPointNormalQuest false, quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = 0LL;
        }
        else
        {
          result = 1LL;
        }
      }
    }
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

// Line 916: range 0000000014156CBC-0000000014157006
_BOOL8 __fastcall PlayerCoopComp::canAcceptCoopPointStartQuest(PlayerCoopComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  char v11; // r13
  _BOOL8 result; // rax
  uint32_t coop_point_id; // [rsp+Ch] [rbp-B4h]
  char v14; // [rsp+13h] [rbp-ADh]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-A0h] BYREF
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-80h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:915";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::canAcceptCoopPointStartQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  v5 = 0;
  v14 = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
          &v6->design_config.txt_config_mgr.coop_config_mgr.quest_start_point_map,
          (const unsigned int *)(v2 + 32)) )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  coop_point_id = this->cur_progress_.coop_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = 1;
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  v8 = std::unordered_map<unsigned int,unsigned int>::at(
         &v7->design_config.txt_config_mgr.coop_config_mgr.quest_start_point_map,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  if ( coop_point_id != *v9 )
    goto LABEL_14;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v14 = 1;
  p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.coop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  if ( !CoopExcelConfigMgr::isStartCoopPoint(p_coop_config_mgr, this->cur_progress_.coop_point_id) )
    v11 = 1;
  else
LABEL_14:
    v11 = 0;
  if ( v14 )
    std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( v5 )
    std::shared_ptr<Config>::~shared_ptr(&v16);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  result = v11 != 0;
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

// Line 928: range 0000000014157008-0000000014157674
bool __cdecl PlayerCoopComp::isCoopCondSatisfy(
        PlayerCoopComp *const this,
        const std::vector<data::CoopCondConfig> *coop_cond_vec)
{
  bool v2; // r14
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerQuestComp *QuestComp; // r15
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v7; // rax
  uint32_t *v8; // rdx
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  uint32_t *v12; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  uint32_t *v14; // rdx
  uint32_t AvatarComp; // r15d
  std::vector<unsigned int>::const_reference v16; // rax
  int v17; // r15d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  FetterComp *FetterComp; // rax
  uint32_t v20; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v21; // rax
  uint32_t *v22; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  uint32_t *v24; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v25; // rax
  uint32_t *v26; // rdx
  uint32_t CoopChapterEndFinishCount; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v28; // rax
  uint32_t *v29; // rdx
  bool result; // al
  std::vector<data::CoopCondConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::vector<data::CoopCondConfig>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const std::vector<data::CoopCondConfig> *__for_range; // [rsp+30h] [rbp-80h]
  const data::CoopCondConfig *cond; // [rsp+38h] [rbp-78h]
  char v35[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 avatar_ptr:960";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::isCoopCondSatisfy;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = coop_cond_vec;
  __for_begin._M_current = std::vector<data::CoopCondConfig>::begin(coop_cond_vec)._M_current;
  __for_end._M_current = std::vector<data::CoopCondConfig>::end(coop_cond_vec)._M_current;
  while ( 2 )
  {
    if ( __gnu_cxx::operator!=<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>(&__for_begin, &__for_end) )
    {
      cond = __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->cond_type);
      }
      switch ( cond->cond_type )
      {
        case COOP_COND_FINISH_QUEST:
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          QuestComp = Player::getQuestComp(this->player_);
          v7 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                     &cond->args,
                                                                                                     0LL);
          v8 = v7;
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v7);
          }
          if ( PlayerQuestComp::getQuestState(QuestComp, *v8) == QUEST_STATE_FINISHED )
            goto LABEL_48;
          v2 = 0;
          break;
        case COOP_COND_PLAYER_LEVEL:
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          BasicComp = Player::getBasicComp(this->player_);
          Level = PlayerBasicComp::getLevel(BasicComp);
          v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->args, 0LL);
          v12 = v11;
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v11);
          }
          if ( Level >= *v12 )
            goto LABEL_48;
          v2 = 0;
          break;
        case COOP_COND_COOP_POINT_FINISH:
          v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->args, 0LL);
          v14 = v13;
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v13);
          }
          if ( PlayerCoopComp::isCoopPointFinished(this, *v14) )
            goto LABEL_48;
          v2 = 0;
          break;
        case COOP_COND_AVATAR_FETTER_LEVEL:
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
          v16 = std::vector<unsigned int>::operator[](&cond->args, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v16);
          }
          PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v3 + 32), AvatarComp);
          if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 32), 0LL) )
          {
            v2 = 0;
            v17 = 0;
          }
          else
          {
            v18 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            FetterComp = FormalAvatar::getFetterComp(v18);
            v20 = FetterComp::getLevel(FetterComp);
            v21 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->args, 1uLL);
            v22 = v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            if ( v20 >= *v22 )
            {
              v17 = 1;
            }
            else
            {
              v2 = 0;
              v17 = 0;
            }
          }
          std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 32));
          if ( v17 )
            goto LABEL_48;
          break;
        case COOP_COND_CHAPTER_END_ALL_FINISH:
          v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->args, 0LL);
          v24 = v23;
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v23);
          }
          if ( PlayerCoopComp::isCoopChapterEndAllFinished(this, *v24) )
            goto LABEL_48;
          v2 = 0;
          break;
        case COOP_COND_CHAPTER_END_FINISH_COUNT:
          v25 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->args, 0LL);
          v26 = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          CoopChapterEndFinishCount = PlayerCoopComp::getCoopChapterEndFinishCount(this, *v26);
          v28 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->args, 1uLL);
          v29 = v28;
          if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v28);
          }
          if ( CoopChapterEndFinishCount >= *v29 )
            goto LABEL_48;
          v2 = 0;
          break;
        default:
LABEL_48:
          __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator++(&__for_begin);
          continue;
      }
    }
    else
    {
      v2 = 1;
    }
    break;
  }
  result = v2;
  if ( v35 == (char *)v3 )
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

// Line 997: range 00000000141576CE-00000000141586EA
void __fastcall PlayerCoopComp::processCoopQuestStart(PlayerCoopComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v11; // rax
  _DWORD *v12; // rdx
  MainCoop *v13; // rbx
  MainCoop *v14; // rax
  CoopExcelConfigMgr *p_coop_config_mgr; // r14
  common::milog::MiLogStream *v16; // rax
  std::unordered_map<unsigned int,MainCoop>::mapped_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  char *v23; // rsi
  uint32_t v24; // ecx
  char v25; // al
  MainCoop *v26; // rax
  unsigned int *v27; // rcx
  MainCoop *v28; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,MainCoop>,false,false>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t CoopPointChapterId; // eax
  PlayerQuestComp *QuestComp; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v34; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v35; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v36; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v37; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v38; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  bool v40; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  const std::set<unsigned int> *v42; // rax
  bool v43; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v44; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v45; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v46; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v47; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v48; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  const std::set<unsigned int> *v50; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v51; // rax
  MainCoop *v52; // rax
  unsigned int *v53; // rcx
  MainCoop *v54; // r8
  std::unordered_map<unsigned int,MainCoop>::key_type __k; // [rsp+14h] [rbp-14Ch] BYREF
  MainCoop *main_coop_ptr; // [rsp+18h] [rbp-148h]
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+20h] [rbp-140h]
  CoopPoint *point_ptr; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v59; // [rsp+30h] [rbp-130h] BYREF
  char v60[272]; // [rsp+50h] [rbp-110h] BYREF
  std::pair<unsigned int,unsigned int> v61; // 0:rsi.8

  v2 = (unsigned __int64)v60;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 16 cur_coop_id:1010 64 4 18 coop_point_id:1014 80 4 12 quest_id:996 96 16 8 oss:1105 128 "
                        "16 8 oss:1085 160 32 6 s:1108";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::processCoopQuestStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 80) = quest_id;
  main_coop_ptr = PlayerCoopComp::findMainCoop(this);
  if ( !main_coop_ptr )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "processCoopQuestStart",
      1001);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v59,
           (const char (*)[37])"player dont have progress, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v59);
    goto LABEL_43;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                       &v6->design_config.txt_config_mgr.quest_config_mgr,
                       *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( !quest_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "processCoopQuestStart",
      1007);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v59,
           (const char (*)[39])"findQuestExcelConfig failed, quest_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v59);
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  *(_DWORD *)(v2 + 48) = this->cur_progress_.coop_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  v9 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &v8->design_config.txt_config_mgr.coop_config_mgr.quest_start_point_map,
         (const unsigned int *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( v9 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v11 = std::unordered_map<unsigned int,unsigned int>::at(
            &v10->design_config.txt_config_mgr.coop_config_mgr.quest_start_point_map,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 80));
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    *(_DWORD *)(v2 + 64) = *v12;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    if ( *(_DWORD *)(v2 + 64) == *(_DWORD *)(v2 + 48) )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,unsigned int>(
             &this->cur_progress_.main_coop_map,
             (const unsigned int *)(v2 + 80)) )
      {
LABEL_15:
        v13 = std::unordered_map<unsigned int,MainCoop>::at(
                &this->cur_progress_.main_coop_map,
                (const std::unordered_map<unsigned int,MainCoop>::key_type *)(v2 + 80));
        __k = 0;
        v14 = std::unordered_map<unsigned int,MainCoop>::at(&this->cur_progress_.main_coop_map, &__k);
        PlayerCoopComp::updateCurMainCoop(this, v14, v13);
        PlayerCoopComp::notifyMainCoop(this);
        goto LABEL_43;
      }
      goto LABEL_42;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.coop_config_mgr;
    v61 = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v2 + 48), (unsigned int *)(v2 + 64));
    LOBYTE(p_coop_config_mgr) = CoopExcelConfigMgr::isCoopPointEdge(p_coop_config_mgr, v61);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    if ( (_BYTE)p_coop_config_mgr )
    {
      point_ptr = PlayerCoopComp::findCoopPoint(this, *(_DWORD *)(v2 + 64));
      if ( point_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)point_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&point_ptr->state);
        }
        if ( point_ptr->state == CoopPoint_State_STATE_UNSTARTED )
        {
          point_ptr->state = CoopPoint_State_STATE_STARTED;
          if ( *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(main_coop_ptr);
          }
          PlayerCoopComp::logInvokeCoopPoint(this, *(_DWORD *)(v2 + 64), main_coop_ptr->id);
        }
        __k = 0;
        v17 = std::unordered_map<unsigned int,MainCoop>::at(&this->cur_progress_.main_coop_map, &__k);
        MainCoop::operator=(&point_ptr->start_main_coop, v17);
        PlayerCoopComp::notifyCoopPoint(this, point_ptr);
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/coop/player_coop_comp.cpp",
          "processCoopQuestStart",
          1050);
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v59, (const char (*)[14])"accept quest:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 80));
        v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v19,
                (const char (*)[24])", push coop_point from:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                &this->cur_progress_.coop_point_id);
        v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v21, (const char (*)[5])" to:");
        v23 = (char *)(v2 + 64);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v59);
        v24 = *(_DWORD *)(v2 + 64);
        v25 = *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000);
        if ( v25 != 0 && v25 <= 3 )
        {
          LOBYTE(v23) = v25 != 0;
          __asan_report_store4(&this->cur_progress_, v23, &this->cur_progress_);
        }
        this->cur_progress_.coop_point_id = v24;
        common::tools::MiscUtils::erase_if<unsigned int,MainCoop,PlayerCoopComp::processCoopQuestStart(unsigned int)::{lambda(std::pair<unsigned int,MainCoop> const&)#1}>(
          &this->cur_progress_.main_coop_map,
          (PlayerCoopComp::processCoopQuestStart::<lambda(const std::pair<unsigned int, MainCoop>&)>)this);
        __k = 0;
        v26 = std::unordered_map<unsigned int,MainCoop>::at(&this->cur_progress_.main_coop_map, &__k);
        v29 = std::unordered_map<unsigned int,MainCoop>::emplace<unsigned int &,MainCoop&>(
                &this->cur_progress_.main_coop_map,
                (unsigned int *)(v2 + 80),
                v26,
                v27,
                v28);
        if ( !v29.second )
        {
          common::milog::MiLogStream::create(
            &v59,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/coop/player_coop_comp.cpp",
            "processCoopQuestStart",
            1066);
          v30 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v59,
                  (const char (*)[40])"main_coop_map emplace failed, quest_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v59);
        }
        PlayerCoopComp::notifyCoopProgress(this);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 128));
        v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(
                               &v31->design_config.txt_config_mgr.coop_config_mgr,
                               *(_DWORD *)(v2 + 64));
        PlayerCoopComp::logStartCoopPoint(this, *(_DWORD *)(v2 + 64), CoopPointChapterId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        QuestComp = Player::getQuestComp(this->player_);
        PlayerQuestComp::tryRemoveCoopPointQuest(QuestComp, *(_DWORD *)(v2 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "processCoopQuestStart",
          1037);
        v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v59,
                (const char (*)[37])"findCoopPoint failed, coop_point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v59);
      }
    }
    else
    {
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 128));
      v34 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 128),
              "Current CoopPointID and Quest-Invoke CoopPointID can not form a edge, Current CoopPointID:");
      v35 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v34, *(_DWORD *)(v2 + 48));
      v36 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
              v35,
              ", Quest-Invoke CoopPointID:");
      v37 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v36, *(_DWORD *)(v2 + 64));
      v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v37, ", quest_id:");
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v38, *(_DWORD *)(v2 + 80));
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
        (std::string *)(v2 + 160),
        (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 128));
      common::milog::MiLogStream::create(
        &v59,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "processCoopQuestStart",
        1089);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v59, (const std::string *)(v2 + 160));
      common::milog::MiLogStream::~MiLogStream(&v59);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::notifyGMServerLog(this->player_, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)(v2 + 160));
      std::string::~string((void *)(v2 + 160));
      common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 128));
    }
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v40 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
             &v39->design_config.txt_config_mgr.quest_config_mgr.quest_to_coop_point_map,
             (const unsigned int *)(v2 + 80));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    if ( v40 )
      goto LABEL_43;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v41 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v42 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
            &v41->design_config.txt_config_mgr.quest_config_mgr.quest_to_coop_point_map,
            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 80));
    v43 = !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             v42,
             (const unsigned int *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    if ( !v43 )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,unsigned int>(
             &this->cur_progress_.main_coop_map,
             (const unsigned int *)(v2 + 80)) )
      {
        goto LABEL_15;
      }
LABEL_42:
      __k = 0;
      v52 = std::unordered_map<unsigned int,MainCoop>::at(&this->cur_progress_.main_coop_map, &__k);
      std::unordered_map<unsigned int,MainCoop>::emplace<unsigned int &,MainCoop&>(
        &this->cur_progress_.main_coop_map,
        (unsigned int *)(v2 + 80),
        v52,
        v53,
        v54);
      goto LABEL_43;
    }
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 96));
    v44 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 96),
            off_25253980);
    v45 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v44, *(_DWORD *)(v2 + 48));
    v46 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v45, ", accept QuestID:");
    v47 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v46, *(_DWORD *)(v2 + 80));
    v48 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v47, ", Quest belong to CoopPoint:");
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 128));
    v49 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v50 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
            &v49->design_config.txt_config_mgr.quest_config_mgr.quest_to_coop_point_map,
            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 80));
    v51 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<<unsigned int>(v48, v50);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v51, ", config ERROR");
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
      (std::string *)(v2 + 160),
      (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 96));
    common::milog::MiLogStream::create(
      &v59,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/coop/player_coop_comp.cpp",
      "processCoopQuestStart",
      1109);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v59, (const std::string *)(v2 + 160));
    common::milog::MiLogStream::~MiLogStream(&v59);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::notifyGMServerLog(this->player_, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 96));
  }
LABEL_43:
  if ( v60 == (char *)v2 )
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
};

// Line 1055: range 0000000014157676-00000000141576CC
bool __cdecl PlayerCoopComp::processCoopQuestStart(unsigned int)::{lambda(std::pair<unsigned int,MainCoop> const&)#1}::operator()(
        const PlayerCoopComp::processCoopQuestStart::<lambda(const std::pair<unsigned int, MainCoop>&)> *const __closure,
        const std::pair<unsigned int,MainCoop> *p)
{
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p);
  }
  return p->first != 0;
};

// Line 1129: range 00000000141586EC-0000000014158E6B
void __fastcall PlayerCoopComp::tryFinishCoopPoint(PlayerCoopComp *const this, uint32_t coop_point_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t CoopPointChapterId; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // eax
  const data::CoopPointExcelConfig *coop_config_ptr; // [rsp+18h] [rbp-A8h]
  CoopPoint *point_ptr; // [rsp+20h] [rbp-A0h]
  CoopChapter *chapter_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-80h] BYREF
  char v23[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 coop_point_id:1128";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::tryFinishCoopPoint;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = coop_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  coop_config_ptr = data::CoopExcelConfigMgrBase::findCoopPointExcelConfig(
                      &v5->design_config.txt_config_mgr.coop_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( coop_config_ptr )
  {
    point_ptr = PlayerCoopComp::findCoopPoint(this, *(_DWORD *)(v2 + 32));
    if ( point_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(
                             &v8->design_config.txt_config_mgr.coop_config_mgr,
                             *(_DWORD *)(v2 + 32));
      chapter_ptr = PlayerCoopComp::findCoopChapter(this, CoopPointChapterId);
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( chapter_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)point_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&point_ptr->state);
        }
        if ( point_ptr->state )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->cur_progress_);
          }
          if ( this->cur_progress_.coop_point_id == *(_DWORD *)(v2 + 32) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)point_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3)
                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&point_ptr->state);
            }
            if ( point_ptr->state != CoopPoint_State_STATE_FINISHED )
            {
              point_ptr->state = CoopPoint_State_STATE_FINISHED;
              PlayerCoopComp::notifyCoopPoint(this, point_ptr);
            }
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/coop/player_coop_comp.cpp",
              "tryFinishCoopPoint",
              1164);
            v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v22,
                    (const char (*)[48])off_25253C40);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v15,
              &this->cur_progress_.coop_point_id);
            common::milog::MiLogStream::~MiLogStream(&v22);
            if ( *(_BYTE *)(((unsigned __int64)&coop_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&coop_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&coop_config_ptr->type);
            }
            if ( coop_config_ptr->type == POINT_END )
            {
              if ( *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)chapter_ptr >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(chapter_ptr);
              }
              PlayerCoopComp::tryRefreshCondsByCond(this, COOP_COND_CHAPTER_END_FINISH_COUNT, chapter_ptr->id);
            }
            PlayerCoopComp::tryRefreshCondsByCond(this, COOP_COND_COOP_POINT_FINISH, *(_DWORD *)(v2 + 32));
            PlayerCoopComp::tryShowCoopCg(this, *(_DWORD *)(v2 + 32));
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v21);
            v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
            v17 = CoopExcelConfigMgr::getCoopPointChapterId(
                    &v16->design_config.txt_config_mgr.coop_config_mgr,
                    *(_DWORD *)(v2 + 32));
            PlayerCoopComp::logFinishCoopPoint(this, *(_DWORD *)(v2 + 32), v17, 0);
            std::shared_ptr<Config>::~shared_ptr(&v21);
          }
          else
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/coop/player_coop_comp.cpp",
              "tryFinishCoopPoint",
              1155);
            v12 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    &v22,
                    (const char (*)[62])"quest finish coop_point is not cur progress, finish_point_id:");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v2 + 32));
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v13,
                    (const char (*)[16])", cur_point_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v14,
              &this->cur_progress_.coop_point_id);
            common::milog::MiLogStream::~MiLogStream(&v22);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/coop/player_coop_comp.cpp",
            "tryFinishCoopPoint",
            1150);
          v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v22,
                  (const char (*)[41])"point state is unstarted, coop_point_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "tryFinishCoopPoint",
          1145);
        v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v22,
                (const char (*)[39])"findCoopChapter failed, coop_point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "tryFinishCoopPoint",
        1139);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v22,
             (const char (*)[37])"findCoopPoint failed, coop_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "tryFinishCoopPoint",
      1133);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v22,
           (const char (*)[48])"findCoopPointExcelConfig failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
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

// Line 1183: range 0000000014158E6C-0000000014158F3D
bool __fastcall PlayerCoopComp::isChapterOpening(PlayerCoopComp *const this, uint32_t coop_chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 20 coop_chapter_id:1182";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::isChapterOpening;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = coop_chapter_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->opening_chapter_set_,
             (const unsigned int *)(v2 + 32));
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

// Line 1188: range 0000000014158F3E-00000000141591BE
void __cdecl PlayerCoopComp::notifyCoopPoint(PlayerCoopComp *const this, CoopPoint *coop_point)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto::CoopPointUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Player *player; // r14
  proto::CoopPoint *proto_point; // [rsp+18h] [rbp-88h]
  std::shared_ptr<proto::CoopPointUpdateNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v9[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 notify_ptr:1189";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::notifyCoopPoint;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::CoopPointUpdateNotify>();
  v5 = std::__shared_ptr_access<proto::CoopPointUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopPointUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto_point = proto::CoopPointUpdateNotify::mutable_coop_point(v5);
  if ( *(_BYTE *)(((unsigned __int64)coop_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)coop_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(coop_point);
  }
  proto::CoopPoint::set_id(proto_point, coop_point->id);
  if ( *(_BYTE *)(((unsigned __int64)&coop_point->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)coop_point + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&coop_point->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&coop_point->state);
  }
  proto::CoopPoint::set_state(proto_point, coop_point->state);
  if ( *(_BYTE *)(((unsigned __int64)&coop_point->start_main_coop.self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&coop_point->start_main_coop.self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&coop_point->start_main_coop.self_confidence);
  }
  proto::CoopPoint::set_self_confidence(proto_point, coop_point->start_main_coop.self_confidence);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::CoopPointUpdateNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::CoopPointUpdateNotify>::~shared_ptr((std::shared_ptr<proto::CoopPointUpdateNotify> *const)(v2 + 32));
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1199: range 00000000141591C0-00000000141593C7
void __cdecl PlayerCoopComp::notifyCoopProgress(PlayerCoopComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::CoopProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  bool v5; // al
  std::__shared_ptr_access<proto::CoopProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  Player *player; // r14
  int value; // [rsp+1Ch] [rbp-84h] BYREF
  std::shared_ptr<proto::CoopProgressUpdateNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:1200";
  *(_QWORD *)(v1 + 16) = PlayerCoopComp::notifyCoopProgress;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::CoopProgressUpdateNotify>();
  v4 = std::__shared_ptr_access<proto::CoopProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  value = 0;
  v5 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
         &this->cur_progress_.main_coop_map,
         &value);
  proto::CoopProgressUpdateNotify::set_is_have_progress(v4, v5);
  v6 = std::__shared_ptr_access<proto::CoopProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopProgressUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  proto::CoopProgressUpdateNotify::set_cur_coop_point(v6, this->cur_progress_.coop_point_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::CoopProgressUpdateNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::CoopProgressUpdateNotify>::~shared_ptr((std::shared_ptr<proto::CoopProgressUpdateNotify> *const)(v1 + 32));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1207: range 00000000141593C8-0000000014159663
void __fastcall PlayerCoopComp::notifyChapterUpdate(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::__shared_ptr_access<proto::CoopChapterUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *player; // r14
  CoopChapter *chapter_ptr; // [rsp+10h] [rbp-D0h]
  proto::CoopChapter *proto_chapter; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<proto::CoopChapterUpdateNotify> __r; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 chapter_id:1206 64 16 15 notify_ptr:1214";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::notifyChapterUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = chapter_id;
  chapter_ptr = PlayerCoopComp::findCoopChapter(this, *(_DWORD *)(v2 + 48));
  if ( chapter_ptr )
  {
    common::tools::perf::make_shared<proto::CoopChapterUpdateNotify>();
    v6 = std::__shared_ptr_access<proto::CoopChapterUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopChapterUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_chapter = proto::CoopChapterUpdateNotify::add_chapter_list(v6);
    PlayerCoopComp::fillInProtoChapter(this, chapter_ptr, proto_chapter);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::CoopChapterUpdateNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::CoopChapterUpdateNotify>::~shared_ptr((std::shared_ptr<proto::CoopChapterUpdateNotify> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "notifyChapterUpdate",
      1211);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v11,
           (const char (*)[28])"findCoopChapter failed, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
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

// Line 1222: range 0000000014159664-000000001415A4D0
void __cdecl PlayerCoopComp::fillInProtoChapter(
        PlayerCoopComp *const this,
        CoopChapter *chapter,
        proto::CoopChapter *proto_chapter)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rdx
  CoopExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rax
  _DWORD *v16; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int *v19; // rax
  google::protobuf::uint32 *v20; // rdx
  proto::CoopPoint *v21; // rax
  CoopExcelConfigMgr *v22; // rcx
  uint32_t ChapterEndCount; // edx
  google::protobuf::uint32 CoopChapterEndFinishCount; // edx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v25; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v26; // ebx
  google::protobuf::Map<unsigned int,unsigned int> *v27; // rax
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v28; // rsi
  unsigned int *v29; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v30; // rdx
  char v31; // cl
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  const std::set<unsigned int> *cg_set_ptr; // [rsp+38h] [rbp-138h]
  const std::set<unsigned int> *reward_set_ptr; // [rsp+40h] [rbp-130h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  const std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-120h]
  std::unordered_set<unsigned int> *__for_range_1; // [rsp+58h] [rbp-118h]
  std::unordered_map<unsigned int,CoopPoint> *__for_range_2; // [rsp+60h] [rbp-110h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_3; // [rsp+68h] [rbp-108h]
  const std::pair<unsigned int const,unsigned int> *v42; // [rsp+70h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *ending_id; // [rsp+78h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+80h] [rbp-F0h]
  const std::pair<unsigned int const,CoopPoint> *v45; // [rsp+88h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,CoopPoint> >::type *point_id; // [rsp+90h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,CoopPoint> >::type *coop_point; // [rsp+98h] [rbp-D8h]
  const data::CoopRewardExcelConfig *reward_config_ptr; // [rsp+A0h] [rbp-D0h]
  proto::CoopReward *proto_reward_1; // [rsp+A8h] [rbp-C8h]
  proto::CoopReward *proto_reward_0; // [rsp+B0h] [rbp-C0h]
  proto::CoopReward *proto_reward; // [rsp+B8h] [rbp-B8h]
  const data::CoopCGExcelConfig *cg_config_ptr; // [rsp+C0h] [rbp-B0h]
  proto::CoopCg *proto_cg_1; // [rsp+C8h] [rbp-A8h]
  proto::CoopCg *proto_cg_0; // [rsp+D0h] [rbp-A0h]
  proto::CoopCg *proto_cg; // [rsp+D8h] [rbp-98h]
  std::shared_ptr<Config> v56; // [rsp+E0h] [rbp-90h] BYREF
  common::milog::MiLogStream v57; // [rsp+F0h] [rbp-80h] BYREF
  char v58[96]; // [rsp+110h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 reward_config_id:1271";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::fillInProtoChapter;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v56);
  p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.coop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(chapter);
  }
  cg_set_ptr = CoopExcelConfigMgr::findChapterCgSet(p_coop_config_mgr, chapter->id);
  std::shared_ptr<Config>::~shared_ptr(&v56);
  if ( cg_set_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v56);
    v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.coop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(chapter);
    }
    reward_set_ptr = CoopExcelConfigMgr::findChapterRewardSet(v8, chapter->id);
    std::shared_ptr<Config>::~shared_ptr(&v56);
    if ( reward_set_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(chapter);
      }
      proto::CoopChapter::set_id(proto_chapter, chapter->id);
      if ( *(_BYTE *)(((unsigned __int64)&chapter->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)chapter + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter->state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&chapter->state);
      }
      proto::CoopChapter::set_state(proto_chapter, chapter->state);
      __for_range = cg_set_ptr;
      __for_begin._M_node = std::set<unsigned int>::begin(cg_set_ptr)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(cg_set_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(_DWORD *)(v3 + 32) = *v11;
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               &chapter->cg_set,
               (const unsigned int *)(v3 + 32)) )
        {
          proto_cg = proto::CoopChapter::add_coop_cg_list(proto_chapter);
          proto::CoopCg::set_id(proto_cg, *(_DWORD *)(v3 + 32));
          proto::CoopCg::set_is_unlock(proto_cg, 1);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v56);
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
          cg_config_ptr = data::CoopExcelConfigMgrBase::findCoopCGExcelConfig(
                            &v12->design_config.txt_config_mgr.coop_config_mgr,
                            *(_DWORD *)(v3 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v56);
          if ( cg_config_ptr )
          {
            if ( PlayerCoopComp::isCoopCondSatisfy(this, &cg_config_ptr->unlock_cond) )
            {
              std::unordered_set<unsigned int>::insert(
                &chapter->cg_set,
                (const std::unordered_set<unsigned int>::value_type *)(v3 + 32));
              common::milog::MiLogStream::create(
                &v57,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/coop/player_coop_comp.cpp",
                "fillInProtoChapter",
                1256);
              v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                      &v57,
                      (const char (*)[51])"cg cond meet but not unlock, do unlock now, cg_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v57);
              proto_cg_0 = proto::CoopChapter::add_coop_cg_list(proto_chapter);
              proto::CoopCg::set_id(proto_cg_0, *(_DWORD *)(v3 + 32));
              proto::CoopCg::set_is_unlock(proto_cg_0, 1);
              if ( *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(chapter);
              }
              PlayerCoopComp::logUnlockCoopCg(this, *(_DWORD *)(v3 + 32), chapter->id);
            }
            else
            {
              proto_cg_1 = proto::CoopChapter::add_coop_cg_list(proto_chapter);
              proto::CoopCg::set_id(proto_cg_1, *(_DWORD *)(v3 + 32));
              proto::CoopCg::set_is_unlock(proto_cg_1, 0);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/coop/player_coop_comp.cpp",
              "fillInProtoChapter",
              1249);
            v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v57,
                    (const char (*)[37])"findCoopCGExcelConfig failed, cg_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v57);
          }
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      __for_range_0 = reward_set_ptr;
      __for_begin._M_node = std::set<unsigned int>::begin(reward_set_ptr)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v16 = v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        *(_DWORD *)(v3 + 32) = *v16;
        if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               &chapter->reward_set,
               (const unsigned int *)(v3 + 32)) )
        {
          proto_reward = proto::CoopChapter::add_coop_reward_list(proto_chapter);
          proto::CoopReward::set_id(proto_reward, *(_DWORD *)(v3 + 32));
          proto::CoopReward::set_state(proto_reward, CoopReward_State_STATE_TAKEN);
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v56);
          v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56);
          reward_config_ptr = data::CoopExcelConfigMgrBase::findCoopRewardExcelConfig(
                                &v17->design_config.txt_config_mgr.coop_config_mgr,
                                *(_DWORD *)(v3 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v56);
          if ( reward_config_ptr )
          {
            if ( PlayerCoopComp::isCoopCondSatisfy(this, &reward_config_ptr->reward_cond) )
            {
              proto_reward_0 = proto::CoopChapter::add_coop_reward_list(proto_chapter);
              proto::CoopReward::set_id(proto_reward_0, *(_DWORD *)(v3 + 32));
              proto::CoopReward::set_state(proto_reward_0, CoopReward_State_STATE_UNLOCK);
            }
            else
            {
              proto_reward_1 = proto::CoopChapter::add_coop_reward_list(proto_chapter);
              proto::CoopReward::set_id(proto_reward_1, *(_DWORD *)(v3 + 32));
              proto::CoopReward::set_state(proto_reward_1, CoopReward_State_STATE_LOCK);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v57,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/coop/player_coop_comp.cpp",
              "fillInProtoChapter",
              1283);
            v18 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    &v57,
                    (const char (*)[52])"findCoopRewardExcelConfig failed, reward_config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v57);
          }
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      __for_range_1 = &chapter->dialog_set;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::begin(&chapter->dialog_set)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
      {
        v19 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
        v20 = v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        proto::CoopChapter::add_finish_dialog_list(proto_chapter, *v20);
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
      }
      __for_range_2 = &chapter->coop_point_map;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,CoopPoint>::begin(&chapter->coop_point_map)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,CoopPoint>::end(__for_range_2)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,CoopPoint>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopPoint>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopPoint>,false> *)&__for_end) )
      {
        v45 = std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false> *const)&__for_begin);
        point_id = std::get<0ul,unsigned int const,CoopPoint>(v45);
        coop_point = (std::tuple_element<1,const std::pair<unsigned int const,CoopPoint> >::type *)std::get<1ul,unsigned int const,CoopPoint>(v45);
        v21 = proto::CoopChapter::add_coop_point_list(proto_chapter);
        CoopPoint::toClient(coop_point, v21);
        std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false> *const)&__for_begin);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v56);
      v22 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v56)->design_config.txt_config_mgr.coop_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(chapter);
      }
      ChapterEndCount = CoopExcelConfigMgr::getChapterEndCount(v22, chapter->id);
      proto::CoopChapter::set_total_end_count(proto_chapter, ChapterEndCount);
      std::shared_ptr<Config>::~shared_ptr(&v56);
      if ( *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)chapter >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(chapter);
      }
      CoopChapterEndFinishCount = PlayerCoopComp::getCoopChapterEndFinishCount(this, chapter->id);
      proto::CoopChapter::set_finished_end_count(proto_chapter, CoopChapterEndFinishCount);
      __for_range_3 = &chapter->seen_ending_map;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&chapter->seen_ending_map)._M_cur;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_3)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      {
        v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
        ending_id = std::get<0ul,unsigned int const,unsigned int>(v42);
        v25 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v42);
        count = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v25);
        }
        v26 = *count;
        v27 = proto::CoopChapter::mutable_seen_ending_map(proto_chapter);
        v28 = ending_id;
        v29 = google::protobuf::Map<unsigned int,unsigned int>::operator[](v27, ending_id);
        v30 = v29;
        v31 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
        if ( v31 != 0 && (char)(((unsigned __int8)v29 & 7) + 3) >= v31 )
        {
          LOBYTE(v28) = v31 != 0;
          __asan_report_store4(v29, v28, v29);
        }
        *v30 = v26;
        std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v57,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "fillInProtoChapter",
        1232);
      v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v57,
             (const char (*)[41])"findChapterRewardSet failed, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &chapter->id);
      common::milog::MiLogStream::~MiLogStream(&v57);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v57,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/coop/player_coop_comp.cpp",
      "fillInProtoChapter",
      1226);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v57,
           (const char (*)[37])"findChapterCgSet failed, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &chapter->id);
    common::milog::MiLogStream::~MiLogStream(&v57);
  }
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1316: range 000000001415A4D2-000000001415A8D9
__int64 __fastcall PlayerCoopComp::unlockCoopChapterByGm(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  CoopChapter *v8; // r8
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v14; // [rsp+10h] [rbp-200h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-1F0h] BYREF
  char v16[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 chapter_id:1315 64 288 12 chapter:1321";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::unlockCoopChapterByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862731] = -202116109;
  v4[536862732] = -202116109;
  *(_DWORD *)(v2 + 48) = chapter_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  v6 = data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(
         &v5->design_config.txt_config_mgr.coop_config_mgr,
         *(_DWORD *)(v2 + 48)) == 0LL;
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "unlockCoopChapterByGm",
      1319);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v15,
           (const char (*)[47])"findCoopChapterExcelConfig failed, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  CoopChapter::CoopChapter((CoopChapter *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  if ( CoopChapter::initWhenCreate((CoopChapter *const)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "unlockCoopChapterByGm",
      1324);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v15,
           (const char (*)[43])"chapter initWhenCreate failed, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    v10 = -1;
  }
  else
  {
    v11 = std::unordered_map<unsigned int,CoopChapter>::emplace<unsigned int &,CoopChapter&>(
            &this->chapter_map_,
            (unsigned int *)(v2 + 48),
            (CoopChapter *)(v2 + 64),
            (unsigned int *)&this->chapter_map_,
            v8);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "unlockCoopChapterByGm",
        1329);
      v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v15,
              (const char (*)[33])"chapter is unlocked, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v10 = -1;
    }
    else
    {
      PlayerCoopComp::notifyChapterUpdate(this, *(_DWORD *)(v2 + 48));
      v10 = 0;
    }
  }
  CoopChapter::~CoopChapter((CoopChapter *const)(v2 + 64));
  result = v10;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1338: range 000000001415A8DA-000000001415A8EB
int32_t __cdecl PlayerCoopComp::takeCoopRewardByGm(PlayerCoopComp *const this, uint32_t reward_config_id)
{
  return 0;
};

// Line 1343: range 000000001415A8EC-000000001415A8FD
int32_t __cdecl PlayerCoopComp::unlockCgByGm(PlayerCoopComp *const this, uint32_t cg_id)
{
  return 0;
};

// Line 1348: range 000000001415A8FE-000000001415A91F
int32_t __cdecl PlayerCoopComp::startPointByGm(PlayerCoopComp *const this, uint32_t coop_point_id)
{
  return PlayerCoopComp::internalStartCoopPoint(this, coop_point_id);
};

// Line 1353: range 000000001415A920-000000001415AB4B
__int64 __fastcall PlayerCoopComp::resetChapterByGm(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  bool v6; // r14
  void (__fastcall **v7)(PlayerCoopComp *const); // rax
  __int64 result; // rax
  std::shared_ptr<Config> v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 chapter_id:1352";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::resetChapterByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = chapter_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.coop_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  v6 = CoopExcelConfigMgr::getCoopPointChapterId(p_coop_config_mgr, this->cur_progress_.coop_point_id) == *(_DWORD *)(v2 + 32);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( v6 )
    PlayerCoopComp::clearCoopProgress(this);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopChapter>,unsigned int>(
         &this->chapter_map_,
         (const unsigned int *)(v2 + 32)) )
  {
    std::unordered_map<unsigned int,CoopChapter>::erase(
      &this->chapter_map_,
      (const std::unordered_map<unsigned int,CoopChapter>::key_type *)(v2 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = (void (__fastcall **)(PlayerCoopComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_PlayerCompBase + 10);
  (*v7)(this);
  result = 0LL;
  if ( v10 == (char *)v2 )
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

// Line 1371: range 000000001415AB4C-000000001415ABCE
void __cdecl PlayerCoopComp::resetAllChapterByGm(PlayerCoopComp *const this)
{
  void (__fastcall **v1)(PlayerCoopComp *const); // rax

  PlayerCoopComp::clearCoopProgress(this);
  std::unordered_map<unsigned int,CoopChapter>::clear(&this->chapter_map_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v1 = (void (__fastcall **)(PlayerCoopComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_PlayerCompBase + 10);
  (*v1)(this);
};

// Line 1378: range 000000001415ABD0-000000001415AFFB
void __cdecl PlayerCoopComp::initEventObservers(PlayerCoopComp *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // [rsp+20h] [rbp-F0h]
  unsigned int val; // [rsp+34h] [rbp-DCh] BYREF
  PlayerEventComp *event_comp; // [rsp+38h] [rbp-D8h]
  PlayerEventComp v7; // [rsp+40h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v7.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 13 this_ptr:1381 64 16 13 this_wtr:1387";
  *(_QWORD *)(p_M_start + 16) = PlayerCoopComp::initEventObservers;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/coop/player_coop_comp.cpp",
    "initEventObservers",
    1379);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_);
  toThisPtr<PlayerCoopComp>((PlayerCoopComp *)(p_M_start + 32));
  if ( std::operator==<PlayerCoopComp>(0LL, (const std::shared_ptr<PlayerCoopComp> *)(p_M_start + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "initEventObservers",
      1384);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)&v7.event_center_,
      (const char (*)[46])"dynamic_pointer_cast to PlayerCoopComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_);
  }
  else
  {
    std::weak_ptr<PlayerCoopComp>::weak_ptr<PlayerCoopComp,void>(
      (std::weak_ptr<PlayerCoopComp> *const)(p_M_start + 64),
      (const std::shared_ptr<PlayerCoopComp> *)(p_M_start + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerCoopComp>::weak_ptr(
      (std::weak_ptr<PlayerCoopComp> *const)&v7._M_weak_this._M_refcount,
      (const std::weak_ptr<PlayerCoopComp> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlayerCoopComp,FetterLevelUpdateEvent>(
      &v7,
      (std::weak_ptr<PlayerCoopComp> *)event_comp,
      (void (*)(PlayerCoopComp *, const FetterLevelUpdateEvent *))&v7._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerCoopComp>::~weak_ptr((std::weak_ptr<PlayerCoopComp> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerCoopComp>::weak_ptr(
      (std::weak_ptr<PlayerCoopComp> *const)&v7,
      (const std::weak_ptr<PlayerCoopComp> *)(p_M_start + 64));
    PlayerEventComp::registerObserver<PlayerCoopComp,PlayerLevelupEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerCoopComp> *)event_comp,
      (void (*)(PlayerCoopComp *, const PlayerLevelupEvent *))&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerCoopComp>::~weak_ptr((std::weak_ptr<PlayerCoopComp> *const)&v7);
    std::weak_ptr<PlayerCoopComp>::~weak_ptr((std::weak_ptr<PlayerCoopComp> *const)(p_M_start + 64));
  }
  std::shared_ptr<PlayerCoopComp>::~shared_ptr((std::shared_ptr<PlayerCoopComp> *const)(p_M_start + 32));
  if ( &v7.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
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

// Line 1396: range 000000001415AFFC-000000001415B272
void __fastcall PlayerCoopComp::onQuestStart(PlayerCoopComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  const data::QuestExcelConfig *quest_config_ptr; // [rsp+18h] [rbp-88h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 quest_id:1395";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::onQuestStart;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_test);
  if ( !this->is_in_test )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
    quest_config_ptr = data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                         &v5->design_config.txt_config_mgr.quest_config_mgr,
                         *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v9);
    if ( quest_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v9);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
      v7 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
              &v6->design_config.txt_config_mgr.quest_config_mgr.quest_to_coop_point_map,
              (const unsigned int *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v9);
      if ( !v7 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&quest_config_ptr->is_rewind >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)quest_config_ptr - 66) & 7) >= *(_BYTE *)(((unsigned __int64)&quest_config_ptr->is_rewind >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load1(&quest_config_ptr->is_rewind);
        }
        if ( quest_config_ptr->is_rewind )
          PlayerCoopComp::processCoopQuestStart(this, *(_DWORD *)(v2 + 32));
      }
    }
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

// Line 1419: range 000000001415B274-000000001415B4CD
void __fastcall PlayerCoopComp::onQuestFinish(PlayerCoopComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t *v8; // rax
  uint32_t *v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 quest_id:1418";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::onQuestFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_in_test);
  if ( !this->is_in_test )
  {
    PlayerCoopComp::tryRefreshCondsByCond(this, COOP_COND_FINISH_QUEST, *(_DWORD *)(v2 + 32));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v10);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
    v6 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
           &v5->design_config.txt_config_mgr.coop_config_mgr.quest_finish_point_map,
           (const unsigned int *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v10);
    if ( v6 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v10);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
      v8 = (uint32_t *)std::unordered_map<unsigned int,unsigned int>::at(
                         &v7->design_config.txt_config_mgr.coop_config_mgr.quest_finish_point_map,
                         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      PlayerCoopComp::tryFinishCoopPoint(this, *v9);
      std::shared_ptr<Config>::~shared_ptr(&v10);
    }
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

// Line 1436: range 000000001415B4CE-000000001415B4F6
void __cdecl PlayerCoopComp::onPlayerLevelUp(PlayerCoopComp *const this, const PlayerLevelupEvent *event)
{
  PlayerCoopComp::tryRefreshCondsByCond(this, COOP_COND_PLAYER_LEVEL, 0);
};

// Line 1441: range 000000001415B4F8-000000001415B735
void __cdecl PlayerCoopComp::onFetterLevelUp(PlayerCoopComp *const this, const FetterLevelUpdateEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerAvatarComp *AvatarComp; // rcx
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t AvatarId; // edx
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 avatar_ptr:1442";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::onFetterLevelUp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&event->guid >> 3) + 0x7FFF8000) )
    __asan_report_load8(&event->guid);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v2 + 32), (uint64_t)AvatarComp, event->guid);
  if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "onFetterLevelUp",
      1445);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v9,
           (const char (*)[31])"findFormalAvatar failed, guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &event->guid);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v7 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AvatarId = Avatar::getAvatarId(v7);
    PlayerCoopComp::tryRefreshCondsByCond(this, COOP_COND_AVATAR_FETTER_LEVEL, AvatarId);
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 32));
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

// Line 1452: range 000000001415B736-000000001415B8FD
_BOOL8 __fastcall PlayerCoopComp::isCoopPointFinished(PlayerCoopComp *const this, uint32_t coop_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  _BOOL8 result; // rax
  CoopPoint *point_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 coop_point_id:1451";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::isCoopPointFinished;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = coop_point_id;
  point_ptr = PlayerCoopComp::findCoopPoint(this, *(_DWORD *)(v2 + 32));
  if ( point_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)point_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&point_ptr->state);
    }
    result = point_ptr->state == CoopPoint_State_STATE_FINISHED;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "isCoopPointFinished",
      1456);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v8,
           (const char (*)[37])"findCoopPoint failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0LL;
  }
  if ( v9 == (char *)v2 )
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

// Line 1467: range 000000001415B8FE-000000001415B9B9
bool __cdecl PlayerCoopComp::isCoopChapterEndAllFinished(PlayerCoopComp *const this, uint32_t chapter_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t finished_count; // [rsp+18h] [rbp-28h]
  uint32_t config_count; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  finished_count = PlayerCoopComp::getCoopChapterEndFinishCount(this, chapter_id);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  config_count = CoopExcelConfigMgr::getChapterEndCount(&v2->design_config.txt_config_mgr.coop_config_mgr, chapter_id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return finished_count && config_count && finished_count == config_count;
};

// Line 1482: range 000000001415B9BA-000000001415BDDD
__int64 __fastcall PlayerCoopComp::getCoopChapterEndFinishCount(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rax
  _DWORD *v10; // rdx
  std::unordered_map<unsigned int,CoopPoint>::mapped_type *v11; // rdx
  proto::CoopPoint::State *p_state; // rax
  char v13; // al
  uint32_t res; // [rsp+14h] [rbp-DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  CoopChapter *chapter_ptr; // [rsp+28h] [rbp-C8h]
  const std::set<unsigned int> *end_point_set_ptr; // [rsp+30h] [rbp-C0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 point_id:1496 64 4 15 chapter_id:1481";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::getCoopChapterEndFinishCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = chapter_id;
  chapter_ptr = PlayerCoopComp::findCoopChapter(this, *(_DWORD *)(v2 + 64));
  if ( chapter_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    end_point_set_ptr = CoopExcelConfigMgr::findChapterEndCoopPointSet(
                          &v7->design_config.txt_config_mgr.coop_config_mgr,
                          *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( end_point_set_ptr )
    {
      res = 0;
      __for_range = end_point_set_ptr;
      __for_begin._M_node = std::set<unsigned int>::begin(end_point_set_ptr)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(end_point_set_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v2 + 48) = *v10;
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopPoint>,unsigned int>(
                &chapter_ptr->coop_point_map,
                (const unsigned int *)(v2 + 48)) )
          goto LABEL_17;
        v11 = std::unordered_map<unsigned int,CoopPoint>::at(
                &chapter_ptr->coop_point_map,
                (const std::unordered_map<unsigned int,CoopPoint>::key_type *)(v2 + 48));
        p_state = &v11->state;
        if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_state);
        }
        if ( v11->state == CoopPoint_State_STATE_FINISHED )
          v13 = 1;
        else
LABEL_17:
          v13 = 0;
        if ( v13 )
          ++res;
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      result = res;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "getCoopChapterEndFinishCount",
        1492);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v21,
             (const char (*)[47])"findChapterEndCoopPointSet failed, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "getCoopChapterEndFinishCount",
      1486);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v21,
           (const char (*)[36])"findCoopChapter failed, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0LL;
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
  return result;
};

// Line 1509: range 000000001415BDDE-000000001415BF31
CoopChapter *__fastcall PlayerCoopComp::findCoopChapter(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  CoopChapter *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopChapter>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 chapter_id:1508 64 8 9 iter:1510";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::findCoopChapter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  *(std::unordered_map<unsigned int,CoopChapter>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,CoopChapter>::find(
                                                                           &this->chapter_map_,
                                                                           (const std::unordered_map<unsigned int,CoopChapter>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,CoopChapter>::end(&this->chapter_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,CoopChapter>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopChapter>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false> *const)(v2 + 64))->second;
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

// Line 1519: range 000000001415BF32-000000001415C1B7
CoopPoint *__fastcall PlayerCoopComp::findCoopPoint(PlayerCoopComp *const this, uint32_t coop_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t CoopPointChapterId; // eax
  CoopPoint *result; // rax
  common::milog::MiLogStream *v8; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopPoint>,false> __y; // [rsp+10h] [rbp-C0h] BYREF
  CoopChapter *chapter_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 coop_point_id:1518 64 8 9 iter:1525";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::findCoopPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = coop_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  CoopPointChapterId = CoopExcelConfigMgr::getCoopPointChapterId(
                         &v5->design_config.txt_config_mgr.coop_config_mgr,
                         *(_DWORD *)(v2 + 48));
  chapter_ptr = PlayerCoopComp::findCoopChapter(this, CoopPointChapterId);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( chapter_ptr )
  {
    *(std::unordered_map<unsigned int,CoopPoint>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,CoopPoint>::find(
                                                                           &chapter_ptr->coop_point_map,
                                                                           (const std::unordered_map<unsigned int,CoopPoint>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,CoopPoint>::end(&chapter_ptr->coop_point_map)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,CoopPoint>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CoopPoint>,false> *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "findCoopPoint",
        1528);
      v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v12,
             (const char (*)[54])"coop_point_map find coop_point failed, coop_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 0LL;
    }
    else
    {
      result = &std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false> *const)(v2 + 64))->second;
    }
  }
  else
  {
    result = 0LL;
  }
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

// Line 1535: range 000000001415C1B8-000000001415C7A7
__int64 __fastcall PlayerCoopComp::canFinishMainCoopInCurProgress(
        PlayerCoopComp *const this,
        uint32_t chapter_id,
        uint32_t ending_save_point_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  unsigned int v8; // r14d
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_main_coop_finish_point_map; // r14
  const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::mapped_type *v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  CoopExcelConfigMgr *p_coop_config_mgr; // r14
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v16; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v17; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v18; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v19; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v20; // rax
  __int64 result; // rax
  std::pair<unsigned int,unsigned int> value; // [rsp+18h] [rbp-118h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-110h] BYREF
  char v25[240]; // [rsp+40h] [rbp-F0h] BYREF
  std::pair<unsigned int,unsigned int> v26; // 0:rsi.8

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 18 coop_point_id:1540 64 4 15 chapter_id:1534 80 4 25 ending_save_point_id:1534 96 16 8 o"
                        "ss:1550 128 32 6 s:1554";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::canFinishMainCoopInCurProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 64) = chapter_id;
  *(_DWORD *)(v3 + 80) = ending_save_point_id;
  value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 80));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  v7 = !common::tools::MiscUtils::isContains<std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>> const,std::pair<unsigned int,unsigned int>>(
          &v6->design_config.txt_config_mgr.coop_config_mgr.main_coop_finish_point_map,
          &value);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( v7 )
  {
    v8 = 1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    p_main_coop_finish_point_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.coop_config_mgr.main_coop_finish_point_map;
    value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 80));
    v10 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::at(
            p_main_coop_finish_point_map,
            &value);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    *(_DWORD *)(v3 + 48) = *v11;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( PlayerCoopComp::findCoopPoint(this, *(_DWORD *)(v3 + 48)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 96));
      p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.coop_config_mgr;
      v26 = std::make_pair<unsigned int &,unsigned int &>(&this->cur_progress_.coop_point_id, (unsigned int *)(v3 + 48));
      LOBYTE(p_coop_config_mgr) = !CoopExcelConfigMgr::isCoopPointEdge(p_coop_config_mgr, v26);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
      if ( (_BYTE)p_coop_config_mgr )
      {
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96));
        v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96),
                "Current CoopPointID and MainCoop-Invoke CoopPointID can not form a edge, Current CoopPointID:");
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_progress_);
        }
        v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                v14,
                this->cur_progress_.coop_point_id);
        v16 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
                v15,
                ", MainCoop-Invoke CoopPointID:");
        v17 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v16, *(_DWORD *)(v3 + 48));
        v18 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v17, ", main_coop_id:");
        v19 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v18, *(_DWORD *)(v3 + 64));
        v20 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v19, ", ending_save_point_id:");
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v20, *(_DWORD *)(v3 + 80));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
          (std::string *)(v3 + 128),
          (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96));
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "canFinishMainCoopInCurProgress",
          1555);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v24, (const std::string *)(v3 + 128));
        common::milog::MiLogStream::~MiLogStream(&v24);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::notifyGMServerLog(this->player_, SERVER_LOG_NONE, LOG_LEVEL_ERROR_0, (const std::string *)(v3 + 128));
        v8 = 0;
        std::string::~string((void *)(v3 + 128));
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v3 + 96));
      }
      else
      {
        v8 = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "canFinishMainCoopInCurProgress",
        1544);
      v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v24,
              (const char (*)[37])"findCoopPoint failed, coop_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      v8 = 0;
    }
  }
  result = v8;
  if ( v25 == (char *)v3 )
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

// Line 1562: range 000000001415C7A8-000000001415CBC7
void __fastcall PlayerCoopComp::onFinishMainCoop(
        PlayerCoopComp *const this,
        uint32_t chapter_id,
        uint32_t ending_save_point_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_main_coop_finish_point_map; // r14
  const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  CoopPoint *point_ptr; // [rsp+10h] [rbp-D0h]
  std::pair<unsigned int,unsigned int> value; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 coop_point_id:1567 48 4 15 chapter_id:1561 64 4 25 ending_save_point_id:1561";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::onFinishMainCoop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = chapter_id;
  *(_DWORD *)(v3 + 64) = ending_save_point_id;
  value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 48), (unsigned int *)(v3 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  v7 = !common::tools::MiscUtils::isContains<std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>> const,std::pair<unsigned int,unsigned int>>(
          &v6->design_config.txt_config_mgr.coop_config_mgr.main_coop_finish_point_map,
          &value);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( !v7 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_main_coop_finish_point_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.coop_config_mgr.main_coop_finish_point_map;
    value = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v3 + 48), (unsigned int *)(v3 + 64));
    v9 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::at(
           p_main_coop_finish_point_map,
           &value);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    *(_DWORD *)(v3 + 32) = *v10;
    std::shared_ptr<Config>::~shared_ptr(&v15);
    point_ptr = PlayerCoopComp::findCoopPoint(this, *(_DWORD *)(v3 + 32));
    if ( point_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)point_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&point_ptr->state);
      }
      if ( point_ptr->state != CoopPoint_State_STATE_FINISHED )
      {
        point_ptr->state = CoopPoint_State_STATE_FINISHED;
        PlayerCoopComp::notifyCoopPoint(this, point_ptr);
        PlayerCoopComp::logInvokeCoopPoint(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
        PlayerCoopComp::tryRefreshCondsByCond(this, COOP_COND_CHAPTER_END_FINISH_COUNT, *(_DWORD *)(v3 + 48));
        PlayerCoopComp::tryRefreshCondsByCond(this, COOP_COND_COOP_POINT_FINISH, *(_DWORD *)(v3 + 32));
      }
      PlayerCoopComp::tryShowCoopCg(this, *(_DWORD *)(v3 + 32));
      PlayerCoopComp::logStartCoopPoint(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
      PlayerCoopComp::logFinishCoopPoint(this, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "onFinishMainCoop",
        1571);
      v11 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v16,
              (const char (*)[37])"findCoopPoint failed, coop_point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
  }
  if ( v17 == (char *)v3 )
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

// Line 1596: range 000000001415CBC8-000000001415D0FA
void __cdecl PlayerCoopComp::clearCoopProgress(PlayerCoopComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  char *v5; // rsi
  __int64 v6; // rdx
  proto::MainCoop *v7; // rdx
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t point_id; // [rsp+14h] [rbp-FCh]
  MainCoop *main_coop_ptr; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-F0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-E0h] BYREF
  char v17[192]; // [rsp+50h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 19 cur_chapter_id:1598 64 4 17 main_coop_id:1599 80 48 11 notify:1607";
  *(_QWORD *)(v1 + 16) = PlayerCoopComp::clearCoopProgress;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = 61956;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  point_id = this->cur_progress_.coop_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  v5 = (char *)point_id;
  *(_DWORD *)(v1 + 48) = CoopExcelConfigMgr::getCoopPointChapterId(
                           &v4->design_config.txt_config_mgr.coop_config_mgr,
                           point_id);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  *(_DWORD *)(v1 + 64) = 0;
  main_coop_ptr = PlayerCoopComp::findMainCoop(this);
  if ( main_coop_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(main_coop_ptr);
    }
    *(_DWORD *)(v1 + 64) = main_coop_ptr->id;
    v6 = (*(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)main_coop_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3) + 0x7FFF8000));
    if ( (_BYTE)v6 )
      __asan_report_store4(&main_coop_ptr->status, (((_BYTE)main_coop_ptr + 4) & 7u) + 3, v6);
    main_coop_ptr->status = MainCoop_Status_INVALID;
    proto::MainCoopUpdateNotify::MainCoopUpdateNotify((proto::MainCoopUpdateNotify *const)(v1 + 80));
    v7 = proto::MainCoopUpdateNotify::add_main_coop_list((proto::MainCoopUpdateNotify *const)(v1 + 80));
    MainCoop::toClient(main_coop_ptr, v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v5 = (char *)(v1 + 80);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 80));
    proto::MainCoopUpdateNotify::~MainCoopUpdateNotify((proto::MainCoopUpdateNotify *const)(v1 + 80));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_progress_, v5, &this->cur_progress_);
  }
  this->cur_progress_.coop_point_id = 0;
  std::unordered_map<unsigned int,MainCoop>::clear(&this->cur_progress_.main_coop_map);
  if ( *(_DWORD *)(v1 + 48) == *(_DWORD *)(v1 + 64) && *(_DWORD *)(v1 + 48) )
  {
    PlayerCoopComp::clearCoopQuestSeries(this, *(_DWORD *)(v1 + 48));
    PlayerCoopComp::logCancelCoopProgress(this, point_id, *(_DWORD *)(v1 + 48));
  }
  else if ( *(_DWORD *)(v1 + 48) != *(_DWORD *)(v1 + 64) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "clearCoopProgress",
      1630);
    v8 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v16,
           (const char (*)[57])"MainCoop state not match CoopProgress state, is_in_test:");
    if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_in_test);
    v9 = common::milog::MiLogStream::operator<<(v8, this->is_in_test);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])", main_coop_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v11, (const char (*)[17])", cur_chapter_id");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
    PlayerCoopComp::clearCoopQuestSeries(this, *(_DWORD *)(v1 + 48));
    PlayerCoopComp::clearCoopQuestSeries(this, *(_DWORD *)(v1 + 64));
    PlayerCoopComp::logCancelCoopProgress(this, point_id, *(_DWORD *)(v1 + 48));
    PlayerCoopComp::logCancelCoopProgress(this, point_id, *(_DWORD *)(v1 + 64));
  }
  if ( v17 == (char *)v1 )
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

// Line 1642: range 000000001415D0FC-000000001415DB1A
void __fastcall PlayerCoopComp::tryRefreshCondsByCond(
        PlayerCoopComp *const this,
        data::CoopTaskCondType cond_type,
        uint32_t cond_arg)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  char v6; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::set<unsigned int> *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  const std::set<unsigned int> *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // bl
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  char v15; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const std::set<unsigned int> *v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const std::set<unsigned int> *v20; // rax
  char v21; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  const std::set<unsigned int> *v24; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  const std::set<unsigned int> *v26; // rax
  char v27; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  const std::set<unsigned int> *v30; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  const std::set<unsigned int> *v32; // rax
  bool v33; // [rsp+Fh] [rbp-D1h]
  bool v34; // [rsp+Fh] [rbp-D1h]
  bool v35; // [rsp+Fh] [rbp-D1h]
  bool v36; // [rsp+Fh] [rbp-D1h]
  std::shared_ptr<Config> v38; // [rsp+20h] [rbp-C0h] BYREF
  std::shared_ptr<Config> v39; // [rsp+30h] [rbp-B0h] BYREF
  std::set<unsigned int> p_chapter_set; // [rsp+40h] [rbp-A0h] BYREF
  char v41[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 cond_arg:1641";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::tryRefreshCondsByCond;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = cond_arg;
  switch ( cond_type )
  {
    case COOP_COND_FINISH_QUEST:
      v6 = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v38);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
      v33 = 0;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
             &v7->design_config.txt_config_mgr.coop_config_mgr.cond_quest_chapter_map,
             (const unsigned int *)(v3 + 32)) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v6 = 1;
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v9 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
               &v8->design_config.txt_config_mgr.coop_config_mgr.cond_quest_chapter_map,
               (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        if ( !std::set<unsigned int>::empty(v9) )
          v33 = 1;
      }
      if ( v6 )
        std::shared_ptr<Config>::~shared_ptr(&v39);
      std::shared_ptr<Config>::~shared_ptr(&v38);
      if ( v33 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v11 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v10->design_config.txt_config_mgr.coop_config_mgr.cond_quest_chapter_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        std::set<unsigned int>::set(&p_chapter_set, v11);
        PlayerCoopComp::refreshChapterConds(this, &p_chapter_set);
        std::set<unsigned int>::~set(&p_chapter_set);
        std::shared_ptr<Config>::~shared_ptr(&v39);
      }
      break;
    case COOP_COND_PLAYER_LEVEL:
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
      v13 = !std::set<unsigned int>::empty(&v12->design_config.txt_config_mgr.coop_config_mgr.cond_player_level_chapter_set);
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( v13 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        std::set<unsigned int>::set(
          &p_chapter_set,
          &v14->design_config.txt_config_mgr.coop_config_mgr.cond_player_level_chapter_set);
        PlayerCoopComp::refreshChapterConds(this, &p_chapter_set);
        std::set<unsigned int>::~set(&p_chapter_set);
        std::shared_ptr<Config>::~shared_ptr(&v39);
      }
      break;
    case COOP_COND_COOP_POINT_FINISH:
      v15 = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v38);
      v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
      v34 = 0;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
             &v16->design_config.txt_config_mgr.coop_config_mgr.cond_coop_point_chapter_map,
             (const unsigned int *)(v3 + 32)) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v15 = 1;
        v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v18 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v17->design_config.txt_config_mgr.coop_config_mgr.cond_coop_point_chapter_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        if ( !std::set<unsigned int>::empty(v18) )
          v34 = 1;
      }
      if ( v15 )
        std::shared_ptr<Config>::~shared_ptr(&v39);
      std::shared_ptr<Config>::~shared_ptr(&v38);
      if ( v34 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v20 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v19->design_config.txt_config_mgr.coop_config_mgr.cond_coop_point_chapter_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        std::set<unsigned int>::set(&p_chapter_set, v20);
        PlayerCoopComp::refreshChapterConds(this, &p_chapter_set);
        std::set<unsigned int>::~set(&p_chapter_set);
        std::shared_ptr<Config>::~shared_ptr(&v39);
      }
      break;
    case COOP_COND_AVATAR_FETTER_LEVEL:
      v21 = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v38);
      v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
      v35 = 0;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
             &v22->design_config.txt_config_mgr.coop_config_mgr.cond_avatar_fetter_level_chapter_map,
             (const unsigned int *)(v3 + 32)) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v21 = 1;
        v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v24 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v23->design_config.txt_config_mgr.coop_config_mgr.cond_avatar_fetter_level_chapter_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        if ( !std::set<unsigned int>::empty(v24) )
          v35 = 1;
      }
      if ( v21 )
        std::shared_ptr<Config>::~shared_ptr(&v39);
      std::shared_ptr<Config>::~shared_ptr(&v38);
      if ( v35 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v26 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v25->design_config.txt_config_mgr.coop_config_mgr.cond_avatar_fetter_level_chapter_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        std::set<unsigned int>::set(&p_chapter_set, v26);
        PlayerCoopComp::refreshChapterConds(this, &p_chapter_set);
        std::set<unsigned int>::~set(&p_chapter_set);
        std::shared_ptr<Config>::~shared_ptr(&v39);
      }
      break;
    case COOP_COND_CHAPTER_END_ALL_FINISH:
    case COOP_COND_CHAPTER_END_FINISH_COUNT:
      v27 = 0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v38);
      v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
      v36 = 0;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
             &v28->design_config.txt_config_mgr.coop_config_mgr.cond_chapter_end_chapter_map,
             (const unsigned int *)(v3 + 32)) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v27 = 1;
        v29 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v30 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v29->design_config.txt_config_mgr.coop_config_mgr.cond_chapter_end_chapter_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        if ( !std::set<unsigned int>::empty(v30) )
          v36 = 1;
      }
      if ( v27 )
        std::shared_ptr<Config>::~shared_ptr(&v39);
      std::shared_ptr<Config>::~shared_ptr(&v38);
      if ( v36 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v31 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        v32 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                &v31->design_config.txt_config_mgr.coop_config_mgr.cond_chapter_end_chapter_map,
                (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
        std::set<unsigned int>::set(&p_chapter_set, v32);
        PlayerCoopComp::refreshChapterConds(this, &p_chapter_set);
        std::set<unsigned int>::~set(&p_chapter_set);
        std::shared_ptr<Config>::~shared_ptr(&v39);
      }
      break;
    default:
      break;
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

// Line 1697: range 000000001415DB1C-000000001415E481
void __cdecl PlayerCoopComp::refreshChapterConds(PlayerCoopComp *const this, std::set<unsigned int> *p_chapter_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto::CoopCgUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  Player *player; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v14; // rax
  _DWORD *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto::CoopRewardUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // r14
  bool is_have_change; // [rsp+16h] [rbp-19Ah]
  bool is_have_change_0; // [rsp+17h] [rbp-199h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-198h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-190h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-188h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-180h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-178h]
  CoopChapter *chapter_ptr; // [rsp+40h] [rbp-170h]
  const std::set<unsigned int> *cg_set_ptr; // [rsp+48h] [rbp-168h]
  const std::set<unsigned int> *__for_range_0; // [rsp+50h] [rbp-160h]
  const data::CoopCGExcelConfig *cg_config_ptr; // [rsp+58h] [rbp-158h]
  const std::set<unsigned int> *reward_set_ptr; // [rsp+60h] [rbp-150h]
  const std::set<unsigned int> *__for_range_1; // [rsp+68h] [rbp-148h]
  const data::CoopRewardExcelConfig *reward_config_ptr; // [rsp+70h] [rbp-140h]
  proto::CoopReward *proto_reward; // [rsp+78h] [rbp-138h]
  std::shared_ptr<const google::protobuf::Message> v34; // [rsp+80h] [rbp-130h] BYREF
  std::set<unsigned int> v35; // [rsp+90h] [rbp-120h] BYREF
  char v36[240]; // [rsp+C0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 chapter_id:1702 64 4 21 reward_config_id:1751 80 16 15 notify_ptr:1749 112 48 32 chang"
                        "ed_opening_chapter_set:1699";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::refreshChapterConds;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 112));
  __for_range = p_chapter_set;
  __for_begin._M_node = std::set<unsigned int>::begin(p_chapter_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(p_chapter_set)._M_node;
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
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->opening_chapter_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      chapter_ptr = PlayerCoopComp::findCoopChapter(this, *(_DWORD *)(v2 + 48));
      if ( !chapter_ptr )
        goto LABEL_13;
      if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)chapter_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_ptr->state >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&chapter_ptr->state);
      }
      if ( chapter_ptr->state == CoopChapter_State_STATE_ACCEPT )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        cg_set_ptr = CoopExcelConfigMgr::findChapterCgSet(
                       &v7->design_config.txt_config_mgr.coop_config_mgr,
                       *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
        if ( cg_set_ptr )
        {
          common::tools::perf::make_shared<proto::CoopCgUpdateNotify>();
          is_have_change = 0;
          __for_range_0 = cg_set_ptr;
          __for_begin_0._M_node = std::set<unsigned int>::begin(cg_set_ptr)._M_node;
          __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
            v9 = v8;
            if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v8);
            }
            *(_DWORD *)(v2 + 64) = *v9;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v34);
            v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
            cg_config_ptr = data::CoopExcelConfigMgrBase::findCoopCGExcelConfig(
                              &v10->design_config.txt_config_mgr.coop_config_mgr,
                              *(_DWORD *)(v2 + 64));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
            if ( cg_config_ptr
              && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                    &chapter_ptr->cg_set,
                    (const unsigned int *)(v2 + 64))
              && PlayerCoopComp::isCoopCondSatisfy(this, &cg_config_ptr->unlock_cond) )
            {
              std::unordered_set<unsigned int>::insert(
                &chapter_ptr->cg_set,
                (const std::unordered_set<unsigned int>::value_type *)(v2 + 64));
              v11 = std::__shared_ptr_access<proto::CoopCgUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopCgUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              proto::CoopCgUpdateNotify::add_cg_list(v11, *(_DWORD *)(v2 + 64));
              is_have_change = 1;
              PlayerCoopComp::logUnlockCoopCg(this, *(_DWORD *)(v2 + 64), *(_DWORD *)(v2 + 48));
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
          }
          if ( is_have_change )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            player = this->player_;
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::CoopCgUpdateNotify>((const std::shared_ptr<proto::CoopCgUpdateNotify> *)&v34);
            Player::sendMessage(player, &v34, 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v34);
          }
          std::shared_ptr<proto::CoopCgUpdateNotify>::~shared_ptr((std::shared_ptr<proto::CoopCgUpdateNotify> *const)(v2 + 80));
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        reward_set_ptr = CoopExcelConfigMgr::findChapterRewardSet(
                           &v13->design_config.txt_config_mgr.coop_config_mgr,
                           *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
        if ( reward_set_ptr )
        {
          common::tools::perf::make_shared<proto::CoopRewardUpdateNotify>();
          is_have_change_0 = 0;
          __for_range_1 = reward_set_ptr;
          __for_begin_0._M_node = std::set<unsigned int>::begin(reward_set_ptr)._M_node;
          __for_end_0._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            v14 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            *(_DWORD *)(v2 + 64) = *v15;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v34);
            v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
            reward_config_ptr = data::CoopExcelConfigMgrBase::findCoopRewardExcelConfig(
                                  &v16->design_config.txt_config_mgr.coop_config_mgr,
                                  *(_DWORD *)(v2 + 64));
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
            if ( reward_config_ptr
              && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                    &chapter_ptr->reward_set,
                    (const unsigned int *)(v2 + 64))
              && PlayerCoopComp::isCoopCondSatisfy(this, &reward_config_ptr->reward_cond) )
            {
              v17 = std::__shared_ptr_access<proto::CoopRewardUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopRewardUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              proto_reward = proto::CoopRewardUpdateNotify::add_reward_list(v17);
              proto::CoopReward::set_id(proto_reward, *(_DWORD *)(v2 + 64));
              proto::CoopReward::set_state(proto_reward, CoopReward_State_STATE_UNLOCK);
              is_have_change_0 = 1;
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
          }
          if ( is_have_change_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v18 = this->player_;
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::CoopRewardUpdateNotify>((const std::shared_ptr<proto::CoopRewardUpdateNotify> *)&v34);
            Player::sendMessage(v18, &v34, 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v34);
          }
          std::shared_ptr<proto::CoopRewardUpdateNotify>::~shared_ptr((std::shared_ptr<proto::CoopRewardUpdateNotify> *const)(v2 + 80));
        }
      }
      else
      {
LABEL_13:
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v2 + 112),
          (const std::set<unsigned int>::value_type *)(v2 + 48));
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 112)) )
  {
    std::set<unsigned int>::set(&v35, (const std::set<unsigned int> *)(v2 + 112));
    PlayerCoopComp::notifyOpeningChapter(this, &v35);
    std::set<unsigned int>::~set(&v35);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
  if ( v36 == (char *)v2 )
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
};

// Line 1784: range 000000001415E482-000000001415E81B
void __cdecl PlayerCoopComp::onCoopTimer(PlayerCoopComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v9; // r14
  std::set<unsigned int>::iterator v10; // rax
  std::set<unsigned int> *v11; // rsi
  void (__fastcall **v12)(PlayerCoopComp *const); // rax
  std::vector<unsigned int> *__result; // [rsp+10h] [rbp-130h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+18h] [rbp-128h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-110h] BYREF
  char v16[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 24 29 symmetric_difference_vec:1788 112 48 23 update_chapter_set:1785";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::onCoopTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  PlayerCoopComp::getUpdateOpeningChapter((std::set<unsigned int> *)(v2 + 112), this);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/coop/player_coop_comp.cpp",
    "onCoopTimer",
    1786);
  v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v15, (const char (*)[20])"update_chapter_set:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int>(v5, (const std::set<unsigned int> *)(v2 + 112));
  v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         v6,
         (const char (*)[31])", current opening_chapter_set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v7, &this->opening_chapter_set_);
  common::milog::MiLogStream::~MiLogStream(&v15);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 48));
  __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v2 + 48)).container;
  __last2 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 112))._M_node;
  M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 112))._M_node;
  v9 = std::set<unsigned int>::end(&this->opening_chapter_set_)._M_node;
  v10._M_node = std::set<unsigned int>::begin(&this->opening_chapter_set_)._M_node;
  std::set_symmetric_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::back_insert_iterator<std::vector<unsigned int>>>(
    v10,
    (std::_Rb_tree_const_iterator<unsigned int>)v9,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
    (std::_Rb_tree_const_iterator<unsigned int>)__last2,
    (std::back_insert_iterator<std::vector<unsigned int> >)__result);
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 48)) )
  {
    v11 = std::move<std::set<unsigned int> &>((std::set<unsigned int> *)(v2 + 112));
    std::set<unsigned int>::operator=(&this->opening_chapter_set_, v11);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v12 = (void (__fastcall **)(PlayerCoopComp *const))(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*v12)(this);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 48));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 112));
  if ( v16 == (char *)v2 )
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
};

// Line 1802: range 000000001415E81C-000000001415F0EA
void __cdecl PlayerCoopComp::notifyOpeningChapter(PlayerCoopComp *const this, std::set<unsigned int> *p_chapter_set)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const data::CoopCondConfig *v9; // rax
  bool v10; // r15
  data::CoopCondConfig *i; // r14
  void (__fastcall **vptr_CoopCondConfig)(data::CoopCondConfig *); // rax
  std::__shared_ptr_access<proto::CoopChapterUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  uint32_t *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ChapterEndCount; // eax
  Player *player; // r14
  std::initializer_list<data::CoopCondConfig> __l; // [rsp+10h] [rbp-220h]
  std::allocator<data::CoopCondConfig> __a; // [rsp+31h] [rbp-1FFh] BYREF
  bool is_have_change; // [rsp+32h] [rbp-1FEh]
  bool is_satisied; // [rsp+33h] [rbp-1FDh]
  uint32_t idx; // [rsp+34h] [rbp-1FCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-1F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1F0h] BYREF
  std::vector<data::CoopCondConfig>::const_iterator __for_begin_0; // [rsp+48h] [rbp-1E8h] BYREF
  std::vector<data::CoopCondConfig>::const_iterator __for_end_0; // [rsp+50h] [rbp-1E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+58h] [rbp-1D8h]
  const data::CoopChapterExcelConfig *chapter_config_ptr; // [rsp+60h] [rbp-1D0h]
  const std::vector<data::CoopCondConfig> *__for_range_0; // [rsp+68h] [rbp-1C8h]
  proto::CoopChapter *proto_chapter; // [rsp+70h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-1B8h]
  std::shared_ptr<const google::protobuf::Message> v33; // [rsp+80h] [rbp-1B0h] BYREF
  std::vector<data::CoopCondConfig> coop_cond_vec; // [rsp+90h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v35; // [rsp+B0h] [rbp-180h] BYREF
  data::CoopCondConfig v36; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v37; // [rsp+F8h] [rbp-138h] BYREF
  char v38[304]; // [rsp+100h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 15 chapter_id:1805 64 4 10 index:1817 80 16 15 notify_ptr:1803 112 24 20 lock_reason_vec:"
                        "1819 176 40 9 cond:1820";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::notifyOpeningChapter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  common::tools::perf::make_shared<proto::CoopChapterUpdateNotify>();
  is_have_change = 0;
  __for_range = p_chapter_set;
  __for_begin._M_node = std::set<unsigned int>::begin(p_chapter_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(p_chapter_set)._M_node;
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
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopChapter>,unsigned int>(
            &this->chapter_map_,
            (const unsigned int *)(v2 + 48)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v33);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
      chapter_config_ptr = data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(
                             &v7->design_config.txt_config_mgr.coop_config_mgr,
                             *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v33);
      if ( chapter_config_ptr )
      {
        *(_DWORD *)(v2 + 64) = 1;
        is_satisied = 1;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 112));
        __for_range_0 = &chapter_config_ptr->unlock_cond;
        __for_begin_0._M_current = std::vector<data::CoopCondConfig>::begin(&chapter_config_ptr->unlock_cond)._M_current;
        __for_end_0._M_current = std::vector<data::CoopCondConfig>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v9 = __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator*(&__for_begin_0);
          data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v2 + 176), v9);
          data::CoopCondConfig::CoopCondConfig(&v36, (const data::CoopCondConfig *)(v2 + 176));
          __l._M_array = &v36;
          __l._M_len = 1LL;
          std::allocator<data::CoopCondConfig>::allocator(&__a);
          std::vector<data::CoopCondConfig>::vector(&coop_cond_vec, __l, &__a);
          v10 = !PlayerCoopComp::isCoopCondSatisfy(this, &coop_cond_vec);
          std::vector<data::CoopCondConfig>::~vector(&coop_cond_vec);
          std::allocator<data::CoopCondConfig>::~allocator(&__a);
          for ( i = (data::CoopCondConfig *)&v37; i != &v36; (*vptr_CoopCondConfig)(i) )
          {
            if ( *(_BYTE *)(((unsigned __int64)--i >> 3) + 0x7FFF8000) )
              __asan_report_load8(i);
            vptr_CoopCondConfig = (void (__fastcall **)(data::CoopCondConfig *))i->_vptr_CoopCondConfig;
            if ( *(_BYTE *)(((unsigned __int64)i->_vptr_CoopCondConfig >> 3) + 0x7FFF8000) )
              __asan_report_load8(i->_vptr_CoopCondConfig);
          }
          if ( v10 )
          {
            is_satisied = 0;
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v2 + 112),
              (const std::vector<unsigned int>::value_type *)(v2 + 64));
          }
          ++*(_DWORD *)(v2 + 64);
          data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v2 + 176));
          __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator++(&__for_begin_0);
        }
        v13 = std::__shared_ptr_access<proto::CoopChapterUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopChapterUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        proto_chapter = proto::CoopChapterUpdateNotify::add_chapter_list(v13);
        proto::CoopChapter::set_id(proto_chapter, *(_DWORD *)(v2 + 48));
        if ( is_satisied )
        {
          proto::CoopChapter::set_state(proto_chapter, CoopChapter_State_STATE_COND_MEET);
        }
        else
        {
          proto::CoopChapter::set_state(proto_chapter, CoopChapter_State_STATE_COND_NOT_MEET);
          __for_range_1 = (std::vector<unsigned int> *)(v2 + 112);
          __for_begin_0._M_current = (const data::CoopCondConfig *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 112))._M_current;
          __for_end_0._M_current = (const data::CoopCondConfig *)std::vector<unsigned int>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
          {
            v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            idx = *v15;
            proto::CoopChapter::add_lock_reason_list(proto_chapter, idx);
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
          }
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v33);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
        ChapterEndCount = CoopExcelConfigMgr::getChapterEndCount(
                            &v16->design_config.txt_config_mgr.coop_config_mgr,
                            *(_DWORD *)(v2 + 48));
        proto::CoopChapter::set_total_end_count(proto_chapter, ChapterEndCount);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v33);
        is_have_change = 1;
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "notifyOpeningChapter",
          1814);
        v8 = common::milog::MiLogStream::operator<<<char [1],(char *[1])0>(&v35, (const char (*)[1])byte_251F6240);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( is_have_change )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::CoopChapterUpdateNotify>((const std::shared_ptr<proto::CoopChapterUpdateNotify> *)&v33);
    Player::sendMessage(player, &v33, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v33);
  }
  std::shared_ptr<proto::CoopChapterUpdateNotify>::~shared_ptr((std::shared_ptr<proto::CoopChapterUpdateNotify> *const)(v2 + 80));
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 1855: range 000000001415F0EC-000000001415F301
std::set<unsigned int> *__cdecl PlayerCoopComp::getUpdateOpeningChapter(
        std::set<unsigned int> *retstr,
        PlayerCoopComp *const this)
{
  CoopExcelConfigMgr *p_coop_config_mgr; // rsi
  CoopExcelConfigMgr *v3; // rsi
  uint32_t now; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_open_time >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_open_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ignore_open_time);
  }
  if ( this->is_ignore_open_time )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v6);
    p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.coop_config_mgr;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      p_coop_config_mgr = (CoopExcelConfigMgr *)48;
      __asan_report_store_n(retstr, 48LL);
    }
    CoopExcelConfigMgr::findNowOpenChapter(retstr, p_coop_config_mgr, 0xFFFFFFFF);
    std::shared_ptr<Config>::~shared_ptr(v6);
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v6);
    v3 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.coop_config_mgr;
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      v3 = (CoopExcelConfigMgr *)48;
      __asan_report_store_n(retstr, 48LL);
    }
    CoopExcelConfigMgr::findNowOpenChapter(retstr, v3, now);
    std::shared_ptr<Config>::~shared_ptr(v6);
  }
  return retstr;
};

// Line 1865: range 000000001415F302-000000001415FAFB
void __cdecl PlayerCoopComp::fillInOpeningProtoChapter(
        PlayerCoopComp *const this,
        std::set<unsigned int> *p_chapter_set,
        proto::CoopDataNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const data::CoopCondConfig *v10; // rax
  bool v11; // r15
  data::CoopCondConfig *i; // r14
  void (__fastcall **vptr_CoopCondConfig)(data::CoopCondConfig *); // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  uint32_t *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t ChapterEndCount; // eax
  std::initializer_list<data::CoopCondConfig> __l; // [rsp+0h] [rbp-210h]
  std::allocator<data::CoopCondConfig> __a; // [rsp+32h] [rbp-1DEh] BYREF
  bool is_satisied; // [rsp+33h] [rbp-1DDh]
  uint32_t idx; // [rsp+34h] [rbp-1DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-1D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-1D0h] BYREF
  std::vector<data::CoopCondConfig>::const_iterator __for_begin_0; // [rsp+48h] [rbp-1C8h] BYREF
  std::vector<data::CoopCondConfig>::const_iterator __for_end_0; // [rsp+50h] [rbp-1C0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+58h] [rbp-1B8h]
  const data::CoopChapterExcelConfig *chapter_config_ptr; // [rsp+60h] [rbp-1B0h]
  const std::vector<data::CoopCondConfig> *__for_range_0; // [rsp+68h] [rbp-1A8h]
  proto::CoopChapter *proto_chapter; // [rsp+70h] [rbp-1A0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-198h]
  std::shared_ptr<Config> v32; // [rsp+80h] [rbp-190h] BYREF
  std::vector<data::CoopCondConfig> coop_cond_vec; // [rsp+90h] [rbp-180h] BYREF
  common::milog::MiLogStream v34; // [rsp+B0h] [rbp-160h] BYREF
  data::CoopCondConfig v35; // [rsp+D0h] [rbp-140h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-118h] BYREF
  char v37[272]; // [rsp+100h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 15 chapter_id:1866 64 4 10 index:1878 80 24 20 lock_reason_vec:1880 144 40 9 cond:1881";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::fillInOpeningProtoChapter;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  __for_range = p_chapter_set;
  __for_begin._M_node = std::set<unsigned int>::begin(p_chapter_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(p_chapter_set)._M_node;
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
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopChapter>,unsigned int>(
            &this->chapter_map_,
            (const unsigned int *)(v3 + 48)) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v32);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
      chapter_config_ptr = data::CoopExcelConfigMgrBase::findCoopChapterExcelConfig(
                             &v8->design_config.txt_config_mgr.coop_config_mgr,
                             *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v32);
      if ( chapter_config_ptr )
      {
        *(_DWORD *)(v3 + 64) = 1;
        is_satisied = 1;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 80));
        __for_range_0 = &chapter_config_ptr->unlock_cond;
        __for_begin_0._M_current = std::vector<data::CoopCondConfig>::begin(&chapter_config_ptr->unlock_cond)._M_current;
        __for_end_0._M_current = std::vector<data::CoopCondConfig>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v10 = __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator*(&__for_begin_0);
          data::CoopCondConfig::CoopCondConfig((data::CoopCondConfig *const)(v3 + 144), v10);
          data::CoopCondConfig::CoopCondConfig(&v35, (const data::CoopCondConfig *)(v3 + 144));
          __l._M_array = &v35;
          __l._M_len = 1LL;
          std::allocator<data::CoopCondConfig>::allocator(&__a);
          std::vector<data::CoopCondConfig>::vector(&coop_cond_vec, __l, &__a);
          v11 = !PlayerCoopComp::isCoopCondSatisfy(this, &coop_cond_vec);
          std::vector<data::CoopCondConfig>::~vector(&coop_cond_vec);
          std::allocator<data::CoopCondConfig>::~allocator(&__a);
          for ( i = (data::CoopCondConfig *)&v36; i != &v35; (*vptr_CoopCondConfig)(i) )
          {
            if ( *(_BYTE *)(((unsigned __int64)--i >> 3) + 0x7FFF8000) )
              __asan_report_load8(i);
            vptr_CoopCondConfig = (void (__fastcall **)(data::CoopCondConfig *))i->_vptr_CoopCondConfig;
            if ( *(_BYTE *)(((unsigned __int64)i->_vptr_CoopCondConfig >> 3) + 0x7FFF8000) )
              __asan_report_load8(i->_vptr_CoopCondConfig);
          }
          if ( v11 )
          {
            is_satisied = 0;
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v3 + 80),
              (const std::vector<unsigned int>::value_type *)(v3 + 64));
          }
          ++*(_DWORD *)(v3 + 64);
          data::CoopCondConfig::~CoopCondConfig((data::CoopCondConfig *const)(v3 + 144));
          __gnu_cxx::__normal_iterator<data::CoopCondConfig const*,std::vector<data::CoopCondConfig>>::operator++(&__for_begin_0);
        }
        proto_chapter = proto::CoopDataNotify::add_chapter_list(notify);
        proto::CoopChapter::set_id(proto_chapter, *(_DWORD *)(v3 + 48));
        if ( is_satisied )
        {
          proto::CoopChapter::set_state(proto_chapter, CoopChapter_State_STATE_COND_MEET);
        }
        else
        {
          proto::CoopChapter::set_state(proto_chapter, CoopChapter_State_STATE_COND_NOT_MEET);
          __for_range_1 = (std::vector<unsigned int> *)(v3 + 80);
          __for_begin_0._M_current = (const data::CoopCondConfig *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 80))._M_current;
          __for_end_0._M_current = (const data::CoopCondConfig *)std::vector<unsigned int>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
          {
            v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            idx = *v15;
            proto::CoopChapter::add_lock_reason_list(proto_chapter, idx);
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
          }
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        ChapterEndCount = CoopExcelConfigMgr::getChapterEndCount(
                            &v16->design_config.txt_config_mgr.coop_config_mgr,
                            *(_DWORD *)(v3 + 48));
        proto::CoopChapter::set_total_end_count(proto_chapter, ChapterEndCount);
        std::shared_ptr<Config>::~shared_ptr(&v32);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 80));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "fillInOpeningProtoChapter",
          1875);
        v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v34,
               (const char (*)[34])"findCoopChapterExcelConfig failed");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1910: range 000000001415FAFC-000000001415FFCE
void __fastcall PlayerCoopComp::clearCoopQuestSeries(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  uint32_t QuestComp; // eax
  bool v11; // r14
  PlayerQuestComp *v12; // rax
  unsigned int id; // [rsp+1Ch] [rbp-104h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const data::MainCoopExcelConfig *config_ptr; // [rsp+30h] [rbp-F0h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 15 chapter_id:1909 48 48 24 parent_quest_id_set:1924";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::clearCoopQuestSeries;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = chapter_id;
  if ( *(_DWORD *)(v2 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    config_ptr = data::CoopExcelConfigMgrBase::findMainCoopExcelConfig(
                   &v5->design_config.txt_config_mgr.coop_config_mgr,
                   *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->main_quest_series >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->main_quest_series >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->main_quest_series);
      }
      if ( config_ptr->main_quest_series )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v18);
        p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.quest_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->main_quest_series >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->main_quest_series >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->main_quest_series);
        }
        QuestExcelConfigMgr::findParentQuestIdSetBySeriesId(
          (std::set<unsigned int> *)(v2 + 48),
          p_quest_config_mgr,
          config_ptr->main_quest_series);
        std::shared_ptr<Config>::~shared_ptr(&v18);
        __for_range = (std::set<unsigned int> *)(v2 + 48);
        __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
        __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 48))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          id = *v9;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          QuestComp = (unsigned int)Player::getQuestComp(this->player_);
          PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)&v18, QuestComp);
          v11 = std::operator!=<ParentQuest>(0LL, (const std::shared_ptr<ParentQuest> *)&v18);
          std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)&v18);
          if ( v11 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v12 = Player::getQuestComp(this->player_);
            PlayerQuestComp::cancelParentQuest(v12, id, 1);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "clearCoopQuestSeries",
        1919);
      v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v19,
             (const char (*)[37])"findMainCoopExcelConfig, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
  if ( v20 == (char *)v2 )
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

// Line 1936: range 000000001415FFD0-00000000141602B1
void __fastcall PlayerCoopComp::startMainCoopByGM(PlayerCoopComp *const this, __int64 main_coop_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  MainCoop *v5; // r8
  PlayerEventComp *EventComp; // r14
  int v7; // [rsp+1Ch] [rbp-174h] BYREF
  std::shared_ptr<MainCoopStartEvent> __r; // [rsp+20h] [rbp-170h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-160h] BYREF
  char v10[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 main_coop_id:1935 64 152 14 main_coop:1941";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::startMainCoopByGM;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = main_coop_id;
  PlayerCoopComp::clearCoopProgress(this);
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_test, main_coop_id, &this->is_in_test);
  this->is_in_test = 1;
  MainCoop::MainCoop((MainCoop *const)(v2 + 64), *(_DWORD *)(v2 + 48));
  *(_DWORD *)(v2 + 68) = 1;
  v7 = 0;
  std::unordered_map<unsigned int,MainCoop>::emplace<int,MainCoop&>(
    &this->cur_progress_.main_coop_map,
    &v7,
    (MainCoop *)(v2 + 64),
    (int *)&this->cur_progress_.main_coop_map,
    v5);
  PlayerCoopComp::notifyMainCoop(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  common::tools::perf::make_shared<MainCoopStartEvent,unsigned int &>((unsigned int *)&__r, (unsigned int *)(v2 + 48));
  std::shared_ptr<BaseEvent>::shared_ptr<MainCoopStartEvent,void>(&p_event_ptr, &__r);
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<MainCoopStartEvent>::~shared_ptr(&__r);
  MainCoop::~MainCoop((MainCoop *const)(v2 + 64));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1949: range 00000000141602B2-0000000014160362
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCoopComp::clearMainCoopByGM(PlayerCoopComp *const this, uint32_t main_coop_id)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_progress_, *(_QWORD *)&main_coop_id, &this->cur_progress_);
  }
  this->cur_progress_.coop_point_id = 0;
  std::unordered_map<unsigned int,MainCoop>::clear(&this->cur_progress_.main_coop_map);
  PlayerCoopComp::clearCoopQuestSeries(this, main_coop_id);
  if ( *(char *)(((unsigned __int64)&this->is_in_test >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_in_test, main_coop_id, &this->is_in_test);
  this->is_in_test = 0;
};

// Line 1959: range 0000000014160364-0000000014160615
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCoopComp::logUnlockCoopChapter(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopChapter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Player *v7; // r14
  std::string v8; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v10; // [rsp+30h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+50h] [rbp-90h] BYREF

  v8._M_string_length = (std::string::size_type)this;
  HIDWORD(v8._M_dataplus._M_p) = chapter_id;
  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 11 holder:1960 64 16 12 log_ptr:1961";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::logUnlockCoopChapter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((v8._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v8._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v8._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v10, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC63u, v8);
  std::string::~string(&v10);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyUnlockCoopChapter>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopChapter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopChapter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyUnlockCoopChapter::set_chapter_id(v6, HIDWORD(v8._M_dataplus._M_p));
  if ( *(_BYTE *)(((v8._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v8._M_string_length + 24);
  v7 = *(Player **)(v8._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyUnlockCoopChapter,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v8._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyUnlockCoopChapter> *)(v2 + 64));
  Player::printStatLog(v7, (MessagePtr *)&v8._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v8._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyUnlockCoopChapter>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyUnlockCoopChapter> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v11 == (char *)v2 )
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

// Line 1968: range 0000000014160616-00000000141609F5
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerCoopComp::logInvokeCoopPoint(PlayerCoopComp *const this, uint32_t point_id, uint32_t chapter_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::set<unsigned int> *v14; // rax
  Player *v15; // r14
  std::string chapter_ida; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v17; // [rsp+20h] [rbp-C0h] BYREF
  std::string v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  chapter_ida._M_string_length = (std::string::size_type)this;
  chapter_ida._M_dataplus._M_p = (std::string::pointer)__PAIR64__(point_id, chapter_id);
  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 11 holder:1969 48 4 13 point_id:1967 64 16 12 log_ptr:1970";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::logInvokeCoopPoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(chapter_ida._M_dataplus._M_p);
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(chapter_ida._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC64u, chapter_ida);
  std::string::~string(&v18);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyInvokeCoopPoint>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyInvokeCoopPoint::set_chapter_id(v7, (google::protobuf::uint32)chapter_ida._M_dataplus._M_p);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyInvokeCoopPoint::set_point_id(v8, *(_DWORD *)(v3 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  v10 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
          &v9->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
          (const unsigned int *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v17);
  if ( v10 )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyInvokeCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v12 = proto_log::PlayerLogBodyInvokeCoopPoint::mutable_misson_list(v11);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    v14 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
            &v13->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(v14, v12);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v17);
  }
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  v15 = *(Player **)(chapter_ida._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v17, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyInvokeCoopPoint,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyInvokeCoopPoint> *)(v3 + 64));
  Player::printStatLog(v15, (MessagePtr *)&chapter_ida._anon_0, &v17, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v17);
  std::shared_ptr<proto_log::PlayerLogBodyInvokeCoopPoint>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyInvokeCoopPoint> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
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

// Line 1983: range 00000000141609F6-0000000014160DD5
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerCoopComp::logStartCoopPoint(PlayerCoopComp *const this, uint32_t point_id, uint32_t chapter_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::set<unsigned int> *v14; // rax
  Player *v15; // r14
  std::string chapter_ida; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v17; // [rsp+20h] [rbp-C0h] BYREF
  std::string v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  chapter_ida._M_string_length = (std::string::size_type)this;
  chapter_ida._M_dataplus._M_p = (std::string::pointer)__PAIR64__(point_id, chapter_id);
  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 11 holder:1984 48 4 13 point_id:1982 64 16 12 log_ptr:1985";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::logStartCoopPoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(chapter_ida._M_dataplus._M_p);
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(chapter_ida._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC65u, chapter_ida);
  std::string::~string(&v18);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyStartCoopPoint>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyStartCoopPoint::set_chapter_id(v7, (google::protobuf::uint32)chapter_ida._M_dataplus._M_p);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyStartCoopPoint::set_point_id(v8, *(_DWORD *)(v3 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  v10 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
          &v9->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
          (const unsigned int *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v17);
  if ( v10 )
  {
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyStartCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v12 = proto_log::PlayerLogBodyStartCoopPoint::mutable_misson_list(v11);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    v14 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
            &v13->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(v14, v12);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v17);
  }
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  v15 = *(Player **)(chapter_ida._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v17, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyStartCoopPoint,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyStartCoopPoint> *)(v3 + 64));
  Player::printStatLog(v15, (MessagePtr *)&chapter_ida._anon_0, &v17, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v17);
  std::shared_ptr<proto_log::PlayerLogBodyStartCoopPoint>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyStartCoopPoint> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
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

// Line 1998: range 0000000014160DD6-00000000141611DA
void __fastcall PlayerCoopComp::logFinishCoopPoint(
        PlayerCoopComp *const this,
        __int32 point_id,
        __int32 chapter_id,
        __int32 ending_save_point_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v11; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::set<unsigned int> *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *player; // r14
  std::string v18; // [rsp+0h] [rbp-F0h]
  uint32_t ending_save_point_ida; // [rsp+Ch] [rbp-E4h]
  google::protobuf::uint32 chapter_ida; // [rsp+10h] [rbp-E0h]
  PlayerCoopComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v23; // [rsp+30h] [rbp-C0h] BYREF
  std::string v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v18._anon_0._M_allocated_capacity) = point_id;
  *(_DWORD *)v18._anon_0._M_local_buf = chapter_id;
  HIDWORD(v18._M_string_length) = ending_save_point_id;
  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 1 11 holder:1999 48 4 13 point_id:1997 64 16 12 log_ptr:2000";
  *(_QWORD *)(v4 + 16) = PlayerCoopComp::logFinishCoopPoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = point_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xC66u, v18);
  std::string::~string(&v24);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFinishCoopPoint>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFinishCoopPoint::set_chapter_id(v8, chapter_ida);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFinishCoopPoint::set_point_id(v9, *(_DWORD *)(v4 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  v11 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
          &v10->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
          (const unsigned int *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
  if ( v11 )
  {
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    v13 = proto_log::PlayerLogBodyFinishCoopPoint::mutable_misson_list(v12);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    v15 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
            &v14->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v4 + 48));
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(v15, v13);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
  }
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishCoopPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFinishCoopPoint::set_ending_save_point_id(v16, ending_save_point_ida);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v23, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFinishCoopPoint,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyFinishCoopPoint> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &v23, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v23);
  std::shared_ptr<proto_log::PlayerLogBodyFinishCoopPoint>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFinishCoopPoint> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  if ( v25 == (char *)v4 )
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

// Line 2013: range 00000000141611DC-00000000141615C4
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerCoopComp::logCancelCoopProgress(
        PlayerCoopComp *const this,
        uint32_t point_id,
        uint32_t chapter_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::set<unsigned int> *v14; // rax
  Player *v15; // r14
  std::string chapter_ida; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> v17; // [rsp+20h] [rbp-C0h] BYREF
  std::string v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  chapter_ida._M_string_length = (std::string::size_type)this;
  chapter_ida._M_dataplus._M_p = (std::string::pointer)__PAIR64__(point_id, chapter_id);
  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 11 holder:2018 48 4 13 point_id:2012 64 16 12 log_ptr:2019";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::logCancelCoopProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = HIDWORD(chapter_ida._M_dataplus._M_p);
  if ( LODWORD(chapter_ida._M_dataplus._M_p) )
  {
    if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(chapter_ida._M_string_length + 24);
    BasicComp = Player::getBasicComp(*(Player *const *)(chapter_ida._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC67u, chapter_ida);
    std::string::~string(&v18);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyCancelCoopProgress>();
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyCancelCoopProgress::set_chapter_id(
      v7,
      (google::protobuf::uint32)chapter_ida._M_dataplus._M_p);
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyCancelCoopProgress::set_point_id(v8, *(_DWORD *)(v3 + 48));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    v10 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
            &v9->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
            (const unsigned int *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v17);
    if ( v10 )
    {
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCancelCoopProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v12 = proto_log::PlayerLogBodyCancelCoopProgress::mutable_misson_list(v11);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
      v14 = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
              &v13->design_config.txt_config_mgr.quest_config_mgr.coop_point_to_quest_map,
              (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
      common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(v14, v12);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v17);
    }
    if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(chapter_ida._M_string_length + 24);
    v15 = *(Player **)(chapter_ida._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v17, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCancelCoopProgress,void>(
      (std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0,
      (const std::shared_ptr<proto_log::PlayerLogBodyCancelCoopProgress> *)(v3 + 64));
    Player::printStatLog(v15, (MessagePtr *)&chapter_ida._anon_0, &v17, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v17);
    std::shared_ptr<proto_log::PlayerLogBodyCancelCoopProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCancelCoopProgress> *const)(v3 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
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

// Line 2032: range 00000000141615C6-000000001416189E
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCoopComp::logUnlockCoopCg(PlayerCoopComp *const this, uint32_t cg_id, uint32_t chapter_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopCg,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopCg,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // r14
  std::string chapter_ida; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  chapter_ida._M_string_length = (std::string::size_type)this;
  HIDWORD(chapter_ida._M_dataplus._M_p) = cg_id;
  LODWORD(chapter_ida._M_dataplus._M_p) = chapter_id;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:2033 64 16 12 log_ptr:2034";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::logUnlockCoopCg;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(chapter_ida._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v12, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xC68u, chapter_ida);
  std::string::~string(&v12);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyUnlockCoopCg>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopCg,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopCg,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyUnlockCoopCg::set_chapter_id(v7, (google::protobuf::uint32)chapter_ida._M_dataplus._M_p);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopCg,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyUnlockCoopCg,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyUnlockCoopCg::set_cg_id(v8, HIDWORD(chapter_ida._M_dataplus._M_p));
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  v9 = *(Player **)(chapter_ida._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyUnlockCoopCg,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyUnlockCoopCg> *)(v3 + 64));
  Player::printStatLog(v9, (MessagePtr *)&chapter_ida._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyUnlockCoopCg>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyUnlockCoopCg> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v13 == (char *)v3 )
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

// Line 2042: range 00000000141618A0-0000000014161B78
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerCoopComp::logTakeCoopReward(
        PlayerCoopComp *const this,
        uint32_t reward_config_id,
        uint32_t chapter_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeCoopReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeCoopReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // r14
  std::string chapter_ida; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  chapter_ida._M_string_length = (std::string::size_type)this;
  HIDWORD(chapter_ida._M_dataplus._M_p) = reward_config_id;
  LODWORD(chapter_ida._M_dataplus._M_p) = chapter_id;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 11 holder:2043 64 16 12 log_ptr:2044";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::logTakeCoopReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(chapter_ida._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v12, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xC69u, chapter_ida);
  std::string::~string(&v12);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTakeCoopReward>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeCoopReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeCoopReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyTakeCoopReward::set_chapter_id(v7, (google::protobuf::uint32)chapter_ida._M_dataplus._M_p);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeCoopReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeCoopReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyTakeCoopReward::set_reward_config_id(v8, HIDWORD(chapter_ida._M_dataplus._M_p));
  if ( *(_BYTE *)(((chapter_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(chapter_ida._M_string_length + 24);
  v9 = *(Player **)(chapter_ida._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakeCoopReward,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyTakeCoopReward> *)(v3 + 64));
  Player::printStatLog(v9, (MessagePtr *)&chapter_ida._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&chapter_ida._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyTakeCoopReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakeCoopReward> *const)(v3 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v13 == (char *)v3 )
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

// Line 2052: range 0000000014161B7A-0000000014161E76
void __cdecl PlayerCoopComp::logFinishMainCoop(
        PlayerCoopComp *const this,
        uint32_t point_id,
        uint32_t chapter_id,
        uint32_t save_point_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  std::string v12; // [rsp+0h] [rbp-F0h]
  google::protobuf::uint32 save_point_ida; // [rsp+Ch] [rbp-E4h]
  google::protobuf::uint32 chapter_ida; // [rsp+10h] [rbp-E0h]
  google::protobuf::uint32 point_ida; // [rsp+14h] [rbp-DCh]
  PlayerCoopComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = point_id;
  *(_DWORD *)v12._anon_0._M_local_buf = chapter_id;
  HIDWORD(v12._M_string_length) = save_point_id;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:2053 64 16 12 log_ptr:2054";
  *(_QWORD *)(v4 + 16) = PlayerCoopComp::logFinishMainCoop;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xC6Au, v12);
  std::string::~string(&v19);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFinishMainCoop>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFinishMainCoop::set_chapter_id(v8, chapter_ida);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFinishMainCoop::set_point_id(v9, point_ida);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishMainCoop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyFinishMainCoop::set_save_point_id(v10, save_point_ida);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&thisa->player_);
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFinishMainCoop,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyFinishMainCoop> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFinishMainCoop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFinishMainCoop> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v20 == (char *)v4 )
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

// Line 2063: range 0000000014161E78-00000000141621EB
void __fastcall PlayerCoopComp::tryShowCoopCg(PlayerCoopComp *const this, uint32_t coop_point_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  std::__shared_ptr_access<proto::CoopCgShowNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  Player *player; // r14
  uint32_t cg_id; // [rsp+14h] [rbp-BCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<const google::protobuf::Message> v16; // [rsp+30h] [rbp-A0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 coop_point_id:2062 64 16 15 notify_ptr:2068";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::tryShowCoopCg;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = coop_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  v6 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>> const,unsigned int>(
          &v5->design_config.txt_config_mgr.coop_config_mgr.point_to_cg_map,
          (const unsigned int *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v16);
  if ( !v6 )
  {
    common::tools::perf::make_shared<proto::CoopCgShowNotify>();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    __for_range = std::unordered_map<unsigned int,std::set<unsigned int>>::at(
                    &v7->design_config.txt_config_mgr.coop_config_mgr.point_to_cg_map,
                    (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v16);
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      cg_id = *v9;
      v10 = std::__shared_ptr_access<proto::CoopCgShowNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CoopCgShowNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      proto::CoopCgShowNotify::add_cg_list(v10, cg_id);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::CoopCgShowNotify>((const std::shared_ptr<proto::CoopCgShowNotify> *)&v16);
    Player::sendMessage(player, &v16, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v16);
    std::shared_ptr<proto::CoopCgShowNotify>::~shared_ptr((std::shared_ptr<proto::CoopCgShowNotify> *const)(v2 + 64));
  }
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
};

// Line 2077: range 00000000141621EC-000000001416230C
__int64 __fastcall PlayerCoopComp::setCoopChapterViewed(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 chapter_id:2076";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::setCoopChapterViewed;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = chapter_id;
  if ( !PlayerCoopComp::isChapterOpening(this, *(_DWORD *)(v2 + 32)) )
  {
    result = 9601LL;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              &this->viewed_chapter_set_,
              (const unsigned int *)(v2 + 32)) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::unordered_set<unsigned int>::insert(
      &this->viewed_chapter_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    result = 0LL;
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
  return result;
};

// Line 2091: range 000000001416230E-00000000141625B2
void __fastcall PlayerCoopComp::finishChapterByGm(PlayerCoopComp *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::CoopPoint::State *p_state; // rax
  __int64 v6; // rdx
  std::unordered_map<unsigned int,CoopPoint>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,CoopPoint>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,CoopPoint> *__for_range; // [rsp+20h] [rbp-B0h]
  std::pair<unsigned int const,CoopPoint> *__in; // [rsp+28h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,CoopPoint> >::type *id; // [rsp+30h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,CoopPoint> >::type *coop_point; // [rsp+38h] [rbp-98h]
  std::set<unsigned int> p_chapter_set; // [rsp+40h] [rbp-90h] BYREF
  char v14[96]; // [rsp+70h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 chapter_id:2090";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::finishChapterByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = chapter_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopChapter>,unsigned int>(
         &this->chapter_map_,
         (const unsigned int *)(v2 + 32)) )
  {
    PlayerCoopComp::clearCoopProgress(this);
    PlayerCoopComp::notifyCoopProgress(this);
    __for_range = &std::unordered_map<unsigned int,CoopChapter>::at(
                     &this->chapter_map_,
                     (const std::unordered_map<unsigned int,CoopChapter>::key_type *)(v2 + 32))->coop_point_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,CoopPoint>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,CoopPoint>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,CoopPoint>,false>(&__for_begin, &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,CoopPoint>(__in);
      coop_point = std::get<1ul,unsigned int const,CoopPoint>(__in);
      p_state = &coop_point->state;
      v6 = (*(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000));
      if ( (_BYTE)v6 )
        __asan_report_store4(p_state, (((_BYTE)coop_point + 4) & 7u) + 3, v6);
      coop_point->state = CoopPoint_State_STATE_FINISHED;
      std::__detail::_Node_iterator<std::pair<unsigned int const,CoopPoint>,false,false>::operator++(&__for_begin);
    }
    PlayerCoopComp::notifyChapterUpdate(this, *(_DWORD *)(v2 + 32));
    std::set<unsigned int>::set(&p_chapter_set, &this->opening_chapter_set_);
    PlayerCoopComp::notifyOpeningChapter(this, &p_chapter_set);
    std::set<unsigned int>::~set(&p_chapter_set);
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

// Line 2108: range 00000000141625B4-000000001416286B
__int64 __fastcall PlayerCoopComp::setMainCoopConfidenceByMUIP(PlayerCoopComp *const this, __int64 confidence)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  MainCoop *main_coop_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 confidence:2107";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::setMainCoopConfidenceByMUIP;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = confidence;
  main_coop_ptr = PlayerCoopComp::findMainCoop(this);
  if ( main_coop_ptr )
  {
    if ( *(_DWORD *)(v2 + 32) <= 5u )
    {
      v7 = *(_DWORD *)(v2 + 32);
      v8 = *(_BYTE *)(((unsigned __int64)&main_coop_ptr->self_confidence >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        LOBYTE(confidence) = v8 != 0;
        __asan_report_store4(&main_coop_ptr->self_confidence, confidence, &main_coop_ptr->self_confidence);
      }
      main_coop_ptr->self_confidence = v7;
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/coop/player_coop_comp.cpp",
        "setMainCoopConfidenceByMUIP",
        2121);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v11,
             (const char (*)[30])"MUIP set cur self_confidence:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      PlayerCoopComp::notifyMainCoop(this);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "setMainCoopConfidenceByMUIP",
        2117);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v11,
             (const char (*)[32])"invalid confidence, confidence:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/coop/player_coop_comp.cpp",
      "setMainCoopConfidenceByMUIP",
      2112);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v11,
      (const char (*)[29])"player have no coop progress");
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0xFFFFFFFFLL;
  }
  if ( v12 == (char *)v2 )
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

// Line 2128: range 000000001416286C-0000000014163075
__int64 __fastcall PlayerCoopComp::addSavePointListToCoopPointByMUIP(
        PlayerCoopComp *const this,
        uint32_t coop_point_id,
        const std::vector<unsigned int> *add_save_point_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isStartCoopPoint; // r14
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::vector<unsigned int> *p_save_point_vec; // r14
  unsigned int *M_current; // r15
  __int64 result; // rax
  unsigned int *__last; // [rsp+10h] [rbp-140h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-120h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-118h] BYREF
  CoopPoint *point_ptr; // [rsp+40h] [rbp-110h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v31; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 15 chapter_id:2146 64 4 18 save_point_id:2148 80 4 18 coop_point_id:2127 96 24 30 actual_"
                        "add_save_point_vec:2147";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::addSavePointListToCoopPointByMUIP;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 80) = coop_point_id;
  point_ptr = PlayerCoopComp::findCoopPoint(this, *(_DWORD *)(v3 + 80));
  if ( point_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)point_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_ptr->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&point_ptr->state);
    }
    if ( point_ptr->state )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
      isStartCoopPoint = CoopExcelConfigMgr::isStartCoopPoint(
                           &v9->design_config.txt_config_mgr.coop_config_mgr,
                           *(_DWORD *)(v3 + 80));
      std::shared_ptr<Config>::~shared_ptr(&v31);
      if ( isStartCoopPoint )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/coop/player_coop_comp.cpp",
          "addSavePointListToCoopPointByMUIP",
          2143);
        v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v32,
                (const char (*)[43])"start coop point can not be set, point_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v7 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&point_ptr->start_main_coop >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&point_ptr->start_main_coop >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&point_ptr->start_main_coop);
        }
        *(_DWORD *)(v3 + 48) = point_ptr->start_main_coop.id;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
        __for_range = add_save_point_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(add_save_point_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(add_save_point_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          *(_DWORD *)(v3 + 64) = *v13;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v31);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
          v15 = !JsonConfigMgr::isMainCoopSavePoint(
                   &v14->design_config.json_config_mgr,
                   *(_DWORD *)(v3 + 48),
                   *(_DWORD *)(v3 + 64));
          std::shared_ptr<Config>::~shared_ptr(&v31);
          if ( v15 )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/coop/player_coop_comp.cpp",
              "addSavePointListToCoopPointByMUIP",
              2152);
            v16 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v32,
                    (const char (*)[41])"isMainCoopSavePoint false, main_coop_id:");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v3 + 48));
            v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v17,
                    (const char (*)[17])", save_point_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v32);
            v7 = -1;
            goto LABEL_27;
          }
          if ( !common::tools::MiscUtils::isContains<unsigned int>(
                  &point_ptr->start_main_coop.save_point_vec,
                  (const unsigned int *)(v3 + 64)) )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v3 + 96),
              (const std::vector<unsigned int>::value_type *)(v3 + 64));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/coop/player_coop_comp.cpp",
            "addSavePointListToCoopPointByMUIP",
            2163);
          common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            &v32,
            (const char (*)[59])"addSavePointListToCoopPointByMUIP player has already saved");
          common::milog::MiLogStream::~MiLogStream(&v32);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/coop/player_coop_comp.cpp",
            "addSavePointListToCoopPointByMUIP",
            2166);
          v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v32,
                  (const char (*)[13])"actualy add:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int>(v19, (const std::vector<unsigned int> *)(v3 + 96));
          v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v20, (const char (*)[16])off_252552E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v32);
          p_save_point_vec = &point_ptr->start_main_coop.save_point_vec;
          __last = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
          M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
          __for_begin._M_current = std::vector<unsigned int>::end(&point_ptr->start_main_coop.save_point_vec)._M_current;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            &__for_end,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
          std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
            p_save_point_vec,
            __for_end,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last);
        }
        v7 = 0;
LABEL_27:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/coop/player_coop_comp.cpp",
        "addSavePointListToCoopPointByMUIP",
        2137);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v32,
             (const char (*)[48])"coop point is not started, can't set, point_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v32);
      v7 = 9603;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "addSavePointListToCoopPointByMUIP",
      2132);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v32,
           (const char (*)[37])"findCoopPoint failed, coop_point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v7 = -1;
  }
  result = v7;
  if ( v33 == (char *)v3 )
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
  return result;
};

// Line 2173: range 0000000014163076-000000001416351B
void __cdecl PlayerCoopComp::reloadChapterStartCoopPointConfig(PlayerCoopComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  CoopExcelConfigMgr *p_coop_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::unordered_map<unsigned int,CoopPoint>::mapped_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::unordered_map<unsigned int,CoopChapter>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,CoopChapter>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,CoopChapter> *__for_range; // [rsp+30h] [rbp-E0h]
  std::pair<unsigned int const,CoopChapter> *__in; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,CoopChapter> >::type *id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,CoopChapter> >::type *chapter; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-90h] BYREF
  char v26[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 19 start_point_id:2176";
  *(_QWORD *)(v1 + 16) = PlayerCoopComp::reloadChapterStartCoopPointConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->chapter_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,CoopChapter>::begin(&this->chapter_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,CoopChapter>::end(&this->chapter_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,CoopChapter>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,CoopChapter>(__in);
    chapter = std::get<1ul,unsigned int const,CoopChapter>(__in);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_coop_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.coop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    *(_DWORD *)(v1 + 32) = CoopExcelConfigMgr::findChapterStartCoopPoint(p_coop_config_mgr, *id);
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopPoint>,unsigned int>(
            &chapter->coop_point_map,
            (const unsigned int *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/coop/player_coop_comp.cpp",
        "reloadChapterStartCoopPointConfig",
        2179);
      v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v24,
             (const char (*)[43])"chapter start_point not exist, chapter_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, id);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])", start_point_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      v10 = std::unordered_map<unsigned int,CoopPoint>::at(
              &chapter->coop_point_map,
              (const std::unordered_map<unsigned int,CoopPoint>::key_type *)(v1 + 32));
      if ( MainCoop::initStartCoopPointConfig(&v10->start_main_coop) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/coop/player_coop_comp.cpp",
          "reloadChapterStartCoopPointConfig",
          2185);
        v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v25,
                (const char (*)[45])"initStartCoopPointConfig failed, chapter_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v12,
                (const char (*)[18])", start_point_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v1 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,CoopChapter>,false,false>::operator++(&__for_begin);
  }
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2192: range 000000001416351C-0000000014163A5B
void __fastcall PlayerCoopComp::onRollbackResetProgress(
        PlayerCoopComp *const this,
        uint32_t quest_id,
        const std::vector<const data::QuestExcelConfig*> *quest_config_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const data::QuestExcelConfig *const *v6; // rax
  const data::QuestExcelConfig *v7; // rax
  char v8; // dl
  MainCoop *v10; // r12
  MainCoop *v11; // rax
  std::unordered_map<unsigned int,MainCoop> *p_main_coop_map; // rdx
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int value; // [rsp+2Ch] [rbp-B4h] BYREF
  std::vector<const data::QuestExcelConfig*>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  std::vector<const data::QuestExcelConfig*>::const_iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const std::vector<const data::QuestExcelConfig*> *__for_range; // [rsp+40h] [rbp-A0h]
  const data::QuestExcelConfig *const *config_ptr; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-90h] BYREF
  char v23[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 quest_id:2191";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::onRollbackResetProgress;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = quest_id;
  if ( PlayerCoopComp::isHasQuestInMainCoopMap(this, *(_DWORD *)(v3 + 32)) )
  {
    __for_range = quest_config_vec;
    __for_begin._M_current = std::vector<data::QuestExcelConfig const*>::begin(quest_config_vec)._M_current;
    __for_end._M_current = std::vector<data::QuestExcelConfig const*>::end(quest_config_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::QuestExcelConfig const* const*,std::vector<data::QuestExcelConfig const*>>(
              &__for_begin,
              &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<data::QuestExcelConfig const* const*,std::vector<data::QuestExcelConfig const*>>::operator*(&__for_begin);
      config_ptr = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v6);
      if ( !*config_ptr )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/coop/player_coop_comp.cpp",
          "onRollbackResetProgress",
          2202);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"config_ptr nullptr");
        common::milog::MiLogStream::~MiLogStream(&v22);
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      v7 = *config_ptr;
      v8 = *(_BYTE *)(((unsigned __int64)&(*config_ptr)->sub_id >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
        v7 = (const data::QuestExcelConfig *)__asan_report_load4(&(*config_ptr)->sub_id);
      if ( v7->sub_id == *(_DWORD *)(v3 + 32) )
      {
        if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,unsigned int>(
                &this->cur_progress_.main_coop_map,
                (const unsigned int *)(v3 + 32))
          || (value = 0,
              !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
                 &this->cur_progress_.main_coop_map,
                 &value)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/coop/player_coop_comp.cpp",
            "onRollbackResetProgress",
            2210);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v22,
            (const char (*)[20])"findMainCoop failed");
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          v10 = std::unordered_map<unsigned int,MainCoop>::at(
                  &this->cur_progress_.main_coop_map,
                  (const std::unordered_map<unsigned int,MainCoop>::key_type *)(v3 + 32));
          value = 0;
          v11 = std::unordered_map<unsigned int,MainCoop>::at(
                  &this->cur_progress_.main_coop_map,
                  (const std::unordered_map<unsigned int,MainCoop>::key_type *)&value);
          PlayerCoopComp::updateCurMainCoop(this, v11, v10);
          PlayerCoopComp::notifyMainCoop(this);
        }
        break;
      }
      p_main_coop_map = &this->cur_progress_.main_coop_map;
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      std::unordered_map<unsigned int,MainCoop>::erase(p_main_coop_map, &(*config_ptr)->sub_id);
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/coop/player_coop_comp.cpp",
        "onRollbackResetProgress",
        2220);
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v22,
              (const char (*)[42])"rollback erase quest main_coop, quest_id:");
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &(*config_ptr)->sub_id);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      value = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)&value);
      common::milog::MiLogStream::~MiLogStream(&v22);
      __gnu_cxx::__normal_iterator<data::QuestExcelConfig const* const*,std::vector<data::QuestExcelConfig const*>>::operator++(&__for_begin);
    }
  }
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2227: range 0000000014163A5C-0000000014163D32
void __cdecl PlayerCoopComp::onRollbackRemoveQuest(
        PlayerCoopComp *const this,
        uint32_t quest_id,
        const std::vector<const data::QuestExcelConfig*> *quest_config_vec)
{
  const data::QuestExcelConfig *const *v3; // rax
  const data::QuestExcelConfig *v4; // rax
  char v5; // dl
  std::unordered_map<unsigned int,MainCoop> *p_main_coop_map; // rdx
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int val; // [rsp+2Ch] [rbp-54h] BYREF
  std::vector<const data::QuestExcelConfig*>::const_iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  std::vector<const data::QuestExcelConfig*>::const_iterator __for_end; // [rsp+38h] [rbp-48h] BYREF
  const std::vector<const data::QuestExcelConfig*> *__for_range; // [rsp+40h] [rbp-40h]
  const data::QuestExcelConfig *const *config_ptr; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-30h] BYREF

  if ( PlayerCoopComp::isHasQuestInMainCoopMap(this, quest_id) )
  {
    __for_range = quest_config_vec;
    __for_begin._M_current = std::vector<data::QuestExcelConfig const*>::begin(quest_config_vec)._M_current;
    __for_end._M_current = std::vector<data::QuestExcelConfig const*>::end(quest_config_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::QuestExcelConfig const* const*,std::vector<data::QuestExcelConfig const*>>(
              &__for_begin,
              &__for_end) )
    {
      v3 = __gnu_cxx::__normal_iterator<data::QuestExcelConfig const* const*,std::vector<data::QuestExcelConfig const*>>::operator*(&__for_begin);
      config_ptr = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3);
      if ( !*config_ptr )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/coop/player_coop_comp.cpp",
          "onRollbackRemoveQuest",
          2237);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v16, (const char (*)[19])"config_ptr nullptr");
        common::milog::MiLogStream::~MiLogStream(&v16);
        return;
      }
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      v4 = *config_ptr;
      v5 = *(_BYTE *)(((unsigned __int64)&(*config_ptr)->sub_id >> 3) + 0x7FFF8000);
      if ( v5 != 0 && v5 <= 3 )
        v4 = (const data::QuestExcelConfig *)__asan_report_load4(&(*config_ptr)->sub_id);
      if ( quest_id == v4->sub_id )
        return;
      p_main_coop_map = &this->cur_progress_.main_coop_map;
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      std::unordered_map<unsigned int,MainCoop>::erase(p_main_coop_map, &(*config_ptr)->sub_id);
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/coop/player_coop_comp.cpp",
        "onRollbackRemoveQuest",
        2247);
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v16,
             (const char (*)[42])"rollback erase quest main_coop, quest_id:");
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(config_ptr);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &(*config_ptr)->sub_id);
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      __gnu_cxx::__normal_iterator<data::QuestExcelConfig const* const*,std::vector<data::QuestExcelConfig const*>>::operator++(&__for_begin);
    }
  }
};

// Line 2253: range 0000000014163D34-0000000014163E8E
_BOOL8 __fastcall PlayerCoopComp::isHasQuestInMainCoopMap(PlayerCoopComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // al
  _BOOL8 result; // rax
  int value; // [rsp+1Ch] [rbp-64h] BYREF
  char v8[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 quest_id:2252";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::isHasQuestInMainCoopMap;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_progress_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_progress_);
  }
  v5 = 1;
  if ( this->cur_progress_.coop_point_id )
  {
    value = 0;
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,int>(
           &this->cur_progress_.main_coop_map,
           &value)
      && common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,MainCoop>,unsigned int>(
           &this->cur_progress_.main_coop_map,
           (const unsigned int *)(v2 + 32)) )
    {
      v5 = 0;
    }
  }
  result = !v5;
  if ( v8 == (char *)v2 )
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

// Line 2264: range 0000000014163E90-0000000014164256
void __cdecl PlayerCoopComp::updateCurMainCoop(
        PlayerCoopComp *const this,
        MainCoop *cur_main_coop,
        MainCoop *main_coop)
{
  uint32_t v3; // ecx
  char v4; // al
  __int64 v5; // rsi
  proto::MainCoop::Status status; // ecx
  char v7; // dl
  __int64 v8; // rdx
  std::vector<unsigned int> *p_save_point_vec; // rsi
  uint32_t self_confidence; // ecx
  char v11; // al
  JsonConfigMgr *p_json_config_mgr; // rcx
  bool isCoopVar; // bl
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type v14; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,int> >::type *v15; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v16; // rax
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type *v17; // rdx
  char v18; // cl
  MainCoop *cur_main_coopa; // [rsp+10h] [rbp-70h]
  uint32_t main_coop_id; // [rsp+2Ch] [rbp-54h]
  std::unordered_map<unsigned int,int>::iterator __for_begin; // [rsp+30h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,int>::iterator __for_end; // [rsp+38h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,int> *__for_range; // [rsp+40h] [rbp-40h]
  const std::pair<unsigned int const,int> *v25; // [rsp+48h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,int> >::type *id; // [rsp+50h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type *value; // [rsp+58h] [rbp-28h]
  std::shared_ptr<Config> v28[2]; // [rsp+60h] [rbp-20h] BYREF

  cur_main_coopa = cur_main_coop;
  if ( *(_BYTE *)(((unsigned __int64)main_coop >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)main_coop >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(main_coop);
  }
  v3 = main_coop->id;
  v4 = *(_BYTE *)(((unsigned __int64)cur_main_coop >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(cur_main_coop) = v4 != 0;
    __asan_report_store4(cur_main_coopa, cur_main_coop, cur_main_coopa);
  }
  cur_main_coopa->id = v3;
  v5 = (((_BYTE)main_coop + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&main_coop->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)main_coop + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_coop->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&main_coop->status);
  }
  status = main_coop->status;
  v7 = *(_BYTE *)(((unsigned __int64)&cur_main_coopa->status >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((char)((((_BYTE)cur_main_coopa + 4) & 7) + 3) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store4(&cur_main_coopa->status, v5, v8);
  cur_main_coopa->status = status;
  p_save_point_vec = &main_coop->save_point_vec;
  std::vector<unsigned int>::operator=(&cur_main_coopa->save_point_vec, &main_coop->save_point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&main_coop->self_confidence >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&main_coop->self_confidence >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&main_coop->self_confidence);
  }
  self_confidence = main_coop->self_confidence;
  v11 = *(_BYTE *)(((unsigned __int64)&cur_main_coopa->self_confidence >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_save_point_vec) = v11 != 0;
    __asan_report_store4(&cur_main_coopa->self_confidence, p_save_point_vec, &cur_main_coopa->self_confidence);
  }
  cur_main_coopa->self_confidence = self_confidence;
  std::unordered_map<unsigned int,int>::operator=(&cur_main_coopa->normal_var_map, &main_coop->normal_var_map);
  if ( *(_BYTE *)(((unsigned __int64)cur_main_coopa >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)cur_main_coopa >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(cur_main_coopa);
  }
  main_coop_id = cur_main_coopa->id;
  common::tools::MiscUtils::erase_if<unsigned int,int,PlayerCoopComp::updateCurMainCoop(MainCoop &,MainCoop &)::{lambda(unsigned int &)#1}>(
    &cur_main_coopa->temp_var_map,
    (PlayerCoopComp::updateCurMainCoop::<lambda(auto:23&)>)cur_main_coopa->id);
  __for_range = &main_coop->temp_var_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin(&main_coop->temp_var_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,int>::end(&main_coop->temp_var_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end) )
  {
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,int>(v25);
    value = (std::tuple_element<1,const std::pair<unsigned int const,int> >::type *)std::get<1ul,unsigned int const,int>(v25);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v28);
    p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v28)->design_config.json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    isCoopVar = JsonConfigMgr::isCoopVar(p_json_config_mgr, main_coop_id, *id);
    std::shared_ptr<Config>::~shared_ptr(v28);
    if ( !isCoopVar )
    {
      if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(value);
      }
      v14 = *value;
      v15 = id;
      v16 = std::unordered_map<unsigned int,int>::operator[](&cur_main_coopa->temp_var_map, id);
      v17 = v16;
      v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(((unsigned __int8)v16 & 7) + 3) >= v18 )
      {
        LOBYTE(v15) = v18 != 0;
        __asan_report_store4(v16, v15, v16);
      }
      *v17 = v14;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
};

// Line 2272: range 00000000141D0438-00000000141D053B
bool __cdecl PlayerCoopComp::updateCurMainCoop::_lambda_auto_23___::operator()_std::pair_unsigned_int_const_int___(
        const PlayerCoopComp::updateCurMainCoop::<lambda(auto:23&)> *const __closure,
        std::pair<unsigned int const,int> *p)
{
  const JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t first; // ecx
  bool isCoopVar; // bl
  std::shared_ptr<Config> v7[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7)->design_config.json_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p >> 3) + 0x7FFF8000) )
  {
    p_json_config_mgr = (const JsonConfigMgr *)p;
    __asan_report_load4(p);
  }
  first = p->first;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    p_json_config_mgr = (const JsonConfigMgr *)__closure;
    __asan_report_load4(__closure);
  }
  isCoopVar = JsonConfigMgr::isCoopVar(p_json_config_mgr, __closure->__main_coop_id, first);
  std::shared_ptr<Config>::~shared_ptr(v7);
  return !isCoopVar;
};

// Line 2294: range 0000000014164258-00000000141644ED
bool __fastcall PlayerCoopComp::isCoopCgUnlock(const PlayerCoopComp *const this, uint32_t cg_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  bool result; // al
  const CoopChapter *chapter; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 chapter_id:2297 64 4 10 cg_id:2293";
  *(_QWORD *)(v2 + 16) = PlayerCoopComp::isCoopCgUnlock;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = cg_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  v6 = common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
         &v5->design_config.txt_config_mgr.coop_config_mgr.cg_to_chapter_map,
         (const unsigned int *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( v6 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    v8 = std::unordered_map<unsigned int,unsigned int>::at(
           &v7->design_config.txt_config_mgr.coop_config_mgr.cg_to_chapter_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 64));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v2 + 48) = *v9;
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,CoopChapter> const,unsigned int>(
            &this->chapter_map_,
            (const unsigned int *)(v2 + 48)) )
    {
      result = 0;
    }
    else
    {
      chapter = std::unordered_map<unsigned int,CoopChapter>::at(
                  &this->chapter_map_,
                  (const std::unordered_map<unsigned int,CoopChapter>::key_type *)(v2 + 48));
      result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 &chapter->cg_set,
                 (const unsigned int *)(v2 + 64));
    }
  }
  else
  {
    result = 0;
  }
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

// Line 2309: range 00000000141644EE-0000000014164552
void __cdecl PlayerCoopComp::openAllCoopChapterByGm(PlayerCoopComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = ((_BYTE)this + 89) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_ignore_open_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_open_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_ignore_open_time, v1, v2);
  this->is_ignore_open_time = 1;
  PlayerCoopComp::onCoopTimer(this, 0LL);
};

// Line 2315: range 0000000014164554-0000000014164B48
__int64 __fastcall PlayerCoopComp::tryFailMainCoop(
        PlayerCoopComp *const this,
        uint32_t chapter_id,
        const std::string *textmap_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  const std::string *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int v18; // r14d
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  MainCoop *main_coop_ptr; // [rsp+28h] [rbp-B8h]
  char v23[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 15 chapter_id:2314 64 32 11 notify:2341";
  *(_QWORD *)(v3 + 16) = PlayerCoopComp::tryFailMainCoop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = chapter_id;
  main_coop_ptr = PlayerCoopComp::findMainCoop(this);
  if ( !main_coop_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "tryFailMainCoop",
      2319);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[46])"player have no current main_coop, chapter_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_21:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    v18 = -1;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)main_coop_ptr >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(main_coop_ptr);
  }
  if ( main_coop_ptr->id != *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "tryFailMainCoop",
      2324);
    v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[53])"fail chapter is not current chapter, cur_chapter_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &main_coop_ptr->id);
    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])", fail_chapter_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_21;
  }
  if ( *(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)main_coop_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&main_coop_ptr->status);
  }
  if ( main_coop_ptr->status != MainCoop_Status_RUNNING )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/coop/player_coop_comp.cpp",
      "tryFailMainCoop",
      2329);
    v13 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            (common::milog::MiLogStream *const)(v3 + 64),
            (const char (*)[55])"current chapter status is not running, cur_chapter_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])", status:");
    if ( *(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)main_coop_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&main_coop_ptr->status >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&main_coop_ptr->status);
    }
    v16 = proto::MainCoop_Status_Name[abi:cxx11](main_coop_ptr->status);
    v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, v16);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_21;
  }
  PlayerCoopComp::clearCoopProgress(this);
  PlayerCoopComp::notifyCoopProgress(this);
  PlayerCoopComp::notifyChapterUpdate(this, *(_DWORD *)(v3 + 48));
  proto::MainCoopFailNotify::MainCoopFailNotify((proto::MainCoopFailNotify *const)(v3 + 64));
  proto::MainCoopFailNotify::set_chapter_id((proto::MainCoopFailNotify *const)(v3 + 64), *(_DWORD *)(v3 + 48));
  proto::MainCoopFailNotify::set_textmap_id((proto::MainCoopFailNotify *const)(v3 + 64), textmap_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 64));
  v18 = 0;
  proto::MainCoopFailNotify::~MainCoopFailNotify((proto::MainCoopFailNotify *const)(v3 + 64));
LABEL_25:
  result = v18;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
