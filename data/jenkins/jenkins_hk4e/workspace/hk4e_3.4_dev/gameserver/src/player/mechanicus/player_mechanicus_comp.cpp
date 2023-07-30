// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mechanicus/player_mechanicus_comp.cpp

// Line 31: range 0000000017589C84-000000001758A0BE
int32_t __cdecl MechanicusInfo::toClient(const MechanicusInfo *const this, proto::MechanicusInfo *proto_mechanicus)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // bl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-58h]
  const std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-50h]
  const std::set<unsigned int> *__for_range_1; // [rsp+38h] [rbp-48h]
  const std::pair<unsigned int const,unsigned int> *v14; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+50h] [rbp-30h]
  proto::Uint32Pair *level_pair; // [rsp+58h] [rbp-28h]
  std::shared_ptr<Config> v18[2]; // [rsp+60h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::MechanicusInfo::set_mechanicus_id(proto_mechanicus, this->mechanicus_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin);
  }
  proto::MechanicusInfo::set_coin(proto_mechanicus, this->coin);
  __for_range = &this->gear_level_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->gear_level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->gear_level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    gear_id = std::get<0ul,unsigned int const,unsigned int>(v14);
    level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v14);
    level_pair = proto::MechanicusInfo::add_gear_level_pair_list(proto_mechanicus);
    if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gear_id);
    }
    proto::Uint32Pair::set_key(level_pair, *gear_id);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    proto::Uint32Pair::set_value(level_pair, *level);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->open_sequence_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->open_sequence_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::MechanicusInfo::add_open_sequence_id_list(proto_mechanicus, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_teach_dungeon);
  proto::MechanicusInfo::set_is_finish_teach_dungeon(proto_mechanicus, this->is_finish_teach_dungeon);
  __for_range_1 = &this->finish_difficult_level_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finish_difficult_level_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::MechanicusInfo::add_finish_difficult_level_list(proto_mechanicus, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v18);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v18);
  v7 = !FeatureSwitchMgr::isMechanicusPunishClosed(&v6->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(v18);
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->punish_over_time);
    }
    proto::MechanicusInfo::set_punish_over_time(proto_mechanicus, this->punish_over_time);
  }
  return 0;
};

// Line 58: range 000000001758A0C0-000000001758A593
int32_t __cdecl MechanicusInfo::fromBin(MechanicusInfo *const this, const proto::MechanicusBin *bin_mechanicus)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator *p_for_end; // rsi
  google::protobuf::uint32 v11; // r14d
  char *v12; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v13; // rax
  google::protobuf::uint32 *v14; // rdx
  char v15; // cl
  unsigned int v16; // eax
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rdx
  char v20; // al
  int32_t result; // eax
  const proto::MechanicusBin *bin_mechanicusa; // [rsp+10h] [rbp-D0h]
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-B0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+38h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range; // [rsp+40h] [rbp-A0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+48h] [rbp-98h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+50h] [rbp-90h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+58h] [rbp-88h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+60h] [rbp-80h]
  const proto::Uint32PairBin *level_bin; // [rsp+68h] [rbp-78h]
  char v33[112]; // [rsp+70h] [rbp-70h] BYREF

  bin_mechanicusa = bin_mechanicus;
  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 difficult_level:76";
  *(_QWORD *)(v2 + 16) = MechanicusInfo::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::MechanicusBin::mechanicus_id(bin_mechanicus);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin_mechanicus) = v6 != 0;
    __asan_report_store4(this, bin_mechanicus, v5);
  }
  this->mechanicus_id = v5;
  v7 = proto::MechanicusBin::coin(bin_mechanicusa);
  v8 = *(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000);
  LOBYTE(bin_mechanicus) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->coin, bin_mechanicus, v9);
  this->coin = v7;
  std::map<unsigned int,unsigned int>::clear(&this->gear_level_map);
  __for_range = proto::MechanicusBin::gear_level_pair_list(bin_mechanicusa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*(&__for_begin);
    v11 = proto::Uint32PairBin::value(level_bin);
    *(_DWORD *)(v2 + 32) = proto::Uint32PairBin::key(level_bin);
    v12 = (char *)(v2 + 32);
    v13 = std::map<unsigned int,unsigned int>::operator[](
            &this->gear_level_map,
            (std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v14 = v13;
    v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(v13, v12, v13);
    }
    *v14 = v11;
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->open_sequence_id_set);
  __for_range_0 = proto::MechanicusBin::open_sequence_id_list(bin_mechanicusa);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    p_for_end = (google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator *)(v2 + 32);
    std::set<unsigned int>::insert(&this->open_sequence_id_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  LOBYTE(v16) = proto::MechanicusBin::is_finish_teach_dungeon(bin_mechanicusa);
  v17 = v16;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_finish_teach_dungeon >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(p_for_end) = v18 != 0;
    __asan_report_store1(&this->is_finish_teach_dungeon, p_for_end, v17);
  }
  this->is_finish_teach_dungeon = v17;
  std::set<unsigned int>::clear(&this->finish_difficult_level_set);
  __for_range_1 = proto::MechanicusBin::finish_difficult_level_list(bin_mechanicusa);
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
    p_for_end = (google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::const_iterator *)(v2 + 32);
    std::set<unsigned int>::insert(
      &this->finish_difficult_level_set,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_1;
  }
  v19 = proto::MechanicusBin::punish_over_time(bin_mechanicusa);
  v20 = *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_for_end) = v20 != 0;
    __asan_report_store4(&this->punish_over_time, p_for_end, v19);
  }
  this->punish_over_time = v19;
  result = 0;
  if ( v33 == (char *)v2 )
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

// Line 85: range 000000001758A594-000000001758A964
int32_t __cdecl MechanicusInfo::toBin(const MechanicusInfo *const this, proto::MechanicusBin *bin_mechanicus)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-38h]
  const std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-30h]
  const std::set<unsigned int> *__for_range_1; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+50h] [rbp-10h]
  proto::Uint32PairBin *level_pair; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::MechanicusBin::set_mechanicus_id(bin_mechanicus, this->mechanicus_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coin);
  }
  proto::MechanicusBin::set_coin(bin_mechanicus, this->coin);
  __for_range = &this->gear_level_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->gear_level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->gear_level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    gear_id = std::get<0ul,unsigned int const,unsigned int>(v12);
    level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
    level_pair = proto::MechanicusBin::add_gear_level_pair_list(bin_mechanicus);
    if ( *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gear_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gear_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gear_id);
    }
    proto::Uint32PairBin::set_key(level_pair, *gear_id);
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(level);
    }
    proto::Uint32PairBin::set_value(level_pair, *level);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->open_sequence_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->open_sequence_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::MechanicusBin::add_open_sequence_id_list(bin_mechanicus, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_teach_dungeon);
  proto::MechanicusBin::set_is_finish_teach_dungeon(bin_mechanicus, this->is_finish_teach_dungeon);
  __for_range_1 = &this->finish_difficult_level_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finish_difficult_level_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::MechanicusBin::add_finish_difficult_level_list(bin_mechanicus, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_over_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->punish_over_time);
  }
  proto::MechanicusBin::set_punish_over_time(bin_mechanicus, this->punish_over_time);
  return 0;
};

// Line 108: range 000000001758A966-000000001758AA8F
int32_t __cdecl PlayerMechanicusComp::fromBin(
        PlayerMechanicusComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  const proto::PlayerMechanicusCompBin *proto_comp; // [rsp+20h] [rbp-40h]
  const proto::MechanicusBin *mechanicus_bin; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mechanicus_bin(player_data_bin);
  mechanicus_bin = proto::PlayerMechanicusCompBin::cur_mechanicus_bin(proto_comp);
  if ( !MechanicusInfo::fromBin(&this->cur_mechanicus_, mechanicus_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "fromBin",
    113);
  v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v8, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v3, (const char (*)[15])" fromBin fails");
  common::milog::MiLogStream::~MiLogStream(&v8);
  return -1;
};

// Line 120: range 000000001758AA90-000000001758ABB9
int32_t __cdecl PlayerMechanicusComp::toBin(PlayerMechanicusComp *const this, proto::PlayerDataBin *player_data_bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  proto::PlayerMechanicusCompBin *proto_comp; // [rsp+20h] [rbp-40h]
  proto::MechanicusBin *mechanicus_bin; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_mechanicus_bin(player_data_bin);
  mechanicus_bin = proto::PlayerMechanicusCompBin::mutable_cur_mechanicus_bin(proto_comp);
  if ( !MechanicusInfo::toBin(&this->cur_mechanicus_, mechanicus_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "toBin",
    125);
  v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v8, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v3, (const char (*)[13])" toBin fails");
  common::milog::MiLogStream::~MiLogStream(&v8);
  return -1;
};

// Line 132: range 000000001758ABBA-000000001758ADE9
int32_t __cdecl PlayerMechanicusComp::init(PlayerMechanicusComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t result; // eax
  std::weak_ptr<PlayerMechanicusComp> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<PlayerMechanicusComp> v6; // [rsp+20h] [rbp-B0h] BYREF
  std::weak_ptr<Observer> v7; // [rsp+30h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 self_ptr:133 64 16 12 self_wtr:134";
  *(_QWORD *)(v1 + 16) = PlayerMechanicusComp::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerMechanicusComp>((PlayerMechanicusComp *)(v1 + 32));
  std::weak_ptr<PlayerMechanicusComp>::weak_ptr<PlayerMechanicusComp,void>(
    (std::weak_ptr<PlayerMechanicusComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerMechanicusComp> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<PlayerMechanicusComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerMechanicusComp>::weak_ptr(&v6, (const std::weak_ptr<PlayerMechanicusComp> *)(v1 + 64));
  PlayerEventComp::registerObserver<PlayerMechanicusComp,MechanicusDungeonSettleEvent>(
    (PlayerEventComp *const)&v7,
    p_this_wtr,
    (void (*)(PlayerMechanicusComp *, const MechanicusDungeonSettleEvent *))&v6);
  std::weak_ptr<Observer>::~weak_ptr(&v7);
  std::weak_ptr<PlayerMechanicusComp>::~weak_ptr(&v6);
  std::weak_ptr<PlayerMechanicusComp>::~weak_ptr((std::weak_ptr<PlayerMechanicusComp> *const)(v1 + 64));
  std::shared_ptr<PlayerMechanicusComp>::~shared_ptr((std::shared_ptr<PlayerMechanicusComp> *const)(v1 + 32));
  result = 0;
  if ( v8 == (char *)v1 )
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
  return result;
};

// Line 140: range 000000001758ADEA-000000001758B7A8
void __cdecl PlayerMechanicusComp::onMechanicusDungeonSettle(
        PlayerMechanicusComp *const this,
        const MechanicusDungeonSettleEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  TreatreMechanicusExcelConfigMgr *v11; // rcx
  common::milog::MiLogStream *v12; // r12
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  bool isTeachDifficultLevel; // r14
  __int64 v23; // rsi
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v32; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v33; // [rsp+30h] [rbp-90h] BYREF
  char v34[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 difficult_level:157";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::onMechanicusDungeonSettle;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(char *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_success);
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_mechanicus_);
    }
    if ( this->cur_mechanicus_.mechanicus_id )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v32);
      p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.mechanicus_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_mechanicus_);
      }
      mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                                p_mechanicus_config_mgr,
                                this->cur_mechanicus_.mechanicus_id);
      std::shared_ptr<Config>::~shared_ptr(&v32);
      if ( mechanicus_config_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v11 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.mechanicus_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->dungeon_id);
        }
        *(_DWORD *)(v2 + 32) = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(v11, event->dungeon_id);
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( *(_DWORD *)(v2 + 32) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/mechanicus/player_mechanicus_comp.cpp",
            "onMechanicusDungeonSettle",
            163);
          v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v33, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
          v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v17,
                  (const char (*)[17])" finish dungeon:");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &event->dungeon_id);
          v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v33);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v32);
          v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
          isTeachDifficultLevel = TreatreMechanicusExcelConfigMgr::isTeachDifficultLevel(
                                    &v21->design_config.txt_config_mgr.mechanicus_config_mgr,
                                    *(_DWORD *)(v2 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v32);
          if ( isTeachDifficultLevel )
          {
            v23 = (((_BYTE)mechanicus_config_ptr + 52) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)mechanicus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&mechanicus_config_ptr->teach_difficult_level);
            }
            if ( mechanicus_config_ptr->teach_difficult_level == *(_DWORD *)(v2 + 32) )
            {
              if ( *(char *)(((unsigned __int64)&this->cur_mechanicus_.is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(
                  &this->cur_mechanicus_.is_finish_teach_dungeon,
                  v23,
                  &this->cur_mechanicus_.is_finish_teach_dungeon);
              this->cur_mechanicus_.is_finish_teach_dungeon = 1;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v33,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/mechanicus/player_mechanicus_comp.cpp",
                "onMechanicusDungeonSettle",
                173);
              v24 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v33, (const char (*)[5])"uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
              v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      v25,
                      (const char (*)[31])" not support this teach level:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream(&v33);
            }
          }
          else
          {
            if ( *(_DWORD *)(v2 + 32) > 1u )
            {
              val = *(_DWORD *)(v2 + 32) - 1;
              if ( !std::set<unsigned int>::count(&this->cur_mechanicus_.finish_difficult_level_set, &val) )
              {
                common::milog::MiLogStream::create(
                  &v33,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/mechanicus/player_mechanicus_comp.cpp",
                  "onMechanicusDungeonSettle",
                  181);
                v28 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v33, (const char (*)[5])"uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
                common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v29,
                  (const char (*)[29])" prev difficut not finished!");
                common::milog::MiLogStream::~MiLogStream(&v33);
              }
            }
            std::set<unsigned int>::insert(
              &this->cur_mechanicus_.finish_difficult_level_set,
              (const std::set<unsigned int>::value_type *)(v2 + 32));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mechanicus/player_mechanicus_comp.cpp",
            "onMechanicusDungeonSettle",
            160);
          v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v33, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v13,
                  (const char (*)[28])" findDungeonDifficultLevel:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &event->dungeon_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "onMechanicusDungeonSettle",
          153);
        v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v33,
                (const char (*)[33])"findMechanicusExcelConfig fails:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v10,
          &this->cur_mechanicus_.mechanicus_id);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "onMechanicusDungeonSettle",
        147);
      v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v33, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v6,
             (const char (*)[21])" mechanicus dungeon:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->dungeon_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v8,
        (const char (*)[33])" settle, but mechanicus not open");
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
  }
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 189: range 000000001758B7AA-000000001758B885
int32_t __cdecl PlayerMechanicusComp::toClient(
        const PlayerMechanicusComp *const this,
        proto::MechanicusInfo *proto_mechanicus)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool isMechanicusClosed; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( !this->cur_mechanicus_.mechanicus_id )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isMechanicusClosed = FeatureSwitchMgr::isMechanicusClosed(&v3->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( isMechanicusClosed )
    return 7135;
  else
    return MechanicusInfo::toClient(&this->cur_mechanicus_, proto_mechanicus);
};

// Line 203: range 000000001758B886-000000001758BF79
__int64 __fastcall PlayerMechanicusComp::openMechanicus(PlayerMechanicusComp *const this, uint32_t mechanicus_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  MechanicusInfo *v14; // rsi
  uint32_t v15; // ecx
  char v16; // al
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<OpenMechanicusEvent> *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-17Ch] BYREF
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+18h] [rbp-178h]
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-170h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-160h] BYREF
  MechanicusInfo v27; // [rsp+50h] [rbp-140h] BYREF
  char v28[144]; // [rsp+100h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 mechanicus_id:202 64 16 13 event_ptr:227";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::openMechanicus;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = mechanicus_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                            &v5->design_config.txt_config_mgr.mechanicus_config_mgr,
                            *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( !mechanicus_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "openMechanicus",
      207);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v26,
           (const char (*)[48])"findMechanicusExcelConfig fails, mechanicus_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v26);
    v7 = -1;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    if ( this->cur_mechanicus_.mechanicus_id == *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "openMechanicus",
        215);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v9,
              (const char (*)[29])" already open mechanicus_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v26);
      v7 = 0;
      goto LABEL_25;
    }
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "openMechanicus",
      220);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            v12,
            (const char (*)[32])" force close cur mechanicus id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->cur_mechanicus_.mechanicus_id);
    common::milog::MiLogStream::~MiLogStream(&v26);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_mechanicus_);
    }
    PlayerMechanicusComp::closeMechanicus(this, this->cur_mechanicus_.mechanicus_id);
  }
  memset(&v27, 0, sizeof(v27));
  MechanicusInfo::MechanicusInfo(&v27);
  v14 = &v27;
  MechanicusInfo::operator=(&this->cur_mechanicus_, &v27);
  MechanicusInfo::~MechanicusInfo(&v27);
  v15 = *(_DWORD *)(v2 + 48);
  v16 = *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v14) = v16 != 0;
    __asan_report_store4(&this->cur_mechanicus_, v14, &this->cur_mechanicus_);
  }
  this->cur_mechanicus_.mechanicus_id = v15;
  common::tools::perf::make_shared<OpenMechanicusEvent,unsigned int &>(
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  v18 = std::move<std::shared_ptr<OpenMechanicusEvent> &>((std::shared_ptr<OpenMechanicusEvent> *)(v2 + 64));
  std::shared_ptr<BaseEvent>::shared_ptr<OpenMechanicusEvent,void>((std::shared_ptr<BaseEvent> *const)&v25, v18);
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v25);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v25);
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "openMechanicus",
    230);
  v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
  v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v20, (const char (*)[17])" openMechanicus ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v26);
  v7 = 0;
  std::shared_ptr<OpenMechanicusEvent>::~shared_ptr((std::shared_ptr<OpenMechanicusEvent> *const)(v2 + 64));
LABEL_25:
  result = v7;
  if ( v28 == (char *)v2 )
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

// Line 235: range 000000001758BF7A-000000001758C2F5
__int64 __fastcall PlayerMechanicusComp::closeMechanicus(PlayerMechanicusComp *const this, uint32_t mechanicus_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+1Ch] [rbp-144h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-140h] BYREF
  MechanicusInfo v16; // [rsp+40h] [rbp-120h] BYREF
  char v17[112]; // [rsp+F0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 mechanicus_id:234";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::closeMechanicus;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = mechanicus_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id == *(_DWORD *)(v2 + 32) )
  {
    memset(&v16, 0, sizeof(v16));
    MechanicusInfo::MechanicusInfo(&v16);
    MechanicusInfo::operator=(&this->cur_mechanicus_, &v16);
    MechanicusInfo::~MechanicusInfo(&v16);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "closeMechanicus",
      244);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v15, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v12, (const char (*)[18])" closeMechanicus ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "closeMechanicus",
      238);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v15, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])" cur mechanicus_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v7,
           &this->cur_mechanicus_.mechanicus_id);
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v8, (const char (*)[18])" not match param:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
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

// Line 249: range 000000001758C2F6-000000001758CC82
__int64 __fastcall PlayerMechanicusComp::openSequence(PlayerMechanicusComp *const this, uint32_t sequence_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  bool v12; // r14
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v22; // rax
  _DWORD *v23; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t v25; // edx
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __x; // [rsp+28h] [rbp-E8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+30h] [rbp-E0h] BYREF
  const data::MechanicusSequenceExcelConfig *sequence_config_ptr; // [rsp+38h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const data::MechanicusGearLevelUpExcelConfig *levelup_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v36; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-B0h] BYREF
  char v38[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 gear_id:276 64 4 15 sequence_id:248";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::openSequence;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = sequence_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
    sequence_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusSequenceExcelConfig(
                            &v8->design_config.txt_config_mgr.mechanicus_config_mgr,
                            *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v36);
    if ( sequence_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.mechanicus_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_mechanicus_);
      }
      v12 = !TreatreMechanicusExcelConfigMgr::isSequenceIdBelongMechanicus(
               p_mechanicus_config_mgr,
               *(_DWORD *)(v2 + 64),
               this->cur_mechanicus_.mechanicus_id);
      std::shared_ptr<Config>::~shared_ptr(&v36);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "openSequence",
          263);
        v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v2 + 48));
        v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])" ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v16,
                (const char (*)[31])" isSequenceIdBelongMechanicus:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                &this->cur_mechanicus_.mechanicus_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream(&v37);
        result = 0xFFFFFFFFLL;
      }
      else if ( std::set<unsigned int>::count(
                  &this->cur_mechanicus_.open_sequence_id_set,
                  (const std::set<unsigned int>::key_type *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "openSequence",
          268);
        v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v2 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                v20,
                (const char (*)[27])" already open sequence_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v37);
        result = 0LL;
      }
      else
      {
        std::set<unsigned int>::insert(
          &this->cur_mechanicus_.open_sequence_id_set,
          (const std::set<unsigned int>::value_type *)(v2 + 64));
        __for_range = &sequence_config_ptr->open_gear_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&sequence_config_ptr->open_gear_list)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&sequence_config_ptr->open_gear_list)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v22 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v23 = v22;
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v22);
          }
          *(_DWORD *)(v2 + 48) = *v23;
          __y._M_node = std::map<unsigned int,unsigned int>::end(&this->cur_mechanicus_.gear_level_map)._M_node;
          __x._M_node = std::map<unsigned int,unsigned int>::find(
                          &this->cur_mechanicus_.gear_level_map,
                          (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48))._M_node;
          if ( !std::operator!=(&__x, &__y) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v36);
            v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
            levelup_config_ptr = TreatreMechanicusExcelConfigMgr::findGearLevelupConfig(
                                   &v24->design_config.txt_config_mgr.mechanicus_config_mgr,
                                   *(_DWORD *)(v2 + 48),
                                   1u);
            std::shared_ptr<Config>::~shared_ptr(&v36);
            if ( levelup_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->gear_level_up_money >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)levelup_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&levelup_config_ptr->gear_level_up_money >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&levelup_config_ptr->gear_level_up_money);
              }
              if ( !levelup_config_ptr->gear_level_up_money )
              {
                v25 = *(_DWORD *)(v2 + 48);
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->cur_mechanicus_);
                }
                PlayerMechanicusComp::unlockGear(this, this->cur_mechanicus_.mechanicus_id, v25);
              }
            }
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "openSequence",
          289);
        v26 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 48));
        v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v27, (const char (*)[15])" openSequence:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v37);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "openSequence",
        258);
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v37,
             (const char (*)[47])"findMechanicusSequenceExcelConfig sequence_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v37);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "openSequence",
      252);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v37, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])" mechanicus_id is 0!");
    common::milog::MiLogStream::~MiLogStream(&v37);
    result = 0xFFFFFFFFLL;
  }
  if ( v38 == (char *)v2 )
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

// Line 295: range 000000001758CC84-000000001758CCE6
uint32_t __cdecl PlayerMechanicusComp::getUnlockGearNum(const PlayerMechanicusComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
    return std::map<unsigned int,unsigned int>::size(&this->cur_mechanicus_.gear_level_map);
  else
    return 0;
};

// Line 305: range 000000001758CCE8-000000001758CE8C
uint32_t __cdecl PlayerMechanicusComp::getGearLevelNum(const PlayerMechanicusComp *const this, uint32_t min_level)
{
  std::pair<unsigned int const,unsigned int> *v3; // rax
  std::pair<unsigned int const,unsigned int> *v4; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  uint32_t num; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *gear_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *gear_level; // [rsp+40h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( !this->cur_mechanicus_.mechanicus_id )
    return 0;
  num = 0;
  __for_range = &this->cur_mechanicus_.gear_level_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->cur_mechanicus_.gear_level_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->cur_mechanicus_.gear_level_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v4 = v3;
    if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v3, 8LL);
    }
    __in = *v4;
    gear_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
    v5 = std::get<1ul,unsigned int const,unsigned int>(&__in);
    gear_level = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    if ( min_level <= *gear_level )
      ++num;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return num;
};

// Line 322: range 000000001758CE8E-000000001758D97D
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerMechanicusComp::unlockGear(
        PlayerMechanicusComp *const this,
        uint32_t mechanicus_id,
        uint32_t gear_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int M_allocated_capacity_high; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isMechanicusClosed; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  char *v20; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  _DWORD *v22; // rdx
  char v23; // cl
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<MechanicusUnlockGearEvent> *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  Player *v30; // r14
  __int64 result; // rax
  std::string v32; // [rsp+0h] [rbp-170h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v34; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-130h] BYREF
  char v36[272]; // [rsp+60h] [rbp-110h] BYREF

  v32._M_string_length = (std::string::size_type)this;
  v32._M_dataplus._M_p = (std::string::pointer)__PAIR64__(mechanicus_id, gear_id);
  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 1 10 holder:359 64 4 17 mechanicus_id:321 80 4 11 gear_id:321 96 8 8 iter:339 128 8 10 reas"
                        "on:363 160 16 13 event_ptr:374 192 16 11 log_ptr:378";
  *(_QWORD *)(v3 + 16) = PlayerMechanicusComp::unlockGear;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 64) = HIDWORD(v32._M_dataplus._M_p);
  *(_DWORD *)(v3 + 80) = v32._M_dataplus._M_p;
  if ( *(_BYTE *)(((v32._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v32._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v32._M_string_length + 32);
  }
  if ( *(_DWORD *)(v32._M_string_length + 32) && *(_DWORD *)(v32._M_string_length + 32) == *(_DWORD *)(v3 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
    isMechanicusClosed = FeatureSwitchMgr::isMechanicusClosed(&v12->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
    if ( isMechanicusClosed )
    {
      M_allocated_capacity_high = 7135;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
      *(&v32._anon_0._M_allocated_capacity + 1) = (std::string::size_type)TreatreMechanicusExcelConfigMgr::findGearLevelupConfig(
                                                                            &v14->design_config.txt_config_mgr.mechanicus_config_mgr,
                                                                            *(_DWORD *)(v3 + 80),
                                                                            1u);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
      if ( *(&v32._anon_0._M_allocated_capacity + 1) )
      {
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                        (std::map<unsigned int,unsigned int> *const)(v32._M_string_length + 40),
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v32._M_string_length + 40));
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128)) )
        {
          M_allocated_capacity_high = 7121;
        }
        else
        {
          HIDWORD(v32._anon_0._M_allocated_capacity) = PlayerMechanicusComp::checkGearLevelSupported(
                                                         (const PlayerMechanicusComp *const)v32._M_string_length,
                                                         *(_DWORD *)(v3 + 80),
                                                         1u);
          if ( HIDWORD(v32._anon_0._M_allocated_capacity) )
          {
            M_allocated_capacity_high = HIDWORD(v32._anon_0._M_allocated_capacity);
          }
          else
          {
            if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
              && (char)(((v32._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity
                                                                                      + 1)
                                                                                    + 20) >> 3)
                                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4(*(&v32._anon_0._M_allocated_capacity + 1) + 20);
            }
            if ( *(_DWORD *)(*(&v32._anon_0._M_allocated_capacity + 1) + 20)
              && (HIDWORD(v32._anon_0._M_allocated_capacity) = PlayerMechanicusComp::checkSubCoin(
                                                                 (const PlayerMechanicusComp *const)v32._M_string_length,
                                                                 *(_DWORD *)(*(&v32._anon_0._M_allocated_capacity + 1)
                                                                           + 20))) != 0 )
            {
              M_allocated_capacity_high = HIDWORD(v32._anon_0._M_allocated_capacity);
            }
            else
            {
              if ( *(_BYTE *)(((v32._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              BasicComp = Player::getBasicComp(*(Player *const *)(v32._M_string_length + 24));
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v35, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xC45u, v32);
              std::string::~string(&v35);
              if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
                && (char)(((v32._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity
                                                                                        + 1)
                                                                                      + 20) >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(*(&v32._anon_0._M_allocated_capacity + 1) + 20);
              }
              if ( !*(_DWORD *)(*(&v32._anon_0._M_allocated_capacity + 1) + 20) )
                goto LABEL_35;
              SubItemReason::SubItemReason((SubItemReason *const)(v3 + 128), ACTION_REASON_MECHANICUS_LEVELUP_GEAR);
              if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
                && (char)(((v32._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity
                                                                                        + 1)
                                                                                      + 20) >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(*(&v32._anon_0._M_allocated_capacity + 1) + 20);
              }
              if ( PlayerMechanicusComp::subCoin(
                     (PlayerMechanicusComp *const)v32._M_string_length,
                     *(_DWORD *)(*(&v32._anon_0._M_allocated_capacity + 1) + 20),
                     (const SubItemReason *)(v3 + 128)) )
              {
                common::milog::MiLogStream::create(
                  &v35,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/mechanicus/player_mechanicus_comp.cpp",
                  "unlockGear",
                  366);
                v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v35, (const char (*)[5])"uid:");
                if ( *(_BYTE *)(((v32._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)v32._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(v32._M_string_length + 24));
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v18,
                        (const unsigned int *)&v32._anon_0);
                common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v19,
                  (const char (*)[15])" subCoin fails");
                common::milog::MiLogStream::~MiLogStream(&v35);
                M_allocated_capacity_high = -1;
              }
              else
              {
LABEL_35:
                v20 = (char *)(v3 + 80);
                v21 = std::map<unsigned int,unsigned int>::operator[](
                        (std::map<unsigned int,unsigned int> *const)(v32._M_string_length + 40),
                        (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
                v22 = v21;
                v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
                if ( v23 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v23 )
                {
                  LOBYTE(v20) = v23 != 0;
                  __asan_report_store4(v21, v20, v21);
                }
                *v22 = 1;
                common::tools::perf::make_shared<MechanicusUnlockGearEvent,unsigned int &>(
                  (unsigned int *)(v3 + 160),
                  (unsigned int *)(v3 + 80));
                if ( *(_BYTE *)(((v32._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                EventComp = Player::getEventComp(*(Player *const *)(v32._M_string_length + 24));
                v25 = std::move<std::shared_ptr<MechanicusUnlockGearEvent> &>((std::shared_ptr<MechanicusUnlockGearEvent> *)(v3 + 160));
                std::shared_ptr<BaseEvent>::shared_ptr<MechanicusUnlockGearEvent,void>(
                  (std::shared_ptr<BaseEvent> *const)&v34,
                  v25);
                PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v34);
                std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v34);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyMechanicusLevelupGear>();
                v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                proto_log::PlayerLogBodyMechanicusLevelupGear::set_mechanicus_id(v26, *(_DWORD *)(v3 + 64));
                v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                proto_log::PlayerLogBodyMechanicusLevelupGear::set_gear_id(v27, *(_DWORD *)(v3 + 80));
                v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                proto_log::PlayerLogBodyMechanicusLevelupGear::set_after_level(v28, 1u);
                v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                if ( *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
                  && (char)(((v32._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v32._anon_0._M_allocated_capacity
                                                                                          + 1)
                                                                                        + 20) >> 3)
                                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(*(&v32._anon_0._M_allocated_capacity + 1) + 20);
                }
                proto_log::PlayerLogBodyMechanicusLevelupGear::set_cost_coin(
                  v29,
                  *(_DWORD *)(*(&v32._anon_0._M_allocated_capacity + 1) + 20));
                if ( *(_BYTE *)(((v32._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v30 = *(Player **)(v32._M_string_length + 24);
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v34, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear,void>(
                  &p_body_ptr,
                  (const std::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear> *)(v3 + 192));
                Player::printStatLog(v30, &p_body_ptr, &v34, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v34);
                M_allocated_capacity_high = 0;
                std::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear> *const)(v3 + 192));
                std::shared_ptr<MechanicusUnlockGearEvent>::~shared_ptr((std::shared_ptr<MechanicusUnlockGearEvent> *const)(v3 + 160));
              }
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "unlockGear",
          336);
        v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v35,
                (const char (*)[23])"findGearLevelupConfig ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])",1 fails");
        common::milog::MiLogStream::~MiLogStream(&v35);
        M_allocated_capacity_high = -1;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "unlockGear",
      325);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v35, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((v32._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)v32._anon_0._M_local_buf = Player::getUid(*(const Player *const *)(v32._M_string_length + 24));
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)&v32._anon_0);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           v7,
           (const char (*)[32])" cur_mechanicus_.mechanicus_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v8,
           (const unsigned int *)(v32._M_string_length + 32));
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v9,
            (const char (*)[22])" param mechanicus_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v35);
    M_allocated_capacity_high = 7120;
  }
  result = M_allocated_capacity_high;
  if ( v36 == (char *)v3 )
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
  return result;
};

// Line 388: range 000000001758D97E-000000001758E652
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerMechanicusComp::levelupGear(
        PlayerMechanicusComp *const this,
        uint32_t mechanicus_id,
        uint32_t gear_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isMechanicusClosed; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v14; // rdx
  unsigned int *p_second; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  int v25; // r14d
  char *v26; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v27; // rax
  _DWORD *v28; // rdx
  char v29; // cl
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<MechanicusLevelupGearEvent> *v31; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rcx
  Player *v36; // r14
  __int64 result; // rax
  std::string v38; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF
  uint32_t cur_level; // [rsp+20h] [rbp-160h]
  int32_t ret; // [rsp+24h] [rbp-15Ch]
  const data::MechanicusGearLevelUpExcelConfig *gear_levelup_config_ptr; // [rsp+28h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v43; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v44; // [rsp+50h] [rbp-130h] BYREF
  char v45[272]; // [rsp+70h] [rbp-110h] BYREF

  v38._M_string_length = (std::string::size_type)this;
  v38._M_dataplus._M_p = (std::string::pointer)__PAIR64__(mechanicus_id, gear_id);
  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 1 10 holder:434 48 4 14 next_level:410 64 4 17 mechanicus_id:387 80 4 11 gear_id:387 96 8 8"
                        " iter:399 128 8 10 reason:436 160 16 13 event_ptr:444 192 16 11 log_ptr:448";
  *(_QWORD *)(v3 + 16) = PlayerMechanicusComp::levelupGear;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  *(_DWORD *)(v3 + 64) = HIDWORD(v38._M_dataplus._M_p);
  *(_DWORD *)(v3 + 80) = v38._M_dataplus._M_p;
  if ( *(_BYTE *)(((v38._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v38._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v38._M_string_length + 32);
  }
  if ( *(_DWORD *)(v38._M_string_length + 32) && *(_DWORD *)(v38._M_string_length + 32) == *(_DWORD *)(v3 + 64) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v43);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
    isMechanicusClosed = FeatureSwitchMgr::isMechanicusClosed(&v12->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
    if ( isMechanicusClosed )
    {
      v11 = 7135;
    }
    else
    {
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                      (std::map<unsigned int,unsigned int> *const)(v38._M_string_length + 40),
                                                                      (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v38._M_string_length + 40));
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128)) )
      {
        v11 = 7122;
      }
      else
      {
        v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 96));
        p_second = &v14->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        cur_level = v14->second;
        if ( cur_level )
        {
          *(_DWORD *)(v3 + 48) = cur_level + 1;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v43);
          v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43);
          gear_levelup_config_ptr = TreatreMechanicusExcelConfigMgr::findGearLevelupConfig(
                                      &v19->design_config.txt_config_mgr.mechanicus_config_mgr,
                                      *(_DWORD *)(v3 + 80),
                                      *(_DWORD *)(v3 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
          if ( gear_levelup_config_ptr )
          {
            ret = PlayerMechanicusComp::checkGearLevelSupported(
                    (const PlayerMechanicusComp *const)v38._M_string_length,
                    *(_DWORD *)(v3 + 80),
                    *(_DWORD *)(v3 + 48));
            if ( ret )
            {
              v11 = ret;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gear_levelup_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3)
                                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&gear_levelup_config_ptr->gear_level_up_money);
              }
              if ( gear_levelup_config_ptr->gear_level_up_money )
              {
                if ( *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)gear_levelup_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3)
                                                                                         + 0x7FFF8000) )
                {
                  __asan_report_load4(&gear_levelup_config_ptr->gear_level_up_money);
                }
                ret = PlayerMechanicusComp::checkSubCoin(
                        (const PlayerMechanicusComp *const)v38._M_string_length,
                        gear_levelup_config_ptr->gear_level_up_money);
                if ( ret )
                {
                  v11 = ret;
                }
                else
                {
                  if ( *(_BYTE *)(((v38._M_string_length + 24) >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BasicComp = Player::getBasicComp(*(Player *const *)(v38._M_string_length + 24));
                  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
                  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC45u, v38);
                  std::string::~string(&v44);
                  SubItemReason::SubItemReason((SubItemReason *const)(v3 + 128), ACTION_REASON_MECHANICUS_LEVELUP_GEAR);
                  if ( *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)gear_levelup_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3)
                                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load4(&gear_levelup_config_ptr->gear_level_up_money);
                  }
                  if ( PlayerMechanicusComp::subCoin(
                         (PlayerMechanicusComp *const)v38._M_string_length,
                         gear_levelup_config_ptr->gear_level_up_money,
                         (const SubItemReason *)(v3 + 128)) )
                  {
                    common::milog::MiLogStream::create(
                      &v44,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/mechanicus/player_mechanicus_comp.cpp",
                      "levelupGear",
                      439);
                    v23 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
                    if ( *(_BYTE *)(((v38._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    *((_DWORD *)&v38._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v38._M_string_length + 24));
                    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v23,
                            (const unsigned int *)&v38._anon_0._M_allocated_capacity + 3);
                    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v24,
                      (const char (*)[15])" subCoin fails");
                    common::milog::MiLogStream::~MiLogStream(&v44);
                    v11 = -1;
                  }
                  else
                  {
                    v25 = *(_DWORD *)(v3 + 48);
                    v26 = (char *)(v3 + 80);
                    v27 = std::map<unsigned int,unsigned int>::operator[](
                            (std::map<unsigned int,unsigned int> *const)(v38._M_string_length + 40),
                            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
                    v28 = v27;
                    v29 = *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000);
                    if ( v29 != 0 && (char)(((unsigned __int8)v27 & 7) + 3) >= v29 )
                    {
                      LOBYTE(v26) = v29 != 0;
                      __asan_report_store4(v27, v26, v27);
                    }
                    *v28 = v25;
                    common::tools::perf::make_shared<MechanicusLevelupGearEvent,unsigned int &,unsigned int &>(
                      (unsigned int *)(v3 + 160),
                      (unsigned int *)(v3 + 80),
                      (unsigned int *)(v3 + 48),
                      (unsigned int *)(v3 + 80));
                    if ( *(_BYTE *)(((v38._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    EventComp = Player::getEventComp(*(Player *const *)(v38._M_string_length + 24));
                    v31 = std::move<std::shared_ptr<MechanicusLevelupGearEvent> &>((std::shared_ptr<MechanicusLevelupGearEvent> *)(v3 + 160));
                    std::shared_ptr<BaseEvent>::shared_ptr<MechanicusLevelupGearEvent,void>(
                      (std::shared_ptr<BaseEvent> *const)&v43,
                      v31);
                    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v43);
                    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v43);
                    common::tools::perf::make_shared<proto_log::PlayerLogBodyMechanicusLevelupGear>();
                    v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    proto_log::PlayerLogBodyMechanicusLevelupGear::set_mechanicus_id(v32, *(_DWORD *)(v3 + 64));
                    v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    proto_log::PlayerLogBodyMechanicusLevelupGear::set_gear_id(v33, *(_DWORD *)(v3 + 80));
                    v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    proto_log::PlayerLogBodyMechanicusLevelupGear::set_after_level(v34, *(_DWORD *)(v3 + 48));
                    v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusLevelupGear,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                    if ( *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)gear_levelup_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gear_levelup_config_ptr->gear_level_up_money >> 3)
                                                                                             + 0x7FFF8000) )
                    {
                      __asan_report_load4(&gear_levelup_config_ptr->gear_level_up_money);
                    }
                    proto_log::PlayerLogBodyMechanicusLevelupGear::set_cost_coin(
                      v35,
                      gear_levelup_config_ptr->gear_level_up_money);
                    if ( *(_BYTE *)(((v38._M_string_length + 24) >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    v36 = *(Player **)(v38._M_string_length + 24);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v43, 0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear,void>(
                      &p_body_ptr,
                      (const std::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear> *)(v3 + 192));
                    Player::printStatLog(v36, &p_body_ptr, &v43, 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v43);
                    v11 = 0;
                    std::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMechanicusLevelupGear> *const)(v3 + 192));
                    std::shared_ptr<MechanicusLevelupGearEvent>::~shared_ptr((std::shared_ptr<MechanicusLevelupGearEvent> *const)(v3 + 160));
                  }
                  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/mechanicus/player_mechanicus_comp.cpp",
                  "levelupGear",
                  424);
                v21 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                        &v44,
                        (const char (*)[38])"gear_level_up_money is 0! next_level:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v44);
                v11 = -1;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/mechanicus/player_mechanicus_comp.cpp",
              "levelupGear",
              414);
            v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v44,
                    (const char (*)[41])"findGearLevelupConfig fails, next_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v44);
            v11 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/mechanicus/player_mechanicus_comp.cpp",
            "levelupGear",
            407);
          v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v44,
                  (const char (*)[31])"it should not happen, gear_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 80));
          v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((v38._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *((_DWORD *)&v38._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v38._M_string_length + 24));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v18,
            (const unsigned int *)&v38._anon_0._M_allocated_capacity + 3);
          common::milog::MiLogStream::~MiLogStream(&v44);
          v11 = -1;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "levelupGear",
      391);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((v38._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&v38._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v38._M_string_length
                                                                                                + 24));
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v6,
           (const unsigned int *)&v38._anon_0._M_allocated_capacity + 3);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           v7,
           (const char (*)[32])" cur_mechanicus_.mechanicus_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v8,
           (const unsigned int *)(v38._M_string_length + 32));
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v9,
            (const char (*)[22])" param mechanicus_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v11 = 7120;
  }
  result = v11;
  if ( v45 == (char *)v3 )
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
  return result;
};

// Line 459: range 000000001758E654-000000001758EBED
__int64 __fastcall PlayerMechanicusComp::checkGearLevelSupported(
        const PlayerMechanicusComp *const this,
        uint32_t gear_id,
        uint32_t level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r13
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v14; // rax
  common::milog::MiLogStream *v15; // r13
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t max_sequence_id; // [rsp+14h] [rbp-DCh]
  std::set<unsigned int> v21; // [rsp+18h] [rbp-D8h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 gear_id:458 64 8 8 iter:475";
  *(_QWORD *)(v3 + 16) = PlayerMechanicusComp::checkGearLevelSupported;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = gear_id;
  if ( std::set<unsigned int>::empty(&this->cur_mechanicus_.open_sequence_id_set) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v21._M_t._M_impl._M_node_count,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkGearLevelSupported",
      462);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)&v21._M_t._M_impl._M_node_count,
           (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])off_261382A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21._M_t._M_impl._M_node_count);
    result = 7125LL;
  }
  else
  {
    std::set<unsigned int>::rbegin(&v21);
    v9 = (unsigned int *)std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int>>::operator*((const std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int> > *const)&v21);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    max_sequence_id = *v10;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21._M_t._M_impl._M_header._M_left);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21._M_t._M_impl._M_header._M_left);
    *(_QWORD *)&v21._M_t._M_impl._M_header._M_color = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusSequenceExcelConfig(
                                                        &v11->design_config.txt_config_mgr.mechanicus_config_mgr,
                                                        max_sequence_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21._M_t._M_impl._M_header._M_left);
    if ( *(_QWORD *)&v21._M_t._M_impl._M_header._M_color )
    {
      v21._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)(*(_QWORD *)&v21._M_t._M_impl._M_header._M_color
                                                                                + 24LL);
      M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(*(_QWORD *)&v21._M_t._M_impl._M_header._M_color
                                                                                        + 24LL))._M_current;
      v14._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)v21._M_t._M_impl._M_header._M_parent)._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                     v14,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                     (const unsigned int *)(v3 + 48));
      *(std::vector<unsigned int>::const_iterator *)v21._M_t._M_impl.gap0 = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)v21._M_t._M_impl._M_header._M_parent);
      if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&v21) )
      {
        result = 7127LL;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v21._M_t._M_impl._M_header._M_color + 48LL) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v21._M_t._M_impl._M_header._M_color + 48LL) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(*(_QWORD *)&v21._M_t._M_impl._M_header._M_color + 48LL);
        }
        if ( level <= *(_DWORD *)(*(_QWORD *)&v21._M_t._M_impl._M_header._M_color + 48LL) )
        {
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v21._M_t._M_impl._M_node_count,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mechanicus/player_mechanicus_comp.cpp",
            "checkGearLevelSupported",
            484);
          v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                  (common::milog::MiLogStream *const)&v21._M_t._M_impl._M_node_count,
                  (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v16,
                  (const char (*)[26])" gear_id limit max level:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v17,
            (const unsigned int *)(*(_QWORD *)&v21._M_t._M_impl._M_header._M_color + 48LL));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21._M_t._M_impl._M_node_count);
          result = 7126LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v21._M_t._M_impl._M_node_count,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "checkGearLevelSupported",
        471);
      v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&v21._M_t._M_impl._M_node_count,
              (const char (*)[34])"findMaxSequenceConfig fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21._M_t._M_impl._M_node_count);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v22 == (char *)v3 )
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

// Line 491: range 000000001758EBEE-000000001758EEAD
__int64 __fastcall PlayerMechanicusComp::findGearLevel(const PlayerMechanicusComp *const this, uint32_t gear_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-A8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 gear_id:490 64 8 8 iter:497";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::findGearLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = gear_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          &this->cur_mechanicus_.gear_level_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,unsigned int>::end(&this->cur_mechanicus_.gear_level_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
           &__y) )
    {
      v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      p_second = &v8->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v8->second;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "findGearLevel",
      494);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v12, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])&stru_26138400);
    common::milog::MiLogStream::~MiLogStream(&v12);
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

// Line 506: range 000000001758EEAE-000000001758F2CD
__int64 __fastcall PlayerMechanicusComp::checkAddCoin(const PlayerMechanicusComp *const this, uint32_t add_coin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 add_coin:505";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::checkAddCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_coin;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_mechanicus_.coin);
    }
    if ( this->cur_mechanicus_.coin
      && *(_DWORD *)(v2 + 32)
      && *(_DWORD *)(v2 + 32) + this->cur_mechanicus_.coin < this->cur_mechanicus_.coin )
    {
      goto LABEL_20;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_mechanicus_.coin);
    }
    if ( this->cur_mechanicus_.coin
      || *(_DWORD *)(v2 + 32)
      || *(_DWORD *)(v2 + 32) + this->cur_mechanicus_.coin <= this->cur_mechanicus_.coin )
    {
      result = 0LL;
    }
    else
    {
LABEL_20:
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "checkAddCoin",
        514);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v15, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" coin:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->cur_mechanicus_.coin);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" add_coin:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" overflow");
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkAddCoin",
      509);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v15, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])&stru_26138400);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 7120LL;
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

// Line 521: range 000000001758F2CE-000000001758FEAE
__int64 __fastcall PlayerMechanicusComp::addCoin(
        PlayerMechanicusComp *const this,
        __int32 add_coin,
        const ActionReason *reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  SelectType v14; // ecx
  char v15; // dl
  __int64 v16; // rsi
  __int64 v17; // rdx
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // ecx
  char v24; // dl
  char *v25; // rsi
  __int64 v26; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v35; // [rsp+0h] [rbp-180h]
  google::protobuf::uint32 *reasona; // [rsp+8h] [rbp-178h]
  PlayerMechanicusComp *thisa; // [rsp+18h] [rbp-168h]
  unsigned int val; // [rsp+28h] [rbp-158h] BYREF
  uint32_t old_coin; // [rsp+2Ch] [rbp-154h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-140h] BYREF
  char v42[304]; // [rsp+50h] [rbp-130h] BYREF

  *(&v35._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v35._anon_0._M_allocated_capacity) = add_coin;
  v35._M_string_length = (std::string::size_type)reason;
  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 1 10 holder:532 48 4 14 coin_limit:537 64 4 12 add_coin:520 80 16 11 log_ptr:558 112 32 10 "
                        "notify:552 176 48 10 notify:544";
  *(_QWORD *)(v3 + 16) = PlayerMechanicusComp::addCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 64) = add_coin;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_mechanicus_.coin);
    }
    if ( this->cur_mechanicus_.coin
      && *(_DWORD *)(v3 + 64)
      && *(_DWORD *)(v3 + 64) + this->cur_mechanicus_.coin < this->cur_mechanicus_.coin )
    {
      goto LABEL_18;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_mechanicus_.coin);
    }
    if ( this->cur_mechanicus_.coin
      || *(_DWORD *)(v3 + 64)
      || *(_DWORD *)(v3 + 64) + this->cur_mechanicus_.coin <= this->cur_mechanicus_.coin )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v3 + 112), BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC44u, v35);
      std::string::~string((void *)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->cur_mechanicus_.coin);
      }
      old_coin = thisa->cur_mechanicus_.coin;
      v16 = *(unsigned int *)(v3 + 64);
      v14 = SAFE_ADD<unsigned int,unsigned int>(thisa->cur_mechanicus_.coin, v16);
      v15 = *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000);
      LOBYTE(v16) = v15 != 0;
      v17 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)thisa + 36) & 7) + 3) >= v15);
      if ( (_BYTE)v17 )
        __asan_report_store4(&thisa->cur_mechanicus_.coin, v16, v17);
      thisa->cur_mechanicus_.coin = v14;
      *(_DWORD *)(v3 + 48) = PlayerMechanicusComp::getCoinLimit(thisa);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->cur_mechanicus_.coin);
      }
      if ( thisa->cur_mechanicus_.coin > *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 112),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "addCoin",
          540);
        v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                (common::milog::MiLogStream *const)(v3 + 112),
                (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(thisa->player_);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" coin:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &thisa->cur_mechanicus_.coin);
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" limit to:");
        v25 = (char *)(v3 + 48);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
        v23 = *(_DWORD *)(v3 + 48);
        v24 = *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000);
        LOBYTE(v25) = v24 != 0;
        v26 = (v24 != 0) & (unsigned __int8)((char)((((_BYTE)thisa + 36) & 7) + 3) >= v24);
        if ( (_BYTE)v26 )
          __asan_report_store4(&thisa->cur_mechanicus_.coin, v25, v26);
        thisa->cur_mechanicus_.coin = v23;
        proto::ShowMessageNotify::ShowMessageNotify((proto::ShowMessageNotify *const)(v3 + 176));
        proto::ShowMessageNotify::set_msg_id((proto::ShowMessageNotify *const)(v3 + 176), MSG_MECHANICUS_COIN_LIMIT);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v3 + 176));
        proto::ShowMessageNotify::~ShowMessageNotify((proto::ShowMessageNotify *const)(v3 + 176));
      }
      if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->cur_mechanicus_.coin);
      }
      if ( old_coin < thisa->cur_mechanicus_.coin )
      {
        proto::MechanicusCoinNotify::MechanicusCoinNotify((proto::MechanicusCoinNotify *const)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->cur_mechanicus_);
        }
        proto::MechanicusCoinNotify::set_mechanicus_id(
          (proto::MechanicusCoinNotify *const)(v3 + 112),
          thisa->cur_mechanicus_.mechanicus_id);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&thisa->cur_mechanicus_.coin);
        }
        proto::MechanicusCoinNotify::set_coin(
          (proto::MechanicusCoinNotify *const)(v3 + 112),
          thisa->cur_mechanicus_.coin);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v3 + 112));
        proto::MechanicusCoinNotify::~MechanicusCoinNotify((proto::MechanicusCoinNotify *const)(v3 + 112));
      }
      common::tools::perf::make_shared<proto_log::PlayerLogBodyMechanicusCoin>();
      v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->cur_mechanicus_);
      }
      proto_log::PlayerLogBodyMechanicusCoin::set_mechanicus_id(v27, thisa->cur_mechanicus_.mechanicus_id);
      v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(reasona);
      }
      proto_log::PlayerLogBodyMechanicusCoin::set_reason(v28, *reasona);
      v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      proto_log::PlayerLogBodyMechanicusCoin::set_delta_coin(v29, *(_DWORD *)(v3 + 64));
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->cur_mechanicus_.coin);
      }
      proto_log::PlayerLogBodyMechanicusCoin::set_real_delta_coin(v30, thisa->cur_mechanicus_.coin - old_coin);
      v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->cur_mechanicus_.coin);
      }
      proto_log::PlayerLogBodyMechanicusCoin::set_after_coin(v31, thisa->cur_mechanicus_.coin);
      v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      proto_log::PlayerLogBodyMechanicusCoin::set_limit_coin(v32, *(_DWORD *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin> *)(v3 + 80));
      Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      v6 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin> *const)(v3 + 80));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    }
    else
    {
LABEL_18:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "addCoin",
        528);
      v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
             (common::milog::MiLogStream *const)(v3 + 112),
             (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" coin:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cur_mechanicus_.coin);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" add_coin:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])" overflow");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      v6 = -1;
    }
  }
  else
  {
    v6 = 7120;
  }
  result = v6;
  if ( v42 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 571: range 000000001758FEB0-000000001758FF13
int32_t __cdecl PlayerMechanicusComp::checkSubCoin(const PlayerMechanicusComp *const this, uint32_t sub_coin)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_mechanicus_.coin);
  }
  if ( sub_coin <= this->cur_mechanicus_.coin )
    return 0;
  else
    return 7124;
};

// Line 580: range 000000001758FF14-0000000017590527
int32_t __cdecl PlayerMechanicusComp::subCoin(
        PlayerMechanicusComp *const this,
        uint32_t sub_coin,
        const SubItemReason *reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t CoinLimit; // eax
  Player *player; // r14
  int32_t result; // eax
  std::string v17; // [rsp+0h] [rbp-110h]
  google::protobuf::uint32 *reasona; // [rsp+8h] [rbp-108h]
  uint32_t sub_coina; // [rsp+14h] [rbp-FCh]
  PlayerMechanicusComp *thisa; // [rsp+18h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  char v23[208]; // [rsp+40h] [rbp-D0h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v17._anon_0._M_allocated_capacity) = sub_coin;
  v17._M_string_length = (std::string::size_type)reason;
  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 10 holder:586 64 16 11 log_ptr:596 96 32 10 notify:591";
  *(_QWORD *)(v3 + 16) = PlayerMechanicusComp::subCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.coin >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_mechanicus_.coin);
  }
  if ( sub_coin <= this->cur_mechanicus_.coin )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v3 + 96), BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xC44u, v17);
    std::string::~string((void *)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->cur_mechanicus_.coin);
    }
    thisa->cur_mechanicus_.coin -= sub_coina;
    proto::MechanicusCoinNotify::MechanicusCoinNotify((proto::MechanicusCoinNotify *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->cur_mechanicus_);
    }
    proto::MechanicusCoinNotify::set_mechanicus_id(
      (proto::MechanicusCoinNotify *const)(v3 + 96),
      thisa->cur_mechanicus_.mechanicus_id);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->cur_mechanicus_.coin);
    }
    proto::MechanicusCoinNotify::set_coin((proto::MechanicusCoinNotify *const)(v3 + 96), thisa->cur_mechanicus_.coin);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v3 + 96));
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMechanicusCoin>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->cur_mechanicus_);
    }
    proto_log::PlayerLogBodyMechanicusCoin::set_mechanicus_id(v8, thisa->cur_mechanicus_.mechanicus_id);
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(reasona);
    }
    proto_log::PlayerLogBodyMechanicusCoin::set_reason(v9, *reasona);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyMechanicusCoin::set_delta_coin(v10, -sub_coina);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    proto_log::PlayerLogBodyMechanicusCoin::set_real_delta_coin(v11, -sub_coina);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->cur_mechanicus_.coin >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->cur_mechanicus_.coin);
    }
    proto_log::PlayerLogBodyMechanicusCoin::set_after_coin(v12, thisa->cur_mechanicus_.coin);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMechanicusCoin,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    CoinLimit = PlayerMechanicusComp::getCoinLimit(thisa);
    proto_log::PlayerLogBodyMechanicusCoin::set_limit_coin(v13, CoinLimit);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin> *)(v3 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v6 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMechanicusCoin> *const)(v3 + 64));
    proto::MechanicusCoinNotify::~MechanicusCoinNotify((proto::MechanicusCoinNotify *const)(v3 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  else
  {
    v6 = 7124;
  }
  result = v6;
  if ( v23 == (char *)v3 )
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

// Line 610: range 0000000017590528-00000000175907BE
uint32_t __cdecl PlayerMechanicusComp::getCoinLimit(const PlayerMechanicusComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::set<unsigned int> v9; // [rsp+10h] [rbp-A0h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 19 max_sequence_id:616";
  *(_QWORD *)(v1 + 16) = PlayerMechanicusComp::getCoinLimit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( std::set<unsigned int>::empty(&this->cur_mechanicus_.open_sequence_id_set) )
  {
    result = 0;
  }
  else
  {
    std::set<unsigned int>::rbegin(&v9);
    v5 = std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int>>::operator*((const std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int> > *const)&v9);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v1 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9._M_t._M_impl._M_header._M_parent);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9._M_t._M_impl._M_header._M_parent);
    *(_QWORD *)&v9._M_t._M_impl._M_header._M_color = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusSequenceExcelConfig(
                                                       &v7->design_config.txt_config_mgr.mechanicus_config_mgr,
                                                       *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v9._M_t._M_impl._M_header._M_parent);
    if ( *(_QWORD *)&v9._M_t._M_impl._M_header._M_color )
    {
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 52LL) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(v9._M_t._M_impl._M_header._M_color) + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 52LL) >> 3)
                                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 52LL);
      }
      result = *(_DWORD *)(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 52LL);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v9._M_t._M_impl._M_header._M_right,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "getCoinLimit",
        620);
      v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             (common::milog::MiLogStream *const)&v9._M_t._M_impl._M_header._M_right,
             (const char (*)[56])"findMechanicusSequenceExcelConfig fail,max_sequence_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9._M_t._M_impl._M_header._M_right);
      result = 0;
    }
  }
  if ( v10 == (char *)v1 )
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

// Line 627: range 00000000175907C0-0000000017590A4E
uint32_t __cdecl PlayerMechanicusComp::getDifficultLevelLimit(const PlayerMechanicusComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::set<unsigned int> v9; // [rsp+10h] [rbp-A0h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 19 max_sequence_id:633";
  *(_QWORD *)(v1 + 16) = PlayerMechanicusComp::getDifficultLevelLimit;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( std::set<unsigned int>::empty(&this->cur_mechanicus_.open_sequence_id_set) )
  {
    result = 0;
  }
  else
  {
    std::set<unsigned int>::rbegin(&v9);
    v5 = std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int>>::operator*((const std::reverse_iterator<std::_Rb_tree_const_iterator<unsigned int> > *const)&v9);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v1 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v9._M_t._M_impl._M_header._M_parent);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9._M_t._M_impl._M_header._M_parent);
    *(_QWORD *)&v9._M_t._M_impl._M_header._M_color = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusSequenceExcelConfig(
                                                       &v7->design_config.txt_config_mgr.mechanicus_config_mgr,
                                                       *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v9._M_t._M_impl._M_header._M_parent);
    if ( *(_QWORD *)&v9._M_t._M_impl._M_header._M_color )
    {
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 16LL) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 16LL) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 16LL);
      }
      result = *(_DWORD *)(*(_QWORD *)&v9._M_t._M_impl._M_header._M_color + 16LL);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v9._M_t._M_impl._M_header._M_right,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "getDifficultLevelLimit",
        637);
      v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             (common::milog::MiLogStream *const)&v9._M_t._M_impl._M_header._M_right,
             (const char (*)[56])"findMechanicusSequenceExcelConfig fail,max_sequence_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9._M_t._M_impl._M_header._M_right);
      result = 0;
    }
  }
  if ( v10 == (char *)v1 )
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

// Line 645: range 0000000017590A50-0000000017590CDA
uint32_t __cdecl PlayerMechanicusComp::getTeamPlayerLimit(const PlayerMechanicusComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  common::milog::MiLogStream *v2; // rax
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  unsigned int val; // [rsp+14h] [rbp-4Ch] BYREF
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.mechanicus_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_mechanicus_);
    }
    mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                              p_mechanicus_config_mgr,
                              this->cur_mechanicus_.mechanicus_id);
    std::shared_ptr<Config>::~shared_ptr(&v8);
    if ( mechanicus_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->match_player_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->match_player_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mechanicus_config_ptr->match_player_limit);
      }
      return mechanicus_config_ptr->match_player_limit;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "getTeamPlayerLimit",
        654);
      v5 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v9,
             (const char (*)[47])"findMechanicusExcelConfig fails,mechanicus_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->cur_mechanicus_.mechanicus_id);
      common::milog::MiLogStream::~MiLogStream(&v9);
      return 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "getTeamPlayerLimit",
      648);
    v1 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v9, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v2, (const char (*)[24])&stru_26138400);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 0;
  }
};

// Line 661: range 0000000017590CDC-00000000175914CE
__int64 __fastcall PlayerMechanicusComp::oneKeyOpenByGm(PlayerMechanicusComp *const this, uint32_t mechanicus_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int *v14; // rax
  unsigned int *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  TxtConfigMgr *p_txt_config_mgr; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> > >::type *v21; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  _DWORD *v23; // rdx
  char v24; // cl
  unsigned int sequence_id; // [rsp+14h] [rbp-10Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+28h] [rbp-F8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>> *__for_range_0; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> > *v31; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> > >::type *gear_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> > >::type *_; // [rsp+50h] [rbp-D0h]
  const data::MechanicusSequenceExcelConfig *sequence_config_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v35; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v36; // [rsp+70h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 max_level:689 64 4 17 mechanicus_id:660";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::oneKeyOpenByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = mechanicus_id;
  common::milog::MiLogStream::create(
    &v36,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "oneKeyOpenByGm",
    662);
  v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v36, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])" oneKeyOpenByGm:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v36);
  if ( (unsigned int)PlayerMechanicusComp::openMechanicus(this, *(_DWORD *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "oneKeyOpenByGm",
      667);
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v36, (const char (*)[17])" openMechanicus ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" FAIL.");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                              &v12->design_config.txt_config_mgr.mechanicus_config_mgr,
                              *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( mechanicus_config_ptr )
    {
      __for_range = &mechanicus_config_ptr->sequence_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(&mechanicus_config_ptr->sequence_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&mechanicus_config_ptr->sequence_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        sequence_id = *v15;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v35);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
        sequence_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusSequenceExcelConfig(
                                &v16->design_config.txt_config_mgr.mechanicus_config_mgr,
                                sequence_id);
        std::shared_ptr<Config>::~shared_ptr(&v35);
        if ( sequence_config_ptr )
          PlayerMechanicusComp::openSequence(this, sequence_id);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      p_txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->mechanicus_config_mgr.max_normal_difficult_level >> 3)
                    + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&p_txt_config_mgr->mechanicus_config_mgr.max_normal_difficult_level >> 3)
                    + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&p_txt_config_mgr->mechanicus_config_mgr.max_normal_difficult_level);
      }
      *(_DWORD *)(v2 + 48) = p_txt_config_mgr->mechanicus_config_mgr.max_normal_difficult_level;
      std::shared_ptr<Config>::~shared_ptr(&v35);
      if ( PlayerMechanicusComp::finishDifficutLevelByGm(this, *(_DWORD *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "oneKeyOpenByGm",
          692);
        v18 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v36,
                (const char (*)[46])"finishDifficutLevelByGm fails, mechanicus_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 64));
        v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" max level:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v36);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v35);
        __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.mechanicus_config_mgr.gear_levelup_config_map;
        std::shared_ptr<Config>::~shared_ptr(&v35);
        __for_begin._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::begin(__for_range_0)._M_cur;
        __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,std::vector<data::MechanicusGearLevelUpExcelConfig>>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)&__for_begin,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false> *)&__for_end) )
        {
          v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false> *const)&__for_begin);
          gear_id = std::get<0ul,unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>(v31);
          _ = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>(v31);
          v21 = gear_id;
          v22 = std::map<unsigned int,unsigned int>::operator[](&this->cur_mechanicus_.gear_level_map, gear_id);
          v23 = v22;
          v24 = *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000);
          if ( v24 != 0 && (char)(((unsigned __int8)v22 & 7) + 3) >= v24 )
          {
            LOBYTE(v21) = v24 != 0;
            __asan_report_store4(v22, v21, v22);
          }
          *v23 = 1;
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MechanicusGearLevelUpExcelConfig> >,false,false> *const)&__for_begin);
        }
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "oneKeyOpenByGm",
        675);
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v36,
              (const char (*)[48])"findMechanicusExcelConfig fails, mechanicus_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v36);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v37 == (char *)v2 )
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

// Line 706: range 00000000175914D0-00000000175916A1
__int64 __fastcall PlayerMechanicusComp::openMechanicusByGm(PlayerMechanicusComp *const this, uint32_t mechanicus_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 mechanicus_id:705";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::openMechanicusByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = mechanicus_id;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "openMechanicusByGm",
    707);
  v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v10, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])" openMechanicusByGm:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  result = PlayerMechanicusComp::openMechanicus(this, *(_DWORD *)(v2 + 32));
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

// Line 712: range 00000000175916A2-0000000017591873
__int64 __fastcall PlayerMechanicusComp::closeMechanicusByGm(PlayerMechanicusComp *const this, uint32_t mechanicus_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 mechanicus_id:711";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::closeMechanicusByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = mechanicus_id;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "closeMechanicusByGm",
    713);
  v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v10, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v6, (const char (*)[22])" closeMechanicusByGm:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  result = PlayerMechanicusComp::closeMechanicus(this, *(_DWORD *)(v2 + 32));
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

// Line 718: range 0000000017591874-0000000017591895
int32_t __cdecl PlayerMechanicusComp::openSequenceIdByGm(PlayerMechanicusComp *const this, uint32_t sequence_id)
{
  return PlayerMechanicusComp::openSequence(this, sequence_id);
};

// Line 723: range 0000000017591896-00000000175919A7
int32_t __cdecl PlayerMechanicusComp::addCoinByGm(PlayerMechanicusComp *const this, uint32_t add_coin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 10 reason:724";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::addCoinByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  ActionReason::ActionReason((ActionReason *const)(v2 + 32), ACTION_REASON_GM, ITEM_LIMIT_GM);
  result = PlayerMechanicusComp::addCoin(this, add_coin, (const ActionReason *)(v2 + 32));
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
  return result;
};

// Line 729: range 00000000175919A8-0000000017591B14
int32_t __cdecl PlayerMechanicusComp::unlockGearByGm(PlayerMechanicusComp *const this, uint32_t gear_id)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_mechanicus_);
    }
    return PlayerMechanicusComp::unlockGear(this, this->cur_mechanicus_.mechanicus_id, gear_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "unlockGearByGm",
      732);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v6, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v3, (const char (*)[23])off_26138BA0);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 739: range 0000000017591B16-0000000017591C82
int32_t __cdecl PlayerMechanicusComp::levelupGearByGm(PlayerMechanicusComp *const this, uint32_t gear_id)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_mechanicus_);
    }
    return PlayerMechanicusComp::levelupGear(this, this->cur_mechanicus_.mechanicus_id, gear_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "levelupGearByGm",
      742);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v6, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v3, (const char (*)[23])off_26138BA0);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 749: range 0000000017591C84-0000000017591DEA
int32_t __cdecl PlayerMechanicusComp::clearPunishByGm(PlayerMechanicusComp *const this)
{
  __int64 v1; // rsi
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.punish_over_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.punish_over_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_mechanicus_.punish_over_time, v1, &this->cur_mechanicus_.punish_over_time);
    }
    this->cur_mechanicus_.punish_over_time = 0;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "clearPunishByGm",
      752);
    v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v6, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v3, (const char (*)[23])off_26138BA0);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
};

// Line 760: range 0000000017591DEC-0000000017592283
__int64 __fastcall PlayerMechanicusComp::finishDifficutLevelByGm(
        PlayerMechanicusComp *const this,
        uint32_t difficult_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  const data::MechanicusDifficultyExcelConfig *difficult_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 idx:775 64 4 19 difficult_level:759";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::finishDifficutLevelByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = difficult_level;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "finishDifficutLevelByGm",
    761);
  v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         v6,
         (const char (*)[26])" finishDifficutLevelByGm:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
    v12 = *(unsigned int *)(v2 + 64);
    difficult_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusDifficultyExcelConfig(
                             &v11->design_config.txt_config_mgr.mechanicus_config_mgr,
                             v12);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( difficult_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&this->cur_mechanicus_.is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(
          &this->cur_mechanicus_.is_finish_teach_dungeon,
          v12,
          &this->cur_mechanicus_.is_finish_teach_dungeon);
      this->cur_mechanicus_.is_finish_teach_dungeon = 1;
      for ( *(_DWORD *)(v2 + 48) = 1; *(_DWORD *)(v2 + 48) <= *(_DWORD *)(v2 + 64); ++*(_DWORD *)(v2 + 48) )
        std::set<unsigned int>::insert(
          &this->cur_mechanicus_.finish_difficult_level_set,
          (const std::set<unsigned int>::value_type *)(v2 + 48));
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "finishDifficutLevelByGm",
        770);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v16,
              (const char (*)[44])"findMechanicusDifficultyExcelConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "finishDifficutLevelByGm",
      764);
    v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])off_26138BA0);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0xFFFFFFFFLL;
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
  return result;
};

// Line 784: range 0000000017592284-0000000017592892
__int64 __fastcall PlayerMechanicusComp::checkMatchDungeon(
        const PlayerMechanicusComp *const this,
        uint32_t difficult_level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isMechanicusClosed; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isTeachDifficultLevel; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  time_t punish_over_time; // r15
  char v14; // r15
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  PlayerMpComp *MpComp; // rax
  uint32_t ValidAllowEnterPlayerNum; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  char v19; // al
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  PlayerMpComp *v24; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  unsigned int v27; // [rsp+28h] [rbp-B8h] BYREF
  uint32_t player_limit; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-B0h] BYREF
  char v30[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 difficult_level:783 64 16 13 world_ptr:806";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::checkMatchDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = difficult_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    isMechanicusClosed = FeatureSwitchMgr::isMechanicusClosed(&v6->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    if ( isMechanicusClosed )
    {
      v5 = 7135;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      isTeachDifficultLevel = TreatreMechanicusExcelConfigMgr::isTeachDifficultLevel(
                                &v8->design_config.txt_config_mgr.mechanicus_config_mgr,
                                *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      if ( isTeachDifficultLevel )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "checkMatchDungeon",
          796);
        v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v29,
                (const char (*)[17])"difficult_level:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v11,
          (const char (*)[23])" not support mp match!");
        common::milog::MiLogStream::~MiLogStream(&v29);
        v5 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( FeatureSwitchMgr::isMechanicusPunishClosed(&v12->feature_switch_mgr) )
          goto LABEL_17;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.punish_over_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.punish_over_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_mechanicus_.punish_over_time);
        }
        punish_over_time = this->cur_mechanicus_.punish_over_time;
        if ( punish_over_time > common::tools::TimeUtils::getNow() )
          v14 = 1;
        else
LABEL_17:
          v14 = 0;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( v14 )
        {
          v5 = 7134;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 64));
          if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 64)) )
          {
            v5 = -1;
          }
          else
          {
            player_limit = PlayerMechanicusComp::getTeamPlayerLimit(this);
            v15 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( player_limit <= World::getPlayerCount(v15) )
              goto LABEL_28;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MpComp = Player::getMpComp(this->player_);
            ValidAllowEnterPlayerNum = PlayerMpComp::getValidAllowEnterPlayerNum(MpComp);
            v18 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            if ( player_limit > ValidAllowEnterPlayerNum + World::getPlayerCount(v18) )
              v19 = 0;
            else
LABEL_28:
              v19 = 1;
            if ( v19 )
            {
              common::milog::MiLogStream::create(
                &v29,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/mechanicus/player_mechanicus_comp.cpp",
                "checkMatchDungeon",
                815);
              v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      &v29,
                      (const char (*)[14])"world player:");
              v21 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              val = World::getPlayerCount(v21);
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
              v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v22,
                      (const char (*)[14])" valid allow:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v24 = Player::getMpComp(this->player_);
              v27 = PlayerMpComp::getValidAllowEnterPlayerNum(v24);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &v27);
              common::milog::MiLogStream::~MiLogStream(&v29);
              v5 = 7133;
            }
            else
            {
              v5 = PlayerMechanicusComp::checkEnterDungeon(this, *(_DWORD *)(v2 + 48), player_limit);
            }
          }
          std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
        }
      }
    }
  }
  else
  {
    v5 = 7120;
  }
  result = v5;
  if ( v30 == (char *)v2 )
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

// Line 824: range 0000000017592894-0000000017593450
__int64 __fastcall PlayerMechanicusComp::checkEnterDungeon(
        const PlayerMechanicusComp *const this,
        uint32_t difficult_level,
        uint32_t player_count)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool isMechanicusClosed; // r14
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool isTeachDifficultLevel; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  PlayerGmComp *GmComp; // rax
  PlayerItemComp *ItemComp; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+20h] [rbp-C0h]
  const data::MechanicusDifficultyExcelConfig *difficult_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 19 difficult_level:823 48 4 16 player_count:823 64 16 9 param:882";
  *(_QWORD *)(v3 + 16) = PlayerMechanicusComp::checkEnterDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = difficult_level;
  *(_DWORD *)(v3 + 48) = player_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( !this->cur_mechanicus_.mechanicus_id )
  {
    result = 7120LL;
    goto LABEL_64;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  isMechanicusClosed = FeatureSwitchMgr::isMechanicusClosed(&v7->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( isMechanicusClosed )
  {
    result = 7135LL;
    goto LABEL_64;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.txt_config_mgr.mechanicus_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                            p_mechanicus_config_mgr,
                            this->cur_mechanicus_.mechanicus_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !mechanicus_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkEnterDungeon",
      836);
    v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v34,
            (const char (*)[34])"findMechanicusExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->cur_mechanicus_.mechanicus_id);
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mechanicus_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&mechanicus_config_ptr->ticket_cost_count);
  }
  if ( !mechanicus_config_ptr->ticket_cost_count )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkEnterDungeon",
      841);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v34, (const char (*)[15])"mechanicus_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v11,
            &this->cur_mechanicus_.mechanicus_id);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v12, (const char (*)[24])" config ticket num is 0");
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  if ( PlayerMechanicusComp::getTeamPlayerLimit(this) < *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkEnterDungeon",
      846);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v34, (const char (*)[14])"player_count:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v14, (const char (*)[20])" larger than limit!");
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  difficult_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusDifficultyExcelConfig(
                           &v15->design_config.txt_config_mgr.mechanicus_config_mgr,
                           *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !difficult_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkEnterDungeon",
      854);
    v16 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v34,
            (const char (*)[54])"findMechanicusDifficultyExcelConfig fails, difficult:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  isTeachDifficultLevel = TreatreMechanicusExcelConfigMgr::isTeachDifficultLevel(
                            &v17->design_config.txt_config_mgr.mechanicus_config_mgr,
                            *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( !isTeachDifficultLevel )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GmComp = Player::getGmComp(this->player_);
    if ( !PlayerGmComp::getGmSetValue<bool>(GmComp, 7u) )
    {
      *(_QWORD *)(v3 + 64) = 0LL;
      *(_QWORD *)(v3 + 72) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mechanicus_config_ptr->ticket_item_id);
      }
      *(_DWORD *)(v3 + 64) = mechanicus_config_ptr->ticket_item_id;
      if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mechanicus_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&mechanicus_config_ptr->ticket_cost_count);
      }
      *(_DWORD *)(v3 + 68) = mechanicus_config_ptr->ticket_cost_count;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v3 + 64)) )
      {
        result = 7129LL;
        goto LABEL_64;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mechanicus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&mechanicus_config_ptr->teach_difficult_level);
    }
    if ( mechanicus_config_ptr->teach_difficult_level )
    {
      if ( *(char *)(((unsigned __int64)&this->cur_mechanicus_.is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->cur_mechanicus_.is_finish_teach_dungeon);
      if ( !this->cur_mechanicus_.is_finish_teach_dungeon )
      {
        result = 7130LL;
        goto LABEL_64;
      }
    }
    if ( *(_DWORD *)(v3 + 32) > 1u )
    {
      val = *(_DWORD *)(v3 + 32) - 1;
      if ( !std::set<unsigned int>::count(&this->cur_mechanicus_.finish_difficult_level_set, &val) )
      {
        result = 7132LL;
        goto LABEL_64;
      }
    }
    if ( PlayerMechanicusComp::getDifficultLevelLimit(this) < *(_DWORD *)(v3 + 32) )
    {
      result = 7128LL;
      goto LABEL_64;
    }
    goto LABEL_63;
  }
  if ( *(_DWORD *)(v3 + 48) > 1u )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkEnterDungeon",
      862);
    v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v34, (const char (*)[17])"difficult_level:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v20, (const char (*)[22])" not support multiple");
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)mechanicus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&mechanicus_config_ptr->teach_difficult_level);
  }
  if ( mechanicus_config_ptr->teach_difficult_level != *(_DWORD *)(v3 + 32) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "checkEnterDungeon",
      867);
    v21 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v34, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
    v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v22,
            (const char (*)[31])" not support this teach level:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
    goto LABEL_64;
  }
  if ( *(char *)(((unsigned __int64)&this->cur_mechanicus_.is_finish_teach_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->cur_mechanicus_.is_finish_teach_dungeon);
  if ( !this->cur_mechanicus_.is_finish_teach_dungeon )
  {
LABEL_63:
    result = 0LL;
    goto LABEL_64;
  }
  common::milog::MiLogStream::create(
    &v34,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "checkEnterDungeon",
    872);
  v24 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v34, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &val);
  v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
          v25,
          (const char (*)[29])" already finish teach level:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v34);
  result = 7131LL;
LABEL_64:
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
  return result;
};

// Line 913: range 0000000017593452-0000000017593DD5
__int64 __fastcall PlayerMechanicusComp::trySubDungeonTicket(PlayerMechanicusComp *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  PlayerGmComp *GmComp; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t difficult_level; // [rsp+14h] [rbp-DCh]
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:912 64 8 10 reason:949 96 16 9 param:944";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::trySubDungeonTicket;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.mechanicus_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_mechanicus_);
    }
    mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                              p_mechanicus_config_mgr,
                              this->cur_mechanicus_.mechanicus_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( !mechanicus_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "trySubDungeonTicket",
        922);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v26,
             (const char (*)[34])"findMechanicusExcelConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cur_mechanicus_.mechanicus_id);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
      goto LABEL_44;
    }
    if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mechanicus_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&mechanicus_config_ptr->ticket_cost_count);
    }
    if ( !mechanicus_config_ptr->ticket_cost_count )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "trySubDungeonTicket",
        927);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v26, (const char (*)[15])"mechanicus_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v10,
              &this->cur_mechanicus_.mechanicus_id);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v11,
        (const char (*)[24])" config ticket num is 0");
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
      goto LABEL_44;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
                        &v12->design_config.txt_config_mgr.mechanicus_config_mgr,
                        *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( !difficult_level )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "trySubDungeonTicket",
        933);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v26,
              (const char (*)[38])"findDungeonDifficultLevel dungeon_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
      goto LABEL_44;
    }
    if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mechanicus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&mechanicus_config_ptr->teach_difficult_level);
    }
    if ( difficult_level == mechanicus_config_ptr->teach_difficult_level )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "trySubDungeonTicket",
        938);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v16,
              (const char (*)[25])" enter teach dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      GmComp = Player::getGmComp(this->player_);
      if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 7u) )
        goto LABEL_43;
      *(_QWORD *)(v2 + 96) = 0LL;
      *(_QWORD *)(v2 + 104) = 0LL;
      if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&mechanicus_config_ptr->ticket_item_id);
      }
      *(_DWORD *)(v2 + 96) = mechanicus_config_ptr->ticket_item_id;
      if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mechanicus_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->ticket_cost_count >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&mechanicus_config_ptr->ticket_cost_count);
      }
      *(_DWORD *)(v2 + 100) = mechanicus_config_ptr->ticket_cost_count;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      if ( PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 96)) )
      {
        result = 7129LL;
        goto LABEL_44;
      }
      SubItemReason::SubItemReason((SubItemReason *const)(v2 + 64), ACTION_REASON_MECHANICUS_DUNGEON_TICKET);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = Player::getItemComp(this->player_);
      if ( !PlayerItemComp::subItem(v20, (const ItemParam *)(v2 + 96), (const SubItemReason *)(v2 + 64)) )
      {
LABEL_43:
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "trySubDungeonTicket",
          952);
        v21 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v22, (const char (*)[15])" subItem fails");
        common::milog::MiLogStream::~MiLogStream(&v26);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "trySubDungeonTicket",
      916);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v26, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])" mechanicus_id is 0");
    common::milog::MiLogStream::~MiLogStream(&v26);
    result = 7120LL;
  }
LABEL_44:
  if ( v27 == (char *)v2 )
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

// Line 961: range 0000000017593DD6-0000000017594207
__int64 __fastcall PlayerMechanicusComp::randomDungeonId(
        const PlayerMechanicusComp *const this,
        uint32_t difficult_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  std::vector<unsigned int>::size_type v11; // r14
  std::vector<unsigned int>::const_reference v12; // rax
  unsigned int *v13; // rdx
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-D8h] BYREF
  const data::MechanicusDifficultyExcelConfig *difficult_config_ptr; // [rsp+20h] [rbp-D0h]
  const std::vector<unsigned int> *candidate_dungeon_vec; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 select_idx:974 64 4 19 difficult_level:960";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::randomDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = difficult_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  difficult_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusDifficultyExcelConfig(
                           &v5->design_config.txt_config_mgr.mechanicus_config_mgr,
                           *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( difficult_config_ptr )
  {
    candidate_dungeon_vec = &difficult_config_ptr->dungeon_list;
    if ( std::vector<unsigned int>::empty(&difficult_config_ptr->dungeon_list) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mechanicus/player_mechanicus_comp.cpp",
        "randomDungeonId",
        971);
      v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"difficult_level:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v9, (const char (*)[24])" dungeon_list is empty!");
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0LL;
    }
    else
    {
      v10 = std::vector<unsigned int>::size(candidate_dungeon_vec);
      *(_DWORD *)(v2 + 48) = common::tools::RandomUtils::rand<unsigned int>(0, v10 - 1);
      v11 = *(unsigned int *)(v2 + 48);
      if ( v11 >= std::vector<unsigned int>::size(candidate_dungeon_vec) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mechanicus/player_mechanicus_comp.cpp",
          "randomDungeonId",
          980);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v21,
                (const char (*)[28])"candidate_dungeon_vec size:");
        val = std::vector<unsigned int>::size(candidate_dungeon_vec);
        v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
        v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" select_idx:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v21);
        result = 0LL;
      }
      else
      {
        v12 = std::vector<unsigned int>::operator[](candidate_dungeon_vec, *(unsigned int *)(v2 + 48));
        v13 = (unsigned int *)v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        result = *v13;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "randomDungeonId",
      965);
    v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v21,
           (const char (*)[54])"findMechanicusDifficultyExcelConfig fails, difficult:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
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

// Line 985: range 0000000017594208-0000000017594215
void __cdecl PlayerMechanicusComp::onEnterDungeon(PlayerMechanicusComp *const this, uint32_t dungeon_id)
{
  ;
};

// Line 990: range 0000000017594216-000000001759465B
void __cdecl PlayerMechanicusComp::onLeaveDungeon(PlayerMechanicusComp *const this, DungeonScene *dungeon_scene)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isMechanicusPunishClosed; // bl
  TreatreMechanicusExcelConfigMgr *p_mechanicus_config_mgr; // rcx
  TreatreMechanicusExcelConfigMgr *v6; // rbx
  uint32_t DungeonId; // eax
  __int64 Now; // rsi
  uint32_t v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int val; // [rsp+1Ch] [rbp-54h] BYREF
  unsigned int SceneId; // [rsp+20h] [rbp-50h] BYREF
  uint32_t difficult_level; // [rsp+24h] [rbp-4Ch]
  const data::MechanicusExcelConfig *mechanicus_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  isMechanicusPunishClosed = FeatureSwitchMgr::isMechanicusPunishClosed(&v2->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !isMechanicusPunishClosed && DungeonScene::getDungeonType(dungeon_scene) == DUNGEON_THEATRE_MECHANICUS )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->cur_mechanicus_);
    }
    if ( this->cur_mechanicus_.mechanicus_id && DungeonScene::getDungeonResult(dungeon_scene) == DUNGEON_RESULT_NONE )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      p_mechanicus_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.mechanicus_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_mechanicus_);
      }
      mechanicus_config_ptr = data::TreatreMechanicusExcelConfigMgrBase::findMechanicusExcelConfig(
                                p_mechanicus_config_mgr,
                                this->cur_mechanicus_.mechanicus_id);
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( mechanicus_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->punish_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->punish_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&mechanicus_config_ptr->punish_time);
        }
        if ( mechanicus_config_ptr->punish_time )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v21);
          v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.mechanicus_config_mgr;
          DungeonId = DungeonScene::getDungeonId(dungeon_scene);
          difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(v6, DungeonId);
          std::shared_ptr<Config>::~shared_ptr(&v21);
          if ( difficult_level )
          {
            if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)mechanicus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->teach_difficult_level >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&mechanicus_config_ptr->teach_difficult_level);
            }
            if ( difficult_level != mechanicus_config_ptr->teach_difficult_level )
            {
              Now = (unsigned int)common::tools::TimeUtils::getNow();
              if ( *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->punish_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&mechanicus_config_ptr->punish_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&mechanicus_config_ptr->punish_time);
              }
              v9 = Now + mechanicus_config_ptr->punish_time;
              v10 = *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_.punish_over_time >> 3) + 0x7FFF8000);
              if ( v10 != 0 && v10 <= 3 )
              {
                LOBYTE(Now) = v10 != 0;
                __asan_report_store4(
                  &this->cur_mechanicus_.punish_over_time,
                  Now,
                  &this->cur_mechanicus_.punish_over_time);
              }
              this->cur_mechanicus_.punish_over_time = v9;
              common::milog::MiLogStream::create(
                &v22,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/mechanicus/player_mechanicus_comp.cpp",
                "onLeaveDungeon",
                1017);
              v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
              v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      v12,
                      (const char (*)[25])" quit unsettled dungeon:");
              SceneId = Scene::getSceneId((const Scene *const)dungeon_scene);
              v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &SceneId);
              v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v14,
                      (const char (*)[19])" punish_over_time:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                &this->cur_mechanicus_.punish_over_time);
              common::milog::MiLogStream::~MiLogStream(&v22);
            }
          }
        }
      }
    }
  }
};

// Line 1022: range 000000001759465C-0000000017594819
void __fastcall PlayerMechanicusComp::onMatchSucc(PlayerMechanicusComp *const this, uint32_t difficult_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 20 difficult_level:1021";
  *(_QWORD *)(v2 + 16) = PlayerMechanicusComp::onMatchSucc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = difficult_level;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mechanicus/player_mechanicus_comp.cpp",
    "onMatchSucc",
    1023);
  v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v9, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" onMatchSucc:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
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

// Line 1027: range 000000001759481A-000000001759494F
std::optional<std::map<unsigned int,unsigned int> > *__cdecl PlayerMechanicusComp::queryGearLevelMap(
        std::optional<std::map<unsigned int,unsigned int> > *retstr,
        const PlayerMechanicusComp *const this)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_mechanicus_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_mechanicus_);
  }
  if ( this->cur_mechanicus_.mechanicus_id )
  {
    std::optional<std::map<unsigned int,unsigned int>>::optional<std::map<unsigned int,unsigned int> const&,true>(
      retstr,
      &this->cur_mechanicus_.gear_level_map);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mechanicus/player_mechanicus_comp.cpp",
      "queryGearLevelMap",
      1030);
    v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v5, (const char (*)[18])"[MEHCANICUS] uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = operator<<(v2, this->player_);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v3, (const char (*)[24])&stru_26138400);
    common::milog::MiLogStream::~MiLogStream(&v5);
    std::optional<std::map<unsigned int,unsigned int>>::optional(retstr, (std::nullopt_t)&stru_26138400);
  }
  return retstr;
};
