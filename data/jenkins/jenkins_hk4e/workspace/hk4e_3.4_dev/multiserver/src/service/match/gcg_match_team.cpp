// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/gcg_match_team.cpp

// Line 24: range 000000000D795A82-000000000D795E96
std::string *__cdecl GCGMatchTeam::getDesc[abi:cxx11](std::string *retstr, const GCGMatchTeam *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  uint32_t HostMatchUnitId; // eax
  __int64 v9; // rax
  __int64 v10; // r14
  uint32_t MatchUnitCount; // eax
  __int64 v12; // rax
  __int64 v13; // r14
  uint32_t Time; // eax
  __int64 v15; // rax
  __int64 v16; // r14
  uint32_t PlayerCount; // eax
  __int64 v18; // rax
  __int64 v19; // r14
  uint32_t PossiblePlayerCount; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  char v27[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 6 oss:25";
  *(_QWORD *)(v2 + 16) = GCGMatchTeam::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862732] = -218103808;
  v4[536862733] = -202116109;
  v4[536862734] = -202116109;
  std::ostringstream::basic_ostringstream(v2 + 32);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 32, "[match_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  v6 = std::ostream::operator<<(v5, this->match_id_);
  v7 = std::operator<<<std::char_traits<char>>(v6, " ,host_unit_id: ");
  HostMatchUnitId = MatchTeam::getHostMatchUnitId(this);
  v9 = std::ostream::operator<<(v7, HostMatchUnitId);
  v10 = std::operator<<<std::char_traits<char>>(v9, " ,match_unit_count: ");
  MatchUnitCount = MatchTeam::getMatchUnitCount(this);
  v12 = std::ostream::operator<<(v10, MatchUnitCount);
  v13 = std::operator<<<std::char_traits<char>>(v12, " ,create_time:");
  Time = MatchTeam::getCreateTime(this);
  v15 = std::ostream::operator<<(v13, Time);
  v16 = std::operator<<<std::char_traits<char>>(v15, " ,player_count: ");
  PlayerCount = MatchTeam::getPlayerCount(this);
  v18 = std::ostream::operator<<(v16, PlayerCount);
  v19 = std::operator<<<std::char_traits<char>>(v18, " ,possible_player_count: ");
  PossiblePlayerCount = MatchTeam::getPossiblePlayerCount(this);
  v21 = std::ostream::operator<<(v19, PossiblePlayerCount);
  v22 = std::operator<<<std::char_traits<char>>(v21, " ,rank_idx_: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rank_idx_);
  }
  v23 = std::ostream::operator<<(v22, this->rank_idx_);
  v24 = std::operator<<<std::char_traits<char>>(v23, " ,extend_: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->extend_);
  }
  v25 = std::ostream::operator<<(v24, this->extend_);
  std::operator<<<std::char_traits<char>>(v25, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v27 == (char *)v2 )
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

// Line 33: range 000000000D795E98-000000000D795EFB
bool __cdecl GCGMatchTeam::isFull(GCGMatchTeam *const this)
{
  uint32_t PlayerCount; // ecx

  PlayerCount = MatchTeam::getPlayerCount(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_player_num_);
  }
  return PlayerCount >= this->max_player_num_;
};

// Line 38: range 000000000D795EFC-000000000D7963AB
int32_t __cdecl GCGMatchTeam::initWithMatchUnit(GCGMatchTeam *const this, MatchUnitPtr *p_match_unit_ptr)
{
  std::shared_ptr<MatchUnitBase> *v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  int32_t v6; // r14d
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t MatchId; // edx
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t RankIdx; // ecx
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Extend; // edx
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const proto::GCGDuelExtra *GCGDetail; // rax
  bool is_internal; // dl
  GCGMatchUnit *v16; // rax
  uint32_t v17; // esi
  int32_t result; // eax
  common::milog::MiLogStream v19; // [rsp+10h] [rbp-90h] BYREF
  char v20[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<MatchUnitBase> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<MatchUnitBase> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 15 gcg_unit_ptr:44";
  v2[1]._M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)GCGMatchTeam::initWithMatchUnit;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::shared_ptr<MatchUnitBase>::shared_ptr(v2 + 2, p_match_unit_ptr);
  v5 = MatchTeam::initWithMatchUnit(this, v2 + 2) != 0;
  std::shared_ptr<MatchUnitBase>::~shared_ptr(v2 + 2);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_team.cpp",
      "initWithMatchUnit",
      41);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v19,
      (const char (*)[38])"MatchTeam init with match unit failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>(v2 + 2);
    if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)&v2[2]) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/gcg_match_team.cpp",
        "initWithMatchUnit",
        47);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v19,
        (const char (*)[28])"cast to gcg_unit_ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      MatchId = GCGMatchUnit::getMatchId(v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->match_id_);
      }
      this->match_id_ = MatchId;
      if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->team_status_);
      }
      this->team_status_ = GCG_TEAM_MATCH;
      v9 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      RankIdx = GCGMatchUnit::getRankIdx(v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->rank_idx_);
      }
      this->rank_idx_ = RankIdx;
      v11 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      Extend = GCGMatchUnit::getExtend(v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->extend_);
      }
      this->extend_ = Extend;
      v13 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      GCGDetail = GCGMatchUnit::getGCGDetail(v13);
      is_internal = proto::GCGDuelExtra::is_internal(GCGDetail);
      if ( *(char *)(((unsigned __int64)&this->is_internal_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_internal_);
      this->is_internal_ = is_internal;
      v16 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
      if ( GCGMatchUnit::isMatchAI(v16) )
      {
        v17 = common::tools::RandomUtils::rand<int>(1, 3);
        if ( *(_BYTE *)(((unsigned __int64)&this->ai_confirm_timeout_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->ai_confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->ai_confirm_timeout_);
        }
        this->ai_confirm_timeout_ = v17;
        GCGMatchTeam::onMatchAISucc(this);
      }
      v6 = 0;
    }
    std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)&v2[2]);
  }
  result = v6;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 64: range 000000000D7963AC-000000000D796B18
int32_t __cdecl GCGMatchTeam::addMatchUnit(GCGMatchTeam *const this, MatchUnitPtr *p_unit_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  GCGMatchUnit *v6; // rax
  uint32_t PlayerCount; // r14d
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // ecx
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t v12; // eax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // eax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t HostPlatfromType; // eax
  bool v23; // r14
  int32_t result; // eax
  uint32_t rank_idx; // [rsp+14h] [rbp-14Ch]
  uint32_t extend; // [rsp+18h] [rbp-148h]
  uint32_t delta; // [rsp+1Ch] [rbp-144h]
  std::shared_ptr<MatchUnitBase> p_match_unit_ptr; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v29; // [rsp+30h] [rbp-130h] BYREF
  char v30[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 17 match_unit_ptr:70 64 16 22 host_match_unit_ptr:80 96 24 22 match_unit_uid_vec:105 160"
                        " 24 22 match_team_uid_vec:111";
  *(_QWORD *)(v2 + 16) = GCGMatchTeam::addMatchUnit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  if ( !GCGMatchTeam::isInMatch(this) )
  {
    v5 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
    if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/gcg_match_team.cpp",
        "addMatchUnit",
        73);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v29,
        (const char (*)[23])"match unit ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v29);
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( GCGMatchUnit::isMatchAI(v6) )
      {
        v5 = -1;
      }
      else
      {
        MatchTeam::getHostMatchUnit((const MatchTeam *const)(v2 + 64));
        if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 64)) )
        {
          v5 = -1;
        }
        else
        {
          PlayerCount = MatchTeam::getPlayerCount(this);
          v8 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          v9 = PlayerCount + MatchUnitBase::getPlayerCount(v8);
          if ( *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->max_player_num_);
          }
          if ( v9 <= this->max_player_num_ )
          {
            v10 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            rank_idx = GCGMatchUnit::getRankIdx(v10);
            v11 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            extend = GCGMatchUnit::getExtend(v11);
            if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->rank_idx_);
            }
            if ( rank_idx == this->rank_idx_ )
              goto LABEL_29;
            if ( rank_idx <= this->rank_idx_ )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_idx_ >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_load4(&this->rank_idx_);
              }
              v12 = this->rank_idx_ - rank_idx;
            }
            else
            {
              v12 = rank_idx - this->rank_idx_;
            }
            delta = v12;
            if ( v12 <= extend )
              goto LABEL_29;
            if ( *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->extend_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->extend_);
            }
            if ( delta <= this->extend_ )
            {
LABEL_29:
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
              v13 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              MatchUnitBase::getAllMatchPlayerUids(v13, (std::vector<unsigned int> *)(v2 + 96));
              if ( MatchTeam::isPlayerInMatchUnitBlacklist(this, (const std::vector<unsigned int> *)(v2 + 96)) )
              {
                v5 = -1;
              }
              else
              {
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
                MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 160));
                v14 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                if ( MatchUnitBase::isPlayerInBlacklist(v14, (const std::vector<unsigned int> *)(v2 + 160)) )
                {
                  v5 = -1;
                }
                else
                {
                  v15 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                  if ( MatchUnitBase::isHostOnlyMatchWithPSPlayer(v15)
                    && (v16 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
                        v17 = MatchUnitBase::getHostPlatfromType(v16),
                        !TxtConfigMgr::isPsnPlatform(v17)) )
                  {
                    v5 = -1;
                  }
                  else
                  {
                    v19 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                    if ( MatchUnitBase::isHostOnlyMatchWithPSPlayer(v19)
                      && (v20 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
                          HostPlatfromType = MatchUnitBase::getHostPlatfromType(v20),
                          !TxtConfigMgr::isPsnPlatform(HostPlatfromType)) )
                    {
                      v5 = -1;
                    }
                    else
                    {
                      std::shared_ptr<MatchUnitBase>::shared_ptr<GCGMatchUnit,void>(
                        &p_match_unit_ptr,
                        (const std::shared_ptr<GCGMatchUnit> *)(v2 + 32));
                      v23 = MatchTeam::addMatchUnit(this, &p_match_unit_ptr, MATCH_IDENTITY_GUEST) != 0;
                      std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
                      if ( v23 )
                      {
                        common::milog::MiLogStream::create(
                          &v29,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/service/match/gcg_match_team.cpp",
                          "addMatchUnit",
                          130);
                        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                          &v29,
                          (const char (*)[22])off_1BA18740);
                        common::milog::MiLogStream::~MiLogStream(&v29);
                        v5 = -1;
                      }
                      else
                      {
                        if ( GCGMatchTeam::isFull(this) )
                          GCGMatchTeam::onMatchSucc(this);
                        v5 = 0;
                      }
                    }
                  }
                }
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
            }
            else
            {
              v5 = -1;
            }
          }
          else
          {
            v5 = -1;
          }
        }
        std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64));
      }
    }
    std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v2 + 32));
  }
  result = v5;
  if ( v30 == (char *)v2 )
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

// Line 143: range 000000000D796B1A-000000000D796ED9
void __fastcall GCGMatchTeam::removeMatchUnit(GCGMatchTeam *const this, uint32_t unit_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  MatchUnitBase *v6; // rax
  std::less<unsigned int> __comp; // [rsp+22h] [rbp-10Eh] BYREF
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-10Dh] BYREF
  _DWORD __l[5]; // [rsp+24h] [rbp-10Ch] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+38h] [rbp-F8h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+40h] [rbp-F0h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_ptr; // [rsp+58h] [rbp-D8h]
  char v15[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 unit_id:142 48 16 17 candidate_ptr:153 80 48 11 uid_set:148";
  *(_QWORD *)(v2 + 16) = GCGMatchTeam::removeMatchUnit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = unit_id;
  match_unit_map = MatchTeam::getMatchUnitMap(this);
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
    match_unit_map,
    (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v2 + 32));
  if ( GCGMatchTeam::isInConfirm(this) )
  {
    __l[0] = *(_DWORD *)(v2 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(
      (std::set<unsigned int> *const)(v2 + 80),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
      &__comp,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    GCGMatchTeam::onTeamDismiss(this, (const std::set<unsigned int> *)(v2 + 80), MATCH_PLAYER_CANCEL);
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 80));
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 48), 0LL);
    __for_range = match_unit_map;
    *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator *)&__l[1] = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(match_unit_map);
    *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator *)&__l[3] = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(match_unit_map);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)&__l[1],
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)&__l[3]) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)&__l[1]);
      _ = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
      unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
      if ( !std::operator==<MatchUnitBase>(0LL, unit_ptr) )
      {
        v5 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
        if ( MatchUnitBase::getMatchIdentity(v5) == MATCH_IDENTITY_HOST )
          goto LABEL_15;
        std::shared_ptr<MatchUnitBase>::operator=((std::shared_ptr<MatchUnitBase> *const)(v2 + 48), unit_ptr);
        break;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)&__l[1]);
    }
    if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 48)) )
    {
      GCGMatchTeam::setStatusInvalid(this);
    }
    else
    {
      v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      MatchUnitBase::setMatchIdentity(v6, MATCH_IDENTITY_HOST);
    }
LABEL_15:
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 48));
  }
  if ( v15 == (char *)v2 )
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

// Line 176: range 000000000D796EDA-000000000D796F7B
void __cdecl GCGMatchTeam::onMatchSucc(GCGMatchTeam *const this)
{
  uint32_t Now; // esi

  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_status_);
  }
  this->team_status_ = GCG_TEAM_CONFIRM;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confirm_begin_time_);
  }
  this->confirm_begin_time_ = Now;
  GCGMatchTeam::notifyMatchSuccToAll(this);
};

// Line 186: range 000000000D796F7C-000000000D7973C8
void __cdecl GCGMatchTeam::onMatchAISucc(GCGMatchTeam *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  data::GCGPlayingExcelConfigMgrBase *v4; // rdx
  proto::ProfilePicture *v5; // r14
  std::vector<unsigned int>::reference v6; // rax
  google::protobuf::uint32 *v7; // rdx
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t Now; // esi
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+10h] [rbp-D0h]
  data::GCGMatchExcelConfig *match_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 14 result_vec:193";
  *(_QWORD *)(v1 + 16) = GCGMatchTeam::onMatchAISucc;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_match_ai_);
  this->is_match_ai_ = 1;
  Config::getConfig();
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config_.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  v4 = &gcg_playing_config_mgr->data::GCGPlayingExcelConfigMgrBase;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  match_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(v4, this->match_id_);
  if ( match_config_ptr )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
    common::tools::RandomUtils::randomSelect<unsigned int>(
      &match_config_ptr->ai_profile_pictrue_list,
      (std::vector<unsigned int> *)(v1 + 32),
      1u);
    if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 32)) )
    {
      v5 = proto::OnlinePlayerInfo::mutable_profile_picture(&this->ai_info_);
      v6 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 32), 0LL);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      proto::ProfilePicture::set_avatar_id(v5, *v7);
    }
    if ( *(char *)(((unsigned __int64)&this->is_internal_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_internal_);
    v8 = GCGPlayingExcelConfigMgr::getMatchAIRandomName[abi:cxx11](gcg_playing_config_mgr, this->is_internal_);
    proto::OnlinePlayerInfo::set_nickname(&this->ai_info_, v8);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/gcg_match_team.cpp",
      "onMatchAISucc",
      203);
    v9 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->match_id_);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_status_);
  }
  this->team_status_ = GCG_TEAM_CONFIRM;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confirm_begin_time_);
  }
  this->confirm_begin_time_ = Now;
  GCGMatchTeam::notifyMatchSuccToAll(this);
  if ( v15 == (char *)v1 )
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
};

// Line 214: range 000000000D7973CA-000000000D7979DC
void __cdecl GCGMatchTeam::notifyMatchSuccToAll(GCGMatchTeam *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t UnitId; // eax
  uint32_t confirm_begin_time; // ecx
  MatchUnitBase *v7; // rax
  const proto::OnlinePlayerInfo *v8; // r14
  proto::OnlinePlayerInfo *v9; // rax
  std::set<unsigned int>::size_type v10; // rax
  proto::OnlinePlayerInfo *v11; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+18h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_begin_0; // [rsp+28h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_end_0; // [rsp+30h] [rbp-160h] BYREF
  proto::GCGMatchInfo *match_info; // [rsp+38h] [rbp-158h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+40h] [rbp-150h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+48h] [rbp-148h]
  proto::MatchPlayerInfo *player_info_0; // [rsp+50h] [rbp-140h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+58h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+60h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+68h] [rbp-128h]
  std::unordered_map<unsigned int,proto::MatchPlayer> *player_map; // [rsp+70h] [rbp-120h]
  std::unordered_map<unsigned int,proto::MatchPlayer> *__for_range_0; // [rsp+78h] [rbp-118h]
  std::pair<unsigned int const,proto::MatchPlayer> *v25; // [rsp+80h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,proto::MatchPlayer> >::type *uid; // [rsp+88h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,proto::MatchPlayer> >::type *match_player; // [rsp+90h] [rbp-100h]
  proto::MatchPlayerInfo *player_info; // [rsp+98h] [rbp-F8h]
  common::milog::MiLogStream v29; // [rsp+A0h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 18 match_unit_ptr:215 64 64 10 notify:221";
  *(_QWORD *)(v1 + 16) = GCGMatchTeam::notifyMatchSuccToAll;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862724] = -202116109;
  MatchTeam::getHostMatchUnit((const MatchTeam *const)(v1 + 32));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_team.cpp",
      "notifyMatchSuccToAll",
      218);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v29, (const char (*)[27])off_1BA18900);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  else
  {
    proto::PlayerMatchSuccNotify::PlayerMatchSuccNotify((proto::PlayerMatchSuccNotify *const)(v1 + 64));
    proto::PlayerMatchSuccNotify::set_match_type((proto::PlayerMatchSuccNotify *const)(v1 + 64), MATCH_TYPE_GCG);
    v4 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    UnitId = MatchUnitBase::getUnitId(v4);
    proto::PlayerMatchSuccNotify::set_host_uid((proto::PlayerMatchSuccNotify *const)(v1 + 64), UnitId);
    if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->confirm_begin_time_);
    }
    confirm_begin_time = this->confirm_begin_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->confirm_timeout_);
    }
    proto::PlayerMatchSuccNotify::set_confirm_end_time(
      (proto::PlayerMatchSuccNotify *const)(v1 + 64),
      confirm_begin_time + this->confirm_timeout_);
    match_info = proto::PlayerMatchSuccNotify::mutable_gcg_match_info((proto::PlayerMatchSuccNotify *const)(v1 + 64));
    match_unit_map = MatchTeam::getMatchUnitMap(this);
    __for_range = match_unit_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(match_unit_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(match_unit_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
      match_unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
      if ( !std::operator==<MatchUnitBase>(0LL, match_unit_ptr) )
      {
        v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
        player_map = MatchUnitBase::getPlayerMap(v7);
        __for_range_0 = player_map;
        __for_begin_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(player_map)._M_cur;
        __for_end_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,proto::MatchPlayer>,false>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator*(&__for_begin_0);
          uid = std::get<0ul,unsigned int const,proto::MatchPlayer>(v25);
          match_player = std::get<1ul,unsigned int const,proto::MatchPlayer>(v25);
          player_info = proto::GCGMatchInfo::add_player_list(match_info);
          v8 = proto::MatchPlayer::player_info(match_player);
          v9 = proto::MatchPlayerInfo::mutable_player_info(player_info);
          proto::OnlinePlayerInfo::operator=(v9, v8);
          v10 = std::set<unsigned int>::count(&this->confirm_uid_set_, uid);
          proto::MatchPlayerInfo::set_is_agreed(player_info, v10 != 0);
          std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator++(&__for_begin_0);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_match_ai_);
    if ( this->is_match_ai_ )
    {
      player_info_0 = proto::GCGMatchInfo::add_player_list(match_info);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ai_confirm_);
      }
      proto::MatchPlayerInfo::set_is_agreed(player_info_0, this->is_ai_confirm_);
      v11 = proto::MatchPlayerInfo::mutable_player_info(player_info_0);
      proto::OnlinePlayerInfo::operator=(v11, &this->ai_info_);
    }
    MatchTeam::sendToAllPlayer<proto::PlayerMatchSuccNotify>(this, (proto::PlayerMatchSuccNotify *)(v1 + 64));
    proto::PlayerMatchSuccNotify::~PlayerMatchSuccNotify((proto::PlayerMatchSuccNotify *const)(v1 + 64));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 32));
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 252: range 000000000D7979DE-000000000D797FBC
void __cdecl GCGMatchTeam::onTeamDismiss(
        GCGMatchTeam *const this,
        const std::set<unsigned int> *uid_set,
        proto::MatchReason reason)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  MatchUnitBase *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  MatchUnitBase *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool is_black_unit; // [rsp+23h] [rbp-16Dh]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin_0; // [rsp+28h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end_0; // [rsp+30h] [rbp-160h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-158h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-150h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-148h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+50h] [rbp-140h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range_0; // [rsp+58h] [rbp-138h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+60h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+68h] [rbp-128h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_ptr; // [rsp+70h] [rbp-120h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-118h]
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-110h] BYREF
  char v29[240]; // [rsp+A0h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:279 48 24 15 tmp_uid_vec:273 112 48 10 notify:254";
  *(_QWORD *)(v3 + 16) = GCGMatchTeam::onTeamDismiss;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = -218959360;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_status_);
  }
  this->team_status_ = GCG_TEAM_DISMISS;
  proto::PlayerGCGMatchDismissNotify::PlayerGCGMatchDismissNotify((proto::PlayerGCGMatchDismissNotify *const)(v3 + 112));
  proto::PlayerGCGMatchDismissNotify::set_reason((proto::PlayerGCGMatchDismissNotify *const)(v3 + 112), reason);
  __for_range = uid_set;
  __for_begin._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(uid_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::PlayerGCGMatchDismissNotify::add_uid_list((proto::PlayerGCGMatchDismissNotify *const)(v3 + 112), *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  MatchTeam::sendToAllPlayer<proto::PlayerGCGMatchDismissNotify>(this, (proto::PlayerGCGMatchDismissNotify *)(v3 + 112));
  match_unit_map = MatchTeam::getMatchUnitMap(this);
  __for_range_0 = match_unit_map;
  __for_begin_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(match_unit_map)._M_cur;
  __for_end_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            &__for_begin_0,
            &__for_end_0) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin_0);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
    unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
    if ( !std::operator==<MatchUnitBase>(0LL, unit_ptr) )
    {
      v8 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
      if ( MatchUnitBase::getRematchCount(v8) <= 4 )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 48));
        v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
        if ( !MatchUnitBase::getAllMatchPlayerUids(v9, (std::vector<unsigned int> *)(v3 + 48)) )
        {
          is_black_unit = 0;
          __for_range_1 = (std::vector<unsigned int> *)(v3 + 48);
          __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 48))._M_current;
          __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
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
            *(_DWORD *)(v3 + 32) = *v11;
            if ( std::set<unsigned int>::count(uid_set, (const std::set<unsigned int>::key_type *)(v3 + 32)) )
            {
              is_black_unit = 1;
              break;
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          }
          if ( !is_black_unit )
          {
            v12 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
            MatchUnitBase::rematch(v12);
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/service/match/gcg_match_team.cpp",
              "onTeamDismiss",
              292);
            v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    &v28,
                    (const char (*)[34])"[MATCH] host unit quit, rematch: ");
            v14 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
            common::milog::MiLogStream::operator<<<MatchUnitBase,(MatchUnitBase*)0>(v13, v14);
            common::milog::MiLogStream::~MiLogStream(&v28);
          }
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 48));
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin_0);
  }
  proto::PlayerGCGMatchDismissNotify::~PlayerGCGMatchDismissNotify((proto::PlayerGCGMatchDismissNotify *const)(v3 + 112));
  if ( v29 == (char *)v3 )
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

// Line 297: range 000000000D797FBE-000000000D79806C
bool __cdecl GCGMatchTeam::isValid(GCGMatchTeam *const this)
{
  bool v1; // r12
  std::shared_ptr<MatchUnitBase> __a; // [rsp+10h] [rbp-20h] BYREF

  MatchTeam::getHostMatchUnit((const MatchTeam *const)&__a);
  v1 = std::operator!=<MatchUnitBase>(0LL, &__a) && (GCGMatchTeam::isInMatch(this) || GCGMatchTeam::isInConfirm(this));
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&__a);
  return v1;
};

// Line 302: range 000000000D79806E-000000000D79814F
void __fastcall GCGMatchTeam::addConfirmUid(GCGMatchTeam *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:301";
  *(_QWORD *)(v2 + 16) = GCGMatchTeam::addConfirmUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::set<unsigned int>::insert(&this->confirm_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  GCGMatchTeam::refreshConfirm(this, 0);
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

// Line 308: range 000000000D798150-000000000D7986A5
void __cdecl GCGMatchTeam::refreshConfirm(GCGMatchTeam *const this, uint32_t now)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t confirm_begin_time; // ecx
  uint32_t v6; // ecx
  uint32_t v8; // ecx
  uint32_t nowa; // [rsp+4h] [rbp-BCh]
  char v10[176]; // [rsp+10h] [rbp-B0h] BYREF

  nowa = now;
  v2 = (std::set<unsigned int> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 11 uid_set:325";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GCGMatchTeam::refreshConfirm;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( GCGMatchTeam::isInConfirm(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_match_ai_);
    if ( this->is_match_ai_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ai_confirm_);
      }
      if ( !this->is_ai_confirm_ && now )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->confirm_begin_time_);
        }
        confirm_begin_time = this->confirm_begin_time_;
        if ( *(_BYTE *)(((unsigned __int64)&this->ai_confirm_timeout_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->ai_confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->ai_confirm_timeout_);
        }
        if ( now > confirm_begin_time + this->ai_confirm_timeout_ )
        {
          GCGMatchTeam::aiConfirm(this);
LABEL_24:
          std::set<unsigned int>::set(v2 + 1);
          if ( GCGMatchTeam::getAllUnconfirmUid(this, v2 + 1) || !std::set<unsigned int>::empty(v2 + 1) )
          {
            if ( !now )
              nowa = common::tools::TimeUtils::getNow();
            if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->confirm_begin_time_);
            }
            v8 = this->confirm_begin_time_;
            if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->confirm_timeout_);
            }
            if ( nowa > v8 + this->confirm_timeout_ )
              GCGMatchTeam::onTeamDismiss(this, v2 + 1, MATCH_CONFIRM_TIMEOUT);
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
              __asan_report_load1(&this->is_match_ai_);
            if ( !this->is_match_ai_ )
              goto LABEL_44;
            if ( *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3)
                                                                + 0x7FFF8000) )
            {
              __asan_report_load1(&this->is_ai_confirm_);
            }
            if ( this->is_ai_confirm_ )
            {
LABEL_44:
              if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store4(&this->team_status_);
              }
              this->team_status_ = GCG_TEAM_FINISH;
              GCGMatchTeam::notifyMatchFinish(this);
            }
          }
          std::set<unsigned int>::~set(v2 + 1);
          goto LABEL_48;
        }
      }
    }
    if ( !now )
      goto LABEL_24;
    if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->confirm_begin_time_);
    }
    v6 = this->confirm_begin_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->confirm_timeout_);
    }
    if ( now > v6 + this->confirm_timeout_ )
      goto LABEL_24;
  }
LABEL_48:
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 348: range 000000000D7986A6-000000000D7988D0
void __cdecl GCGMatchTeam::aiConfirm(GCGMatchTeam *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:354";
  *(_QWORD *)(v1 + 16) = GCGMatchTeam::aiConfirm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_ai_confirm_);
  }
  if ( !this->is_ai_confirm_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ai_confirm_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_ai_confirm_);
    }
    this->is_ai_confirm_ = 1;
    proto::PlayerGCGMatchConfirmNotify::PlayerGCGMatchConfirmNotify((proto::PlayerGCGMatchConfirmNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_id_);
    }
    proto::PlayerGCGMatchConfirmNotify::set_match_id(
      (proto::PlayerGCGMatchConfirmNotify *const)(v1 + 32),
      this->match_id_);
    proto::PlayerGCGMatchConfirmNotify::set_uid((proto::PlayerGCGMatchConfirmNotify *const)(v1 + 32), 0);
    proto::PlayerGCGMatchConfirmNotify::set_is_agree((proto::PlayerGCGMatchConfirmNotify *const)(v1 + 32), 1);
    MatchTeam::sendToAllPlayer<proto::PlayerGCGMatchConfirmNotify>(
      this,
      (proto::PlayerGCGMatchConfirmNotify *)(v1 + 32));
    proto::PlayerGCGMatchConfirmNotify::~PlayerGCGMatchConfirmNotify((proto::PlayerGCGMatchConfirmNotify *const)(v1 + 32));
  }
  if ( v4 == (char *)v1 )
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

// Line 362: range 000000000D7988D2-000000000D798C41
int32_t __cdecl GCGMatchTeam::getAllUnconfirmUid(GCGMatchTeam *const this, std::set<unsigned int> *uid_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int (**vptr_DescribalBase)(...); // rax
  int32_t v7; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-F0h] BYREF
  std::string val; // [rsp+50h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:369 64 24 11 uid_vec:363";
  *(_QWORD *)(v2 + 16) = GCGMatchTeam::getAllUnconfirmUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_team.cpp",
      "getAllUnconfirmUid",
      366);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v14,
           (const char (*)[36])"[Match] get all uids failed match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = -1;
  }
  else
  {
    __for_range = (std::vector<unsigned int> *)(v2 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 48) = *v9;
      if ( !std::set<unsigned int>::count(&this->confirm_uid_set_, (const std::set<unsigned int>::key_type *)(v2 + 48)) )
        std::set<unsigned int>::insert(uid_set, (const std::set<unsigned int>::value_type *)(v2 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v7 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v7;
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
  return result;
};

// Line 380: range 000000000D798C42-000000000D799589
void __cdecl GCGMatchTeam::notifyMatchFinish(GCGMatchTeam *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int (**vptr_DescribalBase)(...); // rax
  google::protobuf::uint32 Now; // eax
  google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *matched; // rdx
  proto::OnlinePlayerInfo *v8; // rax
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t UnitId; // eax
  common::minet::Packet *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  google::protobuf::uint32 v18; // eax
  google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *v19; // rdx
  common::minet::Packet *v20; // rax
  common::minet::Packet *v21; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t v23; // eax
  common::minet::Packet *v24; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // r14
  unsigned __int64 v27; // rax
  void (__fastcall *v28)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> v29; // [rsp+10h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v30; // [rsp+20h] [rbp-1D0h] BYREF
  std::string val; // [rsp+40h] [rbp-1B0h] BYREF
  char v32[400]; // [rsp+60h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 16 18 match_unit_ptr:381 64 16 14 packet_ptr:415 96 24 10 notify:388 160 56 10 notify:411 2"
                        "56 64 10 notify:393";
  *(_QWORD *)(v1 + 16) = GCGMatchTeam::notifyMatchFinish;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862730] = -202116109;
  MatchTeam::getHostMatchUnit((const MatchTeam *const)(v1 + 32));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_team.cpp",
      "notifyMatchFinish",
      384);
    v4 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v30,
           (const char (*)[43])"[Match] get host match unit failed match: ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    vptr_DescribalBase = this->_vptr_DescribalBase;
    if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_DescribalBase);
    (*vptr_DescribalBase)(&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    proto::ServerGCGMatchFinishNotify::ServerGCGMatchFinishNotify((proto::ServerGCGMatchFinishNotify *const)(v1 + 96));
    MatchTeam::sendToAllPlayer<proto::ServerGCGMatchFinishNotify>(this, (proto::ServerGCGMatchFinishNotify *)(v1 + 96));
    proto::ServerGCGMatchFinishNotify::~ServerGCGMatchFinishNotify((proto::ServerGCGMatchFinishNotify *const)(v1 + 96));
    if ( *(char *)(((unsigned __int64)&this->is_match_ai_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_match_ai_);
    if ( this->is_match_ai_ )
    {
      proto::ServerGCGCreateMatchAIGameNotify::ServerGCGCreateMatchAIGameNotify((proto::ServerGCGCreateMatchAIGameNotify *const)(v1 + 256));
      Now = common::tools::TimeUtils::getNow();
      proto::ServerGCGCreateMatchAIGameNotify::set_try_create_time(
        (proto::ServerGCGCreateMatchAIGameNotify *const)(v1 + 256),
        Now);
      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_id_);
      }
      proto::ServerGCGCreateMatchAIGameNotify::set_match_id(
        (proto::ServerGCGCreateMatchAIGameNotify *const)(v1 + 256),
        this->match_id_);
      matched = proto::ServerGCGCreateMatchAIGameNotify::mutable_gcg_match_player_list((proto::ServerGCGCreateMatchAIGameNotify *const)(v1 + 256));
      GCGMatchTeam::fillGCGMatchPlayerList(this, matched);
      v8 = proto::ServerGCGCreateMatchAIGameNotify::mutable_ai_info((proto::ServerGCGCreateMatchAIGameNotify *const)(v1 + 256));
      proto::OnlinePlayerInfo::operator=(v8, &this->ai_info_);
      common::minet::PacketUtils::createPacket();
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/gcg_match_team.cpp",
          "notifyMatchFinish",
          401);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[28])"[Match] createPacket failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      else
      {
        v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::minet::Packet::setProto<proto::ServerGCGCreateMatchAIGameNotify>(
          v9,
          (const proto::ServerGCGCreateMatchAIGameNotify *)(v1 + 256));
        v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v11 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        UnitId = MatchUnitBase::getUnitId(v11);
        common::minet::Packet::setUserId(v10, UnitId);
        v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::minet::Packet::setTargetService(v13, 0x14u);
        v14 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v14);
        v16 = (unsigned __int64)(v15->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v15->_vptr_NetworkMgrBase + 8);
        v17 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v16;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v29,
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
        v17(v15, &v29);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v29);
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 64));
      proto::ServerGCGCreateMatchAIGameNotify::~ServerGCGCreateMatchAIGameNotify((proto::ServerGCGCreateMatchAIGameNotify *const)(v1 + 256));
    }
    else
    {
      proto::ServerGCGCreateMatchGameNotify::ServerGCGCreateMatchGameNotify((proto::ServerGCGCreateMatchGameNotify *const)(v1 + 160));
      v18 = common::tools::TimeUtils::getNow();
      proto::ServerGCGCreateMatchGameNotify::set_try_create_time(
        (proto::ServerGCGCreateMatchGameNotify *const)(v1 + 160),
        v18);
      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_id_);
      }
      proto::ServerGCGCreateMatchGameNotify::set_match_id(
        (proto::ServerGCGCreateMatchGameNotify *const)(v1 + 160),
        this->match_id_);
      v19 = proto::ServerGCGCreateMatchGameNotify::mutable_gcg_match_player_list((proto::ServerGCGCreateMatchGameNotify *const)(v1 + 160));
      GCGMatchTeam::fillGCGMatchPlayerList(this, v19);
      common::minet::PacketUtils::createPacket();
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/gcg_match_team.cpp",
          "notifyMatchFinish",
          418);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[28])"[Match] createPacket failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      else
      {
        v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::minet::Packet::setProto<proto::ServerGCGCreateMatchGameNotify>(
          v20,
          (const proto::ServerGCGCreateMatchGameNotify *)(v1 + 160));
        v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v22 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v23 = MatchUnitBase::getUnitId(v22);
        common::minet::Packet::setUserId(v21, v23);
        v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        common::minet::Packet::setTargetService(v24, 0x14u);
        v25 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        v26 = v25;
        if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v25);
        v27 = (unsigned __int64)(v26->_vptr_NetworkMgrBase + 8);
        if ( *(_BYTE *)((v27 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v26->_vptr_NetworkMgrBase + 8);
        v28 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v27;
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &v29,
          (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
        v28(v26, &v29);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&v29);
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 64));
      proto::ServerGCGCreateMatchGameNotify::~ServerGCGCreateMatchGameNotify((proto::ServerGCGCreateMatchGameNotify *const)(v1 + 160));
    }
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 32));
  if ( v32 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 429: range 000000000D79958A-000000000D799608
proto::MatchReason __cdecl GCGMatchTeam::getMatchReasonByStatus(GCGMatchTeam *const this)
{
  GCGMatchTeam::GCGTeamStatus team_status; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->team_status_);
  }
  team_status = this->team_status_;
  if ( team_status == GCG_TEAM_DISMISS )
    return 2;
  if ( team_status <= GCG_TEAM_DISMISS )
  {
    if ( team_status == GCG_TEAM_INVALID )
      return 5;
    if ( team_status == GCG_TEAM_FINISH )
      return 4;
  }
  return 0;
};

// Line 445: range 000000000D79960A-000000000D79990A
void __cdecl GCGMatchTeam::fillGCGMatchPlayerList(
        GCGMatchTeam *const this,
        google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo> *repeated_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::MatchPlayer *matched; // rax
  proto::GCGDuelExtra *v8; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator __for_begin_0; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::const_iterator __for_end_0; // [rsp+30h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+38h] [rbp-B8h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+40h] [rbp-B0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_id; // [rsp+48h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit; // [rsp+50h] [rbp-A0h]
  const std::unordered_map<unsigned int,proto::MatchPlayer> *player_map; // [rsp+58h] [rbp-98h]
  const proto::GCGDuelExtra *gcg_duel_extra; // [rsp+60h] [rbp-90h]
  const std::unordered_map<unsigned int,proto::MatchPlayer> *__for_range_0; // [rsp+68h] [rbp-88h]
  const std::pair<unsigned int const,proto::MatchPlayer> *v20; // [rsp+70h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::MatchPlayer> >::type *uid; // [rsp+78h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *match_player; // [rsp+80h] [rbp-70h]
  proto::GCGMatchPlayerInfo *proto_player; // [rsp+88h] [rbp-68h]
  char v24[96]; // [rsp+90h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 gcg_match_unit_ptr:448";
  *(_QWORD *)(v2 + 16) = GCGMatchTeam::fillGCGMatchPlayerList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = MatchTeam::getMatchUnitMap(this);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
    unit_id = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
    match_unit = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
    std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
    if ( std::operator!=<GCGMatchUnit>((const std::shared_ptr<GCGMatchUnit> *)(v2 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      player_map = MatchUnitBase::getPlayerMap(v5);
      v6 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      gcg_duel_extra = GCGMatchUnit::getGCGDetail(v6);
      __for_range_0 = player_map;
      __for_begin_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(player_map)._M_cur;
      __for_end_0._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,proto::MatchPlayer>,false>(
                &__for_begin_0,
                &__for_end_0) )
      {
        v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator*(&__for_begin_0);
        uid = std::get<0ul,unsigned int const,proto::MatchPlayer>(v20);
        match_player = (std::tuple_element<1,const std::pair<unsigned int const,proto::MatchPlayer> >::type *)std::get<1ul,unsigned int const,proto::MatchPlayer>(v20);
        proto_player = google::protobuf::RepeatedPtrField<proto::GCGMatchPlayerInfo>::Add(repeated_list);
        matched = proto::GCGMatchPlayerInfo::mutable_match_player(proto_player);
        proto::MatchPlayer::operator=(matched, match_player);
        v8 = proto::GCGMatchPlayerInfo::mutable_gcg_duel_extra(proto_player);
        proto::GCGDuelExtra::operator=(v8, gcg_duel_extra);
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator++(&__for_begin_0);
      }
    }
    std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
  }
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};
