// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_team.cpp

// Line 21: range 000000000D7AB0A4-000000000D7AB3F6
std::string *__cdecl MatchTeam::getDesc[abi:cxx11](std::string *retstr, const MatchTeam *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // r14
  uint32_t HostMatchUnitId; // eax
  __int64 v7; // rax
  __int64 v8; // r14
  uint32_t MatchUnitCount; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  uint32_t PlayerCount; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  uint32_t PossiblePlayerCount; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  uint32_t WorldLevel; // eax
  __int64 v21; // rax
  char v23[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 6 oss:22";
  *(_QWORD *)(v2 + 16) = MatchTeam::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "[host_unit_id: ");
  HostMatchUnitId = MatchTeam::getHostMatchUnitId(this);
  v7 = std::ostream::operator<<(v5, HostMatchUnitId);
  v8 = std::operator<<<std::char_traits<char>>(v7, " ,match_unit_count: ");
  MatchUnitCount = MatchTeam::getMatchUnitCount(this);
  v10 = std::ostream::operator<<(v8, MatchUnitCount);
  v11 = std::operator<<<std::char_traits<char>>(v10, " ,create_time:");
  if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->create_time_);
  }
  v12 = std::ostream::operator<<(v11, this->create_time_);
  v13 = std::operator<<<std::char_traits<char>>(v12, " ,player_count: ");
  PlayerCount = MatchTeam::getPlayerCount(this);
  v15 = std::ostream::operator<<(v13, PlayerCount);
  v16 = std::operator<<<std::char_traits<char>>(v15, " ,possible_player_count: ");
  PossiblePlayerCount = MatchTeam::getPossiblePlayerCount(this);
  v18 = std::ostream::operator<<(v16, PossiblePlayerCount);
  v19 = std::operator<<<std::char_traits<char>>(v18, " ,world_level: ");
  WorldLevel = MatchTeam::getWorldLevel(this);
  v21 = std::ostream::operator<<(v19, WorldLevel);
  std::operator<<<std::char_traits<char>>(v21, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v23 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return retstr;
};

// Line 30: range 000000000D7AB3F8-000000000D7AB524
int32_t __cdecl MatchTeam::initWithMatchUnit(MatchTeam *const this, MatchUnitPtr *p_match_unit_ptr)
{
  bool v2; // bl
  uint32_t Now; // esi
  std::shared_ptr<MatchUnitBase> v5; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  std::shared_ptr<MatchUnitBase>::shared_ptr(&v5, p_match_unit_ptr);
  v2 = MatchTeam::addMatchUnit(this, &v5, MATCH_IDENTITY_HOST) != 0;
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&v5);
  if ( v2 )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.cpp",
      "initWithMatchUnit",
      33);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v6,
      (const char (*)[28])"[MATCH] addMatchUnit failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->create_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->create_time_);
    }
    this->create_time_ = Now;
    return 0;
  }
};

// Line 43: range 000000000D7AB526-000000000D7ABA6D
int32_t __cdecl MatchTeam::addMatchUnit(
        MatchTeam *const this,
        MatchUnitPtr *p_match_unit_ptr,
        proto::MatchIdentity match_identity)
{
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v11; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  char v13; // bl
  bool v14; // r12
  common::milog::MiLogStream *v15; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned int *v18; // rcx
  std::shared_ptr<MatchUnitBase> *v19; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>,bool> matched; // rax
  common::milog::MiLogStream *v21; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  MatchUnitBase *v23; // rbx
  common::milog::MiLogStream *v24; // rdx
  unsigned int val; // [rsp+28h] [rbp-48h] BYREF
  unsigned int MatchIdentity; // [rsp+2Ch] [rbp-44h] BYREF
  std::shared_ptr<MatchUnitBase> __a; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-30h] BYREF

  if ( std::operator==<MatchUnitBase>(0LL, p_match_unit_ptr) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_team.cpp",
      "addMatchUnit",
      46);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v29, (const char (*)[19])"match unit is null");
    common::milog::MiLogStream::~MiLogStream(&v29);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    if ( MatchUnitBase::getMatchIdentity(v4) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.cpp",
        "addMatchUnit",
        53);
      v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v29,
             (const char (*)[41])"match identity should be NONE, unit_id: ");
      v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
      val = MatchUnitBase::getUnitId(v6);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])", identity: ");
      v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
      MatchIdentity = MatchUnitBase::getMatchIdentity(v9);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &MatchIdentity);
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    else if ( match_identity == MATCH_IDENTITY_HOST
           && !std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::empty(&this->match_unit_map_) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_team.cpp",
        "addMatchUnit",
        60);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v29, (const char (*)[41])off_1BA1C8E0);
      v12 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
      MatchIdentity = MatchUnitBase::getUnitId(v12);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &MatchIdentity);
      common::milog::MiLogStream::~MiLogStream(&v29);
      return -1;
    }
    else
    {
      v13 = 0;
      v14 = 0;
      if ( match_identity == MATCH_IDENTITY_GUEST )
      {
        MatchTeam::getHostMatchUnit((const MatchTeam *const)&__a);
        v13 = 1;
        if ( std::operator==<MatchUnitBase>(0LL, &__a) )
          v14 = 1;
      }
      if ( v13 )
        std::shared_ptr<MatchUnitBase>::~shared_ptr(&__a);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/match_team.cpp",
          "addMatchUnit",
          67);
        v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(&v29, (const char (*)[42])off_1BA1C940);
        v16 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
        MatchIdentity = MatchUnitBase::getUnitId(v16);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &MatchIdentity);
        common::milog::MiLogStream::~MiLogStream(&v29);
        return -1;
      }
      else
      {
        v17 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
        MatchIdentity = MatchUnitBase::getUnitId(v17);
        matched = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::emplace<unsigned int,std::shared_ptr<MatchUnitBase>&>(
                    &this->match_unit_map_,
                    &MatchIdentity,
                    p_match_unit_ptr,
                    v18,
                    v19);
        if ( !matched.second )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/match/match_team.cpp",
            "addMatchUnit",
            73);
          v21 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v29,
                  (const char (*)[36])"match unit already exist, unit_id: ");
          v22 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
          MatchIdentity = MatchUnitBase::getUnitId(v22);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &MatchIdentity);
          common::milog::MiLogStream::~MiLogStream(&v29);
          return -1;
        }
        else
        {
          v23 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
          std::enable_shared_from_this<MatchTeam>::shared_from_this((std::enable_shared_from_this<MatchTeam> *const)&__a);
          MatchUnitBase::onJoinMatchTeam(v23, (MatchTeamPtr *)&__a, match_identity);
          std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)&__a);
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/match/match_team.cpp",
            "addMatchUnit",
            79);
          v24 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v29,
                  (const char (*)[30])"[MATCH] add match unit succ: ");
          common::milog::MiLogStream::operator<<<MatchTeam,(MatchTeam*)0>(v24, this);
          common::milog::MiLogStream::~MiLogStream(&v29);
          if ( match_identity == MATCH_IDENTITY_GUEST )
            MatchTeam::printGuestJoinTeamStatLog(this, p_match_unit_ptr);
          return 0;
        }
      }
    }
  }
};

// Line 91: range 000000000D7ABA6E-000000000D7ABB3E
void __fastcall MatchTeam::removeMatchUnit(MatchTeam *const this, uint32_t unit_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 unit_id:90";
  *(_QWORD *)(v2 + 16) = MatchTeam::removeMatchUnit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = unit_id;
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
    &this->match_unit_map_,
    (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 96: range 000000000D7ABB40-000000000D7ABCC8
MatchTeam *__fastcall MatchTeam::findMatchUnit(MatchTeam *const this, __int64 unit_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 10 unit_id:95 64 8 7 iter:97";
  *(_QWORD *)(v3 + 16) = MatchTeam::findMatchUnit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::find(
                                                                                              (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(unit_id + 32),
                                                                                              (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(unit_id + 32))._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)(v3 + 64),
         &__y) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v3 + 64));
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)this, 0LL);
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

// Line 106: range 000000000D7ABCCA-000000000D7ABD91
uint32_t __cdecl MatchTeam::getPlayerCount(const MatchTeam *const this)
{
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t count; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+48h] [rbp-8h]

  count = 0;
  __for_range = &this->match_unit_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(&this->match_unit_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(&this->match_unit_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    match_unit_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    if ( std::operator!=<MatchUnitBase>(0LL, match_unit_ptr) )
    {
      v1 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
      count += MatchUnitBase::getPlayerCount(v1);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
  }
  return count;
};

// Line 120: range 000000000D7ABD92-000000000D7ABE59
uint32_t __cdecl MatchTeam::getPossiblePlayerCount(const MatchTeam *const this)
{
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t count; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *v7; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+48h] [rbp-8h]

  count = 0;
  __for_range = &this->match_unit_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(&this->match_unit_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(&this->match_unit_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    match_unit_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    if ( std::operator!=<MatchUnitBase>(0LL, match_unit_ptr) )
    {
      v1 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
      count += MatchUnitBase::getPossiblePlayerCount(v1);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
  }
  return count;
};

// Line 134: range 000000000D7ABE5A-000000000D7AC058
MatchUnitPtr __cdecl MatchTeam::getHostMatchUnit(const MatchTeam *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>::pointer v5; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  int v8; // r14d
  MatchUnitPtr result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:135 64 16 18 match_unit_ptr:137";
  *(_QWORD *)(v2 + 16) = MatchTeam::getHostMatchUnit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin((const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v1 + 32));
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end((const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v1 + 32))._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)(v2 + 32),
            &__y) )
      break;
    v5 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v2 + 32));
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64), &v5->second);
    if ( std::operator!=<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 64))
      && (v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          MatchUnitBase::getMatchIdentity(v6) == MATCH_IDENTITY_HOST) )
    {
      std::shared_ptr<MatchUnitBase>::shared_ptr(
        (std::shared_ptr<MatchUnitBase> *const)this,
        (std::shared_ptr<MatchUnitBase> *)(v2 + 64));
      v8 = 0;
    }
    else
    {
      v8 = 1;
    }
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64));
    if ( v8 != 1 )
      goto LABEL_16;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v2 + 32));
  }
  std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)this, 0LL);
LABEL_16:
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
  result._M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 147: range 000000000D7AC05A-000000000D7AC167
uint32_t __cdecl MatchTeam::getHostMatchUnitId(const MatchTeam *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t UnitId; // r14d
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 18 match_unit_ptr:148";
  *(_QWORD *)(v1 + 16) = MatchTeam::getHostMatchUnitId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  MatchTeam::getHostMatchUnit((const MatchTeam *const)(v1 + 32));
  if ( std::operator!=<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    UnitId = MatchUnitBase::getUnitId(v4);
  }
  else
  {
    UnitId = 0;
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 32));
  result = UnitId;
  if ( v7 == (char *)v1 )
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

// Line 157: range 000000000D7AC168-000000000D7AC293
uint32_t __cdecl MatchTeam::getWorldLevel(const MatchTeam *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t WorldLevel; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 18 match_unit_ptr:158";
  *(_QWORD *)(v1 + 16) = MatchTeam::getWorldLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  MatchTeam::getHostMatchUnit((const MatchTeam *const)(v1 + 32));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 32)) )
  {
    WorldLevel = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    WorldLevel = MatchUnitBase::getWorldLevel(v5);
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 32));
  result = WorldLevel;
  if ( v7 == (char *)v1 )
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

// Line 167: range 000000000D7AC294-000000000D7AC354
bool __cdecl MatchTeam::isPlayerInMatchUnitBlacklist(
        MatchTeam *const this,
        const std::vector<unsigned int> *player_uid_vec)
{
  MatchUnitBase *v2; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit; // [rsp+38h] [rbp-8h]

  __for_range = &this->match_unit_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(&this->match_unit_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(&this->match_unit_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
    unit_id = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    match_unit = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    v2 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit);
    if ( MatchUnitBase::isPlayerInBlacklist(v2, player_uid_vec) )
      return 1;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 179: range 000000000D7AC356-000000000D7AC41E
int32_t __cdecl MatchTeam::getAllMatchUnitUids(MatchTeam *const this, std::vector<unsigned int> *uid_vec)
{
  MatchUnitBase *v2; // rdx
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit; // [rsp+38h] [rbp-8h]

  __for_range = &this->match_unit_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(&this->match_unit_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(&this->match_unit_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
    unit_id = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    match_unit = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v7);
    v2 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit);
    if ( MatchUnitBase::getAllMatchPlayerUids(v2, uid_vec) )
      return 1;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 193: range 000000000D7AC420-000000000D7AC5D8
google::protobuf::RepeatedPtrField<proto::MatchPlayer> *__cdecl MatchTeam::getMatchPlayerList(
        google::protobuf::RepeatedPtrField<proto::MatchPlayer> *retstr,
        MatchTeam *const this)
{
  MatchUnitBase *v2; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator __for_begin_0; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator __for_end_0; // [rsp+28h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+30h] [rbp-60h]
  const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *v9; // [rsp+38h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_id; // [rsp+40h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit; // [rsp+48h] [rbp-48h]
  const std::unordered_map<unsigned int,proto::MatchPlayer> *player_map; // [rsp+50h] [rbp-40h]
  const std::unordered_map<unsigned int,proto::MatchPlayer> *__for_range_0; // [rsp+58h] [rbp-38h]
  const std::pair<unsigned int const,proto::MatchPlayer> *v14; // [rsp+60h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::MatchPlayer> >::type *uid; // [rsp+68h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *match_player; // [rsp+70h] [rbp-20h]
  proto::MatchPlayer *proto_player; // [rsp+78h] [rbp-18h]

  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::RepeatedPtrField(retstr);
  __for_range = &this->match_unit_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(&this->match_unit_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(&this->match_unit_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
    unit_id = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v9);
    match_unit = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v9);
    if ( std::operator!=<MatchUnitBase>(match_unit, 0LL) )
    {
      v2 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit);
      player_map = MatchUnitBase::getPlayerMap(v2);
      __for_range_0 = player_map;
      __for_begin_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(player_map)._M_cur;
      __for_end_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,proto::MatchPlayer>,false>(
                &__for_begin_0,
                &__for_end_0) )
      {
        v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator*(&__for_begin_0);
        uid = std::get<0ul,unsigned int const,proto::MatchPlayer>(v14);
        match_player = (std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *)std::get<1ul,unsigned int const,proto::MatchPlayer>(v14);
        proto_player = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::Add(retstr);
        proto::MatchPlayer::operator=(proto_player, match_player);
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator++(&__for_begin_0);
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 211: range 000000000D7AC5DA-000000000D7ACC34
// local variable allocation has failed, the output may be wrong!
void __cdecl MatchTeam::printGuestJoinTeamStatLog(MatchTeam *const this, const MatchUnitPtr *guest_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  uint32_t HostMatchUnitId; // eax
  std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t UnitId; // eax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __int64 v11; // rax
  std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  google::protobuf::uint32 MatchType; // eax
  std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  unsigned __int64 v18; // rdx
  google::protobuf::uint32 v19; // eax
  MatchUnitBase *v20; // rax
  std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  google::protobuf::RepeatedField<unsigned int> *v22; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  google::protobuf::RepeatedField<unsigned int> *v25; // rax
  std::shared_ptr<proto_log::MatchLogBodyJoinTeam> *matched; // rax
  std::string guest_unit_ptra; // [rsp+0h] [rbp-170h] OVERLAPPED BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+20h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+28h] [rbp-148h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_begin_0; // [rsp+30h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_end_0; // [rsp+38h] [rbp-138h] BYREF
  __int64 now; // [rsp+40h] [rbp-130h]
  __int64 cost_time; // [rsp+48h] [rbp-128h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+50h] [rbp-120h]
  const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *v35; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_ptr; // [rsp+68h] [rbp-108h]
  std::unordered_map<unsigned int,proto::MatchPlayer> *__for_range_0; // [rsp+70h] [rbp-100h]
  const std::unordered_map<unsigned int,SlotContext> *__for_range_1; // [rsp+78h] [rbp-F8h]
  const std::pair<unsigned int const,SlotContext> *v40; // [rsp+80h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,SlotContext> >::type *uid_0; // [rsp+88h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,SlotContext> >::type *__1; // [rsp+90h] [rbp-E0h]
  const std::pair<unsigned int const,proto::MatchPlayer> *v43; // [rsp+98h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::MatchPlayer> >::type *uid; // [rsp+A0h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *__0; // [rsp+A8h] [rbp-C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+B0h] [rbp-C0h] BYREF
  std::string v47; // [rsp+C0h] [rbp-B0h] BYREF
  char v48[144]; // [rsp+E0h] [rbp-90h] BYREF

  guest_unit_ptra._M_string_length = (std::string::size_type)this;
  guest_unit_ptra._M_dataplus._M_p = (std::string::pointer)guest_unit_ptr;
  v2 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:216 64 16 11 log_ptr:217";
  *(_QWORD *)(v2 + 16) = MatchTeam::printGuestJoinTeamStatLog;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( !std::operator==<MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)guest_unit_ptra._M_dataplus._M_p, 0LL) )
  {
    std::allocator<char>::allocator((char *)&guest_unit_ptra._anon_0._M_allocated_capacity + 11);
    std::string::basic_string<std::allocator<char>>(
      &v47,
      _str,
      (const std::allocator<char> *)&guest_unit_ptra._anon_0._M_allocated_capacity + 11);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 1u, guest_unit_ptra);
    std::string::~string(&v47);
    std::allocator<char>::~allocator((char *)&guest_unit_ptra._anon_0._M_allocated_capacity + 11);
    common::tools::perf::make_shared<proto_log::MatchLogBodyJoinTeam>();
    v5 = std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    HostMatchUnitId = MatchTeam::getHostMatchUnitId((const MatchTeam *const)guest_unit_ptra._M_string_length);
    proto_log::MatchLogBodyJoinTeam::set_host_uid(v5, HostMatchUnitId);
    v7 = std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v8 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)guest_unit_ptra._M_dataplus._M_p);
    UnitId = MatchUnitBase::getUnitId(v8);
    proto_log::MatchLogBodyJoinTeam::set_guest_uid(v7, UnitId);
    now = common::tools::TimeUtils::getNow();
    v10 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)guest_unit_ptra._M_dataplus._M_p);
    *((_DWORD *)&guest_unit_ptra._anon_0._M_allocated_capacity + 3) = MatchUnitBase::getMatchBeginTime(v10);
    if ( now <= *((unsigned int *)&guest_unit_ptra._anon_0._M_allocated_capacity + 3) )
      v11 = 0LL;
    else
      v11 = now - *((unsigned int *)&guest_unit_ptra._anon_0._M_allocated_capacity + 3);
    cost_time = v11;
    v12 = std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::MatchLogBodyJoinTeam::set_cost_time(v12, cost_time);
    v13 = std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v14 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)guest_unit_ptra._M_dataplus._M_p);
    MatchType = MatchUnitBase::getMatchType(v14);
    proto_log::MatchLogBodyJoinTeam::set_match_type(v13, MatchType);
    v16 = std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v17 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)guest_unit_ptra._M_dataplus._M_p);
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v17);
    v18 = (unsigned __int64)(v17->_vptr_DescribalBase + 4);
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v17->_vptr_DescribalBase + 4);
    v19 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v18)(v17);
    proto_log::MatchLogBodyJoinTeam::set_match_target(v16, v19);
    __for_range = (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *)(guest_unit_ptra._M_string_length
                                                                                    + 32);
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(guest_unit_ptra._M_string_length + 32))._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v35);
      unit_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(v35);
      if ( !std::operator==<MatchUnitBase>(unit_ptr, 0LL) )
      {
        v20 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
        __for_range_0 = MatchUnitBase::getPlayerMap(v20);
        __for_begin_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(__for_range_0)._M_cur;
        __for_end_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,proto::MatchPlayer>,false>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator*(&__for_begin_0);
          uid = std::get<0ul,unsigned int const,proto::MatchPlayer>(v43);
          __0 = (std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *)std::get<1ul,unsigned int const,proto::MatchPlayer>(v43);
          v21 = std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v22 = proto_log::MatchLogBodyJoinTeam::mutable_uid_list(v21);
          google::protobuf::RepeatedField<unsigned int>::Add(v22, uid);
          std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator++(&__for_begin_0);
        }
        v23 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
        __for_range_1 = MatchUnitBase::getSlotUidMap(v23);
        __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false>::__node_type *)std::unordered_map<unsigned int,SlotContext>::begin(__for_range_1)._M_cur;
        __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false>::__node_type *)std::unordered_map<unsigned int,SlotContext>::end(__for_range_1)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,SlotContext>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false> *)&__for_begin_0,
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false> *)&__for_end_0) )
        {
          v40 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false> *const)&__for_begin_0);
          uid_0 = std::get<0ul,unsigned int const,SlotContext>(v40);
          __1 = (std::tuple_element<1,const std::pair<unsigned int const,SlotContext> >::type *)std::get<1ul,unsigned int const,SlotContext>(v40);
          v24 = std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::MatchLogBodyJoinTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v25 = proto_log::MatchLogBodyJoinTeam::mutable_uid_list(v24);
          google::protobuf::RepeatedField<unsigned int>::Add(v25, uid_0);
          std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false> *const)&__for_begin_0);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
    }
    matched = std::move<std::shared_ptr<proto_log::MatchLogBodyJoinTeam> &>((std::shared_ptr<proto_log::MatchLogBodyJoinTeam> *)(v2 + 64));
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::MatchLogBodyJoinTeam,void>(&p_body_ptr, matched);
    MatchLogHelper::printStatLog(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<proto_log::MatchLogBodyJoinTeam>::~shared_ptr((std::shared_ptr<proto_log::MatchLogBodyJoinTeam> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  if ( v48 == (char *)v2 )
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
