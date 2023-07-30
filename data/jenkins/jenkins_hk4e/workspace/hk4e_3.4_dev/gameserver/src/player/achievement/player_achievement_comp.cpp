// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/achievement/player_achievement_comp.cpp

// Line 21: range 00000000179C5EB6-00000000179C5FB9
int32_t __cdecl Achievement::fromBin(Achievement *const this, const proto::AchievementBin *bin)
{
  uint32_t v2; // ecx
  google::protobuf::uint32 v3; // edi
  uint32_t v4; // ecx

  v2 = proto::AchievementBin::id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->id = v2;
  v3 = proto::AchievementBin::status(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    v3 = (_DWORD)this + 8;
    __asan_report_store4(&this->status);
  }
  this->status = v3;
  v4 = proto::AchievementBin::finish_timestamp(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->finish_timestamp);
  }
  this->finish_timestamp = v4;
  return 0;
};

// Line 29: range 00000000179C5FBA-00000000179C60BD
int32_t __cdecl Achievement::toBin(const Achievement *const this, proto::AchievementBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AchievementBin::set_id(bin, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AchievementBin::set_status(bin, this->status);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_timestamp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->finish_timestamp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::AchievementBin::set_finish_timestamp(bin, this->finish_timestamp);
  return 0;
};

// Line 38: range 00000000179C60BE-00000000179C6116
int32_t __cdecl Achievement::initWhenCreate(Achievement *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->status);
  }
  this->status = Achievement_Status_UNFINISHED;
  return 0;
};

// Line 44: range 00000000179C6118-00000000179C61D4
const WatcherConfig *__cdecl Achievement::findWatcherConfig(Achievement *const this)
{
  AchievementExcelConfigMgr *p_achievement_config_mgr; // rcx
  const WatcherConfig *WatcherConfigByAchievementId; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_achievement_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.achievement_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  WatcherConfigByAchievementId = AchievementExcelConfigMgr::findWatcherConfigByAchievementId(
                                   p_achievement_config_mgr,
                                   this->id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return WatcherConfigByAchievementId;
};

// Line 49: range 00000000179C61D6-00000000179C6292
const data::AchievementExcelConfig *__cdecl Achievement::findAchievementExcelConfig(Achievement *const this)
{
  AchievementExcelConfigMgr *p_achievement_config_mgr; // rcx
  const data::AchievementExcelConfig *AchievementExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_achievement_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.achievement_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  AchievementExcelConfig = data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(
                             p_achievement_config_mgr,
                             this->id);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return AchievementExcelConfig;
};

// Line 55: range 00000000179C6294-00000000179C652F
int32_t __cdecl PlayerAchievementComp::fromBin(
        PlayerAchievementComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // eax
  Achievement *v6; // r8
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::AchievementBin>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  google::protobuf::RepeatedPtrField<proto::AchievementBin>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-B0h]
  const proto::PlayerAchievementCompBin *comp_bin; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::AchievementBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+38h] [rbp-98h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-90h]
  const proto::AchievementBin *achievement_bin; // [rsp+48h] [rbp-88h]
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 5 id:63 64 12 4 a:59";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202177536;
  comp_bin = proto::PlayerDataBin::achievement_bin(player_data_bin);
  __for_range = proto::PlayerAchievementCompBin::achievement_list(comp_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::AchievementBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::AchievementBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::AchievementBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    achievement_bin = google::protobuf::internal::RepeatedPtrIterator<proto::AchievementBin const>::operator*(&__for_begin);
    v5 = proto::AchievementBin::id(achievement_bin);
    Achievement::Achievement((Achievement *const)(v2 + 64), v5);
    Achievement::fromBin((Achievement *const)(v2 + 64), achievement_bin);
    std::unordered_map<unsigned int,Achievement>::emplace<unsigned int &,Achievement&>(
      &this->achievement_map_,
      (unsigned int *)(v2 + 64),
      (Achievement *)(v2 + 64),
      (unsigned int *)&this->achievement_map_,
      v6);
    google::protobuf::internal::RepeatedPtrIterator<proto::AchievementBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerAchievementCompBin::reward_taken_goal_id_list(comp_bin);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_0;
    std::unordered_set<unsigned int>::insert(
      &this->reward_taken_goal_id_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_0;
  }
  result = 0;
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
  return result;
};

// Line 71: range 00000000179C6530-00000000179C67F7
int32_t __cdecl PlayerAchievementComp::init(PlayerAchievementComp *const this)
{
  std::weak_ptr<PlayerAchievementComp> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  std::weak_ptr<PlayerAchievementComp> *EventComp; // [rsp+10h] [rbp-B0h]
  std::weak_ptr<PlayerAchievementComp> *p_this_wtr; // [rsp+20h] [rbp-A0h]
  std::weak_ptr<Observer> v7; // [rsp+30h] [rbp-90h] BYREF
  std::shared_ptr<PlayerAchievementComp> __r; // [rsp+40h] [rbp-80h] BYREF
  char v9[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<PlayerAchievementComp> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<PlayerAchievementComp> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<PlayerAchievementComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 11 this_wtr:72";
  v1[1]._M_ptr = (std::__weak_ptr<PlayerAchievementComp,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerAchievementComp::init;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  toThisPtr<PlayerAchievementComp>((PlayerAchievementComp *)&__r);
  std::weak_ptr<PlayerAchievementComp>::weak_ptr<PlayerAchievementComp,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerAchievementComp>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<PlayerAchievementComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerAchievementComp>::weak_ptr((std::weak_ptr<PlayerAchievementComp> *const)&__r, v1 + 2);
  PlayerEventComp::registerObserver<PlayerAchievementComp,WatcherProgressUpdateEvent>(
    (PlayerEventComp *const)&v7,
    p_this_wtr,
    (void (*)(PlayerAchievementComp *, const WatcherProgressUpdateEvent *))&__r);
  std::weak_ptr<Observer>::~weak_ptr(&v7);
  std::weak_ptr<PlayerAchievementComp>::~weak_ptr((std::weak_ptr<PlayerAchievementComp> *const)&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = (std::weak_ptr<PlayerAchievementComp> *)Player::getEventComp(this->player_);
  std::weak_ptr<PlayerAchievementComp>::weak_ptr((std::weak_ptr<PlayerAchievementComp> *const)&v7, v1 + 2);
  PlayerEventComp::registerObserver<PlayerAchievementComp,OpenStateChangeEvent>(
    (PlayerEventComp *const)&__r,
    EventComp,
    (void (*)(PlayerAchievementComp *, const OpenStateChangeEvent *))&v7);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&__r);
  std::weak_ptr<PlayerAchievementComp>::~weak_ptr((std::weak_ptr<PlayerAchievementComp> *const)&v7);
  std::weak_ptr<PlayerAchievementComp>::~weak_ptr(v1 + 2);
  result = 0;
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<PlayerAchievementComp,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 80: range 00000000179C67F8-00000000179C6862
int32_t __cdecl PlayerAchievementComp::onFirstLogin(PlayerAchievementComp *const this)
{
  unsigned __int64 v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_PlayerCompBase + 9);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  return (*(__int64 (__fastcall **)(PlayerAchievementComp *const, __int64))v1)(this, 1LL);
};

// Line 86: range 00000000179C6864-00000000179C6887
int32_t __cdecl PlayerAchievementComp::onLogin(PlayerAchievementComp *const this, bool is_new_player)
{
  PlayerAchievementComp::refreshAllAchievement(this);
  return 0;
};

// Line 93: range 00000000179C6888-00000000179C6C08
int32_t __cdecl PlayerAchievementComp::notifyAllData(PlayerAchievementComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::uint32 *v4; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,Achievement>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::unordered_map<unsigned int,Achievement>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  std::unordered_map<unsigned int,Achievement> *__for_range; // [rsp+30h] [rbp-100h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-F8h]
  std::pair<unsigned int const,Achievement> *__in; // [rsp+40h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,Achievement> >::type *achievement_id; // [rsp+48h] [rbp-E8h]
  std::tuple_element<1,std::pair<unsigned int const,Achievement> >::type *_; // [rsp+50h] [rbp-E0h]
  proto::Achievement *a_proto; // [rsp+58h] [rbp-D8h]
  char v14[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 72 9 notify:94";
  *(_QWORD *)(v1 + 16) = PlayerAchievementComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  proto::AchievementAllDataNotify::AchievementAllDataNotify((proto::AchievementAllDataNotify *const)(v1 + 48));
  __for_range = &this->achievement_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,Achievement>::begin(&this->achievement_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,Achievement>::end(&this->achievement_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,Achievement>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false>::operator*(&__for_begin);
    achievement_id = std::get<0ul,unsigned int const,Achievement>(__in);
    _ = std::get<1ul,unsigned int const,Achievement>(__in);
    a_proto = proto::AchievementAllDataNotify::add_achievement_list((proto::AchievementAllDataNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)achievement_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)achievement_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)achievement_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerAchievementComp::fillAchievementProto(this, *achievement_id, a_proto);
    std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reward_taken_goal_id_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Achievement>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->reward_taken_goal_id_set_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Achievement>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v4 = (google::protobuf::uint32 *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::AchievementAllDataNotify::add_reward_taken_goal_id_list(
      (proto::AchievementAllDataNotify *const)(v1 + 48),
      *v4);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::AchievementAllDataNotify::~AchievementAllDataNotify((proto::AchievementAllDataNotify *const)(v1 + 48));
  result = 0;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 110: range 00000000179C6C0A-00000000179C6D84
int32_t __cdecl PlayerAchievementComp::toBin(PlayerAchievementComp *const this, proto::PlayerDataBin *player_data_bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::unordered_map<unsigned int,Achievement>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::unordered_map<unsigned int,Achievement>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::PlayerAchievementCompBin *comp_bin; // [rsp+28h] [rbp-38h]
  std::unordered_map<unsigned int,Achievement> *__for_range; // [rsp+30h] [rbp-30h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-28h]
  std::pair<unsigned int const,Achievement> *__in; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,Achievement> >::type *_; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,Achievement> >::type *achievement; // [rsp+50h] [rbp-10h]
  proto::AchievementBin *a_bin; // [rsp+58h] [rbp-8h]

  comp_bin = proto::PlayerDataBin::mutable_achievement_bin(player_data_bin);
  __for_range = &this->achievement_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,Achievement>::begin(&this->achievement_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,Achievement>::end(&this->achievement_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,Achievement>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,Achievement>(__in);
    achievement = std::get<1ul,unsigned int const,Achievement>(__in);
    a_bin = proto::PlayerAchievementCompBin::add_achievement_list(comp_bin);
    Achievement::toBin(achievement, a_bin);
    std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reward_taken_goal_id_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Achievement>,false>::__node_type *)std::unordered_set<unsigned int>::begin(&this->reward_taken_goal_id_set_)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,Achievement>,false>::__node_type *)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::PlayerAchievementCompBin::add_reward_taken_goal_id_list(comp_bin, *v2);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  return 0;
};

// Line 125: range 00000000179C6D86-00000000179C6F82
void __cdecl PlayerAchievementComp::refreshAllAchievement(PlayerAchievementComp *const this)
{
  std::unordered_map<unsigned int,data::AchievementExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,data::AchievementExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,data::AchievementExcelConfig> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,data::AchievementExcelConfig> *v4; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::AchievementExcelConfig> >::type *_; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AchievementExcelConfig> >::type *config; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v7; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.achievement_config_mgr.achievement_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::AchievementExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::AchievementExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::AchievementExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v4 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,data::AchievementExcelConfig>(v4);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::AchievementExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AchievementExcelConfig>(v4);
    if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( PlayerAchievementComp::findAchievement(this, config->id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerAchievementComp::checkAchievementWatcher(this, config->id, 0);
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&config->is_disuse >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config->is_disuse);
      if ( !config->is_disuse )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerAchievementComp::addAchievement(this, config->id, 0);
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::AchievementExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 145: range 00000000179C6F84-00000000179C6F92
void __cdecl PlayerAchievementComp::onOpenStateChange(
        PlayerAchievementComp *const this,
        const OpenStateChangeEvent *event)
{
  ;
};

// Line 151: range 00000000179C6F94-00000000179C7A10
int32_t __cdecl PlayerAchievementComp::takeAchievementReward(
        PlayerAchievementComp *const this,
        std::vector<unsigned int> *id_vec,
        std::vector<ItemParam> *display_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  PlayerItemComp *p_finish_reward_id; // rdi
  common::milog::MiLogStream *v16; // rax
  int32_t M_array_high; // r14d
  int32_t result; // eax
  ItemParam *__last; // [rsp+8h] [rbp-208h]
  PlayerItemComp *__first; // [rsp+10h] [rbp-200h]
  bool __firstb; // [rsp+10h] [rbp-200h]
  int __firsta; // [rsp+10h] [rbp-200h]
  ItemParam *__firstc; // [rsp+10h] [rbp-200h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-1D1h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+40h] [rbp-1D0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-1C0h] BYREF
  __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > __i; // [rsp+58h] [rbp-1B8h] BYREF
  __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > __position; // [rsp+60h] [rbp-1B0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-1A8h]
  Achievement *a_ptr; // [rsp+70h] [rbp-1A0h]
  const data::AchievementExcelConfig *config_ptr; // [rsp+78h] [rbp-198h]
  common::milog::MiLogStream v34; // [rsp+80h] [rbp-190h] BYREF
  common::milog::MiLogStream v35; // [rsp+A0h] [rbp-170h] BYREF
  common::milog::MiLogStream v36; // [rsp+C0h] [rbp-150h] BYREF
  char v37[304]; // [rsp+E0h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 6 id:154 64 24 15 real_id_vec:152 128 24 12 item_vec:173 192 24 17 action_reason:179";
  *(_QWORD *)(v3 + 16) = PlayerAchievementComp::takeAchievementReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  HIDWORD(__l._M_array) = 0;
  __for_range = id_vec;
  __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<unsigned int>::begin(id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__l._M_len,
            &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__l._M_len);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *v6;
    a_ptr = PlayerAchievementComp::findAchievement(this, *(_DWORD *)(v3 + 48));
    if ( a_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)a_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( a_ptr->status == Achievement_Status_FINISHED )
      {
        config_ptr = Achievement::findAchievementExcelConfig(a_ptr);
        if ( config_ptr )
        {
          std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __first = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          LODWORD(__l._M_array) = config_ptr->finish_reward_id;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(
            (std::vector<unsigned int> *const)(v3 + 192),
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
            &__a);
          __firstb = PlayerItemComp::getItemParamVecByRewardIdVec(
                       __first,
                       (const std::vector<unsigned int> *)(v3 + 192),
                       (std::vector<ItemParam> *)(v3 + 128)) != 0;
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
          std::allocator<unsigned int>::~allocator(&__a);
          if ( __firstb )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/achievement/player_achievement_comp.cpp",
              "takeAchievementReward",
              176);
            v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v36,
                    (const char (*)[31])"getItemParam fails, reward_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config_ptr->finish_reward_id);
            common::milog::MiLogStream::~MiLogStream(&v36);
            __firsta = 0;
          }
          else
          {
            ActionReason::ActionReason(
              (ActionReason *const)(v3 + 192),
              ACTION_REASON_ACHIEVEMENT_REWARD,
              ITEM_LIMIT_ACHIEVEMENT_REWARD);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ItemComp = Player::getItemComp(this->player_);
            HIDWORD(__l._M_array) = PlayerItemComp::checkAddItemBatch(
                                      ItemComp,
                                      (const std::vector<ItemParam> *)(v3 + 128),
                                      (const ActionReason *)(v3 + 192));
            if ( HIDWORD(__l._M_array) )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/achievement/player_achievement_comp.cpp",
                "takeAchievementReward",
                183);
              v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      &v36,
                      (const char (*)[29])"checkAddItemBatch fails, id:");
              v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v12,
                      (const unsigned int *)(v3 + 48));
              v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v13,
                      (const char (*)[10])" player_:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              operator<<(v14, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v36);
              __firsta = 1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)a_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(&a_ptr->status);
              }
              a_ptr->status = Achievement_Status_REWARD_TAKEN;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              p_finish_reward_id = Player::getItemComp(this->player_);
              if ( *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                p_finish_reward_id = (PlayerItemComp *)&config_ptr->finish_reward_id;
                __asan_report_load4();
              }
              if ( PlayerItemComp::grantReward(
                     p_finish_reward_id,
                     config_ptr->finish_reward_id,
                     (const ActionReason *)(v3 + 192),
                     0LL) )
              {
                common::milog::MiLogStream::create(
                  &v36,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/achievement/player_achievement_comp.cpp",
                  "takeAchievementReward",
                  190);
                v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v36,
                        (const char (*)[31])"grantReward failed, reward_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  &config_ptr->finish_reward_id);
                common::milog::MiLogStream::~MiLogStream(&v36);
                __firsta = 0;
              }
              else
              {
                PlayerAchievementComp::logTakeAchievementReward(this, *(_DWORD *)(v3 + 48));
                __last = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 128))._M_current;
                __firstc = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 128))._M_current;
                __i._M_current = std::vector<ItemParam>::end(display_vec)._M_current;
                __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
                  &__position,
                  &__i);
                std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
                  display_vec,
                  __position,
                  (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__firstc,
                  (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__last);
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v3 + 64),
                  (const std::vector<unsigned int>::value_type *)(v3 + 48));
                __firsta = 2;
              }
            }
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
          if ( __firsta && __firsta != 2 )
            break;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/achievement/player_achievement_comp.cpp",
            "takeAchievementReward",
            170);
          v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                 &v36,
                 (const char (*)[34])"achievement config not exist, id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "takeAchievementReward",
          164);
        v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v35,
               (const char (*)[30])"achievement not finished, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v35);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/achievement/player_achievement_comp.cpp",
        "takeAchievementReward",
        159);
      v7 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v34,
             (const char (*)[27])"achievement not exist, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__l._M_len);
  }
  std::vector<unsigned int>::operator=(id_vec, (const std::vector<unsigned int> *)(v3 + 64));
  PlayerAchievementComp::notifyAchievement(this, (const std::vector<unsigned int> *)(v3 + 64));
  M_array_high = HIDWORD(__l._M_array);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = M_array_high;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 203: range 00000000179C7A12-00000000179C864F
int32_t __cdecl PlayerAchievementComp::takeAchievementGoalReward(
        PlayerAchievementComp *const this,
        std::vector<unsigned int> *id_vec,
        std::vector<ItemParam> *display_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  PlayerItemComp *p_finish_reward_id; // rdi
  common::milog::MiLogStream *v22; // rax
  int32_t M_array_high; // r14d
  int32_t result; // eax
  ItemParam *__last; // [rsp+8h] [rbp-248h]
  PlayerItemComp *__first; // [rsp+10h] [rbp-240h]
  bool __firstb; // [rsp+10h] [rbp-240h]
  int __firsta; // [rsp+10h] [rbp-240h]
  ItemParam *__firstc; // [rsp+10h] [rbp-240h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-211h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+40h] [rbp-210h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+50h] [rbp-200h] BYREF
  __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > __i; // [rsp+58h] [rbp-1F8h] BYREF
  __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > __position; // [rsp+60h] [rbp-1F0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-1E8h]
  const data::AchievementGoalExcelConfig *config_ptr; // [rsp+70h] [rbp-1E0h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *cur_progress; // [rsp+78h] [rbp-1D8h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *total_progress; // [rsp+80h] [rbp-1D0h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+88h] [rbp-1C8h] BYREF
  std::shared_ptr<Config> v42; // [rsp+90h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-1B0h] BYREF
  common::milog::MiLogStream v44; // [rsp+C0h] [rbp-190h] BYREF
  common::milog::MiLogStream v45; // [rsp+E0h] [rbp-170h] BYREF
  common::milog::MiLogStream v46; // [rsp+100h] [rbp-150h] BYREF
  char v47[304]; // [rsp+120h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 6 id:206 64 24 15 real_id_vec:204 128 24 12 item_vec:232 192 24 17 action_reason:239";
  *(_QWORD *)(v3 + 16) = PlayerAchievementComp::takeAchievementGoalReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234881024;
  v5[536862723] = -218959118;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
  HIDWORD(__l._M_array) = 0;
  __for_range = id_vec;
  __l._M_len = (std::initializer_list<unsigned int>::size_type)std::vector<unsigned int>::begin(id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__l._M_len,
            &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__l._M_len);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
    config_ptr = data::AchievementExcelConfigMgrBase::findAchievementGoalExcelConfig(
                   &v7->design_config.txt_config_mgr.achievement_config_mgr,
                   *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v42);
    if ( config_ptr )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->reward_taken_goal_id_set_,
             (const unsigned int *)(v3 + 48)) )
      {
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v3 + 64),
          (const std::vector<unsigned int>::value_type *)(v3 + 48));
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "takeAchievementGoalReward",
          218);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
               &v44,
               (const char (*)[33])"achievement goal have taken, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v44);
      }
      else
      {
        __in = PlayerAchievementComp::getGoalProgress(this, *(_DWORD *)(v3 + 48));
        cur_progress = std::get<0ul,unsigned int,unsigned int>(&__in);
        total_progress = std::get<1ul,unsigned int,unsigned int>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)total_progress >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)total_progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_progress >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v10 = *total_progress;
        if ( *(_BYTE *)(((unsigned __int64)cur_progress >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cur_progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_progress >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v10 <= *cur_progress )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( config_ptr->finish_reward_id )
          {
            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            __first = Player::getItemComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            LODWORD(__l._M_array) = config_ptr->finish_reward_id;
            std::allocator<unsigned int>::allocator(&__a);
            std::vector<unsigned int>::vector(
              (std::vector<unsigned int> *const)(v3 + 192),
              (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
              &__a);
            __firstb = PlayerItemComp::getItemParamVecByRewardIdVec(
                         __first,
                         (const std::vector<unsigned int> *)(v3 + 192),
                         (std::vector<ItemParam> *)(v3 + 128)) != 0;
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
            std::allocator<unsigned int>::~allocator(&__a);
            if ( __firstb )
            {
              common::milog::MiLogStream::create(
                &v46,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/achievement/player_achievement_comp.cpp",
                "takeAchievementGoalReward",
                235);
              v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v46,
                      (const char (*)[31])"getItemParam fails, reward_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config_ptr->finish_reward_id);
              common::milog::MiLogStream::~MiLogStream(&v46);
              __firsta = 0;
            }
            else
            {
              ActionReason::ActionReason(
                (ActionReason *const)(v3 + 192),
                ACTION_REASON_ACHIEVEMENT_GOAL_REWARD,
                ITEM_LIMIT_ACHIEVEMENT_GOAL_REWARD);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              ItemComp = Player::getItemComp(this->player_);
              HIDWORD(__l._M_array) = PlayerItemComp::checkAddItemBatch(
                                        ItemComp,
                                        (const std::vector<ItemParam> *)(v3 + 128),
                                        (const ActionReason *)(v3 + 192));
              if ( HIDWORD(__l._M_array) )
              {
                common::milog::MiLogStream::create(
                  &v46,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/achievement/player_achievement_comp.cpp",
                  "takeAchievementGoalReward",
                  243);
                v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        &v46,
                        (const char (*)[29])"checkAddItemBatch fails, id:");
                v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v18,
                        (const unsigned int *)(v3 + 48));
                v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v19,
                        (const char (*)[10])" player_:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                operator<<(v20, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v46);
                __firsta = 1;
              }
              else
              {
                std::unordered_set<unsigned int>::insert(
                  &this->reward_taken_goal_id_set_,
                  (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                p_finish_reward_id = Player::getItemComp(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3)
                                                                            + 0x7FFF8000) )
                {
                  p_finish_reward_id = (PlayerItemComp *)&config_ptr->finish_reward_id;
                  __asan_report_load4();
                }
                if ( PlayerItemComp::grantReward(
                       p_finish_reward_id,
                       config_ptr->finish_reward_id,
                       (const ActionReason *)(v3 + 192),
                       0LL) )
                {
                  common::milog::MiLogStream::create(
                    &v46,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/achievement/player_achievement_comp.cpp",
                    "takeAchievementGoalReward",
                    250);
                  v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                          &v46,
                          (const char (*)[31])"grantReward failed, reward_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v22,
                    &config_ptr->finish_reward_id);
                  common::milog::MiLogStream::~MiLogStream(&v46);
                  __firsta = 0;
                }
                else
                {
                  PlayerAchievementComp::logTakeAchievementGoalReward(this, *(_DWORD *)(v3 + 48));
                  __last = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v3 + 128))._M_current;
                  __firstc = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 128))._M_current;
                  __i._M_current = std::vector<ItemParam>::end(display_vec)._M_current;
                  __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
                    &__position,
                    &__i);
                  std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
                    display_vec,
                    __position,
                    (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__firstc,
                    (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)__last);
                  std::vector<unsigned int>::push_back(
                    (std::vector<unsigned int> *const)(v3 + 64),
                    (const std::vector<unsigned int>::value_type *)(v3 + 48));
                  __firsta = 2;
                }
              }
            }
            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 128));
            if ( __firsta && __firsta != 2 )
              break;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v46,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/achievement/player_achievement_comp.cpp",
              "takeAchievementGoalReward",
              229);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v46,
              (const char (*)[23])" finish_reward_id is 0");
            common::milog::MiLogStream::~MiLogStream(&v46);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/achievement/player_achievement_comp.cpp",
            "takeAchievementGoalReward",
            224);
          v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v45,
                  (const char (*)[40])"achievement goal not all finieshd , id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v3 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v12,
                  (const char (*)[15])" cur_progress:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, cur_progress);
          v15 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v14,
                  (const char (*)[17])" total_progress:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, total_progress);
          common::milog::MiLogStream::~MiLogStream(&v45);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v43,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/achievement/player_achievement_comp.cpp",
        "takeAchievementGoalReward",
        211);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v43,
             (const char (*)[39])"achievement goal config not exist, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v43);
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__l._M_len);
  }
  std::vector<unsigned int>::operator=(id_vec, (const std::vector<unsigned int> *)(v3 + 64));
  M_array_high = HIDWORD(__l._M_array);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
  result = M_array_high;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 262: range 00000000179C8650-00000000179C8A36
std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *__fastcall PlayerAchievementComp::getGoalProgress(
        PlayerAchievementComp *const this,
        uint32_t goal_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t *v9; // rdx
  unsigned int __y; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t a_id; // [rsp+14h] [rbp-DCh]
  const data::AchievementGoalExcelConfig *config_ptr; // [rsp+18h] [rbp-D8h]
  const std::unordered_set<unsigned int> *s; // [rsp+20h] [rbp-D0h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-C0h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-B8h] BYREF
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 count:270 64 4 11 goal_id:261";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::getGoalProgress;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = goal_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  config_ptr = data::AchievementExcelConfigMgrBase::findAchievementGoalExcelConfig(
                 &v5->design_config.txt_config_mgr.achievement_config_mgr,
                 *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    s = AchievementExcelConfigMgr::getAchievementSetByGoalId(
          &v8->design_config.txt_config_mgr.achievement_config_mgr,
          *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v17);
    *(_DWORD *)(v2 + 48) = 0;
    __for_range = s;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(s)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(s)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v9 = (uint32_t *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      a_id = *v9;
      if ( PlayerAchievementComp::getAchievementStatus(this, a_id) > Achievement_Status_UNFINISHED )
        ++*(_DWORD *)(v2 + 48);
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    __y = std::unordered_set<unsigned int>::size(s);
    result = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::make_pair<unsigned int &,unsigned int>(
                                                                                      (unsigned int *)(v2 + 48),
                                                                                      &__y);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "getGoalProgress",
      266);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v18,
           (const char (*)[39])"achievement goal config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v18);
    __y = std::numeric_limits<unsigned int>::max();
    *(_DWORD *)(v2 + 48) = 0;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::make_pair<int,unsigned int>(
                                                                                                  (int *)(v2 + 48),
                                                                                                  &__y);
    std::pair<unsigned int,unsigned int>::pair<int,unsigned int,true>(
      (std::pair<unsigned int,unsigned int> *const)&__for_end,
      (std::pair<int,unsigned int> *)&__for_begin);
    result = __for_end._M_cur;
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

// Line 283: range 00000000179C8A38-00000000179C8B8B
Achievement *__fastcall PlayerAchievementComp::findAchievement(PlayerAchievementComp *const this, uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  Achievement *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,Achievement>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 6 id:282 64 8 8 iter:284";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::findAchievement;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  *(std::unordered_map<unsigned int,Achievement>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,Achievement>::find(
                                                                           &this->achievement_map_,
                                                                           (const std::unordered_map<unsigned int,Achievement>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,Achievement>::end(&this->achievement_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,Achievement>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Achievement>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false> *const)(v2 + 64))->second;
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

// Line 293: range 00000000179C8B8C-00000000179C9007
__int64 __fastcall PlayerAchievementComp::fillAchievementProto(
        PlayerAchievementComp *const this,
        uint32_t id,
        proto::Achievement *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  Achievement *achievement_ptr; // [rsp+28h] [rbp-B8h]
  const WatcherConfig *watcher_config_ptr; // [rsp+30h] [rbp-B0h]
  const data::AchievementExcelConfig *achievement_config_ptr; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:292 64 8 17 progress_pair:310";
  *(_QWORD *)(v3 + 16) = PlayerAchievementComp::fillAchievementProto;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = id;
  achievement_ptr = PlayerAchievementComp::findAchievement(this, *(_DWORD *)(v3 + 48));
  if ( achievement_ptr )
  {
    watcher_config_ptr = Achievement::findWatcherConfig(achievement_ptr);
    achievement_config_ptr = Achievement::findAchievementExcelConfig(achievement_ptr);
    if ( watcher_config_ptr && achievement_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)achievement_ptr >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)achievement_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)achievement_ptr >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::Achievement::set_id(proto, achievement_ptr->id);
      if ( *(_BYTE *)(((unsigned __int64)&achievement_ptr->status >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)achievement_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&achievement_ptr->status >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::Achievement::set_status(proto, achievement_ptr->status);
      if ( *(_BYTE *)(((unsigned __int64)&achievement_ptr->finish_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)achievement_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&achievement_ptr->finish_timestamp >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::Achievement::set_finish_timestamp(proto, achievement_ptr->finish_timestamp);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = Player::getWatcherComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = PlayerWatcherComp::getWatcherProgress(
                                                             WatcherComp,
                                                             watcher_config_ptr->id);
      proto::Achievement::set_cur_progress(proto, *(_DWORD *)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&achievement_config_ptr->progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&achievement_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::Achievement::set_total_progress(proto, achievement_config_ptr->progress);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/achievement/player_achievement_comp.cpp",
        "fillAchievementProto",
        304);
      v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v14,
             (const char (*)[56])"watcher_config or achievement_config_ptr not exist, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "fillAchievementProto",
      297);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v14,
           (const char (*)[27])"achievement not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0xFFFFFFFFLL;
  }
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

// Line 317: range 00000000179C9008-00000000179C9B41
__int64 __fastcall PlayerAchievementComp::addAchievement(
        PlayerAchievementComp *const this,
        uint32_t id,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  Achievement *v14; // rax
  unsigned int *v15; // rcx
  Achievement *v16; // r8
  uint32_t WatcherComp; // ecx
  uint32_t v18; // esi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  PlayerWatcherComp *v24; // rcx
  unsigned int first; // esi
  common::milog::MiLogStream *v26; // rax
  bool v27; // [rsp+8h] [rbp-128h]
  bool v28; // [rsp+8h] [rbp-128h]
  PlayerWatcherComp *v29; // [rsp+8h] [rbp-128h]
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-120h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-F5h] BYREF
  _DWORD v33[5]; // [rsp+3Ch] [rbp-F4h] BYREF
  std::shared_ptr<Config> v34; // [rsp+50h] [rbp-E0h] BYREF
  std::vector<unsigned int> watcher_vec; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v36; // [rsp+80h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:316 64 12 15 achievement:335";
  *(_QWORD *)(v3 + 16) = PlayerAchievementComp::addAchievement;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202177536;
  *(_DWORD *)(v3 + 48) = id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  *(_QWORD *)&v33[1] = data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(
                         &v6->design_config.txt_config_mgr.achievement_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( !*(_QWORD *)&v33[1] )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "addAchievement",
      321);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v36,
           (const char (*)[22])"config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0xFFFFFFFFLL;
    goto LABEL_43;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,Achievement>,unsigned int>(
         &this->achievement_map_,
         (const unsigned int *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "addAchievement",
      326);
    v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(&v36, (const char (*)[46])off_2626E740);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0xFFFFFFFFLL;
    goto LABEL_43;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
  *(_QWORD *)&v33[3] = AchievementExcelConfigMgr::findWatcherConfigByAchievementId(
                         &v12->design_config.txt_config_mgr.achievement_config_mgr,
                         *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v34);
  if ( *(_QWORD *)&v33[3] )
  {
    Achievement::Achievement((Achievement *const)(v3 + 64), *(_DWORD *)(v3 + 48));
    Achievement::initWhenCreate((Achievement *const)(v3 + 64));
    v14 = std::move<Achievement &>((Achievement *)(v3 + 64));
    std::unordered_map<unsigned int,Achievement>::emplace<unsigned int &,Achievement>(
      &this->achievement_map_,
      (unsigned int *)(v3 + 48),
      v14,
      v15,
      v16);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v34, WatcherComp);
    v27 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v34);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v34);
    if ( v27 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (unsigned int)Player::getWatcherComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerWatcherComp::addWatcher((PlayerWatcherComp *const)&v34, v18, *(_DWORD *)(*(_QWORD *)&v33[3] + 8LL));
      v28 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v34);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v34);
      if ( v28 )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "addAchievement",
          343);
        v19 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v36, (const char (*)[39])off_2626E7E0);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_9;
      }
      if ( is_notify )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v29 = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v33[0] = *(_DWORD *)(*(_QWORD *)&v33[3] + 8LL);
        __l._M_array = v33;
        __l._M_len = 1LL;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(&watcher_vec, __l, &__a);
        PlayerWatcherComp::notifyWatcherChange(v29, &watcher_vec);
        std::vector<unsigned int>::~vector(&watcher_vec);
        std::allocator<unsigned int>::~allocator(&__a);
      }
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/achievement/player_achievement_comp.cpp",
        "addAchievement",
        351);
      v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v36, (const char (*)[30])off_2626E840);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v23,
        (const unsigned int *)(*(_QWORD *)&v33[3] + 8LL));
      common::milog::MiLogStream::~MiLogStream(&v36);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v24 = Player::getWatcherComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[3] + 8LL) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      first = PlayerWatcherComp::getWatcherProgress(v24, *(_DWORD *)(*(_QWORD *)&v33[3] + 8LL)).first;
      if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[1] + 80LL) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v33[1] + 80LL) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( first >= *(_DWORD *)(*(_QWORD *)&v33[1] + 80LL) )
        PlayerAchievementComp::finishAchievement(this, *(_DWORD *)(v3 + 48), 0);
    }
    if ( is_notify )
    {
      v33[0] = *(_DWORD *)(v3 + 48);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&watcher_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, v33), &__a);
      PlayerAchievementComp::notifyAchievement(this, &watcher_vec);
      std::vector<unsigned int>::~vector(&watcher_vec);
      std::allocator<unsigned int>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "addAchievement",
      365);
    v26 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v36, (const char (*)[20])off_2626E8C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "addAchievement",
      332);
    v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v36,
            (const char (*)[30])"watcher_config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v36);
    result = 0xFFFFFFFFLL;
  }
LABEL_43:
  if ( v37 == (char *)v3 )
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

// Line 372: range 00000000179C9B42-00000000179CAAA3
__int64 __fastcall PlayerAchievementComp::checkAchievementWatcher(
        PlayerAchievementComp *const this,
        uint32_t id,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t WatcherComp; // ecx
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  char v14; // al
  uint32_t v15; // esi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // ecx
  PlayerWatcherComp *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  __int64 result; // rax
  int __l; // [rsp+10h] [rbp-140h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-140h]
  bool v34; // [rsp+20h] [rbp-130h]
  PlayerWatcherComp *v35; // [rsp+20h] [rbp-130h]
  unsigned int v36; // [rsp+28h] [rbp-128h]
  uint32_t v37; // [rsp+28h] [rbp-128h]
  bool v38; // [rsp+28h] [rbp-128h]
  PlayerWatcherComp *v39; // [rsp+28h] [rbp-128h]
  std::allocator<unsigned int> v41; // [rsp+4Bh] [rbp-105h] BYREF
  _DWORD v42[5]; // [rsp+4Ch] [rbp-104h] BYREF
  const data::WatcherConfig *watcher_config_ptr; // [rsp+60h] [rbp-F0h]
  const data::AchievementExcelConfig *achievement_config_ptr_0; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<BaseWatcher> __a; // [rsp+70h] [rbp-E0h] BYREF
  std::vector<unsigned int> watcher_vec; // [rsp+80h] [rbp-D0h] BYREF
  common::milog::MiLogStream v47; // [rsp+A0h] [rbp-B0h] BYREF
  char v48[144]; // [rsp+C0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:371 64 16 15 watcher_ptr:394";
  *(_QWORD *)(v3 + 16) = PlayerAchievementComp::checkAchievementWatcher;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = id;
  *(_QWORD *)&v42[1] = PlayerAchievementComp::findAchievement(this, *(_DWORD *)(v3 + 48));
  if ( !*(_QWORD *)&v42[1] )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "checkAchievementWatcher",
      376);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v47,
           (const char (*)[33])"achievement not exist, pass, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v47);
    v36 = 0;
    goto LABEL_85;
  }
  *(_QWORD *)&v42[3] = Achievement::findAchievementExcelConfig(*(Achievement *const *)&v42[1]);
  if ( !*(_QWORD *)&v42[3] )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "checkAchievementWatcher",
      382);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v47,
           (const char (*)[34])"achievement_config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v47);
    v36 = -1;
    goto LABEL_85;
  }
  watcher_config_ptr = Achievement::findWatcherConfig(*(Achievement *const *)&v42[1]);
  if ( !watcher_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "checkAchievementWatcher",
      388);
    v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v47,
           (const char (*)[30])"watcher_config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v47);
    v36 = -1;
    goto LABEL_85;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[1] + 8LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v42[1]) + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[1] + 8LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)(*(_QWORD *)&v42[1] + 8LL) != 1 )
    goto LABEL_55;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v3 + 64), WatcherComp);
  if ( std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v3 + 64)) )
  {
    v10 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( BaseWatcher::isFinished(v10) )
    {
      v11 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      v12 = *(_QWORD *)v11 + 32LL;
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v11 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v12)(v11);
    }
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[1] + 8LL) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v42[1]) + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[1] + 8LL) >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(_DWORD *)(*(_QWORD *)&v42[1] + 8LL) != 1 )
      goto LABEL_31;
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[3] + 80LL) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[3] + 80LL) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v37 = *(_DWORD *)(*(_QWORD *)&v42[3] + 80LL);
    v13 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( v37 <= BaseWatcher::getProgress(v13) )
      v14 = 1;
    else
LABEL_31:
      v14 = 0;
    if ( v14 )
      PlayerAchievementComp::finishAchievement(this, *(_DWORD *)(v3 + 48), 0);
    v36 = 0;
    __l = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&watcher_config_ptr->is_disuse >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&watcher_config_ptr->is_disuse);
    if ( watcher_config_ptr->is_disuse )
    {
      v36 = 0;
      __l = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = (unsigned int)Player::getWatcherComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerWatcherComp::addWatcher((PlayerWatcherComp *const)&__a, v15, watcher_config_ptr->id);
      v34 = std::operator==<BaseWatcher>(0LL, &__a);
      std::shared_ptr<BaseWatcher>::~shared_ptr(&__a);
      if ( v34 )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "checkAchievementWatcher",
          418);
        v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v47, (const char (*)[39])off_2626E7E0);
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v3 + 48));
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v18, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v47);
        v36 = -1;
        __l = 0;
      }
      else
      {
        if ( is_notify )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v35 = Player::getWatcherComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v42[0] = watcher_config_ptr->id;
          __la._M_array = v42;
          __la._M_len = 1LL;
          std::allocator<unsigned int>::allocator(&v41);
          std::vector<unsigned int>::vector(&watcher_vec, __la, &v41);
          PlayerWatcherComp::notifyWatcherChange(v35, &watcher_vec);
          std::vector<unsigned int>::~vector(&watcher_vec);
          std::allocator<unsigned int>::~allocator(&v41);
        }
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "checkAchievementWatcher",
          426);
        v19 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v47, (const char (*)[30])off_2626E840);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &watcher_config_ptr->id);
        common::milog::MiLogStream::~MiLogStream(&v47);
        __l = 1;
      }
    }
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v3 + 64));
  if ( __l == 1 )
  {
LABEL_55:
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[1] + 8LL) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v42[1]) + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v42[1] + 8LL) >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *(int *)(*(_QWORD *)&v42[1] + 8LL) > 1 )
    {
      achievement_config_ptr_0 = Achievement::findAchievementExcelConfig(*(Achievement *const *)&v42[1]);
      if ( !achievement_config_ptr_0 )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "checkAchievementWatcher",
          435);
        v22 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v47,
                (const char (*)[22])"config not exist, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v47);
        v36 = -1;
        goto LABEL_85;
      }
      if ( *(char *)(((unsigned __int64)&achievement_config_ptr_0->is_delete_watcher_after_finish >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&achievement_config_ptr_0->is_delete_watcher_after_finish);
      if ( achievement_config_ptr_0->is_delete_watcher_after_finish )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = (unsigned int)Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&__a, v23);
        v38 = std::operator==<BaseWatcher>(0LL, &__a);
        std::shared_ptr<BaseWatcher>::~shared_ptr(&__a);
        if ( v38 )
        {
          v36 = 0;
          goto LABEL_85;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v24 = Player::getWatcherComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( PlayerWatcherComp::delWatcher(v24, watcher_config_ptr->id) )
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/achievement/player_achievement_comp.cpp",
            "checkAchievementWatcher",
            446);
          v25 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v47, (const char (*)[31])off_2626EA40);
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v3 + 48));
          v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v27, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v47);
          v36 = -1;
          goto LABEL_85;
        }
        if ( is_notify )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v39 = Player::getWatcherComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v42[0] = watcher_config_ptr->id;
          std::allocator<unsigned int>::allocator(&v41);
          std::vector<unsigned int>::vector(
            &watcher_vec,
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, v42),
            &v41);
          PlayerWatcherComp::notifyWatcherChange(v39, &watcher_vec);
          std::vector<unsigned int>::~vector(&watcher_vec);
          std::allocator<unsigned int>::~allocator(&v41);
        }
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "checkAchievementWatcher",
          454);
        v28 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v47, (const char (*)[30])off_2626EA80);
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v3 + 48));
        v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])" watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &watcher_config_ptr->id);
        common::milog::MiLogStream::~MiLogStream(&v47);
      }
    }
    v36 = 0;
  }
LABEL_85:
  result = v36;
  if ( v48 == (char *)v3 )
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

// Line 463: range 00000000179CAAA4-00000000179CAB19
proto::Achievement::Status __cdecl PlayerAchievementComp::getAchievementStatus(
        PlayerAchievementComp *const this,
        uint32_t id)
{
  Achievement *a_ptr; // [rsp+18h] [rbp-8h]

  a_ptr = PlayerAchievementComp::findAchievement(this, id);
  if ( !a_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return a_ptr->status;
};

// Line 473: range 00000000179CAB1A-00000000179CADAB
int32_t __cdecl PlayerAchievementComp::notifyAchievement(
        PlayerAchievementComp *const this,
        const std::vector<unsigned int> *id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  int32_t result; // eax
  uint32_t id; // [rsp+14h] [rbp-DCh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  proto::Achievement *proto; // [rsp+38h] [rbp-B8h]
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:474";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::notifyAchievement;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::AchievementUpdateNotify::AchievementUpdateNotify((proto::AchievementUpdateNotify *const)(v2 + 48));
  __for_range = id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    id = *v5;
    if ( PlayerAchievementComp::findAchievement(this, *v5) )
    {
      proto = proto::AchievementUpdateNotify::add_achievement_list((proto::AchievementUpdateNotify *const)(v2 + 48));
      PlayerAchievementComp::fillAchievementProto(this, id, proto);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
  proto::AchievementUpdateNotify::~AchievementUpdateNotify((proto::AchievementUpdateNotify *const)(v2 + 48));
  result = 0;
  if ( v13 == (char *)v2 )
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
  return result;
};

// Line 490: range 00000000179CADAC-00000000179CB329
void __cdecl PlayerAchievementComp::onWatcherProgressUpdate(
        PlayerAchievementComp *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  AchievementExcelConfigMgr *p_achievement_config_mgr; // rcx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t progress; // ecx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  const std::unordered_set<unsigned int> *s; // [rsp+20h] [rbp-F0h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-E8h]
  Achievement *a_ptr; // [rsp+30h] [rbp-E0h]
  const data::AchievementExcelConfig *achievement_config_ptr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 achievement_id:493 64 24 17 update_id_vec:492";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::onWatcherProgressUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_achievement_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.achievement_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  s = AchievementExcelConfigMgr::getAchievementSetByWatcherId(p_achievement_config_mgr, event->watcher_id);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  __for_range = s;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(s)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(s)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v6;
    a_ptr = PlayerAchievementComp::findAchievement(this, *(_DWORD *)(v2 + 48));
    if ( a_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
      achievement_config_ptr = data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(
                                 &v8->design_config.txt_config_mgr.achievement_config_mgr,
                                 *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( achievement_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)a_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a_ptr->status >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( a_ptr->status != Achievement_Status_UNFINISHED )
          goto LABEL_23;
        if ( *(_BYTE *)(((unsigned __int64)&achievement_config_ptr->progress >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&achievement_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        progress = achievement_config_ptr->progress;
        if ( *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( progress <= event->cur_progress )
          PlayerAchievementComp::finishAchievement(this, *(_DWORD *)(v2 + 48), 1);
        else
LABEL_23:
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v2 + 64),
            (const std::vector<unsigned int>::value_type *)(v2 + 48));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/achievement/player_achievement_comp.cpp",
          "onWatcherProgressUpdate",
          504);
        v9 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
               &v18,
               (const char (*)[36])"cannot find achievement config, id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/achievement/player_achievement_comp.cpp",
        "onWatcherProgressUpdate",
        498);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v18,
             (const char (*)[29])"cannot find achievement, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 64)) )
    PlayerAchievementComp::notifyAchievement(this, (const std::vector<unsigned int> *)(v2 + 64));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( v19 == (char *)v2 )
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

// Line 524: range 00000000179CB32A-00000000179CBC9E
__int64 __fastcall PlayerAchievementComp::finishAchievement(
        PlayerAchievementComp *const this,
        uint32_t id,
        bool is_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __int64 result; // rax
  int Now; // edi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  PlayerWatcherComp *v22; // [rsp+8h] [rbp-F8h]
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-F0h]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-CDh] BYREF
  _DWORD v27[5]; // [rsp+34h] [rbp-CCh] BYREF
  const data::WatcherConfig *watcher_config_ptr; // [rsp+48h] [rbp-B8h]
  std::vector<unsigned int> watcher_vec; // [rsp+50h] [rbp-B0h] BYREF
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-90h] BYREF
  char v31[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 6 id:523";
  *(_QWORD *)(v3 + 16) = PlayerAchievementComp::finishAchievement;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = id;
  *(_QWORD *)&v27[1] = PlayerAchievementComp::findAchievement(this, *(_DWORD *)(v3 + 32));
  if ( !*(_QWORD *)&v27[1] )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v27[1] + 8LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v27[1]) + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v27[1] + 8LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *(_DWORD *)(*(_QWORD *)&v27[1] + 8LL) != 1 )
  {
LABEL_8:
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "finishAchievement",
      528);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(&v30, (const char (*)[51])off_2626EC60);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_10:
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0xFFFFFFFFLL;
    goto LABEL_39;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v27[1] + 8LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v27[1]) + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v27[1] + 8LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(*(_QWORD *)&v27[1] + 8LL);
  }
  *(_DWORD *)(*(_QWORD *)&v27[1] + 8LL) = 2;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v27[1] + 4LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v27[1]) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v27[1] + 4LL) >> 3)
                                                          + 0x7FFF8000) )
  {
    Now = v27[1] + 4;
    __asan_report_store4(*(_QWORD *)&v27[1] + 4LL);
  }
  *(_DWORD *)(*(_QWORD *)&v27[1] + 4LL) = Now;
  *(_QWORD *)&v27[3] = Achievement::findAchievementExcelConfig(*(Achievement *const *)&v27[1]);
  if ( !*(_QWORD *)&v27[3] )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "finishAchievement",
      536);
    v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v30,
            (const char (*)[22])"config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0xFFFFFFFFLL;
    goto LABEL_39;
  }
  if ( *(char *)(((unsigned __int64)(*(_QWORD *)&v27[3] + 120LL) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(*(_QWORD *)&v27[3] + 120LL);
  if ( *(_BYTE *)(*(_QWORD *)&v27[3] + 120LL) )
  {
    watcher_config_ptr = Achievement::findWatcherConfig(*(Achievement *const *)&v27[1]);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/achievement/player_achievement_comp.cpp",
        "finishAchievement",
        544);
      v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v30,
              (const char (*)[30])"watcher config not exist, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = 0xFFFFFFFFLL;
      goto LABEL_39;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( PlayerWatcherComp::delWatcher(WatcherComp, watcher_config_ptr->id) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/achievement/player_achievement_comp.cpp",
        "finishAchievement",
        549);
      v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v30, (const char (*)[31])off_2626EA40);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_10;
    }
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "finishAchievement",
      553);
    v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v30, (const char (*)[30])off_2626EA80);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &watcher_config_ptr->id);
    common::milog::MiLogStream::~MiLogStream(&v30);
    if ( is_notify )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = Player::getWatcherComp(this->player_);
      v27[0] = *(_DWORD *)(v3 + 32);
      __l._M_array = v27;
      __l._M_len = 1LL;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(&watcher_vec, __l, &__a);
      PlayerWatcherComp::notifyWatcherChange(v22, &watcher_vec);
      std::vector<unsigned int>::~vector(&watcher_vec);
      std::allocator<unsigned int>::~allocator(&__a);
    }
  }
  if ( is_notify )
  {
    v27[0] = *(_DWORD *)(v3 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&watcher_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, v27), &__a);
    PlayerAchievementComp::notifyAchievement(this, &watcher_vec);
    std::vector<unsigned int>::~vector(&watcher_vec);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  PlayerAchievementComp::logAchievementFinish(this, *(_DWORD *)(v3 + 32));
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/achievement/player_achievement_comp.cpp",
    "finishAchievement",
    566);
  v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v30, (const char (*)[20])"finish achievement:");
  v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
  v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" player_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v21, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v30);
  result = 0LL;
LABEL_39:
  if ( v31 == (char *)v3 )
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

// Line 572: range 00000000179CBCA0-00000000179CC20F
void __fastcall PlayerAchievementComp::logAchievementFinish(PlayerAchievementComp *const this, __int32 achievement_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  Player *player; // r14
  std::string v13; // [rsp+0h] [rbp-100h]
  PlayerAchievementComp *thisa; // [rsp+8h] [rbp-F8h]
  const data::AchievementExcelConfig *config_ptr; // [rsp+10h] [rbp-F0h]
  google::protobuf::uint32 *cur_progress; // [rsp+18h] [rbp-E8h]
  google::protobuf::uint32 *total_progress; // [rsp+20h] [rbp-E0h]
  std::pair<unsigned int,unsigned int> __in; // [rsp+28h] [rbp-D8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v20; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v13._M_string_length = (std::string::size_type)this;
  HIDWORD(v13._M_dataplus._M_p) = achievement_id;
  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 10 holder:579 48 4 18 achievement_id:571 64 16 11 log_ptr:580";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::logAchievementFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = achievement_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  v13._anon_0._M_allocated_capacity = (std::string::size_type)data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(
                                                                &v5->design_config.txt_config_mgr.achievement_config_mgr,
                                                                *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( v13._anon_0._M_allocated_capacity )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xB2Cu, v13);
    std::string::~string(&v21);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyAchievementFinish>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyAchievementFinish::set_achievement_id(v8, *(_DWORD *)(v2 + 48));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->goal_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->goal_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyAchievementFinish::set_goal_id(v9, config_ptr->goal_id);
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->goal_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->goal_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    __in = (std::pair<unsigned int,unsigned int>)PlayerAchievementComp::getGoalProgress(thisa, config_ptr->goal_id);
    cur_progress = std::get<0ul,unsigned int,unsigned int>(&__in);
    total_progress = std::get<1ul,unsigned int,unsigned int>(&__in);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)cur_progress >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cur_progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_progress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyAchievementFinish::set_goal_progress(v10, *cur_progress);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAchievementFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)total_progress >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)total_progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)total_progress >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyAchievementFinish::set_total_goal_progress(v11, *total_progress);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v20, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAchievementFinish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyAchievementFinish> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &v20, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v20);
    std::shared_ptr<proto_log::PlayerLogBodyAchievementFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAchievementFinish> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "logAchievementFinish",
      576);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v21,
           (const char (*)[34])"achievement config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
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

// Line 590: range 00000000179CC210-00000000179CC696
void __fastcall PlayerAchievementComp::logTakeAchievementReward(
        PlayerAchievementComp *const this,
        __int32 achievement_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  Player *player; // r14
  std::string v12; // [rsp+0h] [rbp-F0h]
  PlayerAchievementComp *thisa; // [rsp+8h] [rbp-E8h]
  const data::AchievementExcelConfig *config_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v16; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-90h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  HIDWORD(v12._M_dataplus._M_p) = achievement_id;
  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 10 holder:597 48 4 18 achievement_id:589 64 16 11 log_ptr:598";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::logTakeAchievementReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = achievement_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::AchievementExcelConfigMgrBase::findAchievementExcelConfig(
                                                                        &v5->design_config.txt_config_mgr.achievement_config_mgr,
                                                                        *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v16);
  if ( *(&v12._anon_0._M_allocated_capacity + 1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v17, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xB2Du, v12);
    std::string::~string(&v17);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyTakeAchievementReward>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyTakeAchievementReward::set_achievement_id(v8, *(_DWORD *)(v2 + 48));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyTakeAchievementReward::set_reward_id(v9, config_ptr->finish_reward_id);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->goal_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->goal_id >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyTakeAchievementReward::set_goal_id(v10, config_ptr->goal_id);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v16, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakeAchievementReward,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyTakeAchievementReward> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &v16, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v16);
    std::shared_ptr<proto_log::PlayerLogBodyTakeAchievementReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakeAchievementReward> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "logTakeAchievementReward",
      594);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v17,
           (const char (*)[34])"achievement config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v2 )
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

// Line 606: range 00000000179CC698-00000000179CCABC
void __fastcall PlayerAchievementComp::logTakeAchievementGoalReward(PlayerAchievementComp *const this, __int32 goal_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementGoalReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementGoalReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  Player *player; // r14
  std::string v11; // [rsp+0h] [rbp-F0h]
  PlayerAchievementComp *thisa; // [rsp+8h] [rbp-E8h]
  const data::AchievementGoalExcelConfig *config_ptr; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v15; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+60h] [rbp-90h] BYREF

  v11._M_string_length = (std::string::size_type)this;
  HIDWORD(v11._M_dataplus._M_p) = goal_id;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 10 holder:613 48 4 11 goal_id:605 64 16 11 log_ptr:614";
  *(_QWORD *)(v2 + 16) = PlayerAchievementComp::logTakeAchievementGoalReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = goal_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  *(&v11._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::AchievementExcelConfigMgrBase::findAchievementGoalExcelConfig(
                                                                        &v5->design_config.txt_config_mgr.achievement_config_mgr,
                                                                        *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v15);
  if ( *(&v11._anon_0._M_allocated_capacity + 1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v16, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xB2Eu, v11);
    std::string::~string(&v16);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyTakeAchievementGoalReward>();
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementGoalReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementGoalReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyTakeAchievementGoalReward::set_goal_id(v8, *(_DWORD *)(v2 + 48));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementGoalReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTakeAchievementGoalReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->finish_reward_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyTakeAchievementGoalReward::set_reward_id(v9, config_ptr->finish_reward_id);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v15, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTakeAchievementGoalReward,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyTakeAchievementGoalReward> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &v15, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v15);
    std::shared_ptr<proto_log::PlayerLogBodyTakeAchievementGoalReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTakeAchievementGoalReward> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/achievement/player_achievement_comp.cpp",
      "logTakeAchievementGoalReward",
      610);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v16,
           (const char (*)[39])"achievement goal config not exist, id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v16);
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

// Line 622: range 00000000179CCABE-00000000179CCBB4
uint32_t __cdecl PlayerAchievementComp::getFinishAchievementNum(PlayerAchievementComp *const this)
{
  uint32_t num; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<unsigned int,Achievement>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,Achievement>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,Achievement> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,Achievement> *v6; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,Achievement> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,Achievement> >::type *achievement; // [rsp+48h] [rbp-8h]

  num = 0;
  __for_range = &this->achievement_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,Achievement>::begin(&this->achievement_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,Achievement>::end(&this->achievement_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,Achievement>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,Achievement>(v6);
    achievement = (std::tuple_element<1,const std::pair<unsigned int const,Achievement> >::type *)std::get<1ul,unsigned int const,Achievement>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&achievement->status >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)achievement + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&achievement->status >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( achievement->status == Achievement_Status_FINISHED || achievement->status == Achievement_Status_REWARD_TAKEN )
      ++num;
    std::__detail::_Node_iterator<std::pair<unsigned int const,Achievement>,false,false>::operator++(&__for_begin);
  }
  return num;
};
