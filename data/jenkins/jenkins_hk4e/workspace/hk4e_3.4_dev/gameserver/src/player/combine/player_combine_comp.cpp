// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/combine/player_combine_comp.cpp

// Line 42: range 00000000175D2B04-00000000175D2B7E
int32_t __cdecl PlayerCombineComp::fromBin(PlayerCombineComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  int v2; // eax
  std::unordered_set<unsigned int>::value_type __x; // [rsp+10h] [rbp-20h] BYREF
  int32_t idx; // [rsp+14h] [rbp-1Ch]
  const proto::PlayerCombineCompBin *proto_comp; // [rsp+18h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::combine_bin(player_data_bin);
  for ( idx = 0; ; ++idx )
  {
    v2 = proto::PlayerCombineCompBin::unlock_combine_id_list_size(proto_comp);
    if ( idx >= v2 )
      break;
    __x = proto::PlayerCombineCompBin::unlock_combine_id_list(proto_comp, idx);
    std::unordered_set<unsigned int>::insert(&this->unlock_combine_id_set_, &__x);
  }
  return 0;
};

// Line 52: range 00000000175D2B80-00000000175D2C56
int32_t __cdecl PlayerCombineComp::toBin(PlayerCombineComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  proto::PlayerCombineCompBin *proto_comp; // [rsp+30h] [rbp-10h]
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_combine_bin(player_data_bin);
  __for_range = &this->unlock_combine_id_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlock_combine_id_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlock_combine_id_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::PlayerCombineCompBin::add_unlock_combine_id_list(proto_comp, *v3);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 63: range 00000000175D2C58-00000000175D2C76
int32_t __cdecl PlayerCombineComp::init(PlayerCombineComp *const this)
{
  PlayerCombineComp::initEventObservers(this);
  return 0;
};

// Line 71: range 00000000175D2C78-00000000175D2F4D
int32_t __cdecl PlayerCombineComp::notifyAllData(PlayerCombineComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::CombineDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  Player *player; // r14
  int32_t result; // eax
  std::unordered_map<unsigned int,data::CombineExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::unordered_map<unsigned int,data::CombineExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  const std::unordered_map<unsigned int,data::CombineExcelConfig> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<unsigned int const,data::CombineExcelConfig> *v10; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,data::CombineExcelConfig> >::type *combine_id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CombineExcelConfig> >::type *combine_config; // [rsp+38h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 combine_notify_ptr:72";
  *(_QWORD *)(v1 + 16) = PlayerCombineComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::CombineDataNotify>();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.combine_config_mgr.combine_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v13);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::CombineExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::CombineExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CombineExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator*(&__for_begin);
    combine_id = std::get<0ul,unsigned int const,data::CombineExcelConfig>(v10);
    combine_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CombineExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CombineExcelConfig>(v10);
    if ( PlayerCombineComp::isUnlocked(this, combine_config) )
    {
      v4 = std::__shared_ptr_access<proto::CombineDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CombineDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)combine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(combine_id);
      }
      proto::CombineDataNotify::add_combine_id_list(v4, *combine_id);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CombineExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::CombineDataNotify>((const std::shared_ptr<proto::CombineDataNotify> *)&v13);
  Player::sendMessage(player, &v13, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v13);
  std::shared_ptr<proto::CombineDataNotify>::~shared_ptr((std::shared_ptr<proto::CombineDataNotify> *const)(v1 + 32));
  result = 0;
  if ( v14 == (char *)v1 )
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

// Line 86: range 00000000175D2F4E-00000000175D30BF
bool __cdecl PlayerCombineComp::isUnlocked(
        PlayerCombineComp *const this,
        const data::CombineExcelConfig *combine_config)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 combine_id:87";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::isUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&combine_config->combine_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&combine_config->combine_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&combine_config->combine_id);
  }
  *(_DWORD *)(v2 + 32) = combine_config->combine_id;
  if ( *(char *)(((unsigned __int64)&combine_config->is_default_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&combine_config->is_default_show);
  result = combine_config->is_default_show
        || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->unlock_combine_id_set_,
             (const unsigned int *)(v2 + 32))
        || PlayerCombineComp::isUnlockByMethod(this, *(_DWORD *)(v2 + 32));
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

// Line 95: range 00000000175D30C0-00000000175D392F
void __cdecl PlayerCombineComp::initEventObservers(PlayerCombineComp *const this)
{
  unsigned __int64 p_M_next_resize; // r13
  __int64 v2; // rax
  _DWORD *v3; // r14
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+A4h] [rbp-14Ch] BYREF
  PlayerEventComp *event_comp; // [rsp+A8h] [rbp-148h]
  PlayerEventComp v7; // [rsp+B0h] [rbp-140h] BYREF

  p_M_next_resize = (unsigned __int64)&v7.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_next_resize = v2;
  }
  *(_QWORD *)p_M_next_resize = 1102416563LL;
  *(_QWORD *)(p_M_next_resize + 8) = "2 32 16 11 this_ptr:98 64 16 12 this_wtr:104";
  *(_QWORD *)(p_M_next_resize + 16) = PlayerCombineComp::initEventObservers;
  v3 = (_DWORD *)(p_M_next_resize >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/combine/player_combine_comp.cpp",
    "initEventObservers",
    96);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
  toThisPtr<PlayerCombineComp>((PlayerCombineComp *)(p_M_next_resize + 32));
  if ( std::operator==<PlayerCombineComp>(0LL, (const std::shared_ptr<PlayerCombineComp> *)(p_M_next_resize + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/combine/player_combine_comp.cpp",
      "initEventObservers",
      101);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count,
      (const char (*)[49])"dynamic_pointer_cast to PlayerCombineComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.observer_list_map_._M_h._M_bucket_count);
  }
  else
  {
    std::weak_ptr<PlayerCombineComp>::weak_ptr<PlayerCombineComp,void>(
      (std::weak_ptr<PlayerCombineComp> *const)(p_M_next_resize + 64),
      (const std::shared_ptr<PlayerCombineComp> *)(p_M_next_resize + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,StartQuestEvent>(
      &v7,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const StartQuestEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,FinishQuestEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const FinishQuestEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,PlayerLevelupEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const PlayerLevelupEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,FinishParentQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const FinishParentQuestEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,FailParentQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const FailParentQuestEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,CancelParentQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const CancelParentQuestEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,ActivityCondMeetEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const ActivityCondMeetEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,ObtainItemEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const ObtainItemEvent *))&v7.event_center_.context_.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::weak_ptr(
      (std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const std::weak_ptr<PlayerCombineComp> *)(p_M_next_resize + 64));
    PlayerEventComp::registerObserver<PlayerCombineComp,ActivityCondExpireEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.event_center_,
      (std::weak_ptr<PlayerCombineComp> *)event_comp,
      (void (*)(PlayerCombineComp *, const ActivityCondExpireEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.event_center_);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
    std::weak_ptr<PlayerCombineComp>::~weak_ptr((std::weak_ptr<PlayerCombineComp> *const)(p_M_next_resize + 64));
  }
  std::shared_ptr<PlayerCombineComp>::~shared_ptr((std::shared_ptr<PlayerCombineComp> *const)(p_M_next_resize + 32));
  if ( &v7.event_center_.observer_list_map_._M_h._M_rehash_policy._M_next_resize == (std::size_t *)p_M_next_resize )
  {
    *(_QWORD *)((p_M_next_resize >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_next_resize >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_next_resize = 1172321806LL;
    *(_QWORD *)((p_M_next_resize >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_next_resize >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 120: range 00000000175D550A-00000000175D8CA3
int32_t __cdecl PlayerCombineComp::onCombineReq(
        PlayerCombineComp *const this,
        const proto::CombineReq *req,
        proto::CombineRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isCombineSystemClosed; // r14
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  PlayerBasicComp *v15; // rax
  google::protobuf::uint64 v16; // rdx
  PlayerAvatarComp *AvatarComp; // r14
  __int64 v18; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  PlayerBasicComp *v20; // rax
  uint32_t Level; // ecx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  uint32_t *p_count; // rax
  unsigned int count; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v29; // rax
  unsigned int *v30; // rdx
  SelectType v31; // r14d
  uint32_t *p_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v33; // rax
  SelectType *v34; // rdx
  char v35; // cl
  unsigned int v36; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v37; // rax
  unsigned int *v38; // rdx
  SelectType v39; // r14d
  uint32_t *v40; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v41; // rax
  SelectType *v42; // rdx
  char v43; // cl
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v46; // rax
  _DWORD *v47; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false,false>::pointer v48; // rax
  double *v49; // rax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v51; // rax
  unsigned int *v52; // rdx
  SelectType v53; // r14d
  uint32_t *p_item_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v55; // rax
  SelectType *v56; // rdx
  char v57; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v58; // rax
  std::pair<unsigned int const,unsigned int> *v59; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v60; // rax
  unsigned int v61; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v62; // rax
  uint32_t *v63; // rdx
  unsigned int v64; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v65; // rax
  std::pair<unsigned int const,unsigned int> *v66; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v67; // rax
  unsigned int v68; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v69; // rax
  unsigned int *v70; // rdx
  SelectType v71; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v72; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v73; // rax
  SelectType *v74; // rdx
  char v75; // cl
  std::map<unsigned int,unsigned int>::mapped_type *v76; // rax
  unsigned int *v77; // rdx
  SelectType v78; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v79; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v80; // rax
  SelectType *v81; // rdx
  char v82; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v83; // rax
  std::pair<unsigned int const,unsigned int> *v84; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v85; // rax
  unsigned int v86; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v87; // rax
  unsigned int *v88; // rdx
  SelectType v89; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v90; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v91; // rax
  SelectType *v92; // rdx
  char v93; // cl
  unsigned int v94; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v95; // rax
  unsigned int *v96; // rdx
  SelectType v97; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v98; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v99; // rax
  SelectType *v100; // rdx
  char v101; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v102; // rax
  std::pair<unsigned int const,unsigned int> *v103; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v104; // rax
  unsigned int v105; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v106; // rax
  unsigned int *v107; // rdx
  SelectType v108; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v109; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v110; // rax
  SelectType *v111; // rdx
  char v112; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v113; // rax
  std::pair<unsigned int const,unsigned int> *v114; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v115; // rax
  unsigned int v116; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v117; // rax
  unsigned int *v118; // rdx
  SelectType v119; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v120; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v121; // rax
  SelectType *v122; // rdx
  char v123; // cl
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rcx
  PlayerItemComp *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  PlayerItemComp *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  PlayerItemComp *v148; // r14
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  common::milog::MiLogStream *v154; // rax
  PlayerItemComp *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v163; // r8
  const unsigned int *v164; // r9
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v165; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v166; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v167; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v168; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v169; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v170; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v171; // rax
  uint32_t AvatarId; // eax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v173; // rax
  uint32_t *v174; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v175; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v176; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v177; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v178; // rcx
  const ItemParam *v179; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v180; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v181; // rax
  std::pair<unsigned int const,unsigned int> *v182; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v183; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v184; // rax
  unsigned int v185; // ecx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v186; // rax
  std::pair<unsigned int const,unsigned int> *v187; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v188; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v189; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v190; // rax
  std::pair<unsigned int const,unsigned int> *v191; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v192; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v193; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v194; // rax
  Player *player; // r14
  std::string v197; // [rsp+0h] [rbp-760h]
  proto::CombineRsp *rsp_0a; // [rsp+8h] [rbp-758h]
  const proto::CombineReq *reqa; // [rsp+10h] [rbp-750h]
  PlayerCombineComp *thisa; // [rsp+18h] [rbp-748h]
  uint32_t total_scoin_cost; // [rsp+28h] [rbp-738h]
  uint32_t total_count_1; // [rsp+2Ch] [rbp-734h]
  uint32_t proud_skill_id; // [rsp+30h] [rbp-730h]
  unsigned int total_count_0; // [rsp+34h] [rbp-72Ch]
  uint32_t total_count; // [rsp+38h] [rbp-728h]
  uint32_t return_count; // [rsp+3Ch] [rbp-724h]
  unsigned int rand_count; // [rsp+40h] [rbp-720h]
  unsigned int item_count; // [rsp+44h] [rbp-71Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-718h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+50h] [rbp-710h] BYREF
  const data::CombineExcelConfig *combine_config_ptr; // [rsp+58h] [rbp-708h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+60h] [rbp-700h]
  const data::IdCountConfig *id_count_config_0; // [rsp+68h] [rbp-6F8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>> *proud_combine_config_map; // [rsp+70h] [rbp-6F0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-6E8h]
  const std::vector<data::RandomItemConfig> *__for_range_1; // [rsp+80h] [rbp-6E0h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+88h] [rbp-6D8h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+90h] [rbp-6D0h]
  std::map<unsigned int,unsigned int> *__for_range_4; // [rsp+98h] [rbp-6C8h]
  std::map<unsigned int,unsigned int> *__for_range_5; // [rsp+A0h] [rbp-6C0h]
  std::map<unsigned int,unsigned int> *__for_range_6; // [rsp+A8h] [rbp-6B8h]
  std::vector<unsigned int> *__for_range_7; // [rsp+B0h] [rbp-6B0h]
  std::vector<ItemParam> *__for_range_8; // [rsp+B8h] [rbp-6A8h]
  std::map<unsigned int,unsigned int> *__for_range_9; // [rsp+C0h] [rbp-6A0h]
  std::map<unsigned int,unsigned int> *__for_range_10; // [rsp+C8h] [rbp-698h]
  std::map<unsigned int,unsigned int> *__for_range_11; // [rsp+D0h] [rbp-690h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_6; // [rsp+D8h] [rbp-688h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_7; // [rsp+E0h] [rbp-680h]
  proto_log::ComposeExtraItemLog *item_log_2; // [rsp+E8h] [rbp-678h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_5; // [rsp+F0h] [rbp-670h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_6; // [rsp+F8h] [rbp-668h]
  proto_log::ComposeExtraItemLog *item_log_1; // [rsp+100h] [rbp-660h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_4; // [rsp+108h] [rbp-658h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_5; // [rsp+110h] [rbp-650h]
  proto_log::ItemLog *item_log_0; // [rsp+118h] [rbp-648h]
  const ItemParam *item_param; // [rsp+120h] [rbp-640h]
  proto_log::ItemLog *item_log; // [rsp+128h] [rbp-638h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_3; // [rsp+130h] [rbp-630h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_4; // [rsp+138h] [rbp-628h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_2; // [rsp+140h] [rbp-620h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_3; // [rsp+148h] [rbp-618h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_1; // [rsp+150h] [rbp-610h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_2; // [rsp+158h] [rbp-608h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+160h] [rbp-600h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_1; // [rsp+168h] [rbp-5F8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+170h] [rbp-5F0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count_0; // [rsp+178h] [rbp-5E8h]
  const data::RandomItemConfig *rand_item_config; // [rsp+180h] [rbp-5E0h]
  double probability; // [rsp+188h] [rbp-5D8h]
  const data::IdCountConfig *id_count_config; // [rsp+190h] [rbp-5D0h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+198h] [rbp-5C8h] BYREF
  std::shared_ptr<PlayerCombineEvent> __r; // [rsp+1A0h] [rbp-5C0h] BYREF
  std::vector<ItemParam> __x; // [rsp+1B0h] [rbp-5B0h] BYREF
  std::vector<ItemParam> v254; // [rsp+1D0h] [rbp-590h] BYREF
  common::milog::MiLogStream v255; // [rsp+1F0h] [rbp-570h] BYREF
  char v256[1360]; // [rsp+210h] [rbp-550h] BYREF

  *(&v197._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v197._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v197._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v256;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1312LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 1 10 holder:139 48 4 7 ret:141 64 4 14 combine_id:142 80 4 17 combine_count:143 96 4 18 pr"
                        "oud_skill_id:318 112 8 8 iter:320 144 16 21 formal_avatar_ptr:155 176 16 19 combine_log_ptr:445 "
                        "208 16 14 item_param:352 240 24 22 proud_skill_id_vec:144 304 24 23 cost_item_param_vec:342 368 "
                        "24 25 result_item_param_vec:343 432 24 29 max_result_item_param_vec:344 496 24 17 action_reason:"
                        "397 560 48 22 total_add_item_map:363 640 48 26 max_total_add_item_map:364 720 144 16 distributio"
                        "n:335 928 320 11 visitor:300";
  *(_QWORD *)(v3 + 16) = PlayerCombineComp::onCombineReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862732] = -218959360;
  v5[536862733] = 62194;
  v5[536862734] = -218959360;
  v5[536862735] = 62194;
  v5[536862736] = -218959360;
  v5[536862737] = 62194;
  v5[536862739] = -218959118;
  v5[536862741] = -219021312;
  v5[536862742] = 62194;
  v5[536862747] = -218959118;
  v5[536862748] = -218959118;
  v5[536862759] = -202116109;
  v5[536862760] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x1Eu) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 208));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
    isCombineSystemClosed = FeatureSwitchMgr::isCombineSystemClosed(&v9->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
    if ( isCombineSystemClosed )
    {
      common::milog::MiLogStream::create(
        &v255,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/combine/player_combine_comp.cpp",
        "onCombineReq",
        130);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v255,
        (const char (*)[38])"[FEATURE_SWITCH] CombineSystem closed");
      common::milog::MiLogStream::~MiLogStream(&v255);
      v8 = 142;
      goto LABEL_243;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 208));
    p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208))->feature_switch_mgr;
    v12 = proto::CombineReq::combine_id(req);
    LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isCombineClosed(p_feature_switch_mgr, v12);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
    if ( (_BYTE)p_feature_switch_mgr )
    {
      common::milog::MiLogStream::create(
        &v255,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/combine/player_combine_comp.cpp",
        "onCombineReq",
        135);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v255,
              (const char (*)[44])"[FEATURE_SWITCH] CombineSystem combine_id: ");
      *(_DWORD *)(v3 + 96) = proto::CombineReq::combine_id(req);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" closed");
      common::milog::MiLogStream::~MiLogStream(&v255);
      v8 = 142;
      goto LABEL_243;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v15 = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v255, v15);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0x79Fu, v197);
    std::string::~string(&v255);
    *(_DWORD *)(v3 + 48) = 0;
    *(_DWORD *)(v3 + 64) = proto::CombineReq::combine_id(reqa);
    *(_DWORD *)(v3 + 80) = proto::CombineReq::combine_count(reqa);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
    proto::CombineRsp::set_combine_id(rsp_0a, *(_DWORD *)(v3 + 64));
    proto::CombineRsp::set_combine_count(rsp_0a, *(_DWORD *)(v3 + 80));
    v16 = proto::CombineReq::avatar_guid(reqa);
    proto::CombineRsp::set_avatar_guid(rsp_0a, v16);
    if ( !*(_DWORD *)(v3 + 80) )
    {
      v8 = -1;
LABEL_242:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 240));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
      goto LABEL_243;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    AvatarComp = Player::getAvatarComp(thisa->player_);
    v18 = proto::CombineReq::avatar_guid(reqa);
    PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 144), (uint64_t)AvatarComp, v18);
    if ( std::operator==<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v3 + 144), 0LL) )
    {
      v8 = 104;
LABEL_241:
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 144));
      goto LABEL_242;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 208));
    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
    combine_config_ptr = data::CombineExcelConfigMgrBase::findCombineExcelConfig(
                           &v19->design_config.txt_config_mgr.combine_config_mgr,
                           *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
    if ( !combine_config_ptr )
    {
      v8 = 5;
      goto LABEL_241;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    v20 = Player::getBasicComp(thisa->player_);
    Level = PlayerBasicComp::getLevel(v20);
    if ( *(_BYTE *)(((unsigned __int64)&combine_config_ptr->player_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)combine_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&combine_config_ptr->player_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&combine_config_ptr->player_level);
    }
    if ( Level < combine_config_ptr->player_level )
    {
      common::milog::MiLogStream::create(
        &v255,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/combine/player_combine_comp.cpp",
        "onCombineReq",
        169);
      v22 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v255,
              (const char (*)[34])"player level too low, combine_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 64));
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v23, (const char (*)[16])" combine_count:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      operator<<(v25, thisa->player_);
      common::milog::MiLogStream::~MiLogStream(&v255);
      v8 = 117;
      goto LABEL_241;
    }
    if ( !PlayerCombineComp::isUnlocked(thisa, combine_config_ptr) )
    {
      common::milog::MiLogStream::create(
        &v255,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/combine/player_combine_comp.cpp",
        "onCombineReq",
        176);
      v26 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v255,
              (const char (*)[32])"player don't unlock combine_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v255);
      v8 = 693;
      goto LABEL_241;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::ProudSkillCombineEffectVisitor(
      (PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const)(v3 + 928),
      thisa->player_,
      combine_config_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&combine_config_ptr->combine_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&combine_config_ptr->combine_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&combine_config_ptr->combine_type);
    }
    *(_DWORD *)(v3 + 944) = combine_config_ptr->combine_type;
    *(_DWORD *)(v3 + 948) = *(_DWORD *)(v3 + 80);
    __for_range = &combine_config_ptr->material_items;
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 112) = std::vector<data::IdCountConfig>::begin(&combine_config_ptr->material_items);
    __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<data::IdCountConfig>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 112),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)&__for_end) )
    {
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 112));
      p_count = &id_count_config->count;
      if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_count);
      }
      count = id_count_config->count;
      v29 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 952),
              &id_count_config->id);
      v30 = v29;
      if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v29);
      }
      v31 = SAFE_ADD<unsigned int,unsigned int>(*v30, count);
      p_id = &id_count_config->id;
      v33 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 952),
              &id_count_config->id);
      v34 = v33;
      v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
      if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
      {
        LOBYTE(p_id) = v35 != 0;
        __asan_report_store4(v33, p_id, v33);
      }
      *v34 = v31;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 112));
    }
    id_count_config_0 = &combine_config_ptr->result_item;
    if ( *(_BYTE *)(((unsigned __int64)&combine_config_ptr->result_item.count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)combine_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&combine_config_ptr->result_item.count >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&combine_config_ptr->result_item.count);
    }
    v36 = id_count_config_0->count;
    v37 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v3 + 1000),
            &id_count_config_0->id);
    v38 = v37;
    if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v37);
    }
    v39 = SAFE_ADD<unsigned int,unsigned int>(*v38, v36);
    v40 = &id_count_config_0->id;
    v41 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v3 + 1000),
            &id_count_config_0->id);
    v42 = v41;
    v43 = *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000);
    if ( v43 != 0 && (char)(((unsigned __int8)v41 & 7) + 3) >= v43 )
    {
      LOBYTE(v40) = v43 != 0;
      __asan_report_store4(v41, v40, v41);
    }
    *v42 = v39;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 208));
    proud_combine_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208))->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_combine_config_map;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
    v44 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    TalentComp = Avatar::getTalentComp(v44);
    TalentComp::getProudSkills((std::vector<unsigned int> *)(v3 + 496), TalentComp);
    __for_range_0 = (std::vector<unsigned int> *)(v3 + 496);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 496))._M_current;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 496))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0) )
    {
      v46 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v47 = v46;
      if ( *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v46 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v46);
      }
      *(_DWORD *)(v3 + 96) = *v47;
      *(std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::const_iterator *)(v3 + 112) = std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::find(proud_combine_config_map, (const std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::key_type *)(v3 + 96));
      __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>::end(proud_combine_config_map)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false> *)(v3 + 112),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false> *)&__for_end) )
      {
        v48 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectCombineReturnMaterial,LifeEffectCombineMultiplyOutput,LifeEffectCombineAddExtraProb,LifeEffectCombineReturnSpecialMaterial> >,false,false> *const)(v3 + 112));
        std::visit_PlayerCombineComp::onCombineReq_const_proto::CombineReq__proto::CombineRsp__::ProudSkillCombineEffectVisitor__const_std::variant_LifeEffectCombineReturnMaterial_LifeEffectCombineMultiplyOutput_LifeEffectCombineAddExtraProb_LifeEffectCombineReturnSpecialMaterial___(
          (PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *)(v3 + 928),
          &v48->second,
          &v48->second);
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 240),
          (const std::vector<unsigned int>::value_type *)(v3 + 96));
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 496));
    __for_range_1 = &combine_config_ptr->random_items;
    __for_begin._M_current = (unsigned int *)std::vector<data::RandomItemConfig>::begin(&combine_config_ptr->random_items)._M_current;
    __for_begin_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<data::RandomItemConfig>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *)&__for_begin_0) )
    {
      rand_item_config = __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&rand_item_config->weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rand_item_config->weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rand_item_config->weight);
      }
      probability = (double)(int)rand_item_config->weight / 10000.0;
      *(double *)&__for_end = *(float *)(v3 + 1192) + probability;
      *(_QWORD *)(v3 + 112) = 0x3FF0000000000000LL;
      v49 = (double *)std::min<double>((const double *)(v3 + 112), (const double *)&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v49);
      probability = *v49;
      std::binomial_distribution<unsigned int>::binomial_distribution(
        (std::binomial_distribution<unsigned int> *const)(v3 + 720),
        *(_DWORD *)(v3 + 80),
        probability);
      RandGenerator = common::tools::RandomUtils::getRandGenerator();
      rand_count = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                     (std::binomial_distribution<unsigned int> *const)(v3 + 720),
                     RandGenerator);
      if ( *(_BYTE *)(((unsigned __int64)&rand_item_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)rand_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rand_item_config->count >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&rand_item_config->count);
      }
      item_count = SAFE_MULTIPLY<unsigned int,unsigned int>(rand_item_config->count, rand_count);
      v51 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 1048),
              &rand_item_config->item_id);
      v52 = v51;
      if ( *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v51 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v51);
      }
      v53 = SAFE_ADD<unsigned int,unsigned int>(*v52, item_count);
      p_item_id = &rand_item_config->item_id;
      v55 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 1048),
              &rand_item_config->item_id);
      v56 = v55;
      v57 = *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000);
      if ( v57 != 0 && (char)(((unsigned __int8)v55 & 7) + 3) >= v57 )
      {
        LOBYTE(p_item_id) = v57 != 0;
        __asan_report_store4(v55, p_item_id, v55);
      }
      *v56 = v53;
      __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RandomItemConfig*,std::vector<data::RandomItemConfig> > *const)&__for_begin);
    }
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 304));
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 368));
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 432));
    __for_range_2 = (std::map<unsigned int,unsigned int> *)(v3 + 952);
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 952))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_2);
    while ( std::operator!=(
              &__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
    {
      v58 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v59 = v58;
      if ( ((unsigned __int8)v58 & 7) >= *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v58 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v58->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v58 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v58->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v58, 8LL);
      }
      __for_end = *v59;
      item_id = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      v60 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      item_count_0 = v60;
      v61 = *(_DWORD *)(v3 + 80);
      if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v60);
      }
      total_count = SAFE_MULTIPLY<unsigned int,unsigned int>(*item_count_0, v61);
      v62 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 1096),
              item_id);
      v63 = v62;
      if ( *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v62 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v62 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v62);
      }
      return_count = *v63;
      if ( total_count > *v63 )
      {
        *(_QWORD *)(v3 + 208) = 0LL;
        *(_QWORD *)(v3 + 216) = 0LL;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        *(_DWORD *)(v3 + 208) = *item_id;
        *(_DWORD *)(v3 + 212) = total_count - return_count;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v3 + 304),
          (const std::vector<ItemParam>::value_type *)(v3 + 208));
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    v64 = *(_DWORD *)(v3 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&combine_config_ptr->scoin_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)combine_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&combine_config_ptr->scoin_cost >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&combine_config_ptr->scoin_cost);
    }
    total_scoin_cost = SAFE_MULTIPLY<unsigned int,unsigned int>(combine_config_ptr->scoin_cost, v64);
    if ( total_scoin_cost )
    {
      *(_DWORD *)(v3 + 208) = 202;
      *(_DWORD *)(v3 + 212) = total_scoin_cost;
      *(_DWORD *)(v3 + 216) = 0;
      *(_DWORD *)(v3 + 220) = 0;
      std::vector<ItemParam>::push_back(
        (std::vector<ItemParam> *const)(v3 + 304),
        (std::vector<ItemParam>::value_type *)(v3 + 208));
    }
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 560));
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 640));
    __for_range_3 = (std::map<unsigned int,unsigned int> *)(v3 + 1000);
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 1000))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_3);
    while ( std::operator!=(
              &__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
    {
      v65 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v66 = v65;
      if ( ((unsigned __int8)v65 & 7) >= *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v65->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v65 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v65->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v65, 8LL);
      }
      __for_end = *v66;
      item_id_0 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      v67 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      item_count_1 = v67;
      v68 = *(_DWORD *)(v3 + 80);
      if ( *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v67 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v67 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v67);
      }
      total_count_0 = SAFE_MULTIPLY<unsigned int,unsigned int>(*item_count_1, v68);
      v69 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 560),
              item_id_0);
      v70 = v69;
      if ( *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v69 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v69 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v69);
      }
      v71 = SAFE_ADD<unsigned int,unsigned int>(*v70, total_count_0);
      v72 = item_id_0;
      v73 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 560),
              item_id_0);
      v74 = v73;
      v75 = *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000);
      if ( v75 != 0 && (char)(((unsigned __int8)v73 & 7) + 3) >= v75 )
      {
        LOBYTE(v72) = v75 != 0;
        __asan_report_store4(v73, v72, v73);
      }
      *v74 = v71;
      v76 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 640),
              item_id_0);
      v77 = v76;
      if ( *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v76 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v76 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v76);
      }
      v78 = SAFE_ADD<unsigned int,unsigned int>(*v77, total_count_0);
      v79 = item_id_0;
      v80 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 640),
              item_id_0);
      v81 = v80;
      v82 = *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000);
      if ( v82 != 0 && (char)(((unsigned __int8)v80 & 7) + 3) >= v82 )
      {
        LOBYTE(v79) = v82 != 0;
        __asan_report_store4(v80, v79, v80);
      }
      *v81 = v78;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    __for_range_4 = (std::map<unsigned int,unsigned int> *)(v3 + 1048);
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 1048))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_4);
    while ( std::operator!=(
              &__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
    {
      v83 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v84 = v83;
      if ( ((unsigned __int8)v83 & 7) >= *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v83->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v83 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v83->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v83, 8LL);
      }
      __for_end = *v84;
      item_id_1 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      v85 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      item_count_2 = v85;
      if ( *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v85 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v85 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v85);
      }
      v86 = *item_count_2;
      v87 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 560),
              item_id_1);
      v88 = v87;
      if ( *(_BYTE *)(((unsigned __int64)v87 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v87 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v87 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v87);
      }
      v89 = SAFE_ADD<unsigned int,unsigned int>(*v88, v86);
      v90 = item_id_1;
      v91 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 560),
              item_id_1);
      v92 = v91;
      v93 = *(_BYTE *)(((unsigned __int64)v91 >> 3) + 0x7FFF8000);
      if ( v93 != 0 && (char)(((unsigned __int8)v91 & 7) + 3) >= v93 )
      {
        LOBYTE(v90) = v93 != 0;
        __asan_report_store4(v91, v90, v91);
      }
      *v92 = v89;
      if ( *(_BYTE *)(((unsigned __int64)item_count_2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_count_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count_2 >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(item_count_2);
      }
      v94 = *item_count_2;
      v95 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 640),
              item_id_1);
      v96 = v95;
      if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v95 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v95);
      }
      v97 = SAFE_ADD<unsigned int,unsigned int>(*v96, v94);
      v98 = item_id_1;
      v99 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v3 + 640),
              item_id_1);
      v100 = v99;
      v101 = *(_BYTE *)(((unsigned __int64)v99 >> 3) + 0x7FFF8000);
      if ( v101 != 0 && (char)(((unsigned __int8)v99 & 7) + 3) >= v101 )
      {
        LOBYTE(v98) = v101 != 0;
        __asan_report_store4(v99, v98, v99);
      }
      *v100 = v97;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    __for_range_5 = (std::map<unsigned int,unsigned int> *)(v3 + 1144);
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 1144))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_5);
    while ( std::operator!=(
              &__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
    {
      v102 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v103 = v102;
      if ( ((unsigned __int8)v102 & 7) >= *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v102->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v102 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v102->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v102, 8LL);
      }
      __for_end = *v103;
      item_id_2 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      v104 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      item_count_3 = v104;
      if ( *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v104 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v104 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v104);
      }
      v105 = *item_count_3;
      v106 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v3 + 560),
               item_id_2);
      v107 = v106;
      if ( *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v106 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v106 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v106);
      }
      v108 = SAFE_ADD<unsigned int,unsigned int>(*v107, v105);
      v109 = item_id_2;
      v110 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v3 + 560),
               item_id_2);
      v111 = v110;
      v112 = *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000);
      if ( v112 != 0 && (char)(((unsigned __int8)v110 & 7) + 3) >= v112 )
      {
        LOBYTE(v109) = v112 != 0;
        __asan_report_store4(v110, v109, v110);
      }
      *v111 = v108;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    __for_range_6 = (std::map<unsigned int,unsigned int> *)(v3 + 1200);
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 1200))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_6);
    while ( std::operator!=(
              &__for_begin_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
    {
      v113 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v114 = v113;
      if ( ((unsigned __int8)v113 & 7) >= *(_BYTE *)(((unsigned __int64)v113 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v113 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v113->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v113 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v113->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v113, 8LL);
      }
      __for_end = *v114;
      item_id_3 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      v115 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      item_count_4 = v115;
      if ( *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v115 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v115 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v115);
      }
      v116 = *item_count_4;
      v117 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v3 + 640),
               item_id_3);
      v118 = v117;
      if ( *(_BYTE *)(((unsigned __int64)v117 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v117 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v117 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v117);
      }
      v119 = SAFE_ADD<unsigned int,unsigned int>(*v118, v116);
      v120 = item_id_3;
      v121 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v3 + 640),
               item_id_3);
      v122 = v121;
      v123 = *(_BYTE *)(((unsigned __int64)v121 >> 3) + 0x7FFF8000);
      if ( v123 != 0 && (char)(((unsigned __int8)v121 & 7) + 3) >= v123 )
      {
        LOBYTE(v120) = v123 != 0;
        __asan_report_store4(v121, v120, v121);
      }
      *v122 = v119;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    ItemParam::vecFromItemCountMap(&__x, (const std::map<unsigned int,unsigned int> *)(v3 + 560));
    std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v3 + 368), &__x);
    std::vector<ItemParam>::~vector(&__x);
    ItemParam::vecFromItemCountMap(&v254, (const std::map<unsigned int,unsigned int> *)(v3 + 640));
    std::vector<ItemParam>::operator=((std::vector<ItemParam> *const)(v3 + 432), &v254);
    std::vector<ItemParam>::~vector(&v254);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    ItemComp = Player::getItemComp(thisa->player_);
    *(_DWORD *)(v3 + 48) = PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v3 + 304));
    if ( *(_DWORD *)(v3 + 48) )
    {
      common::milog::MiLogStream::create(
        &v255,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/combine/player_combine_comp.cpp",
        "onCombineReq",
        391);
      v125 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v255,
               (const char (*)[29])"checkSubItemBatch fail, ret:");
      v126 = common::milog::MiLogStream::operator<<<int,(int *)0>(v125, (const int *)(v3 + 48));
      v127 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v126, (const char (*)[13])" combine_id:");
      v128 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v127,
               (const unsigned int *)(v3 + 64));
      v129 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v128,
               (const char (*)[16])" combine_count:");
      v130 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v129,
               (const unsigned int *)(v3 + 80));
      v131 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v130, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
    }
    else
    {
      ActionReason::ActionReason((ActionReason *const)(v3 + 496), ACTION_REASON_COMBINE, ITEM_LIMIT_UNLIMITED);
      if ( *(_BYTE *)(((unsigned __int64)&combine_config_ptr->recipe_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&combine_config_ptr->recipe_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&combine_config_ptr->recipe_type);
      }
      if ( combine_config_ptr->recipe_type == RECIPE_TYPE_CONVERT )
        *(_DWORD *)(v3 + 496) = 92;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&thisa->player_);
      v132 = Player::getItemComp(thisa->player_);
      *(_DWORD *)(v3 + 48) = PlayerItemComp::checkAddItemBatch(
                               v132,
                               (const std::vector<ItemParam> *)(v3 + 368),
                               (const ActionReason *)(v3 + 496));
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v255,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/combine/player_combine_comp.cpp",
          "onCombineReq",
          405);
        v133 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                 &v255,
                 (const char (*)[29])"checkAddItemBatch fail, ret:");
        v134 = common::milog::MiLogStream::operator<<<int,(int *)0>(v133, (const int *)(v3 + 48));
        v135 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v134, (const char (*)[13])" combine_id:");
        v136 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v135,
                 (const unsigned int *)(v3 + 64));
        v137 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v136,
                 (const char (*)[16])" combine_count:");
        v138 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v137,
                 (const unsigned int *)(v3 + 80));
        v131 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v138, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        v139 = Player::getItemComp(thisa->player_);
        *(_DWORD *)(v3 + 48) = PlayerItemComp::checkAddItemBatch(
                                 v139,
                                 (const std::vector<ItemParam> *)(v3 + 432),
                                 (const ActionReason *)(v3 + 496));
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v255,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/combine/player_combine_comp.cpp",
            "onCombineReq",
            412);
          v140 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                   &v255,
                   (const char (*)[59])"checkAddItemBatch for max_result_item_param_vec fail, ret:");
          v141 = common::milog::MiLogStream::operator<<<int,(int *)0>(v140, (const int *)(v3 + 48));
          v142 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v141,
                   (const char (*)[13])" combine_id:");
          v143 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v142,
                   (const unsigned int *)(v3 + 64));
          v144 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   v143,
                   (const char (*)[16])" combine_count:");
          v145 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v144,
                   (const unsigned int *)(v3 + 80));
          v146 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   v145,
                   (const char (*)[27])"max_result_item_param_vec:");
          v147 = common::milog::MiLogStream::operator<<<ItemParam>(v146, (const std::vector<ItemParam> *)(v3 + 432));
          v131 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v147, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          v148 = Player::getItemComp(thisa->player_);
          SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v3 + 496));
          *(_DWORD *)(v3 + 48) = PlayerItemComp::subItemBatch(
                                   v148,
                                   (const std::vector<ItemParam> *)(v3 + 304),
                                   (const SubItemReason *)&__for_end);
          if ( *(_DWORD *)(v3 + 48) )
          {
            common::milog::MiLogStream::create(
              &v255,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/combine/player_combine_comp.cpp",
              "onCombineReq",
              421);
            v149 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                     &v255,
                     (const char (*)[24])"subItemBatch fail, ret:");
            v150 = common::milog::MiLogStream::operator<<<int,(int *)0>(v149, (const int *)(v3 + 48));
            v151 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                     v150,
                     (const char (*)[13])" combine_id:");
            v152 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v151,
                     (const unsigned int *)(v3 + 64));
            v153 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     v152,
                     (const char (*)[16])" combine_count:");
            v154 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v153,
                     (const unsigned int *)(v3 + 80));
            v131 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v154, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
            v155 = Player::getItemComp(thisa->player_);
            *(_DWORD *)(v3 + 48) = PlayerItemComp::addItemBatch(
                                     v155,
                                     (const std::vector<ItemParam> *)(v3 + 368),
                                     (const ActionReason *)(v3 + 496),
                                     0LL);
            if ( !*(_DWORD *)(v3 + 48) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              EventComp = Player::getEventComp(thisa->player_);
              common::tools::perf::make_shared<PlayerCombineEvent,unsigned int &,unsigned int &,unsigned int const&>(
                (unsigned int *)&__r,
                (unsigned int *)(v3 + 64),
                (const unsigned int *)(v3 + 80),
                &combine_config_ptr->combine_type,
                v163,
                v164);
              std::shared_ptr<BaseEvent>::shared_ptr<PlayerCombineEvent,void>(
                (std::shared_ptr<BaseEvent> *const)(v3 + 208),
                &__r);
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 208));
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 208));
              std::shared_ptr<PlayerCombineEvent>::~shared_ptr(&__r);
              v165 = proto::CombineRsp::mutable_cost_item_list(rsp_0a);
              PlayerCombineComp::composeProtoItemParamList(
                (const std::map<unsigned int,unsigned int> *)(v3 + 952),
                v165);
              v166 = proto::CombineRsp::mutable_result_item_list(rsp_0a);
              PlayerCombineComp::composeProtoItemParamList(
                (const std::map<unsigned int,unsigned int> *)(v3 + 1000),
                v166);
              v167 = proto::CombineRsp::mutable_total_random_item_list(rsp_0a);
              PlayerCombineComp::composeProtoItemParamList(
                (const std::map<unsigned int,unsigned int> *)(v3 + 1048),
                v167);
              v168 = proto::CombineRsp::mutable_total_return_item_list(rsp_0a);
              PlayerCombineComp::composeProtoItemParamList(
                (const std::map<unsigned int,unsigned int> *)(v3 + 1096),
                v168);
              v169 = proto::CombineRsp::mutable_total_extra_item_list(rsp_0a);
              PlayerCombineComp::composeProtoItemParamList(
                (const std::map<unsigned int,unsigned int> *)(v3 + 1144),
                v169);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyComposeStart>();
              v170 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              v171 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
              AvatarId = Avatar::getAvatarId(v171);
              proto_log::PlayerLogBodyComposeStart::set_avatar_id(v170, AvatarId);
              __for_range_7 = (std::vector<unsigned int> *)(v3 + 240);
              *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 240));
              __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<unsigned int>::end(__for_range_7)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112),
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
              {
                v173 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
                v174 = v173;
                if ( *(_BYTE *)(((unsigned __int64)v173 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v173 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v173 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v173);
                }
                proud_skill_id = *v174;
                v175 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                proto_log::PlayerLogBodyComposeStart::add_proud_skill_id_list(v175, proud_skill_id);
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
              }
              v176 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyComposeStart::set_compo_id(v176, *(_DWORD *)(v3 + 64));
              v177 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyComposeStart::set_compo_preset_num(v177, *(_DWORD *)(v3 + 80));
              v178 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              if ( *(_BYTE *)(((unsigned __int64)&combine_config_ptr->combine_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&combine_config_ptr->combine_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&combine_config_ptr->combine_type);
              }
              proto_log::PlayerLogBodyComposeStart::set_target_item_type(v178, combine_config_ptr->combine_type);
              __for_range_8 = (std::vector<ItemParam> *)(v3 + 304);
              *(std::vector<ItemParam>::iterator *)(v3 + 112) = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 304));
              __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<ItemParam>::end(__for_range_8)._M_current;
              while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                        (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v3 + 112),
                        (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
              {
                v179 = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v3 + 112));
                item_param = v179;
                if ( *(_BYTE *)(((unsigned __int64)v179 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v179 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v179 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v179);
                }
                if ( item_param->item_id != 202 )
                {
                  v180 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                  item_log = proto_log::PlayerLogBodyComposeStart::add_input_item(v180);
                  if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                                 + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_param);
                  }
                  proto_log::ItemLog::set_item_id(item_log, item_param->item_id);
                  if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                             + 0x7FFF8000) )
                  {
                    __asan_report_load4(&item_param->count);
                  }
                  proto_log::ItemLog::set_count(item_log, item_param->count);
                }
                __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v3 + 112));
              }
              __for_range_9 = (std::map<unsigned int,unsigned int> *)(v3 + 1000);
              __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 1000))._M_node;
              *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_9);
              while ( std::operator!=(
                        &__for_begin_0,
                        (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
              {
                v181 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
                v182 = v181;
                if ( ((unsigned __int8)v181 & 7) >= *(_BYTE *)(((unsigned __int64)v181 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v181 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v181->second + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v181 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v181->second + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load_n(v181, 8LL);
                }
                __for_end = *v182;
                item_id_4 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
                v183 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
                item_count_5 = v183;
                if ( *(_BYTE *)(((unsigned __int64)v183 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v183 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v183 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v183);
                }
                if ( *item_count_5 )
                {
                  v184 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                  item_log_0 = proto_log::PlayerLogBodyComposeStart::add_main_output_item(v184);
                  v185 = *(_DWORD *)(v3 + 80);
                  if ( *(_BYTE *)(((unsigned __int64)item_count_5 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_count_5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count_5 >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_count_5);
                  }
                  total_count_1 = SAFE_MULTIPLY<unsigned int,unsigned int>(*item_count_5, v185);
                  if ( *(_BYTE *)(((unsigned __int64)item_id_4 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_id_4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_4 >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_id_4);
                  }
                  proto_log::ItemLog::set_item_id(item_log_0, *item_id_4);
                  proto_log::ItemLog::set_count(item_log_0, total_count_1);
                }
                std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
              }
              __for_range_10 = (std::map<unsigned int,unsigned int> *)(v3 + 1048);
              __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 1048))._M_node;
              *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_10);
              while ( std::operator!=(
                        &__for_begin_0,
                        (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
              {
                v186 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
                v187 = v186;
                if ( ((unsigned __int8)v186 & 7) >= *(_BYTE *)(((unsigned __int64)v186 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v186 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v186->second + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v186 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v186->second + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load_n(v186, 8LL);
                }
                __for_end = *v187;
                item_id_5 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
                v188 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
                item_count_6 = v188;
                if ( *(_BYTE *)(((unsigned __int64)v188 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v188 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v188 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v188);
                }
                if ( *item_count_6 )
                {
                  v189 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                  item_log_1 = proto_log::PlayerLogBodyComposeStart::add_sub_output_item(v189);
                  if ( *(_BYTE *)(((unsigned __int64)item_id_5 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_id_5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_5 >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_id_5);
                  }
                  proto_log::ComposeExtraItemLog::set_item_id(item_log_1, *item_id_5);
                  if ( *(_BYTE *)(((unsigned __int64)item_count_6 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_count_6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count_6 >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_count_6);
                  }
                  proto_log::ComposeExtraItemLog::set_count(item_log_1, *item_count_6);
                  proto_log::ComposeExtraItemLog::set_reason(item_log_1, 2u);
                }
                std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
              }
              __for_range_11 = (std::map<unsigned int,unsigned int> *)(v3 + 1144);
              __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 1144))._M_node;
              *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end(__for_range_11);
              while ( std::operator!=(
                        &__for_begin_0,
                        (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
              {
                v190 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
                v191 = v190;
                if ( ((unsigned __int8)v190 & 7) >= *(_BYTE *)(((unsigned __int64)v190 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v190 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v190->second + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v190 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v190->second + 3) >> 3)
                                                                   + 0x7FFF8000) )
                {
                  __asan_report_load_n(v190, 8LL);
                }
                __for_end = *v191;
                item_id_6 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
                v192 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&__for_end);
                item_count_7 = v192;
                if ( *(_BYTE *)(((unsigned __int64)v192 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v192 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v192 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v192);
                }
                if ( *item_count_7 )
                {
                  v193 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
                  item_log_2 = proto_log::PlayerLogBodyComposeStart::add_sub_output_item(v193);
                  if ( *(_BYTE *)(((unsigned __int64)item_id_6 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_id_6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_6 >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_id_6);
                  }
                  proto_log::ComposeExtraItemLog::set_item_id(item_log_2, *item_id_6);
                  if ( *(_BYTE *)(((unsigned __int64)item_count_7 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)item_count_7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count_7 >> 3)
                                                                                   + 0x7FFF8000) )
                  {
                    __asan_report_load4(item_count_7);
                  }
                  proto_log::ComposeExtraItemLog::set_count(item_log_2, *item_count_7);
                  proto_log::ComposeExtraItemLog::set_reason(item_log_2, 1u);
                }
                std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
              }
              v194 = std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyComposeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyComposeStart::set_currency_cost(v194, total_scoin_cost);
              if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&thisa->player_);
              player = thisa->player_;
              std::shared_ptr<google::protobuf::Message>::shared_ptr(
                (std::shared_ptr<google::protobuf::Message> *const)(v3 + 208),
                0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyComposeStart,void>(
                (std::shared_ptr<google::protobuf::Message> *const)&__r,
                (const std::shared_ptr<proto_log::PlayerLogBodyComposeStart> *)(v3 + 176));
              Player::printStatLog(player, (MessagePtr *)&__r, (MessagePtr *)(v3 + 208), 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 208));
              v8 = 0;
              std::shared_ptr<proto_log::PlayerLogBodyComposeStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyComposeStart> *const)(v3 + 176));
              goto LABEL_240;
            }
            common::milog::MiLogStream::create(
              &v255,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/combine/player_combine_comp.cpp",
              "onCombineReq",
              430);
            v156 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     &v255,
                     (const char (*)[29])"checkAddItemBatch fail, ret:");
            v157 = common::milog::MiLogStream::operator<<<int,(int *)0>(v156, (const int *)(v3 + 48));
            v158 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                     v157,
                     (const char (*)[13])" combine_id:");
            v159 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v158,
                     (const unsigned int *)(v3 + 64));
            v160 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     v159,
                     (const char (*)[16])" combine_count:");
            v161 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v160,
                     (const unsigned int *)(v3 + 80));
            v131 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v161, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&thisa->player_);
          }
        }
      }
    }
    operator<<(v131, thisa->player_);
    common::milog::MiLogStream::~MiLogStream(&v255);
    v8 = *(_DWORD *)(v3 + 48);
LABEL_240:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 640));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 560));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 432));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 368));
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 304));
    PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::~ProudSkillCombineEffectVisitor((PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const)(v3 + 928));
    goto LABEL_241;
  }
  common::milog::MiLogStream::create(
    &v255,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/combine/player_combine_comp.cpp",
    "onCombineReq",
    123);
  v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v255,
         (const char (*)[35])"OPEN_STATE_COMBINE is locked. uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 96));
  common::milog::MiLogStream::~MiLogStream(&v255);
  v8 = 141;
LABEL_243:
  if ( v256 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF809C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1312LL, v256);
  }
  return v8;
};

// Line 181: range 00000000175D4FDC-00000000175D5050
void __cdecl PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::~ProudSkillCombineEffectVisitor(
        PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const this)
{
  std::map<unsigned int,unsigned int>::~map(&this->max_total_extra_item_map);
  std::map<unsigned int,unsigned int>::~map(&this->total_extra_item_map);
  std::map<unsigned int,unsigned int>::~map(&this->total_return_item_map);
  std::map<unsigned int,unsigned int>::~map(&this->total_random_item_map);
  std::map<unsigned int,unsigned int>::~map(&this->result_item_map);
  std::map<unsigned int,unsigned int>::~map(&this->cost_item_map);
};

// Line 196: range 00000000175D3930-00000000175D3AD2
void __cdecl PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::ProudSkillCombineEffectVisitor(
        PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const this,
        Player *player,
        const data::CombineExcelConfig *combine_config)
{
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->player = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->combine_config, player);
  this->combine_config = combine_config;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->combine_type, player, &this->combine_type);
  }
  this->combine_type = 0;
  v3 = (((_BYTE)this + 20) & 7u) + 3;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->combine_count, v3, v4);
  this->combine_count = 0;
  std::map<unsigned int,unsigned int>::map(&this->cost_item_map);
  std::map<unsigned int,unsigned int>::map(&this->result_item_map);
  std::map<unsigned int,unsigned int>::map(&this->total_random_item_map);
  std::map<unsigned int,unsigned int>::map(&this->total_return_item_map);
  std::map<unsigned int,unsigned int>::map(&this->total_extra_item_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_add_extra_prob >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_add_extra_prob >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_add_extra_prob, v3, &this->max_add_extra_prob);
  }
  this->max_add_extra_prob = 0.0;
  std::map<unsigned int,unsigned int>::map(&this->max_total_extra_item_map);
};

// Line 200: range 00000000175D3AD4-00000000175D3F04
void __cdecl PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::operator()(
        PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const this,
        const LifeEffectCombineReturnMaterial *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t combine_count; // edx
  common::milog::MiLogStream *v6; // rax
  float return_ratio; // esi
  uint32_t v8; // edx
  const std::map<unsigned int,unsigned int> *p_cost_item_map; // rdi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int> v15; // [rsp+30h] [rbp-E0h] BYREF
  char v16[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 batch_count:202 64 24 19 return_item_vec:209";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combine_count);
  }
  combine_count = this->combine_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->combine_type);
  }
  *(_DWORD *)(v2 + 48) = PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineReturnMaterial>(
                           config,
                           this->combine_type,
                           combine_count);
  if ( *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/combine/player_combine_comp.cpp",
      "operator()",
      207);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v14,
           (const char (*)[45])"LifeEffectCombineReturnMaterial batch_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->return_ratio);
    }
    return_ratio = config->return_ratio;
    v8 = *(_DWORD *)(v2 + 48);
    p_cost_item_map = &this->cost_item_map;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    {
      p_cost_item_map = (const std::map<unsigned int,unsigned int> *)this;
      __asan_report_load8(this);
    }
    if ( DropUtils::randomExtraItemsForLifeEffectTalent(
           this->player,
           p_cost_item_map,
           v8,
           return_ratio,
           (std::vector<ItemParam> *)(v2 + 64),
           0) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/combine/player_combine_comp.cpp",
        "operator()",
        212);
      v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v14,
              (const char (*)[56])"randomExtraItemsForLifeEffectTalent fail, combine_type:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->combine_type);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      operator<<(v12, this->player);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      ItemParam::vecToItemCountMap(&v15, (const std::vector<ItemParam> *)(v2 + 64));
      std::map<unsigned int,unsigned int>::operator=(&this->total_return_item_map, &v15);
      std::map<unsigned int,unsigned int>::~map(&v15);
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 64));
  }
  if ( v16 == (char *)v2 )
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

// Line 219: range 00000000175D3F06-00000000175D450D
void __cdecl PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::operator()(
        PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const this,
        const LifeEffectCombineMultiplyOutput *config)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t combine_count; // edx
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v7; // rax
  std::pair<unsigned int const,unsigned int> *v8; // rdx
  float multiply_ratio; // xmm1_4
  float *v10; // rax
  float *v11; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  unsigned int *v13; // rdx
  SelectType v14; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v15; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rax
  SelectType *v17; // rdx
  char v18; // cl
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  unsigned int *v20; // rdx
  SelectType v21; // r14d
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v22; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  SelectType *v24; // rdx
  char v25; // cl
  float __a; // [rsp+14h] [rbp-CCh] BYREF
  float __b; // [rsp+18h] [rbp-C8h] BYREF
  uint32_t extra_add_count; // [rsp+1Ch] [rbp-C4h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+40h] [rbp-A0h]
  std::pair<unsigned int const,unsigned int> v35; // [rsp+48h] [rbp-98h] BYREF
  common::milog::MiLogStream v36; // [rsp+50h] [rbp-90h] BYREF
  char v37[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 rand_count:221";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combine_count);
  }
  combine_count = this->combine_count;
  if ( *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->combine_type);
  }
  *(_DWORD *)(v2 + 32) = PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineMultiplyOutput>(
                           config,
                           this->combine_type,
                           combine_count);
  if ( *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/combine/player_combine_comp.cpp",
      "operator()",
      227);
    v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v36,
           (const char (*)[44])"LifeEffectCombineMultiplyOutput rand_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v36);
    __for_range = &this->result_item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->result_item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->result_item_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v7, 8LL);
      }
      v35 = *v8;
      item_id = std::get<0ul,unsigned int const,unsigned int>(&v35);
      item_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v35);
      if ( *(_BYTE *)(((unsigned __int64)&config->multiply_ratio >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->multiply_ratio >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->multiply_ratio);
      }
      multiply_ratio = config->multiply_ratio;
      if ( *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_count);
      }
      __b = (float)(int)*item_count * multiply_ratio;
      __a = 1.0;
      v10 = (float *)std::max<float>(&__a, &__b);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      extra_add_count = (int)(float)((float)*(int *)(v2 + 32) * *v11);
      v12 = std::map<unsigned int,unsigned int>::operator[](&this->total_extra_item_map, item_id);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = SAFE_ADD<unsigned int,unsigned int>(*v13, extra_add_count);
      v15 = item_id;
      v16 = std::map<unsigned int,unsigned int>::operator[](&this->total_extra_item_map, item_id);
      v17 = v16;
      v18 = *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000);
      if ( v18 != 0 && (char)(((unsigned __int8)v16 & 7) + 3) >= v18 )
      {
        LOBYTE(v15) = v18 != 0;
        __asan_report_store4(v16, v15, v16);
      }
      *v17 = v14;
      v19 = std::map<unsigned int,unsigned int>::operator[](&this->max_total_extra_item_map, item_id);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v21 = SAFE_ADD<unsigned int,unsigned int>(*v20, extra_add_count);
      v22 = item_id;
      v23 = std::map<unsigned int,unsigned int>::operator[](&this->max_total_extra_item_map, item_id);
      v24 = v23;
      v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
      if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
      {
        LOBYTE(v22) = v25 != 0;
        __asan_report_store4(v23, v22, v23);
      }
      *v24 = v21;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 238: range 00000000175D450E-00000000175D4697
void __cdecl PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::operator()(
        PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const this,
        const LifeEffectCombineAddExtraProb *config)
{
  const unsigned int *M_current; // r12
  std::vector<unsigned int>::const_iterator v3; // rax
  float *v4; // rax
  float *v5; // rdx
  char v6; // cl
  float *p_add_prob; // rsi
  float v8; // xmm0_4
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+18h] [rbp-48h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+20h] [rbp-40h] BYREF
  const std::vector<unsigned int> *combine_type_vec; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  combine_type_vec = &config->combine_type_vec;
  __rhs._M_current = std::vector<unsigned int>::end(&config->combine_type_vec)._M_current;
  M_current = std::vector<unsigned int>::end(&config->combine_type_vec)._M_current;
  v3._M_current = std::vector<unsigned int>::begin(&config->combine_type_vec)._M_current;
  __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       v3,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       &this->combine_type)._M_current;
  if ( !__gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/combine/player_combine_comp.cpp",
      "operator()",
      246);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v13,
      (const char (*)[29])"LifeEffectCombineExtraOutput");
    common::milog::MiLogStream::~MiLogStream(&v13);
    p_add_prob = &config->add_prob;
    v4 = (float *)std::max<float>(&this->max_add_extra_prob, &config->add_prob);
    v5 = v4;
    v6 = *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000);
    LOBYTE(p_add_prob) = v6 != 0;
    if ( v6 != 0 && (char)(((unsigned __int8)v4 & 7) + 3) >= v6 )
      __asan_report_load4(v4);
    v8 = *v5;
    if ( *(_BYTE *)(((unsigned __int64)&this->max_add_extra_prob >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_add_extra_prob >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_add_extra_prob, p_add_prob, &this->max_add_extra_prob);
    }
    this->max_add_extra_prob = v8;
  }
};

// Line 251: range 00000000175D4698-00000000175D4FDB
void __cdecl PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::operator()(
        PlayerCombineComp::onCombineReq::ProudSkillCombineEffectVisitor *const this,
        const LifeEffectCombineReturnSpecialMaterial *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  unsigned int combine_count; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  SelectType v10; // r14d
  char *v11; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  SelectType *v13; // rdx
  char v14; // cl
  uint32_t v15; // edx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  int v21; // eax
  const std::map<unsigned int,unsigned int>::key_type *v22; // rax
  unsigned __int64 v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  uint32_t rand_count; // [rsp+10h] [rbp-130h]
  uint32_t idx; // [rsp+14h] [rbp-12Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v39; // [rsp+30h] [rbp-110h] BYREF
  char v40[240]; // [rsp+50h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 batch_count:271 48 24 18 extra_item_vec:293 112 48 12 item_map:283";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::onCombineReq(proto::CombineReq const&,proto::CombineRsp &)::ProudSkillCombineEffectVisitor::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( common::tools::MiscUtils::isContains<unsigned int>(&config->combine_type_vec, &this->combine_type) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->combine_config);
    if ( !std::vector<unsigned int>::empty(&this->combine_config->special_output_items) )
    {
      if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(config);
      }
      if ( config->probability )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->combine_config);
        __for_range = &this->combine_config->special_output_items;
        __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
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
          if ( *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->combine_count);
          }
          combine_count = this->combine_count;
          v8 = std::map<unsigned int,unsigned int>::operator[](
                 &this->max_total_extra_item_map,
                 (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
          v9 = v8;
          if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v8);
          }
          v10 = SAFE_ADD<unsigned int,unsigned int>(*v9, combine_count);
          v11 = (char *)(v2 + 32);
          v12 = std::map<unsigned int,unsigned int>::operator[](
                  &this->max_total_extra_item_map,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
          v13 = v12;
          v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
          if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
          {
            LOBYTE(v11) = v14 != 0;
            __asan_report_store4(v12, v11, v12);
          }
          *v13 = v10;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combine_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->combine_count);
      }
      v15 = this->combine_count;
      if ( *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->combine_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->combine_type);
      }
      *(_DWORD *)(v2 + 32) = PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineReturnSpecialMaterial>(
                               config,
                               this->combine_type,
                               v15);
      if ( *(_DWORD *)(v2 + 32) )
      {
        if ( *(_DWORD *)(v2 + 32) <= 0x2710u )
        {
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
          for ( rand_count = 0; rand_count < *(_DWORD *)(v2 + 32); ++rand_count )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->combine_config);
            v21 = std::vector<unsigned int>::size(&this->combine_config->special_output_items);
            idx = common::tools::RandomUtils::rand<unsigned int>(0, v21 - 1);
            if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->combine_config);
            if ( idx < std::vector<unsigned int>::size(&this->combine_config->special_output_items) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->combine_config);
              v22 = std::vector<unsigned int>::operator[](&this->combine_config->special_output_items, idx);
              v23 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                        (std::map<unsigned int,unsigned int> *const)(v2 + 112),
                                        v22);
              if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) != 0
                && (char)((v23 & 7) + 3) >= *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
              {
                v23 = __asan_report_load4(v23);
              }
              ++*(_DWORD *)v23;
            }
          }
          ItemParam::vecFromItemCountMap(
            (std::vector<ItemParam> *)(v2 + 48),
            (const std::map<unsigned int,unsigned int> *)(v2 + 112));
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/combine/player_combine_comp.cpp",
            "operator()",
            294);
          v24 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v39,
                  (const char (*)[52])"LifeEffectCombineReturnSpecialMaterial, combine_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->combine_config);
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  &this->combine_config->combine_id);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v25,
                  (const char (*)[16])" combine_count:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->combine_count);
          v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v27,
                  (const char (*)[14])" batch_count:");
          v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v2 + 32));
          v30 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v29,
                  (const char (*)[17])" extra_item_vec:");
          v31 = common::milog::MiLogStream::operator<<<ItemParam>(v30, (const std::vector<ItemParam> *)(v2 + 48));
          v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          operator<<(v32, this->player);
          common::milog::MiLogStream::~MiLogStream(&v39);
          ItemParam::addVecToItemCountMap((const std::vector<ItemParam> *)(v2 + 48), &this->total_extra_item_map);
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 48));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/combine/player_combine_comp.cpp",
            "operator()",
            279);
          v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v39,
                  (const char (*)[39])"batch_count is too large! batch_count:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v2 + 32));
          v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" combine_id:");
          if ( *(_BYTE *)(((unsigned __int64)&this->combine_config >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->combine_config);
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  &this->combine_config->combine_id);
          v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          operator<<(v20, this->player);
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
      }
    }
  }
  if ( v40 == (char *)v2 )
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

// Line 494: range 00000000176E0966-00000000176E0BC9
uint32_t __fastcall PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineMultiplyOutput>(
        unsigned __int64 config,
        uint32_t combine_type,
        uint32_t combine_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  uint32_t result; // eax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+10h] [rbp-150h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-148h] BYREF
  const std::vector<unsigned int> *combine_type_vec; // [rsp+20h] [rbp-140h]
  double probability; // [rsp+28h] [rbp-138h]
  char v15[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 12 combine_type 48 144 16 distribution:505";
  *(_QWORD *)(v3 + 16) = PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineMultiplyOutput>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862726] = -202116109;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = combine_type;
  combine_type_vec = (const std::vector<unsigned int> *)(config + 8);
  __rhs._M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(config + 8))._M_current;
  M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(config + 8))._M_current;
  v7._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(config + 8))._M_current;
  __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       v7,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       (const unsigned int *)(v3 + 32))._M_current;
  if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)((config >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((config >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(config);
    probability = (double)*(int *)config / 10000.0;
    std::binomial_distribution<unsigned int>::binomial_distribution(
      (std::binomial_distribution<unsigned int> *const)(v3 + 48),
      combine_count,
      probability);
    RandGenerator = common::tools::RandomUtils::getRandGenerator();
    result = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               (std::binomial_distribution<unsigned int> *const)(v3 + 48),
               RandGenerator);
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 494: range 00000000176E0702-00000000176E0965
uint32_t __fastcall PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineReturnMaterial>(
        unsigned __int64 config,
        uint32_t combine_type,
        uint32_t combine_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  uint32_t result; // eax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+10h] [rbp-150h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-148h] BYREF
  const std::vector<unsigned int> *combine_type_vec; // [rsp+20h] [rbp-140h]
  double probability; // [rsp+28h] [rbp-138h]
  char v15[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 12 combine_type 48 144 16 distribution:505";
  *(_QWORD *)(v3 + 16) = PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineReturnMaterial>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862726] = -202116109;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = combine_type;
  combine_type_vec = (const std::vector<unsigned int> *)(config + 8);
  __rhs._M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(config + 8))._M_current;
  M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(config + 8))._M_current;
  v7._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(config + 8))._M_current;
  __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       v7,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       (const unsigned int *)(v3 + 32))._M_current;
  if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)((config >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((config >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(config);
    probability = (double)*(int *)config / 10000.0;
    std::binomial_distribution<unsigned int>::binomial_distribution(
      (std::binomial_distribution<unsigned int> *const)(v3 + 48),
      combine_count,
      probability);
    RandGenerator = common::tools::RandomUtils::getRandGenerator();
    result = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               (std::binomial_distribution<unsigned int> *const)(v3 + 48),
               RandGenerator);
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 494: range 00000000176E0BCA-00000000176E0E2D
uint32_t __fastcall PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineReturnSpecialMaterial>(
        unsigned __int64 config,
        uint32_t combine_type,
        uint32_t combine_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  uint32_t result; // eax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+10h] [rbp-150h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-148h] BYREF
  const std::vector<unsigned int> *combine_type_vec; // [rsp+20h] [rbp-140h]
  double probability; // [rsp+28h] [rbp-138h]
  char v15[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 4 12 combine_type 48 144 16 distribution:505";
  *(_QWORD *)(v3 + 16) = PlayerCombineComp::checkCombineTypeAndRandCount<LifeEffectCombineReturnSpecialMaterial>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862726] = -202116109;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = combine_type;
  combine_type_vec = (const std::vector<unsigned int> *)(config + 8);
  __rhs._M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(config + 8))._M_current;
  M_current = std::vector<unsigned int>::end((const std::vector<unsigned int> *const)(config + 8))._M_current;
  v7._M_current = std::vector<unsigned int>::begin((const std::vector<unsigned int> *const)(config + 8))._M_current;
  __lhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       v7,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       (const unsigned int *)(v3 + 32))._M_current;
  if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)((config >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((config >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(config);
    probability = (double)*(int *)config / 10000.0;
    std::binomial_distribution<unsigned int>::binomial_distribution(
      (std::binomial_distribution<unsigned int> *const)(v3 + 48),
      combine_count,
      probability);
    RandGenerator = common::tools::RandomUtils::getRandGenerator();
    result = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
               (std::binomial_distribution<unsigned int> *const)(v3 + 48),
               RandGenerator);
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 510: range 00000000175D8CA4-00000000175D8E9C
void __cdecl PlayerCombineComp::composeProtoItemParamList(
        const std::map<unsigned int,unsigned int> *item_map,
        google::protobuf::RepeatedPtrField<proto::ItemParam> *proto_item_list)
{
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+38h] [rbp-18h]
  proto::ItemParam *item_param; // [rsp+40h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> v11; // [rsp+48h] [rbp-8h] BYREF

  __for_range = item_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(item_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    v11 = *v3;
    item_id = std::get<0ul,unsigned int const,unsigned int>(&v11);
    v4 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v11);
    count = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    if ( *count )
    {
      item_param = google::protobuf::RepeatedPtrField<proto::ItemParam>::Add(proto_item_list);
      if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id);
      }
      proto::ItemParam::set_item_id(item_param, *item_id);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(count);
      }
      proto::ItemParam::set_count(item_param, *count);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 524: range 00000000175D8E9E-00000000175D8F86
void __cdecl PlayerCombineComp::onQuestStart(PlayerCombineComp *const this, const StartQuestEvent *event)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  if ( PlayerCombineComp::unlockCombineByQuest(this, event->quest_id) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/combine/player_combine_comp.cpp",
      "onQuestStart",
      527);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v3,
           (const char (*)[38])"unlockCombineByQuest failed, quest_id");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &event->quest_id);
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
};

// Line 533: range 00000000175D8F88-00000000175D92E5
void __cdecl PlayerCombineComp::onQuestFinish(PlayerCombineComp *const this, const FinishQuestEvent *event)
{
  common::milog::MiLogStream *v2; // rax
  CombineExcelConfigMgr *p_combine_config_mgr; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v4; // rax
  _DWORD *v5; // rdx
  std::allocator<unsigned int> __a; // [rsp+17h] [rbp-99h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  const std::vector<unsigned int> *combine_vec_ptr; // [rsp+30h] [rbp-80h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-78h]
  std::shared_ptr<Config> v11; // [rsp+40h] [rbp-70h] BYREF
  std::vector<unsigned int> p_unlock_id_vec; // [rsp+50h] [rbp-60h] BYREF
  common::milog::MiLogStream v13; // [rsp+70h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  if ( PlayerCombineComp::lockCombineByQuest(this, event->quest_id) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/combine/player_combine_comp.cpp",
      "onQuestFinish",
      536);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v13,
           (const char (*)[36])"lockCombineByQuest failed, quest_id");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &event->quest_id);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_combine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.combine_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  combine_vec_ptr = CombineExcelConfigMgr::findPossibleCombineVecByFinishQuest(p_combine_config_mgr, event->quest_id);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( combine_vec_ptr )
  {
    __for_range = combine_vec_ptr;
    __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<unsigned int>::begin(combine_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(combine_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__l._M_len,
              &__for_end) )
    {
      v4 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
      v5 = v4;
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v4);
      }
      HIDWORD(__l._M_array) = *v5;
      if ( PlayerCombineComp::isUnlockByMethod(this, HIDWORD(__l._M_array)) )
      {
        PlayerCombineComp::notifyCombineFormulaData(this, HIDWORD(__l._M_array), 0);
        LODWORD(__l._M_array) = HIDWORD(__l._M_array);
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(
          &p_unlock_id_vec,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
          &__a);
        PlayerCombineComp::notifyMarkNewId(this, MARK_NEW_TYPE_COMBINE, &p_unlock_id_vec);
        std::vector<unsigned int>::~vector(&p_unlock_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
    }
  }
};

// Line 556: range 00000000175D92E6-00000000175D93AB
void __cdecl PlayerCombineComp::onPlayerLevelup(PlayerCombineComp *const this, const PlayerLevelupEvent *event)
{
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_unlock_combine_map; // rcx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_unlock_combine_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.combine_config_mgr.unlock_combine_map_;
  if ( *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->last_level);
  }
  PlayerCombineComp::notifyMarkNewId(this, event->last_level, MARK_NEW_TYPE_COMBINE, p_unlock_combine_map);
  std::shared_ptr<Config>::~shared_ptr(v3);
};

// Line 561: range 00000000175D93AC-00000000175D9406
void __cdecl PlayerCombineComp::onFinishParentQuestEvent(
        PlayerCombineComp *const this,
        const FinishParentQuestEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  PlayerCombineComp::lockCombineByParentQuest(this, event->parent_quest_id);
};

// Line 566: range 00000000175D9408-00000000175D9462
void __cdecl PlayerCombineComp::onFailParentQuestEvent(
        PlayerCombineComp *const this,
        const FailParentQuestEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  PlayerCombineComp::lockCombineByParentQuest(this, event->parent_quest_id);
};

// Line 571: range 00000000175D9464-00000000175D94BE
void __cdecl PlayerCombineComp::onCancelParentQuestEvent(
        PlayerCombineComp *const this,
        const CancelParentQuestEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  PlayerCombineComp::lockCombineByParentQuest(this, event->parent_quest_id);
};

// Line 576: range 00000000175D94C0-00000000175D98E9
void __cdecl PlayerCombineComp::onActivityCondMeetEvent(
        PlayerCombineComp *const this,
        const ActivityCondMeetEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  const CombineExcelConfigMgr *p_combine_config_mgr; // [rsp+8h] [rbp-108h]
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-E1h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+48h] [rbp-C8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-C0h]
  const std::vector<unsigned int> *combine_vec_ptr; // [rsp+58h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-B0h]
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+68h] [rbp-A8h] BYREF
  std::shared_ptr<Config> v19; // [rsp+70h] [rbp-A0h] BYREF
  std::vector<unsigned int> p_unlock_id_vec; // [rsp+80h] [rbp-90h] BYREF
  char v21[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 cond_id:577";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::onActivityCondMeetEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &event->cond_id_vec;
  __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<unsigned int>::begin(&event->cond_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&event->cond_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__l._M_len,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_combine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.combine_config_mgr;
    std::pair<unsigned int,unsigned int>::pair<unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)&__for_end_0,
      &event->activity_id,
      (unsigned int *)(v2 + 32));
    combine_vec_ptr = CombineExcelConfigMgr::findPossibleCombineVecByCondMeet(
                        p_combine_config_mgr,
                        (const std::pair<unsigned int,unsigned int> *)&__for_end_0);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( combine_vec_ptr && !std::vector<unsigned int>::empty(combine_vec_ptr) )
    {
      __for_range_0 = combine_vec_ptr;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(combine_vec_ptr)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        HIDWORD(__l._M_array) = *v9;
        if ( PlayerCombineComp::isUnlockByMethod(this, HIDWORD(__l._M_array)) )
        {
          PlayerCombineComp::notifyCombineFormulaData(this, HIDWORD(__l._M_array), 0);
          LODWORD(__l._M_array) = HIDWORD(__l._M_array);
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            &p_unlock_id_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
            &__a);
          PlayerCombineComp::notifyMarkNewId(this, MARK_NEW_TYPE_COMBINE, &p_unlock_id_vec);
          std::vector<unsigned int>::~vector(&p_unlock_id_vec);
          std::allocator<unsigned int>::~allocator(&__a);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__l._M_len);
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
};

// Line 596: range 00000000175D98EA-00000000175D9A30
void __cdecl PlayerCombineComp::onObtainItemEvent(PlayerCombineComp *const this, const ObtainItemEvent *event)
{
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rcx
  bool v3; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->reason_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->reason_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->reason_type);
  }
  if ( event->reason_type == ACTION_REASON_RELIQUARY_DECOMPOSE
    && std::set<unsigned long>::size(&this->temp_reliquary_guid_set_) <= 0x270F )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v4);
    p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.reliquary_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->item_id);
    }
    v3 = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(p_reliquary_config_mgr, event->item_id) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(v4);
    if ( !v3 )
      std::set<unsigned long>::insert(&this->temp_reliquary_guid_set_, &event->item_guid);
  }
};

// Line 613: range 00000000175D9A32-00000000175D9D7A
void __cdecl PlayerCombineComp::onActivityCondExpireEvent(
        PlayerCombineComp *const this,
        const ActivityCondExpireEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  CombineExcelConfigMgr *p_combine_config_mgr; // r14
  unsigned int *v9; // rax
  uint32_t *v10; // rdx
  uint32_t combine_id; // [rsp+14h] [rbp-BCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-A8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::vector<unsigned int> *combine_vec_ptr; // [rsp+38h] [rbp-98h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-90h]
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-88h] BYREF
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-80h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 cond_id:614";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::onActivityCondExpireEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &event->cond_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&event->cond_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&event->cond_id_vec)._M_current;
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
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_combine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.combine_config_mgr;
    std::pair<unsigned int,unsigned int>::pair<unsigned int &,true>(
      (std::pair<unsigned int,unsigned int> *const)&__for_end_0,
      &event->activity_id,
      (unsigned int *)(v2 + 32));
    combine_vec_ptr = CombineExcelConfigMgr::findPossibleCombineVecByCondMeet(
                        p_combine_config_mgr,
                        (const std::pair<unsigned int,unsigned int> *)&__for_end_0);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( combine_vec_ptr && !std::vector<unsigned int>::empty(combine_vec_ptr) )
    {
      __for_range_0 = combine_vec_ptr;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(combine_vec_ptr)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        combine_id = *v10;
        if ( !PlayerCombineComp::isUnlockByMethod(this, *v10) )
          PlayerCombineComp::notifyCombineFormulaData(this, combine_id, 1);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 633: range 00000000175D9D7C-00000000175DA41C
__int64 __fastcall PlayerCombineComp::unlockCombineByFormula(PlayerCombineComp *const this, uint32_t combine_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r12
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // [rsp+8h] [rbp-E8h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-CDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  const data::CombineExcelConfig *config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<unsigned int> p_unlock_id_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-90h] BYREF
  char v24[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 combine_id:632";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::unlockCombineByFormula;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = combine_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  config_ptr = data::CombineExcelConfigMgrBase::findCombineExcelConfig(
                 &v5->design_config.txt_config_mgr.combine_config_mgr,
                 *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/combine/player_combine_comp.cpp",
      "unlockCombineByFormula",
      637);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v23,
           (const char (*)[43])"findCombineExcelConfig failed, combine_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->unlock_config.unlock_method);
  }
  if ( config_ptr->unlock_config.unlock_method != COMBINE_UNLOCK_FORMULA )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/combine/player_combine_comp.cpp",
      "unlockCombineByFormula",
      642);
    v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v23,
            (const char (*)[52])"combine can not be unlocked by Formula, combine_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->unlock_combine_id_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/combine/player_combine_comp.cpp",
      "unlockCombineByFormula",
      647);
    v12 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v23,
            (const char (*)[54])"[COMBINE] combine_id is already unlocked, combine_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0LL;
  }
  else
  {
    std::unordered_set<unsigned int>::insert(
      &this->unlock_combine_id_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/combine/player_combine_comp.cpp",
      "unlockCombineByFormula",
      653);
    v15 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
            &v23,
            (const char (*)[57])"[COMBINE] combine_id is unlocked by formula, combine_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
    v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    PlayerCombineComp::notifyCombineFormulaData(this, *(_DWORD *)(v2 + 32), 0);
    val = *(_DWORD *)(v2 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(
      &p_unlock_id_vec,
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
      &__a);
    PlayerCombineComp::notifyMarkNewId(this, MARK_NEW_TYPE_COMBINE, &p_unlock_id_vec);
    std::vector<unsigned int>::~vector(&p_unlock_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
    result = 0LL;
  }
LABEL_21:
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

// Line 662: range 00000000175DA41E-00000000175DAA42
__int64 __fastcall PlayerCombineComp::unlockCombineByQuest(PlayerCombineComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  CombineExcelConfigMgr *p_combine_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  bool v14; // [rsp+8h] [rbp-108h]
  common::milog::MiLogStream *v15; // [rsp+8h] [rbp-108h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-EDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  const uint32_t *combine_id; // [rsp+40h] [rbp-D0h]
  const data::CombineExcelConfig *config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-C0h] BYREF
  std::vector<unsigned int> p_unlock_id_vec; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-90h] BYREF
  char v26[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:661";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::unlockCombineByQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
  v14 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>(
           &v5->design_config.txt_config_mgr.combine_config_mgr.quest_unlock_combine_map_,
           (const unsigned int *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( v14 )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
    __for_range = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                    &v7->design_config.txt_config_mgr.combine_config_mgr.quest_unlock_combine_map_,
                    (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v23);
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      combine_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      p_combine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.combine_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)combine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(combine_id);
      }
      config_ptr = data::CombineExcelConfigMgrBase::findCombineExcelConfig(p_combine_config_mgr, *combine_id);
      std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( config_ptr )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/combine/player_combine_comp.cpp",
          "unlockCombineByQuest",
          675);
        v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v25,
                (const char (*)[55])"[COMBINE] combine_id is unlocked by quest, combine_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, combine_id);
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])", quest_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v25);
        if ( *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)combine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(combine_id);
        }
        PlayerCombineComp::notifyCombineFormulaData(this, *combine_id, 0);
        if ( *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)combine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(combine_id);
        }
        val = *combine_id;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(
          &p_unlock_id_vec,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
          &__a);
        PlayerCombineComp::notifyMarkNewId(this, MARK_NEW_TYPE_COMBINE, &p_unlock_id_vec);
        std::vector<unsigned int>::~vector(&p_unlock_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/combine/player_combine_comp.cpp",
          "unlockCombineByQuest",
          672);
        v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v25,
               (const char (*)[41])"findCombineExcelConfig fail, combine_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, combine_id);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  if ( v26 == (char *)v2 )
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

// Line 685: range 00000000175DAA44-00000000175DAF57
__int64 __fastcall PlayerCombineComp::lockCombineByQuest(PlayerCombineComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  CombineExcelConfigMgr *p_combine_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  const uint32_t *combine_id; // [rsp+30h] [rbp-B0h]
  const data::CombineExcelConfig *config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v22; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-90h] BYREF
  char v24[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 quest_id:684";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::lockCombineByQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  v6 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>(
          &v5->design_config.txt_config_mgr.combine_config_mgr.quest_lock_combine_map_,
          (const unsigned int *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( v6 )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
    __for_range = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                    &v8->design_config.txt_config_mgr.combine_config_mgr.quest_lock_combine_map_,
                    (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v22);
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      combine_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v22);
      p_combine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.combine_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)combine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(combine_id);
      }
      config_ptr = data::CombineExcelConfigMgrBase::findCombineExcelConfig(p_combine_config_mgr, *combine_id);
      std::shared_ptr<Config>::~shared_ptr(&v22);
      if ( !config_ptr )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/combine/player_combine_comp.cpp",
          "lockCombineByQuest",
          695);
        v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v23,
                (const char (*)[41])"findCombineExcelConfig fail, combine_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, combine_id);
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = 0xFFFFFFFFLL;
        goto LABEL_18;
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/combine/player_combine_comp.cpp",
        "lockCombineByQuest",
        698);
      v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              &v23,
              (const char (*)[53])"[COMBINE] combine_id is locked by quest, combine_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, combine_id);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", quest_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      if ( *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)combine_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)combine_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(combine_id);
      }
      PlayerCombineComp::notifyCombineFormulaData(this, *combine_id, 1);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
LABEL_18:
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

// Line 706: range 00000000175DAF58-00000000175DB24B
__int64 __fastcall PlayerCombineComp::lockCombineByParentQuest(PlayerCombineComp *const this, uint32_t parent_quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  __int64 result; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rdx
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  unsigned int quest_id; // [rsp+1Ch] [rbp-A4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const data::MainQuestExcelConfig *parent_quest_config_ptr; // [rsp+30h] [rbp-90h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-80h] BYREF
  char v19[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 parent_quest_id:705";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::lockCombineByParentQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  QuestComp = Player::getQuestComp(this->player_);
  parent_quest_config_ptr = PlayerQuestComp::findPlayerParentQuestExcelConfig(QuestComp, *(_DWORD *)(v2 + 32));
  if ( parent_quest_config_ptr )
  {
    __for_range = &parent_quest_config_ptr->child_quest_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&parent_quest_config_ptr->child_quest_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&parent_quest_config_ptr->child_quest_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      quest_id = *v11;
      PlayerCombineComp::lockCombineByQuest(this, quest_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/combine/player_combine_comp.cpp",
      "lockCombineByParentQuest",
      710);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v18,
           (const char (*)[50])"parent_quest_config_ptr nullptr, parent_quest_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
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

// Line 721: range 00000000175DB24C-00000000175DBBD5
_BOOL8 __fastcall PlayerCombineComp::isUnlockByMethod(PlayerCombineComp *const this, uint32_t combine_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL4 isActivityCondMeet; // r13d
  int unlock_method; // eax
  PlayerQuestComp *v9; // rax
  _BOOL4 v10; // eax
  _BOOL4 v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerQuestComp *QuestComp; // rax
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const std::string *v24; // rax
  const std::string *v25; // rax
  PlayerActivityComp *ActivityComp; // rax
  _BOOL8 result; // rax
  const data::CombineExcelConfig *combine_config_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v29; // [rsp+20h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 activity_id:771 64 4 11 cond_id:777 80 4 14 combine_id:720 96 16 16 activity_ptr:783";
  *(_QWORD *)(v2 + 16) = PlayerCombineComp::isUnlockByMethod;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 80) = combine_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  combine_config_ptr = data::CombineExcelConfigMgrBase::findCombineExcelConfig(
                         &v5->design_config.txt_config_mgr.combine_config_mgr,
                         *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( !combine_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/combine/player_combine_comp.cpp",
      "isUnlockByMethod",
      725);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v29,
           (const char (*)[43])"findCombineExcelConfig failed, combine_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v29);
    isActivityCondMeet = 0;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(((unsigned __int64)&combine_config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&combine_config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&combine_config_ptr->unlock_config.unlock_method);
  }
  unlock_method = combine_config_ptr->unlock_config.unlock_method;
  if ( unlock_method == 4 )
  {
    if ( std::vector<std::string>::size(&combine_config_ptr->unlock_config.unlock_param) > 1 )
    {
      *(_DWORD *)(v2 + 48) = 0;
      v24 = std::vector<std::string>::operator[](&combine_config_ptr->unlock_config.unlock_param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v24, (unsigned int *)(v2 + 48), 1) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/combine/player_combine_comp.cpp",
          "isUnlockByMethod",
          774);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v29, (const char (*)[16])"strToNum failed");
        common::milog::MiLogStream::~MiLogStream(&v29);
        isActivityCondMeet = 0;
      }
      else
      {
        *(_DWORD *)(v2 + 64) = 0;
        v25 = std::vector<std::string>::operator[](&combine_config_ptr->unlock_config.unlock_param, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v25, (unsigned int *)(v2 + 64), 1) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/combine/player_combine_comp.cpp",
            "isUnlockByMethod",
            780);
          common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v29, (const char (*)[16])"strToNum failed");
          common::milog::MiLogStream::~MiLogStream(&v29);
          isActivityCondMeet = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::getActivityComp(this->player_);
          PlayerActivityComp::findOpenningActivity<SummerTimeActivity>((PlayerActivityComp *const)(v2 + 96));
          if ( std::operator==<SummerTimeActivity>(0LL, (const std::shared_ptr<SummerTimeActivity> *)(v2 + 96)) )
          {
            isActivityCondMeet = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ActivityComp = Player::getActivityComp(this->player_);
            isActivityCondMeet = PlayerActivityComp::isActivityCondMeet(
                                   ActivityComp,
                                   *(_DWORD *)(v2 + 48),
                                   *(_DWORD *)(v2 + 64));
          }
          std::shared_ptr<SummerTimeActivity>::~shared_ptr((std::shared_ptr<SummerTimeActivity> *const)(v2 + 96));
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/combine/player_combine_comp.cpp",
        "isUnlockByMethod",
        768);
      v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v29, (const char (*)[12])"combine_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" config error");
      common::milog::MiLogStream::~MiLogStream(&v29);
      isActivityCondMeet = 0;
    }
  }
  else
  {
    if ( unlock_method > 4 )
    {
LABEL_54:
      isActivityCondMeet = 0;
      goto LABEL_55;
    }
    switch ( unlock_method )
    {
      case 3:
        if ( std::vector<std::string>::empty(&combine_config_ptr->unlock_config.unlock_param) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/combine/player_combine_comp.cpp",
            "isUnlockByMethod",
            742);
          v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v29, (const char (*)[12])"combine_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" config error");
          common::milog::MiLogStream::~MiLogStream(&v29);
          isActivityCondMeet = 0;
        }
        else
        {
          *(_DWORD *)(v2 + 64) = 0;
          v14 = std::vector<std::string>::operator[](&combine_config_ptr->unlock_config.unlock_param, 0LL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v14, (unsigned int *)(v2 + 64), 1) )
          {
            common::milog::MiLogStream::create(
              &v29,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/combine/player_combine_comp.cpp",
              "isUnlockByMethod",
              748);
            v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v29,
                    (const char (*)[12])"combine_id:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v2 + 80));
            common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])" strToNum fails");
            common::milog::MiLogStream::~MiLogStream(&v29);
            isActivityCondMeet = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            Player::getActivityComp(this->player_);
            PlayerActivityComp::findOpenningActivity<SeaLampActivity>((PlayerActivityComp *const)(v2 + 96));
            if ( std::operator==<SeaLampActivity>(0LL, (const std::shared_ptr<SeaLampActivity> *)(v2 + 96)) )
            {
              isActivityCondMeet = 0;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              QuestComp = Player::getQuestComp(this->player_);
              if ( PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(v2 + 64)) == QUEST_STATE_FINISHED )
              {
                v18 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                if ( !BaseActivity::isOpening((const BaseActivity *const)v18, 0) )
                  goto LABEL_38;
                v19 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                if ( BaseActivity::isSettled((const BaseActivity *const)v19) )
                  goto LABEL_38;
                v20 = std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v20);
                v21 = (unsigned __int64)(v20->_vptr_DescribalBase + 17);
                if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v20->_vptr_DescribalBase + 17);
                if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<SeaLampActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v21)(v20) != 1 )
                  isActivityCondMeet = 1;
                else
LABEL_38:
                  isActivityCondMeet = 0;
              }
              else
              {
                isActivityCondMeet = 0;
              }
            }
            std::shared_ptr<SeaLampActivity>::~shared_ptr((std::shared_ptr<SeaLampActivity> *const)(v2 + 96));
          }
        }
        break;
      case 1:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v9 = Player::getQuestComp(this->player_);
        LOBYTE(v10) = PlayerQuestComp::isUnlockCombineByQuest(v9, *(_DWORD *)(v2 + 80));
        isActivityCondMeet = v10;
        break;
      case 2:
        LOBYTE(v11) = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                        &this->unlock_combine_id_set_,
                        (const unsigned int *)(v2 + 80));
        isActivityCondMeet = v11;
        break;
      default:
        goto LABEL_54;
    }
  }
LABEL_55:
  result = isActivityCondMeet;
  if ( v30 == (char *)v2 )
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

// Line 801: range 00000000175DBBD6-00000000175DBD90
int32_t __cdecl PlayerCombineComp::notifyCombineFormulaData(
        PlayerCombineComp *const this,
        uint32_t combine_id,
        bool is_locked)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto::CombineFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::CombineFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<proto::CombineFormulaDataNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 22 combine_notify_ptr:803";
  *(_QWORD *)(v3 + 16) = PlayerCombineComp::notifyCombineFormulaData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::CombineFormulaDataNotify>();
  v6 = std::__shared_ptr_access<proto::CombineFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CombineFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::CombineFormulaDataNotify::set_combine_id(v6, combine_id);
  v7 = std::__shared_ptr_access<proto::CombineFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::CombineFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::CombineFormulaDataNotify::set_is_locked(v7, is_locked);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::CombineFormulaDataNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::CombineFormulaDataNotify>::~shared_ptr((std::shared_ptr<proto::CombineFormulaDataNotify> *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
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

// Line 811: range 00000000175DBD92-00000000175DC152
void __cdecl PlayerCombineComp::notifyMarkNewId(
        PlayerCombineComp *const this,
        uint32_t old_level,
        proto::MarkNewType mark_new_type,
        const std::unordered_map<unsigned int,std::vector<unsigned int>> *unlock_id_map)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const unsigned int *v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v14; // rax
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  unsigned int __a; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t level_limit; // [rsp+24h] [rbp-CCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<const google::protobuf::Message> v22; // [rsp+30h] [rbp-C0h] BYREF
  char v23[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 9 level:815 64 8 8 iter:817 96 16 14 notify_ptr:813";
  *(_QWORD *)(v4 + 16) = PlayerCombineComp::notifyMarkNewId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  *(_DWORD *)(v4 + 48) = PlayerBasicComp::getLevel(BasicComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  __a = PlayerExcelConfigMgr::getPlayerMaxLevel(&v8->design_config.txt_config_mgr.player_config_mgr);
  v9 = std::min<unsigned int>(&__a, (const unsigned int *)(v4 + 48));
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  level_limit = *v10 + 1;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
  common::tools::perf::make_shared<proto::MarkNewNotify>();
  v11 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  proto::MarkNewNotify::set_mark_new_type(v11, mark_new_type);
  for ( *(_DWORD *)(v4 + 48) = old_level + 1; level_limit > *(_DWORD *)(v4 + 48); ++*(_DWORD *)(v4 + 48) )
  {
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                 unlock_id_map,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(unlock_id_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 64),
           &__y) )
    {
      v12 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v13 = proto::MarkNewNotify::mutable_id_list(v12);
      v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v4 + 64));
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v14->second, v13);
    }
  }
  v15 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  if ( proto::MarkNewNotify::id_list_size(v15) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::MarkNewNotify>((const std::shared_ptr<proto::MarkNewNotify> *)&v22);
    Player::sendMessage(player, &v22, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v22);
  }
  std::shared_ptr<proto::MarkNewNotify>::~shared_ptr((std::shared_ptr<proto::MarkNewNotify> *const)(v4 + 96));
  if ( v23 == (char *)v4 )
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
};

// Line 831: range 00000000175DC154-00000000175DC331
void __cdecl PlayerCombineComp::notifyMarkNewId(
        PlayerCombineComp *const this,
        proto::MarkNewType mark_new_type,
        std::vector<unsigned int> *p_unlock_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rdx
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *player; // r14
  std::shared_ptr<proto::MarkNewNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 notify_ptr:832";
  *(_QWORD *)(v3 + 16) = PlayerCombineComp::notifyMarkNewId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::MarkNewNotify>();
  v6 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::MarkNewNotify::set_mark_new_type(v6, mark_new_type);
  v7 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v8 = proto::MarkNewNotify::mutable_id_list(v7);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(p_unlock_id_vec, v8);
  v9 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( proto::MarkNewNotify::id_list_size(v9) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::MarkNewNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::MarkNewNotify>::~shared_ptr((std::shared_ptr<proto::MarkNewNotify> *const)(v3 + 32));
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

// Line 843: range 00000000175DC332-00000000175DD27D
int32_t __cdecl PlayerCombineComp::processReliquaryDecomposeReq(
        PlayerCombineComp *const this,
        const proto::ReliquaryDecomposeReq *req,
        proto::ReliquaryDecomposeRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  CombineExcelConfigMgr *p_combine_config_mgr; // r15
  uint32_t v9; // eax
  const google::protobuf::RepeatedField<long unsigned int> *v10; // rax
  unsigned __int64 *M_current; // r15
  std::vector<long unsigned int>::iterator v12; // rax
  uint64_t *v13; // rax
  PlayerItemComp *ItemComp; // rax
  int v15; // r15d
  std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t RankLevel; // ecx
  PlayerItemComp *v18; // rax
  uint32_t v19; // edi
  uint32_t drop_id; // esi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rcx
  uint32_t *p_count; // rax
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rcx
  bool v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  PlayerItemComp *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  PlayerItemComp *v47; // rax
  google::protobuf::RepeatedField<long unsigned int> *v48; // rax
  int32_t result; // eax
  unsigned int total_output_count; // [rsp+2Ch] [rbp-214h]
  uint32_t total_need_reliquary_count; // [rsp+30h] [rbp-210h]
  int32_t ret; // [rsp+34h] [rbp-20Ch]
  std::vector<ItemParam>::iterator __for_begin; // [rsp+38h] [rbp-208h] BYREF
  const data::ReliquaryDecomposeExcelConfig *config_ptr; // [rsp+40h] [rbp-200h]
  std::vector<long unsigned int> *__for_range; // [rsp+48h] [rbp-1F8h]
  std::vector<ItemParam> *__for_range_0; // [rsp+50h] [rbp-1F0h]
  const ItemParam *item_param; // [rsp+58h] [rbp-1E8h]
  uint64_t guid; // [rsp+60h] [rbp-1E0h]
  std::vector<long unsigned int>::iterator __for_end; // [rsp+68h] [rbp-1D8h] BYREF
  common::milog::MiLogStream v62; // [rsp+70h] [rbp-1D0h] BYREF
  char v63[432]; // [rsp+90h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 16 target_count:855 48 8 17 output_result:902 80 16 17 reliquary_ptr:878 112 24 12 guid_v"
                        "ec:869 176 24 10 reason:896 240 24 19 drop_result_vec:901 304 48 12 guid_set:871";
  *(_QWORD *)(v4 + 16) = PlayerCombineComp::processReliquaryDecomposeReq;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862721] = -234881024;
  v6[536862722] = 62194;
  v6[536862723] = 62194;
  v6[536862724] = -218959360;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862728] = -218959360;
  v6[536862729] = 62194;
  v6[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x640u) )
  {
    v3 = 141;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 80));
    p_combine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80))->design_config.txt_config_mgr.combine_config_mgr;
    v9 = proto::ReliquaryDecomposeReq::config_id(req);
    config_ptr = data::CombineExcelConfigMgrBase::findReliquaryDecomposeExcelConfig(p_combine_config_mgr, v9);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 80));
    if ( config_ptr )
    {
      *(_DWORD *)(v4 + 32) = proto::ReliquaryDecomposeReq::target_count(req);
      if ( *(_DWORD *)(v4 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->need_reliquary_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->need_reliquary_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->need_reliquary_count);
        }
        if ( !config_ptr->need_reliquary_count
          || config_ptr->need_reliquary_count * *(_DWORD *)(v4 + 32) / *(_DWORD *)(v4 + 32) == config_ptr->need_reliquary_count )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->need_reliquary_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->need_reliquary_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->need_reliquary_count);
          }
          total_need_reliquary_count = SAFE_MULTIPLY<unsigned int,unsigned int>(
                                         *(_DWORD *)(v4 + 32),
                                         config_ptr->need_reliquary_count);
          if ( total_need_reliquary_count == proto::ReliquaryDecomposeReq::guid_list_size(req) )
          {
            std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v4 + 112));
            v10 = proto::ReliquaryDecomposeReq::guid_list(req);
            common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
              v10,
              (std::vector<long unsigned int> *)(v4 + 112));
            M_current = std::vector<unsigned long>::end((std::vector<long unsigned int> *const)(v4 + 112))._M_current;
            v12._M_current = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v4 + 112))._M_current;
            std::set<unsigned long>::set<__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>>(
              (std::set<long unsigned int> *const)(v4 + 304),
              v12,
              (__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> >)M_current);
            if ( std::set<unsigned long>::size((const std::set<long unsigned int> *const)(v4 + 304)) == total_need_reliquary_count )
            {
              __for_range = (std::vector<long unsigned int> *)(v4 + 112);
              *(std::vector<long unsigned int>::iterator *)(v4 + 48) = std::vector<unsigned long>::begin((std::vector<long unsigned int> *const)(v4 + 112));
              __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
              while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                        (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v4 + 48),
                        &__for_end) )
              {
                v13 = __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v4 + 48));
                if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v13);
                guid = *v13;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                ItemComp = Player::getItemComp(this->player_);
                PlayerItemComp::findItemInPack<Reliquary>((PlayerItemComp *const)(v4 + 80), (uint64_t)ItemComp);
                if ( std::operator==<Reliquary>(0LL, (const std::shared_ptr<Reliquary> *)(v4 + 80)) )
                {
                  v3 = 601;
                  v15 = 0;
                }
                else
                {
                  v16 = std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Reliquary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
                  RankLevel = Reliquary::getRankLevel(v16);
                  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->need_reliquary_rank_level >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->need_reliquary_rank_level >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4(&config_ptr->need_reliquary_rank_level);
                  }
                  if ( RankLevel >= config_ptr->need_reliquary_rank_level )
                  {
                    v15 = 1;
                  }
                  else
                  {
                    v3 = 699;
                    v15 = 0;
                  }
                }
                std::shared_ptr<Reliquary>::~shared_ptr((std::shared_ptr<Reliquary> *const)(v4 + 80));
                if ( v15 != 1 )
                  goto LABEL_75;
                __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)(v4 + 48));
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v18 = Player::getItemComp(this->player_);
              ret = PlayerItemComp::checkSubItemBatch(v18, (const std::vector<long unsigned int> *)(v4 + 112));
              if ( ret )
              {
                v3 = ret;
              }
              else
              {
                ActionReason::ActionReason(
                  (ActionReason *const)(v4 + 176),
                  ACTION_REASON_RELIQUARY_DECOMPOSE,
                  ITEM_LIMIT_RELIQUARY_DECOMPOSE);
                std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 240));
                v19 = *(_DWORD *)(v4 + 32);
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->drop_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->drop_id >> 3)
                                                                            + 0x7FFF8000) )
                {
                  v19 = (_DWORD)config_ptr + 12;
                  __asan_report_load4(&config_ptr->drop_id);
                }
                drop_id = config_ptr->drop_id;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                {
                  v19 = (_DWORD)this + 24;
                  __asan_report_load8(&this->player_);
                }
                *(OutputResult *)(v4 + 48) = DropUtils::dropItems(
                                               this->player_,
                                               drop_id,
                                               v19,
                                               (const ActionReason *)(v4 + 176),
                                               (std::vector<ItemParam> *)(v4 + 240));
                if ( *(_DWORD *)(v4 + 48) )
                {
                  common::milog::MiLogStream::create(
                    &v62,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/combine/player_combine_comp.cpp",
                    "processReliquaryDecomposeReq",
                    905);
                  v21 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          &v62,
                          (const char (*)[25])"dropItems fail, drop_id:");
                  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v21,
                          &config_ptr->drop_id);
                  v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v22,
                          (const char (*)[13])" drop_count:");
                  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v23,
                          (const unsigned int *)(v4 + 32));
                  v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v24,
                          (const char (*)[9])" player:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  operator<<(v25, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v62);
                  v3 = -1;
                }
                else
                {
                  total_output_count = 0;
                  __for_range_0 = (std::vector<ItemParam> *)(v4 + 240);
                  __for_begin._M_current = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 240))._M_current;
                  __for_end._M_current = (unsigned __int64 *)std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v4 + 240))._M_current;
                  while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                            &__for_begin,
                            (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
                  {
                    item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*(&__for_begin);
                    p_count = &item_param->count;
                    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3)
                                                                                + 0x7FFF8000) )
                    {
                      __asan_report_load4(p_count);
                    }
                    total_output_count = SAFE_ADD<unsigned int,unsigned int>(total_output_count, item_param->count);
                    ServiceBox::findService<GameserverService>();
                    GameserverService::getConfig((GameserverService *const)(v4 + 80));
                    p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80))->design_config.txt_config_mgr.reliquary_config_mgr;
                    if ( *(_BYTE *)(((unsigned __int64)item_param >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)item_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_param >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      __asan_report_load4(item_param);
                    }
                    v28 = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(
                            p_reliquary_config_mgr,
                            item_param->item_id) == 0LL;
                    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 80));
                    if ( v28 )
                    {
                      common::milog::MiLogStream::create(
                        &v62,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/combine/player_combine_comp.cpp",
                        "processReliquaryDecomposeReq",
                        915);
                      v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                              &v62,
                              (const char (*)[40])"findReliquaryExcelConfig fail, item_id:");
                      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v29,
                              &item_param->item_id);
                      v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                              v30,
                              (const char (*)[10])" drop_id:");
                      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v31,
                              &config_ptr->drop_id);
                      v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                              v32,
                              (const char (*)[13])" drop_count:");
                      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v33,
                              (const unsigned int *)(v4 + 32));
                      v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                              v34,
                              (const char (*)[9])" player:");
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
LABEL_70:
                      operator<<(v35, this->player_);
                      common::milog::MiLogStream::~MiLogStream(&v62);
                      v3 = -1;
                      goto LABEL_74;
                    }
                    __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++(&__for_begin);
                  }
                  if ( total_output_count >= std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v4 + 112)) )
                  {
                    common::milog::MiLogStream::create(
                      &v62,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/combine/player_combine_comp.cpp",
                      "processReliquaryDecomposeReq",
                      922);
                    v36 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                            &v62,
                            (const char (*)[56])"drop_result_vec is more than guid_vec! drop_result_vec:");
                    v37 = common::milog::MiLogStream::operator<<<ItemParam>(
                            v36,
                            (const std::vector<ItemParam> *)(v4 + 240));
                    v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                            v37,
                            (const char (*)[14])" input_items:");
                    v39 = common::milog::MiLogStream::operator<<<unsigned long>(
                            v38,
                            (const std::vector<long unsigned int> *)(v4 + 112));
                    v40 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                            v39,
                            (const char (*)[10])" drop_id:");
                    v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v40,
                            &config_ptr->drop_id);
                    v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                            v41,
                            (const char (*)[13])" drop_count:");
                    v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v42,
                            (const unsigned int *)(v4 + 32));
                    v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v43,
                            (const char (*)[9])" player:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    goto LABEL_70;
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v44 = Player::getItemComp(this->player_);
                  SubItemReason::SubItemReason((SubItemReason *const)&__for_end, (const ActionReason *)(v4 + 176));
                  if ( PlayerItemComp::subItemBatch(
                         v44,
                         (const std::vector<long unsigned int> *)(v4 + 112),
                         (const SubItemReason *)&__for_end) )
                  {
                    common::milog::MiLogStream::create(
                      &v62,
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/player/combine/player_combine_comp.cpp",
                      "processReliquaryDecomposeReq",
                      930);
                    v45 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                            &v62,
                            (const char (*)[29])"subItemBatch fail, guid_vec:");
                    v46 = common::milog::MiLogStream::operator<<<unsigned long>(
                            v45,
                            (const std::vector<long unsigned int> *)(v4 + 112));
                    v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                            v46,
                            (const char (*)[9])" player:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    goto LABEL_70;
                  }
                  std::set<unsigned long>::clear(&this->temp_reliquary_guid_set_);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v47 = Player::getItemComp(this->player_);
                  PlayerItemComp::addItemBatch(
                    v47,
                    (const std::vector<ItemParam> *)(v4 + 240),
                    (const ActionReason *)(v4 + 176),
                    0LL);
                  v48 = proto::ReliquaryDecomposeRsp::mutable_guid_list(rsp_0);
                  common::tools::MiscUtils::setToRepeated<std::set<unsigned long>,unsigned long>(
                    &this->temp_reliquary_guid_set_,
                    v48);
                  std::set<unsigned long>::clear(&this->temp_reliquary_guid_set_);
                  v3 = 0;
                }
LABEL_74:
                std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 240));
              }
            }
            else
            {
              v3 = -1;
            }
LABEL_75:
            std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v4 + 304));
            std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v4 + 112));
          }
          else
          {
            v3 = -1;
          }
        }
        else
        {
          v3 = -1;
        }
      }
      else
      {
        v3 = -1;
      }
    }
    else
    {
      v3 = 5;
    }
  }
  result = v3;
  if ( v63 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
