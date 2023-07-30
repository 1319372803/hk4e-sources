// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/routine/player_routine_comp.cpp

// Line 27: range 0000000016CF23E2-0000000016CF267C
int32_t __cdecl PlayerRoutineComp::fromBin(PlayerRoutineComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  std::map<unsigned int,RoutineTypeInfo>::key_type *p_k; // rsi
  uint32_t v3; // edx
  char v4; // al
  uint32_t refresh_time; // ecx
  char v6; // dl
  bool v7; // dl
  std::map<unsigned int,RoutineDetailInfo> *p_detail_map; // rbx
  uint32_t v9; // ecx
  char v10; // dl
  std::map<unsigned int,RoutineTypeInfo>::key_type *v11; // rsi
  bool v12; // dl
  bool v13; // cl
  char v14; // dl
  __int64 v15; // rdx
  std::map<unsigned int,RoutineTypeInfo>::key_type __k; // [rsp+14h] [rbp-6Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerRoutineTypeBin>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerRoutineTypeBin>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerRoutineBin>::const_iterator __for_begin_0; // [rsp+28h] [rbp-58h] BYREF
  google::protobuf::RepeatedPtrField<proto::PlayerRoutineBin>::const_iterator __for_end_0; // [rsp+30h] [rbp-50h] BYREF
  const proto::PlayerRoutineCompBin *proto_comp; // [rsp+38h] [rbp-48h]
  const google::protobuf::RepeatedPtrField<proto::PlayerRoutineTypeBin> *__for_range; // [rsp+40h] [rbp-40h]
  const proto::PlayerRoutineTypeBin *routine_type_bin; // [rsp+48h] [rbp-38h]
  RoutineTypeInfo *routine_type_info; // [rsp+50h] [rbp-30h]
  const google::protobuf::RepeatedPtrField<proto::PlayerRoutineBin> *__for_range_0; // [rsp+58h] [rbp-28h]
  const proto::PlayerRoutineBin *routine_bin; // [rsp+60h] [rbp-20h]
  RoutineDetailInfo *routine_info; // [rsp+68h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::routine_bin(player_data_bin);
  std::map<unsigned int,RoutineTypeInfo>::clear(&this->routine_type_map_);
  __for_range = proto::PlayerRoutineCompBin::routine_type_bin_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PlayerRoutineTypeBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PlayerRoutineTypeBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerRoutineTypeBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    routine_type_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerRoutineTypeBin const>::operator*(&__for_begin);
    __k = proto::PlayerRoutineTypeBin::routine_type(routine_type_bin);
    p_k = &__k;
    routine_type_info = std::map<unsigned int,RoutineTypeInfo>::operator[](&this->routine_type_map_, &__k);
    v3 = proto::PlayerRoutineTypeBin::finished_num(routine_type_bin);
    v4 = *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000);
    if ( v4 != 0 && v4 <= 3 )
    {
      LOBYTE(p_k) = v4 != 0;
      __asan_report_store4(routine_type_info, p_k, v3);
    }
    routine_type_info->finished_num = v3;
    refresh_time = proto::PlayerRoutineTypeBin::last_refresh_time(routine_type_bin);
    v6 = *(_BYTE *)(((unsigned __int64)&routine_type_info->last_refresh_time >> 3) + 0x7FFF8000);
    LOBYTE(p_k) = v6 != 0;
    v7 = v6 != 0 && (char)((((_BYTE)routine_type_info + 4) & 7) + 3) >= v6;
    if ( v7 )
      __asan_report_store4(&routine_type_info->last_refresh_time, p_k, v7);
    routine_type_info->last_refresh_time = refresh_time;
    __for_range_0 = proto::PlayerRoutineTypeBin::routine_bin_list(routine_type_bin);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::PlayerRoutineBin>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::PlayerRoutineBin>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::PlayerRoutineBin const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      routine_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PlayerRoutineBin const>::operator*(&__for_begin_0);
      p_detail_map = &routine_type_info->detail_map;
      __k = proto::PlayerRoutineBin::routine_id(routine_bin);
      v11 = &__k;
      routine_info = std::map<unsigned int,RoutineDetailInfo>::operator[](p_detail_map, &__k);
      v9 = proto::PlayerRoutineBin::progress(routine_bin);
      v10 = *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v10 != 0;
      v12 = v10 != 0 && (char)(((unsigned __int8)routine_info & 7) + 3) >= v10;
      if ( v12 )
        __asan_report_store4(routine_info, v11, v12);
      routine_info->progress = v9;
      v13 = proto::PlayerRoutineBin::is_finished(routine_bin) != 0;
      v14 = *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v14 != 0;
      v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)routine_info + 4) & 7) >= v14);
      if ( (_BYTE)v15 )
        __asan_report_store1(&routine_info->is_finished, v11, v15);
      routine_info->is_finished = v13;
      google::protobuf::internal::RepeatedPtrIterator<proto::PlayerRoutineBin const>::operator++(&__for_begin_0);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::PlayerRoutineTypeBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 47: range 0000000016CF267E-0000000016CF29A8
int32_t __cdecl PlayerRoutineComp::toBin(PlayerRoutineComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  proto::PlayerRoutineCompBin *proto_comp; // [rsp+38h] [rbp-58h]
  std::map<unsigned int,RoutineTypeInfo> *__for_range; // [rsp+40h] [rbp-50h]
  const std::pair<unsigned int const,RoutineTypeInfo> *v9; // [rsp+48h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type; // [rsp+50h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type_info; // [rsp+58h] [rbp-38h]
  proto::PlayerRoutineTypeBin *routine_type_bin; // [rsp+60h] [rbp-30h]
  const std::map<unsigned int,RoutineDetailInfo> *__for_range_0; // [rsp+68h] [rbp-28h]
  const std::pair<unsigned int const,RoutineDetailInfo> *v14; // [rsp+70h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_id; // [rsp+78h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_info; // [rsp+80h] [rbp-10h]
  proto::PlayerRoutineBin *routine_bin; // [rsp+88h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_routine_bin(player_data_bin);
  __for_range = &this->routine_type_map_;
  __for_begin._M_node = std::map<unsigned int,RoutineTypeInfo>::begin(&this->routine_type_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator*(&__for_begin);
    routine_type = std::get<0ul,unsigned int const,RoutineTypeInfo>(v9);
    routine_type_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *)std::get<1ul,unsigned int const,RoutineTypeInfo>(v9);
    routine_type_bin = proto::PlayerRoutineCompBin::add_routine_type_bin_list(proto_comp);
    if ( *(_BYTE *)(((unsigned __int64)routine_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)routine_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(routine_type);
    }
    proto::PlayerRoutineTypeBin::set_routine_type(routine_type_bin, *routine_type);
    if ( *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(routine_type_info);
    }
    proto::PlayerRoutineTypeBin::set_finished_num(routine_type_bin, routine_type_info->finished_num);
    if ( *(_BYTE *)(((unsigned __int64)&routine_type_info->last_refresh_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_type_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_type_info->last_refresh_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&routine_type_info->last_refresh_time);
    }
    proto::PlayerRoutineTypeBin::set_last_refresh_time(routine_type_bin, routine_type_info->last_refresh_time);
    __for_range_0 = &routine_type_info->detail_map;
    __for_begin_0._M_node = std::map<unsigned int,RoutineDetailInfo>::begin(&routine_type_info->detail_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,RoutineDetailInfo>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator*(&__for_begin_0);
      routine_id = std::get<0ul,unsigned int const,RoutineDetailInfo>(v14);
      routine_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *)std::get<1ul,unsigned int const,RoutineDetailInfo>(v14);
      routine_bin = proto::PlayerRoutineTypeBin::add_routine_bin_list(routine_type_bin);
      if ( *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)routine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(routine_id);
      }
      proto::PlayerRoutineBin::set_routine_id(routine_bin, *routine_id);
      if ( *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)routine_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_info >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(routine_info);
      }
      proto::PlayerRoutineBin::set_progress(routine_bin, routine_info->progress);
      if ( *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)routine_info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load1(&routine_info->is_finished);
      }
      proto::PlayerRoutineBin::set_is_finished(routine_bin, routine_info->is_finished);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 68: range 0000000016CF29AA-0000000016CF2D9B
int32_t __cdecl PlayerRoutineComp::init(PlayerRoutineComp *const this)
{
  unsigned __int64 p_M_last; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  int32_t result; // eax
  PlayerEventComp *event_comp; // [rsp+38h] [rbp-E8h]
  PlayerEventComp v7; // [rsp+40h] [rbp-E0h] BYREF

  p_M_last = (unsigned __int64)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 11 this_ptr:69 64 16 11 this_wtr:75";
  *(_QWORD *)(p_M_last + 16) = PlayerRoutineComp::init;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerRoutineComp>((PlayerRoutineComp *)(p_M_last + 32));
  if ( std::operator==<PlayerRoutineComp>(0LL, (const std::shared_ptr<PlayerRoutineComp> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "init",
      72);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_,
      (const char (*)[49])"dynamic_pointer_cast to PlayerRoutineComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<PlayerRoutineComp>::weak_ptr<PlayerRoutineComp,void>(
      (std::weak_ptr<PlayerRoutineComp> *const)(p_M_last + 64),
      (const std::shared_ptr<PlayerRoutineComp> *)(p_M_last + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerRoutineComp>::weak_ptr(
      (std::weak_ptr<PlayerRoutineComp> *const)&v7.event_center_,
      (const std::weak_ptr<PlayerRoutineComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerRoutineComp,MonsterDieEvent>(
      &v7,
      (std::weak_ptr<PlayerRoutineComp> *)event_comp,
      (void (*)(PlayerRoutineComp *, const MonsterDieEvent *))&v7.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerRoutineComp>::~weak_ptr((std::weak_ptr<PlayerRoutineComp> *const)&v7.event_center_);
    std::weak_ptr<PlayerRoutineComp>::weak_ptr(
      (std::weak_ptr<PlayerRoutineComp> *const)&v7.event_center_,
      (const std::weak_ptr<PlayerRoutineComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerRoutineComp,WorldGatherEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerRoutineComp> *)event_comp,
      (void (*)(PlayerRoutineComp *, const WorldGatherEvent *))&v7.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerRoutineComp>::~weak_ptr((std::weak_ptr<PlayerRoutineComp> *const)&v7.event_center_);
    std::weak_ptr<PlayerRoutineComp>::weak_ptr(
      (std::weak_ptr<PlayerRoutineComp> *const)&v7._M_weak_this._M_refcount,
      (const std::weak_ptr<PlayerRoutineComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerRoutineComp,ChallengeFinishEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerRoutineComp> *)event_comp,
      (void (*)(PlayerRoutineComp *, const ChallengeFinishEvent *))&v7._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerRoutineComp>::~weak_ptr((std::weak_ptr<PlayerRoutineComp> *const)&v7._M_weak_this._M_refcount);
    v4 = 0;
    std::weak_ptr<PlayerRoutineComp>::~weak_ptr((std::weak_ptr<PlayerRoutineComp> *const)(p_M_last + 64));
  }
  std::shared_ptr<PlayerRoutineComp>::~shared_ptr((std::shared_ptr<PlayerRoutineComp> *const)(p_M_last + 32));
  result = v4;
  if ( &v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
  {
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_last = 1172321806LL;
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 84: range 0000000016CF2D9C-0000000016CF2E0C
int32_t __cdecl PlayerRoutineComp::onLogin(PlayerRoutineComp *const this, bool is_new_player)
{
  PlayerRoutineComp::tryRefreshAllRoutineTypeInfo(this, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
    PlayerRoutineComp::registerAllRoutineTypeGroups(this);
  return 0;
};

// Line 96: range 0000000016CF2E0E-0000000016CF2E2D
void __cdecl PlayerRoutineComp::onDailyRefresh(PlayerRoutineComp *const this)
{
  PlayerRoutineComp::tryRefreshAllRoutineTypeInfo(this, 1);
};

// Line 101: range 0000000016CF2E2E-0000000016CF3104
int32_t __cdecl PlayerRoutineComp::notifyAllData(PlayerRoutineComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  int32_t result; // eax
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,RoutineTypeInfo> *__for_range; // [rsp+28h] [rbp-D8h]
  const std::pair<unsigned int const,RoutineTypeInfo> *v9; // [rsp+30h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type; // [rsp+38h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type_info; // [rsp+40h] [rbp-C0h]
  proto::PlayerRoutineInfo *routine_proto; // [rsp+48h] [rbp-B8h]
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:102";
  *(_QWORD *)(v1 + 16) = PlayerRoutineComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::PlayerRoutineDataNotify::PlayerRoutineDataNotify((proto::PlayerRoutineDataNotify *const)(v1 + 48));
  __for_range = &this->routine_type_map_;
  __for_begin._M_node = std::map<unsigned int,RoutineTypeInfo>::begin(&this->routine_type_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator*(&__for_begin);
    routine_type = std::get<0ul,unsigned int const,RoutineTypeInfo>(v9);
    routine_type_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *)std::get<1ul,unsigned int const,RoutineTypeInfo>(v9);
    routine_proto = proto::PlayerRoutineDataNotify::add_routine_info_list((proto::PlayerRoutineDataNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)routine_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)routine_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(routine_type);
    }
    proto::PlayerRoutineInfo::set_routine_type(routine_proto, *routine_type);
    if ( *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(routine_type_info);
    }
    proto::PlayerRoutineInfo::set_finished_num(routine_proto, routine_type_info->finished_num);
    std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v4 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::PlayerRoutineDataNotify::~PlayerRoutineDataNotify((proto::PlayerRoutineDataNotify *const)(v1 + 48));
  result = v4;
  if ( v13 == (char *)v1 )
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

// Line 113: range 0000000016CF3106-0000000016CF36D8
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerRoutineComp::openRoutineType(PlayerRoutineComp *const this, uint32_t routine_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineTypeOpen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  __int64 result; // rax
  std::string v18; // [rsp+0h] [rbp-120h] OVERLAPPED BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  RoutineTypeInfo *routine_type_info; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v22; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v18._M_string_length = (std::string::size_type)this;
  HIDWORD(v18._M_dataplus._M_p) = routine_type;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:127 48 4 16 routine_type:112 64 8 8 iter:115 96 16 11 log_ptr:132";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::openRoutineType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = HIDWORD(v18._M_dataplus._M_p);
  *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v2 + 64) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                     (std::map<unsigned int,RoutineTypeInfo> *const)(v18._M_string_length + 32),
                                                                     (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,RoutineTypeInfo>::end((std::map<unsigned int,RoutineTypeInfo> *const)(v18._M_string_length + 32))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "openRoutineType",
      118);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v23, (const char (*)[14])"routine_type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])" already open, uid:");
    if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v18._M_string_length + 24);
    *((_DWORD *)&v18._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v18._M_string_length
                                                                                                + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v7,
      (const unsigned int *)&v18._anon_0._M_allocated_capacity + 3);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    v10 = RoutineExcelConfigMgr::findRoutineTypeExcelConfig(
            &v9->design_config.txt_config_mgr.routine_config_mgr,
            *(_DWORD *)(v2 + 48)) == 0LL;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/routine/player_routine_comp.cpp",
        "openRoutineType",
        123);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v23,
              (const char (*)[33])"findRoutineTypeExcelConfig type:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v18._M_string_length + 24);
      *((_DWORD *)&v18._anon_0._M_allocated_capacity + 3) = Player::getUid(*(const Player *const *)(v18._M_string_length
                                                                                                  + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v13,
        (const unsigned int *)&v18._anon_0._M_allocated_capacity + 3);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v18._M_string_length + 24);
      BasicComp = Player::getBasicComp(*(Player *const *)(v18._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v23, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xBD8u, v18);
      std::string::~string(&v23);
      routine_type_info = std::map<unsigned int,RoutineTypeInfo>::operator[](
                            (std::map<unsigned int,RoutineTypeInfo> *const)(v18._M_string_length + 32),
                            (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v2 + 48));
      PlayerRoutineComp::tryRefreshRoutineTypeInfo(
        (PlayerRoutineComp *const)v18._M_string_length,
        *(_DWORD *)(v2 + 48),
        1);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyRoutineTypeOpen>();
      v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineTypeOpen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineTypeOpen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      proto_log::PlayerLogBodyRoutineTypeOpen::set_routine_type(v15, *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((v18._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v18._M_string_length + 24);
      v16 = *(Player **)(v18._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v22, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRoutineTypeOpen,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyRoutineTypeOpen> *)(v2 + 96));
      Player::printStatLog(v16, &p_body_ptr, &v22, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v22);
      v8 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyRoutineTypeOpen>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRoutineTypeOpen> *const)(v2 + 96));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    }
  }
  result = v8;
  if ( v24 == (char *)v2 )
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

// Line 139: range 0000000016CF36DA-0000000016CF3D1B
void __cdecl PlayerRoutineComp::registerAllRoutineTypeGroups(PlayerRoutineComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  bool *p_is_finished; // rax
  RoutineExcelConfigMgr *p_routine_config_mgr; // rcx
  Scene *v6; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_begin_0; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_end_0; // [rsp+30h] [rbp-130h] BYREF
  std::map<unsigned int,RoutineTypeInfo> *__for_range; // [rsp+38h] [rbp-128h]
  const std::pair<unsigned int const,RoutineTypeInfo> *v18; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineTypeInfo> >::type *_; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type_info; // [rsp+50h] [rbp-110h]
  const std::map<unsigned int,RoutineDetailInfo> *__for_range_0; // [rsp+58h] [rbp-108h]
  const std::pair<unsigned int const,RoutineDetailInfo> *v22; // [rsp+60h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_id; // [rsp+68h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_info; // [rsp+70h] [rbp-F0h]
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+78h] [rbp-E8h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+80h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:140 64 24 16 group_id_vec:146";
  *(_QWORD *)(v1 + 16) = PlayerRoutineComp::registerAllRoutineTypeGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v1 + 32), &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "registerAllRoutineTypeGroups",
      143);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v27, (const char (*)[24])"getMainWorldScene fails");
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
    __for_range = &this->routine_type_map_;
    __for_begin._M_node = std::map<unsigned int,RoutineTypeInfo>::begin(&this->routine_type_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,RoutineTypeInfo>(v18);
      routine_type_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *)std::get<1ul,unsigned int const,RoutineTypeInfo>(v18);
      __for_range_0 = &routine_type_info->detail_map;
      __for_begin_0._M_node = std::map<unsigned int,RoutineDetailInfo>::begin(&routine_type_info->detail_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,RoutineDetailInfo>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator*(&__for_begin_0);
        routine_id = std::get<0ul,unsigned int const,RoutineDetailInfo>(v22);
        routine_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *)std::get<1ul,unsigned int const,RoutineDetailInfo>(v22);
        p_is_finished = &routine_info->is_finished;
        if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_finished);
        }
        if ( !routine_info->is_finished )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&__r);
          p_routine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.routine_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)routine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(routine_id);
          }
          routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                                 p_routine_config_mgr,
                                 *routine_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
          if ( routine_config_ptr )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v1 + 64),
              &routine_config_ptr->group_id);
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator++(&__for_begin_0);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator++(&__for_begin);
    }
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v6);
    if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(BlockGroupComp);
    v8 = *(_QWORD *)BlockGroupComp + 96LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 96LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD))v8)(BlockGroupComp, v1 + 64, 0LL, 0LL);
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "registerAllRoutineTypeGroups",
      164);
    v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v27, (const char (*)[17])"register groups:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, (const std::vector<unsigned int> *)(v1 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 168: range 0000000016CF3D1C-0000000016CF4254
void __cdecl PlayerRoutineComp::registerRoutineTypeGroups(
        PlayerRoutineComp *const this,
        const RoutineTypeInfo *routine_type_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::size_type v5; // rax
  bool *p_is_finished; // rax
  RoutineExcelConfigMgr *p_routine_config_mgr; // rcx
  Scene *v8; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int val; // [rsp+14h] [rbp-11Ch] BYREF
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  const std::map<unsigned int,RoutineDetailInfo> *__for_range; // [rsp+28h] [rbp-108h]
  const std::pair<unsigned int const,RoutineDetailInfo> *v18; // [rsp+30h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_id; // [rsp+38h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_info; // [rsp+40h] [rbp-F0h]
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:185 64 24 16 group_id_vec:169";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::registerRoutineTypeGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  v5 = std::map<unsigned int,RoutineDetailInfo>::size(&routine_type_info->detail_map);
  std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v2 + 64), v5);
  __for_range = &routine_type_info->detail_map;
  __for_begin._M_node = std::map<unsigned int,RoutineDetailInfo>::begin(&routine_type_info->detail_map)._M_node;
  __for_end._M_node = std::map<unsigned int,RoutineDetailInfo>::end(&routine_type_info->detail_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator*(&__for_begin);
    routine_id = std::get<0ul,unsigned int const,RoutineDetailInfo>(v18);
    routine_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *)std::get<1ul,unsigned int const,RoutineDetailInfo>(v18);
    p_is_finished = &routine_info->is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    if ( !routine_info->is_finished )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      p_routine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.routine_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)routine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(routine_id);
      }
      routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                             p_routine_config_mgr,
                             *routine_id);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( routine_config_ptr )
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 64), &routine_config_ptr->group_id);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&v22);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
    (std::shared_ptr<Scene> *const)(v2 + 32),
    (std::shared_ptr<PlayerWorldScene> *)&v22);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)&v22);
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL) )
  {
    v8 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v8);
    if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(BlockGroupComp);
    v10 = *(_QWORD *)BlockGroupComp + 96LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 96LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD))v10)(BlockGroupComp, v2 + 64, 0LL, 0LL);
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "registerRoutineTypeGroups",
      190);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v23, (const char (*)[16])"registerGroups:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, (const std::vector<unsigned int> *)(v2 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v24 == (char *)v2 )
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

// Line 195: range 0000000016CF4256-0000000016CF453C
void __cdecl PlayerRoutineComp::tryRefreshAllRoutineTypeInfo(PlayerRoutineComp *const this, bool is_notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<unsigned int>::size_type v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  uint32_t *v7; // rdx
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::map<unsigned int,RoutineTypeInfo> *__for_range; // [rsp+28h] [rbp-A8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-A0h]
  const std::pair<unsigned int const,RoutineTypeInfo> *v12; // [rsp+38h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type; // [rsp+40h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *_; // [rsp+48h] [rbp-88h]
  char v15[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 20 routine_type_vec:196";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::tryRefreshAllRoutineTypeInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
  v5 = std::map<unsigned int,RoutineTypeInfo>::size(&this->routine_type_map_);
  std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v2 + 32), v5);
  __for_range = &this->routine_type_map_;
  __for_begin._M_node = std::map<unsigned int,RoutineTypeInfo>::begin(&this->routine_type_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator*(&__for_begin);
    routine_type = std::get<0ul,unsigned int const,RoutineTypeInfo>(v12);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *)std::get<1ul,unsigned int const,RoutineTypeInfo>(v12);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 32), routine_type);
    std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v2 + 32);
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 32))._M_current;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerRoutineComp::tryRefreshRoutineTypeInfo(this, *v7, is_notify);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  if ( v15 == (char *)v2 )
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

// Line 211: range 0000000016CF453E-0000000016CF4B8A
__int64 __fastcall PlayerRoutineComp::tryRefreshRoutineTypeInfo(
        PlayerRoutineComp *const this,
        uint32_t routine_type,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const RefreshPolicyExcelConfigMgr *p_refresh_policy_config_mgr; // rdi
  uint32_t last_refresh_time; // esi
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  unsigned __int64 v18; // rax
  unsigned int val; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t now; // [rsp+14h] [rbp-DCh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  const data::RoutineTypeExcelConfig *routine_type_config_ptr; // [rsp+20h] [rbp-D0h]
  RoutineTypeInfo *routine_type_info; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 routine_type:210 64 8 8 iter:212";
  *(_QWORD *)(v3 + 16) = PlayerRoutineComp::tryRefreshRoutineTypeInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = routine_type;
  *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v3 + 64) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                     &this->routine_type_map_,
                                                                     (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "tryRefreshRoutineTypeInfo",
      215);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v27, (const char (*)[14])"routine_type:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    routine_type_config_ptr = RoutineExcelConfigMgr::findRoutineTypeExcelConfig(
                                &v10->design_config.txt_config_mgr.routine_config_mgr,
                                *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( routine_type_config_ptr )
    {
      routine_type_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v3 + 64))->second;
      now = common::tools::TimeUtils::getNow();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      p_refresh_policy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.refresh_policy_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&routine_type_info->last_refresh_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)routine_type_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_type_info->last_refresh_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        p_refresh_policy_config_mgr = (const RefreshPolicyExcelConfigMgr *)&routine_type_info->last_refresh_time;
        __asan_report_load4(&routine_type_info->last_refresh_time);
      }
      last_refresh_time = routine_type_info->last_refresh_time;
      if ( *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->refresh_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)routine_type_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->refresh_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        p_refresh_policy_config_mgr = (const RefreshPolicyExcelConfigMgr *)&routine_type_config_ptr->refresh_id;
        __asan_report_load4(&routine_type_config_ptr->refresh_id);
      }
      v14 = !RefreshPolicyExcelConfigMgr::isTimeToRefresh(
               p_refresh_policy_config_mgr,
               routine_type_config_ptr->refresh_id,
               last_refresh_time,
               now);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( v14 )
      {
        result = 0xFFFFFFFFLL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/routine/player_routine_comp.cpp",
          "tryRefreshRoutineTypeInfo",
          232);
        v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                &v27,
                (const char (*)[15])"real refresh: ");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v16, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        PlayerRoutineComp::clearRoutineType(this, *(_DWORD *)(v3 + 48), routine_type_info);
        PlayerRoutineComp::doRefreshRoutineTypeInfo(this, now, *(_DWORD *)(v3 + 48), routine_type_info);
        if ( is_notify )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v18 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
          (*(void (__fastcall **)(PlayerRoutineComp *const))v18)(this);
          PlayerRoutineComp::broadcastRoutineTypeRefreshInfo(this, *(_DWORD *)(v3 + 48), routine_type_info);
        }
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/routine/player_routine_comp.cpp",
        "tryRefreshRoutineTypeInfo",
        221);
      v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v27,
              (const char (*)[48])"findRoutineTypeExcelConfig fails, routine_type:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 0xFFFFFFFFLL;
    }
  }
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

// Line 252: range 0000000016CF4B8C-0000000016CF53EB
__int64 __fastcall PlayerRoutineComp::doRefreshRoutineTypeInfo(
        PlayerRoutineComp *const this,
        __int32 now,
        __int32 routine_type,
        RoutineTypeInfo *routine_type_info)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __int64 v13; // rsi
  bool v14; // dl
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rax
  _DWORD *v16; // rdx
  RoutineDetailInfo *v17; // rax
  bool v18; // dl
  __int64 v19; // rsi
  __int64 v20; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineGen,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v25; // [rsp+0h] [rbp-180h]
  RoutineTypeInfo *routine_type_infoa; // [rsp+8h] [rbp-178h]
  uint32_t nowa; // [rsp+14h] [rbp-16Ch]
  PlayerRoutineComp *thisa; // [rsp+18h] [rbp-168h]
  uint32_t refresh_num; // [rsp+24h] [rbp-15Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const data::RoutineTypeExcelConfig *routine_type_config_ptr; // [rsp+38h] [rbp-148h]
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-140h]
  RoutineDetailInfo *routine_info; // [rsp+48h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v36; // [rsp+60h] [rbp-120h] BYREF
  std::string v37; // [rsp+70h] [rbp-110h] BYREF
  char v38[240]; // [rsp+90h] [rbp-F0h] BYREF

  *(&v25._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v25._anon_0._M_allocated_capacity) = now;
  *(_DWORD *)v25._anon_0._M_local_buf = routine_type;
  v25._M_string_length = (std::string::size_type)routine_type_info;
  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 10 holder:253 48 4 14 routine_id:286 64 4 16 routine_type:251 80 16 11 log_ptr:293 112 48"
                        " 18 routine_id_set:264";
  *(_QWORD *)(v4 + 16) = PlayerRoutineComp::doRefreshRoutineTypeInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 64) = *(_DWORD *)v25._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v37, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xBDAu, v25);
  std::string::~string(&v37);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
  routine_type_config_ptr = RoutineExcelConfigMgr::findRoutineTypeExcelConfig(
                              &v8->design_config.txt_config_mgr.routine_config_mgr,
                              *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v36);
  if ( routine_type_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->refresh_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_type_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->refresh_num >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&routine_type_config_ptr->refresh_num);
    }
    refresh_num = routine_type_config_ptr->refresh_num;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 112));
    if ( *(_DWORD *)(v4 + 64) == 1 )
    {
      PlayerRoutineComp::doRefreshSnowMountainRoutins(thisa, refresh_num, (std::set<unsigned int> *)(v4 + 112));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/routine/player_routine_comp.cpp",
        "doRefreshRoutineTypeInfo",
        273);
      v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)&v37,
              (const char (*)[26])off_25F36880);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
    }
    if ( refresh_num != std::set<unsigned int>::size((const std::set<unsigned int> *const)(v4 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v37,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/routine/player_routine_comp.cpp",
        "doRefreshRoutineTypeInfo",
        278);
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)&v37,
              (const char (*)[32])"refresh RoutineType fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      *(_DWORD *)(v4 + 48) = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
    }
    v13 = (((_BYTE)routine_type_infoa + 4) & 7u) + 3;
    v14 = *(_BYTE *)(((unsigned __int64)&routine_type_infoa->last_refresh_time >> 3) + 0x7FFF8000) != 0
       && (char)((((_BYTE)routine_type_infoa + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_type_infoa->last_refresh_time >> 3)
                                                                        + 0x7FFF8000);
    if ( v14 )
      __asan_report_store4(&routine_type_infoa->last_refresh_time, v13, v14);
    routine_type_infoa->last_refresh_time = nowa;
    if ( *(_BYTE *)(((unsigned __int64)routine_type_infoa >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)routine_type_infoa >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(routine_type_infoa, v13, (_BYTE)routine_type_infoa);
    }
    routine_type_infoa->finished_num = 0;
    std::map<unsigned int,RoutineDetailInfo>::clear(&routine_type_infoa->detail_map);
    __for_range = (std::set<unsigned int> *)(v4 + 112);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 112))._M_node;
    __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 112))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      *(_DWORD *)(v4 + 48) = *v16;
      v17 = std::map<unsigned int,RoutineDetailInfo>::operator[](
              &routine_type_infoa->detail_map,
              (const std::map<unsigned int,RoutineDetailInfo>::key_type *)(v4 + 48));
      routine_info = v17;
      v18 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
         && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
      if ( v18 )
        __asan_report_store4(v17, ((unsigned __int8)v17 & 7u) + 3, v18);
      routine_info->progress = 0;
      v19 = ((_BYTE)routine_info + 4) & 7;
      v20 = (*(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000));
      if ( (_BYTE)v20 )
        __asan_report_store1(&routine_info->is_finished, v19, v20);
      routine_info->is_finished = 0;
      common::tools::perf::make_shared<proto_log::PlayerLogBodyRoutineGen>();
      v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      proto_log::PlayerLogBodyRoutineGen::set_routine_type(v21, *(_DWORD *)(v4 + 64));
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineGen,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineGen,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
      proto_log::PlayerLogBodyRoutineGen::set_routine_id(v22, *(_DWORD *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v36, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRoutineGen,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyRoutineGen> *)(v4 + 80));
      Player::printStatLog(player, &p_body_ptr, &v36, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v36);
      std::shared_ptr<proto_log::PlayerLogBodyRoutineGen>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRoutineGen> *const)(v4 + 80));
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    PlayerRoutineComp::registerRoutineTypeGroups(thisa, routine_type_infoa);
    v10 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/routine/player_routine_comp.cpp",
      "doRefreshRoutineTypeInfo",
      258);
    v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)&v37,
           (const char (*)[48])"findRoutineTypeExcelConfig fails, routine_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
    v10 = -1;
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  result = v10;
  if ( v38 == (char *)v4 )
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

// Line 306: range 0000000016CF53EC-0000000016CF5D9B
void __fastcall PlayerRoutineComp::doRefreshSnowMountainRoutins(
        PlayerRoutineComp *const this,
        uint32_t refresh_num,
        std::set<unsigned int> *routine_id_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const unsigned int *v7; // rax
  _DWORD *v8; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int v16; // r14d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  int v26; // r14d
  unsigned int *v27; // r14
  std::vector<unsigned int>::iterator v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-150h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-148h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-130h] BYREF
  char v41[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 15 special_num:308 48 4 7 num:345 64 4 14 routine_id:313 80 4 15 refresh_num:305 96 24 17"
                        " candidate_vec:328 160 24 14 backup_vec:346";
  *(_QWORD *)(v3 + 16) = PlayerRoutineComp::doRefreshSnowMountainRoutins;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 80) = refresh_num;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
  *(_DWORD *)(v3 + 32) = ConstValueExcelConfigMgr::getSnowMountainRoutineSpecialNum(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v39);
  if ( *(_DWORD *)(v3 + 32) )
  {
    v7 = std::min<unsigned int>((const unsigned int *)(v3 + 32), (const unsigned int *)(v3 + 80));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v3 + 48) = *v8;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.routine_config_mgr.snow_mountain_specail_tag_vec;
    std::shared_ptr<Config>::~shared_ptr(&v39);
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v3 + 64) = *v10;
      if ( PlayerRoutineComp::isRoutineSatisfied(this, *(_DWORD *)(v3 + 64)) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 160),
          (const std::vector<unsigned int>::value_type *)(v3 + 64));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v3 + 160),
      routine_id_set,
      *(_DWORD *)(v3 + 48));
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "doRefreshSnowMountainRoutins",
      321);
    v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v40,
            (const char (*)[20])"select special_tag:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int>(v11, routine_id_set);
    v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" num:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v40);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
  }
  if ( std::set<unsigned int>::size(routine_id_set) < *(unsigned int *)(v3 + 80) )
  {
    v16 = *(_DWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 48) = v16 - std::set<unsigned int>::size(routine_id_set);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    __for_range_0 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.routine_config_mgr.snow_mountain_normal_tag_vec;
    std::shared_ptr<Config>::~shared_ptr(&v39);
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range_0)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v17 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      *(_DWORD *)(v3 + 64) = *v18;
      if ( PlayerRoutineComp::isRoutineSatisfied(this, *(_DWORD *)(v3 + 64)) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 96),
          (const std::vector<unsigned int>::value_type *)(v3 + 64));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v3 + 96),
      (std::vector<unsigned int> *)(v3 + 160),
      *(_DWORD *)(v3 + 48));
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    v20._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      routine_id_set,
      v20,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "doRefreshSnowMountainRoutins",
      339);
    v21 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v40,
            (const char (*)[19])"select normal_tag:");
    v22 = common::milog::MiLogStream::operator<<<unsigned int>(v21, (const std::vector<unsigned int> *)(v3 + 160));
    v23 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v22, (const char (*)[6])" num:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
    v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v40);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  }
  if ( std::set<unsigned int>::size(routine_id_set) < *(unsigned int *)(v3 + 80) )
  {
    v26 = *(_DWORD *)(v3 + 80);
    *(_DWORD *)(v3 + 48) = v26 - std::set<unsigned int>::size(routine_id_set);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 160));
    PlayerRoutineComp::selectFromBackupPool(this, 1u, *(_DWORD *)(v3 + 48), (std::vector<unsigned int> *)(v3 + 160));
    v27 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    v28._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 160))._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      routine_id_set,
      v28,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v27);
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "doRefreshSnowMountainRoutins",
      349);
    v29 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v40, (const char (*)[15])"select backup:");
    v30 = common::milog::MiLogStream::operator<<<unsigned int>(v29, (const std::vector<unsigned int> *)(v3 + 160));
    v31 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v30, (const char (*)[6])" num:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v3 + 48));
    v33 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v32, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v40);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 160));
  }
  if ( v41 == (char *)v3 )
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

// Line 355: range 0000000016CF5D9C-0000000016CF6363
void __fastcall PlayerRoutineComp::selectFromBackupPool(
        PlayerRoutineComp *const this,
        uint32_t routine_type,
        uint32_t num,
        std::vector<unsigned int> *result_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::vector<unsigned int>::size_type v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  const std::map<unsigned int,std::vector<unsigned int>> *config_backup_routine_map; // [rsp+38h] [rbp-138h]
  const std::vector<unsigned int> *config_routine_id_vec; // [rsp+40h] [rbp-130h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-128h]
  std::shared_ptr<Config> v28; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+60h] [rbp-110h] BYREF
  char v30[240]; // [rsp+80h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 14 routine_id:366 64 4 16 routine_type:354 80 4 7 num:354 96 8 8 iter:357 128 24 17 candidate_vec:364";
  *(_QWORD *)(v4 + 16) = PlayerRoutineComp::selectFromBackupPool;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 64) = routine_type;
  *(_DWORD *)(v4 + 80) = num;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  config_backup_routine_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.routine_config_mgr.backup_routine_map;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                                     config_backup_routine_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 64));
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,std::vector<unsigned int>>::end(config_backup_routine_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v4 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/routine/player_routine_comp.cpp",
      "selectFromBackupPool",
      360);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v29, (const char (*)[24])off_25F36BA0);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])off_25F36BE0);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    config_routine_id_vec = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v4 + 96))->second;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
    v9 = std::vector<unsigned int>::size(config_routine_id_vec);
    std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v4 + 128), v9);
    __for_range = config_routine_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(config_routine_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v4 + 48) = *v11;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      v13 = !FeatureSwitchMgr::isRoutineIdClosed(&v12->feature_switch_mgr, *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( v13 )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v4 + 128),
          (const std::vector<unsigned int>::value_type *)(v4 + 48));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::tools::RandomUtils::randomSelect<unsigned int>(
      (const std::vector<unsigned int> *)(v4 + 128),
      result_vec,
      *(_DWORD *)(v4 + 80));
    if ( std::vector<unsigned int>::size(result_vec) < *(unsigned int *)(v4 + 80) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/routine/player_routine_comp.cpp",
        "selectFromBackupPool",
        376);
      v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v29, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              v15,
              (const char (*)[31])" fails, backup candidate size:");
      __for_begin._M_current = (const unsigned int *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v4 + 128));
      v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v16,
              (const unsigned __int64 *)&__for_begin);
      v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" result size:");
      __for_end._M_current = (const unsigned int *)std::vector<unsigned int>::size(result_vec);
      v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v18,
              (const unsigned __int64 *)&__for_end);
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" num:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
  }
  if ( v30 == (char *)v4 )
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
};

// Line 382: range 0000000016CF6364-0000000016CF684F
__int64 __fastcall PlayerRoutineComp::isRoutineSatisfied(PlayerRoutineComp *const this, uint32_t routine_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  bool isRoutineCondSatisfied; // al
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isRoutineIdClosed; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+10h] [rbp-110h] BYREF
  data::LogicType logic_type; // [rsp+14h] [rbp-10Ch]
  std::vector<data::RoutineCondContent>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<data::RoutineCondContent>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+28h] [rbp-F8h]
  const std::vector<data::RoutineCondContent> *__for_range; // [rsp+30h] [rbp-F0h]
  const data::RoutineCondContent *cond; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 14 routine_id:381 48 40 18 cond_check_vec:394";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::isRoutineSatisfied;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 32) = routine_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                         &v5->design_config.txt_config_mgr.routine_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( routine_config_ptr )
  {
    logic_type = LOGIC_AND;
    if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->cond_comb >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&routine_config_ptr->cond_comb >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&routine_config_ptr->cond_comb);
    }
    if ( routine_config_ptr->cond_comb )
      logic_type = routine_config_ptr->cond_comb;
    std::vector<bool>::vector((std::vector<bool> *const)(v2 + 48));
    __for_range = &routine_config_ptr->cond_vec;
    __for_begin._M_current = std::vector<data::RoutineCondContent>::begin(&routine_config_ptr->cond_vec)._M_current;
    __for_end._M_current = std::vector<data::RoutineCondContent>::end(&routine_config_ptr->cond_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::RoutineCondContent const*,std::vector<data::RoutineCondContent>>(
              &__for_begin,
              &__for_end) )
    {
      cond = __gnu_cxx::__normal_iterator<data::RoutineCondContent const*,std::vector<data::RoutineCondContent>>::operator*(&__for_begin);
      isRoutineCondSatisfied = PlayerRoutineComp::isRoutineCondSatisfied(this, cond);
      std::vector<bool>::push_back((std::vector<bool> *const)(v2 + 48), isRoutineCondSatisfied);
      __gnu_cxx::__normal_iterator<data::RoutineCondContent const*,std::vector<data::RoutineCondContent>>::operator++(&__for_begin);
    }
    if ( !CommonMiscs::evaluateLogicComb(logic_type, (const std::vector<bool> *)(v2 + 48)) )
    {
      v7 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
      isRoutineIdClosed = FeatureSwitchMgr::isRoutineIdClosed(&v9->feature_switch_mgr, *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( isRoutineIdClosed )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/routine/player_routine_comp.cpp",
          "isRoutineSatisfied",
          405);
        v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v23,
                (const char (*)[26])"feature close routine_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v7 = 0;
      }
      else
      {
        v7 = 1;
      }
    }
    std::vector<bool>::~vector((std::vector<bool> *const)(v2 + 48));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "isRoutineSatisfied",
      386);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v23,
           (const char (*)[37])"findRoutineDetailExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = 0;
  }
  result = v7;
  if ( v24 == (char *)v2 )
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

// Line 412: range 0000000016CF6850-0000000016CF6944
bool __cdecl PlayerRoutineComp::isRoutineCondSatisfied(
        PlayerRoutineComp *const this,
        const data::RoutineCondContent *cond)
{
  data::RoutineCondType type; // eax
  PlayerQuestComp *QuestComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type == ROUTINE_COND_NONE )
    return 1;
  if ( type != ROUTINE_COND_QUEST_FINISH )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  QuestComp = Player::getQuestComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&cond->param1);
  }
  return PlayerQuestComp::getQuestState(QuestComp, cond->param1) == QUEST_STATE_FINISHED;
};

// Line 428: range 0000000016CF6998-0000000016CF6DD7
void __cdecl PlayerRoutineComp::broadcastRoutineTypeRefreshInfo(
        PlayerRoutineComp *const this,
        uint32_t routine_type,
        const RoutineTypeInfo *routine_type_info)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  proto::WorldRoutineTypeInfo *world_routine_type_proto; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 world_ptr:429 64 32 10 notify:439";
  *(_QWORD *)(v3 + 16) = PlayerRoutineComp::broadcastRoutineTypeRefreshInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "broadcastRoutineTypeRefreshInfo",
      432);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v14,
           (const char (*)[30])"getMyPlayerWorld fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( World::getPlayerCount(v7) )
    {
      proto::WorldRoutineTypeRefreshNotify::WorldRoutineTypeRefreshNotify((proto::WorldRoutineTypeRefreshNotify *const)(v3 + 64));
      world_routine_type_proto = proto::WorldRoutineTypeRefreshNotify::mutable_world_routine_type((proto::WorldRoutineTypeRefreshNotify *const)(v3 + 64));
      if ( PlayerRoutineComp::fillWorldRoutineTypeProto(this, routine_type, routine_type_info, world_routine_type_proto) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/routine/player_routine_comp.cpp",
          "broadcastRoutineTypeRefreshInfo",
          443);
        v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v14, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          v9,
          (const char (*)[33])" fillWorldRoutineTypeProto fails");
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      else
      {
        v10 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        std::function<ForeachPolicy ()(Player &)>::function<PlayerRoutineComp::broadcastRoutineTypeRefreshInfo(unsigned int,RoutineTypeInfo const&)::{lambda(Player &)#1},void,void>(
          (std::function<ForeachPolicy(Player&)> *const)&v14,
          (PlayerRoutineComp::broadcastRoutineTypeRefreshInfo::<lambda(Player&)>)(v3 + 64));
        World::foreachPlayer(v10, (std::function<ForeachPolicy(Player&)> *)&v14);
        std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v14);
      }
      proto::WorldRoutineTypeRefreshNotify::~WorldRoutineTypeRefreshNotify((proto::WorldRoutineTypeRefreshNotify *const)(v3 + 64));
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
  if ( v15 == (char *)v3 )
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

// Line 446: range 0000000016CF6946-0000000016CF6996
ForeachPolicy __cdecl PlayerRoutineComp::broadcastRoutineTypeRefreshInfo(unsigned int,RoutineTypeInfo const&)::{lambda(Player &)#1}::operator()(
        const PlayerRoutineComp::broadcastRoutineTypeRefreshInfo::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 454: range 0000000016CF6DD8-0000000016CF6FAD
int32_t __cdecl PlayerRoutineComp::fillWorldAllRoutineTypeNotify(
        PlayerRoutineComp *const this,
        proto::WorldAllRoutineTypeNotify *notify)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,RoutineTypeInfo>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,RoutineTypeInfo> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,RoutineTypeInfo> *v9; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *routine_type_info; // [rsp+40h] [rbp-40h]
  proto::WorldRoutineTypeInfo *world_routine_type_proto; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->routine_type_map_;
  __for_begin._M_node = std::map<unsigned int,RoutineTypeInfo>::begin(&this->routine_type_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator*(&__for_begin);
    routine_type = std::get<0ul,unsigned int const,RoutineTypeInfo>(v9);
    routine_type_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineTypeInfo> >::type *)std::get<1ul,unsigned int const,RoutineTypeInfo>(v9);
    world_routine_type_proto = proto::WorldAllRoutineTypeNotify::add_world_routine_type_list(notify);
    if ( *(_BYTE *)(((unsigned __int64)routine_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)routine_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(routine_type);
    }
    if ( PlayerRoutineComp::fillWorldRoutineTypeProto(this, *routine_type, routine_type_info, world_routine_type_proto) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/routine/player_routine_comp.cpp",
        "fillWorldAllRoutineTypeNotify",
        460);
      v2 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v13, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v3,
        (const char (*)[33])" fillWorldRoutineTypeProto fails");
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 468: range 0000000016CF6FAE-0000000016CF7568
__int64 __fastcall PlayerRoutineComp::fillWorldRoutineTypeProto(
        PlayerRoutineComp *const this,
        uint32_t routine_type,
        const RoutineTypeInfo *routine_type_info,
        proto::WorldRoutineTypeInfo *world_routine_type_proto)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  RoutineExcelConfigMgr *p_routine_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  const RefreshPolicyExcelConfigMgr *p_refresh_policy_config_mgr; // rdi
  uint32_t last_refresh_time; // ecx
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  const data::RoutineTypeExcelConfig *routine_type_config_ptr; // [rsp+30h] [rbp-E0h]
  const std::map<unsigned int,RoutineDetailInfo> *__for_range; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *next_refresh_time; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *_; // [rsp+48h] [rbp-C8h]
  const std::pair<unsigned int const,RoutineDetailInfo> *v21; // [rsp+50h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_id; // [rsp+58h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_info; // [rsp+60h] [rbp-B0h]
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+68h] [rbp-A8h]
  proto::WorldRoutineInfo *routine_proto; // [rsp+70h] [rbp-A0h]
  std::map<unsigned int,RoutineDetailInfo>::const_iterator __for_end; // [rsp+78h] [rbp-98h] BYREF
  std::shared_ptr<Config> v27; // [rsp+80h] [rbp-90h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-80h] BYREF
  char v29[96]; // [rsp+B0h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 16 routine_type:467";
  *(_QWORD *)(v4 + 16) = PlayerRoutineComp::fillWorldRoutineTypeProto;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = routine_type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  routine_type_config_ptr = RoutineExcelConfigMgr::findRoutineTypeExcelConfig(
                              &v7->design_config.txt_config_mgr.routine_config_mgr,
                              *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( routine_type_config_ptr )
  {
    proto::WorldRoutineTypeInfo::set_routine_type(world_routine_type_proto, *(_DWORD *)(v4 + 32));
    __for_range = &routine_type_info->detail_map;
    __for_begin._M_node = std::map<unsigned int,RoutineDetailInfo>::begin(&routine_type_info->detail_map)._M_node;
    __for_end._M_node = std::map<unsigned int,RoutineDetailInfo>::end(&routine_type_info->detail_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v21 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator*(&__for_begin);
      routine_id = std::get<0ul,unsigned int const,RoutineDetailInfo>(v21);
      routine_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *)std::get<1ul,unsigned int const,RoutineDetailInfo>(v21);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      p_routine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.routine_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)routine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(routine_id);
      }
      routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                             p_routine_config_mgr,
                             *routine_id);
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( routine_config_ptr )
      {
        routine_proto = proto::WorldRoutineTypeInfo::add_world_routine_info_list(world_routine_type_proto);
        PlayerRoutineComp::fillWorldRoutineProto(this, routine_config_ptr, routine_info, routine_proto);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/routine/player_routine_comp.cpp",
          "fillWorldRoutineTypeProto",
          481);
        v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v28,
                (const char (*)[48])"findRoutineDetailExcelConfig fails, routine_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, routine_id);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    p_refresh_policy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.refresh_policy_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&routine_type_info->last_refresh_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_type_info + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_type_info->last_refresh_time >> 3)
                                                                      + 0x7FFF8000) )
    {
      p_refresh_policy_config_mgr = (const RefreshPolicyExcelConfigMgr *)&routine_type_info->last_refresh_time;
      __asan_report_load4(&routine_type_info->last_refresh_time);
    }
    last_refresh_time = routine_type_info->last_refresh_time;
    if ( *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->refresh_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_type_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->refresh_id >> 3)
                                                                             + 0x7FFF8000) )
    {
      p_refresh_policy_config_mgr = (const RefreshPolicyExcelConfigMgr *)&routine_type_config_ptr->refresh_id;
      __asan_report_load4(&routine_type_config_ptr->refresh_id);
    }
    __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,RoutineDetailInfo> >::_Base_ptr)RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval(p_refresh_policy_config_mgr, routine_type_config_ptr->refresh_id, last_refresh_time);
    std::shared_ptr<Config>::~shared_ptr(&v27);
    next_refresh_time = std::get<0ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
    _ = std::get<1ul,unsigned int,unsigned int>((std::pair<unsigned int,unsigned int> *)&__for_end);
    if ( *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)next_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(next_refresh_time);
    }
    proto::WorldRoutineTypeInfo::set_next_refresh_time(world_routine_type_proto, *next_refresh_time);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "fillWorldRoutineTypeProto",
      472);
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v28,
           (const char (*)[48])"findRoutineTypeExcelConfig fails, routine_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
  }
  if ( v29 == (char *)v4 )
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

// Line 496: range 0000000016CF756A-0000000016CF76B8
void __cdecl PlayerRoutineComp::fillWorldRoutineProto(
        PlayerRoutineComp *const this,
        const data::RoutineDetailExcelConfig *routine_config,
        const RoutineDetailInfo *routine_info,
        proto::WorldRoutineInfo *routine_proto)
{
  if ( *(_BYTE *)(((unsigned __int64)&routine_config->routine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&routine_config->routine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&routine_config->routine_id);
  }
  proto::WorldRoutineInfo::set_routine_id(routine_proto, routine_config->routine_id);
  if ( *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)routine_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(routine_info);
  }
  proto::WorldRoutineInfo::set_progress(routine_proto, routine_info->progress);
  if ( *(_BYTE *)(((unsigned __int64)&routine_config->finish_content.progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)routine_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->finish_content.progress >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&routine_config->finish_content.progress);
  }
  proto::WorldRoutineInfo::set_finish_progress(routine_proto, routine_config->finish_content.progress);
  if ( *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)routine_info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load1(&routine_info->is_finished);
  }
  proto::WorldRoutineInfo::set_is_finished(routine_proto, routine_info->is_finished);
};

// Line 504: range 0000000016CF770C-0000000016CF7D08
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerRoutineComp::closeRoutineType(PlayerRoutineComp *const this, uint32_t routine_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int v8; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::pointer v10; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineTypeClose,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  __int64 result; // rax
  std::string v15; // [rsp+0h] [rbp-170h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-130h] BYREF
  char v19[272]; // [rsp+60h] [rbp-110h] BYREF

  v15._M_string_length = (std::string::size_type)this;
  HIDWORD(v15._M_dataplus._M_p) = routine_type;
  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 10 holder:512 48 4 16 routine_type:503 64 8 8 iter:505 96 16 13 world_ptr:520 128 16 11 l"
                        "og_ptr:530 160 24 10 notify:518";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::closeRoutineType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = HIDWORD(v15._M_dataplus._M_p);
  *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v2 + 64) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                     (std::map<unsigned int,RoutineTypeInfo> *const)(v15._M_string_length + 32),
                                                                     (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v2 + 48));
  *((std::map<unsigned int,RoutineTypeInfo>::iterator *)&v15._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,RoutineTypeInfo>::end((std::map<unsigned int,RoutineTypeInfo> *const)(v15._M_string_length + 32));
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)&v15._anon_0._M_allocated_capacity
       + 1) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "closeRoutineType",
      508);
    v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v18, (const char (*)[24])off_25F370A0);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v15._M_string_length + 24);
    HIDWORD(v15._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v15._M_string_length + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v7,
      (const unsigned int *)&v15._anon_0._M_allocated_capacity + 1);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v15._M_string_length + 24);
    BasicComp = Player::getBasicComp(*(Player *const *)(v15._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v18, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xBD9u, v15);
    std::string::~string(&v18);
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 64));
    PlayerRoutineComp::clearRoutineType(
      (PlayerRoutineComp *const)v15._M_string_length,
      *(_DWORD *)(v2 + 48),
      &v10->second);
    std::map<unsigned int,RoutineTypeInfo>::erase(
      (std::map<unsigned int,RoutineTypeInfo> *const)(v15._M_string_length + 32),
      (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v2 + 48));
    proto::WorldRoutineTypeCloseNotify::WorldRoutineTypeCloseNotify((proto::WorldRoutineTypeCloseNotify *const)(v2 + 160));
    proto::WorldRoutineTypeCloseNotify::set_routine_type(
      (proto::WorldRoutineTypeCloseNotify *const)(v2 + 160),
      *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v15._M_string_length + 24);
    Player::getSceneComp(*(Player *const *)(v15._M_string_length + 24));
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 96), 0LL) )
    {
      v11 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::function<ForeachPolicy ()(Player &)>::function<PlayerRoutineComp::closeRoutineType(unsigned int)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v18,
        (PlayerRoutineComp::closeRoutineType::<lambda(Player&)>)(v2 + 160));
      World::foreachPlayer(v11, (std::function<ForeachPolicy(Player&)> *)&v18);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v18);
    }
    common::tools::perf::make_shared<proto_log::PlayerLogBodyRoutineTypeClose>();
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineTypeClose,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineTypeClose,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto_log::PlayerLogBodyRoutineTypeClose::set_routine_type(v12, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((v15._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v15._M_string_length + 24);
    v13 = *(Player **)(v15._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRoutineTypeClose,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyRoutineTypeClose> *)(v2 + 128));
    Player::printStatLog(v13, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    v8 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyRoutineTypeClose>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRoutineTypeClose> *const)(v2 + 128));
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
    proto::WorldRoutineTypeCloseNotify::~WorldRoutineTypeCloseNotify((proto::WorldRoutineTypeCloseNotify *const)(v2 + 160));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  result = v8;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 523: range 0000000016CF76BA-0000000016CF770A
ForeachPolicy __cdecl PlayerRoutineComp::closeRoutineType(unsigned int)::{lambda(Player &)#1}::operator()(
        const PlayerRoutineComp::closeRoutineType::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 538: range 0000000016CF7D0A-0000000016CF84C6
void __fastcall PlayerRoutineComp::clearRoutineType(
        PlayerRoutineComp *const this,
        uint32_t routine_type,
        unsigned __int64 routine_type_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::vector<unsigned int>::size_type v7; // rax
  RoutineExcelConfigMgr *p_routine_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  Scene *v10; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  std::map<unsigned int,RoutineDetailInfo>::iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::map<unsigned int,RoutineDetailInfo>::iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::map<unsigned int,RoutineDetailInfo> *__for_range; // [rsp+38h] [rbp-128h]
  const std::pair<unsigned int const,RoutineDetailInfo> *v24; // [rsp+40h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_id; // [rsp+48h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *routine_info; // [rsp+50h] [rbp-110h]
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+58h] [rbp-108h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 routine_type:537 64 16 13 scene_ptr:539 96 24 16 group_id_vec:546";
  *(_QWORD *)(v3 + 16) = PlayerRoutineComp::clearRoutineType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = routine_type;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v3 + 64), &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/routine/player_routine_comp.cpp",
      "clearRoutineType",
      542);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v29,
           (const char (*)[30])"getMainWorldScene fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
    v7 = std::map<unsigned int,RoutineDetailInfo>::size((const std::map<unsigned int,RoutineDetailInfo> *const)(routine_type_info + 8));
    std::vector<unsigned int>::reserve((std::vector<unsigned int> *const)(v3 + 96), v7);
    __for_range = (std::map<unsigned int,RoutineDetailInfo> *)(routine_type_info + 8);
    __for_begin._M_node = std::map<unsigned int,RoutineDetailInfo>::begin((std::map<unsigned int,RoutineDetailInfo> *const)(routine_type_info + 8))._M_node;
    __for_end._M_node = std::map<unsigned int,RoutineDetailInfo>::end((std::map<unsigned int,RoutineDetailInfo> *const)(routine_type_info + 8))._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator*(&__for_begin);
      routine_id = std::get<0ul,unsigned int const,RoutineDetailInfo>(v24);
      routine_info = (std::tuple_element<1,const std::pair<unsigned int const,RoutineDetailInfo> >::type *)std::get<1ul,unsigned int const,RoutineDetailInfo>(v24);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      p_routine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.routine_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)routine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(routine_id);
      }
      routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                             p_routine_config_mgr,
                             *routine_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      if ( routine_config_ptr )
      {
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v3 + 96), &routine_config_ptr->group_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/routine/player_routine_comp.cpp",
          "clearRoutineType",
          554);
        v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v29,
               (const char (*)[47])"findRoutineDetailExcelConfig fails, routin_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, routine_id);
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator++(&__for_begin);
    }
    v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v10);
    if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(BlockGroupComp);
    v12 = *(_QWORD *)BlockGroupComp + 104LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      BlockGroupComp = __asan_report_load8(*(_QWORD *)BlockGroupComp + 104LL);
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v12)(BlockGroupComp, v3 + 96, 1LL);
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "clearRoutineType",
      562);
    v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v29,
            (const char (*)[22])"unregisterGroups imm ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int>(v13, (const std::vector<unsigned int> *)(v3 + 96));
    v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::map<unsigned int,std::map<unsigned int,unsigned int>>::erase(
      &this->delayed_unregister_groups_map_,
      (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
    std::map<unsigned int,RoutineDetailInfo>::clear((std::map<unsigned int,RoutineDetailInfo> *const)(routine_type_info + 8));
    if ( *(_BYTE *)((routine_type_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)((routine_type_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(routine_type_info, v3 + 48, routine_type_info);
    }
    *(_DWORD *)routine_type_info = 0;
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "clearRoutineType",
      569);
    v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v29, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v18 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v17,
            (const char (*)[20])" clearRoutineType: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v29);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  if ( v30 == (char *)v3 )
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
};

// Line 574: range 0000000016CF84C8-0000000016CF84E9
int32_t __cdecl PlayerRoutineComp::openRoutineTypeByGm(PlayerRoutineComp *const this, uint32_t routine_type)
{
  return PlayerRoutineComp::openRoutineType(this, routine_type);
};

// Line 579: range 0000000016CF84EA-0000000016CF850B
int32_t __cdecl PlayerRoutineComp::closeRoutineTypeByGm(PlayerRoutineComp *const this, uint32_t routine_type)
{
  return PlayerRoutineComp::closeRoutineType(this, routine_type);
};

// Line 584: range 0000000016CF850C-0000000016CF8826
__int64 __fastcall PlayerRoutineComp::refreshRoutineTypeByGm(PlayerRoutineComp *const this, uint32_t routine_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::pointer v8; // rax
  __int64 v9; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::pointer v10; // rdx
  char v11; // cl
  RoutineTypeInfo *p_second; // r15
  __int32 v13; // r14d
  __int32 Now; // eax
  unsigned __int64 v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::pointer v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 routine_type:583 64 8 8 iter:585";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::refreshRoutineTypeByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = routine_type;
  *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v2 + 64) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                     &this->routine_type_map_,
                                                                     (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "refreshRoutineTypeByGm",
      588);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v18, (const char (*)[14])"routine_type:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" not open!");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 64));
    v9 = *(unsigned int *)(v2 + 48);
    PlayerRoutineComp::clearRoutineType(this, v9, (unsigned __int64)&v8->second);
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 64));
    v11 = *(_BYTE *)(((unsigned __int64)&v10->second.last_refresh_time >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)((((_BYTE)v10 + 12) & 7) + 3) >= v11 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(&v10->second.last_refresh_time, v9, (_BYTE)v10);
    }
    v10->second.last_refresh_time = 0;
    p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 64))->second;
    v13 = *(_DWORD *)(v2 + 48);
    Now = common::tools::TimeUtils::getNow();
    PlayerRoutineComp::doRefreshRoutineTypeInfo(this, Now, v13, p_second);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v15 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      v15 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerRoutineComp *const))v15)(this);
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 64));
    PlayerRoutineComp::broadcastRoutineTypeRefreshInfo(this, *(_DWORD *)(v2 + 48), &v16->second);
    result = 0LL;
  }
  if ( v19 == (char *)v2 )
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

// Line 603: range 0000000016CF8828-0000000016CF937B
__int64 __fastcall PlayerRoutineComp::forceFinishRoutine(PlayerRoutineComp *const this, uint32_t routine_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  unsigned int v9; // r14d
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::map<unsigned int,RoutineTypeInfo> *p_routine_type_map; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::pointer v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> >::pointer v20; // rax
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __int64 v26; // rsi
  uint32_t progress; // ecx
  char v28; // dl
  bool v29; // dl
  Scene *v30; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v32; // rax
  __int64 result; // rax
  void (__fastcall *v34)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+10h] [rbp-170h]
  SceneBlockGroupComp *v35; // [rsp+18h] [rbp-168h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-145h] BYREF
  unsigned int val; // [rsp+3Ch] [rbp-144h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self __y; // [rsp+40h] [rbp-140h] BYREF
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+48h] [rbp-138h]
  RoutineTypeInfo *routine_type_info; // [rsp+50h] [rbp-130h]
  RoutineDetailInfo *routine_info; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v42; // [rsp+60h] [rbp-120h] BYREF
  std::vector<unsigned int> v43; // [rsp+70h] [rbp-110h] BYREF
  common::milog::MiLogStream v44; // [rsp+90h] [rbp-F0h] BYREF
  char v45[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 routine_id:602 64 8 8 iter:618 96 8 15 detail_iter:625 128 16 13 scene_ptr:642";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::forceFinishRoutine;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = routine_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
  routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                         &v5->design_config.txt_config_mgr.routine_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v42);
  if ( !routine_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "forceFinishRoutine",
      607);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v44,
           (const char (*)[37])"findRoutineDetailExcelConfig fails, ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v9 = -1;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)routine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&routine_config_ptr->routine_type);
  }
  if ( !(unsigned int)PlayerRoutineComp::tryRefreshRoutineTypeInfo(this, routine_config_ptr->routine_type, 1) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/routine/player_routine_comp.cpp",
      "forceFinishRoutine",
      614);
    v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            v11,
            (const char (*)[40])" tryRefreshRoutineTypeInfo, routine_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v9 = -1;
    goto LABEL_45;
  }
  p_routine_type_map = &this->routine_type_map_;
  if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)routine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&routine_config_ptr->routine_type);
  }
  val = routine_config_ptr->routine_type;
  *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v2 + 64) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                     p_routine_type_map,
                                                                     &val);
  __y._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "forceFinishRoutine",
      621);
    v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v44, (const char (*)[14])"routine_type:");
    v15 = common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
            v14,
            &routine_config_ptr->routine_type);
    v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" not open!uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_19:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::~MiLogStream(&v44);
    v9 = -1;
    goto LABEL_45;
  }
  v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 64));
  routine_type_info = &v17->second;
  *(std::map<unsigned int,RoutineDetailInfo>::iterator *)(v2 + 96) = std::map<unsigned int,RoutineDetailInfo>::find(
                                                                       &v17->second.detail_map,
                                                                       (const std::map<unsigned int,RoutineDetailInfo>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,RoutineDetailInfo>::end(&routine_type_info->detail_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> >::_Self *)(v2 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> >::_Self *)&__y) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "forceFinishRoutine",
      628);
    v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v44, (const char (*)[17])"find routine_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])" fails,uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_19;
  }
  v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> > *const)(v2 + 96));
  routine_info = &v20->second;
  p_is_finished = &v20->second.is_finished;
  if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_finished);
  }
  if ( routine_info->is_finished )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "forceFinishRoutine",
      635);
    v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v44, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
    v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])" routine_id:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v25, (const char (*)[18])" already finished");
    common::milog::MiLogStream::~MiLogStream(&v44);
    v9 = 0;
  }
  else
  {
    v26 = (((_BYTE)routine_config_ptr + 52) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.progress >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&routine_config_ptr->finish_content.progress);
    }
    progress = routine_config_ptr->finish_content.progress;
    v28 = *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000);
    LOBYTE(v26) = v28 != 0;
    v29 = v28 != 0 && (char)(((unsigned __int8)routine_info & 7) + 3) >= v28;
    if ( v29 )
      __asan_report_store4(routine_info, v26, v29);
    routine_info->progress = progress;
    PlayerRoutineComp::addRoutineProgress(this, routine_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&v42);
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
      (std::shared_ptr<Scene> *const)(v2 + 128),
      (std::shared_ptr<PlayerWorldScene> *)&v42);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)&v42);
    if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 128), 0LL) )
    {
      v30 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      BlockGroupComp = Scene::getBlockGroupComp(v30);
      v35 = BlockGroupComp;
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8(BlockGroupComp);
      v32 = (unsigned __int64)(v35->_vptr_SceneCompBase + 13);
      if ( *(_BYTE *)((v32 >> 3) + 0x7FFF8000) )
        v32 = __asan_report_load8(v35->_vptr_SceneCompBase + 13);
      v34 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v32;
      if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&routine_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&routine_config_ptr->group_id);
      }
      val = routine_config_ptr->group_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&v43, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
      v34(v35, &v43, 1LL);
      std::vector<unsigned int>::~vector(&v43);
      std::allocator<unsigned int>::~allocator(&__a);
    }
    v9 = 0;
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 128));
  }
LABEL_45:
  result = v9;
  if ( v45 == (char *)v2 )
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

// Line 652: range 0000000016CF937C-0000000016CF9B7B
void __cdecl PlayerRoutineComp::tryUnregisterGroups(PlayerRoutineComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  Scene *v6; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 p_M_left; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v9; // rax
  _DWORD *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  void (__fastcall *v15)(common::milog::MiLogStream *, std::vector<unsigned int> *, __int64); // [rsp+8h] [rbp-1A8h]
  common::milog::MiLogStream *v16; // [rsp+10h] [rbp-1A0h]
  common::milog::MiLogStream *v17; // [rsp+10h] [rbp-1A0h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-18Dh] BYREF
  uint32_t now; // [rsp+24h] [rbp-18Ch]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-188h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-180h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-178h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-170h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+48h] [rbp-168h]
  std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *__in; // [rsp+50h] [rbp-160h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *routine_type; // [rsp+58h] [rbp-158h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *groups_map; // [rsp+60h] [rbp-150h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+68h] [rbp-148h]
  std::vector<unsigned int> *__for_range_1; // [rsp+70h] [rbp-140h]
  const std::pair<unsigned int const,unsigned int> *v30; // [rsp+78h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *group_id; // [rsp+80h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *expire_time; // [rsp+88h] [rbp-128h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+90h] [rbp-120h] BYREF
  std::vector<unsigned int> v34; // [rsp+A0h] [rbp-110h] BYREF
  common::milog::MiLogStream v35; // [rsp+C0h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+E0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 12 group_id:674 64 16 13 scene_ptr:653 96 24 17 del_group_vec:660";
  *(_QWORD *)(v1 + 16) = PlayerRoutineComp::tryUnregisterGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v1 + 64), &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "tryUnregisterGroups",
      656);
    v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
           &v35,
           (const char (*)[21])"main scene nullptr. ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
    __for_range = &this->delayed_unregister_groups_map_;
    __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->delayed_unregister_groups_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->delayed_unregister_groups_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
      routine_type = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
      groups_map = std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(__in);
      std::vector<unsigned int>::clear((std::vector<unsigned int> *const)(v1 + 96));
      __for_range_0 = groups_map;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(groups_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v30 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        group_id = std::get<0ul,unsigned int const,unsigned int>(v30);
        v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v30);
        expire_time = v5;
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v5);
        }
        if ( now >= *expire_time )
        {
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 96), group_id);
          v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          BlockGroupComp = Scene::getBlockGroupComp(v6);
          v16 = (common::milog::MiLogStream *)BlockGroupComp;
          if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
            __asan_report_load8(BlockGroupComp);
          p_M_left = (unsigned __int64)&v16->log_->log_level_info_map_._M_t._M_impl._M_header._M_left;
          if ( *(_BYTE *)((p_M_left >> 3) + 0x7FFF8000) )
            p_M_left = __asan_report_load8(&v16->log_->log_level_info_map_._M_t._M_impl._M_header._M_left);
          v15 = *(void (__fastcall **)(common::milog::MiLogStream *, std::vector<unsigned int> *, __int64))p_M_left;
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          *(_DWORD *)(v1 + 48) = *group_id;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(&v34, (std::initializer_list<unsigned int>)__PAIR128__(1LL, v1 + 48), &__a);
          v15(v16, &v34, 1LL);
          std::vector<unsigned int>::~vector(&v34);
          std::allocator<unsigned int>::~allocator(&__a);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
      __for_range_1 = (std::vector<unsigned int> *)(v1 + 96);
      __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 96))._M_current;
      __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end_0) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        *(_DWORD *)(v1 + 48) = *v10;
        std::map<unsigned int,unsigned int>::erase(
          groups_map,
          (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 48));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
      }
      if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/routine/player_routine_comp.cpp",
          "tryUnregisterGroups",
          680);
        v17 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v35, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v1 + 48) = Player::getUid(this->player_);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v1 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" routine_type:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, routine_type);
        v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v13,
                (const char (*)[20])" unregister groups:");
        common::milog::MiLogStream::operator<<<unsigned int>(v14, (const std::vector<unsigned int> *)(v1 + 96));
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  if ( v36 == (char *)v1 )
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

// Line 686: range 0000000016CF9B7C-0000000016CF9CB4
int32_t __cdecl PlayerRoutineComp::finishRoutineByGm(PlayerRoutineComp *const this, uint32_t routine_id)
{
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    return PlayerRoutineComp::forceFinishRoutine(this, routine_id);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/routine/player_routine_comp.cpp",
    "finishRoutineByGm",
    689);
  v3 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v7, (const char (*)[6])"uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v4, (const char (*)[19])" not in self world");
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 696: range 0000000016CF9CB6-0000000016CFA1E0
__int64 __fastcall PlayerRoutineComp::addRoutineByGm(PlayerRoutineComp *const this, uint32_t routine_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::map<unsigned int,RoutineTypeInfo> *p_routine_type_map; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::pointer v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::map<unsigned int,RoutineTypeInfo>::key_type __x; // [rsp+1Ch] [rbp-E4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self __y; // [rsp+20h] [rbp-E0h] BYREF
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+28h] [rbp-D8h]
  RoutineTypeInfo *routine_type_info; // [rsp+30h] [rbp-D0h]
  RoutineDetailInfo *routine_info; // [rsp+38h] [rbp-C8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 14 routine_id:695 64 8 8 iter:703";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::addRoutineByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = routine_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                         &v5->design_config.txt_config_mgr.routine_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( routine_config_ptr )
  {
    p_routine_type_map = &this->routine_type_map_;
    if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)routine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&routine_config_ptr->routine_type);
    }
    __x = routine_config_ptr->routine_type;
    *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v2 + 64) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                       p_routine_type_map,
                                                                       &__x);
    __y._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&this->routine_type_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/routine/player_routine_comp.cpp",
        "addRoutineByGm",
        706);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v21, (const char (*)[14])"routine_type:");
      v10 = common::milog::MiLogStream::operator<<<data::GeneralRoutineType,(data::GeneralRoutineType*)0>(
              v9,
              &routine_config_ptr->routine_type);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" not open!");
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 64));
      routine_type_info = &v11->second;
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,RoutineDetailInfo>,unsigned int>(
             &v11->second.detail_map,
             (const unsigned int *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/routine/player_routine_comp.cpp",
          "addRoutineByGm",
          713);
        v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v21, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        __x = Player::getUid(this->player_);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &__x);
        v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v13,
                (const char (*)[25])" already has routine_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v21);
        result = 0LL;
      }
      else
      {
        routine_info = std::map<unsigned int,RoutineDetailInfo>::operator[](
                         &routine_type_info->detail_map,
                         (const std::map<unsigned int,RoutineDetailInfo>::key_type *)(v2 + 48));
        PlayerRoutineComp::registerRoutineTypeGroups(this, routine_type_info);
        if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)routine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&routine_config_ptr->routine_type);
        }
        PlayerRoutineComp::broadcastRoutineTypeRefreshInfo(this, routine_config_ptr->routine_type, routine_type_info);
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "addRoutineByGm",
      700);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v21,
           (const char (*)[37])"findRoutineDetailExcelConfig fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
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

// Line 724: range 0000000016CFA1E2-0000000016CFA6AA
void __cdecl PlayerRoutineComp::onMonsterDie(PlayerRoutineComp *const this, const MonsterDieEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerSceneComp *SceneComp; // rax
  RoutineExcelConfigMgr *p_routine_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  bool is_satisfied; // [rsp+13h] [rbp-ADh]
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 routine_id:730";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::onMonsterDie;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v15);
    p_routine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.routine_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->group_id);
    }
    *(_DWORD *)(v2 + 32) = RoutineExcelConfigMgr::findRoutineIdByGroup(p_routine_config_mgr, event->group_id);
    std::shared_ptr<Config>::~shared_ptr(&v15);
    if ( *(_DWORD *)(v2 + 32) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                             &v7->design_config.txt_config_mgr.routine_config_mgr,
                             *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( routine_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)routine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&routine_config_ptr->routine_type);
        }
        if ( (unsigned int)PlayerRoutineComp::tryRefreshRoutineTypeInfo(this, routine_config_ptr->routine_type, 1) )
        {
          is_satisfied = 0;
          if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.finish_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.finish_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&routine_config_ptr->finish_content.finish_type);
          }
          if ( routine_config_ptr->finish_content.finish_type == ROUTINE_FINISH_KILL_MONSTER )
            is_satisfied = 1;
          if ( is_satisfied )
            PlayerRoutineComp::addRoutineProgress(this, routine_config_ptr);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v16,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/routine/player_routine_comp.cpp",
            "onMonsterDie",
            745);
          v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  v10,
                  (const char (*)[40])" tryRefreshRoutineTypeInfo, routine_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v16);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/routine/player_routine_comp.cpp",
          "onMonsterDie",
          738);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v16,
               (const char (*)[37])"findRoutineDetailExcelConfig fails, ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
    }
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
};

// Line 766: range 0000000016CFA6AC-0000000016CFAC46
void __cdecl PlayerRoutineComp::onWorldGather(PlayerRoutineComp *const this, const WorldGatherEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  RoutineExcelConfigMgr *p_routine_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  bool is_satisfied; // [rsp+13h] [rbp-ADh]
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 routine_id:772";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::onWorldGather;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "onWorldGather",
      769);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v18, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_routine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.routine_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->group_id);
    }
    *(_DWORD *)(v2 + 32) = RoutineExcelConfigMgr::findRoutineIdByGroup(p_routine_config_mgr, event->group_id);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( *(_DWORD *)(v2 + 32) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
      routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                             &v9->design_config.txt_config_mgr.routine_config_mgr,
                             *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( routine_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)routine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&routine_config_ptr->routine_type);
        }
        if ( (unsigned int)PlayerRoutineComp::tryRefreshRoutineTypeInfo(this, routine_config_ptr->routine_type, 1) )
        {
          is_satisfied = 0;
          if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.finish_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.finish_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&routine_config_ptr->finish_content.finish_type);
          }
          if ( routine_config_ptr->finish_content.finish_type == ROUTINE_FINISH_GATHER )
            is_satisfied = 1;
          if ( is_satisfied )
            PlayerRoutineComp::addRoutineProgress(this, routine_config_ptr);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v18,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/routine/player_routine_comp.cpp",
            "onWorldGather",
            787);
          v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v18, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  v12,
                  (const char (*)[40])" tryRefreshRoutineTypeInfo, routine_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v18);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/routine/player_routine_comp.cpp",
          "onWorldGather",
          780);
        v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v18,
                (const char (*)[37])"findRoutineDetailExcelConfig fails, ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
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
};

// Line 807: range 0000000016CFAC48-0000000016CFB2DF
void __cdecl PlayerRoutineComp::onChallengeFinish(PlayerRoutineComp *const this, const ChallengeFinishEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // rax
  RoutineExcelConfigMgr *p_routine_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::RoutineDetailExcelConfig *routine_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 routine_id:817";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::onChallengeFinish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_success);
  }
  if ( event->is_success )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/routine/player_routine_comp.cpp",
        "onChallengeFinish",
        814);
      v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v21, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" not in self world");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      p_routine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.routine_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->group_id);
      }
      *(_DWORD *)(v2 + 32) = RoutineExcelConfigMgr::findRoutineIdByGroup(p_routine_config_mgr, event->group_id);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( *(_DWORD *)(v2 + 32) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v20);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
        routine_config_ptr = data::RoutineExcelConfigMgrBase::findRoutineDetailExcelConfig(
                               &v9->design_config.txt_config_mgr.routine_config_mgr,
                               *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v20);
        if ( routine_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)routine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config_ptr->routine_type >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&routine_config_ptr->routine_type);
          }
          if ( (unsigned int)PlayerRoutineComp::tryRefreshRoutineTypeInfo(this, routine_config_ptr->routine_type, 1) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.finish_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&routine_config_ptr->finish_content.finish_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&routine_config_ptr->finish_content.finish_type);
            }
            if ( routine_config_ptr->finish_content.finish_type == ROUTINE_CHALLENGE_FINISH )
            {
              PlayerRoutineComp::addRoutineProgress(this, routine_config_ptr);
            }
            else
            {
              common::milog::MiLogStream::create(
                &v21,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/routine/player_routine_comp.cpp",
                "onChallengeFinish",
                839);
              v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      &v21,
                      (const char (*)[10])"group_id:");
              v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &event->group_id);
              v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v15,
                      (const char (*)[17])" but routine_id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" not support!");
              common::milog::MiLogStream::~MiLogStream(&v21);
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/routine/player_routine_comp.cpp",
              "onChallengeFinish",
              832);
            v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v21, (const char (*)[5])"uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
            v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    v12,
                    (const char (*)[40])" tryRefreshRoutineTypeInfo, routine_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v21);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/routine/player_routine_comp.cpp",
            "onChallengeFinish",
            825);
          v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v21,
                  (const char (*)[37])"findRoutineDetailExcelConfig fails, ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
        }
      }
    }
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 847: range 0000000016CFB332-0000000016CFBEE4
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerRoutineComp::addRoutineProgress(
        PlayerRoutineComp *const this,
        const data::RoutineDetailExcelConfig *routine_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::pointer v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> >::pointer v13; // rax
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rsi
  bool v22; // dl
  uint32_t progress; // ecx
  __int64 v24; // rsi
  __int64 v25; // rdx
  proto::WorldRoutineInfo *v26; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  Player *v32; // r14
  std::string routine_configa; // [rsp+0h] [rbp-1C0h] OVERLAPPED BYREF
  RoutineTypeInfo *routine_type_info; // [rsp+20h] [rbp-1A0h]
  RoutineDetailInfo *routine_info; // [rsp+28h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-180h] BYREF
  std::string v38; // [rsp+50h] [rbp-170h] BYREF
  char v39[336]; // [rsp+70h] [rbp-150h] BYREF

  routine_configa._M_string_length = (std::string::size_type)this;
  routine_configa._M_dataplus._M_p = (std::string::pointer)routine_config;
  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 10 holder:848 64 4 16 routine_type:850 80 4 14 routine_id:851 96 8 8 iter:852 128 8 15 de"
                        "tail_iter:859 160 16 16 my_world_ptr:880 192 16 11 log_ptr:894 224 32 10 notify:883";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::addRoutineProgress;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((routine_configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(routine_configa._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(routine_configa._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v38, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBDBu, routine_configa);
  std::string::~string(&v38);
  if ( *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 12) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(routine_configa._M_dataplus._M_p) + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 12) >> 3)
                                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(routine_configa._M_dataplus._M_p + 12);
  }
  *(_DWORD *)(v2 + 64) = *((_DWORD *)routine_configa._M_dataplus._M_p + 3);
  if ( *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(routine_configa._M_dataplus._M_p + 8);
  }
  *(_DWORD *)(v2 + 80) = *((_DWORD *)routine_configa._M_dataplus._M_p + 2);
  *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v2 + 96) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                     (std::map<unsigned int,RoutineTypeInfo> *const)(routine_configa._M_string_length + 32),
                                                                     (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v2 + 64));
  *((std::map<unsigned int,RoutineTypeInfo>::iterator *)&routine_configa._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,RoutineTypeInfo>::end((std::map<unsigned int,RoutineTypeInfo> *const)(routine_configa._M_string_length + 32));
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v2 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)&routine_configa._anon_0._M_allocated_capacity
       + 1) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "addRoutineProgress",
      855);
    v6 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)&v38,
           (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((routine_configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(routine_configa._M_string_length + 24);
    HIDWORD(routine_configa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(routine_configa._M_string_length + 24));
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v6,
           (const unsigned int *)&routine_configa._anon_0._M_allocated_capacity + 1);
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           v7,
           (const char (*)[26])" find routine_type fails,");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38);
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v2 + 96));
    routine_type_info = &v9->second;
    *(std::map<unsigned int,RoutineDetailInfo>::iterator *)(v2 + 128) = std::map<unsigned int,RoutineDetailInfo>::find(
                                                                          &v9->second.detail_map,
                                                                          (const std::map<unsigned int,RoutineDetailInfo>::key_type *)(v2 + 80));
    *((std::map<unsigned int,RoutineDetailInfo>::iterator *)&routine_configa._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,RoutineDetailInfo>::end(&routine_type_info->detail_map);
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> >::_Self *)&routine_configa._anon_0._M_allocated_capacity
         + 1) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/routine/player_routine_comp.cpp",
        "addRoutineProgress",
        862);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
              (common::milog::MiLogStream *const)&v38,
              (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((routine_configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(routine_configa._M_string_length + 24);
      HIDWORD(routine_configa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(routine_configa._M_string_length + 24));
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v10,
              (const unsigned int *)&routine_configa._anon_0._M_allocated_capacity + 1);
      v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v11,
              (const char (*)[24])" find routine_id fails,");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38);
    }
    else
    {
      v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineDetailInfo> > *const)(v2 + 128));
      routine_info = &v13->second;
      p_is_finished = &v13->second.is_finished;
      if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_finished);
      }
      if ( routine_info->is_finished )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/routine/player_routine_comp.cpp",
          "addRoutineProgress",
          869);
        v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                (common::milog::MiLogStream *const)&v38,
                (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((routine_configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(routine_configa._M_string_length + 24);
        HIDWORD(routine_configa._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(routine_configa._M_string_length + 24));
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)&routine_configa._anon_0._M_allocated_capacity + 1);
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" routine_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v18, (const char (*)[21])off_25F37AE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v38);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)routine_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_info >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(routine_info);
        }
        v21 = 1LL;
        v19 = SAFE_ADD<unsigned int,int>(routine_info->progress, 1);
        v20 = *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000);
        LOBYTE(v21) = v20 != 0;
        v22 = v20 != 0 && (char)(((unsigned __int8)routine_info & 7) + 3) >= v20;
        if ( v22 )
          __asan_report_store4(routine_info, v21, v22);
        routine_info->progress = v19;
        progress = routine_info->progress;
        if ( *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 52) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(routine_configa._M_dataplus._M_p) + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 52) >> 3)
                                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(routine_configa._M_dataplus._M_p + 52);
        }
        if ( progress >= *((_DWORD *)routine_configa._M_dataplus._M_p + 13) )
        {
          v24 = ((_BYTE)routine_info + 4) & 7;
          v25 = (*(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000));
          if ( (_BYTE)v25 )
            __asan_report_store1(&routine_info->is_finished, v24, v25);
          routine_info->is_finished = 1;
          PlayerRoutineComp::onWorldRoutineFinish(
            (PlayerRoutineComp *const)routine_configa._M_string_length,
            (const data::RoutineDetailExcelConfig *)routine_configa._M_dataplus._M_p);
        }
        if ( *(_BYTE *)(((routine_configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(routine_configa._M_string_length + 24);
        Player::getSceneComp(*(Player *const *)(routine_configa._M_string_length + 24));
        PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 160));
        if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 160), 0LL) )
        {
          proto::WorldRoutineChangeNotify::WorldRoutineChangeNotify((proto::WorldRoutineChangeNotify *const)(v2 + 224));
          if ( *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 12) >> 3) + 0x7FFF8000) != 0
            && (char)(((LOBYTE(routine_configa._M_dataplus._M_p) + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(routine_configa._M_dataplus._M_p + 12) >> 3)
                                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(routine_configa._M_dataplus._M_p + 12);
          }
          proto::WorldRoutineChangeNotify::set_routine_type(
            (proto::WorldRoutineChangeNotify *const)(v2 + 224),
            *((_DWORD *)routine_configa._M_dataplus._M_p + 3));
          v26 = proto::WorldRoutineChangeNotify::mutable_routine_info((proto::WorldRoutineChangeNotify *const)(v2 + 224));
          PlayerRoutineComp::fillWorldRoutineProto(
            (PlayerRoutineComp *const)routine_configa._M_string_length,
            (const data::RoutineDetailExcelConfig *)routine_configa._M_dataplus._M_p,
            routine_info,
            v26);
          v27 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          std::function<ForeachPolicy ()(Player &)>::function<PlayerRoutineComp::addRoutineProgress(data::RoutineDetailExcelConfig const&)::{lambda(Player &)#1},void,void>(
            (std::function<ForeachPolicy(Player&)> *const)&v38,
            (PlayerRoutineComp::addRoutineProgress::<lambda(Player&)>)(v2 + 224));
          World::foreachPlayer(v27, (std::function<ForeachPolicy(Player&)> *)&v38);
          std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v38);
          proto::WorldRoutineChangeNotify::~WorldRoutineChangeNotify((proto::WorldRoutineChangeNotify *const)(v2 + 224));
        }
        common::tools::perf::make_shared<proto_log::PlayerLogBodyRoutineProgress>();
        v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        proto_log::PlayerLogBodyRoutineProgress::set_routine_type(v28, *(_DWORD *)(v2 + 64));
        v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        proto_log::PlayerLogBodyRoutineProgress::set_routine_id(v29, *(_DWORD *)(v2 + 80));
        v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        if ( *(_BYTE *)(((unsigned __int64)routine_info >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)routine_info & 7) + 3) >= *(_BYTE *)(((unsigned __int64)routine_info >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(routine_info);
        }
        proto_log::PlayerLogBodyRoutineProgress::set_progress(v30, routine_info->progress);
        v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineProgress,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)routine_info + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&routine_info->is_finished >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load1(&routine_info->is_finished);
        }
        proto_log::PlayerLogBodyRoutineProgress::set_is_finished(v31, routine_info->is_finished);
        if ( *(_BYTE *)(((routine_configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(routine_configa._M_string_length + 24);
        v32 = *(Player **)(routine_configa._M_string_length + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRoutineProgress,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyRoutineProgress> *)(v2 + 192));
        Player::printStatLog(v32, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyRoutineProgress>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRoutineProgress> *const)(v2 + 192));
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 160));
      }
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 886: range 0000000016CFB2E0-0000000016CFB330
ForeachPolicy __cdecl PlayerRoutineComp::addRoutineProgress(data::RoutineDetailExcelConfig const&)::{lambda(Player &)#1}::operator()(
        const PlayerRoutineComp::addRoutineProgress::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 903: range 0000000016CFBFF6-0000000016CFC49B
void __cdecl PlayerRoutineComp::onWorldRoutineFinish(
        PlayerRoutineComp *const this,
        const data::RoutineDetailExcelConfig *routine_config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t v9; // r14d
  std::map<unsigned int,unsigned int> *v10; // rax
  uint32_t *p_group_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  uint32_t *v13; // rdx
  char v14; // cl
  PlayerRoutineComp::onWorldRoutineFinish::<lambda(Player&)> v15; // [rsp-20h] [rbp-120h]
  uint32_t owner_uid; // [rsp+18h] [rbp-E8h]
  uint32_t now; // [rsp+1Ch] [rbp-E4h]
  const data::RoutineTypeExcelConfig *routine_type_config_ptr; // [rsp+20h] [rbp-E0h]
  __int64 __f; // [rsp+30h] [rbp-D0h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 16 routine_type:904 64 16 16 my_world_ptr:918";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::onWorldRoutineFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)routine_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_config->routine_type >> 3)
                                                                  + 0x7FFF8000) )
  {
    __asan_report_load4(&routine_config->routine_type);
  }
  *(_DWORD *)(v2 + 48) = routine_config->routine_type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  routine_type_config_ptr = RoutineExcelConfigMgr::findRoutineTypeExcelConfig(
                              &v5->design_config.txt_config_mgr.routine_config_mgr,
                              *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( routine_type_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    owner_uid = Player::getUid(this->player_);
    PlayerRoutineComp::onOwnerRoutineFinish(this, routine_type_config_ptr, routine_config, owner_uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 64), 0LL) )
    {
      v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      LODWORD(__f) = owner_uid;
      v15.__routine_config = routine_config;
      v15.__routine_type_config = routine_type_config_ptr;
      *(_QWORD *)&v15.__owner_uid = __f;
      std::function<ForeachPolicy ()(Player &)>::function<PlayerRoutineComp::onWorldRoutineFinish(data::RoutineDetailExcelConfig const&)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v21,
        v15);
      World::foreachPlayer(v8, (std::function<ForeachPolicy(Player&)> *)&v21);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v21);
    }
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->delay_unload_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&routine_type_config_ptr->delay_unload_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&routine_type_config_ptr->delay_unload_time);
    }
    v9 = routine_type_config_ptr->delay_unload_time + now;
    v10 = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
            &this->delayed_unregister_groups_map_,
            (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
    p_group_id = &routine_config->group_id;
    v12 = std::map<unsigned int,unsigned int>::operator[](v10, &routine_config->group_id);
    v13 = v12;
    v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
    if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
    {
      LOBYTE(p_group_id) = v14 != 0;
      __asan_report_store4(v12, p_group_id, (_BYTE)v12);
    }
    *v13 = v9;
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/routine/player_routine_comp.cpp",
      "onWorldRoutineFinish",
      908);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v21,
           (const char (*)[33])"findRoutineTypeExcelConfig type:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" fails");
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

// Line 921: range 0000000016CFBEE6-0000000016CFBFF4
ForeachPolicy __cdecl PlayerRoutineComp::onWorldRoutineFinish(data::RoutineDetailExcelConfig const&)::{lambda(Player &)#1}::operator()(
        const PlayerRoutineComp::onWorldRoutineFinish::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  PlayerRoutineComp *RoutineComp; // rdi
  uint32_t owner_uid; // ecx
  const data::RoutineDetailExcelConfig *routine_config; // rdx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(__closure);
  }
  if ( Uid != __closure->__owner_uid )
  {
    RoutineComp = Player::getRoutineComp(player);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
    {
      RoutineComp = (PlayerRoutineComp *)__closure;
      __asan_report_load4(__closure);
    }
    owner_uid = __closure->__owner_uid;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__routine_config >> 3) + 0x7FFF8000) )
    {
      RoutineComp = (PlayerRoutineComp *)&__closure->__routine_config;
      __asan_report_load8(&__closure->__routine_config);
    }
    routine_config = __closure->__routine_config;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__routine_type_config >> 3) + 0x7FFF8000) )
    {
      RoutineComp = (PlayerRoutineComp *)&__closure->__routine_type_config;
      __asan_report_load8(&__closure->__routine_type_config);
    }
    PlayerRoutineComp::onOwnerRoutineFinish(RoutineComp, __closure->__routine_type_config, routine_config, owner_uid);
  }
  return 0;
};

// Line 937: range 0000000016CFC49C-0000000016CFD01A
void __cdecl PlayerRoutineComp::onOwnerRoutineFinish(
        PlayerRoutineComp *const this,
        const data::RoutineTypeExcelConfig *routine_type_config,
        const data::RoutineDetailExcelConfig *routine_config,
        uint32_t owner_uid)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<RoutineFinishEvent> *v13; // rax
  uint32_t finished_num; // ecx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  proto::ActionReasonType v19; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  PlayerItemComp *ItemComp; // rdi
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  Player *player; // r14
  std::string v27; // [rsp+0h] [rbp-200h]
  uint32_t owner_uida; // [rsp+4h] [rbp-1FCh]
  const data::RoutineDetailExcelConfig *routine_configa; // [rsp+8h] [rbp-1F8h]
  const data::RoutineTypeExcelConfig *routine_type_configa; // [rsp+10h] [rbp-1F0h]
  PlayerRoutineComp *thisa; // [rsp+18h] [rbp-1E8h]
  unsigned int val; // [rsp+2Ch] [rbp-1D4h] BYREF
  proto::ActionReasonType reason; // [rsp+30h] [rbp-1D0h]
  data::ItemLimitType limit_type; // [rsp+34h] [rbp-1CCh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self __y; // [rsp+38h] [rbp-1C8h] BYREF
  RoutineTypeInfo *routine_type_info; // [rsp+40h] [rbp-1C0h]
  proto::MsgParam *param; // [rsp+48h] [rbp-1B8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-1B0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+60h] [rbp-1A0h] BYREF
  std::string v40; // [rsp+70h] [rbp-190h] BYREF
  char v41[368]; // [rsp+90h] [rbp-170h] BYREF

  *(&v27._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v27._anon_0._M_allocated_capacity = (std::string::size_type)routine_type_config;
  v27._M_string_length = (std::string::size_type)routine_config;
  HIDWORD(v27._M_dataplus._M_p) = owner_uid;
  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 1 10 holder:938 48 4 16 routine_type:940 64 4 14 routine_id:941 80 8 8 iter:942 112 16 13 e"
                        "vent_ptr:958 144 16 11 log_ptr:979 176 24 17 action_reason:976 240 48 10 notify:966";
  *(_QWORD *)(v4 + 16) = PlayerRoutineComp::onOwnerRoutineFinish;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862729] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v40, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xBDCu, v27);
  std::string::~string(&v40);
  if ( *(_BYTE *)(((unsigned __int64)&routine_configa->routine_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)routine_configa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_configa->routine_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&routine_configa->routine_type);
  }
  *(_DWORD *)(v4 + 48) = routine_configa->routine_type;
  if ( *(_BYTE *)(((unsigned __int64)&routine_configa->routine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&routine_configa->routine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&routine_configa->routine_id);
  }
  *(_DWORD *)(v4 + 64) = routine_configa->routine_id;
  *(std::map<unsigned int,RoutineTypeInfo>::iterator *)(v4 + 80) = std::map<unsigned int,RoutineTypeInfo>::find(
                                                                     &thisa->routine_type_map_,
                                                                     (const std::map<unsigned int,RoutineTypeInfo>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,RoutineTypeInfo>::end(&thisa->routine_type_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> >::_Self *)(v4 + 80),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/routine/player_routine_comp.cpp",
      "onOwnerRoutineFinish",
      945);
    v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
           (common::milog::MiLogStream *const)&v40,
           (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    val = Player::getUid(thisa->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v9,
            (const char (*)[24])" not open routine_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    PlayerRoutineComp::showRoutineTypeCloseNotify(thisa, *(_DWORD *)(v4 + 48));
  }
  else
  {
    routine_type_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RoutineTypeInfo> > *const)(v4 + 80))->second;
    if ( *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(routine_type_info);
    }
    ++routine_type_info->finished_num;
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa);
    v11 = (unsigned __int64)(thisa->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(thisa->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerRoutineComp *))v11)(thisa);
    common::tools::perf::make_shared<RoutineFinishEvent,unsigned int &,unsigned int &>(
      (unsigned int *)(v4 + 112),
      (unsigned int *)(v4 + 48),
      (unsigned int *)(v4 + 64),
      (unsigned int *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    EventComp = Player::getEventComp(thisa->player_);
    v13 = std::move<std::shared_ptr<RoutineFinishEvent> &>((std::shared_ptr<RoutineFinishEvent> *)(v4 + 112));
    std::shared_ptr<BaseEvent>::shared_ptr<RoutineFinishEvent,void>(&p_event_ptr, v13);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    if ( *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)routine_type_info >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(routine_type_info);
    }
    finished_num = routine_type_info->finished_num;
    if ( *(_BYTE *)(((unsigned __int64)&routine_type_configa->reward_limit_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&routine_type_configa->reward_limit_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&routine_type_configa->reward_limit_num);
    }
    if ( finished_num <= routine_type_configa->reward_limit_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      if ( owner_uida == Player::getUid(thisa->player_) )
        v19 = ACTION_REASON_ROUTINE_HOST;
      else
        v19 = ACTION_REASON_ROUTINE_GUEST;
      reason = v19;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&p_event_ptr);
      v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_event_ptr);
      limit_type = RoutineExcelConfigMgr::getLimitTypeFromRoutineType(
                     &v20->design_config.txt_config_mgr.routine_config_mgr,
                     *(_DWORD *)(v4 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_event_ptr);
      ActionReason::ActionReason((ActionReason *const)(v4 + 176), reason, limit_type);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      ItemComp = Player::getItemComp(thisa->player_);
      if ( *(_BYTE *)(((unsigned __int64)&routine_configa->reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)routine_configa + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_configa->reward_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        ItemComp = (PlayerItemComp *)&routine_configa->reward_id;
        __asan_report_load4(&routine_configa->reward_id);
      }
      PlayerItemComp::grantRewardWithStackLimit(
        ItemComp,
        routine_configa->reward_id,
        (const ActionReason *)(v4 + 176),
        0LL);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyRoutineReward>();
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      proto_log::PlayerLogBodyRoutineReward::set_owner_uid(v22, owner_uida);
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      proto_log::PlayerLogBodyRoutineReward::set_routine_type(v23, *(_DWORD *)(v4 + 48));
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      proto_log::PlayerLogBodyRoutineReward::set_routine_id(v24, *(_DWORD *)(v4 + 64));
      v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyRoutineReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&routine_configa->reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)routine_configa + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&routine_configa->reward_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&routine_configa->reward_id);
      }
      proto_log::PlayerLogBodyRoutineReward::set_reward_id(v25, routine_configa->reward_id);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(
        (std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr,
        0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyRoutineReward,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyRoutineReward> *)(v4 + 144));
      Player::printStatLog(player, &p_body_ptr, (MessagePtr *)&p_event_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyRoutineReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyRoutineReward> *const)(v4 + 144));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/routine/player_routine_comp.cpp",
        "onOwnerRoutineFinish",
        964);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
              (common::milog::MiLogStream *const)&v40,
              (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      val = Player::getUid(thisa->player_);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v16,
              (const char (*)[21])" reach routine_type:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v18, (const char (*)[19])" reward limit num!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
      proto::ShowMessageNotify::ShowMessageNotify((proto::ShowMessageNotify *const)(v4 + 240));
      proto::ShowMessageNotify::set_msg_id((proto::ShowMessageNotify *const)(v4 + 240), MSG_ROUTINE_TYPE_REWARD_MAX_NUM);
      param = proto::ShowMessageNotify::add_params((proto::ShowMessageNotify *const)(v4 + 240));
      proto::MsgParam::set_int_param(param, *(_DWORD *)(v4 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      Player::sendProto(thisa->player_, (const google::protobuf::Message *)(v4 + 240));
      proto::ShowMessageNotify::~ShowMessageNotify((proto::ShowMessageNotify *const)(v4 + 240));
    }
    std::shared_ptr<RoutineFinishEvent>::~shared_ptr((std::shared_ptr<RoutineFinishEvent> *const)(v4 + 112));
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  if ( v41 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 988: range 0000000016CFD01C-0000000016CFD328
void __cdecl PlayerRoutineComp::showRoutineTypeCloseNotify(PlayerRoutineComp *const this, uint32_t routine_type)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // eax
  PlayerOfferingComp *OfferingComp; // rax
  char v7; // al
  proto::MsgParam *param; // [rsp+10h] [rbp-F0h]
  std::tuple<unsigned int,unsigned int> __in; // [rsp+18h] [rbp-E8h] BYREF
  std::tuple<unsigned int&,unsigned int&> v10; // [rsp+20h] [rbp-E0h] BYREF
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-D0h] BYREF
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 offering_id:992 64 4 15 close_level:992 80 48 11 notify:1001";
  *(_QWORD *)(v2 + 16) = PlayerRoutineComp::showRoutineTypeCloseNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862724] = -202116109;
  if ( routine_type != 1 )
    goto LABEL_13;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  OfferingExcelConfigMgr::findRoutineCloseConfig((const OfferingExcelConfigMgr *const)&__in, v5 + 44016);
  std::tie<unsigned int,unsigned int>(
    (unsigned int *)&v10,
    (unsigned int *)(v2 + 48),
    (unsigned int *)(v2 + 64),
    (unsigned int *)(v2 + 48));
  std::tuple<unsigned int &,unsigned int &>::operator=<unsigned int,unsigned int>(&v10, &__in);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( !*(_DWORD *)(v2 + 48) || !*(_DWORD *)(v2 + 64) )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  OfferingComp = Player::getOfferingComp(this->player_);
  if ( PlayerOfferingComp::findOfferingLevel(OfferingComp, *(_DWORD *)(v2 + 48)) >= *(_DWORD *)(v2 + 64) )
    v7 = 1;
  else
LABEL_11:
    v7 = 0;
  if ( !v7 )
  {
LABEL_13:
    proto::ShowMessageNotify::ShowMessageNotify((proto::ShowMessageNotify *const)(v2 + 80));
    proto::ShowMessageNotify::set_msg_id((proto::ShowMessageNotify *const)(v2 + 80), MSG_ROUTINE_TYPE_NOT_OPEN);
    param = proto::ShowMessageNotify::add_params((proto::ShowMessageNotify *const)(v2 + 80));
    proto::MsgParam::set_int_param(param, routine_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    proto::ShowMessageNotify::~ShowMessageNotify((proto::ShowMessageNotify *const)(v2 + 80));
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};
