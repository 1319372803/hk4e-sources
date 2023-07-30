// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/live/player_live_comp.cpp

// Line 18: range 000000001757A8EC-000000001757A90F
int32_t __cdecl PlayerLiveComp::onLogin(PlayerLiveComp *const this, bool is_new_player)
{
  PlayerLiveComp::refreshLiveAndUpdateTimer(this);
  return 0;
};

// Line 25: range 000000001757A910-000000001757A92E
void __cdecl PlayerLiveComp::onLiveTimer(PlayerLiveComp *const this, uint64_t now_ms)
{
  PlayerLiveComp::refreshLiveAndUpdateTimer(this);
};

// Line 30: range 000000001757A930-000000001757AA11
void __cdecl PlayerLiveComp::refreshLiveAndUpdateTimer(PlayerLiveComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 20 next_refresh_time:31";
  *(_QWORD *)(v1 + 16) = PlayerLiveComp::refreshLiveAndUpdateTimer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  PlayerLiveComp::refreshLive(this, (uint32_t *)(v1 + 32));
  PlayerLiveComp::updateTimer(this, *(_DWORD *)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 38: range 000000001757AA12-000000001757AF37
void __cdecl PlayerLiveComp::refreshLive(PlayerLiveComp *const this, uint32_t *next_refresh_time)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  const unsigned int *v7; // rax
  _DWORD *v8; // rdx
  std::vector<unsigned int>::iterator *p_for_end; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  const unsigned int *v12; // rax
  _DWORD *v13; // rdx
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  uint32_t now; // [rsp+10h] [rbp-110h]
  uint32_t live_id; // [rsp+14h] [rbp-10Ch]
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const data::DbLiveConfigMgr *conf_mgr; // [rsp+20h] [rbp-100h]
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v23; // [rsp+30h] [rbp-F0h] BYREF
  char v24[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 12 next_time:41 64 4 10 live_id:64 80 4 18 live_start_time:66 96 8 7 iter:43 128 24 15 schedule_vec:62";
  *(_QWORD *)(v2 + 16) = PlayerLiveComp::refreshLive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.db_config_mgr.db_local_config_mgr.live_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  now = common::tools::TimeUtils::getNow();
  *(_DWORD *)(v2 + 48) = -1;
  *(std::set<unsigned int>::iterator *)(v2 + 96) = std::set<unsigned int>::begin(&this->active_live_set_);
  while ( 1 )
  {
    __for_end._M_current = (unsigned int *)std::set<unsigned int>::end(&this->active_live_set_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 96),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
      break;
    v5 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 96));
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    live_id = *v6;
    *(_DWORD *)(v2 + 80) = data::DbLiveConfigMgr::getLiveEndTime(conf_mgr, *v6);
    if ( now < *(_DWORD *)(v2 + 80) )
    {
      v7 = std::min<unsigned int>((const unsigned int *)(v2 + 48), (const unsigned int *)(v2 + 80));
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v2 + 48) = *v8;
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 96));
    }
    else
    {
      *(std::set<unsigned int>::iterator *)(v2 + 96) = std::set<unsigned int>::erase[abi:cxx11](
                                                         &this->active_live_set_,
                                                         *(std::set<unsigned int>::const_iterator *)(v2 + 96));
      PlayerLiveComp::notifyLiveEnd(this, live_id);
    }
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
  data::DbLiveConfigMgr::getNowAndFutureScheduleLiveIdVec(conf_mgr, (std::vector<unsigned int> *)(v2 + 128));
  __for_range = (std::vector<unsigned int> *)(v2 + 128);
  *(std::vector<unsigned int>::iterator *)(v2 + 96) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128));
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 96),
            &__for_end) )
      break;
    v10 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 96));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    *(_DWORD *)(v2 + 64) = *v11;
    *(_DWORD *)(v2 + 80) = data::DbLiveConfigMgr::getLiveBeginTime(conf_mgr, *(_DWORD *)(v2 + 64));
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &this->active_live_set_,
            (const unsigned int *)(v2 + 64)) )
    {
      if ( now < *(_DWORD *)(v2 + 80) )
      {
        v12 = std::min<unsigned int>((const unsigned int *)(v2 + 48), (const unsigned int *)(v2 + 80));
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v2 + 48) = *v13;
      }
      else
      {
        std::set<unsigned int>::insert(&this->active_live_set_, (const std::set<unsigned int>::value_type *)(v2 + 64));
        PlayerLiveComp::notifyLiveStart(this, *(_DWORD *)(v2 + 64));
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 96));
  }
  v14 = *(_DWORD *)(v2 + 48);
  v15 = *(_BYTE *)(((unsigned __int64)next_refresh_time >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)(((unsigned __int8)next_refresh_time & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(next_refresh_time, p_for_end, v16);
  *next_refresh_time = v14;
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 90: range 000000001757AF38-000000001757B0B4
void __cdecl PlayerLiveComp::updateTimer(PlayerLiveComp *const this, uint32_t next_refresh_time)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  uint32_t delta_time; // [rsp+18h] [rbp-38h]
  uint32_t now; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( next_refresh_time )
  {
    now = common::tools::TimeUtils::getNow();
    delta_time = 120;
    if ( now < next_refresh_time && delta_time > next_refresh_time - now )
      delta_time = next_refresh_time - now + common::tools::RandomUtils::rand<int>(0, 5);
    if ( common::tools::MiTimer::isActive(&this->live_timer_) )
      common::tools::MiTimer::cancel(&this->live_timer_);
    if ( PlayerUnixTimer::startS(
           &this->live_timer_,
           delta_time,
           0,
           "./src/player/live/player_live_comp.cpp",
           "updateTimer",
           108) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/live/player_live_comp.cpp",
        "updateTimer",
        110);
      v2 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v7, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v3,
        (const char (*)[26])" live_timer_ startS fails");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
  }
};

// Line 115: range 000000001757B0B6-000000001757B23E
void __cdecl PlayerLiveComp::notifyLiveStart(PlayerLiveComp *const this, uint32_t live_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto::LiveStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Player *player; // r14
  std::shared_ptr<proto::LiveStartNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:116";
  *(_QWORD *)(v2 + 16) = PlayerLiveComp::notifyLiveStart;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::LiveStartNotify>();
  v5 = std::__shared_ptr_access<proto::LiveStartNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::LiveStartNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto::LiveStartNotify::set_live_id(v5, live_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::LiveStartNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::LiveStartNotify>::~shared_ptr((std::shared_ptr<proto::LiveStartNotify> *const)(v2 + 32));
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

// Line 122: range 000000001757B240-000000001757B3C8
void __cdecl PlayerLiveComp::notifyLiveEnd(PlayerLiveComp *const this, uint32_t live_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto::LiveEndNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Player *player; // r14
  std::shared_ptr<proto::LiveEndNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:123";
  *(_QWORD *)(v2 + 16) = PlayerLiveComp::notifyLiveEnd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::LiveEndNotify>();
  v5 = std::__shared_ptr_access<proto::LiveEndNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::LiveEndNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto::LiveEndNotify::set_live_id(v5, live_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::LiveEndNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::LiveEndNotify>::~shared_ptr((std::shared_ptr<proto::LiveEndNotify> *const)(v2 + 32));
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
