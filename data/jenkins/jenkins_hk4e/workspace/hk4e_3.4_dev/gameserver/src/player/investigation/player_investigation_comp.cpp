// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/investigation/player_investigation_comp.cpp

// Line 35: range 0000000016C90A84-0000000016C90C92
proto::Investigation::State __cdecl Investigation::getState(const Investigation *const this)
{
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // rcx
  InvestigationExcelConfigMgr *v3; // rcx
  uint32_t total_progress; // [rsp+14h] [rbp-2Ch]
  const data::InvestigationConfig *investigation_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.investigation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  investigation_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationConfig(
                               p_investigation_config_mgr,
                               this->id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( !investigation_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_taken_reward);
  }
  if ( this->is_taken_reward )
    return 3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v3 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.investigation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  total_progress = InvestigationExcelConfigMgr::getInvestigationTotalProgress(v3, this->id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->progress);
  }
  if ( total_progress > this->progress )
    return 1;
  else
    return 2;
};

// Line 54: range 0000000016C90C94-0000000016C90D91
void __cdecl Investigation::fromBin(Investigation *const this, const proto::InvestigationBin *proto)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  bool is_taken_reward; // cl
  char v9; // dl
  __int64 v10; // rdx
  const proto::InvestigationBin *protoa; // [rsp+0h] [rbp-10h]

  protoa = proto;
  v2 = proto::InvestigationBin::investigation_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->id = v2;
  v5 = proto::InvestigationBin::progress(protoa);
  v6 = *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->progress, proto, v7);
  this->progress = v5;
  is_taken_reward = proto::InvestigationBin::is_taken_reward(protoa);
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 8) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_taken_reward, proto, v10);
  this->is_taken_reward = is_taken_reward;
};

// Line 61: range 0000000016C90D92-0000000016C90E90
void __cdecl Investigation::toBin(Investigation *const this, proto::InvestigationBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::InvestigationBin::set_investigation_id(proto, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->progress);
  }
  proto::InvestigationBin::set_progress(proto, this->progress);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_taken_reward >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_taken_reward);
  }
  proto::InvestigationBin::set_is_taken_reward(proto, this->is_taken_reward);
};

// Line 68: range 0000000016C90E92-0000000016C91012
void __cdecl Investigation::toClient(const Investigation *const this, proto::Investigation *proto)
{
  proto::Investigation::State State; // edx
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // rcx
  uint32_t InvestigationTotalProgress; // edx
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::Investigation::set_id(proto, this->id);
  State = Investigation::getState(this);
  proto::Investigation::set_state(proto, State);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->progress);
  }
  proto::Investigation::set_progress(proto, this->progress);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.investigation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  InvestigationTotalProgress = InvestigationExcelConfigMgr::getInvestigationTotalProgress(
                                 p_investigation_config_mgr,
                                 this->id);
  proto::Investigation::set_total_progress(proto, InvestigationTotalProgress);
  std::shared_ptr<Config>::~shared_ptr(v5);
};

// Line 76: range 0000000016C91014-0000000016C912FD
int32_t __cdecl PlayerInvestigationComp::fromBin(
        PlayerInvestigationComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  Investigation *v5; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> >,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  bool is_today_quest_daily_notify_ack; // cl
  char v10; // dl
  const google::protobuf::RepeatedField<unsigned int> *v11; // rsi
  __int64 v12; // rdx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::InvestigationBin>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::InvestigationBin>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  const proto::PlayerInvestigationCompBin *comp; // [rsp+28h] [rbp-98h]
  const google::protobuf::RepeatedPtrField<proto::InvestigationBin> *__for_range; // [rsp+30h] [rbp-90h]
  const proto::InvestigationBin *investigation_bin; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 16 investigation:80";
  *(_QWORD *)(v2 + 16) = PlayerInvestigationComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  comp = proto::PlayerDataBin::investigation_bin(player_data_bin);
  __for_range = proto::PlayerInvestigationCompBin::investigation_list(comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::InvestigationBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::InvestigationBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::InvestigationBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    investigation_bin = google::protobuf::internal::RepeatedPtrIterator<proto::InvestigationBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 40) = 0;
    Investigation::fromBin((Investigation *const)(v2 + 32), investigation_bin);
    v6 = std::map<unsigned int,Investigation>::emplace<unsigned int &,Investigation&>(
           &this->investigation_map_,
           (unsigned int *)(v2 + 32),
           (Investigation *)(v2 + 32),
           (unsigned int *)&this->investigation_map_,
           v5);
    if ( !v6.second )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/investigation/player_investigation_comp.cpp",
        "fromBin",
        84);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v19,
             (const char (*)[39])"investigation_map_ emplace failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::InvestigationBin const>::operator++(&__for_begin);
  }
  v8 = proto::PlayerInvestigationCompBin::finished_target_id_list(comp);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->finished_target_id_set_,
    v8);
  v11 = proto::PlayerInvestigationCompBin::reward_taken_target_id_list(comp);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->reward_taken_target_id_set_,
    v11);
  is_today_quest_daily_notify_ack = proto::PlayerInvestigationCompBin::is_today_quest_daily_notify_ack(comp);
  v10 = *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v10 != 0;
  v12 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this - 47) & 7) >= v10);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->quest_daily_notify_today_ack_, v11, v12);
  this->quest_daily_notify_today_ack_ = is_today_quest_daily_notify_ack;
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

// Line 94: range 0000000016C912FE-0000000016C91587
int32_t __cdecl PlayerInvestigationComp::toBin(
        PlayerInvestigationComp *const this,
        proto::PlayerDataBin *player_data_bin)
{
  proto::InvestigationBin *v2; // rax
  unsigned int *v3; // rax
  google::protobuf::uint32 *v4; // rdx
  unsigned int *v5; // rax
  google::protobuf::uint32 *v6; // rdx
  std::map<unsigned int,Investigation>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,Investigation>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::PlayerInvestigationCompBin *comp; // [rsp+28h] [rbp-38h]
  std::map<unsigned int,Investigation> *__for_range; // [rsp+30h] [rbp-30h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-28h]
  std::unordered_set<unsigned int> *__for_range_1; // [rsp+40h] [rbp-20h]
  std::pair<unsigned int const,Investigation> *__in; // [rsp+48h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,Investigation> >::type *_; // [rsp+50h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,Investigation> >::type *investigation; // [rsp+58h] [rbp-8h]

  comp = proto::PlayerDataBin::mutable_investigation_bin(player_data_bin);
  proto::PlayerInvestigationCompBin::clear_investigation_list(comp);
  __for_range = &this->investigation_map_;
  __for_begin._M_node = std::map<unsigned int,Investigation>::begin(&this->investigation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,Investigation>::end(&this->investigation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,Investigation>(__in);
    investigation = std::get<1ul,unsigned int const,Investigation>(__in);
    v2 = proto::PlayerInvestigationCompBin::add_investigation_list(comp);
    Investigation::toBin(investigation, v2);
    std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->finished_target_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->finished_target_id_set_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v3 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    proto::PlayerInvestigationCompBin::add_finished_target_id_list(comp, *v4);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  __for_range_1 = &this->reward_taken_target_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->reward_taken_target_id_set_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    proto::PlayerInvestigationCompBin::add_reward_taken_target_id_list(comp, *v6);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->quest_daily_notify_today_ack_);
  }
  proto::PlayerInvestigationCompBin::set_is_today_quest_daily_notify_ack(comp, this->quest_daily_notify_today_ack_);
  return 0;
};

// Line 114: range 0000000016C91588-0000000016C915A6
int32_t __cdecl PlayerInvestigationComp::init(PlayerInvestigationComp *const this)
{
  PlayerInvestigationComp::initEventObservers(this);
  return 0;
};

// Line 120: range 0000000016C915A8-0000000016C91ADF
void __cdecl PlayerInvestigationComp::initEventObservers(PlayerInvestigationComp *const this)
{
  unsigned __int64 p_M_last; // r13
  __int64 v2; // rax
  _DWORD *v3; // r14
  PlayerEventComp *event_comp; // [rsp+68h] [rbp-108h]
  PlayerEventComp v5; // [rsp+70h] [rbp-100h] BYREF

  p_M_last = (unsigned __int64)&v5.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:121 64 16 12 this_wtr:127";
  *(_QWORD *)(p_M_last + 16) = PlayerInvestigationComp::initEventObservers;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerInvestigationComp>((PlayerInvestigationComp *)(p_M_last + 32));
  if ( std::operator==<PlayerInvestigationComp>(0LL, (const std::shared_ptr<PlayerInvestigationComp> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/investigation/player_investigation_comp.cpp",
      "initEventObservers",
      124);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      (common::milog::MiLogStream *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const char (*)[55])"dynamic_pointer_cast to PlayerInvestigationComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
  }
  else
  {
    std::weak_ptr<PlayerInvestigationComp>::weak_ptr<PlayerInvestigationComp,void>(
      (std::weak_ptr<PlayerInvestigationComp> *const)(p_M_last + 64),
      (const std::shared_ptr<PlayerInvestigationComp> *)(p_M_last + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerInvestigationComp>::weak_ptr(
      (std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerInvestigationComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerInvestigationComp,OpenStateChangeEvent>(
      &v5,
      (std::weak_ptr<PlayerInvestigationComp> *)event_comp,
      (void (*)(PlayerInvestigationComp *, const OpenStateChangeEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5);
    std::weak_ptr<PlayerInvestigationComp>::~weak_ptr((std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerInvestigationComp>::weak_ptr(
      (std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerInvestigationComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerInvestigationComp,PlayerLevelupEvent>(
      (PlayerEventComp *const)&v5._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerInvestigationComp> *)event_comp,
      (void (*)(PlayerInvestigationComp *, const PlayerLevelupEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5._M_weak_this._M_refcount);
    std::weak_ptr<PlayerInvestigationComp>::~weak_ptr((std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerInvestigationComp>::weak_ptr(
      (std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerInvestigationComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerInvestigationComp,WatcherProgressUpdateEvent>(
      (PlayerEventComp *const)&v5.event_center_,
      (std::weak_ptr<PlayerInvestigationComp> *)event_comp,
      (void (*)(PlayerInvestigationComp *, const WatcherProgressUpdateEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_);
    std::weak_ptr<PlayerInvestigationComp>::~weak_ptr((std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerInvestigationComp>::weak_ptr(
      (std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start,
      (const std::weak_ptr<PlayerInvestigationComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerInvestigationComp,MonsterDieEndEvent>(
      (PlayerEventComp *const)&v5.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerInvestigationComp> *)event_comp,
      (void (*)(PlayerInvestigationComp *, const MonsterDieEndEvent *))&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerInvestigationComp>::~weak_ptr((std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerInvestigationComp>::weak_ptr(
      (std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_,
      (const std::weak_ptr<PlayerInvestigationComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerInvestigationComp,GroupsReplaceEvent>(
      (PlayerEventComp *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerInvestigationComp> *)event_comp,
      (void (*)(PlayerInvestigationComp *, const GroupsReplaceEvent *))&v5.event_center_.context_.pending_que_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v5.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerInvestigationComp>::~weak_ptr((std::weak_ptr<PlayerInvestigationComp> *const)&v5.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerInvestigationComp>::~weak_ptr((std::weak_ptr<PlayerInvestigationComp> *const)(p_M_last + 64));
  }
  std::shared_ptr<PlayerInvestigationComp>::~shared_ptr((std::shared_ptr<PlayerInvestigationComp> *const)(p_M_last + 32));
  if ( &v5.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
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
};

// Line 138: range 0000000016C91AE0-0000000016C9201D
int32_t __cdecl PlayerInvestigationComp::notifyAllData(PlayerInvestigationComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<proto::PlayerInvestigationAllInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::Investigation *v8; // rax
  InvestigationExcelConfigMgr *v9; // rcx
  unsigned int *v10; // rax
  uint32_t *v11; // rdx
  std::__shared_ptr_access<proto::PlayerInvestigationAllInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  proto::InvestigationTarget *v13; // rdx
  Player *player; // r14
  int32_t result; // eax
  uint32_t target_id; // [rsp+1Ch] [rbp-F4h]
  std::map<unsigned int,Investigation>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,Investigation>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-D8h] BYREF
  std::map<unsigned int,Investigation> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,Investigation> *v22; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,Investigation> >::type *_; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,Investigation> >::type *investigation; // [rsp+58h] [rbp-B8h]
  const data::InvestigationConfig *investigation_config_ptr; // [rsp+60h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<const google::protobuf::Message> v27; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-90h] BYREF
  char v29[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:139";
  *(_QWORD *)(v1 + 16) = PlayerInvestigationComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerInvestigationAllInfoNotify>();
  __for_range = &this->investigation_map_;
  __for_begin._M_node = std::map<unsigned int,Investigation>::begin(&this->investigation_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,Investigation>::end(&this->investigation_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,Investigation>(v22);
    investigation = (std::tuple_element<1,const std::pair<unsigned int const,Investigation> >::type *)std::get<1ul,unsigned int const,Investigation>(v22);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v27);
    p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.investigation_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)investigation >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)investigation & 7) + 3) >= *(_BYTE *)(((unsigned __int64)investigation >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(investigation);
    }
    investigation_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationConfig(
                                 p_investigation_config_mgr,
                                 investigation->id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
    if ( investigation_config_ptr )
    {
      v7 = std::__shared_ptr_access<proto::PlayerInvestigationAllInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerInvestigationAllInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      v8 = proto::PlayerInvestigationAllInfoNotify::add_investigation_list(v7);
      Investigation::toClient(investigation, v8);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.investigation_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)investigation >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)investigation & 7) + 3) >= *(_BYTE *)(((unsigned __int64)investigation >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(investigation);
      }
      __for_range_0 = InvestigationExcelConfigMgr::getInvestigationTargetVec(v9, investigation->id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v27);
      __for_begin_0._M_current = std::vector<unsigned int>::begin(__for_range_0)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        target_id = *v11;
        v12 = std::__shared_ptr_access<proto::PlayerInvestigationAllInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerInvestigationAllInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v13 = proto::PlayerInvestigationAllInfoNotify::add_investigation_target_list(v12);
        PlayerInvestigationComp::getInvestigationTagetProto(this, target_id, v13);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/investigation/player_investigation_comp.cpp",
        "notifyAllData",
        145);
      v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v28,
             (const char (*)[18])"investigation_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &investigation->id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" config not exist");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerInvestigationAllInfoNotify>((const std::shared_ptr<proto::PlayerInvestigationAllInfoNotify> *)&v27);
  Player::sendMessage(player, &v27, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v27);
  std::shared_ptr<proto::PlayerInvestigationAllInfoNotify>::~shared_ptr((std::shared_ptr<proto::PlayerInvestigationAllInfoNotify> *const)(v1 + 32));
  result = 0;
  if ( v29 == (char *)v1 )
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

// Line 160: range 0000000016C9201E-0000000016C92444
void __fastcall PlayerInvestigationComp::getInvestigationTagetProto(
        PlayerInvestigationComp *const this,
        uint32_t target_id,
        proto::InvestigationTarget *proto)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  proto::InvestigationTarget::State InvestigationTargetState; // eax
  uint32_t WatcherComp; // eax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t Progress; // eax
  google::protobuf::uint32 v15; // eax
  const data::InvestigationTargetConfig *target_config_ptr; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 target_id:159 64 16 15 watcher_ptr:171";
  *(_QWORD *)(v3 + 16) = PlayerInvestigationComp::getInvestigationTagetProto;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = target_id;
  proto::InvestigationTarget::set_quest_id(proto, *(_DWORD *)(v3 + 48));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  target_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig(
                        &v6->design_config.txt_config_mgr.investigation_config_mgr,
                        *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( target_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->investigation_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)target_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_config_ptr->investigation_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&target_config_ptr->investigation_id);
    }
    proto::InvestigationTarget::set_investigation_id(proto, target_config_ptr->investigation_id);
    InvestigationTargetState = PlayerInvestigationComp::getInvestigationTargetState(this, *(_DWORD *)(v3 + 48));
    proto::InvestigationTarget::set_state(proto, InvestigationTargetState);
    if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&target_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&target_config_ptr->progress);
    }
    proto::InvestigationTarget::set_total_progress(proto, target_config_ptr->progress);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v3 + 64), WatcherComp);
    if ( std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v3 + 64)) )
    {
      v12 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Progress = BaseWatcher::getProgress(v12);
      proto::InvestigationTarget::set_progress(proto, Progress);
    }
    else if ( proto::InvestigationTarget::state(proto) == InvestigationTarget_State_COMPLETE
           || proto::InvestigationTarget::state(proto) == InvestigationTarget_State_REWARD_TAKEN )
    {
      v15 = proto::InvestigationTarget::total_progress(proto);
      proto::InvestigationTarget::set_progress(proto, v15);
    }
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/investigation/player_investigation_comp.cpp",
      "getInvestigationTagetProto",
      165);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v18,
           (const char (*)[47])"findInvestigationTargetConfig fail, target_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
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

// Line 184: range 0000000016C92446-0000000016C9246E
int32_t __cdecl PlayerInvestigationComp::onLogin(PlayerInvestigationComp *const this, bool is_new_player)
{
  PlayerInvestigationComp::refreshAllInvestigation(this, 0);
  return 0;
};

// Line 192: range 0000000016C92470-0000000016C924CF
void __cdecl PlayerInvestigationComp::onDailyRefresh(PlayerInvestigationComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = ((_BYTE)this - 47) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->quest_daily_notify_today_ack_, v1, v2);
  this->quest_daily_notify_today_ack_ = 0;
  PlayerInvestigationComp::sendQuestDailyNotify(this);
};

// Line 198: range 0000000016C924D0-0000000016C92523
void __cdecl PlayerInvestigationComp::onLoginDailyRefresh(PlayerInvestigationComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = ((_BYTE)this - 47) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->quest_daily_notify_today_ack_, v1, v2);
  this->quest_daily_notify_today_ack_ = 0;
};

// Line 203: range 0000000016C92524-0000000016C92677
Investigation *__fastcall PlayerInvestigationComp::findInvestigation(
        PlayerInvestigationComp *const this,
        uint32_t investigation_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  Investigation *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 20 investigation_id:202 64 8 8 iter:204";
  *(_QWORD *)(v2 + 16) = PlayerInvestigationComp::findInvestigation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = investigation_id;
  *(std::map<unsigned int,Investigation>::iterator *)(v2 + 64) = std::map<unsigned int,Investigation>::find(
                                                                   &this->investigation_map_,
                                                                   (const std::map<unsigned int,Investigation>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,Investigation>::end(&this->investigation_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,Investigation> > *const)(v2 + 64))->second;
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

// Line 213: range 0000000016C92678-0000000016C926B7
proto::Investigation::State __cdecl PlayerInvestigationComp::getInvestigationState(
        PlayerInvestigationComp *const this,
        uint32_t investigation_id)
{
  Investigation *investigation_ptr; // [rsp+18h] [rbp-8h]

  investigation_ptr = PlayerInvestigationComp::findInvestigation(this, investigation_id);
  if ( investigation_ptr )
    return Investigation::getState(investigation_ptr);
  else
    return 0;
};

// Line 223: range 0000000016C926B8-0000000016C927BC
proto::InvestigationTarget::State __cdecl PlayerInvestigationComp::getInvestigationTargetState(
        PlayerInvestigationComp *const this,
        uint32_t target_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  char v3; // al
  const data::InvestigationTargetConfig *target_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  target_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig(
                        &v2->design_config.txt_config_mgr.investigation_config_mgr,
                        target_id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( !target_config_ptr )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->investigation_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)target_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_config_ptr->investigation_id >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&target_config_ptr->investigation_id);
  }
  if ( PlayerInvestigationComp::getInvestigationState(this, target_config_ptr->investigation_id) )
    v3 = 0;
  else
LABEL_5:
    v3 = 1;
  if ( v3 )
    return 0;
  else
    return PlayerInvestigationComp::getTargetStateIgnoreInvestigation(this, target_id);
};

// Line 235: range 0000000016C927BE-0000000016C92987
__int64 __fastcall PlayerInvestigationComp::getTargetStateIgnoreInvestigation(
        PlayerInvestigationComp *const this,
        uint32_t target_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int v5; // r14d
  uint32_t WatcherComp; // eax
  __int64 result; // rax
  char v8[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 target_id:234 64 16 20 base_watcher_ptr:244";
  *(_QWORD *)(v2 + 16) = PlayerInvestigationComp::getTargetStateIgnoreInvestigation;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = target_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->reward_taken_target_id_set_,
         (const unsigned int *)(v2 + 48)) )
  {
    v5 = 3;
  }
  else if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
              &this->finished_target_id_set_,
              (const unsigned int *)(v2 + 48)) )
  {
    v5 = 2;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), WatcherComp);
    v5 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64));
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
  }
  result = v5;
  if ( v8 == (char *)v2 )
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

// Line 253: range 0000000016C92988-0000000016C92B4B
void __cdecl PlayerInvestigationComp::notifyInvestigation(
        PlayerInvestigationComp *const this,
        uint32_t investigation_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto::PlayerInvestigationNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto::Investigation *v6; // rdx
  Player *player; // r14
  Investigation *investigation_ptr; // [rsp+18h] [rbp-88h]
  std::shared_ptr<proto::PlayerInvestigationNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:260";
  *(_QWORD *)(v2 + 16) = PlayerInvestigationComp::notifyInvestigation;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  investigation_ptr = PlayerInvestigationComp::findInvestigation(this, investigation_id);
  if ( investigation_ptr )
  {
    common::tools::perf::make_shared<proto::PlayerInvestigationNotify>();
    v5 = std::__shared_ptr_access<proto::PlayerInvestigationNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerInvestigationNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = proto::PlayerInvestigationNotify::add_investigation_list(v5);
    Investigation::toClient(investigation_ptr, v6);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerInvestigationNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::PlayerInvestigationNotify>::~shared_ptr((std::shared_ptr<proto::PlayerInvestigationNotify> *const)(v2 + 32));
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

// Line 266: range 0000000016C92B4C-0000000016C92E5A
void __cdecl PlayerInvestigationComp::notifyInvestigationTarget(
        PlayerInvestigationComp *const this,
        const std::vector<unsigned int> *target_id_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  google::protobuf::RepeatedPtrField<proto::InvestigationTarget> *v7; // rax
  uint32_t target_id; // [rsp+1Ch] [rbp-104h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  proto::InvestigationTarget *proto_ptr; // [rsp+38h] [rbp-E8h]
  char v13[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 24 21 target_proto_list:267 112 48 10 notify:278";
  *(_QWORD *)(v2 + 16) = PlayerInvestigationComp::notifyInvestigationTarget;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218959360;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  google::protobuf::RepeatedPtrField<proto::InvestigationTarget>::RepeatedPtrField((google::protobuf::RepeatedPtrField<proto::InvestigationTarget> *const)(v2 + 48));
  __for_range = target_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(target_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(target_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    target_id = *v6;
    proto_ptr = google::protobuf::RepeatedPtrField<proto::InvestigationTarget>::Add((google::protobuf::RepeatedPtrField<proto::InvestigationTarget> *const)(v2 + 48));
    if ( proto_ptr )
      PlayerInvestigationComp::getInvestigationTagetProto(this, target_id, proto_ptr);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( !google::protobuf::RepeatedPtrField<proto::InvestigationTarget>::empty((const google::protobuf::RepeatedPtrField<proto::InvestigationTarget> *const)(v2 + 48)) )
  {
    proto::PlayerInvestigationTargetNotify::PlayerInvestigationTargetNotify((proto::PlayerInvestigationTargetNotify *const)(v2 + 112));
    v7 = proto::PlayerInvestigationTargetNotify::mutable_investigation_target_list((proto::PlayerInvestigationTargetNotify *const)(v2 + 112));
    google::protobuf::RepeatedPtrField<proto::InvestigationTarget>::Swap(
      v7,
      (google::protobuf::RepeatedPtrField<proto::InvestigationTarget> *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 112));
    proto::PlayerInvestigationTargetNotify::~PlayerInvestigationTargetNotify((proto::PlayerInvestigationTargetNotify *const)(v2 + 112));
  }
  google::protobuf::RepeatedPtrField<proto::InvestigationTarget>::~RepeatedPtrField((google::protobuf::RepeatedPtrField<proto::InvestigationTarget> *const)(v2 + 48));
  if ( v13 == (char *)v2 )
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

// Line 285: range 0000000016C92E5C-0000000016C92EE4
void __cdecl PlayerInvestigationComp::setInvestigationProgressByGm(
        PlayerInvestigationComp *const this,
        uint32_t investigation_id,
        uint32_t progress)
{
  __int64 v3; // rdx
  Investigation *investigation_ptr; // [rsp+18h] [rbp-8h]

  investigation_ptr = PlayerInvestigationComp::findInvestigation(this, investigation_id);
  if ( investigation_ptr )
  {
    v3 = (*(_BYTE *)(((unsigned __int64)&investigation_ptr->progress >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)investigation_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&investigation_ptr->progress >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
      __asan_report_store4(&investigation_ptr->progress, (((_BYTE)investigation_ptr + 4) & 7u) + 3, v3);
    investigation_ptr->progress = progress;
    PlayerInvestigationComp::notifyInvestigation(this, investigation_id);
  }
};

// Line 296: range 0000000016C92EE6-0000000016C92F96
void __cdecl PlayerInvestigationComp::onOpenStateChange(
        PlayerInvestigationComp *const this,
        const OpenStateChangeEvent *a2)
{
  bool isLogin; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  isLogin = Player::isLogin(this->player_);
  PlayerInvestigationComp::checkOpenInvestigation(this, isLogin);
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->quest_daily_notify_today_ack_);
  }
  if ( !this->quest_daily_notify_today_ack_ )
    PlayerInvestigationComp::sendQuestDailyNotify(this);
};

// Line 303: range 0000000016C92F98-0000000016C92FF0
void __cdecl PlayerInvestigationComp::onPlayerLevelup(
        PlayerInvestigationComp *const this,
        const PlayerLevelupEvent *a2)
{
  bool isLogin; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  isLogin = Player::isLogin(this->player_);
  PlayerInvestigationComp::checkOpenInvestigation(this, isLogin);
};

// Line 308: range 0000000016C92FF2-0000000016C935CC
void __cdecl PlayerInvestigationComp::onWatcherProgressUpdate(
        PlayerInvestigationComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  PlayerWatcherComp *WatcherComp; // rax
  uint32_t v10; // esi
  uint32_t cur_progress; // ecx
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-F0h]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-CDh] BYREF
  std::initializer_list<unsigned int> v14; // [rsp+34h] [rbp-CCh] BYREF
  std::vector<unsigned int> target_id_vec; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v16; // [rsp+70h] [rbp-90h] BYREF
  char v17[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 target_id:309";
  *(_QWORD *)(v2 + 16) = PlayerInvestigationComp::onWatcherProgressUpdate;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->watcher_id);
  }
  *(_DWORD *)(v2 + 32) = event->watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)((char *)&v14._M_len + 4));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14._M_len + 4);
  *(std::initializer_list<unsigned int>::iterator *)((char *)&v14._M_array + 4) = (std::initializer_list<unsigned int>::iterator)data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig(&v5->design_config.txt_config_mgr.investigation_config_mgr, *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)((char *)&v14._M_len + 4));
  if ( *(std::initializer_list<unsigned int>::iterator *)((char *)&v14._M_array + 4) )
  {
    if ( *(char *)(((unsigned __int64)&event->is_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&event->is_finished);
    if ( event->is_finished )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->finished_target_id_set_,
             (const unsigned int *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/investigation/player_investigation_comp.cpp",
          "onWatcherProgressUpdate",
          319);
        v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               &v16,
               (const char (*)[52])"investigation watcher already finished, watcher_id:");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
        v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v8, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::delWatcher(WatcherComp, *(_DWORD *)(v2 + 32));
        std::unordered_set<unsigned int>::insert(
          &this->finished_target_id_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
        v10 = *(_DWORD *)(v2 + 32);
        if ( *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v14._M_array + 4)
                                          + 27) >> 3)
                      + 0x7FFF8000) != 0
          && (char)(((BYTE4(v14._M_array) + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(std::initializer_list<unsigned int>::iterator *)((char *)&v14._M_array + 4)
                                                                                           + 27) >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(*(std::initializer_list<unsigned int>::iterator *)((char *)&v14._M_array + 4) + 27);
        }
        PlayerInvestigationComp::logFinishInvestigation(this, (*(_DWORD **)((char *)&v14._M_array + 4))[27], v10);
        LODWORD(v14._M_array) = *(_DWORD *)(v2 + 32);
        __l._M_array = (std::initializer_list<unsigned int>::iterator)&v14;
        __l._M_len = 1LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&target_id_vec, __l, &__a);
        PlayerInvestigationComp::notifyInvestigationTarget(this, &target_id_vec);
        std::vector<unsigned int>::~vector(&target_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->cur_progress);
      }
      cur_progress = event->cur_progress;
      if ( *(_BYTE *)(((unsigned __int64)&event->old_progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->old_progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->old_progress);
      }
      if ( cur_progress != event->old_progress )
      {
        LODWORD(v14._M_array) = *(_DWORD *)(v2 + 32);
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(
          &target_id_vec,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v14),
          &__a);
        PlayerInvestigationComp::notifyInvestigationTarget(this, &target_id_vec);
        std::vector<unsigned int>::~vector(&target_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
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

// Line 334: range 0000000016C935CE-0000000016C937E4
void __cdecl PlayerInvestigationComp::onMonsterDieEndEvent(
        PlayerInvestigationComp *const this,
        const MonsterDieEndEvent *event)
{
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurSceneId; // ecx
  uint32_t group_id; // ecx
  uint32_t monster_id; // ecx
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_tracking_info_);
  }
  if ( !this->current_tracking_info_.investigation_monster_id )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.scene_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->current_tracking_info_.scene_id);
  }
  if ( CurSceneId != this->current_tracking_info_.scene_id )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->group_id);
  }
  group_id = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_tracking_info_.group_id);
  }
  if ( group_id != this->current_tracking_info_.group_id )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->monster_id);
  }
  monster_id = event->monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.monster_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.monster_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->current_tracking_info_.monster_id);
  }
  if ( monster_id == this->current_tracking_info_.monster_id )
    v6 = 0;
  else
LABEL_19:
    v6 = 1;
  if ( !v6 )
    PlayerInvestigationComp::refreshTrackingTarget(this);
};

// Line 346: range 0000000016C937E6-0000000016C9387E
void __cdecl PlayerInvestigationComp::onGroupsReplaceEvent(
        PlayerInvestigationComp *const this,
        const GroupsReplaceEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_tracking_info_);
  }
  if ( this->current_tracking_info_.investigation_monster_id
    && common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &event->replaced_groups,
         &this->current_tracking_info_.group_id) )
  {
    PlayerInvestigationComp::refreshTrackingTarget(this);
  }
};

// Line 357: range 0000000016C93880-0000000016C93D45
void __cdecl PlayerInvestigationComp::refreshTrackingTarget(PlayerInvestigationComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int64 investigation_monster_id; // rsi
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  __int64 v8; // rdx
  char v9; // al
  uint32_t v10; // ecx
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rdx
  char v14; // al
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rdx
  proto::InvestigationMonster *proto_investigation_monster; // [rsp+18h] [rbp-C8h]
  TrackingInvestigationMonsterInfo v20; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:358";
  *(_QWORD *)(v1 + 16) = PlayerInvestigationComp::refreshTrackingTarget;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::InvestigationMonsterUpdateNotify::InvestigationMonsterUpdateNotify((proto::InvestigationMonsterUpdateNotify *const)(v1 + 32));
  proto_investigation_monster = proto::InvestigationMonsterUpdateNotify::mutable_investigation_monster((proto::InvestigationMonsterUpdateNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->current_tracking_info_);
  }
  investigation_monster_id = this->current_tracking_info_.investigation_monster_id;
  if ( PlayerInvestigationComp::getStatusByInvestigationMonsterId(
         this,
         investigation_monster_id,
         proto_investigation_monster) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/investigation/player_investigation_comp.cpp",
      "refreshTrackingTarget",
      362);
    v5 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v21,
           (const char (*)[44])"getStatusByInvestigationMonsterId fail, id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v5,
           &this->current_tracking_info_.investigation_monster_id);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( proto::InvestigationMonster::is_alive(proto_investigation_monster) )
    {
      v8 = proto::InvestigationMonster::id(proto_investigation_monster);
      v9 = *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
      {
        LOBYTE(investigation_monster_id) = v9 != 0;
        __asan_report_store4(&this->current_tracking_info_, investigation_monster_id, v8);
      }
      this->current_tracking_info_.investigation_monster_id = v8;
      v10 = proto::InvestigationMonster::scene_id(proto_investigation_monster);
      v11 = *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.scene_id >> 3) + 0x7FFF8000);
      LOBYTE(investigation_monster_id) = v11 != 0;
      v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)this - 60) & 7) + 3) >= v11);
      if ( (_BYTE)v12 )
        __asan_report_store4(&this->current_tracking_info_.scene_id, investigation_monster_id, v12);
      this->current_tracking_info_.scene_id = v10;
      v13 = proto::InvestigationMonster::group_id(proto_investigation_monster);
      v14 = *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.group_id >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(investigation_monster_id) = v14 != 0;
        __asan_report_store4(&this->current_tracking_info_.group_id, investigation_monster_id, v13);
      }
      this->current_tracking_info_.group_id = v13;
      v15 = proto::InvestigationMonster::monster_id(proto_investigation_monster);
      v16 = *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_.monster_id >> 3) + 0x7FFF8000);
      LOBYTE(investigation_monster_id) = v16 != 0;
      v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this - 52) & 7) + 3) >= v16);
      if ( (_BYTE)v17 )
        __asan_report_store4(&this->current_tracking_info_.monster_id, investigation_monster_id, v17);
      this->current_tracking_info_.monster_id = v15;
    }
    else
    {
      v20.investigation_monster_id = 0;
      v20.scene_id = 0;
      v20.group_id = 0;
      v20.monster_id = 0;
      TrackingInvestigationMonsterInfo::TrackingInvestigationMonsterInfo(&v20);
      if ( *(_WORD *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) )
        __asan_report_store16(&this->current_tracking_info_);
      v18 = *(_QWORD *)&v20.group_id;
      *(_QWORD *)&this->current_tracking_info_.investigation_monster_id = *(_QWORD *)&v20.investigation_monster_id;
      *(_QWORD *)&this->current_tracking_info_.group_id = v18;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  }
  proto::InvestigationMonsterUpdateNotify::~InvestigationMonsterUpdateNotify((proto::InvestigationMonsterUpdateNotify *const)(v1 + 32));
  if ( v22 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 381: range 0000000016C93D46-0000000016C93F56
void __cdecl PlayerInvestigationComp::refreshAllInvestigation(PlayerInvestigationComp *const this, bool is_notify)
{
  uint32_t WatcherComp; // esi
  std::unordered_map<unsigned int,data::InvestigationTargetConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::InvestigationTargetConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::InvestigationTargetConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::InvestigationTargetConfig> *v6; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *target_id; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *target_config; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v9; // [rsp+40h] [rbp-10h] BYREF

  PlayerInvestigationComp::checkOpenInvestigation(this, is_notify);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.investigation_config_mgr.investigation_target_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::InvestigationTargetConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationTargetConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator*(&__for_begin);
    target_id = std::get<0ul,unsigned int const,data::InvestigationTargetConfig>(v6);
    target_config = (std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationTargetConfig> >::type *)std::get<1ul,unsigned int const,data::InvestigationTargetConfig>(v6);
    if ( *(char *)(((unsigned __int64)&target_config->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&target_config->is_disuse);
    if ( !target_config->is_disuse )
    {
      if ( *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)target_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(target_id);
      }
      if ( !(unsigned int)PlayerInvestigationComp::getTargetStateIgnoreInvestigation(this, *target_id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)target_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)target_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(target_id);
        }
        PlayerWatcherComp::addWatcher((PlayerWatcherComp *const)&v9, WatcherComp, *target_id);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v9);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationTargetConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 399: range 0000000016C93F58-0000000016C943D6
void __cdecl PlayerInvestigationComp::checkOpenInvestigation(PlayerInvestigationComp *const this, bool is_notify)
{
  PlayerBasicComp *BasicComp; // rcx
  char v3; // al
  PlayerBasicComp *v4; // rax
  uint32_t Level; // ecx
  char v6; // al
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  uint32_t pre_id; // [rsp+1Ch] [rbp-74h]
  std::unordered_map<unsigned int,data::InvestigationConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,data::InvestigationConfig>::const_iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  const std::unordered_map<unsigned int,data::InvestigationConfig> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,data::InvestigationConfig> *v14; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,data::InvestigationConfig> >::type *id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationConfig> >::type *investigation_config; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.investigation_config_mgr.investigation_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::InvestigationConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::InvestigationConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::InvestigationConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::InvestigationConfig>(v14);
    investigation_config = (std::tuple_element<1,const std::pair<unsigned int const,data::InvestigationConfig> >::type *)std::get<1ul,unsigned int const,data::InvestigationConfig>(v14);
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,Investigation>,unsigned int>(
            &this->investigation_map_,
            id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_open_state_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_open_state_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&investigation_config->unlock_open_state_type);
      }
      if ( investigation_config->unlock_open_state_type == OPEN_STATE_NONE )
        goto LABEL_13;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_open_state_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_open_state_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&investigation_config->unlock_open_state_type);
      }
      if ( !PlayerBasicComp::isStateOpen(BasicComp, investigation_config->unlock_open_state_type) )
        v3 = 1;
      else
LABEL_13:
        v3 = 0;
      if ( !v3 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)investigation_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_level >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&investigation_config->unlock_level);
        }
        if ( !investigation_config->unlock_level )
          goto LABEL_24;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v4 = Player::getBasicComp(this->player_);
        Level = PlayerBasicComp::getLevel(v4);
        if ( *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)investigation_config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&investigation_config->unlock_level >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&investigation_config->unlock_level);
        }
        if ( Level < investigation_config->unlock_level )
          v6 = 1;
        else
LABEL_24:
          v6 = 0;
        if ( !v6 )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v17);
          p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.investigation_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(id);
          }
          pre_id = InvestigationExcelConfigMgr::getPreInvestigationId(p_investigation_config_mgr, *id);
          std::shared_ptr<Config>::~shared_ptr(&v17);
          if ( !pre_id
            || PlayerInvestigationComp::getInvestigationState(this, pre_id) == Investigation_State_REWARD_TAKEN )
          {
            if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(id);
            }
            PlayerInvestigationComp::addInvestigation(this, *id, is_notify);
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/investigation/player_investigation_comp.cpp",
              "checkOpenInvestigation",
              421);
            v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v18, (const char (*)[22])off_25F1F7A0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
            common::milog::MiLogStream::~MiLogStream(&v18);
          }
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::InvestigationConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 426: range 0000000016C943D8-0000000016C945A7
void __fastcall PlayerInvestigationComp::addInvestigation(
        PlayerInvestigationComp *const this,
        uint32_t investigation_id,
        bool is_notify,
        __int64 a4,
        Investigation *a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const std::vector<unsigned int> *InvestigationTargetVec; // rax
  std::shared_ptr<Config> v11; // [rsp+10h] [rbp-90h] BYREF
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v5 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 20 investigation_id:425 64 12 17 investigation:427";
  *(_QWORD *)(v5 + 16) = PlayerInvestigationComp::addInvestigation;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202177536;
  *(_DWORD *)(v5 + 48) = investigation_id;
  *(_DWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 68) = 0;
  *(_BYTE *)(v5 + 72) = 0;
  *(_DWORD *)(v5 + 64) = *(_DWORD *)(v5 + 48);
  std::map<unsigned int,Investigation>::emplace<unsigned int &,Investigation&>(
    &this->investigation_map_,
    (unsigned int *)(v5 + 48),
    (Investigation *)(v5 + 64),
    (unsigned int *)&this->investigation_map_,
    a5);
  if ( is_notify )
  {
    PlayerInvestigationComp::notifyInvestigation(this, *(_DWORD *)(v5 + 48));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
    InvestigationTargetVec = InvestigationExcelConfigMgr::getInvestigationTargetVec(
                               &v8->design_config.txt_config_mgr.investigation_config_mgr,
                               *(_DWORD *)(v5 + 48));
    PlayerInvestigationComp::notifyInvestigationTarget(this, InvestigationTargetVec);
    std::shared_ptr<Config>::~shared_ptr(&v11);
  }
  if ( v12 == (char *)v5 )
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
};

// Line 439: range 0000000016C945A8-0000000016C94D9B
__int64 __fastcall PlayerInvestigationComp::takeInvestigationReward(
        PlayerInvestigationComp *const this,
        uint32_t investigation_id,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  PlayerItemComp *p_reward_id; // rdi
  proto::Investigation::State state; // [rsp+18h] [rbp-E8h]
  unsigned int ret; // [rsp+1Ch] [rbp-E4h]
  const data::InvestigationConfig *investigation_config_ptr; // [rsp+20h] [rbp-E0h]
  Investigation *investigation_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v29; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-C0h] BYREF
  char v31[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 20 investigation_id:438 64 24 17 action_reason:475";
  *(_QWORD *)(v3 + 16) = PlayerInvestigationComp::takeInvestigationReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = investigation_id;
  state = PlayerInvestigationComp::getInvestigationState(this, *(_DWORD *)(v3 + 48));
  if ( state )
  {
    switch ( state )
    {
      case Investigation_State_IN_PROGRESS:
        result = 1502LL;
        break;
      case Investigation_State_REWARD_TAKEN:
        result = 1503LL;
        break;
      case Investigation_State_COMPLETE:
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        investigation_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationConfig(
                                     &v9->design_config.txt_config_mgr.investigation_config_mgr,
                                     *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v29);
        investigation_ptr = PlayerInvestigationComp::findInvestigation(this, *(_DWORD *)(v3 + 48));
        if ( investigation_config_ptr && investigation_ptr )
        {
          if ( *(char *)(((unsigned __int64)&investigation_config_ptr->is_reward_empty >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&investigation_config_ptr->is_reward_empty);
          if ( investigation_config_ptr->is_reward_empty )
          {
            common::milog::MiLogStream::create(
              &v30,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/investigation/player_investigation_comp.cpp",
              "takeInvestigationReward",
              467);
            v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v30,
                    (const char (*)[18])"investigation_id:");
            v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v12,
                    (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" has no reward");
            common::milog::MiLogStream::~MiLogStream(&v30);
            result = 0xFFFFFFFFLL;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&investigation_ptr->is_taken_reward >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)investigation_ptr + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&investigation_ptr->is_taken_reward >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load1(&investigation_ptr->is_taken_reward);
            }
            if ( investigation_ptr->is_taken_reward )
            {
              common::milog::MiLogStream::create(
                &v30,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/investigation/player_investigation_comp.cpp",
                "takeInvestigationReward",
                472);
              v14 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      &v30,
                      (const char (*)[18])"investigation_id:");
              v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v14,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])" reward taken");
              common::milog::MiLogStream::~MiLogStream(&v30);
              result = 0xFFFFFFFFLL;
            }
            else
            {
              ActionReason::ActionReason(
                (ActionReason *const)(v3 + 64),
                ACTION_REASON_INVESTIGATION_REWARD,
                ITEM_LIMIT_INVESTIGATION);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              ItemComp = Player::getItemComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&investigation_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)investigation_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&investigation_config_ptr->reward_id >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4(&investigation_config_ptr->reward_id);
              }
              ret = PlayerItemComp::checkGrantReward(
                      ItemComp,
                      investigation_config_ptr->reward_id,
                      (const ActionReason *)(v3 + 64));
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v30,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/investigation/player_investigation_comp.cpp",
                  "takeInvestigationReward",
                  479);
                v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v30,
                        (const char (*)[34])"checkGrantReward fail, reward_id:");
                v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v17,
                        &investigation_config_ptr->reward_id);
                v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                operator<<(v19, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v30);
                result = ret;
              }
              else
              {
                v20 = ((_BYTE)investigation_ptr + 8) & 7;
                v21 = (*(_BYTE *)(((unsigned __int64)&investigation_ptr->is_taken_reward >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&investigation_ptr->is_taken_reward >> 3) + 0x7FFF8000));
                if ( (_BYTE)v21 )
                  __asan_report_store1(&investigation_ptr->is_taken_reward, v20, v21);
                investigation_ptr->is_taken_reward = 1;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                p_reward_id = Player::getItemComp(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)&investigation_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)investigation_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&investigation_config_ptr->reward_id >> 3)
                                                                                          + 0x7FFF8000) )
                {
                  p_reward_id = (PlayerItemComp *)&investigation_config_ptr->reward_id;
                  __asan_report_load4(&investigation_config_ptr->reward_id);
                }
                PlayerItemComp::grantReward(
                  p_reward_id,
                  investigation_config_ptr->reward_id,
                  (const ActionReason *)(v3 + 64),
                  0LL);
                PlayerInvestigationComp::logTakeInvestigationReward(this, investigation_config_ptr);
                if ( is_notify )
                  PlayerInvestigationComp::notifyInvestigation(this, *(_DWORD *)(v3 + 48));
                PlayerInvestigationComp::checkOpenInvestigation(this, is_notify);
                result = 0LL;
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
            "./src/player/investigation/player_investigation_comp.cpp",
            "takeInvestigationReward",
            462);
          v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  &v30,
                  (const char (*)[18])"investigation_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v11,
            (const char (*)[29])" config or struct not exist.");
          common::milog::MiLogStream::~MiLogStream(&v30);
          result = 0xFFFFFFFFLL;
        }
        break;
      default:
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/investigation/player_investigation_comp.cpp",
          "takeInvestigationReward",
          455);
        v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v30,
               (const char (*)[18])"investigation_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          v8,
          (const char (*)[40])" try to take reward not in valid state.");
        common::milog::MiLogStream::~MiLogStream(&v30);
        result = 0xFFFFFFFFLL;
        break;
    }
  }
  else
  {
    result = 1501LL;
  }
  if ( v31 == (char *)v3 )
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

// Line 498: range 0000000016C94D9C-0000000016C95766
__int64 __fastcall PlayerInvestigationComp::takeInvestigationTargetReward(
        PlayerInvestigationComp *const this,
        uint32_t target_id,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  PlayerItemComp *v24; // rdi
  std::allocator<unsigned int> __a; // [rsp+2Fh] [rbp-121h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+30h] [rbp-120h] BYREF
  const data::InvestigationConfig *investigation_config_ptr; // [rsp+40h] [rbp-110h]
  Investigation *investigation_ptr; // [rsp+48h] [rbp-108h]
  std::shared_ptr<Config> v31; // [rsp+50h] [rbp-100h] BYREF
  std::vector<unsigned int> target_id_vec; // [rsp+60h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 9 state:500 48 4 13 target_id:497 64 24 17 action_reason:519";
  *(_QWORD *)(v3 + 16) = PlayerInvestigationComp::takeInvestigationTargetReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = target_id;
  *(_DWORD *)(v3 + 32) = PlayerInvestigationComp::getInvestigationTargetState(this, *(_DWORD *)(v3 + 48));
  if ( *(_DWORD *)(v3 + 32) != 2
    || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
         &this->reward_taken_target_id_set_,
         (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/investigation/player_investigation_comp.cpp",
      "takeInvestigationTargetReward",
      503);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v33, (const char (*)[11])"target_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" state:");
    v10 = common::milog::MiLogStream::operator<<<proto::InvestigationTarget_State,(proto::InvestigationTarget_State*)0>(
            v9,
            (const proto::InvestigationTarget_State *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v10,
      (const char (*)[40])" try to take reward not in valid state.");
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 1504LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    __l._M_len = (std::initializer_list<unsigned int>::size_type)data::InvestigationExcelConfigMgrBase::findInvestigationTargetConfig(
                                                                   &v12->design_config.txt_config_mgr.investigation_config_mgr,
                                                                   *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( __l._M_len )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.investigation_config_mgr;
      if ( *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(__l._M_len) + 108) & 7) + 3) >= *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__l._M_len + 108);
      }
      investigation_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationConfig(
                                   p_investigation_config_mgr,
                                   *(_DWORD *)(__l._M_len + 108));
      std::shared_ptr<Config>::~shared_ptr(&v31);
      if ( *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) != 0
        && (char)(((LOBYTE(__l._M_len) + 108) & 7) + 3) >= *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__l._M_len + 108);
      }
      investigation_ptr = PlayerInvestigationComp::findInvestigation(this, *(_DWORD *)(__l._M_len + 108));
      if ( investigation_ptr && investigation_config_ptr )
      {
        ActionReason::ActionReason(
          (ActionReason *const)(v3 + 64),
          ACTION_REASON_INVESTIGATION_TARGET_REWARD,
          ITEM_LIMIT_INVESTIGATION);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((__l._M_len + 112) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((__l._M_len + 112) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(__l._M_len + 112);
        }
        HIDWORD(__l._M_array) = PlayerItemComp::checkGrantReward(
                                  ItemComp,
                                  *(_DWORD *)(__l._M_len + 112),
                                  (const ActionReason *)(v3 + 64));
        if ( HIDWORD(__l._M_array) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/investigation/player_investigation_comp.cpp",
            "takeInvestigationTargetReward",
            523);
          v21 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v33,
                  (const char (*)[34])"checkGrantReward fail, reward_id:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(__l._M_len + 112));
          v23 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v22, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v23, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v33);
          result = HIDWORD(__l._M_array);
        }
        else
        {
          std::unordered_set<unsigned int>::erase(
            &this->finished_target_id_set_,
            (const std::unordered_set<unsigned int>::key_type *)(v3 + 48));
          std::unordered_set<unsigned int>::insert(
            &this->reward_taken_target_id_set_,
            (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&investigation_ptr->progress >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)investigation_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&investigation_ptr->progress >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(&investigation_ptr->progress);
          }
          ++investigation_ptr->progress;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v24 = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((__l._M_len + 112) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((__l._M_len + 112) >> 3) + 0x7FFF8000) <= 3 )
          {
            v24 = (PlayerItemComp *)(__l._M_len + 112);
            __asan_report_load4(__l._M_len + 112);
          }
          PlayerItemComp::grantReward(v24, *(_DWORD *)(__l._M_len + 112), (const ActionReason *)(v3 + 64), 0LL);
          PlayerInvestigationComp::logTakeInvestigationTargetReward(
            this,
            (const data::InvestigationTargetConfig *)__l._M_len,
            investigation_config_ptr,
            investigation_ptr);
          if ( Investigation::getState(investigation_ptr) == Investigation_State_COMPLETE )
          {
            if ( *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(__l._M_len) + 108) & 7) + 3) >= *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(__l._M_len + 108);
            }
            PlayerInvestigationComp::logFinishInvestigation(this, *(_DWORD *)(__l._M_len + 108), 0);
          }
          if ( is_notify )
          {
            if ( *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(__l._M_len) + 108) & 7) + 3) >= *(_BYTE *)(((__l._M_len + 108) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(__l._M_len + 108);
            }
            PlayerInvestigationComp::notifyInvestigation(this, *(_DWORD *)(__l._M_len + 108));
            LODWORD(__l._M_array) = *(_DWORD *)(v3 + 48);
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(
              &target_id_vec,
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
              &__a);
            PlayerInvestigationComp::notifyInvestigationTarget(this, &target_id_vec);
            std::vector<unsigned int>::~vector(&target_id_vec);
            std::allocator<unsigned int>::~allocator(&__a);
          }
          result = 0LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/investigation/player_investigation_comp.cpp",
          "takeInvestigationTargetReward",
          516);
        v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v33, (const char (*)[11])"target_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v17,
                (const char (*)[19])" investigation id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(__l._M_len + 108));
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v19,
          (const char (*)[25])"target config not exist.");
        common::milog::MiLogStream::~MiLogStream(&v33);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/investigation/player_investigation_comp.cpp",
        "takeInvestigationTargetReward",
        509);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v33, (const char (*)[11])"target_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        v14,
        (const char (*)[40])" investigation target config not exist.");
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v34 == (char *)v3 )
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

// Line 547: range 0000000016C95768-0000000016C95CA5
proto::InvestigationMonster::LockState __cdecl PlayerInvestigationComp::getInvestigationMonsterLockState(
        const PlayerInvestigationComp *const this,
        const data::InvestigationMonsterConfig *monster_config)
{
  proto::InvestigationMonster::LockState v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t ActivityComp; // ecx
  std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned __int64 v10; // rdx
  char v11; // al
  int v12; // r15d
  unsigned int *v13; // rax
  uint32_t *v14; // rdx
  PlayerQuestComp *QuestComp; // rax
  proto::InvestigationMonster::LockState result; // eax
  uint32_t now; // [rsp+28h] [rbp-98h]
  uint32_t unlock_parent_quest_id; // [rsp+2Ch] [rbp-94h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-90h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-88h] BYREF
  const data::NewActivityScheduleExcelConfig *activity_schedule_config_ptr; // [rsp+40h] [rbp-80h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-78h]
  char v23[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:566";
  *(_QWORD *)(v3 + 16) = PlayerInvestigationComp::getInvestigationMonsterLockState;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( std::vector<unsigned int>::empty(&monster_config->unlock_wq_parent_quest_id_list) )
  {
    v2 = InvestigationMonster_LockState_LOCK_NONE;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(((unsigned __int64)&monster_config->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_config->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_config->active_unlock_quest_activity_id);
  }
  if ( !monster_config->active_unlock_quest_activity_id )
    goto LABEL_37;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&monster_config->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_config->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_config->active_unlock_quest_activity_id);
  }
  activity_schedule_config_ptr = NewActivityExcelConfigMgr::findNowAndFutureScheduleConfig(
                                   p_new_activity_config_mgr,
                                   monster_config->active_unlock_quest_activity_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  if ( !activity_schedule_config_ptr )
  {
    v2 = InvestigationMonster_LockState_LOCK_NONE;
    goto LABEL_47;
  }
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&activity_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&activity_schedule_config_ptr->begin_time);
  }
  if ( now < activity_schedule_config_ptr->begin_time )
    goto LABEL_19;
  if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)activity_schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_schedule_config_ptr->end_time >> 3)
                                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&activity_schedule_config_ptr->end_time);
  }
  if ( now >= activity_schedule_config_ptr->end_time )
  {
LABEL_19:
    v2 = InvestigationMonster_LockState_LOCK_NONE;
    goto LABEL_47;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ActivityComp = (unsigned int)Player::getActivityComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&monster_config->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&monster_config->active_unlock_quest_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&monster_config->active_unlock_quest_activity_id);
  }
  PlayerActivityComp::findActivity<SummerTimeActivity>((PlayerActivityComp *const)(v3 + 32), ActivityComp);
  if ( std::operator==<SummerTimeActivity>(0LL, (const std::shared_ptr<SummerTimeActivity> *)(v3 + 32)) )
    goto LABEL_31;
  v8 = std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( BaseActivity::isFinished(v8) )
    goto LABEL_31;
  v9 = std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = (unsigned __int64)(v9->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<SummerTimeActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v10)(v9) )
LABEL_31:
    v11 = 1;
  else
    v11 = 0;
  if ( v11 )
  {
    v2 = InvestigationMonster_LockState_LOCK_NONE;
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  std::shared_ptr<SummerTimeActivity>::~shared_ptr((std::shared_ptr<SummerTimeActivity> *const)(v3 + 32));
  if ( v12 == 1 )
  {
LABEL_37:
    __for_range = &monster_config->unlock_wq_parent_quest_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&monster_config->unlock_wq_parent_quest_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&monster_config->unlock_wq_parent_quest_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v13 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      unlock_parent_quest_id = *v14;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      QuestComp = Player::getQuestComp(this->player_);
      if ( !PlayerQuestComp::isParentQuestOnceFinished(QuestComp, unlock_parent_quest_id) )
      {
        v2 = InvestigationMonster_LockState_LOCK_QUEST;
        goto LABEL_47;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v2 = InvestigationMonster_LockState_LOCK_NONE;
  }
LABEL_47:
  result = v2;
  if ( v23 == (char *)v3 )
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

// Line 583: range 0000000016C95CA6-0000000016C97967
int32_t __cdecl PlayerInvestigationComp::getInvestigationMonsterStatus(
        const PlayerInvestigationComp *const this,
        const data::InvestigationMonsterConfig *config,
        InvestigationMonsterStatus *result)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerHomeComp *HomeComp; // rax
  char v7; // al
  common::milog::MiLogStream *v8; // rcx
  int32_t v9; // r14d
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Scene *v17; // rax
  SceneBlockGroupComp *BlockGroupComp; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __m128i dist_low; // xmm0
  Scene *v23; // r14
  uint32_t Uid; // eax
  Scene *v25; // rax
  SceneAreaComp *AreaComp; // rcx
  Scene *v27; // rax
  SceneBlockGroupComp *v28; // rcx
  RefreshPolicyExcelConfigMgr *p_refresh_policy_config_mgr; // rcx
  Scene *v31; // rax
  SceneBlockGroupComp *v32; // rdi
  std::string *p_exist_group_variable; // rcx
  unsigned int *v34; // rax
  uint32_t *v35; // rdx
  Scene *v36; // rax
  SceneBlockGroupComp *v37; // rcx
  bool isGroupMonsterAlive; // al
  unsigned __int64 p_pos; // rax
  __int64 v40; // rsi
  PlayerSceneComp *SceneComp; // r15
  uint32_t v42; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  uint32_t SceneId; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  __int64 v46; // rdx
  Scene *v47; // rax
  SceneBlockGroupComp *v48; // rdi
  uint32_t config_id; // ecx
  google::protobuf::uint32 GroupMonsterLevel; // eax
  proto::Vector *v51; // rax
  ConstValueExcelConfigMgr *p_const_value_config_mgr; // rcx
  bool isWorldWeeklyBossGroup; // r14
  PlayerSceneComp *v54; // r14
  proto::WeeklyBossResinDiscountInfo *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rcx
  int32_t v61; // eax
  bool is_has_result; // [rsp+29h] [rbp-277h]
  bool is_group_alive; // [rsp+2Ah] [rbp-276h]
  bool is_need_check_monster_alive; // [rsp+2Bh] [rbp-275h]
  char is_current_target_monster_better; // [rsp+2Ch] [rbp-274h]
  bool is_area_locked; // [rsp+2Dh] [rbp-273h]
  bool is_target_scene; // [rsp+2Eh] [rbp-272h]
  bool is_alive; // [rsp+2Fh] [rbp-271h]
  google::protobuf::uint32 max_boss_chest_num; // [rsp+30h] [rbp-270h]
  uint32_t boss_chest_num; // [rsp+34h] [rbp-26Ch]
  google::protobuf::uint32 resin; // [rsp+38h] [rbp-268h]
  uint32_t next_boss_chest_refresh_time; // [rsp+3Ch] [rbp-264h]
  uint32_t now; // [rsp+40h] [rbp-260h]
  uint32_t last_refresh_time; // [rsp+44h] [rbp-25Ch]
  uint32_t monster_config_id; // [rsp+48h] [rbp-258h]
  float dist; // [rsp+4Ch] [rbp-254h]
  uint32_t boss_chest_config_id; // [rsp+50h] [rbp-250h]
  uint32_t time_offset; // [rsp+54h] [rbp-24Ch]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+58h] [rbp-248h] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+60h] [rbp-240h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+68h] [rbp-238h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+70h] [rbp-230h] BYREF
  const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>> *investigation_monster_config_ids_map; // [rsp+78h] [rbp-228h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+80h] [rbp-220h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v88; // [rsp+88h] [rbp-218h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *group_id; // [rsp+90h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *monster_config_id_vec; // [rsp+98h] [rbp-208h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+A0h] [rbp-200h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+A8h] [rbp-1F8h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+B0h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *next_refresh_time; // [rsp+B8h] [rbp-1E8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *refresh_interval; // [rsp+C0h] [rbp-1E0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+C8h] [rbp-1D8h]
  const MonsterScriptConfig *monster_script_config_ptr; // [rsp+D0h] [rbp-1D0h]
  const GadgetScriptConfig *chest_script_config_ptr; // [rsp+D8h] [rbp-1C8h]
  proto::InvestigationMonster *proto; // [rsp+E0h] [rbp-1C0h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+E8h] [rbp-1B8h] BYREF
  std::shared_ptr<Config> v101; // [rsp+F0h] [rbp-1B0h] BYREF
  std::shared_ptr<PlayerWorld> __r; // [rsp+100h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v103; // [rsp+110h] [rbp-190h] BYREF
  common::milog::MiLogStream v104; // [rsp+130h] [rbp-170h] BYREF
  char v105[336]; // [rsp+150h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v105;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 19 target_scene_id:602 48 4 12 scene_id:617 64 8 37 investigation_monster_groups_iter:612"
                        " 96 12 14 player_pos:651 128 12 14 player_rot:651 160 12 15 monster_pos:687 192 16 20 player_wor"
                        "ld_ptr:584 224 16 20 target_scene_ptr:596 256 16 13 scene_ptr:618";
  *(_QWORD *)(v3 + 16) = PlayerInvestigationComp::getInvestigationMonsterStatus;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862724] = -219020288;
  v5[536862725] = -219020288;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 192));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 192)) )
    goto LABEL_10;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeComp = Player::getHomeComp(this->player_);
  if ( PlayerHomeComp::isInHomeWorld(HomeComp) )
LABEL_10:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)&__r);
    std::shared_ptr<PlayerWorld>::operator=((std::shared_ptr<PlayerWorld> *const)(v3 + 192), &__r);
    std::shared_ptr<PlayerWorld>::~shared_ptr(&__r);
  }
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v104,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/investigation/player_investigation_comp.cpp",
      "getInvestigationMonsterStatus",
      592);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v104,
           (const char (*)[23])"world is null! player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v104);
    v9 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene<PlayerWorldScene>((PlayerSceneComp *const)(v3 + 224));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 224)) )
    {
      std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
      PlayerWorld::getMainWorldScene((PlayerWorld *const)(v3 + 256));
      std::shared_ptr<PlayerWorldScene>::operator=(
        (std::shared_ptr<PlayerWorldScene> *const)(v3 + 224),
        (std::shared_ptr<PlayerWorldScene> *)(v3 + 256));
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 256));
    }
    *(_DWORD *)(v3 + 32) = 0;
    if ( std::operator!=<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 224)) )
    {
      v10 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 224));
      *(_DWORD *)(v3 + 32) = Scene::getSceneId((const Scene *const)v10);
    }
    is_has_result = 0;
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__r);
    investigation_monster_config_ids_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.investigation_config_mgr.investigation_monster_config_ids_map;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
    *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::find(investigation_monster_config_ids_map, &config->id);
    __in = (std::pair<unsigned int,unsigned int>)std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::vector<unsigned int>>>::end(investigation_monster_config_ids_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false> *)&__in) )
    {
      __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,std::vector<unsigned int>> >,false,false> *const)(v3 + 64))->second;
      __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                &__for_begin,
                &__for_end) )
      {
        v88 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin);
        group_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v88);
        monster_config_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v88);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&__r);
        p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.lua_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(group_id);
        }
        *(_DWORD *)(v3 + 48) = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, *group_id);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
        v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v13 = (unsigned __int64)(v12->_vptr_World + 10);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v13)(
          v3 + 256,
          v12,
          *(unsigned int *)(v3 + 48));
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 256)) )
        {
          common::milog::MiLogStream::create(
            &v104,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/investigation/player_investigation_comp.cpp",
            "getInvestigationMonsterStatus",
            621);
          v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v104,
                  (const char (*)[25])"getScene fail, scene_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v3 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, group_id);
          common::milog::MiLogStream::~MiLogStream(&v104);
        }
        else
        {
          v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
          BlockGroupComp = Scene::getBlockGroupComp(v17);
          if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(group_id);
          }
          if ( !SceneBlockGroupComp::isGroupReplaced(BlockGroupComp, *group_id) )
          {
            v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            scene_script_config_ptr = Scene::getScriptConfig(v19);
            if ( scene_script_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4(group_id);
              }
              group_script_config_ptr = SceneScriptConfig::findGroupScriptConfig(scene_script_config_ptr, *group_id);
              if ( group_script_config_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_load4(group_id);
                }
                group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_script_config_ptr, *group_id);
                if ( group_info_config_ptr )
                {
                  Vector3::Vector3((Vector3 *const)(v3 + 96), 0.0, 0.0, 0.0);
                  dist_low = 0LL;
                  Vector3::Vector3((Vector3 *const)(v3 + 128), 0.0, 0.0, 0.0);
                  v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    *(double *)dist_low.m128i_i64 = __asan_report_load8();
                  Uid = Player::getUid(this->player_);
                  Scene::getPlayerLocation(v23, Uid, (Vector3 *)(v3 + 96), (Vector3 *)(v3 + 128));
                  v25 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  AreaComp = Scene::getAreaComp(v25);
                  if ( *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->area_id >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)group_script_config_ptr - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&group_script_config_ptr->area_id >> 3)
                                                                                            + 0x7FFF8000) )
                  {
                    *(double *)dist_low.m128i_i64 = __asan_report_load4(&group_script_config_ptr->area_id);
                  }
                  is_area_locked = !SceneAreaComp::isAreaUnlocked(AreaComp, group_script_config_ptr->area_id);
                  is_target_scene = *(_DWORD *)(v3 + 48) == *(_DWORD *)(v3 + 32);
                  v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                  v28 = Scene::getBlockGroupComp(v27);
                  if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    *(double *)dist_low.m128i_i64 = __asan_report_load4(group_id);
                  }
                  last_refresh_time = SceneBlockGroupComp::getGroupLastRefreshTime(v28, *group_id);
                  ServiceBox::findService<GameserverService>();
                  GameserverService::getConfig((GameserverService *const)&__r);
                  p_refresh_policy_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.refresh_policy_config_mgr;
                  if ( *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->refresh_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&group_info_config_ptr->refresh_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    *(double *)dist_low.m128i_i64 = __asan_report_load4(&group_info_config_ptr->refresh_id);
                  }
                  __in = RefreshPolicyExcelConfigMgr::getNextRefreshTimeAndRefreshInterval(
                           p_refresh_policy_config_mgr,
                           group_info_config_ptr->refresh_id,
                           last_refresh_time);
                  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
                  next_refresh_time = std::get<0ul,unsigned int,unsigned int>(&__in);
                  refresh_interval = std::get<1ul,unsigned int,unsigned int>(&__in);
                  is_group_alive = 0;
                  is_need_check_monster_alive = 0;
                  if ( *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)next_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3)
                                                                                        + 0x7FFF8000) )
                  {
                    *(double *)dist_low.m128i_i64 = __asan_report_load4(next_refresh_time);
                  }
                  if ( now <= *next_refresh_time )
                  {
                    if ( (unsigned __int8)std::string::empty(&config->exist_group_variable) != 1
                      && common::tools::MiscUtils::isContains<std::unordered_map<std::string,VariableScriptConfig> const,std::string>(
                           &group_script_config_ptr->variable_map,
                           &config->exist_group_variable) )
                    {
                      v31 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                      v32 = Scene::getBlockGroupComp(v31);
                      p_exist_group_variable = &config->exist_group_variable;
                      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                                   + 0x7FFF8000) )
                      {
                        v32 = (SceneBlockGroupComp *)group_id;
                        *(double *)dist_low.m128i_i64 = __asan_report_load4(group_id);
                      }
                      is_group_alive = SceneBlockGroupComp::getGroupVariableValue(
                                         v32,
                                         *group_id,
                                         p_exist_group_variable) != 0;
                    }
                    else
                    {
                      is_need_check_monster_alive = 1;
                    }
                  }
                  else
                  {
                    is_group_alive = 1;
                  }
                  __for_range_0 = monster_config_id_vec;
                  __for_begin_0._M_current = std::vector<unsigned int>::begin(monster_config_id_vec)._M_current;
                  __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
                  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                            &__for_begin_0,
                            &__for_end_0) )
                  {
                    v34 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
                    v35 = v34;
                    if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                    {
                      *(double *)dist_low.m128i_i64 = __asan_report_load4(v34);
                    }
                    monster_config_id = *v35;
                    monster_script_config_ptr = GroupScriptConfig::findMonsterConfig(group_script_config_ptr, *v35);
                    if ( monster_script_config_ptr )
                    {
                      if ( is_need_check_monster_alive )
                      {
                        v36 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                        v37 = Scene::getBlockGroupComp(v36);
                        if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                                     + 0x7FFF8000) )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(group_id);
                        }
                        isGroupMonsterAlive = SceneBlockGroupComp::isGroupMonsterAlive(
                                                v37,
                                                *group_id,
                                                monster_config_id);
                      }
                      else
                      {
                        isGroupMonsterAlive = is_group_alive;
                      }
                      is_alive = isGroupMonsterAlive;
                      if ( *(char *)(((unsigned __int64)&config->is_use_group_position >> 3) + 0x7FFF8000) < 0 )
                        __asan_report_load1(&config->is_use_group_position);
                      if ( config->is_use_group_position )
                        p_pos = (unsigned __int64)&group_info_config_ptr->pos;
                      else
                        p_pos = (unsigned __int64)&monster_script_config_ptr->pos;
                      if ( (char)(p_pos & 7) >= *(_BYTE *)((p_pos >> 3) + 0x7FFF8000)
                        && *(_BYTE *)((p_pos >> 3) + 0x7FFF8000) != 0
                        || *(_BYTE *)(((p_pos + 11) >> 3) + 0x7FFF8000) != 0
                        && (char)((p_pos + 11) & 7) >= *(_BYTE *)(((p_pos + 11) >> 3) + 0x7FFF8000) )
                      {
                        p_pos = __asan_report_load_n(p_pos, 12LL);
                      }
                      *(_QWORD *)(v3 + 160) = *(_QWORD *)p_pos;
                      *(_DWORD *)(v3 + 168) = *(_DWORD *)(p_pos + 8);
                      *(float *)dist_low.m128i_i32 = getPlaneDistance(
                                                       (const Vector3 *)(v3 + 96),
                                                       (const Vector3 *)(v3 + 160));
                      dist = COERCE_FLOAT(_mm_cvtsi128_si32(dist_low));
                      is_current_target_monster_better = 0;
                      if ( !is_has_result )
                      {
                        is_current_target_monster_better = 1;
                      }
                      else if ( is_alive == proto::InvestigationMonster::is_alive(&result->proto_investigation_monster) )
                      {
                        if ( is_area_locked == proto::InvestigationMonster::is_area_locked(&result->proto_investigation_monster) )
                        {
                          if ( *(char *)(((unsigned __int64)&result->is_target_scene >> 3) + 0x7FFF8000) < 0 )
                            __asan_report_load1(&result->is_target_scene);
                          if ( is_target_scene == result->is_target_scene )
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&result->dist >> 3) + 0x7FFF8000) != 0
                              && (char)((((_BYTE)result + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->dist >> 3)
                                                                                     + 0x7FFF8000) )
                            {
                              __asan_report_load4(&result->dist);
                            }
                            dist_low = (__m128i)LODWORD(result->dist);
                            if ( *(float *)dist_low.m128i_i32 > dist )
                              is_current_target_monster_better = 1;
                          }
                          else
                          {
                            is_current_target_monster_better = is_target_scene;
                          }
                        }
                        else
                        {
                          is_current_target_monster_better = !is_area_locked;
                        }
                      }
                      else
                      {
                        is_current_target_monster_better = is_alive;
                      }
                      if ( is_current_target_monster_better == 1 )
                      {
                        max_boss_chest_num = 0;
                        boss_chest_num = 0;
                        resin = 0;
                        next_boss_chest_refresh_time = 0;
                        v40 = (((_BYTE)monster_script_config_ptr - 84) & 7u) + 3;
                        if ( *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->chest_config_id >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)monster_script_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->chest_config_id >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_load4(&monster_script_config_ptr->chest_config_id);
                        }
                        boss_chest_config_id = monster_script_config_ptr->chest_config_id;
                        if ( boss_chest_config_id )
                        {
                          v40 = boss_chest_config_id;
                          chest_script_config_ptr = GroupScriptConfig::findGadgetConfig(
                                                      group_script_config_ptr,
                                                      boss_chest_config_id);
                          if ( chest_script_config_ptr )
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&chest_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&chest_script_config_ptr->boss_chest >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(&chest_script_config_ptr->boss_chest);
                            }
                            if ( chest_script_config_ptr->boss_chest.monster_config_id )
                            {
                              if ( *(_BYTE *)(((unsigned __int64)&chest_script_config_ptr->boss_chest.take_num >> 3)
                                            + 0x7FFF8000) != 0
                                && (char)((((_BYTE)chest_script_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chest_script_config_ptr->boss_chest.take_num >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_load4(&chest_script_config_ptr->boss_chest.take_num);
                              }
                              max_boss_chest_num = chest_script_config_ptr->boss_chest.take_num;
                              if ( *(_BYTE *)(((unsigned __int64)&chest_script_config_ptr->boss_chest.resin >> 3)
                                            + 0x7FFF8000) != 0
                                && (char)((((_BYTE)chest_script_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chest_script_config_ptr->boss_chest.resin >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_load4(&chest_script_config_ptr->boss_chest.resin);
                              }
                              resin = chest_script_config_ptr->boss_chest.resin;
                              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                                __asan_report_load8();
                              SceneComp = Player::getSceneComp(this->player_);
                              if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                                && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                                           + 0x7FFF8000) )
                              {
                                __asan_report_load4(group_id);
                              }
                              v42 = *group_id;
                              v43 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                              SceneId = Scene::getSceneId(v43);
                              v40 = SceneId;
                              boss_chest_num = PlayerSceneComp::refreshAndGetBossChestTakeNum(
                                                 SceneComp,
                                                 SceneId,
                                                 v42,
                                                 boss_chest_config_id);
                              if ( boss_chest_num == max_boss_chest_num )
                              {
                                ServiceBox::findService<GameserverService>();
                                GameserverService::getConfig((GameserverService *const)&v101);
                                v45 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v101);
                                time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v45->design_config.txt_config_mgr.const_value_config_mgr);
                                std::shared_ptr<Config>::~shared_ptr(&v101);
                                v40 = time_offset;
                                next_boss_chest_refresh_time = common::tools::TimeUtils::getWeekTime(now, time_offset)
                                                             + 604800;
                              }
                            }
                          }
                        }
                        if ( *(char *)(((unsigned __int64)&result->is_target_scene >> 3) + 0x7FFF8000) < 0 )
                          __asan_report_store1(&result->is_target_scene, v40, &result->is_target_scene);
                        result->is_target_scene = is_target_scene;
                        v46 = (*(_BYTE *)(((unsigned __int64)&result->dist >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)result + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&result->dist >> 3) + 0x7FFF8000));
                        if ( (_BYTE)v46 )
                          __asan_report_store4(&result->dist, (((_BYTE)result + 100) & 7u) + 3, v46);
                        dist_low = (__m128i)LODWORD(dist);
                        result->dist = dist;
                        proto = &result->proto_investigation_monster;
                        if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(&config->id);
                        }
                        proto::InvestigationMonster::set_id(proto, config->id);
                        if ( *(_BYTE *)(((unsigned __int64)&config->city_id >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->city_id >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(&config->city_id);
                        }
                        proto::InvestigationMonster::set_city_id(proto, config->city_id);
                        v47 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
                        v48 = Scene::getBlockGroupComp(v47);
                        if ( *(_BYTE *)(((unsigned __int64)monster_script_config_ptr >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)monster_script_config_ptr >> 3) + 0x7FFF8000) <= 3 )
                        {
                          v48 = (SceneBlockGroupComp *)monster_script_config_ptr;
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(monster_script_config_ptr);
                        }
                        config_id = monster_script_config_ptr->config_id;
                        if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                                     + 0x7FFF8000) )
                        {
                          v48 = (SceneBlockGroupComp *)group_id;
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(group_id);
                        }
                        GroupMonsterLevel = SceneBlockGroupComp::getGroupMonsterLevel(v48, *group_id, config_id);
                        proto::InvestigationMonster::set_level(proto, GroupMonsterLevel);
                        proto::InvestigationMonster::set_is_alive(proto, is_alive);
                        if ( *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)next_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3)
                                                                                              + 0x7FFF8000) )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(next_refresh_time);
                        }
                        proto::InvestigationMonster::set_next_refresh_time(proto, *next_refresh_time);
                        if ( *(_BYTE *)(((unsigned __int64)refresh_interval >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)refresh_interval & 7) + 3) >= *(_BYTE *)(((unsigned __int64)refresh_interval >> 3)
                                                                                             + 0x7FFF8000) )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(refresh_interval);
                        }
                        proto::InvestigationMonster::set_refresh_interval(proto, *refresh_interval);
                        Vector3::operator proto::Vector((proto::Vector *)&v104, (const Vector3 *const)(v3 + 160));
                        v51 = proto::InvestigationMonster::mutable_pos(proto);
                        proto::Vector::operator=(v51, (proto::Vector *)&v104);
                        proto::Vector::~Vector((proto::Vector *const)&v104);
                        proto::InvestigationMonster::set_max_boss_chest_num(proto, max_boss_chest_num);
                        proto::InvestigationMonster::set_boss_chest_num(proto, boss_chest_num);
                        proto::InvestigationMonster::set_resin(proto, resin);
                        proto::InvestigationMonster::set_is_area_locked(proto, is_area_locked);
                        proto::InvestigationMonster::set_next_boss_chest_refresh_time(
                          proto,
                          next_boss_chest_refresh_time);
                        proto::InvestigationMonster::set_scene_id(proto, *(_DWORD *)(v3 + 48));
                        if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                                     + 0x7FFF8000) )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(group_id);
                        }
                        proto::InvestigationMonster::set_group_id(proto, *group_id);
                        if ( *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->monster_id >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)monster_script_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_script_config_ptr->monster_id >> 3)
                                                                                                  + 0x7FFF8000) )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(&monster_script_config_ptr->monster_id);
                        }
                        proto::InvestigationMonster::set_monster_id(proto, monster_script_config_ptr->monster_id);
                        ServiceBox::findService<GameserverService>();
                        GameserverService::getConfig((GameserverService *const)&__r);
                        p_const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.const_value_config_mgr;
                        if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                                     + 0x7FFF8000) )
                        {
                          *(double *)dist_low.m128i_i64 = __asan_report_load4(group_id);
                        }
                        isWorldWeeklyBossGroup = ConstValueExcelConfigMgr::isWorldWeeklyBossGroup(
                                                   p_const_value_config_mgr,
                                                   *(_DWORD *)(v3 + 48),
                                                   *group_id);
                        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
                        if ( isWorldWeeklyBossGroup )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                            *(double *)dist_low.m128i_i64 = __asan_report_load8();
                          v54 = Player::getSceneComp(this->player_);
                          v55 = proto::InvestigationMonster::mutable_weekly_boss_resin_discount_info(proto);
                          PlayerSceneComp::fillWeeklyBossResinDiscountInfo(v54, resin, v55);
                        }
                        is_has_result = 1;
                      }
                    }
                    else
                    {
                      common::milog::MiLogStream::create(
                        &v103,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/player/investigation/player_investigation_comp.cpp",
                        "getInvestigationMonsterStatus",
                        682);
                      if ( *(_BYTE *)(((unsigned __int64)group_id >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)group_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_id >> 3)
                                                                                   + 0x7FFF8000) )
                      {
                        *(double *)dist_low.m128i_i64 = __asan_report_load4(group_id);
                      }
                      common::milog::MiLogStream::operator()(&v103, off_25F1FF20, *group_id, monster_config_id);
                      common::milog::MiLogStream::~MiLogStream(&v103);
                    }
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v104,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/investigation/player_investigation_comp.cpp",
                    "getInvestigationMonsterStatus",
                    647);
                  v21 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                          &v104,
                          (const char (*)[47])off_25F1FEC0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, group_id);
                  common::milog::MiLogStream::~MiLogStream(&v104);
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v104,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/investigation/player_investigation_comp.cpp",
                  "getInvestigationMonsterStatus",
                  640);
                v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        &v104,
                        (const char (*)[42])off_25F1FE60);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, group_id);
                common::milog::MiLogStream::~MiLogStream(&v104);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v104,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/investigation/player_investigation_comp.cpp",
                "getInvestigationMonsterStatus",
                633);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v104, (const char (*)[31])off_25F1FE20);
              common::milog::MiLogStream::~MiLogStream(&v104);
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 256));
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin);
      }
    }
    if ( !is_has_result )
    {
      common::milog::MiLogStream::create(
        &v104,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/investigation/player_investigation_comp.cpp",
        "getInvestigationMonsterStatus",
        780);
      v56 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v104,
              (const char (*)[48])"no monster found for investigation_monster_iid:");
      v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, &config->id);
      v58 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v57,
              (const char (*)[18])" target_scene_id:");
      v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v3 + 32));
      v60 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v59, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v60, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v104);
      v9 = -1;
    }
    else
    {
      v9 = 0;
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 224));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 192));
  v61 = v9;
  if ( v105 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return v61;
};

// Line 788: range 0000000016C97968-0000000016C97BB6
int32_t __fastcall PlayerInvestigationComp::getStatusByInvestigationMonsterId(
        const PlayerInvestigationComp *const this,
        uint32_t investigation_monster_id,
        proto::InvestigationMonster *proto_investigation_monster)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t result; // eax
  const data::InvestigationMonsterConfig *investigation_monster_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 28 investigation_monster_id:787";
  *(_QWORD *)(v3 + 16) = PlayerInvestigationComp::getStatusByInvestigationMonsterId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = investigation_monster_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  investigation_monster_config_ptr = data::InvestigationExcelConfigMgrBase::findInvestigationMonsterConfig(
                                       &v6->design_config.txt_config_mgr.investigation_config_mgr,
                                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( investigation_monster_config_ptr )
  {
    result = PlayerInvestigationComp::getStatusByInvestigationMonsterConfig(
               this,
               investigation_monster_config_ptr,
               proto_investigation_monster,
               0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/investigation/player_investigation_comp.cpp",
      "getStatusByInvestigationMonsterId",
      792);
    v7 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
           &v14,
           (const char (*)[63])"findInvestigationMonsterConfig fail, investigation_monster_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
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
  return result;
};

// Line 799: range 0000000016C97BB8-0000000016C9822B
int32_t __cdecl PlayerInvestigationComp::getStatusByInvestigationMonsterConfig(
        const PlayerInvestigationComp *const this,
        const data::InvestigationMonsterConfig *config,
        proto::InvestigationMonster *proto_investigation_monster,
        bool is_for_mark)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerQuestComp *QuestComp; // rcx
  char v8; // al
  uint32_t id; // ecx
  int32_t v10; // r14d
  uint32_t v11; // ecx
  data::InvestigationMonsterMapMarkCreateType map_mark_create_type; // eax
  data::InvestigationMonsterMapMarkCreateConditionType condition_type; // eax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  int32_t result; // eax
  proto::InvestigationMonster_LockState state; // [rsp+2Ch] [rbp-F4h]
  char v20[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 104 17 select_status:847";
  *(_QWORD *)(v4 + 16) = PlayerInvestigationComp::getStatusByInvestigationMonsterConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  state = PlayerInvestigationComp::getInvestigationMonsterLockState(this, config);
  if ( state )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&config->unlock_parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_parent_quest_id >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&config->unlock_parent_quest_id);
  }
  if ( !config->unlock_parent_quest_id )
    goto LABEL_14;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  QuestComp = Player::getQuestComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&config->unlock_parent_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->unlock_parent_quest_id >> 3)
                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&config->unlock_parent_quest_id);
  }
  if ( !PlayerQuestComp::isParentQuestOnceFinished(QuestComp, config->unlock_parent_quest_id) )
    v8 = 1;
  else
LABEL_14:
    v8 = 0;
  if ( v8 )
    state = InvestigationMonster_LockState_LOCK_QUEST;
  if ( state )
  {
    if ( !is_for_mark )
      goto LABEL_25;
    if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->id);
    }
    id = config->id;
    if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->current_tracking_info_);
    }
    if ( id == this->current_tracking_info_.investigation_monster_id )
    {
LABEL_25:
      if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->id);
      }
      proto::InvestigationMonster::set_id(proto_investigation_monster, config->id);
      if ( *(_BYTE *)(((unsigned __int64)&config->city_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->city_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->city_id);
      }
      proto::InvestigationMonster::set_city_id(proto_investigation_monster, config->city_id);
      proto::InvestigationMonster::set_lock_state(proto_investigation_monster, state);
      v10 = 0;
    }
    else
    {
      v10 = -1;
    }
  }
  else
  {
    if ( is_for_mark )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->id);
      }
      v11 = config->id;
      if ( *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->current_tracking_info_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->current_tracking_info_);
      }
      if ( v11 != this->current_tracking_info_.investigation_monster_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->map_mark_create_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->map_mark_create_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->map_mark_create_type);
        }
        map_mark_create_type = config->map_mark_create_type;
        if ( map_mark_create_type == ExtraConditions )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->map_mark_create_condition.condition_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->map_mark_create_condition.condition_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->map_mark_create_condition.condition_type);
          }
          condition_type = config->map_mark_create_condition.condition_type;
          if ( condition_type == Invalid_0 )
          {
            v10 = -1;
            goto LABEL_57;
          }
          if ( condition_type == PlayerLevelGE )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            BasicComp = Player::getBasicComp(this->player_);
            Level = PlayerBasicComp::getLevel(BasicComp);
            if ( *(_BYTE *)(((unsigned __int64)&config->map_mark_create_condition.condition_param >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->map_mark_create_condition.condition_param >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&config->map_mark_create_condition.condition_param);
            }
            if ( Level < config->map_mark_create_condition.condition_param )
            {
              v10 = -1;
              goto LABEL_57;
            }
          }
        }
        else if ( map_mark_create_type == NerverCreate )
        {
          v10 = -1;
          goto LABEL_57;
        }
      }
    }
    InvestigationMonsterStatus::InvestigationMonsterStatus((InvestigationMonsterStatus *const)(v4 + 48));
    if ( PlayerInvestigationComp::getInvestigationMonsterStatus(this, config, (InvestigationMonsterStatus *)(v4 + 48)) )
    {
      v10 = -1;
    }
    else
    {
      proto::InvestigationMonster::Swap(proto_investigation_monster, (proto::InvestigationMonster *)(v4 + 48));
      v10 = 0;
    }
    InvestigationMonsterStatus::~InvestigationMonsterStatus((InvestigationMonsterStatus *const)(v4 + 48));
  }
LABEL_57:
  result = v10;
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 858: range 0000000016C9822C-0000000016C985E6
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerInvestigationComp::logTakeInvestigationReward(
        PlayerInvestigationComp *const this,
        const data::InvestigationConfig *config)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto_log::RewardLog *v8; // rcx
  PlayerItemComp *ItemComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  proto_log::RewardLog *v11; // rax
  Player *v12; // r14
  std::string configa; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  configa._M_string_length = (std::string::size_type)this;
  configa._M_dataplus._M_p = (std::string::pointer)config;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:859 64 16 11 log_ptr:860";
  *(_QWORD *)(v2 + 16) = PlayerInvestigationComp::logTakeInvestigationReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(configa._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v15, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x771u, configa);
  std::string::~string(&v15);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTakeInvestigationReward>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(configa._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(configa._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(configa._M_dataplus._M_p + 8);
  }
  proto_log::PlayerLogBodyTakeInvestigationReward::set_investigation_id(v6, *((_DWORD *)configa._M_dataplus._M_p + 2));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v8 = proto_log::PlayerLogBodyTakeInvestigationReward::mutable_reward_log(v7);
  if ( *(_BYTE *)(((unsigned __int64)(configa._M_dataplus._M_p + 52) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(configa._M_dataplus._M_p) + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(configa._M_dataplus._M_p
                                                                                                 + 52) >> 3)
                                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(configa._M_dataplus._M_p + 52);
  }
  proto_log::RewardLog::set_reward_id(v8, *((_DWORD *)configa._M_dataplus._M_p + 13));
  if ( *(_BYTE *)(((configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(*(Player *const *)(configa._M_string_length + 24));
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v11 = proto_log::PlayerLogBodyTakeInvestigationReward::mutable_reward_log(v10);
  PlayerItemComp::getRewardLog(ItemComp, v11);
  if ( *(_BYTE *)(((configa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = *(Player **)(configa._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationReward,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&configa._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationReward> *)(v2 + 64));
  Player::printStatLog(v12, (MessagePtr *)&configa._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&configa._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationReward> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v16 == (char *)v2 )
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

// Line 868: range 0000000016C985E8-0000000016C98B34
void __cdecl PlayerInvestigationComp::logTakeInvestigationTargetReward(
        PlayerInvestigationComp *const this,
        const data::InvestigationTargetConfig *target_config,
        const data::InvestigationConfig *config,
        const Investigation *investigation)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // rcx
  uint32_t InvestigationTotalProgress; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  proto_log::RewardLog *v15; // rcx
  PlayerItemComp *ItemComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  proto_log::RewardLog *v18; // rax
  Player *player; // r14
  std::string investigationa; // [rsp+0h] [rbp-F0h]
  const Investigation *investigationb; // [rsp+0h] [rbp-F0h]
  const data::InvestigationTargetConfig *target_configa; // [rsp+10h] [rbp-E0h]
  PlayerInvestigationComp *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v25; // [rsp+30h] [rbp-C0h] BYREF
  std::string v26; // [rsp+40h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&investigationa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  investigationa._anon_0._M_allocated_capacity = (std::string::size_type)target_config;
  investigationa._M_string_length = (std::string::size_type)config;
  investigationa._M_dataplus._M_p = (std::string::pointer)investigation;
  v4 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 10 holder:869 64 16 11 log_ptr:870";
  *(_QWORD *)(v4 + 16) = PlayerInvestigationComp::logTakeInvestigationTargetReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v26, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x772u, investigationa);
  std::string::~string(&v26);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTakeInvestigationTargetReward>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&target_configa->investigation_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)target_configa + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_configa->investigation_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&target_configa->investigation_id);
  }
  proto_log::PlayerLogBodyTakeInvestigationTargetReward::set_investigation_id(v8, target_configa->investigation_id);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&target_configa->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&target_configa->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&target_configa->id);
  }
  proto_log::PlayerLogBodyTakeInvestigationTargetReward::set_investigation_target_id(v9, target_configa->id);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&investigationb->progress >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)investigationb + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&investigationb->progress >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&investigationb->progress);
  }
  proto_log::PlayerLogBodyTakeInvestigationTargetReward::set_after_progress(v10, investigationb->progress);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.investigation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&target_configa->investigation_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)target_configa + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&target_configa->investigation_id >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&target_configa->investigation_id);
  }
  InvestigationTotalProgress = InvestigationExcelConfigMgr::getInvestigationTotalProgress(
                                 p_investigation_config_mgr,
                                 target_configa->investigation_id);
  proto_log::PlayerLogBodyTakeInvestigationTargetReward::set_total_progress(v11, InvestigationTotalProgress);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v25);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v15 = proto_log::PlayerLogBodyTakeInvestigationTargetReward::mutable_reward_log(v14);
  if ( *(_BYTE *)(((unsigned __int64)&target_configa->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&target_configa->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&target_configa->reward_id);
  }
  proto_log::RewardLog::set_reward_id(v15, target_configa->reward_id);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(thisa->player_);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeInvestigationTargetReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v18 = proto_log::PlayerLogBodyTakeInvestigationTargetReward::mutable_reward_log(v17);
  PlayerItemComp::getRewardLog(ItemComp, v18);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v25, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationTargetReward,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationTargetReward> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &v25, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v25);
  std::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationTargetReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakeInvestigationTargetReward> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v27 == (char *)v4 )
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

// Line 881: range 0000000016C98B36-0000000016C98E0E
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerInvestigationComp::logFinishInvestigation(
        PlayerInvestigationComp *const this,
        uint32_t investigation_id,
        uint32_t target_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishInvestigation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishInvestigation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // r14
  std::string target_ida; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  target_ida._M_string_length = (std::string::size_type)this;
  HIDWORD(target_ida._M_dataplus._M_p) = investigation_id;
  LODWORD(target_ida._M_dataplus._M_p) = target_id;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 10 holder:882 64 16 11 log_ptr:883";
  *(_QWORD *)(v3 + 16) = PlayerInvestigationComp::logFinishInvestigation;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202178560;
  if ( *(_BYTE *)(((target_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(target_ida._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v12, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x773u, target_ida);
  std::string::~string(&v12);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFinishInvestigation>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishInvestigation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishInvestigation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyFinishInvestigation::set_investigation_id(v7, HIDWORD(target_ida._M_dataplus._M_p));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishInvestigation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishInvestigation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  proto_log::PlayerLogBodyFinishInvestigation::set_target_id(v8, (google::protobuf::uint32)target_ida._M_dataplus._M_p);
  if ( *(_BYTE *)(((target_ida._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v9 = *(Player **)(target_ida._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFinishInvestigation,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&target_ida._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFinishInvestigation> *)(v3 + 64));
  Player::printStatLog(v9, (MessagePtr *)&target_ida._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&target_ida._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFinishInvestigation>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFinishInvestigation> *const)(v3 + 64));
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

// Line 890: range 0000000016C98E10-0000000016C98E95
void __cdecl PlayerInvestigationComp::sendQuestDailyNotify(PlayerInvestigationComp *const this)
{
  Player *player; // rbx
  proto::InvestigationQuestDailyNotify v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  proto::InvestigationQuestDailyNotify::InvestigationQuestDailyNotify(&v2);
  Player::sendProto(player, &v2);
  proto::InvestigationQuestDailyNotify::~InvestigationQuestDailyNotify(&v2);
};

// Line 895: range 0000000016C98E96-0000000016C98F19
void __cdecl PlayerInvestigationComp::onEnterScene(
        PlayerInvestigationComp *const this,
        ScenePtr *p_scene_ptr,
        bool is_reenter)
{
  if ( !std::operator==<Scene>(p_scene_ptr, 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 47) & 7) >= *(_BYTE *)(((unsigned __int64)&this->quest_daily_notify_today_ack_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->quest_daily_notify_today_ack_);
    }
    if ( !this->quest_daily_notify_today_ack_ )
      PlayerInvestigationComp::sendQuestDailyNotify(this);
  }
};
