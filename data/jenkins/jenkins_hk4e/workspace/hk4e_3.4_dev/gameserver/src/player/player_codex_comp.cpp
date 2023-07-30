// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_codex_comp.cpp

// Line 33: range 0000000017995A96-0000000017995B91
_BOOL8 __fastcall CodexTypeData::isContainsCodex(const CodexTypeData *const this, uint32_t codex_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 codex_id:32";
  *(_QWORD *)(v2 + 16) = CodexTypeData::isContainsCodex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = codex_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->codex_id_set,
             (const unsigned int *)(v2 + 32))
        || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->viewed_codex_id_set,
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

// Line 38: range 0000000017995B92-000000001799606B
int32_t __cdecl PlayerCodexComp::fromBin(PlayerCodexComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  std::unordered_map<unsigned int,unsigned int> *p_weapon_max_promote_level_map; // r14
  unsigned int *v8; // rcx
  unsigned int *v9; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  google::protobuf::RepeatedPtrField<proto::CodexTypeDataBin>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CodexTypeDataBin>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+30h] [rbp-E0h]
  const proto::PlayerCodexCompBin *proto_comp; // [rsp+38h] [rbp-D8h]
  const google::protobuf::RepeatedPtrField<proto::CodexTypeDataBin> *__for_range; // [rsp+40h] [rbp-D0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+48h] [rbp-C8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+50h] [rbp-C0h]
  const proto::CodexTypeDataBin *type_data_bin; // [rsp+58h] [rbp-B8h]
  CodexTypeData *codex_type_data; // [rsp+60h] [rbp-B0h]
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range_0; // [rsp+68h] [rbp-A8h]
  const proto::Uint32PairBin *pair_bin; // [rsp+70h] [rbp-A0h]
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_end_0; // [rsp+78h] [rbp-98h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-90h] BYREF
  char v30[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 pushtip:55";
  *(_QWORD *)(v2 + 16) = PlayerCodexComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_comp = proto::PlayerDataBin::codex_bin(player_data_bin);
  __for_range = proto::PlayerCodexCompBin::type_data_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CodexTypeDataBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CodexTypeDataBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CodexTypeDataBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    type_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CodexTypeDataBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::CodexTypeDataBin::type(type_data_bin);
    codex_type_data = std::map<unsigned int,CodexTypeData>::operator[](
                        &this->codex_data_map_,
                        (std::map<unsigned int,CodexTypeData>::key_type *)(v2 + 32));
    v5 = proto::CodexTypeDataBin::codex_id_list(type_data_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&codex_type_data->codex_id_set, v5);
    v6 = proto::CodexTypeDataBin::viewed_codex_id_list(type_data_bin);
    common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
      &codex_type_data->viewed_codex_id_set,
      v6);
    __for_range_0 = proto::CodexTypeDataBin::weapon_max_promote_level_list(type_data_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      pair_bin = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*(&__for_begin_0);
      p_weapon_max_promote_level_map = &codex_type_data->weapon_max_promote_level_map;
      *(_DWORD *)(v2 + 32) = proto::Uint32PairBin::value(pair_bin);
      val = proto::Uint32PairBin::key(pair_bin);
      v10 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
              p_weapon_max_promote_level_map,
              &val,
              (unsigned int *)(v2 + 32),
              v8,
              v9);
      if ( !v10.second )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_codex_comp.cpp",
          "fromBin",
          49);
        v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v29,
                (const char (*)[50])"weapon_max_promote_level_map emplace failed, key:");
        val = proto::Uint32PairBin::key(pair_bin);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", value:");
        *(_DWORD *)(v2 + 32) = proto::Uint32PairBin::value(pair_bin);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++(&__for_begin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::CodexTypeDataBin const>::operator++(&__for_begin);
  }
  std::deque<unsigned int>::clear(&this->recent_viewed_pushtips_deque_);
  __for_range_1 = proto::PlayerCodexCompBin::recent_viewed_pushtips_list(proto_comp);
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
    std::deque<unsigned int>::emplace_back<unsigned int const&>(
      &this->recent_viewed_pushtips_deque_,
      (const unsigned int *)(v2 + 32),
      (const unsigned int *)&this->recent_viewed_pushtips_deque_);
    ++__for_begin_1;
  }
  *(_DWORD *)(v2 + 32) = proto::PlayerCodexCompBin::last_read_pushtips_type_id(proto_comp);
  val = proto::PlayerCodexCompBin::last_read_pushtips_codex_id(proto_comp);
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
    (std::pair<unsigned int,unsigned int> *const)&__for_end_0,
    &val,
    (unsigned int *)(v2 + 32));
  std::pair<unsigned int,unsigned int>::operator=(
    &this->last_read_pushtips_pair_,
    (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__for_end_0);
  result = 0;
  if ( v30 == (char *)v2 )
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

// Line 65: range 000000001799606C-0000000017996521
int32_t __cdecl PlayerCodexComp::toBin(PlayerCodexComp *const this, proto::PlayerDataBin *player_data_bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  std::pair<unsigned int const,unsigned int> *v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rdx
  std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*>::reference v6; // rax
  google::protobuf::uint32 *v7; // rdx
  std::map<unsigned int,CodexTypeData>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::map<unsigned int,CodexTypeData>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-A8h] BYREF
  proto::PlayerCodexCompBin *proto_comp; // [rsp+40h] [rbp-A0h]
  std::map<unsigned int,CodexTypeData> *__for_range; // [rsp+48h] [rbp-98h]
  std::deque<unsigned int> *__for_range_1; // [rsp+50h] [rbp-90h]
  const std::pair<unsigned int const,CodexTypeData> *v16; // [rsp+58h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,CodexTypeData> >::type *type; // [rsp+60h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,CodexTypeData> >::type *codex_type_data; // [rsp+68h] [rbp-78h]
  proto::CodexTypeDataBin *codex_type_data_bin; // [rsp+70h] [rbp-70h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+78h] [rbp-68h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *codex_id; // [rsp+80h] [rbp-60h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *weapon_max_promote_level; // [rsp+88h] [rbp-58h]
  proto::Uint32PairBin *pair_bin; // [rsp+90h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+98h] [rbp-48h] BYREF
  std::deque<unsigned int>::iterator __for_begin_1; // [rsp+A0h] [rbp-40h] BYREF
  std::deque<unsigned int>::iterator __for_end_1; // [rsp+C0h] [rbp-20h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_codex_bin(player_data_bin);
  __for_range = &this->codex_data_map_;
  __for_begin._M_node = std::map<unsigned int,CodexTypeData>::begin(&this->codex_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator*(&__for_begin);
    type = std::get<0ul,unsigned int const,CodexTypeData>(v16);
    codex_type_data = (std::tuple_element<1,const std::pair<unsigned int const,CodexTypeData> >::type *)std::get<1ul,unsigned int const,CodexTypeData>(v16);
    codex_type_data_bin = proto::PlayerCodexCompBin::add_type_data_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    proto::CodexTypeDataBin::set_type(codex_type_data_bin, *type);
    v2 = proto::CodexTypeDataBin::mutable_codex_id_list(codex_type_data_bin);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&codex_type_data->codex_id_set, v2);
    v3 = proto::CodexTypeDataBin::mutable_viewed_codex_id_list(codex_type_data_bin);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      &codex_type_data->viewed_codex_id_set,
      v3);
    __for_range_0 = &codex_type_data->weapon_max_promote_level_map;
    __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&codex_type_data->weapon_max_promote_level_map)._M_cur;
    __for_end_0._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_0, &__for_end_0) )
    {
      v4 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
      v5 = v4;
      if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v4->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4, 8LL);
      }
      __in = *v5;
      codex_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      weapon_max_promote_level = std::get<1ul,unsigned int const,unsigned int>(&__in);
      pair_bin = proto::CodexTypeDataBin::add_weapon_max_promote_level_list(codex_type_data_bin);
      if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(codex_id);
      }
      proto::Uint32PairBin::set_key(pair_bin, *codex_id);
      if ( *(_BYTE *)(((unsigned __int64)weapon_max_promote_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)weapon_max_promote_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weapon_max_promote_level >> 3)
                                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(weapon_max_promote_level);
      }
      proto::Uint32PairBin::set_value(pair_bin, *weapon_max_promote_level);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator++(&__for_begin);
  }
  __for_range_1 = &this->recent_viewed_pushtips_deque_;
  std::deque<unsigned int>::begin(&__for_begin_1, &this->recent_viewed_pushtips_deque_);
  std::deque<unsigned int>::end(&__for_end_1, __for_range_1);
  while ( std::operator!=<unsigned int,unsigned int &,unsigned int *>(&__for_begin_1, &__for_end_1) )
  {
    v6 = std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::operator*(&__for_begin_1);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::PlayerCodexCompBin::add_recent_viewed_pushtips_list(proto_comp, *v7);
    std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::operator++(&__for_begin_1);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_read_pushtips_pair_);
  }
  proto::PlayerCodexCompBin::set_last_read_pushtips_codex_id(proto_comp, this->last_read_pushtips_pair_.first);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_.second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_.second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_read_pushtips_pair_.second);
  }
  proto::PlayerCodexCompBin::set_last_read_pushtips_type_id(proto_comp, this->last_read_pushtips_pair_.second);
  return 0;
};

// Line 91: range 0000000017996522-0000000017996BE8
int32_t __cdecl PlayerCodexComp::init(PlayerCodexComp *const this)
{
  std::_Rb_tree_const_iterator<unsigned int> *v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  CodexExcelConfigMgr *p_codex_config_mgr; // r14
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  uint32_t v7; // ecx
  bool isCodexIdDisused; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const unsigned int *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  CodexExcelConfigMgr *v15; // r14
  unsigned int *v16; // rax
  uint32_t *v17; // rdx
  uint32_t v18; // ecx
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const unsigned int *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::map<unsigned int,CodexTypeData>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::map<unsigned int,CodexTypeData>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,CodexTypeData> *__for_range; // [rsp+30h] [rbp-C0h]
  std::pair<unsigned int const,CodexTypeData> *__in; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,CodexTypeData> >::type *codex_type; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,CodexTypeData> >::type *codex_type_data; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v35; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v36; // [rsp+60h] [rbp-90h] BYREF
  char v37[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (std::_Rb_tree_const_iterator<unsigned int> *)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::_Rb_tree_const_iterator<unsigned int> *)v2;
  }
  v1->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1102416563;
  v1[1]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)"1 32 8 8 iter:109";
  v1[2]._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)PlayerCodexComp::init;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  PlayerCodexComp::initEventObservers(this);
  __for_range = &this->codex_data_map_;
  __for_begin._M_node = std::map<unsigned int,CodexTypeData>::begin(&this->codex_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator*(&__for_begin);
    codex_type = std::get<0ul,unsigned int const,CodexTypeData>(__in);
    codex_type_data = std::get<1ul,unsigned int const,CodexTypeData>(__in);
    v1[4]._M_node = std::set<unsigned int>::begin(&codex_type_data->codex_id_set)._M_node;
    while ( 1 )
    {
      __y._M_node = std::set<unsigned int>::end(&codex_type_data->codex_id_set)._M_node;
      if ( !std::operator!=(v1 + 4, &__y) )
        break;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      p_codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.codex_config_mgr;
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(v1 + 4);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      v7 = *v6;
      if ( *(_BYTE *)(((unsigned __int64)codex_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)codex_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(codex_type);
      }
      isCodexIdDisused = CodexExcelConfigMgr::isCodexIdDisused(p_codex_config_mgr, *codex_type, v7);
      std::shared_ptr<Config>::~shared_ptr(&v35);
      if ( isCodexIdDisused )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_codex_comp.cpp",
          "init",
          101);
        v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v36,
               (const char (*)[27])"codex disused, codex_type:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, codex_type);
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" codex_id:");
        v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*(v1 + 4);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, v12);
        v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v1[4]._M_node = std::set<unsigned int>::erase[abi:cxx11](&codex_type_data->codex_id_set, v1[4])._M_node;
      }
      else
      {
        std::_Rb_tree_const_iterator<unsigned int>::operator++(v1 + 4);
      }
    }
    v1[4]._M_node = std::set<unsigned int>::begin(&codex_type_data->viewed_codex_id_set)._M_node;
    while ( 1 )
    {
      __y._M_node = std::set<unsigned int>::end(&codex_type_data->viewed_codex_id_set)._M_node;
      if ( !std::operator!=(v1 + 4, &__y) )
        break;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.codex_config_mgr;
      v16 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(v1 + 4);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      if ( *(_BYTE *)(((unsigned __int64)codex_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)codex_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(codex_type);
      }
      v19 = CodexExcelConfigMgr::isCodexIdDisused(v15, *codex_type, v18);
      std::shared_ptr<Config>::~shared_ptr(&v35);
      if ( v19 )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_codex_comp.cpp",
          "init",
          113);
        v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v36,
                (const char (*)[27])"codex disused, codex_type:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, codex_type);
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" codex_id:");
        v23 = std::_Rb_tree_const_iterator<unsigned int>::operator*(v1 + 4);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v23);
        v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v1[4]._M_node = std::set<unsigned int>::erase[abi:cxx11](&codex_type_data->viewed_codex_id_set, v1[4])._M_node;
      }
      else
      {
        std::_Rb_tree_const_iterator<unsigned int>::operator++(v1 + 4);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v37 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 127: range 0000000017996BEA-0000000017996C85
int32_t __cdecl PlayerCodexComp::onLogin(PlayerCodexComp *const this, bool is_new_player)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
  {
    PlayerCodexComp::initWeaponMaxPromoteLevelRecords(this);
    PlayerCodexComp::initViewedPushTipCodex(this);
    PlayerCodexComp::recordMaterialCodexOnLogin(this);
    PlayerCodexComp::recordBookCodexOnLogin(this);
    PlayerCodexComp::removeBookMaterialByBookCodex(this);
    PlayerCodexComp::recordQuestCodexOnLogin(this);
  }
  return 0;
};

// Line 142: range 0000000017996C86-0000000017997458
void __cdecl PlayerCodexComp::initWeaponMaxPromoteLevelRecords(PlayerCodexComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  PlayerItemComp *ItemComp; // rcx
  uint64_t *v10; // rax
  PlayerItemComp *v11; // rax
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t *v13; // rax
  char *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  uint32_t *v16; // rdx
  char v17; // cl
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  uint32_t promote_level; // [rsp+1Ch] [rbp-174h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  std::set<long unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-160h] BYREF
  std::set<long unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-158h] BYREF
  const CodexExcelConfigMgr *codex_config_mgr; // [rsp+40h] [rbp-150h]
  std::unordered_map<unsigned int,unsigned int> *weapon_max_promote_level_map; // [rsp+48h] [rbp-148h]
  std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-140h]
  const data::WeaponCodexExcelConfig *weapon_codex_config_ptr; // [rsp+58h] [rbp-138h]
  const std::set<long unsigned int> *item_guid_set_ptr; // [rsp+60h] [rbp-130h]
  const std::set<long unsigned int> *__for_range_0; // [rsp+68h] [rbp-128h]
  uint64_t item_guid; // [rsp+70h] [rbp-120h]
  uint32_t *max_promote_level; // [rsp+78h] [rbp-118h]
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-110h] BYREF
  char v35[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 12 codex_id:152 48 8 24 codex_type_data_iter:143 80 16 14 weapon_ptr:167 112 48 34 modifi"
                        "ed_max_promote_level_map:150";
  *(_QWORD *)(v1 + 16) = PlayerCodexComp::initWeaponMaxPromoteLevelRecords;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862721] = -234881024;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  *(_DWORD *)(v1 + 32) = 2;
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v1 + 48) = std::map<unsigned int,CodexTypeData>::find(
                                                                   &this->codex_data_map_,
                                                                   (const std::map<unsigned int,CodexTypeData>::key_type *)(v1 + 32));
  __for_end_0._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v1 + 48),
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)&__for_end_0) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 80));
    codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80))->design_config.txt_config_mgr.codex_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 80));
    weapon_max_promote_level_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v1 + 48))->second.weapon_max_promote_level_map;
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v1 + 112));
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v1 + 48))->second.codex_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      *(_DWORD *)(v1 + 32) = *v5;
      weapon_codex_config_ptr = data::CodexExcelConfigMgrBase::findWeaponCodexExcelConfig(
                                  codex_config_mgr,
                                  *(_DWORD *)(v1 + 32));
      if ( weapon_codex_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&weapon_codex_config_ptr->weapon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)weapon_codex_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weapon_codex_config_ptr->weapon_id >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&weapon_codex_config_ptr->weapon_id);
        }
        item_guid_set_ptr = PlayerItemComp::getItmeGuidSetInPack(ItemComp, weapon_codex_config_ptr->weapon_id);
        if ( item_guid_set_ptr )
        {
          __for_range_0 = item_guid_set_ptr;
          __for_begin_0._M_node = std::set<unsigned long>::begin(item_guid_set_ptr)._M_node;
          __for_end_0._M_node = std::set<unsigned long>::end(__for_range_0)._M_node;
          while ( std::operator!=(&__for_begin_0, &__for_end_0) )
          {
            v10 = (uint64_t *)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin_0);
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            item_guid = *v10;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v11 = Player::getItemComp(this->player_);
            PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v1 + 80), (uint64_t)v11, item_guid);
            if ( !std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v1 + 80)) )
            {
              v12 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
              promote_level = Weapon::getPromoteLevel(v12);
              if ( promote_level )
              {
                v13 = std::unordered_map<unsigned int,unsigned int>::operator[](
                        weapon_max_promote_level_map,
                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 32));
                max_promote_level = v13;
                if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v13);
                }
                if ( promote_level > *max_promote_level )
                {
                  *max_promote_level = promote_level;
                  v14 = (char *)(v1 + 32);
                  v15 = std::map<unsigned int,unsigned int>::operator[](
                          (std::map<unsigned int,unsigned int> *const)(v1 + 112),
                          (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 32));
                  v16 = v15;
                  v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
                  if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
                  {
                    LOBYTE(v14) = v17 != 0;
                    __asan_report_store4(v15, v14, v15);
                  }
                  *v16 = promote_level;
                }
              }
            }
            std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v1 + 80));
            std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin_0);
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_codex_comp.cpp",
          "initWeaponMaxPromoteLevelRecords",
          157);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               &v34,
               (const char (*)[43])"findWeaponCodexExcelConfig fail, codex_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v34);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v1 + 112)) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_codex_comp.cpp",
        "initWeaponMaxPromoteLevelRecords",
        187);
      v18 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v34,
              (const char (*)[32])"modified_max_promote_level_map:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v18,
              (const std::map<unsigned int,unsigned int> *)(v1 + 112));
      v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v20, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v1 + 112));
  }
  if ( v35 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 193: range 000000001799745A-0000000017997AB7
void __cdecl PlayerCodexComp::initViewedPushTipCodex(PlayerCodexComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  PlayerWatcherComp *WatcherComp; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-130h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-128h] BYREF
  const CodexExcelConfigMgr *codex_config_mgr; // [rsp+30h] [rbp-120h]
  std::set<unsigned int> *codex_id_set; // [rsp+38h] [rbp-118h]
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-110h]
  std::set<unsigned int> *viewed_codex_id_set; // [rsp+48h] [rbp-108h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-100h]
  const data::PushTipsCodexExcelConfig *push_tips_codex_config_ptr; // [rsp+58h] [rbp-F8h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-E0h] BYREF
  char v25[192]; // [rsp+90h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 12 codex_id:220 64 8 24 codex_type_data_iter:194 96 24 25 to_modified_codex_vec:201";
  *(_QWORD *)(v1 + 16) = PlayerCodexComp::initViewedPushTipCodex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  *(_DWORD *)(v1 + 48) = 6;
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v1 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                   &this->codex_data_map_,
                                                                   (const std::map<unsigned int,CodexTypeData>::key_type *)(v1 + 48));
  __for_end._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v1 + 64),
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)&__for_end) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.codex_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v23);
    codex_id_set = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v1 + 64))->second.codex_id_set;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
    __for_range = codex_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(codex_id_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      *(_DWORD *)(v1 + 48) = *v5;
      push_tips_codex_config_ptr = data::CodexExcelConfigMgrBase::findPushTipsCodexExcelConfig(
                                     codex_config_mgr,
                                     *(_DWORD *)(v1 + 48));
      if ( push_tips_codex_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&push_tips_codex_config_ptr->push_tip_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)push_tips_codex_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&push_tips_codex_config_ptr->push_tip_id >> 3)
                                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&push_tips_codex_config_ptr->push_tip_id);
        }
        if ( PlayerWatcherComp::getPushTipsState(WatcherComp, push_tips_codex_config_ptr->push_tip_id) == 3 )
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v1 + 96),
            (const std::vector<unsigned int>::value_type *)(v1 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_codex_comp.cpp",
          "initViewedPushTipCodex",
          208);
        v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
               &v24,
               (const char (*)[45])"findPushTipsCodexExcelConfig fail, codex_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96)) )
    {
      viewed_codex_id_set = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v1 + 64))->second.viewed_codex_id_set;
      __for_range_0 = (std::vector<unsigned int> *)(v1 + 96);
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 96))._M_current;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(_DWORD *)(v1 + 48) = *v11;
        std::set<unsigned int>::erase(codex_id_set, (const std::set<unsigned int>::key_type *)(v1 + 48));
        std::set<unsigned int>::insert(viewed_codex_id_set, (const std::set<unsigned int>::value_type *)(v1 + 48));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_codex_comp.cpp",
        "initViewedPushTipCodex",
        225);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v24,
              (const char (*)[23])"to_modified_codex_vec:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int>(v12, (const std::vector<unsigned int> *)(v1 + 96));
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v14, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  }
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 230: range 0000000017A2050E-0000000017A205F5
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::BooksCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::BooksCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::BooksCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::BooksCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BooksCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BooksCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::BooksCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::BooksCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::BooksCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BooksCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::BooksCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 230: range 0000000017A2062A-0000000017A20711
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::PushTipsCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::PushTipsCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::PushTipsCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PushTipsCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::PushTipsCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 231: range 0000000017997AB8-0000000017997E3A
void __cdecl PlayerCodexComp::recordMaterialCodexOnLogin(PlayerCodexComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::map<unsigned int,CodexTypeData>::key_type __k; // [rsp+14h] [rbp-7Ch] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  CodexTypeData *codex_type_data; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *codex_id; // [rsp+40h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> v15; // [rsp+48h] [rbp-48h] BYREF
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-30h] BYREF

  __k = 4;
  codex_type_data = std::map<unsigned int,CodexTypeData>::operator[](&this->codex_data_map_, &__k);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  __for_range = CodexExcelConfigMgr::getMaterialToIdMap(&v1->design_config.txt_config_mgr.codex_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    v15 = *v3;
    material_id = std::get<0ul,unsigned int const,unsigned int>(&v15);
    codex_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v15);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(material_id);
    }
    if ( PlayerItemComp::hasOnceGotItemById(ItemComp, *material_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(codex_id);
      }
      if ( !CodexTypeData::isContainsCodex(codex_type_data, *codex_id) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_codex_comp.cpp",
          "recordMaterialCodexOnLogin",
          243);
        v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v17,
               (const char (*)[32])"going to unlock material codex:");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, codex_id);
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v7, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v17);
        if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(codex_id);
        }
        PlayerCodexComp::recordCodex(this, CODEX_MATERIAL, *codex_id, 0);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 250: range 0000000017997E3C-0000000017998322
void __cdecl PlayerCodexComp::recordBookCodexOnLogin(PlayerCodexComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::pair<unsigned int const,unsigned int> *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rdx
  uint32_t ItemComp; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::map<unsigned int,CodexTypeData>::key_type __k; // [rsp+14h] [rbp-CCh] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  CodexTypeData *codex_type_data; // [rsp+28h] [rbp-B8h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *codex_id; // [rsp+40h] [rbp-A0h]
  std::pair<unsigned int const,unsigned int> v20; // [rsp+48h] [rbp-98h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-90h] BYREF
  char v22[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 16 material_ptr:254";
  *(_QWORD *)(v1 + 16) = PlayerCodexComp::recordBookCodexOnLogin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __k = 5;
  codex_type_data = std::map<unsigned int,CodexTypeData>::operator[](&this->codex_data_map_, &__k);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  __for_range = CodexExcelConfigMgr::getBooksToIdMap(&v4->design_config.txt_config_mgr.codex_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v5 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v6 = v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v5, 8LL);
    }
    v20 = *v6;
    material_id = std::get<0ul,unsigned int const,unsigned int>(&v20);
    codex_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v20);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = (unsigned int)Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(material_id);
    }
    PlayerItemComp::findMaterial((PlayerItemComp *const)(v1 + 32), ItemComp);
    if ( !std::operator==<Material>(0LL, (const std::shared_ptr<Material> *)(v1 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(codex_id);
      }
      if ( !CodexTypeData::isContainsCodex(codex_type_data, *codex_id) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_codex_comp.cpp",
          "recordBookCodexOnLogin",
          263);
        v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v21,
               (const char (*)[28])"going to unlock book codex:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, codex_id);
        v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                v9,
                (const char (*)[28])" and consume book material:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, material_id);
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v21);
        if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(codex_id);
        }
        PlayerCodexComp::recordCodex(this, CODEX_BOOKS, *codex_id, 0);
      }
    }
    std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v1 + 32));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 270: range 0000000017998324-0000000017998931
void __cdecl PlayerCodexComp::removeBookMaterialByBookCodex(PlayerCodexComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  uint32_t ItemComp; // ecx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  PlayerItemComp *v13; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-170h] BYREF
  const CodexExcelConfigMgr *codex_config_mgr; // [rsp+18h] [rbp-168h]
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-160h]
  const data::BooksCodexExcelConfig *books_codex_config_ptr; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-150h] BYREF
  char v19[304]; // [rsp+50h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 4 12 codex_id:279 64 8 24 codex_type_data_iter:271 96 8 19 sub_item_reason:299 128 16 16 ma"
                        "terial_ptr:287 160 16 14 item_param:292 192 24 22 sub_item_param_vec:277";
  *(_QWORD *)(v1 + 16) = PlayerCodexComp::removeBookMaterialByBookCodex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  *(_DWORD *)(v1 + 48) = 5;
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v1 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                   &this->codex_data_map_,
                                                                   (const std::map<unsigned int,CodexTypeData>::key_type *)(v1 + 48));
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v1 + 96) = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_);
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v1 + 64),
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v1 + 96)) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 160));
    codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160))->design_config.txt_config_mgr.codex_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 160));
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v1 + 192));
    __for_range = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v1 + 64))->second.codex_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
    *(std::set<unsigned int>::iterator *)(v1 + 96) = std::set<unsigned int>::end(__for_range);
    while ( std::operator!=(&__for_begin, (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v1 + 96)) )
    {
      v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      *(_DWORD *)(v1 + 48) = *v5;
      books_codex_config_ptr = data::CodexExcelConfigMgrBase::findBooksCodexExcelConfig(
                                 codex_config_mgr,
                                 *(_DWORD *)(v1 + 48));
      if ( books_codex_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = (unsigned int)Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&books_codex_config_ptr->material_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)books_codex_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&books_codex_config_ptr->material_id >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&books_codex_config_ptr->material_id);
        }
        PlayerItemComp::findMaterial((PlayerItemComp *const)(v1 + 128), ItemComp);
        if ( !std::operator==<Material>(0LL, (const std::shared_ptr<Material> *)(v1 + 128)) )
        {
          *(_DWORD *)(v1 + 160) = 0;
          *(_DWORD *)(v1 + 164) = 0;
          *(_DWORD *)(v1 + 168) = 0;
          *(_DWORD *)(v1 + 172) = 0;
          v10 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          *(_DWORD *)(v1 + 160) = Item::getItemId(v10);
          v11 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = (unsigned __int64)(v11->_vptr_Item + 8);
          if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v1 + 164) = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11);
          std::vector<ItemParam>::push_back(
            (std::vector<ItemParam> *const)(v1 + 192),
            (const std::vector<ItemParam>::value_type *)(v1 + 160));
        }
        std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v1 + 128));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_codex_comp.cpp",
          "removeBookMaterialByBookCodex",
          284);
        v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v18,
               (const char (*)[42])"findBooksCodexExcelConfig fail, codex_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v1 + 192)) )
    {
      SubItemReason::SubItemReason((SubItemReason *const)(v1 + 96), ACTION_REASON_REMOVE_CODEX_BOOK);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v13 = Player::getItemComp(this->player_);
      PlayerItemComp::subItemBatch(v13, (const std::vector<ItemParam> *)(v1 + 192), (const SubItemReason *)(v1 + 96));
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v1 + 192));
  }
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 306: range 0000000017998932-0000000017998CD5
void __cdecl PlayerCodexComp::recordQuestCodexOnLogin(PlayerCodexComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::map<unsigned int,CodexTypeData>::key_type __k; // [rsp+14h] [rbp-7Ch] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  CodexTypeData *codex_type_data; // [rsp+28h] [rbp-68h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *parent_quest_id; // [rsp+38h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *codex_id; // [rsp+40h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-48h] BYREF
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-30h] BYREF

  __k = 1;
  codex_type_data = std::map<unsigned int,CodexTypeData>::operator[](&this->codex_data_map_, &__k);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  __for_range = CodexExcelConfigMgr::getQuestToIdMap(&v1->design_config.txt_config_mgr.codex_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __in = *v3;
    parent_quest_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v4 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    codex_id = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( !CodexTypeData::isContainsCodex(codex_type_data, *codex_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)parent_quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)parent_quest_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(parent_quest_id);
      }
      if ( PlayerQuestComp::isParentQuestOnceFinished(QuestComp, *parent_quest_id) )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_codex_comp.cpp",
          "recordQuestCodexOnLogin",
          318);
        v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v20,
               (const char (*)[30])"going to recover quest codex:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, codex_id);
        v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v7,
               (const char (*)[18])" parent_quest_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, parent_quest_id);
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v20);
        if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(codex_id);
        }
        PlayerCodexComp::recordCodex(this, CODEX_QUEST, *codex_id, 1);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
};

// Line 324: range 0000000017998CD6-00000000179995DF
int32_t __cdecl PlayerCodexComp::notifyAllData(PlayerCodexComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  std::pair<unsigned int const,unsigned int> *v9; // rax
  std::pair<unsigned int const,unsigned int> *v10; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v11; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v12; // r14d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v13; // rsi
  unsigned int *v14; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v15; // rdx
  char v16; // cl
  std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> >::reference v18; // rax
  google::protobuf::uint32 *v19; // rdx
  std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  Player *player; // r14
  int32_t result; // eax
  uint32_t codex_id_0; // [rsp+18h] [rbp-168h]
  uint32_t codex_id; // [rsp+1Ch] [rbp-164h]
  std::map<unsigned int,CodexTypeData>::iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::map<unsigned int,CodexTypeData>::iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+30h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end_1; // [rsp+38h] [rbp-148h] BYREF
  std::map<unsigned int,CodexTypeData> *__for_range; // [rsp+40h] [rbp-140h]
  const std::pair<unsigned int const,CodexTypeData> *v31; // [rsp+48h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,CodexTypeData> >::type *type; // [rsp+50h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,CodexTypeData> >::type *codex_type_data; // [rsp+58h] [rbp-128h]
  proto::CodexTypeData *type_data_pb; // [rsp+60h] [rbp-120h]
  const std::set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-118h]
  const std::set<unsigned int> *__for_range_1; // [rsp+70h] [rbp-110h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_map; // [rsp+78h] [rbp-108h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range_2; // [rsp+80h] [rbp-100h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *codex_id_1; // [rsp+88h] [rbp-F8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *weapon_max_promote_level; // [rsp+90h] [rbp-F0h]
  std::pair<unsigned int const,unsigned int> __for_end_0; // [rsp+98h] [rbp-E8h] BYREF
  std::shared_ptr<proto::CodexDataFullNotify> __r; // [rsp+A0h] [rbp-E0h] BYREF
  std::deque<unsigned int>::reverse_iterator __y; // [rsp+B0h] [rbp-D0h] BYREF
  char v44[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 notify_ptr:325 64 32 8 iter:358";
  *(_QWORD *)(v1 + 16) = PlayerCodexComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -202116109;
  common::tools::perf::make_shared<proto::CodexDataFullNotify>();
  __for_range = &this->codex_data_map_;
  __for_begin._M_node = std::map<unsigned int,CodexTypeData>::begin(&this->codex_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v31 = std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator*(&__for_begin);
    type = std::get<0ul,unsigned int const,CodexTypeData>(v31);
    codex_type_data = (std::tuple_element<1,const std::pair<unsigned int const,CodexTypeData> >::type *)std::get<1ul,unsigned int const,CodexTypeData>(v31);
    v4 = std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    type_data_pb = proto::CodexDataFullNotify::add_type_data_list(v4);
    if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(type);
    }
    proto::CodexTypeData::set_type(type_data_pb, (proto::CodexType)*type);
    __for_range_0 = &codex_type_data->codex_id_set;
    __for_end_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<unsigned int>::begin(&codex_type_data->codex_id_set)._M_node;
    __for_end_0 = (std::pair<unsigned int const,unsigned int>)std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_1,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
    {
      v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end_1);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      codex_id = *v6;
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(type);
      }
      if ( PlayerCodexComp::isCodexIdValid(this, codex_id, (proto::CodexType)*type) )
      {
        proto::CodexTypeData::add_codex_id_list(type_data_pb, codex_id);
        proto::CodexTypeData::add_have_viewed_list(type_data_pb, 0);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end_1);
    }
    __for_range_1 = &codex_type_data->viewed_codex_id_set;
    __for_end_1._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<unsigned int>::begin(&codex_type_data->viewed_codex_id_set)._M_node;
    __for_end_0 = (std::pair<unsigned int const,unsigned int>)std::set<unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_1,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
    {
      v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end_1);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      codex_id_0 = *v8;
      if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(type);
      }
      if ( PlayerCodexComp::isCodexIdValid(this, codex_id_0, (proto::CodexType)*type) )
      {
        proto::CodexTypeData::add_codex_id_list(type_data_pb, codex_id_0);
        proto::CodexTypeData::add_have_viewed_list(type_data_pb, 1);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end_1);
    }
    if ( !std::unordered_map<unsigned int,unsigned int>::empty(&codex_type_data->weapon_max_promote_level_map) )
    {
      proto_map = proto::CodexTypeData::mutable_weapon_max_promote_level_map(type_data_pb);
      __for_range_2 = &codex_type_data->weapon_max_promote_level_map;
      __for_begin_1._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&codex_type_data->weapon_max_promote_level_map)._M_cur;
      __for_end_1._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_2)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_1, &__for_end_1) )
      {
        v9 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_1);
        v10 = v9;
        if ( ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v9 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v9->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v9, 8LL);
        }
        __for_end_0 = *v10;
        codex_id_1 = std::get<0ul,unsigned int const,unsigned int>(&__for_end_0);
        v11 = std::get<1ul,unsigned int const,unsigned int>(&__for_end_0);
        weapon_max_promote_level = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        v12 = *weapon_max_promote_level;
        v13 = codex_id_1;
        v14 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_map, codex_id_1);
        v15 = v14;
        v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
        {
          LOBYTE(v13) = v16 != 0;
          __asan_report_store4(v14, v13, v14);
        }
        *v15 = v12;
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_1);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator++(&__for_begin);
  }
  std::deque<unsigned int>::rbegin(
    (std::deque<unsigned int>::reverse_iterator *)(v1 + 64),
    &this->recent_viewed_pushtips_deque_);
  while ( 1 )
  {
    std::deque<unsigned int>::rend(&__y, &this->recent_viewed_pushtips_deque_);
    if ( !std::operator!=<std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>>(
            (const std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> > *)(v1 + 64),
            &__y) )
      break;
    v17 = std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v18 = std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>>::operator*((const std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> > *const)(v1 + 64));
    v19 = v18;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    proto::CodexDataFullNotify::add_recent_viewed_pushtips_list(v17, *v19);
    std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>>::operator++(
      &__y,
      (std::reverse_iterator<std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> > *const)(v1 + 64),
      0);
  }
  v20 = std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_read_pushtips_pair_);
  }
  proto::CodexDataFullNotify::set_last_read_pushtips_codex_id(v20, this->last_read_pushtips_pair_.first);
  v21 = std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CodexDataFullNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_.second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_read_pushtips_pair_.second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_read_pushtips_pair_.second);
  }
  proto::CodexDataFullNotify::set_last_read_pushtips_type_id(v21, this->last_read_pushtips_pair_.second);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::CodexDataFullNotify>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::CodexDataFullNotify>::~shared_ptr((std::shared_ptr<proto::CodexDataFullNotify> *const)(v1 + 32));
  result = (int)player;
  if ( v44 == (char *)v1 )
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
  return result;
};

// Line 369: range 00000000179995E0-000000001799960B
void __cdecl PlayerCodexComp::gmActiveCodex(PlayerCodexComp *const this, uint32_t type, uint32_t id)
{
  PlayerCodexComp::recordCodex(this, (proto::CodexType)type, id, 1);
};

// Line 374: range 000000001799960C-0000000017999785
__int64 __fastcall PlayerCodexComp::gmRemoveCodex(PlayerCodexComp *const this, uint32_t type, uint32_t id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,CodexTypeData>::mapped_type *v6; // rax
  std::map<unsigned int,CodexTypeData>::mapped_type *v7; // rax
  __int64 result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 type:373 64 4 6 id:373";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::gmRemoveCodex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = type;
  *(_DWORD *)(v3 + 64) = id;
  v6 = std::map<unsigned int,CodexTypeData>::operator[](
         &this->codex_data_map_,
         (const std::map<unsigned int,CodexTypeData>::key_type *)(v3 + 48));
  if ( !std::set<unsigned int>::erase(&v6->codex_id_set, (const std::set<unsigned int>::key_type *)(v3 + 64))
    && (v7 = std::map<unsigned int,CodexTypeData>::operator[](
               &this->codex_data_map_,
               (const std::map<unsigned int,CodexTypeData>::key_type *)(v3 + 48)),
        !std::set<unsigned int>::erase(&v7->viewed_codex_id_set, (const std::set<unsigned int>::key_type *)(v3 + 64))) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    result = 0LL;
  }
  if ( v11 == (char *)v3 )
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

// Line 384: range 0000000017A202D6-0000000017A203BD
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::AnimalCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::AnimalCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::AnimalCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::AnimalCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AnimalCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::AnimalCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::AnimalCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AnimalCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AnimalCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 384: range 0000000017A203F2-0000000017A204D9
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::MaterialCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::MaterialCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::MaterialCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::MaterialCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MaterialCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::MaterialCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::MaterialCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MaterialCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MaterialCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 384: range 0000000017A1FF82-0000000017A20069
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::QuestCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::QuestCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::QuestCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::QuestCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::QuestCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::QuestCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::QuestCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::QuestCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::QuestCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::QuestCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::QuestCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 384: range 0000000017A201BA-0000000017A202A1
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::ReliquaryCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ReliquaryCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::ReliquaryCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ReliquaryCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ReliquaryCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ReliquaryCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 384: range 0000000017A20746-0000000017A2082D
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::ViewCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::ViewCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::ViewCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::ViewCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ViewCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ViewCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ViewCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::ViewCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::ViewCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ViewCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ViewCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 384: range 0000000017A2009E-0000000017A20185
void __cdecl PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>>(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        const std::unordered_map<unsigned int,data::WeaponCodexExcelConfig> *codex_config_map)
{
  std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,data::WeaponCodexExcelConfig> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,data::WeaponCodexExcelConfig> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,data::WeaponCodexExcelConfig> >::type *codex_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,data::WeaponCodexExcelConfig> >::type *_; // [rsp+48h] [rbp-8h]

  __for_range = codex_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::begin(codex_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::operator*(&__for_begin);
    codex_id = std::get<0ul,unsigned int const,data::WeaponCodexExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::WeaponCodexExcelConfig> >::type *)std::get<1ul,unsigned int const,data::WeaponCodexExcelConfig>(v6);
    if ( *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)codex_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)codex_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(codex_id);
    }
    PlayerCodexComp::gmActiveCodex(this, codex_type, *codex_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::WeaponCodexExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 393: range 0000000017999786-00000000179998AE
int32_t __cdecl PlayerCodexComp::unlockAllCodexByGm(PlayerCodexComp *const this)
{
  CodexExcelConfigMgr *codex_config_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v3; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v3);
  codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3)->design_config.txt_config_mgr.codex_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v3);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::QuestCodexExcelConfig>>(
    this,
    1u,
    &codex_config_mgr->quest_codex_excel_config_map);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::WeaponCodexExcelConfig>>(
    this,
    2u,
    &codex_config_mgr->weapon_codex_excel_config_map);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::ReliquaryCodexExcelConfig>>(
    this,
    8u,
    &codex_config_mgr->reliquary_codex_excel_config_map);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::AnimalCodexExcelConfig>>(
    this,
    3u,
    &codex_config_mgr->animal_codex_excel_config_map);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::MaterialCodexExcelConfig>>(
    this,
    4u,
    &codex_config_mgr->material_codex_excel_config_map);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::BooksCodexExcelConfig>>(
    this,
    5u,
    &codex_config_mgr->books_codex_excel_config_map);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::PushTipsCodexExcelConfig>>(
    this,
    6u,
    &codex_config_mgr->push_tips_codex_excel_config_map);
  PlayerCodexComp::unlockCodexByGm<std::unordered_map<unsigned int,data::ViewCodexExcelConfig>>(
    this,
    7u,
    &codex_config_mgr->view_codex_excel_config_map);
  return 0;
};

// Line 407: range 00000000179998B0-00000000179998DA
int32_t __cdecl PlayerCodexComp::openCodexByMuip(PlayerCodexComp *const this, uint32_t codex_type, uint32_t codex_id)
{
  return PlayerCodexComp::recordCodex(this, (proto::CodexType)codex_type, codex_id, 1);
};

// Line 412: range 00000000179998DC-0000000017999C77
__int64 __fastcall PlayerCodexComp::closeCodexByMuip(
        PlayerCodexComp *const this,
        uint32_t codex_type,
        uint32_t codex_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  CodexTypeData *codex_type_data; // [rsp+18h] [rbp-A8h]
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
  *(_QWORD *)(v3 + 8) = "3 32 4 14 codex_type:411 48 4 12 codex_id:411 64 8 8 iter:413";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::closeCodexByMuip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = codex_type;
  *(_DWORD *)(v3 + 48) = codex_id;
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v3 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                   &this->codex_data_map_,
                                                                   (const std::map<unsigned int,CodexTypeData>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "closeCodexByMuip",
      416);
    v6 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v17, (const char (*)[12])"codex_type:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v7,
           (const char (*)[28])" has no codex_data, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0xFFFFFFFFLL;
    goto LABEL_13;
  }
  codex_type_data = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v3 + 64))->second;
  if ( !CodexTypeData::isContainsCodex(codex_type_data, *(_DWORD *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "closeCodexByMuip",
      422);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v17, (const char (*)[12])"codex_type:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" has no codex_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  std::set<unsigned int>::erase(&codex_type_data->codex_id_set, (const std::set<unsigned int>::key_type *)(v3 + 48));
  std::set<unsigned int>::erase(
    &codex_type_data->viewed_codex_id_set,
    (const std::set<unsigned int>::key_type *)(v3 + 48));
  result = 0LL;
LABEL_13:
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

// Line 432: range 0000000017999C78-0000000017999CE2
void __cdecl PlayerCodexComp::checkAndModifyThoarderWeasel03Codex(PlayerCodexComp *const this)
{
  PlayerSceneComp *SceneComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::getMonsterBeKilledNum(SceneComp, 0x1AC031Bu) )
    PlayerCodexComp::recordAnimalCodex(this, 0x1AC031Bu);
};

// Line 442: range 0000000017999CE4-000000001799A558
void __cdecl PlayerCodexComp::checkAndModifyPushTipsCodex(PlayerCodexComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerWatcherComp *WatcherComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  uint32_t push_tips_state; // [rsp+1Ch] [rbp-184h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  const CodexExcelConfigMgr *codex_config_mgr; // [rsp+30h] [rbp-170h]
  const WatcherExcelConfigMgr *watcher_config_mgr; // [rsp+38h] [rbp-168h]
  std::set<unsigned int> *viewed_codex_id_set; // [rsp+40h] [rbp-160h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-158h]
  std::set<unsigned int> *codex_id_set; // [rsp+50h] [rbp-150h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-148h]
  const data::PushTipsCodexExcelConfig *push_tips_codex_config_ptr; // [rsp+60h] [rbp-140h]
  const data::PushTipsConfig *push_tips_config_ptr; // [rsp+68h] [rbp-138h]
  std::shared_ptr<Config> v28; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v29; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v30; // [rsp+A0h] [rbp-100h] BYREF
  common::milog::MiLogStream v31; // [rsp+C0h] [rbp-E0h] BYREF
  char v32[192]; // [rsp+E0h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 12 codex_id:455 48 4 12 codex_id:488 64 8 24 codex_type_data_iter:446 96 24 25 to_modified_codex_vec:454";
  *(_QWORD *)(v1 + 16) = PlayerCodexComp::checkAndModifyPushTipsCodex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -218959360;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  *(_DWORD *)(v1 + 48) = 6;
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v1 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                   &this->codex_data_map_,
                                                                   (const std::map<unsigned int,CodexTypeData>::key_type *)(v1 + 48));
  __for_end._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( !std::operator==(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v1 + 64),
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)&__for_end) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.codex_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v28);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v28);
    watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.watcher_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v28);
    viewed_codex_id_set = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v1 + 64))->second.viewed_codex_id_set;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
    __for_range = viewed_codex_id_set;
    __for_begin._M_node = std::set<unsigned int>::begin(viewed_codex_id_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      *(_DWORD *)(v1 + 32) = *v5;
      push_tips_codex_config_ptr = data::CodexExcelConfigMgrBase::findPushTipsCodexExcelConfig(
                                     codex_config_mgr,
                                     *(_DWORD *)(v1 + 32));
      if ( push_tips_codex_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&push_tips_codex_config_ptr->push_tip_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)push_tips_codex_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&push_tips_codex_config_ptr->push_tip_id >> 3)
                                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&push_tips_codex_config_ptr->push_tip_id);
        }
        *(_DWORD *)(v1 + 48) = push_tips_codex_config_ptr->push_tip_id;
        push_tips_config_ptr = data::WatcherExcelConfigMgrBase::findPushTipsConfig(
                                 watcher_config_mgr,
                                 *(_DWORD *)(v1 + 48));
        if ( push_tips_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&push_tips_config_ptr->reward_id);
          }
          if ( !push_tips_config_ptr->reward_id )
            goto LABEL_23;
          if ( *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->watcher_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)push_tips_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&push_tips_config_ptr->watcher_id >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&push_tips_config_ptr->watcher_id);
          }
          if ( push_tips_config_ptr->watcher_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            WatcherComp = Player::getWatcherComp(this->player_);
            push_tips_state = PlayerWatcherComp::getPushTipsState(WatcherComp, *(_DWORD *)(v1 + 48));
            if ( push_tips_state == 1 || push_tips_state == 2 )
              std::vector<unsigned int>::push_back(
                (std::vector<unsigned int> *const)(v1 + 96),
                (const std::vector<unsigned int>::value_type *)(v1 + 32));
          }
          else
          {
LABEL_23:
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/player_codex_comp.cpp",
              "checkAndModifyPushTipsCodex",
              474);
            v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                    &v31,
                    (const char (*)[58])"push tips reward_id or watcher_id is zero, push tips id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_codex_comp.cpp",
            "checkAndModifyPushTipsCodex",
            467);
          v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                 &v30,
                 (const char (*)[22])"invalid push_tips_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_codex_comp.cpp",
          "checkAndModifyPushTipsCodex",
          460);
        v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
               &v29,
               (const char (*)[45])"findPushTipsCodexExcelConfig fail, codex_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96)) )
    {
      codex_id_set = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v1 + 64))->second.codex_id_set;
      __for_range_0 = (std::vector<unsigned int> *)(v1 + 96);
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 96))._M_current;
      __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v1 + 48) = *v13;
        std::set<unsigned int>::erase(viewed_codex_id_set, (const std::set<unsigned int>::key_type *)(v1 + 48));
        std::set<unsigned int>::insert(codex_id_set, (const std::set<unsigned int>::value_type *)(v1 + 48));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_codex_comp.cpp",
        "checkAndModifyPushTipsCodex",
        493);
      v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v31,
              (const char (*)[23])"to_modified_codex_vec:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int>(v14, (const std::vector<unsigned int> *)(v1 + 96));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v31);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  }
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 498: range 000000001799A55A-000000001799AB57
__int64 __fastcall PlayerCodexComp::getCodexMonsterBeKilledNum(
        const PlayerCodexComp *const this,
        uint32_t codex_id,
        unsigned __int64 killed_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> >::pointer v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int *v15; // rax
  uint32_t *v16; // rdx
  PlayerSceneComp *SceneComp; // rax
  uint32_t MonsterBeKilledNum; // ecx
  uint32_t monster_id; // [rsp+24h] [rbp-DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const data::AnimalCodexExcelConfig *codex_conf_ptr; // [rsp+38h] [rbp-C8h]
  const std::set<unsigned int> *monster_id_set_ptr; // [rsp+40h] [rbp-C0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+80h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 describe_id:515 48 4 12 codex_id:497 64 8 8 iter:499";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::getCodexMonsterBeKilledNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = codex_id;
  *(_DWORD *)(v3 + 32) = 3;
  *(std::map<unsigned int,CodexTypeData>::const_iterator *)(v3 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                         &this->codex_data_map_,
                                                                         (const std::map<unsigned int,CodexTypeData>::key_type *)(v3 + 32));
  __for_end._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)&__for_end) )
  {
    result = 0LL;
    goto LABEL_28;
  }
  v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v3 + 64));
  if ( !CodexTypeData::isContainsCodex(&v7->second, *(_DWORD *)(v3 + 48)) )
  {
    result = 0LL;
    goto LABEL_28;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  codex_conf_ptr = data::CodexExcelConfigMgrBase::findAnimalCodexExcelConfig(
                     &v8->design_config.txt_config_mgr.codex_config_mgr,
                     *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( !codex_conf_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "getCodexMonsterBeKilledNum",
      512);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v27,
           (const char (*)[43])"findAnimalCodexExcelConfig fail, codex_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_11:
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->describe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->describe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&codex_conf_ptr->describe_id);
  }
  *(_DWORD *)(v3 + 32) = codex_conf_ptr->describe_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  monster_id_set_ptr = MonsterExcelConfigMgr::findMonsterIdSetByDescribeId(
                         &v12->design_config.txt_config_mgr.monster_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( !monster_id_set_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "getCodexMonsterBeKilledNum",
      519);
    v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v27,
            (const char (*)[48])"findMonsterIdSetByDescribeId fail, describe_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_11;
  }
  __for_range = monster_id_set_ptr;
  __for_begin._M_node = std::set<unsigned int>::begin(monster_id_set_ptr)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    monster_id = *v16;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    MonsterBeKilledNum = PlayerSceneComp::getMonsterBeKilledNum(SceneComp, monster_id);
    if ( *(_BYTE *)((killed_num >> 3) + 0x7FFF8000) != 0
      && (char)((killed_num & 7) + 3) >= *(_BYTE *)((killed_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(killed_num);
    }
    *(_DWORD *)killed_num += MonsterBeKilledNum;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_28:
  if ( v28 == (char *)v3 )
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

// Line 530: range 000000001799AB58-000000001799B155
__int64 __fastcall PlayerCodexComp::getCodexMonsterBeCapturedNum(
        const PlayerCodexComp *const this,
        uint32_t codex_id,
        unsigned __int64 captured_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> >::pointer v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int *v15; // rax
  uint32_t *v16; // rdx
  PlayerSceneComp *SceneComp; // rax
  uint32_t MonsterBeCapturedNum; // ecx
  uint32_t monster_id; // [rsp+24h] [rbp-DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const data::AnimalCodexExcelConfig *codex_conf_ptr; // [rsp+38h] [rbp-C8h]
  const std::set<unsigned int> *monster_id_set_ptr; // [rsp+40h] [rbp-C0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+80h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 describe_id:547 48 4 12 codex_id:529 64 8 8 iter:531";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::getCodexMonsterBeCapturedNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = codex_id;
  *(_DWORD *)(v3 + 32) = 3;
  *(std::map<unsigned int,CodexTypeData>::const_iterator *)(v3 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                         &this->codex_data_map_,
                                                                         (const std::map<unsigned int,CodexTypeData>::key_type *)(v3 + 32));
  __for_end._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)&__for_end) )
  {
    result = 0LL;
    goto LABEL_28;
  }
  v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v3 + 64));
  if ( !CodexTypeData::isContainsCodex(&v7->second, *(_DWORD *)(v3 + 48)) )
  {
    result = 0LL;
    goto LABEL_28;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  codex_conf_ptr = data::CodexExcelConfigMgrBase::findAnimalCodexExcelConfig(
                     &v8->design_config.txt_config_mgr.codex_config_mgr,
                     *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( !codex_conf_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "getCodexMonsterBeCapturedNum",
      544);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v27,
           (const char (*)[43])"findAnimalCodexExcelConfig fail, codex_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_11:
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->describe_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->describe_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&codex_conf_ptr->describe_id);
  }
  *(_DWORD *)(v3 + 32) = codex_conf_ptr->describe_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  monster_id_set_ptr = MonsterExcelConfigMgr::findMonsterIdSetByDescribeId(
                         &v12->design_config.txt_config_mgr.monster_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( !monster_id_set_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "getCodexMonsterBeCapturedNum",
      551);
    v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v27,
            (const char (*)[48])"findMonsterIdSetByDescribeId fail, describe_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_11;
  }
  __for_range = monster_id_set_ptr;
  __for_begin._M_node = std::set<unsigned int>::begin(monster_id_set_ptr)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v16 = v15;
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v15);
    }
    monster_id = *v16;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    MonsterBeCapturedNum = PlayerSceneComp::getMonsterBeCapturedNum(SceneComp, monster_id);
    if ( *(_BYTE *)((captured_num >> 3) + 0x7FFF8000) != 0
      && (char)((captured_num & 7) + 3) >= *(_BYTE *)((captured_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(captured_num);
    }
    *(_DWORD *)captured_num += MonsterBeCapturedNum;
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_28:
  if ( v28 == (char *)v3 )
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

// Line 562: range 000000001799B156-000000001799B520
__int64 __fastcall PlayerCodexComp::viewCodex(PlayerCodexComp *const this, proto::CodexType type, uint32_t codex_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::pointer v14; // rax
  std::map<unsigned int,CodexTypeData>::key_type __x; // [rsp+1Ch] [rbp-B4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int> *codex_id_set; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-A0h] BYREF
  char v20[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 8 type:561 48 4 12 codex_id:561 64 8 24 codex_type_data_iter:563";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::viewCodex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = type;
  *(_DWORD *)(v3 + 48) = codex_id;
  __x = *(_DWORD *)(v3 + 32);
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v3 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                   &this->codex_data_map_,
                                                                   &__x);
  __y._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "viewCodex",
      566);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v19, (const char (*)[6])"type:");
    v7 = common::milog::MiLogStream::operator<<<proto::CodexType,(proto::CodexType*)0>(
           v6,
           (const proto::CodexType *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v7,
           (const char (*)[24])" has no record, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
    goto LABEL_15;
  }
  codex_id_set = &std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v3 + 64))->second.codex_id_set;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          codex_id_set,
          (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_codex_comp.cpp",
      "viewCodex",
      574);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v19, (const char (*)[6])"type:");
    v11 = common::milog::MiLogStream::operator<<<proto::CodexType,(proto::CodexType*)0>(
            v10,
            (const proto::CodexType *)(v3 + 32));
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" codex_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           v13,
           (const char (*)[23])" not unviewed, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  std::set<unsigned int>::erase(codex_id_set, (const std::set<unsigned int>::key_type *)(v3 + 48));
  v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v3 + 64));
  std::set<unsigned int>::insert(
    &v14->second.viewed_codex_id_set,
    (const std::set<unsigned int>::value_type *)(v3 + 48));
  if ( *(_DWORD *)(v3 + 32) == 6 )
    PlayerCodexComp::updateRecentViewedPushtips(this, *(_DWORD *)(v3 + 48));
  result = 0LL;
LABEL_15:
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
  return result;
};

// Line 589: range 000000001799B522-000000001799B54B
int32_t __cdecl PlayerCodexComp::recordBooksCodex(PlayerCodexComp *const this, uint32_t id)
{
  return PlayerCodexComp::recordCodex(this, CODEX_BOOKS, id, 1);
};

// Line 595: range 000000001799B54C-000000001799BE57
void __cdecl PlayerCodexComp::initEventObservers(PlayerCodexComp *const this)
{
  unsigned __int64 p_is_started; // r13
  __int64 v2; // rax
  _DWORD *v3; // r14
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+B4h] [rbp-15Ch] BYREF
  PlayerEventComp *event_comp; // [rsp+B8h] [rbp-158h]
  PlayerEventComp v7; // [rsp+C0h] [rbp-150h] BYREF

  p_is_started = (unsigned __int64)&v7.is_started_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_is_started = v2;
  }
  *(_QWORD *)p_is_started = 1102416563LL;
  *(_QWORD *)(p_is_started + 8) = "2 32 16 12 this_ptr:598 64 16 12 this_wtr:604";
  *(_QWORD *)(p_is_started + 16) = PlayerCodexComp::initEventObservers;
  v3 = (_DWORD *)(p_is_started >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_.observer_list_map_._M_h._M_element_count,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_codex_comp.cpp",
    "initEventObservers",
    596);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_element_count,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_element_count);
  toThisPtr<PlayerCodexComp>((PlayerCodexComp *)(p_is_started + 32));
  if ( std::operator==<PlayerCodexComp>(0LL, (const std::shared_ptr<PlayerCodexComp> *)(p_is_started + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.observer_list_map_._M_h._M_element_count,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "initEventObservers",
      601);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_element_count,
      (const char (*)[47])"dynamic_pointer_cast to PlayerQuestComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_element_count);
  }
  else
  {
    std::weak_ptr<PlayerCodexComp>::weak_ptr<PlayerCodexComp,void>(
      (std::weak_ptr<PlayerCodexComp> *const)(p_is_started + 64),
      (const std::shared_ptr<PlayerCodexComp> *)(p_is_started + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,FinishParentQuestEvent>(
      &v7,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const FinishParentQuestEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,EnvAnimalEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const EnvAnimalEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,SeeAnimalEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const SeeAnimalEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,FishingSuccEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const FishingSuccEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,ObtainItemEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const ObtainItemEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,WeaponPromoteEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const WeaponPromoteEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,PushTipAddEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const PushTipAddEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,MonsterBeKilledByHateListEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const MonsterBeKilledByHateListEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,ViewSceneryEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.event_center_,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const ViewSceneryEvent *))&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::weak_ptr(
      (std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCodexComp> *)(p_is_started + 64));
    PlayerEventComp::registerObserver<PlayerCodexComp,CaptureSuccEvent>(
      (PlayerEventComp *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (std::weak_ptr<PlayerCodexComp> *)event_comp,
      (void (*)(PlayerCodexComp *, const CaptureSuccEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCodexComp>::~weak_ptr((std::weak_ptr<PlayerCodexComp> *const)(p_is_started + 64));
  }
  std::shared_ptr<PlayerCodexComp>::~shared_ptr((std::shared_ptr<PlayerCodexComp> *const)(p_is_started + 32));
  if ( &v7.is_started_ == (bool *)p_is_started )
  {
    *(_QWORD *)((p_is_started >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_is_started >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_is_started = 1172321806LL;
    *(_QWORD *)((p_is_started >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_is_started >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 622: range 000000001799BE58-000000001799BEB2
void __cdecl PlayerCodexComp::onParentQuestFinish(PlayerCodexComp *const this, const FinishParentQuestEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  PlayerCodexComp::recordQuestCodex(this, event->parent_quest_id);
};

// Line 627: range 000000001799BEB4-000000001799BF0E
void __cdecl PlayerCodexComp::onCatchEnvAnimal(PlayerCodexComp *const this, const EnvAnimalEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->monster_id);
  }
  PlayerCodexComp::recordAnimalCodex(this, event->monster_id);
};

// Line 632: range 000000001799BF10-000000001799C135
void __cdecl PlayerCodexComp::onSeeEnvAnimal(PlayerCodexComp *const this, const SeeAnimalEvent *event)
{
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned int describe_id; // [rsp+10h] [rbp-30h]
  unsigned int codex_id; // [rsp+14h] [rbp-2Ch]
  const data::AnimalCodexExcelConfig *codex_conf_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v8[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8)->design_config.txt_config_mgr.monster_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->monster_id);
  }
  describe_id = MonsterExcelConfigMgr::getCreatureDescribeId(p_monster_config_mgr, event->monster_id);
  std::shared_ptr<Config>::~shared_ptr(v8);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
  codex_id = CodexExcelConfigMgr::getCodexIdByCreatureDescribeId(
               &v3->design_config.txt_config_mgr.codex_config_mgr,
               describe_id);
  std::shared_ptr<Config>::~shared_ptr(v8);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
  codex_conf_ptr = data::CodexExcelConfigMgrBase::findAnimalCodexExcelConfig(
                     &v4->design_config.txt_config_mgr.codex_config_mgr,
                     codex_id);
  std::shared_ptr<Config>::~shared_ptr(v8);
  if ( codex_conf_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->is_seen_active >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)codex_conf_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->is_seen_active >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load1(&codex_conf_ptr->is_seen_active);
    }
    if ( codex_conf_ptr->is_seen_active )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->monster_id);
      }
      PlayerCodexComp::recordAnimalCodex(this, event->monster_id);
    }
  }
};

// Line 647: range 000000001799C136-000000001799C32A
void __cdecl PlayerCodexComp::onObtainItem(PlayerCodexComp *const this, const ObtainItemEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  char v6[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 type:648 64 4 6 id:649";
  *(_QWORD *)(v2 + 16) = PlayerCodexComp::onObtainItem;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->item_id);
  }
  if ( !PlayerCodexComp::getCodexTypeAndIdByMaterialId(
          this,
          event->item_id,
          (proto::CodexType *)(v2 + 48),
          (uint32_t *)(v2 + 64)) )
  {
    v5 = *(_DWORD *)(v2 + 48);
    if ( v5 == 8 )
    {
      PlayerCodexComp::recordReliquaryCodex(this, *(_DWORD *)(v2 + 64));
    }
    else if ( v5 <= 8 )
    {
      if ( v5 == 2 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->item_guid >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        PlayerCodexComp::recordWeaponCodex(this, *(_DWORD *)(v2 + 64), event->item_guid);
      }
      else if ( v5 == 4 )
      {
        PlayerCodexComp::recordMaterialCodex(this, *(_DWORD *)(v2 + 64));
      }
    }
  }
  if ( v6 == (char *)v2 )
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

// Line 674: range 000000001799C32C-000000001799C60F
void __cdecl PlayerCodexComp::onWeaponPromoteEvent(PlayerCodexComp *const this, const WeaponPromoteEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 8 type:675 48 4 6 id:676 64 4 7 ret:677";
  *(_QWORD *)(v2 + 16) = PlayerCodexComp::onWeaponPromoteEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->weapon_id);
  }
  *(_DWORD *)(v2 + 64) = PlayerCodexComp::getCodexTypeAndIdByMaterialId(
                           this,
                           event->weapon_id,
                           (proto::CodexType *)(v2 + 32),
                           (uint32_t *)(v2 + 48));
  if ( !*(_DWORD *)(v2 + 64) )
  {
    if ( *(_DWORD *)(v2 + 32) == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&event->promote_level);
      }
      PlayerCodexComp::tryUpdateWeaponMaxPromoteLevelAndNotify(this, *(_DWORD *)(v2 + 48), event->promote_level);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_codex_comp.cpp",
        "onWeaponPromoteEvent",
        684);
      v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v12, (const char (*)[12])"codex_type:");
      v6 = common::milog::MiLogStream::operator<<<proto::CodexType,(proto::CodexType*)0>(
             v5,
             (const proto::CodexType *)(v2 + 32));
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" ret:");
      v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v2 + 64));
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" weapon_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->weapon_id);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
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
};

// Line 691: range 000000001799C610-000000001799C66A
void __cdecl PlayerCodexComp::onPushTipAdd(PlayerCodexComp *const this, const PushTipAddEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->push_tip_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->push_tip_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->push_tip_id);
  }
  PlayerCodexComp::recordPushTipsCodex(this, event->push_tip_id);
};

// Line 696: range 000000001799C66C-000000001799C6C6
void __cdecl PlayerCodexComp::onMonsterBeKilledByHateList(
        PlayerCodexComp *const this,
        const MonsterBeKilledByHateListEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->monster_id);
  }
  PlayerCodexComp::recordAnimalCodex(this, event->monster_id);
};

// Line 702: range 000000001799C6C8-000000001799C99C
void __cdecl PlayerCodexComp::onFishingSucc(PlayerCodexComp *const this, const FishingSuccEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::FishExcelConfig *fish_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 fish_id:703";
  *(_QWORD *)(v2 + 16) = PlayerCodexComp::onFishingSucc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->fish_id);
  }
  *(_DWORD *)(v2 + 32) = event->fish_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  fish_config_ptr = data::FishExcelConfigMgrBase::findFishExcelConfig(
                      &v5->design_config.txt_config_mgr.fish_config_mgr,
                      *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( fish_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&fish_config_ptr->monster_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)fish_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&fish_config_ptr->monster_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&fish_config_ptr->monster_id);
    }
    PlayerCodexComp::recordAnimalCodex(this, fish_config_ptr->monster_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "onFishingSucc",
      707);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v12, (const char (*)[9])"fish_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v7,
           (const char (*)[24])" config not found, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 715: range 000000001799C99E-000000001799CA37
void __cdecl PlayerCodexComp::onCaptureSuccEvent(PlayerCodexComp *const this, const CaptureSuccEvent *event)
{
  if ( *(char *)(((unsigned __int64)&event->is_enter_codex >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_enter_codex);
  if ( event->is_enter_codex )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->monster_id);
    }
    PlayerCodexComp::recordAnimalCodex(this, event->monster_id);
  }
};

// Line 723: range 000000001799CA38-000000001799CB0E
void __cdecl PlayerCodexComp::onViewScenery(PlayerCodexComp *const this, const ViewSceneryEvent *event)
{
  uint32_t config_id; // ecx
  uint32_t group_id; // edx

  if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->config_id);
  }
  config_id = event->config_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->group_id);
  }
  group_id = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->scene_id);
  }
  PlayerCodexComp::recordViewCodex(this, event->scene_id, group_id, config_id);
};

// Line 729: range 000000001799CB10-000000001799CBA9
int32_t __cdecl PlayerCodexComp::recordQuestCodex(PlayerCodexComp *const this, uint32_t parent_quest_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t CodexIdByQuestId; // edx
  int32_t v4; // ebx
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  CodexIdByQuestId = CodexExcelConfigMgr::getCodexIdByQuestId(
                       &v2->design_config.txt_config_mgr.codex_config_mgr,
                       parent_quest_id);
  v4 = PlayerCodexComp::recordCodex(this, CODEX_QUEST, CodexIdByQuestId, 1);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return v4;
};

// Line 735: range 000000001799CBAA-000000001799CE7F
__int64 __fastcall PlayerCodexComp::recordWeaponCodex(PlayerCodexComp *const this, uint32_t id, uint64_t item_guid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t PromoteLevel; // eax
  __int64 result; // rax
  int32_t ret; // [rsp+2Ch] [rbp-B4h]
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
  *(_QWORD *)(v3 + 8) = "2 32 8 13 item_guid:734 64 16 14 weapon_ptr:741";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::recordWeaponCodex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = item_guid;
  ret = PlayerCodexComp::recordCodex(this, CODEX_WEAPON, id, 1);
  if ( ret )
  {
    v6 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v3 + 64), (uint64_t)ItemComp, *(_QWORD *)(v3 + 32));
    if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_codex_comp.cpp",
        "recordWeaponCodex",
        744);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v16, (const char (*)[11])"item_guid:");
      v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v8,
             (const unsigned __int64 *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v9,
              (const char (*)[27])" weapon not found, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v6 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      PromoteLevel = Weapon::getPromoteLevel(v11);
      PlayerCodexComp::tryUpdateWeaponMaxPromoteLevelAndNotify(this, id, PromoteLevel);
      v6 = 0;
    }
    std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 64));
  }
  result = v6;
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
  return result;
};

// Line 752: range 000000001799CE80-000000001799D27C
void __fastcall PlayerCodexComp::tryUpdateWeaponMaxPromoteLevelAndNotify(
        PlayerCodexComp *const this,
        uint32_t codex_id,
        uint32_t promote_level)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::unordered_map<unsigned int,unsigned int> *weapon_max_promote_level_map; // [rsp+10h] [rbp-B0h]
  uint32_t *max_promote_level; // [rsp+18h] [rbp-A8h]
  char v17[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 25 old_max_promote_level:763 48 4 12 codex_id:751 64 32 10 notify:766";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::tryUpdateWeaponMaxPromoteLevelAndNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = codex_id;
  if ( promote_level )
  {
    *(_DWORD *)(v3 + 32) = 2;
    weapon_max_promote_level_map = &std::map<unsigned int,CodexTypeData>::operator[](
                                      &this->codex_data_map_,
                                      (std::map<unsigned int,CodexTypeData>::key_type *)(v3 + 32))->weapon_max_promote_level_map;
    v6 = std::unordered_map<unsigned int,unsigned int>::operator[](
           weapon_max_promote_level_map,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    max_promote_level = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    if ( promote_level > *max_promote_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)max_promote_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)max_promote_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_promote_level >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(max_promote_level);
      }
      *(_DWORD *)(v3 + 32) = *max_promote_level;
      *max_promote_level = promote_level;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_codex_comp.cpp",
        "tryUpdateWeaponMaxPromoteLevelAndNotify",
        765);
      v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
             (common::milog::MiLogStream *const)(v3 + 64),
             (const char (*)[10])"codex_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             v8,
             (const char (*)[27])" weapon_max_promote_level:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v10, (const char (*)[5])off_2624CFE0);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, max_promote_level);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v13, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
      proto::CodexDataUpdateNotify::CodexDataUpdateNotify((proto::CodexDataUpdateNotify *const)(v3 + 64));
      proto::CodexDataUpdateNotify::set_id((proto::CodexDataUpdateNotify *const)(v3 + 64), *(_DWORD *)(v3 + 48));
      proto::CodexDataUpdateNotify::set_type((proto::CodexDataUpdateNotify *const)(v3 + 64), CODEX_WEAPON);
      if ( *(_BYTE *)(((unsigned __int64)max_promote_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)max_promote_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)max_promote_level >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(max_promote_level);
      }
      proto::CodexDataUpdateNotify::set_weapon_max_promote_level(
        (proto::CodexDataUpdateNotify *const)(v3 + 64),
        *max_promote_level);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 64));
      proto::CodexDataUpdateNotify::~CodexDataUpdateNotify((proto::CodexDataUpdateNotify *const)(v3 + 64));
    }
  }
  if ( v17 == (char *)v3 )
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
};

// Line 775: range 000000001799D27E-000000001799D4DE
int32_t __cdecl PlayerCodexComp::recordReliquaryCodex(PlayerCodexComp *const this, uint32_t id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  int32_t v3; // ebx
  PlayerItemComp *ItemComp; // rdi
  uint32_t level; // ecx
  CodexExcelConfigMgr *p_codex_config_mgr; // rdi
  uint32_t v7; // ecx
  uint32_t CodexIdByReliquarySuitIdAndLevel; // edx
  const data::ReliquaryCodexExcelConfig *codex_conf_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v12[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v12);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12);
  codex_conf_ptr = data::CodexExcelConfigMgrBase::findReliquaryCodexExcelConfig(
                     &v2->design_config.txt_config_mgr.codex_config_mgr,
                     id);
  std::shared_ptr<Config>::~shared_ptr(v12);
  if ( !codex_conf_ptr )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->level >> 3) + 0x7FFF8000) <= 3 )
  {
    ItemComp = (PlayerItemComp *)&codex_conf_ptr->level;
    __asan_report_load4(&codex_conf_ptr->level);
  }
  level = codex_conf_ptr->level;
  if ( *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->suit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)codex_conf_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->suit_id >> 3)
                                                                  + 0x7FFF8000) )
  {
    ItemComp = (PlayerItemComp *)&codex_conf_ptr->suit_id;
    __asan_report_load4(&codex_conf_ptr->suit_id);
  }
  if ( (unsigned __int8)PlayerItemComp::isReliquarySuitActive(ItemComp, codex_conf_ptr->suit_id, level) != 1 )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v12);
  p_codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12)->design_config.txt_config_mgr.codex_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->level >> 3) + 0x7FFF8000) <= 3 )
  {
    p_codex_config_mgr = (CodexExcelConfigMgr *)&codex_conf_ptr->level;
    __asan_report_load4(&codex_conf_ptr->level);
  }
  v7 = codex_conf_ptr->level;
  if ( *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->suit_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)codex_conf_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&codex_conf_ptr->suit_id >> 3)
                                                                  + 0x7FFF8000) )
  {
    p_codex_config_mgr = (CodexExcelConfigMgr *)&codex_conf_ptr->suit_id;
    __asan_report_load4(&codex_conf_ptr->suit_id);
  }
  CodexIdByReliquarySuitIdAndLevel = CodexExcelConfigMgr::getCodexIdByReliquarySuitIdAndLevel(
                                       p_codex_config_mgr,
                                       codex_conf_ptr->suit_id,
                                       v7);
  v3 = PlayerCodexComp::recordCodex(this, CODEX_RELIQUARY, CodexIdByReliquarySuitIdAndLevel, 1);
  std::shared_ptr<Config>::~shared_ptr(v12);
  return v3;
};

// Line 791: range 000000001799D4E0-000000001799D7EC
int32_t __fastcall PlayerCodexComp::recordAnimalCodex(PlayerCodexComp *const this, uint32_t monster_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t describe_id; // [rsp+10h] [rbp-A0h]
  uint32_t codex_id; // [rsp+14h] [rbp-9Ch]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 monster_id:790";
  *(_QWORD *)(v2 + 16) = PlayerCodexComp::recordAnimalCodex;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = monster_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                         &v5->design_config.txt_config_mgr.monster_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( monster_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->describe_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->describe_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&monster_config_ptr->describe_id);
    }
    describe_id = monster_config_ptr->describe_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    codex_id = CodexExcelConfigMgr::getCodexIdByCreatureDescribeId(
                 &v10->design_config.txt_config_mgr.codex_config_mgr,
                 describe_id);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    result = PlayerCodexComp::recordCodex(this, CODEX_ANIMAL, codex_id, 1);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_codex_comp.cpp",
      "recordAnimalCodex",
      795);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v15,
           (const char (*)[41])"findMonsterExcelConfig fail, monster_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
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

// Line 805: range 000000001799D7EE-000000001799D887
int32_t __cdecl PlayerCodexComp::recordPushTipsCodex(PlayerCodexComp *const this, uint32_t push_tip_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t CodexIdByPushTipsId; // edx
  int32_t v4; // ebx
  std::shared_ptr<Config> v6[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  CodexIdByPushTipsId = CodexExcelConfigMgr::getCodexIdByPushTipsId(
                          &v2->design_config.txt_config_mgr.codex_config_mgr,
                          push_tip_id);
  v4 = PlayerCodexComp::recordCodex(this, CODEX_PUSHTIPS, CodexIdByPushTipsId, 1);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return v4;
};

// Line 811: range 000000001799D888-000000001799D92A
int32_t __cdecl PlayerCodexComp::recordViewCodex(
        PlayerCodexComp *const this,
        uint32_t scene_id,
        uint32_t group_id,
        uint32_t config_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t CodexIdByViewId; // edx
  int32_t v6; // ebx
  std::shared_ptr<Config> v10[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10);
  CodexIdByViewId = CodexExcelConfigMgr::getCodexIdByViewId(
                      &v4->design_config.txt_config_mgr.codex_config_mgr,
                      scene_id,
                      group_id,
                      config_id);
  v6 = PlayerCodexComp::recordCodex(this, CODEX_VIEW, CodexIdByViewId, 1);
  std::shared_ptr<Config>::~shared_ptr(v10);
  return v6;
};

// Line 817: range 000000001799D92C-000000001799D955
int32_t __cdecl PlayerCodexComp::recordMaterialCodex(PlayerCodexComp *const this, uint32_t id)
{
  return PlayerCodexComp::recordCodex(this, CODEX_MATERIAL, id, 1);
};

// Line 823: range 000000001799D956-000000001799DF3C
__int64 __fastcall PlayerCodexComp::recordCodex(
        PlayerCodexComp *const this,
        __int32 type,
        __int32 id,
        __int8 is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyCodex,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyCodex,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v18; // [rsp+0h] [rbp-140h]
  bool is_notifya; // [rsp+Ch] [rbp-134h]
  PlayerCodexComp *thisa; // [rsp+18h] [rbp-128h]
  std::map<unsigned int,CodexTypeData>::key_type __k; // [rsp+24h] [rbp-11Ch] BYREF
  CodexTypeData *codex_type_data; // [rsp+28h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> v23; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+40h] [rbp-100h] BYREF
  char v25[240]; // [rsp+50h] [rbp-F0h] BYREF

  *(&v18._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v18._anon_0._M_allocated_capacity) = type;
  *(_DWORD *)v18._anon_0._M_local_buf = id;
  BYTE4(v18._M_string_length) = is_notify;
  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 1 10 holder:838 64 4 8 type:822 80 4 6 id:822 96 16 11 log_ptr:843 128 32 10 notify:851";
  *(_QWORD *)(v4 + 16) = PlayerCodexComp::recordCodex;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 64) = type;
  *(_DWORD *)(v4 + 80) = *(_DWORD *)v18._anon_0._M_local_buf;
  if ( !proto::CodexType_IsValid(*(_DWORD *)(v4 + 64))
    || !PlayerCodexComp::isCodexIdValid(this, *(_DWORD *)(v4 + 80), *(proto::CodexType *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_codex_comp.cpp",
      "recordCodex",
      827);
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[14])"invalid type:");
    v9 = common::milog::MiLogStream::operator<<<proto::CodexType,(proto::CodexType*)0>(
           v8,
           (const proto::CodexType *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])off_2625D360);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    v11 = -1;
  }
  else
  {
    __k = *(_DWORD *)(v4 + 64);
    codex_type_data = std::map<unsigned int,CodexTypeData>::operator[](&this->codex_data_map_, &__k);
    if ( CodexTypeData::isContainsCodex(codex_type_data, *(_DWORD *)(v4 + 80)) )
    {
      v11 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v4 + 128), BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xB22u, v18);
      std::string::~string((void *)(v4 + 128));
      std::set<unsigned int>::insert(
        &codex_type_data->codex_id_set,
        (const std::set<unsigned int>::value_type *)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(thisa->player_);
      common::tools::perf::make_shared<UnlockCodexEvent,proto::CodexType &,unsigned int &>(
        (proto::CodexType *)&v23,
        (unsigned int *)(v4 + 64),
        (proto::CodexType *)(v4 + 80),
        (unsigned int *)(v4 + 64));
      std::shared_ptr<BaseEvent>::shared_ptr<UnlockCodexEvent,void>(
        &p_event_ptr,
        (std::shared_ptr<UnlockCodexEvent> *)&v23);
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<UnlockCodexEvent>::~shared_ptr((std::shared_ptr<UnlockCodexEvent> *const)&v23);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyCodex>();
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyCodex,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCodex,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyCodex::set_type(v14, *(_DWORD *)(v4 + 64));
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyCodex,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyCodex,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      proto_log::PlayerLogBodyCodex::set_codex_id(v15, *(_DWORD *)(v4 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(
        (std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr,
        0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyCodex,void>(
        &v23,
        (const std::shared_ptr<proto_log::PlayerLogBodyCodex> *)(v4 + 96));
      Player::printStatLog(player, &v23, (MessagePtr *)&p_event_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v23);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr);
      if ( is_notifya )
      {
        proto::CodexDataUpdateNotify::CodexDataUpdateNotify((proto::CodexDataUpdateNotify *const)(v4 + 128));
        proto::CodexDataUpdateNotify::set_id((proto::CodexDataUpdateNotify *const)(v4 + 128), *(_DWORD *)(v4 + 80));
        proto::CodexDataUpdateNotify::set_type(
          (proto::CodexDataUpdateNotify *const)(v4 + 128),
          *(proto::CodexType *)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v4 + 128));
        proto::CodexDataUpdateNotify::~CodexDataUpdateNotify((proto::CodexDataUpdateNotify *const)(v4 + 128));
      }
      v11 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyCodex>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyCodex> *const)(v4 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
    }
  }
  result = v11;
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 862: range 000000001799DF3E-000000001799E093
bool __cdecl PlayerCodexComp::isCodexIdValid(PlayerCodexComp *const this, uint32_t id, proto::CodexType type)
{
  bool result; // al
  CodexExcelConfigMgr *conf_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.codex_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v6);
  switch ( type )
  {
    case CODEX_QUEST:
      result = data::CodexExcelConfigMgrBase::findQuestCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    case CODEX_WEAPON:
      result = data::CodexExcelConfigMgrBase::findWeaponCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    case CODEX_ANIMAL:
      result = data::CodexExcelConfigMgrBase::findAnimalCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    case CODEX_MATERIAL:
      result = data::CodexExcelConfigMgrBase::findMaterialCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    case CODEX_BOOKS:
      result = data::CodexExcelConfigMgrBase::findBooksCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    case CODEX_PUSHTIPS:
      result = data::CodexExcelConfigMgrBase::findPushTipsCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    case CODEX_VIEW:
      result = data::CodexExcelConfigMgrBase::findViewCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    case CODEX_RELIQUARY:
      result = data::CodexExcelConfigMgrBase::findReliquaryCodexExcelConfig(conf_mgr, id) != 0LL;
      break;
    default:
      result = 0;
      break;
  }
  return result;
};

// Line 906: range 000000001799E094-000000001799E479
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerCodexComp::getCodexTypeAndIdByMaterialId(
        PlayerCodexComp *const this,
        uint32_t material_id,
        proto::CodexType *type,
        uint32_t *id)
{
  uint32_t CodexIdByMaterialId; // ecx
  char v5; // dl
  __int64 v6; // rdx
  __int64 v7; // rdx
  uint32_t CodexIdByBooksId; // ecx
  char v10; // dl
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  uint32_t CodexIdByWeaponId; // ecx
  char v15; // dl
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t rank_level; // edx
  uint32_t CodexIdByReliquarySuitIdAndLevel; // ecx
  char v22; // dl
  __int64 set_id; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  uint32_t material_ida; // [rsp+14h] [rbp-3Ch]
  CodexExcelConfigMgr *conf_mgr; // [rsp+20h] [rbp-30h]
  const data::ReliquaryExcelConfig *reliquary_conf_ptr; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v31[2]; // [rsp+30h] [rbp-20h] BYREF

  material_ida = material_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v31);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v31)->design_config.txt_config_mgr.codex_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(v31);
  *(_QWORD *)&material_id = material_id;
  CodexIdByMaterialId = CodexExcelConfigMgr::getCodexIdByMaterialId(conf_mgr, material_id);
  v5 = *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000);
  LOBYTE(material_id) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)(((unsigned __int8)id & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(id, *(_QWORD *)&material_id, v6);
  *id = CodexIdByMaterialId;
  if ( *id )
  {
    v7 = (*(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)type & 7)
                                                                                                + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store4(type, ((unsigned __int8)type & 7u) + 3, v7);
    *type = CODEX_MATERIAL;
    return 0;
  }
  else
  {
    v11 = material_ida;
    CodexIdByBooksId = CodexExcelConfigMgr::getCodexIdByBooksId(conf_mgr, material_ida);
    v10 = *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v10 != 0;
    v12 = (v10 != 0) & (unsigned __int8)((char)(((unsigned __int8)id & 7) + 3) >= v10);
    if ( (_BYTE)v12 )
      __asan_report_store4(id, v11, v12);
    *id = CodexIdByBooksId;
    if ( *id )
    {
      v13 = (*(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000));
      if ( (_BYTE)v13 )
        __asan_report_store4(type, ((unsigned __int8)type & 7u) + 3, v13);
      *type = CODEX_BOOKS;
      return 0;
    }
    else
    {
      v16 = material_ida;
      CodexIdByWeaponId = CodexExcelConfigMgr::getCodexIdByWeaponId(conf_mgr, material_ida);
      v15 = *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v15 != 0;
      v17 = (v15 != 0) & (unsigned __int8)((char)(((unsigned __int8)id & 7) + 3) >= v15);
      if ( (_BYTE)v17 )
        __asan_report_store4(id, v16, v17);
      *id = CodexIdByWeaponId;
      if ( *id )
      {
        v18 = (*(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000));
        if ( (_BYTE)v18 )
          __asan_report_store4(type, ((unsigned __int8)type & 7u) + 3, v18);
        *type = CODEX_WEAPON;
        return 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)v31);
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v31);
        reliquary_conf_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(
                               &v19->design_config.txt_config_mgr.reliquary_config_mgr,
                               material_ida);
        std::shared_ptr<Config>::~shared_ptr(v31);
        if ( reliquary_conf_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&reliquary_conf_ptr->rank_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&reliquary_conf_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&reliquary_conf_ptr->rank_level);
          }
          rank_level = reliquary_conf_ptr->rank_level;
          if ( *(_BYTE *)(((unsigned __int64)&reliquary_conf_ptr->set_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&reliquary_conf_ptr->set_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&reliquary_conf_ptr->set_id);
          }
          set_id = reliquary_conf_ptr->set_id;
          CodexIdByReliquarySuitIdAndLevel = CodexExcelConfigMgr::getCodexIdByReliquarySuitIdAndLevel(
                                               conf_mgr,
                                               set_id,
                                               rank_level);
          v22 = *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000);
          LOBYTE(set_id) = v22 != 0;
          v24 = (v22 != 0) & (unsigned __int8)((char)(((unsigned __int8)id & 7) + 3) >= v22);
          if ( (_BYTE)v24 )
            __asan_report_store4(id, set_id, v24);
          *id = CodexIdByReliquarySuitIdAndLevel;
          if ( *id )
          {
            v25 = (*(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000));
            if ( (_BYTE)v25 )
              __asan_report_store4(type, ((unsigned __int8)type & 7u) + 3, v25);
            *type = CODEX_RELIQUARY;
            return 0;
          }
          else
          {
            return -1;
          }
        }
        else
        {
          return -1;
        }
      }
    }
  }
};

// Line 950: range 000000001799E47A-000000001799EB4C
void __fastcall PlayerCodexComp::updateRecentViewedPushtips(PlayerCodexComp *const this, uint32_t codex_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  const std::set<unsigned int>::key_type *v8; // rax
  std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*>::reference v9; // rax
  _DWORD *v10; // rdx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::deque<unsigned int>::size_type v15; // rax
  std::less<unsigned int> __comp; // [rsp+26h] [rbp-18Ah] BYREF
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-189h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+28h] [rbp-188h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+38h] [rbp-178h] BYREF
  const CodexExcelConfigMgr *conf_mgr; // [rsp+40h] [rbp-170h]
  const std::set<unsigned int> *codex_id_set_ptr; // [rsp+48h] [rbp-168h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-160h] BYREF
  std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*> __position; // [rsp+60h] [rbp-150h] BYREF
  common::milog::MiLogStream v24; // [rsp+80h] [rbp-130h] BYREF
  char v25[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 12 group_id:953 64 4 12 codex_id:949 80 32 8 iter:966 144 48 16 codex_id_set:954";
  *(_QWORD *)(v2 + 16) = PlayerCodexComp::updateRecentViewedPushtips;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 64) = codex_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.codex_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  *(_DWORD *)(v2 + 48) = CodexExcelConfigMgr::getPushtipsGroupIdByCodexId(conf_mgr, *(_DWORD *)(v2 + 64));
  std::allocator<unsigned int>::allocator(&__a);
  LODWORD(__l._M_array) = *(_DWORD *)(v2 + 64);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)(v2 + 144),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
    &__comp,
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  if ( *(_DWORD *)(v2 + 48) )
  {
    codex_id_set_ptr = CodexExcelConfigMgr::findCodexIdSetByPushtipsGroupId(conf_mgr, *(_DWORD *)(v2 + 48));
    if ( !codex_id_set_ptr )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_codex_comp.cpp",
        "updateRecentViewedPushtips",
        960);
      v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v24,
             (const char (*)[40])"codex_id_set_ptr is nullptr, group_id: ");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
      v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])", codex_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v24);
      goto LABEL_25;
    }
    std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v2 + 144), codex_id_set_ptr);
  }
  std::deque<unsigned int>::begin((std::deque<unsigned int>::iterator *)(v2 + 80), &this->recent_viewed_pushtips_deque_);
  while ( 1 )
  {
    std::deque<unsigned int>::end((std::deque<unsigned int>::iterator *)&v24, &this->recent_viewed_pushtips_deque_);
    if ( !std::operator!=<unsigned int,unsigned int &,unsigned int *>(
            (const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *)(v2 + 80),
            (const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *)&v24) )
      break;
    __y._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 144))._M_node;
    v8 = std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::operator*((const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *const)(v2 + 80));
    __l._M_len = (std::initializer_list<unsigned int>::size_type)std::set<unsigned int>::find(
                                                                   (std::set<unsigned int> *const)(v2 + 144),
                                                                   v8)._M_node;
    if ( std::operator!=((const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__l._M_len, &__y) )
      break;
    std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::operator++((std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *const)(v2 + 80));
  }
  std::deque<unsigned int>::end((std::deque<unsigned int>::iterator *)&v24, &this->recent_viewed_pushtips_deque_);
  if ( !std::operator!=<unsigned int,unsigned int &,unsigned int *>(
          (const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *)(v2 + 80),
          (const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *)&v24) )
    goto LABEL_17;
  v9 = std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>::operator*((const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *const)(v2 + 80));
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  if ( *v10 == *(_DWORD *)(v2 + 64) )
    v11 = 1;
  else
LABEL_17:
    v11 = 0;
  if ( v11 )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "updateRecentViewedPushtips",
      975);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v24, (const char (*)[11])"codex_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v13, (const char (*)[18])"already been read");
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    std::deque<unsigned int>::end((std::deque<unsigned int>::iterator *)&v24, &this->recent_viewed_pushtips_deque_);
    if ( std::operator!=<unsigned int,unsigned int &,unsigned int *>(
           (const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *)(v2 + 80),
           (const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *)&v24) )
    {
      std::_Deque_iterator<unsigned int,unsigned int const&,unsigned int const*>::_Deque_iterator<std::_Deque_iterator<unsigned int,unsigned int &,unsigned int *>,void>(
        &__position,
        (const std::_Deque_iterator<unsigned int,unsigned int&,unsigned int*> *)(v2 + 80));
      std::deque<unsigned int>::erase(
        (std::deque<unsigned int>::iterator *)&v24,
        &this->recent_viewed_pushtips_deque_,
        __position);
    }
    std::deque<unsigned int>::push_back(
      &this->recent_viewed_pushtips_deque_,
      (const std::deque<unsigned int>::value_type *)(v2 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    HIDWORD(__l._M_array) = ConstValueExcelConfigMgr::getRecentViewedPushtipsCodexLimit(&v14->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    while ( 1 )
    {
      v15 = std::deque<unsigned int>::size(&this->recent_viewed_pushtips_deque_);
      if ( v15 <= HIDWORD(__l._M_array) )
        break;
      std::deque<unsigned int>::pop_front(&this->recent_viewed_pushtips_deque_);
    }
  }
LABEL_25:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
  if ( v25 == (char *)v2 )
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

// Line 993: range 000000001799EB4E-000000001799EB5F
const std::deque<unsigned int> *__cdecl PlayerCodexComp::getRecentViewedPushtipsDeque(PlayerCodexComp *const this)
{
  return &this->recent_viewed_pushtips_deque_;
};

// Line 999: range 000000001799EB60-000000001799EFE0
__int64 __fastcall PlayerCodexComp::setCodexPushtipsLastRead(
        PlayerCodexComp *const this,
        uint32_t codex_id,
        uint32_t type_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::map<unsigned int,CodexTypeData>::key_type __x; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 codex_id:998 48 4 11 type_id:998 64 8 25 codex_type_data_iter:1007";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::setCodexPushtipsLastRead;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = codex_id;
  *(_DWORD *)(v3 + 48) = type_id;
  if ( !PlayerCodexComp::isCodexIdValid(this, *(_DWORD *)(v3 + 32), CODEX_PUSHTIPS) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "setCodexPushtipsLastRead",
      1003);
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v20, (const char (*)[11])"codex_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])"is not a valid pushtips");
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
    goto LABEL_15;
  }
  __x = 6;
  *(std::map<unsigned int,CodexTypeData>::iterator *)(v3 + 64) = std::map<unsigned int,CodexTypeData>::find(
                                                                   &this->codex_data_map_,
                                                                   &__x);
  __y._M_node = std::map<unsigned int,CodexTypeData>::end(&this->codex_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "setCodexPushtipsLastRead",
      1010);
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v20, (const char (*)[6])"type:");
    __x = 6;
    v10 = common::milog::MiLogStream::operator<<<proto::CodexType,(proto::CodexType*)0>(
            v9,
            (const proto::CodexType *)&__x);
    v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v10,
            (const char (*)[24])" has no record, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0xFFFFFFFFLL;
    goto LABEL_15;
  }
  v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,CodexTypeData> > *const)(v3 + 64));
  if ( !CodexTypeData::isContainsCodex(&v12->second, *(_DWORD *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_codex_comp.cpp",
      "setCodexPushtipsLastRead",
      1016);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v20, (const char (*)[6])"type:");
    __x = 6;
    v14 = common::milog::MiLogStream::operator<<<proto::CodexType,(proto::CodexType*)0>(
            v13,
            (const proto::CodexType *)&__x);
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" codex_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v16, (const char (*)[26])off_2625D660);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  std::pair<unsigned int,unsigned int>::pair<unsigned int &,unsigned int &,true>(
    (std::pair<unsigned int,unsigned int> *const)&__y,
    (unsigned int *)(v3 + 32),
    (unsigned int *)(v3 + 48));
  std::pair<unsigned int,unsigned int>::operator=(
    &this->last_read_pushtips_pair_,
    (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__y);
  result = 0LL;
LABEL_15:
  if ( v21 == (char *)v3 )
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

// Line 1026: range 000000001799EFE2-000000001799F5EE
void __cdecl PlayerCodexComp::tryReadPushTipsAndTakeReward(
        PlayerCodexComp *const this,
        std::vector<unsigned int> *valid_push_tips_codex_id_vec,
        proto::ViewCodexRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  PlayerWatcherComp *WatcherComp; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerWatcherComp *v11; // rax
  common::milog::MiLogStream *v12; // r14
  google::protobuf::RepeatedField<unsigned int> *v13; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const CodexExcelConfigMgr *codex_config_mgr; // [rsp+38h] [rbp-118h]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-110h]
  const data::PushTipsCodexExcelConfig *codex_config_ptr; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 codex_id:1035 48 4 17 push_tips_id:1044 64 24 25 reward_push_tips_vec:1033";
  *(_QWORD *)(v3 + 16) = PlayerCodexComp::tryReadPushTipsAndTakeReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( std::vector<unsigned int>::empty(valid_push_tips_codex_id_vec) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_codex_comp.cpp",
      "tryReadPushTipsAndTakeReward",
      1030);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v22,
      (const char (*)[35])"empty valid_push_tips_codex_id_vec");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    codex_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.codex_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v20);
    __for_range = valid_push_tips_codex_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(valid_push_tips_codex_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(valid_push_tips_codex_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v3 + 32) = *v7;
      codex_config_ptr = data::CodexExcelConfigMgrBase::findPushTipsCodexExcelConfig(
                           codex_config_mgr,
                           *(_DWORD *)(v3 + 32));
      if ( codex_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&codex_config_ptr->push_tip_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)codex_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&codex_config_ptr->push_tip_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&codex_config_ptr->push_tip_id);
        }
        *(_DWORD *)(v3 + 48) = codex_config_ptr->push_tip_id;
        std::vector<unsigned int>::emplace_back<unsigned int &>(
          (std::vector<unsigned int> *const)(v3 + 64),
          (unsigned int *)(v3 + 48),
          (unsigned int *)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        if ( PlayerWatcherComp::onPushTipsReadFinish(WatcherComp, *(_DWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_codex_comp.cpp",
            "tryReadPushTipsAndTakeReward",
            1049);
          v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  &v22,
                  (const char (*)[44])"onPushTipsReadFinish failed, push_tips_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          proto::ViewCodexRsp::add_push_tips_read_list(rsp_0, *(_DWORD *)(v3 + 48));
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_codex_comp.cpp",
          "tryReadPushTipsAndTakeReward",
          1041);
        v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
               &v21,
               (const char (*)[48])"findPushTipsCodexExcelConfig failed, codex_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = Player::getWatcherComp(this->player_);
    if ( PlayerWatcherComp::takePushTipsReward(v11, (const std::vector<unsigned int> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_codex_comp.cpp",
        "tryReadPushTipsAndTakeReward",
        1058);
      v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v22,
              (const char (*)[33])"takePushTipsReward failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      v13 = proto::ViewCodexRsp::mutable_push_tips_reward_list(rsp_0);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v3 + 64),
        v13);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  }
  if ( v23 == (char *)v3 )
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
