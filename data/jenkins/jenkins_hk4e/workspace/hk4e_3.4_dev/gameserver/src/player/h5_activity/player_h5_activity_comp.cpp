// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/h5_activity/player_h5_activity_comp.cpp

// Line 27: range 0000000016C5DFD2-0000000016C5E445
int32_t __cdecl PlayerH5ActivityComp::fromBin(
        PlayerH5ActivityComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::const_iterator *p_for_end; // rsi
  const std::piecewise_construct_t *v6; // r8
  std::tuple<unsigned int&> *v7; // r9
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> >::type *v8; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::pointer v13; // rax
  __int64 v14; // rdx
  char v15; // al
  int32_t result; // eax
  proto::PlayerDataBin *player_data_bina; // [rsp+0h] [rbp-120h]
  google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  std::tuple<unsigned int&> v20; // [rsp+20h] [rbp-100h] BYREF
  const proto::PlayerH5ActivityCompBin *bin; // [rsp+28h] [rbp-F8h]
  const google::protobuf::RepeatedPtrField<proto::H5ActivityBin> *__for_range; // [rsp+30h] [rbp-F0h]
  const proto::H5ActivityBin *h5_activity_bin; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> >::type *iter; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> >::type *inserted; // [rsp+48h] [rbp-D8h]
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> __in; // [rsp+50h] [rbp-D0h] BYREF
  std::tuple<Player&,unsigned int&> v27; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-B0h] BYREF
  std::string val; // [rsp+90h] [rbp-90h] BYREF
  char v30[112]; // [rsp+B0h] [rbp-70h] BYREF

  player_data_bina = (proto::PlayerDataBin *)player_data_bin;
  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 h5_schedule_id:31";
  *(_QWORD *)(v2 + 16) = PlayerH5ActivityComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  bin = proto::PlayerDataBin::h5_activity_bin(player_data_bin);
  __for_range = proto::PlayerH5ActivityCompBin::h5_activity_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    h5_activity_bin = google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::H5ActivityBin::h5_activity_schedule_id(h5_activity_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    std::forward_as_tuple<Player &,unsigned int &>(
      (Player *)&v27,
      (unsigned int *)this->player_,
      (Player *)(v2 + 32),
      (unsigned int *)this->player_);
    std::forward_as_tuple<unsigned int &>((unsigned int *)&v20, (unsigned int *)(v2 + 32));
    __in = std::unordered_map<unsigned int,H5Activity>::emplace<std::piecewise_construct_t const&,std::tuple<unsigned int &>,std::tuple<Player &,unsigned int &>>(
             &this->h5_activity_map_,
             &std::piecewise_construct,
             &v20,
             &v27,
             v6,
             v7,
             (std::tuple<Player&,unsigned int&> *)player_data_bina);
    iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool>(&__in);
    v8 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool>(&__in);
    inserted = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v8);
    }
    if ( !*inserted
      || (v20._M_head_impl = (unsigned int *)std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur,
          std::__detail::operator==<std::pair<unsigned int const,H5Activity>,false>(
            iter,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false> *)&v20)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "fromBin",
        35);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v28,
              (const char (*)[43])"emplace h5_activity fail, h5_activity_bin:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &h5_activity_bin->google::protobuf::Message);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v12, this->player_);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    else
    {
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator->(iter);
      H5Activity::fromBin(&v13->second, h5_activity_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityBin const>::operator++(&__for_begin);
  }
  v14 = proto::PlayerH5ActivityCompBin::client_red_dot_timestamp(bin);
  v15 = *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_for_end) = v15 != 0;
    __asan_report_store4(&this->client_red_dot_timestamp_, p_for_end, v14);
  }
  this->client_red_dot_timestamp_ = v14;
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

// Line 45: range 0000000016C5E446-0000000016C5E558
int32_t __cdecl PlayerH5ActivityComp::toBin(PlayerH5ActivityComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::H5ActivityBin *v2; // rax
  std::unordered_map<unsigned int,H5Activity>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,H5Activity>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  proto::PlayerH5ActivityCompBin *bin; // [rsp+28h] [rbp-28h]
  std::unordered_map<unsigned int,H5Activity> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,H5Activity> *v8; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,H5Activity> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,H5Activity> >::type *h5_activity; // [rsp+48h] [rbp-8h]

  bin = proto::PlayerDataBin::mutable_h5_activity_bin(player_data_bin);
  __for_range = &this->h5_activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,H5Activity>::begin(&this->h5_activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,H5Activity>,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,H5Activity>(v8);
    h5_activity = (std::tuple_element<1,const std::pair<unsigned int const,H5Activity> >::type *)std::get<1ul,unsigned int const,H5Activity>(v8);
    v2 = proto::PlayerH5ActivityCompBin::add_h5_activity_list(bin);
    H5Activity::toBin(h5_activity, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_red_dot_timestamp_);
  }
  proto::PlayerH5ActivityCompBin::set_client_red_dot_timestamp(bin, this->client_red_dot_timestamp_);
  return 0;
};

// Line 56: range 0000000016C5E55A-0000000016C5E928
int32_t __cdecl PlayerH5ActivityComp::init(PlayerH5ActivityComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,H5Activity>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,H5Activity>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,H5Activity> *__for_range; // [rsp+28h] [rbp-F8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-F0h]
  std::pair<unsigned int const,H5Activity> *__in; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,H5Activity> >::type *h5_schedule_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,H5Activity> >::type *h5_activity; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 17 h5_activity_id:67 64 24 28 failed_h5_activity_id_vec:58";
  *(_QWORD *)(v1 + 16) = PlayerH5ActivityComp::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  PlayerH5ActivityComp::initEventObservers(this);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
  __for_range = &this->h5_activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,H5Activity>::begin(&this->h5_activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,H5Activity>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator*(&__for_begin);
    h5_schedule_id = std::get<0ul,unsigned int const,H5Activity>(__in);
    h5_activity = std::get<1ul,unsigned int const,H5Activity>(__in);
    if ( H5Activity::init(h5_activity) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "init",
        63);
      v4 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v17,
             (const char (*)[56])"init h5_activity fail, going to remove it. h5_activity:");
      v5 = common::milog::MiLogStream::operator<<<H5Activity,(H5Activity*)0>(v4, h5_activity);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 64), h5_schedule_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v1 + 48) = *v8;
    std::unordered_map<unsigned int,H5Activity>::erase(
      &this->h5_activity_map_,
      (const std::unordered_map<unsigned int,H5Activity>::key_type *)(v1 + 48));
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  result = 0;
  if ( v18 == (char *)v1 )
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
  return result;
};

// Line 75: range 0000000016C5E92A-0000000016C5E9AD
int32_t __cdecl PlayerH5ActivityComp::onLogin(PlayerH5ActivityComp *const this, bool is_new_player)
{
  uint32_t *p_last_check_red_point_time; // rdx
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  PlayerH5ActivityComp::refreshH5ActivityComp(this, 1);
  now = common::tools::TimeUtils::getNow();
  p_last_check_red_point_time = &this->last_check_red_point_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_check_red_point_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_check_red_point_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_red_point_time_, 1LL, p_last_check_red_point_time);
  }
  this->last_check_red_point_time_ = now;
  PlayerH5ActivityComp::trySetUpRedPointTimer(this, now);
  return 0;
};

// Line 87: range 0000000016C5E9AE-0000000016C5E9EE
void __cdecl PlayerH5ActivityComp::onDailyRefresh(PlayerH5ActivityComp *const this)
{
  uint32_t Now; // edx

  PlayerH5ActivityComp::refreshH5ActivityComp(this, 0);
  PlayerH5ActivityComp::notifyH5ActivityIdList(this);
  Now = common::tools::TimeUtils::getNow();
  PlayerH5ActivityComp::refreshRedPoint(this, Now);
};

// Line 94: range 0000000016C5E9F0-0000000016C5EA0E
int32_t __cdecl PlayerH5ActivityComp::notifyAllData(PlayerH5ActivityComp *const this)
{
  PlayerH5ActivityComp::notifyH5ActivityIdList(this);
  return 0;
};

// Line 100: range 0000000016C5EA10-0000000016C5ECCF
void __cdecl PlayerH5ActivityComp::initEventObservers(PlayerH5ActivityComp *const this)
{
  std::weak_ptr<PlayerH5ActivityComp> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::weak_ptr<PlayerH5ActivityComp> *EventComp; // [rsp+10h] [rbp-B0h]
  std::weak_ptr<PlayerH5ActivityComp> *p_this_wtr; // [rsp+20h] [rbp-A0h]
  std::weak_ptr<Observer> v6; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<PlayerH5ActivityComp> __r; // [rsp+40h] [rbp-80h] BYREF
  char v8[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<PlayerH5ActivityComp> *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<PlayerH5ActivityComp> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<PlayerH5ActivityComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 this_wtr:101";
  v1[1]._M_ptr = (std::__weak_ptr<PlayerH5ActivityComp,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerH5ActivityComp::initEventObservers;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<PlayerH5ActivityComp>((PlayerH5ActivityComp *)&__r);
  std::weak_ptr<PlayerH5ActivityComp>::weak_ptr<PlayerH5ActivityComp,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerH5ActivityComp>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<PlayerH5ActivityComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerH5ActivityComp>::weak_ptr((std::weak_ptr<PlayerH5ActivityComp> *const)&__r, v1 + 2);
  PlayerEventComp::registerObserver<PlayerH5ActivityComp,WatcherProgressUpdateEvent>(
    (PlayerEventComp *const)&v6,
    p_this_wtr,
    (void (*)(PlayerH5ActivityComp *, const WatcherProgressUpdateEvent *))&__r);
  std::weak_ptr<Observer>::~weak_ptr(&v6);
  std::weak_ptr<PlayerH5ActivityComp>::~weak_ptr((std::weak_ptr<PlayerH5ActivityComp> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = (std::weak_ptr<PlayerH5ActivityComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerH5ActivityComp>::weak_ptr((std::weak_ptr<PlayerH5ActivityComp> *const)&v6, v1 + 2);
  PlayerEventComp::registerObserver<PlayerH5ActivityComp,PlayerLevelupEvent>(
    (PlayerEventComp *const)&__r,
    EventComp,
    (void (*)(PlayerH5ActivityComp *, const PlayerLevelupEvent *))&v6);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
  std::weak_ptr<PlayerH5ActivityComp>::~weak_ptr((std::weak_ptr<PlayerH5ActivityComp> *const)&v6);
  std::weak_ptr<PlayerH5ActivityComp>::~weak_ptr(v1 + 2);
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<PlayerH5ActivityComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 107: range 0000000016C5ECD0-0000000016C5EE89
void __cdecl PlayerH5ActivityComp::onWatcherProgressUpdate(
        PlayerH5ActivityComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  H5ActivityExcelConfigMgr *p_h5_activity_config_mgr; // rcx
  uint32_t H5ActivityId; // ecx
  std::unordered_map<unsigned int,H5Activity>::iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,H5Activity>::iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const data::H5ActivityWatcherExcelConfig *h5_watcher_config_ptr; // [rsp+28h] [rbp-48h]
  std::unordered_map<unsigned int,H5Activity> *__for_range; // [rsp+30h] [rbp-40h]
  std::pair<unsigned int const,H5Activity> *__in; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,H5Activity> >::type *_; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,H5Activity> >::type *h5_activity; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+50h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  p_h5_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.h5_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->watcher_id);
  }
  h5_watcher_config_ptr = data::H5ActivityExcelConfigMgrBase::findH5ActivityWatcherExcelConfig(
                            p_h5_activity_config_mgr,
                            event->watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v11);
  if ( h5_watcher_config_ptr )
  {
    __for_range = &this->h5_activity_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,H5Activity>::begin(&this->h5_activity_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,H5Activity>,false>(&__for_begin, &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,H5Activity>(__in);
      h5_activity = std::get<1ul,unsigned int const,H5Activity>(__in);
      H5ActivityId = H5Activity::getH5ActivityId(h5_activity);
      if ( *(_BYTE *)(((unsigned __int64)&h5_watcher_config_ptr->h5_activity_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)h5_watcher_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&h5_watcher_config_ptr->h5_activity_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&h5_watcher_config_ptr->h5_activity_id);
      }
      if ( H5ActivityId == h5_watcher_config_ptr->h5_activity_id )
        H5Activity::recordWatcherProgressBeforeContentClose(h5_activity, event);
      std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator++(&__for_begin);
    }
  }
};

// Line 123: range 0000000016C5EE8A-0000000016C5EF39
void __cdecl PlayerH5ActivityComp::onPlayerLevelupEvent(
        PlayerH5ActivityComp *const this,
        const PlayerLevelupEvent *event)
{
  uint32_t cur_level; // esi

  PlayerH5ActivityComp::refreshH5ActivityComp(this, 0);
  if ( *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->cur_level);
  }
  cur_level = event->cur_level;
  if ( *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->last_level);
  }
  PlayerH5ActivityComp::checkRedPointOnPlayerLevelup(this, event->last_level, cur_level);
};

// Line 129: range 0000000016C5EF3A-0000000016C5EF5D
void __cdecl PlayerH5ActivityComp::onTimer(PlayerH5ActivityComp *const this, uint64_t now_ms)
{
  PlayerH5ActivityComp::refreshH5ActivityComp(this, 0);
};

// Line 134: range 0000000016C5EF5E-0000000016C5F060
int32_t __cdecl PlayerH5ActivityComp::getAllH5ActivityInfo(
        PlayerH5ActivityComp *const this,
        proto::GetAllH5ActivityInfoRsp *rsp_0)
{
  proto::H5ActivityInfo *v2; // rax
  std::unordered_map<unsigned int,H5Activity>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,H5Activity>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,H5Activity> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,H5Activity> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,H5Activity> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,H5Activity> >::type *h5_activity; // [rsp+38h] [rbp-8h]

  __for_range = &this->h5_activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,H5Activity>::begin(&this->h5_activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,H5Activity>,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,H5Activity>(v7);
    h5_activity = (std::tuple_element<1,const std::pair<unsigned int const,H5Activity> >::type *)std::get<1ul,unsigned int const,H5Activity>(v7);
    v2 = proto::GetAllH5ActivityInfoRsp::add_h5_activity_info_list(rsp_0);
    H5Activity::toClient(h5_activity, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_red_dot_timestamp_);
  }
  proto::GetAllH5ActivityInfoRsp::set_client_red_dot_timestamp(rsp_0, this->client_red_dot_timestamp_);
  return 0;
};

// Line 144: range 0000000016C5F062-0000000016C5F0B9
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerH5ActivityComp::setClientRedDotTimestamp(
        PlayerH5ActivityComp *const this,
        uint32_t client_red_dot_timestamp)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->client_red_dot_timestamp_,
      *(_QWORD *)&client_red_dot_timestamp,
      &this->client_red_dot_timestamp_);
  }
  this->client_red_dot_timestamp_ = client_red_dot_timestamp;
  return 0;
};

// Line 150: range 0000000016C5F0BA-0000000016C5FFC6
void __cdecl PlayerH5ActivityComp::refreshH5ActivityComp(PlayerH5ActivityComp *const this, bool is_login)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  H5ActivityExcelConfigMgr *p_h5_activity_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::pointer v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::pointer v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v20; // rax
  _DWORD *v21; // rdx
  const std::piecewise_construct_t *v22; // r8
  std::tuple<unsigned int&> *v23; // r9
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> >::type *v24; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::pointer v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  std::unordered_map<unsigned int,H5Activity> *p_h5_activity_map; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::pointer v37; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // rcx
  std::tuple<Player&,unsigned int&> *v40; // [rsp+0h] [rbp-1F0h]
  bool is_has_new_activity; // [rsp+17h] [rbp-1D9h]
  uint32_t now; // [rsp+18h] [rbp-1D8h]
  uint32_t next_refresh_time; // [rsp+1Ch] [rbp-1D4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-1D0h] BYREF
  std::unordered_map<unsigned int,H5Activity>::iterator __for_end; // [rsp+28h] [rbp-1C8h] BYREF
  std::unordered_map<unsigned int,H5Activity> *__for_range; // [rsp+30h] [rbp-1C0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-1B8h]
  std::set<unsigned int> *__for_range_1; // [rsp+40h] [rbp-1B0h]
  std::tuple_element<0,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> >::type *iter; // [rsp+48h] [rbp-1A8h]
  std::tuple_element<1,std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> >::type *inserted; // [rsp+50h] [rbp-1A0h]
  const data::H5ActivityScheduleConfig *h5_schedule_config_ptr; // [rsp+58h] [rbp-198h]
  const data::H5ActivityExcelConfig *h5_activity_config_ptr; // [rsp+60h] [rbp-190h]
  std::pair<unsigned int const,H5Activity> *__in; // [rsp+68h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,H5Activity> >::type *_; // [rsp+70h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,H5Activity> >::type *h5_activity; // [rsp+78h] [rbp-178h]
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool> v56; // [rsp+80h] [rbp-170h] BYREF
  std::shared_ptr<Config> v57; // [rsp+90h] [rbp-160h] BYREF
  std::vector<unsigned int> v58; // [rsp+A0h] [rbp-150h] BYREF
  common::milog::MiLogStream v59; // [rsp+C0h] [rbp-130h] BYREF
  common::milog::MiLogStream v60; // [rsp+E0h] [rbp-110h] BYREF
  common::milog::MiLogStream v61; // [rsp+100h] [rbp-F0h] BYREF
  char v62[208]; // [rsp+120h] [rbp-D0h] BYREF

  BYTE4(v40) = is_login;
  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 18 h5_schedule_id:193 48 8 8 iter:179 80 48 31 h5_activity_schedule_id_set:157";
  *(_QWORD *)(v2 + 16) = PlayerH5ActivityComp::refreshH5ActivityComp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  now = common::tools::TimeUtils::getNow();
  __for_range = &this->h5_activity_map_;
  *(std::unordered_map<unsigned int,H5Activity>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,H5Activity>::begin(&this->h5_activity_map_);
  __for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,H5Activity>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false> *)(v2 + 48),
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false> *const)(v2 + 48));
    _ = std::get<0ul,unsigned int const,H5Activity>(__in);
    h5_activity = std::get<1ul,unsigned int const,H5Activity>(__in);
    H5Activity::refreshH5Activity(h5_activity, now);
    std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false> *const)(v2 + 48));
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 80));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v57);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
  data::DbH5ActivityConfigMgr::getOngoingH5ScheduleIds(
    &v58,
    &v5->design_config.db_config_mgr.db_local_config_mgr.h5_activity_config_mgr,
    now);
  __for_range_0 = &v58;
  std::shared_ptr<Config>::~shared_ptr(&v57);
  *(std::vector<unsigned int>::iterator *)(v2 + 48) = std::vector<unsigned int>::begin(__for_range_0);
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 48),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 48));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v2 + 32) = *v7;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v57);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
    h5_schedule_config_ptr = data::DbH5ActivityConfigMgr::findH5ActivityScheduleConfig(
                               &v8->design_config.db_config_mgr.db_local_config_mgr.h5_activity_config_mgr,
                               *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v57);
    if ( !h5_schedule_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "refreshH5ActivityComp",
        163);
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v61,
             (const char (*)[51])"findH5ActivityScheduleConfig fail, h5_schedule_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_14:
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v61);
      goto LABEL_23;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v57);
    p_h5_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57)->design_config.txt_config_mgr.h5_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->h5_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)h5_schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->h5_activity_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&h5_schedule_config_ptr->h5_activity_id);
    }
    h5_activity_config_ptr = data::H5ActivityExcelConfigMgrBase::findH5ActivityExcelConfig(
                               p_h5_activity_config_mgr,
                               h5_schedule_config_ptr->h5_activity_id);
    std::shared_ptr<Config>::~shared_ptr(&v57);
    if ( !h5_activity_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "refreshH5ActivityComp",
        169);
      v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v61,
              (const char (*)[48])"findH5ActivityExcelConfig fail, h5_activity_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              &h5_schedule_config_ptr->h5_activity_id);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_14;
    }
    if ( PlayerH5ActivityComp::checkH5ActivityConds(
           this,
           0LL,
           &h5_activity_config_ptr->cond_comb,
           &h5_activity_config_ptr->cond_list) )
    {
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v2 + 80),
        (const std::set<unsigned int>::value_type *)(v2 + 32));
    }
LABEL_23:
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 48));
  }
  std::vector<unsigned int>::~vector(&v58);
  *(std::unordered_map<unsigned int,H5Activity>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,H5Activity>::begin(&this->h5_activity_map_);
  while ( 1 )
  {
    __for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,H5Activity>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false> *)(v2 + 48),
            &__for_end) )
      break;
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false> *const)(v2 + 48));
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            (std::set<unsigned int> *)(v2 + 80),
            &v15->first) )
    {
      common::milog::MiLogStream::create(
        &v61,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "refreshH5ActivityComp",
        183);
      v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v61,
              (const char (*)[36])"remove h5_activity, h5_schedule_id:");
      v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false> *const)(v2 + 48));
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->first);
      v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v19, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v61);
      *(std::unordered_map<unsigned int,H5Activity>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,H5Activity>::erase(
                                                                              &this->h5_activity_map_,
                                                                              *(std::unordered_map<unsigned int,H5Activity>::iterator *)(v2 + 48));
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false> *const)(v2 + 48));
    }
  }
  is_has_new_activity = 0;
  __for_range_1 = (std::set<unsigned int> *)(v2 + 80);
  __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 80))._M_node;
  *(std::set<unsigned int>::iterator *)(v2 + 48) = std::set<unsigned int>::end(__for_range_1);
  while ( std::operator!=(&__for_begin, (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 48)) )
  {
    v20 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    *(_DWORD *)(v2 + 32) = *v21;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,H5Activity>,unsigned int>(
            &this->h5_activity_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      std::forward_as_tuple<Player &,unsigned int &>(
        (Player *)&v57,
        (unsigned int *)this->player_,
        (Player *)(v2 + 32),
        (unsigned int *)this->player_);
      std::forward_as_tuple<unsigned int &>((unsigned int *)&__for_end, (unsigned int *)(v2 + 32));
      v56 = std::unordered_map<unsigned int,H5Activity>::emplace<std::piecewise_construct_t const&,std::tuple<unsigned int &>,std::tuple<Player &,unsigned int &>>(
              &this->h5_activity_map_,
              &std::piecewise_construct,
              (std::tuple<unsigned int&> *)&__for_end,
              (std::tuple<Player&,unsigned int&> *)&v57,
              v22,
              v23,
              v40);
      iter = std::get<0ul,std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool>(&v56);
      v24 = std::get<1ul,std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>,bool>(&v56);
      inserted = v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v24);
      }
      if ( !*inserted
        || (__for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur,
            std::__detail::operator==<std::pair<unsigned int const,H5Activity>,false>(iter, &__for_end)) )
      {
        common::milog::MiLogStream::create(
          &v59,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/h5_activity/player_h5_activity_comp.cpp",
          "refreshH5ActivityComp",
          202);
        v26 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v59,
                (const char (*)[42])"emplace h5_activity fail, h5_schedule_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                (const unsigned int *)(v2 + 32));
        v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v27, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v28, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v59);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/h5_activity/player_h5_activity_comp.cpp",
          "refreshH5ActivityComp",
          205);
        v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v60, (const char (*)[33])off_25F15000);
        v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v29,
                (const unsigned int *)(v2 + 32));
        v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v30, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v31, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v60);
        v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator->(iter);
        if ( H5Activity::init(&v32->second) )
        {
          common::milog::MiLogStream::create(
            &v61,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/h5_activity/player_h5_activity_comp.cpp",
            "refreshH5ActivityComp",
            208);
          v33 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v61,
                  (const char (*)[39])"init h5_activity fail. h5_schedule_id:");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v2 + 32));
          v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v35, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v61);
          p_h5_activity_map = &this->h5_activity_map_;
          if ( *(_BYTE *)(((unsigned __int64)iter >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          std::unordered_map<unsigned int,H5Activity>::erase(
            p_h5_activity_map,
            (std::unordered_map<unsigned int,H5Activity>::iterator)iter->_M_cur);
        }
        else
        {
          v37 = std::__detail::_Node_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator->(iter);
          H5Activity::refreshH5Activity(&v37->second, now);
          is_has_new_activity = 1;
        }
      }
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::tools::MiTimer::cancel(&this->refresh_h5_activity_timer_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v57);
  v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v57);
  next_refresh_time = data::DbH5ActivityConfigMgr::getNextUpdateH5ActivityTime(
                        &v38->design_config.db_config_mgr.db_local_config_mgr.h5_activity_config_mgr,
                        now);
  std::shared_ptr<Config>::~shared_ptr(&v57);
  if ( next_refresh_time < now + 86400
    && PlayerUnixTimer::startS(
         &this->refresh_h5_activity_timer_,
         next_refresh_time - now,
         0,
         "./src/player/h5_activity/player_h5_activity_comp.cpp",
         "refreshH5ActivityComp",
         221) )
  {
    common::milog::MiLogStream::create(
      &v61,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/h5_activity/player_h5_activity_comp.cpp",
      "refreshH5ActivityComp",
      223);
    v39 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            &v61,
            (const char (*)[21])" start timer failed!");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v39, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v61);
  }
  if ( is_has_new_activity && BYTE4(v40) != 1 )
    PlayerH5ActivityComp::notifyH5ActivityIdList(this);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  if ( v62 == (char *)v2 )
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

// Line 234: range 0000000016C5FFC8-0000000016C602C9
void __cdecl PlayerH5ActivityComp::notifyH5ActivityIdList(const PlayerH5ActivityComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t H5ActivityId; // r14d
  google::protobuf::Map<unsigned int,unsigned int>::key_type *p_key; // rsi
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  char v8; // cl
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+14h] [rbp-10Ch] BYREF
  std::unordered_map<unsigned int,H5Activity>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,H5Activity>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_h5_activity_map; // [rsp+28h] [rbp-F8h]
  const std::unordered_map<unsigned int,H5Activity> *__for_range; // [rsp+30h] [rbp-F0h]
  const std::pair<unsigned int const,H5Activity> *v14; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,H5Activity> >::type *_; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,H5Activity> >::type *h5_activity; // [rsp+48h] [rbp-D8h]
  char v17[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 96 10 notify:235";
  *(_QWORD *)(v1 + 16) = PlayerH5ActivityComp::notifyH5ActivityIdList;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450896) = -202116109;
  proto::H5ActivityIdsNotify::H5ActivityIdsNotify((proto::H5ActivityIdsNotify *const)(v1 + 32));
  proto_h5_activity_map = proto::H5ActivityIdsNotify::mutable_h5_activity_map((proto::H5ActivityIdsNotify *const)(v1 + 32));
  __for_range = &this->h5_activity_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,H5Activity>::begin(&this->h5_activity_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,H5Activity>,false>(&__for_begin, &__for_end) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,H5Activity>(v14);
    h5_activity = (std::tuple_element<1,const std::pair<unsigned int const,H5Activity> >::type *)std::get<1ul,unsigned int const,H5Activity>(v14);
    H5ActivityId = H5Activity::getH5ActivityId(h5_activity);
    key = H5Activity::getH5ScheduleId(h5_activity);
    p_key = &key;
    v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_h5_activity_map, &key);
    v7 = v6;
    v8 = *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)v6 & 7) + 3) >= v8 )
    {
      LOBYTE(p_key) = v8 != 0;
      __asan_report_store4(v6, p_key, v6);
    }
    *v7 = H5ActivityId;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_red_dot_timestamp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->client_red_dot_timestamp_);
  }
  proto::H5ActivityIdsNotify::set_client_red_dot_timestamp(
    (proto::H5ActivityIdsNotify *const)(v1 + 32),
    this->client_red_dot_timestamp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::H5ActivityIdsNotify::~H5ActivityIdsNotify((proto::H5ActivityIdsNotify *const)(v1 + 32));
  if ( v17 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
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

// Line 246: range 0000000016C602CA-0000000016C608F8
bool __cdecl PlayerH5ActivityComp::checkH5ActivityConds(
        const PlayerH5ActivityComp *const this,
        H5Activity *h5_activity_ptr,
        const data::LogicType *cond_comb,
        const std::vector<data::H5ActivityCondConfig> *cond_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::vector<bool>::size_type v7; // rax
  data::H5ActivityCondType type; // eax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  PlayerBasicComp *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  time_t v13; // rdx
  time_t v14; // r14
  time_t Now; // rax
  unsigned int v16; // edx
  common::milog::MiLogStream *v17; // rcx
  bool v18; // r14
  bool result; // al
  bool cond_result; // [rsp+27h] [rbp-119h]
  unsigned int val; // [rsp+28h] [rbp-118h] BYREF
  uint32_t time_offset; // [rsp+2Ch] [rbp-114h]
  uint32_t schedule_begin_day; // [rsp+30h] [rbp-110h]
  uint32_t now_day; // [rsp+34h] [rbp-10Ch]
  std::vector<data::H5ActivityCondConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-108h] BYREF
  std::vector<data::H5ActivityCondConfig>::const_iterator __for_end; // [rsp+40h] [rbp-100h] BYREF
  const std::vector<data::H5ActivityCondConfig> *__for_range; // [rsp+48h] [rbp-F8h]
  const data::H5ActivityCondConfig *cond; // [rsp+50h] [rbp-F0h]
  const data::H5ActivityScheduleConfig *h5_schedule_config_ptr; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v32; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+90h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 40 19 cond_result_vec:247";
  *(_QWORD *)(v4 + 16) = PlayerH5ActivityComp::checkH5ActivityConds;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  std::vector<bool>::vector((std::vector<bool> *const)(v4 + 48));
  v7 = std::vector<data::H5ActivityCondConfig>::size(cond_vec);
  std::vector<bool>::reserve((std::vector<bool> *const)(v4 + 48), v7);
  __for_range = cond_vec;
  __for_begin._M_current = std::vector<data::H5ActivityCondConfig>::begin(cond_vec)._M_current;
  __for_end._M_current = std::vector<data::H5ActivityCondConfig>::end(cond_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::H5ActivityCondConfig const*,std::vector<data::H5ActivityCondConfig>>(
            &__for_begin,
            &__for_end) )
  {
    cond = __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig const*,std::vector<data::H5ActivityCondConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->type);
    }
    type = cond->type;
    if ( type != H5_ACTIVITY_COND_DAY_COUNT_GREAT_EQUAL )
    {
      if ( type <= H5_ACTIVITY_COND_DAY_COUNT_GREAT_EQUAL )
      {
        if ( type == H5_ACTIVITY_COND_PLAYER_LEVEL )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          Level = PlayerBasicComp::getLevel(BasicComp);
          if ( *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cond->param);
          }
          goto LABEL_17;
        }
        if ( type == H5_ACTIVITY_COND_REGISTER_TIME_GREAT_EQUAL )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v11 = Player::getBasicComp(this->player_);
          Level = PlayerBasicComp::getRegisterTime(v11);
          if ( *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cond->param);
          }
LABEL_17:
          std::vector<bool>::push_back((std::vector<bool> *const)(v4 + 48), Level >= cond->param);
          goto LABEL_37;
        }
      }
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "checkH5ActivityConds",
        274);
      v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v33,
              (const char (*)[19])"unknown cond.type:");
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      val = cond->type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
LABEL_36:
      std::vector<bool>::push_back((std::vector<bool> *const)(v4 + 48), 0);
      goto LABEL_37;
    }
    if ( !h5_activity_ptr )
      goto LABEL_36;
    h5_schedule_config_ptr = H5Activity::findH5ActivityScheduleConfig(h5_activity_ptr);
    if ( !h5_schedule_config_ptr )
      goto LABEL_36;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v12->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v32);
    v13 = time_offset;
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&h5_schedule_config_ptr->begin_time);
    }
    schedule_begin_day = common::tools::TimeUtils::getTimeDay(h5_schedule_config_ptr->begin_time, v13);
    v14 = time_offset;
    Now = common::tools::TimeUtils::getNow();
    now_day = common::tools::TimeUtils::getTimeDay(Now, v14);
    if ( *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&cond->param);
    }
    if ( cond->param )
      v16 = cond->param - 1;
    else
      v16 = 0;
    cond_result = now_day >= SAFE_ADD<unsigned int,unsigned int>(schedule_begin_day, v16);
    std::vector<bool>::push_back((std::vector<bool> *const)(v4 + 48), cond_result);
LABEL_37:
    __gnu_cxx::__normal_iterator<data::H5ActivityCondConfig const*,std::vector<data::H5ActivityCondConfig>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)cond_comb & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(cond_comb);
  }
  v18 = CommonMiscs::evaluateLogicComb(*cond_comb, (const std::vector<bool> *)(v4 + 48));
  std::vector<bool>::~vector((std::vector<bool> *const)(v4 + 48));
  result = v18;
  if ( v34 == (char *)v4 )
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

// Line 283: range 0000000016C608FA-0000000016C60CD0
int32_t __cdecl PlayerH5ActivityComp::getPlayerMemH5ActivityData(
        const PlayerH5ActivityComp *const this,
        const std::vector<unsigned int> *h5_schedule_id_vec,
        proto::PlayerMemH5ActivityDataResult *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  char *v8; // rsi
  int *v9; // rax
  _DWORD *v10; // rdx
  char v11; // cl
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,H5Activity>,false,false>::pointer v12; // rax
  char *v13; // rsi
  int *v14; // rax
  int32_t *v15; // rdx
  char v16; // cl
  proto::PlayerMemH5ActivityData *v17; // rax
  int32_t v18; // eax
  int32_t retcode; // [rsp+24h] [rbp-13Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false> __y; // [rsp+38h] [rbp-128h] BYREF
  google::protobuf::Map<unsigned int,int> *retcode_map; // [rsp+40h] [rbp-120h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-118h]
  char v26[272]; // [rsp+50h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 18 h5_schedule_id:285 48 8 8 iter:287 80 104 31 player_mem_h5_activity_data:293";
  *(_QWORD *)(v3 + 16) = PlayerH5ActivityComp::getPlayerMemH5ActivityData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  retcode_map = proto::PlayerMemH5ActivityDataResult::mutable_retcode_map(result);
  __for_range = h5_schedule_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(h5_schedule_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(h5_schedule_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
    *(std::unordered_map<unsigned int,H5Activity>::const_iterator *)(v3 + 48) = std::unordered_map<unsigned int,H5Activity>::find(
                                                                                  &this->h5_activity_map_,
                                                                                  (const std::unordered_map<unsigned int,H5Activity>::key_type *)(v3 + 32));
    __y._M_cur = std::unordered_map<unsigned int,H5Activity>::end(&this->h5_activity_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<unsigned int const,H5Activity>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,H5Activity>,false> *)(v3 + 48),
           &__y) )
    {
      v8 = (char *)(v3 + 32);
      v9 = google::protobuf::Map<unsigned int,int>::operator[](
             retcode_map,
             (const google::protobuf::Map<unsigned int,int>::key_type *)(v3 + 32));
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(v9, v8, v9);
      }
      *v10 = 5;
    }
    else
    {
      proto::PlayerMemH5ActivityData::PlayerMemH5ActivityData((proto::PlayerMemH5ActivityData *const)(v3 + 80));
      v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,H5Activity>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,H5Activity>,false,false> *const)(v3 + 48));
      retcode = H5Activity::getPlayerMemH5ActivityData(&v12->second, (proto::PlayerMemH5ActivityData *)(v3 + 80));
      v13 = (char *)(v3 + 32);
      v14 = google::protobuf::Map<unsigned int,int>::operator[](
              retcode_map,
              (const google::protobuf::Map<unsigned int,int>::key_type *)(v3 + 32));
      v15 = v14;
      v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(v14, v13, v14);
      }
      *v15 = retcode;
      if ( !retcode )
      {
        v17 = proto::PlayerMemH5ActivityDataResult::add_h5_activity_data_list(result);
        proto::PlayerMemH5ActivityData::Swap((proto::PlayerMemH5ActivityData *const)(v3 + 80), v17);
      }
      proto::PlayerMemH5ActivityData::~PlayerMemH5ActivityData((proto::PlayerMemH5ActivityData *const)(v3 + 80));
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  v18 = 0;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return v18;
};

// Line 306: range 0000000016C60CD2-0000000016C60CF4
void __cdecl PlayerH5ActivityComp::onRedPointConfigChange(PlayerH5ActivityComp *const this, uint32_t now)
{
  PlayerH5ActivityComp::refreshRedPoint(this, now);
};

// Line 311: range 0000000016C60CF6-0000000016C60D34
void __cdecl PlayerH5ActivityComp::onRedPointTimer(PlayerH5ActivityComp *const this, uint64_t now_ms)
{
  PlayerH5ActivityComp::refreshRedPoint(this, now_ms / 0x3E8);
};

// Line 316: range 0000000016C60D36-0000000016C60D69
void __cdecl PlayerH5ActivityComp::refreshRedPoint(PlayerH5ActivityComp *const this, uint32_t now)
{
  PlayerH5ActivityComp::checkAndNotifyRedPointChange(this, now);
  PlayerH5ActivityComp::trySetUpRedPointTimer(this, now);
};

// Line 322: range 0000000016C60D6A-0000000016C614C2
void __cdecl PlayerH5ActivityComp::checkAndNotifyRedPointChange(PlayerH5ActivityComp *const this, uint32_t now)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  data::DbRedPointConfigMgr *p_red_point_config_mgr; // rsi
  std::map<unsigned int,bool>::iterator *p_for_end; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::reference v7; // rax
  std::pair<unsigned int const,bool> *v8; // rdx
  data::DbRedPointConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  const google::protobuf::RepeatedPtrField<proto::RedPointData> *v15; // rax
  std::map<unsigned int,bool>::iterator __for_begin; // [rsp+10h] [rbp-150h] BYREF
  std::map<unsigned int,bool>::iterator __for_end; // [rsp+18h] [rbp-148h] BYREF
  std::map<unsigned int,bool> *__for_range; // [rsp+20h] [rbp-140h]
  std::tuple_element<0,const std::pair<unsigned int const,bool> >::type *id; // [rsp+28h] [rbp-138h]
  std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *is_show; // [rsp+30h] [rbp-130h]
  const data::RedPointConfig *red_point_config_ptr; // [rsp+38h] [rbp-128h]
  proto::RedPointData *proto_red_point_data; // [rsp+40h] [rbp-120h]
  std::pair<unsigned int const,bool> v24; // [rsp+48h] [rbp-118h] BYREF
  std::shared_ptr<Config> v25; // [rsp+50h] [rbp-110h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-100h] BYREF
  char v27[224]; // [rsp+80h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 48 24 red_point_change_map:323 112 48 10 notify:324";
  *(_QWORD *)(v2 + 16) = PlayerH5ActivityComp::checkAndNotifyRedPointChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  p_red_point_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.db_config_mgr.db_local_config_mgr.red_point_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_red_point_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_red_point_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_check_red_point_time_);
  }
  data::DbRedPointConfigMgr::getRedPointChangeBetweenTime(
    (std::map<unsigned int,bool> *)(v2 + 32),
    p_red_point_config_mgr,
    this->last_check_red_point_time_,
    now);
  std::shared_ptr<Config>::~shared_ptr(&v25);
  proto::UpdateRedPointNotify::UpdateRedPointNotify((proto::UpdateRedPointNotify *const)(v2 + 112));
  __for_range = (std::map<unsigned int,bool> *)(v2 + 32);
  __for_begin._M_node = std::map<unsigned int,bool>::begin((std::map<unsigned int,bool> *const)(v2 + 32))._M_node;
  __for_end._M_node = std::map<unsigned int,bool>::end((std::map<unsigned int,bool> *const)(v2 + 32))._M_node;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !std::operator!=(&__for_begin, &__for_end) )
      break;
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
    v8 = v7;
    if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&v7->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v7->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v7, 8LL);
    }
    v24 = *v8;
    id = std::get<0ul,unsigned int const,bool>(&v24);
    is_show = (std::tuple_element<1,const std::pair<unsigned int const,bool> >::type *)std::get<1ul,unsigned int const,bool>(&v24);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.db_config_mgr.db_local_config_mgr.red_point_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    red_point_config_ptr = data::DbRedPointConfigMgr::findRedPointConfig(v9, *id);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( red_point_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      Level = PlayerBasicComp::getLevel(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->player_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)red_point_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->player_level >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&red_point_config_ptr->player_level);
      }
      if ( Level >= red_point_config_ptr->player_level )
      {
        proto_red_point_data = proto::UpdateRedPointNotify::add_red_point_list((proto::UpdateRedPointNotify *const)(v2 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->red_point_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)red_point_config_ptr + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->red_point_type >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&red_point_config_ptr->red_point_type);
        }
        proto::RedPointData::set_red_point_type(proto_red_point_data, red_point_config_ptr->red_point_type);
        if ( *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)is_show & 7) >= *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(is_show);
        }
        proto::RedPointData::set_is_show(proto_red_point_data, *is_show);
        if ( *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->content_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)red_point_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->content_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&red_point_config_ptr->content_id);
        }
        proto::RedPointData::set_content_id(proto_red_point_data, red_point_config_ptr->content_id);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "checkAndNotifyRedPointChange",
        330);
      v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v26,
              (const char (*)[29])"findRedPointConfig fail, id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" is_show:");
      if ( *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)is_show & 7) >= *(_BYTE *)(((unsigned __int64)is_show >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(is_show);
      }
      common::milog::MiLogStream::operator<<(v12, *is_show);
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
  }
  v15 = proto::UpdateRedPointNotify::red_point_list((const proto::UpdateRedPointNotify *const)(v2 + 112));
  if ( !google::protobuf::RepeatedPtrField<proto::RedPointData>::empty(v15) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_for_end = (std::map<unsigned int,bool>::iterator *)(v2 + 112);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 112));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_red_point_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_red_point_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_red_point_time_, p_for_end, &this->last_check_red_point_time_);
  }
  this->last_check_red_point_time_ = now;
  proto::UpdateRedPointNotify::~UpdateRedPointNotify((proto::UpdateRedPointNotify *const)(v2 + 112));
  std::map<unsigned int,bool>::~map((std::map<unsigned int,bool> *const)(v2 + 32));
  if ( v27 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 350: range 0000000016C614C4-0000000016C61759
void __cdecl PlayerH5ActivityComp::trySetUpRedPointTimer(PlayerH5ActivityComp *const this, uint32_t now)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  uint32_t next_refresh_time; // [rsp+1Ch] [rbp-94h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 interval:356";
  *(_QWORD *)(v2 + 16) = PlayerH5ActivityComp::trySetUpRedPointTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  common::tools::MiTimer::cancel(&this->notify_red_point_timer_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  next_refresh_time = data::DbRedPointConfigMgr::findNextUpdateRedPointTime(
                        &v5->design_config.db_config_mgr.db_local_config_mgr.red_point_config_mgr,
                        now);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( next_refresh_time > now && next_refresh_time < now + 86400 )
  {
    *(_DWORD *)(v2 + 32) = next_refresh_time - now;
    if ( PlayerUnixTimer::startS(
           &this->notify_red_point_timer_,
           *(_DWORD *)(v2 + 32),
           0,
           "./src/player/h5_activity/player_h5_activity_comp.cpp",
           "trySetUpRedPointTimer",
           357) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/h5_activity/player_h5_activity_comp.cpp",
        "trySetUpRedPointTimer",
        359);
      v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v11,
             (const char (*)[47])"start notify_red_point_timer failed! interval:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v8, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
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
};

// Line 365: range 0000000016C6175A-0000000016C61CEF
void __cdecl PlayerH5ActivityComp::checkRedPointOnPlayerLevelup(
        PlayerH5ActivityComp *const this,
        uint32_t old_level,
        uint32_t new_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  const google::protobuf::RepeatedPtrField<proto::RedPointData> *v13; // rax
  uint32_t now; // [rsp+14h] [rbp-14Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  const data::RedPointConfig *red_point_config_ptr; // [rsp+30h] [rbp-130h]
  proto::RedPointData *proto_red_point_data; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-110h] BYREF
  char v23[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 6 id:373 48 24 20 red_point_id_vec:367 112 48 10 notify:372";
  *(_QWORD *)(v3 + 16) = PlayerH5ActivityComp::checkRedPointOnPlayerLevelup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  data::DbRedPointConfigMgr::getNewRedPointByPlayerLevelChange(
    (std::vector<unsigned int> *)(v3 + 48),
    &v6->design_config.db_config_mgr.db_local_config_mgr.red_point_config_mgr,
    now,
    old_level,
    new_level);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 48)) )
  {
    proto::UpdateRedPointNotify::UpdateRedPointNotify((proto::UpdateRedPointNotify *const)(v3 + 112));
    __for_range = (std::vector<unsigned int> *)(v3 + 48);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 48))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 48))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v3 + 32) = *v8;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
      red_point_config_ptr = data::DbRedPointConfigMgr::findRedPointConfig(
                               &v9->design_config.db_config_mgr.db_local_config_mgr.red_point_config_mgr,
                               *(_DWORD *)(v3 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( red_point_config_ptr )
      {
        proto_red_point_data = proto::UpdateRedPointNotify::add_red_point_list((proto::UpdateRedPointNotify *const)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->red_point_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)red_point_config_ptr + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->red_point_type >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&red_point_config_ptr->red_point_type);
        }
        proto::RedPointData::set_red_point_type(proto_red_point_data, red_point_config_ptr->red_point_type);
        proto::RedPointData::set_is_show(proto_red_point_data, 1);
        if ( *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->content_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)red_point_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&red_point_config_ptr->content_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&red_point_config_ptr->content_id);
        }
        proto::RedPointData::set_content_id(proto_red_point_data, red_point_config_ptr->content_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/h5_activity/player_h5_activity_comp.cpp",
          "checkRedPointOnPlayerLevelup",
          378);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v22,
                (const char (*)[29])"findRedPointConfig fail, id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v3 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v13 = proto::UpdateRedPointNotify::red_point_list((const proto::UpdateRedPointNotify *const)(v3 + 112));
    if ( !google::protobuf::RepeatedPtrField<proto::RedPointData>::empty(v13) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 112));
    }
    proto::UpdateRedPointNotify::~UpdateRedPointNotify((proto::UpdateRedPointNotify *const)(v3 + 112));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
  if ( v23 == (char *)v3 )
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
};
