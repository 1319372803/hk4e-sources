// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reputation/player_reputation_comp.cpp

// Line 24: range 0000000016CE46CE-0000000016CE4A94
int32_t __cdecl PlayerReputationComp::fromBin(
        PlayerReputationComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  CityReputation *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  std::shared_ptr<CityReputation> *v10; // rax
  unsigned int *v11; // rcx
  std::shared_ptr<CityReputation> *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::CityReputationBin>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::CityReputationBin>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const proto::PlayerReputationCompBin *proto_comp; // [rsp+38h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::CityReputationBin> *__for_range; // [rsp+40h] [rbp-C0h]
  const proto::CityReputationBin *city_bin; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 city_id:28 64 16 22 city_reputation_ptr:29";
  *(_QWORD *)(v3 + 16) = PlayerReputationComp::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  proto_comp = proto::PlayerDataBin::reputation_bin(player_data_bin);
  __for_range = proto::PlayerReputationCompBin::city_reputation_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::CityReputationBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::CityReputationBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::CityReputationBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    city_bin = google::protobuf::internal::RepeatedPtrIterator<proto::CityReputationBin const>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 48) = proto::CityReputationBin::city_id(city_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    common::tools::perf::make_shared<CityReputation,Player &,unsigned int &>(
      (Player *)(v3 + 64),
      (unsigned int *)this->player_,
      (Player *)(v3 + 48),
      (unsigned int *)this->player_);
    v6 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( CityReputation::fromBin(v6, city_bin) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/reputation/player_reputation_comp.cpp",
        "fromBin",
        32);
      v7 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v22, (const char (*)[17])"city reputation:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" fromBin fails");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v2 = -1;
      v9 = 0;
    }
    else
    {
      v10 = std::move<std::shared_ptr<CityReputation> &>((std::shared_ptr<CityReputation> *)(v3 + 64));
      v13 = std::map<unsigned int,std::shared_ptr<CityReputation>>::emplace<unsigned int &,std::shared_ptr<CityReputation>>(
              &this->city_reputation_map_,
              (unsigned int *)(v3 + 48),
              v10,
              v11,
              v12);
      if ( !v13.second )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/reputation/player_reputation_comp.cpp",
          "fromBin",
          37);
        v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v22,
                (const char (*)[17])"city reputation:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])" duplicate fails");
        common::milog::MiLogStream::~MiLogStream(&v22);
        v2 = -1;
        v9 = 0;
      }
      else
      {
        v9 = 1;
      }
    }
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 64));
    if ( v9 != 1 )
      goto LABEL_16;
    google::protobuf::internal::RepeatedPtrIterator<proto::CityReputationBin const>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_16:
  result = v2;
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

// Line 45: range 0000000016CE4A96-0000000016CE4C51
int32_t __cdecl PlayerReputationComp::toBin(PlayerReputationComp *const this, proto::PlayerDataBin *player_data_bin)
{
  CityReputation *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::PlayerReputationCompBin *proto_comp; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,std::shared_ptr<CityReputation>> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,std::shared_ptr<CityReputation> > *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *city_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *city_reputation_ptr; // [rsp+50h] [rbp-40h]
  proto::CityReputationBin *city_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::mutable_reputation_bin(player_data_bin);
  __for_range = &this->city_reputation_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::begin(&this->city_reputation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end(&this->city_reputation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::shared_ptr<CityReputation>>(v11);
    city_reputation_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<CityReputation>>(v11);
    if ( !std::operator==<CityReputation>(0LL, city_reputation_ptr) )
    {
      city_bin = proto::PlayerReputationCompBin::add_city_reputation_list(proto_comp);
      v2 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)city_reputation_ptr);
      if ( CityReputation::toBin(v2, city_bin) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/reputation/player_reputation_comp.cpp",
          "toBin",
          54);
        v3 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               &v15,
               (const char (*)[17])"city reputation:");
        val = proto::CityReputationBin::city_id(city_bin);
        v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v4, (const char (*)[13])" toBin fails");
        common::milog::MiLogStream::~MiLogStream(&v15);
        return -1;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 62: range 0000000016CE4C52-0000000016CE4F10
int32_t __cdecl PlayerReputationComp::init(PlayerReputationComp *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  int32_t result; // eax
  std::weak_ptr<PlayerReputationComp> *p_this_wtr; // [rsp+10h] [rbp-E0h]
  std::weak_ptr<PlayerReputationComp> v7; // [rsp+20h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+30h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 11 this_ptr:63 64 16 11 this_wtr:69";
  *(_QWORD *)(p_pending_que + 16) = PlayerReputationComp::init;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerReputationComp>((PlayerReputationComp *)(p_pending_que + 32));
  if ( std::operator==<PlayerReputationComp>(0LL, (const std::shared_ptr<PlayerReputationComp> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/player_reputation_comp.cpp",
      "init",
      66);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[52])"dynamic_pointer_cast to PlayerReputationComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<PlayerReputationComp>::weak_ptr<PlayerReputationComp,void>(
      (std::weak_ptr<PlayerReputationComp> *const)(p_pending_que + 64),
      (const std::shared_ptr<PlayerReputationComp> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_this_wtr = (std::weak_ptr<PlayerReputationComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerReputationComp>::weak_ptr(
      &v7,
      (const std::weak_ptr<PlayerReputationComp> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<PlayerReputationComp,FinishParentQuestEvent>(
      &varC0,
      p_this_wtr,
      (void (*)(PlayerReputationComp *, const FinishParentQuestEvent *))&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<PlayerReputationComp>::~weak_ptr(&v7);
    v4 = 0;
    std::weak_ptr<PlayerReputationComp>::~weak_ptr((std::weak_ptr<PlayerReputationComp> *const)(p_pending_que + 64));
  }
  std::shared_ptr<PlayerReputationComp>::~shared_ptr((std::shared_ptr<PlayerReputationComp> *const)(p_pending_que + 32));
  result = v4;
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 77: range 0000000016CE4F12-0000000016CE5317
int32_t __cdecl PlayerReputationComp::onLogin(PlayerReputationComp *const this, bool is_new_player)
{
  unsigned __int64 p_M_parent; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  std::shared_ptr<CityReputation> *v6; // rax
  const unsigned int *v7; // rcx
  std::shared_ptr<CityReputation> *v8; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > >,bool> v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *city_level_config_map; // [rsp+28h] [rbp-C8h]
  const std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>> *__for_range; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > *v20; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *city_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *_; // [rsp+48h] [rbp-A8h]
  PlayerReputationComp v23; // [rsp+50h] [rbp-A0h] BYREF

  p_M_parent = (unsigned __int64)&v23.city_reputation_map_._M_t._M_impl._M_header._M_parent;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      p_M_parent = v3;
  }
  *(_QWORD *)p_M_parent = 1102416563LL;
  *(_QWORD *)(p_M_parent + 8) = "1 32 16 22 city_reputation_ptr:86";
  *(_QWORD *)(p_M_parent + 16) = PlayerReputationComp::onLogin;
  v4 = p_M_parent >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(p_M_parent + 32));
  city_level_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_parent + 32))->design_config.txt_config_mgr.reputation_config_mgr.city_level_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_parent + 32));
  __for_range = city_level_config_map;
  __for_begin._M_node = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::begin(city_level_config_map)._M_node;
  __for_end._M_node = std::map<unsigned int,std::vector<data::ReputationLevelExcelConfig>>::end(city_level_config_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v20 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::vector<data::ReputationLevelExcelConfig>>(v20);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::ReputationLevelExcelConfig>>(v20);
    if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(city_id);
    }
    PlayerReputationComp::findCityReputationPtr(&v23, (uint32_t)this);
    v5 = std::operator!=<CityReputation>((const std::shared_ptr<CityReputation> *)&v23, 0LL);
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)&v23);
    if ( !v5 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      common::tools::perf::make_shared<CityReputation,Player &,unsigned int const&>(
        (Player *)(p_M_parent + 32),
        (const unsigned int *)this->player_,
        (Player *)city_id,
        (const unsigned int *)this->player_);
      v6 = std::move<std::shared_ptr<CityReputation> &>((std::shared_ptr<CityReputation> *)(p_M_parent + 32));
      v9 = std::map<unsigned int,std::shared_ptr<CityReputation>>::emplace<unsigned int const&,std::shared_ptr<CityReputation>>(
             &this->city_reputation_map_,
             city_id,
             v6,
             v7,
             v8);
      if ( !v9.second )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v23._M_weak_this._M_refcount,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/reputation/player_reputation_comp.cpp",
          "onLogin",
          89);
        v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                (common::milog::MiLogStream *const)&v23._M_weak_this._M_refcount,
                (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v11,
                (const char (*)[18])" emplace city_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, city_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v23._M_weak_this._M_refcount);
      }
      std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(p_M_parent + 32));
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::ReputationLevelExcelConfig>>>::operator++(&__for_begin);
  }
  PlayerReputationComp::tryRefreshAllCityReputation(this);
  result = 0;
  if ( &v23.city_reputation_map_._M_t._M_impl._M_header._M_parent == (std::_Rb_tree_node_base::_Base_ptr *)p_M_parent )
  {
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_parent = 1172321806LL;
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 99: range 0000000016CE5318-0000000016CE5332
void __cdecl PlayerReputationComp::onDailyRefresh(PlayerReputationComp *const this)
{
  PlayerReputationComp::tryRefreshAllCityReputation(this);
};

// Line 104: range 0000000016CE5334-0000000016CE53EC
void __cdecl PlayerReputationComp::tryRefreshAllCityReputation(PlayerReputationComp *const this)
{
  CityReputation *v1; // rax
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<CityReputation> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *reputation_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->city_reputation_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::begin(&this->city_reputation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end(&this->city_reputation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    reputation_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    if ( std::operator!=<CityReputation>(reputation_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
      CityReputation::refreshRequest(v1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator++(&__for_begin);
  }
};

// Line 116: range 0000000016CE53EE-0000000016CE56C1
int32_t __cdecl PlayerReputationComp::notifyAllData(PlayerReputationComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t Level; // eax
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>> *__for_range; // [rsp+28h] [rbp-D8h]
  std::pair<unsigned int const,std::shared_ptr<CityReputation> > *__in; // [rsp+30h] [rbp-D0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *city_id; // [rsp+38h] [rbp-C8h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *reputation_ptr; // [rsp+40h] [rbp-C0h]
  proto::CityReputationSimpleInfo *simple_info; // [rsp+48h] [rbp-B8h]
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:117";
  *(_QWORD *)(v1 + 16) = PlayerReputationComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::CityReputationDataNotify::CityReputationDataNotify((proto::CityReputationDataNotify *const)(v1 + 48));
  __for_range = &this->city_reputation_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::begin(&this->city_reputation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end(&this->city_reputation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    reputation_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    if ( std::operator!=<CityReputation>(reputation_ptr, 0LL) )
    {
      simple_info = proto::CityReputationDataNotify::add_simple_info_list((proto::CityReputationDataNotify *const)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(city_id);
      }
      proto::CityReputationSimpleInfo::set_city_id(simple_info, *city_id);
      v4 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
      Level = CityReputation::getLevel(v4);
      proto::CityReputationSimpleInfo::set_level(simple_info, Level);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::CityReputationDataNotify::~CityReputationDataNotify((proto::CityReputationDataNotify *const)(v1 + 48));
  result = 0;
  if ( v14 == (char *)v1 )
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

// Line 132: range 0000000016CE56C2-0000000016CE584A
PlayerReputationComp *__fastcall PlayerReputationComp::findCityReputationPtr(
        PlayerReputationComp *const this,
        __int64 city_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::pointer v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 city_id:131 64 8 8 iter:133";
  *(_QWORD *)(v3 + 16) = PlayerReputationComp::findCityReputationPtr;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<CityReputation>>::find(
                                                                                     (std::map<unsigned int,std::shared_ptr<CityReputation>> *const)(city_id + 32),
                                                                                     (const std::map<unsigned int,std::shared_ptr<CityReputation>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end((std::map<unsigned int,std::shared_ptr<CityReputation>> *const)(city_id + 32))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > > *const)(v3 + 64));
    std::shared_ptr<CityReputation>::shared_ptr((std::shared_ptr<CityReputation> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<CityReputation>::shared_ptr((std::shared_ptr<CityReputation> *const)this, 0LL);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 142: range 0000000016CE584C-0000000016CE5A0F
bool __cdecl PlayerReputationComp::isAcceptedByRequest(PlayerReputationComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool isAcceptedByRequest; // r14
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool result; // al
  int city_id; // [rsp+1Ch] [rbp-74h]
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 18 reputation_ptr:148";
  *(_QWORD *)(v2 + 16) = PlayerReputationComp::isAcceptedByRequest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  city_id = ReputationExcelConfigMgr::findCityIdByRequestQuestId(
              &v5->design_config.txt_config_mgr.reputation_config_mgr,
              quest_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( city_id )
  {
    PlayerReputationComp::findCityReputationPtr((PlayerReputationComp *const)(v2 + 32), (__int64)this, city_id);
    if ( std::operator!=<CityReputation>((const std::shared_ptr<CityReputation> *)(v2 + 32), 0LL) )
    {
      v7 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      isAcceptedByRequest = CityReputation::isAcceptedByRequest(v7, quest_id);
    }
    else
    {
      isAcceptedByRequest = 0;
    }
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v2 + 32));
  }
  else
  {
    isAcceptedByRequest = 0;
  }
  result = isAcceptedByRequest;
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

// Line 158: range 0000000016CE5A10-0000000016CE5AD7
uint32_t __cdecl PlayerReputationComp::getAcceptRequestNum(PlayerReputationComp *const this)
{
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t num; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<CityReputation> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *reputation_ptr; // [rsp+48h] [rbp-8h]

  num = 0;
  __for_range = &this->city_reputation_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::begin(&this->city_reputation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end(&this->city_reputation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    reputation_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    if ( std::operator!=<CityReputation>(reputation_ptr, 0LL) )
    {
      v1 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
      num += CityReputation::getAcceptRequestNum(v1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator++(&__for_begin);
  }
  return num;
};

// Line 171: range 0000000016CE5AD8-0000000016CE5CFD
void __cdecl PlayerReputationComp::onParentQuestFinish(
        PlayerReputationComp *const this,
        const FinishParentQuestEvent *event)
{
  char v2; // bl
  ReputationExcelConfigMgr *p_reputation_config_mgr; // rcx
  char v4; // r12
  CityReputation *v5; // rcx
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>> *__for_range; // [rsp+20h] [rbp-40h]
  std::pair<unsigned int const,std::shared_ptr<CityReputation> > *__in; // [rsp+28h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *_; // [rsp+30h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *reputation_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v12[2]; // [rsp+40h] [rbp-20h] BYREF

  v2 = 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->is_random >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_random >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_random);
  }
  if ( event->is_random )
    goto LABEL_7;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v12);
  v2 = 1;
  p_reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12)->design_config.txt_config_mgr.reputation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  if ( !ReputationExcelConfigMgr::isParentQuestBelongRequest(p_reputation_config_mgr, event->parent_quest_id) )
LABEL_7:
    v4 = 1;
  else
    v4 = 0;
  if ( v2 )
    std::shared_ptr<Config>::~shared_ptr(v12);
  if ( !v4 )
  {
    __for_range = &this->city_reputation_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::begin(&this->city_reputation_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end(&this->city_reputation_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
      reputation_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
      if ( std::operator!=<CityReputation>(reputation_ptr, 0LL) )
      {
        v5 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&event->parent_quest_id);
        }
        CityReputation::onParentQuestFinish(v5, event->parent_quest_id);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator++(&__for_begin);
    }
  }
};

// Line 186: range 0000000016CE5CFE-0000000016CE5FA6
int32_t __cdecl PlayerReputationComp::getCityReputationMapInfo(
        PlayerReputationComp *const this,
        proto::GetCityReputationMapInfoRsp *rsp_0)
{
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  CityReputation *v4; // rax
  CityReputation *v5; // rax
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerHuntingComp *HuntingComp; // rax
  bool IsNewHunting; // dl
  bool is_any_city_unlock; // [rsp+17h] [rbp-39h]
  uint32_t new_request_cnt; // [rsp+18h] [rbp-38h]
  uint32_t open_city_cnt; // [rsp+1Ch] [rbp-34h]
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<CityReputation>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<CityReputation> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *city_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::type *reputation_ptr; // [rsp+48h] [rbp-8h]

  proto::GetCityReputationMapInfoRsp::set_retcode(rsp_0, 0);
  new_request_cnt = 0;
  is_any_city_unlock = 0;
  open_city_cnt = 0;
  __for_range = &this->city_reputation_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::begin(&this->city_reputation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end(&this->city_reputation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator*(&__for_begin);
    city_id = std::get<0ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    reputation_ptr = std::get<1ul,unsigned int const,std::shared_ptr<CityReputation>>(__in);
    if ( !std::operator==<CityReputation>(0LL, reputation_ptr) )
    {
      v2 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
      if ( !CityReputation::checkCityReputationOpen(v2) )
      {
        v4 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
        if ( CityReputation::hasReward(v4) )
        {
          if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(city_id);
          }
          proto::GetCityReputationMapInfoRsp::add_reward_city_list(rsp_0, *city_id);
        }
        v5 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
        CityReputation::refreshRequest(v5);
        v6 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
        if ( CityReputation::isRequestEntranceOpen(v6) )
        {
          ++open_city_cnt;
          v7 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
          if ( CityReputation::isNewRefreshRequest(v7) )
            ++new_request_cnt;
        }
        v8 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)reputation_ptr);
        if ( CityReputation::isHunterEntranceOpen(v8) )
        {
          is_any_city_unlock = 1;
          if ( *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)city_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)city_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(city_id);
          }
          proto::GetCityReputationMapInfoRsp::add_unlock_hunting_city_list(rsp_0, *city_id);
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation>>>::operator++(&__for_begin);
  }
  if ( open_city_cnt && new_request_cnt == open_city_cnt )
    proto::GetCityReputationMapInfoRsp::set_is_new_request(rsp_0, 1);
  if ( is_any_city_unlock )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    HuntingComp = Player::getHuntingComp(this->player_);
    IsNewHunting = PlayerHuntingComp::getIsNewHunting(HuntingComp);
    proto::GetCityReputationMapInfoRsp::set_is_new_hunting(rsp_0, IsNewHunting);
  }
  else
  {
    proto::GetCityReputationMapInfoRsp::set_is_new_hunting(rsp_0, 0);
  }
  return proto::GetCityReputationMapInfoRsp::retcode(rsp_0);
};

// Line 233: range 0000000016CE5FA8-0000000016CE628B
__int64 __fastcall PlayerReputationComp::checkAddExpItem(PlayerReputationComp *const this, uint32_t item_id)
{
  unsigned __int64 p_M_parent; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  PlayerReputationComp v10[2]; // [rsp+10h] [rbp-C0h] BYREF

  p_M_parent = (unsigned __int64)&v10[0].city_reputation_map_._M_t._M_impl._M_header._M_parent;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      p_M_parent = v3;
  }
  *(_QWORD *)p_M_parent = 1102416563LL;
  *(_QWORD *)(p_M_parent + 8) = "2 48 4 11 city_id:234 64 4 11 item_id:232";
  *(_QWORD *)(p_M_parent + 16) = PlayerReputationComp::checkAddExpItem;
  v4 = (_DWORD *)(p_M_parent >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(p_M_parent + 64) = item_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10);
  *(_DWORD *)(p_M_parent + 48) = ReputationExcelConfigMgr::findCityIdByVirtualItem(
                                   &v5->design_config.txt_config_mgr.reputation_config_mgr,
                                   *(_DWORD *)(p_M_parent + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)v10);
  if ( *(_DWORD *)(p_M_parent + 48) )
  {
    PlayerReputationComp::findCityReputationPtr(v10, (__int64)this, *(_DWORD *)(p_M_parent + 48));
    v8 = std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)v10);
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)v10);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v10[0]._M_weak_this._M_refcount,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/player_reputation_comp.cpp",
        "checkAddExpItem",
        242);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             (common::milog::MiLogStream *const)&v10[0]._M_weak_this._M_refcount,
             (const char (*)[38])"findCityReputationPtr fails, city_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        (const unsigned int *)(p_M_parent + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v10[0]._M_weak_this._M_refcount);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v10[0]._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/player_reputation_comp.cpp",
      "checkAddExpItem",
      237);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)&v10[0]._M_weak_this._M_refcount,
           (const char (*)[40])"findCityIdByVirtualItem fails, item_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(p_M_parent + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v10[0]._M_weak_this._M_refcount);
    result = 0xFFFFFFFFLL;
  }
  if ( &v10[0].city_reputation_map_._M_t._M_impl._M_header._M_parent == (std::_Rb_tree_node_base::_Base_ptr *)p_M_parent )
  {
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_parent >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_parent = 1172321806LL;
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_parent >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 249: range 0000000016CE628C-0000000016CE65A2
void __fastcall PlayerReputationComp::addExpItem(
        PlayerReputationComp *const this,
        uint32_t item_id,
        uint32_t item_count,
        uint32_t reason_type)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  CityReputation *v10; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 11 city_id:254 48 4 11 item_id:248 64 16 18 reputation_ptr:260";
  *(_QWORD *)(v4 + 16) = PlayerReputationComp::addExpItem;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = item_id;
  if ( item_count )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 64));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    *(_DWORD *)(v4 + 32) = ReputationExcelConfigMgr::findCityIdByVirtualItem(
                             &v7->design_config.txt_config_mgr.reputation_config_mgr,
                             *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
    if ( *(_DWORD *)(v4 + 32) )
    {
      PlayerReputationComp::findCityReputationPtr(
        (PlayerReputationComp *const)(v4 + 64),
        (__int64)this,
        *(_DWORD *)(v4 + 32));
      if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reputation/player_reputation_comp.cpp",
          "addExpItem",
          263);
        v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               &v13,
               (const char (*)[38])"findCityReputationPtr fails, city_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v13);
      }
      else
      {
        v10 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        CityReputation::addExp(v10, item_count, reason_type);
      }
      std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v4 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reputation/player_reputation_comp.cpp",
        "addExpItem",
        257);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v13,
             (const char (*)[40])"findCityIdByVirtualItem fails, item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  if ( v14 == (char *)v4 )
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

// Line 270: range 0000000016CE65A4-0000000016CE68AB
__int64 __fastcall PlayerReputationComp::clearCityReputationByGm(PlayerReputationComp *const this, uint32_t city_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::shared_ptr<CityReputation> *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  std::shared_ptr<CityReputation> __r; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 city_id:269 64 8 8 iter:271";
  *(_QWORD *)(v2 + 16) = PlayerReputationComp::clearCityReputationByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = city_id;
  *(std::map<unsigned int,std::shared_ptr<CityReputation>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<CityReputation>>::find(
                                                                                     &this->city_reputation_map_,
                                                                                     (const std::map<unsigned int,std::shared_ptr<CityReputation>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<CityReputation>>::end(&this->city_reputation_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<CityReputation> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reputation/player_reputation_comp.cpp",
      "clearCityReputationByGm",
      274);
    v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v11, (const char (*)[19])off_25F32C20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    common::tools::perf::make_shared<CityReputation,Player &,unsigned int &>(
      (Player *)&__r,
      (unsigned int *)this->player_,
      (Player *)(v2 + 48),
      (unsigned int *)this->player_);
    v7 = std::map<unsigned int,std::shared_ptr<CityReputation>>::operator[](
           &this->city_reputation_map_,
           (const std::map<unsigned int,std::shared_ptr<CityReputation>>::key_type *)(v2 + 48));
    std::shared_ptr<CityReputation>::operator=(v7, &__r);
    std::shared_ptr<CityReputation>::~shared_ptr(&__r);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/reputation/player_reputation_comp.cpp",
      "clearCityReputationByGm",
      279);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v11,
           (const char (*)[29])"clear city reputation ByGm: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0LL;
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
  return result;
};

// Line 285: range 0000000016CE68AC-0000000016CE6B54
__int64 __fastcall PlayerReputationComp::addCityReputationExpByGm(
        PlayerReputationComp *const this,
        uint32_t city_id,
        uint32_t exp)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  CityReputation *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 11 city_id:284 48 4 7 exp:284 64 16 23 city_reputation_ptr:286";
  *(_QWORD *)(v3 + 16) = PlayerReputationComp::addCityReputationExpByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = city_id;
  *(_DWORD *)(v3 + 48) = exp;
  PlayerReputationComp::findCityReputationPtr(
    (PlayerReputationComp *const)(v3 + 64),
    (__int64)this,
    *(_DWORD *)(v3 + 32));
  if ( std::operator==<CityReputation>(0LL, (const std::shared_ptr<CityReputation> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reputation/player_reputation_comp.cpp",
      "addCityReputationExpByGm",
      289);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v14,
           (const char (*)[30])"findCityReputationPtr fails, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    CityReputation::addExp(v8, *(_DWORD *)(v3 + 48), 0x26u);
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/reputation/player_reputation_comp.cpp",
      "addCityReputationExpByGm",
      293);
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v14,
           (const char (*)[26])"addCityReputationExpByGm ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = 0;
  }
  std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 64));
  result = v7;
  if ( v15 == (char *)v3 )
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
