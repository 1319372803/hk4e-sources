// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/general_match_team.cpp

// Line 19: range 000000000D79C73C-000000000D79CAB9
std::string *__cdecl GeneralMatchTeam::getDesc[abi:cxx11](std::string *retstr, const GeneralMatchTeam *const this)
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
  __int64 v22; // r14
  uint32_t WorldLevel; // eax
  __int64 v24; // rax
  char v26[528]; // [rsp+10h] [rbp-210h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 376 6 oss:20";
  *(_QWORD *)(v2 + 16) = GeneralMatchTeam::getDesc[abi:cxx11];
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
  v7 = std::operator<<<std::char_traits<char>>(v6, "host_unit_id: ");
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
  v22 = std::operator<<<std::char_traits<char>>(v21, " ,world_level: ");
  WorldLevel = MatchTeam::getWorldLevel(this);
  v24 = std::ostream::operator<<(v22, WorldLevel);
  std::operator<<<std::char_traits<char>>(v24, "]");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::ostringstream::str(retstr, v2 + 32);
  std::ostringstream::~ostringstream(v2 + 32);
  if ( v26 == (char *)v2 )
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

// Line 28: range 000000000D79CABA-000000000D79CB1D
bool __cdecl GeneralMatchTeam::isFull(GeneralMatchTeam *const this)
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

// Line 33: range 000000000D79CB1E-000000000D79D14E
int32_t __cdecl GeneralMatchTeam::initWithMatchUnit(GeneralMatchTeam *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // r14
  int32_t v6; // r14d
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t MatchId; // edx
  MatchExcelConfigMgr *p_match_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t min_player_num; // ecx
  uint32_t max_player_num; // ecx
  uint32_t confirm_time; // ecx
  GeneralMatchUnit *v15; // rax
  std::set<unsigned int> *ParamSet; // rax
  int32_t result; // eax
  const data::MatchExcelConfig *match_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<MatchUnitBase> v19; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-90h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 general_unit_ptr:39";
  *(_QWORD *)(v2 + 16) = GeneralMatchTeam::initWithMatchUnit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::shared_ptr<MatchUnitBase>::shared_ptr(&v19, p_match_unit_ptr);
  v5 = MatchTeam::initWithMatchUnit(this, &v19) != 0;
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&v19);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_team.cpp",
      "initWithMatchUnit",
      36);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v20,
      (const char (*)[38])"MatchTeam init with match unit failed");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v6 = -1;
  }
  else
  {
    std::dynamic_pointer_cast<GeneralMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
    if ( std::operator==<GeneralMatchUnit>(0LL, (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/general_match_team.cpp",
        "initWithMatchUnit",
        42);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        &v20,
        (const char (*)[32])"cast to general_unit_ptr failed");
      common::milog::MiLogStream::~MiLogStream(&v20);
      v6 = -1;
    }
    else
    {
      v7 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      MatchId = GeneralMatchUnit::getMatchId(v7);
      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->match_id_);
      }
      this->match_id_ = MatchId;
      Config::getConfig();
      p_match_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config_.txt_config_mgr.match_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_id_);
      }
      match_config_ptr = data::MatchExcelConfigMgrBase::findMatchExcelConfig(p_match_config_mgr, this->match_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v19);
      if ( match_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_player_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_player_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&match_config_ptr->min_player_num);
        }
        min_player_num = match_config_ptr->min_player_num;
        if ( *(_BYTE *)(((unsigned __int64)&this->min_player_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->min_player_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->min_player_num_);
        }
        this->min_player_num_ = min_player_num;
        if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->max_player_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)match_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->max_player_num >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&match_config_ptr->max_player_num);
        }
        max_player_num = match_config_ptr->max_player_num;
        if ( *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(&this->max_player_num_);
        }
        this->max_player_num_ = max_player_num;
        if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->confirm_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&match_config_ptr->confirm_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&match_config_ptr->confirm_time);
        }
        confirm_time = match_config_ptr->confirm_time;
        if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->confirm_timeout_);
        }
        this->confirm_timeout_ = confirm_time;
        v15 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        ParamSet = GeneralMatchUnit::getParamSet(v15);
        std::set<unsigned int>::operator=(&this->param_set_, ParamSet);
        if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->team_status_);
        }
        this->team_status_ = GENERAL_TEAM_MATCH;
        v6 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/general_match_team.cpp",
          "initWithMatchUnit",
          50);
        v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v20, (const char (*)[10])"match_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->match_id_);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])" config not found");
        common::milog::MiLogStream::~MiLogStream(&v20);
        v6 = -1;
      }
    }
    std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)(v2 + 32));
  }
  result = v6;
  if ( v21 == (char *)v2 )
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

// Line 64: range 000000000D79D150-000000000D79DC0B
int32_t __cdecl GeneralMatchTeam::addMatchUnit(GeneralMatchTeam *const this, MatchUnitPtr *p_unit_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WorldLevel; // r14d
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  MatchUnitBase *v9; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  char v11; // al
  uint32_t PlayerCount; // r14d
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // ecx
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // eax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t HostPlatfromType; // eax
  GeneralMatchUnit *v25; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v26; // rax
  _DWORD *v27; // rdx
  bool v29; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t v31; // r14d
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  uint32_t v34; // r14d
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  MatchUnitBase *v38; // rax
  MatchUnitBase *v40; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  common::milog::MiLogStream *v47; // rax
  int32_t result; // eax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-1C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-1B8h] BYREF
  const std::set<unsigned int> *param_set; // [rsp+20h] [rbp-1B0h]
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-1A8h]
  std::shared_ptr<MatchUnitBase> p_match_unit_ptr; // [rsp+30h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v54; // [rsp+40h] [rbp-190h] BYREF
  char v55[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 9 param:120 48 16 17 match_unit_ptr:65 80 16 22 host_match_unit_ptr:76 112 24 21 match_un"
                        "it_uid_vec:96 176 24 22 match_team_uid_vec:102 240 48 17 new_param_set:119";
  *(_QWORD *)(v2 + 16) = GeneralMatchTeam::addMatchUnit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862729] = -202116109;
  std::dynamic_pointer_cast<GeneralMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 48));
  if ( std::operator==<GeneralMatchUnit>(0LL, (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v54,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_team.cpp",
      "addMatchUnit",
      68);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v54, (const char (*)[23])"match unit ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v54);
    v5 = -1;
  }
  else if ( !GeneralMatchTeam::isInMatch(this) )
  {
    v5 = -1;
  }
  else
  {
    MatchTeam::getHostMatchUnit((const MatchTeam *const)(v2 + 80));
    if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 80)) )
    {
      v5 = -1;
    }
    else
    {
      v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      WorldLevel = MatchUnitBase::getWorldLevel(v6);
      v8 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( WorldLevel > MatchUnitBase::getWorldLevel(v8)
        && ((v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
             !MatchUnitBase::isNeedBeHost(v9))
         && (v10 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
             MatchUnitBase::getHostPlatfromType(v10) != 3)
          ? (v11 = 0)
          : (v11 = 1),
            v11) )
      {
        v5 = -1;
      }
      else
      {
        PlayerCount = MatchTeam::getPlayerCount(this);
        v13 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        v14 = PlayerCount + MatchUnitBase::getPlayerCount(v13);
        if ( *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_player_num_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->max_player_num_);
        }
        if ( v14 <= this->max_player_num_ )
        {
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 112));
          v15 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
          MatchUnitBase::getAllMatchPlayerUids(v15, (std::vector<unsigned int> *)(v2 + 112));
          if ( MatchTeam::isPlayerInMatchUnitBlacklist(this, (const std::vector<unsigned int> *)(v2 + 112)) )
          {
            v5 = -1;
          }
          else
          {
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 176));
            MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 176));
            v16 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
            if ( MatchUnitBase::isPlayerInBlacklist(v16, (const std::vector<unsigned int> *)(v2 + 176)) )
            {
              v5 = -1;
            }
            else
            {
              v17 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              if ( MatchUnitBase::isHostOnlyMatchWithPSPlayer(v17)
                && (v18 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
                    v19 = MatchUnitBase::getHostPlatfromType(v18),
                    !TxtConfigMgr::isPsnPlatform(v19)) )
              {
                v5 = -1;
              }
              else
              {
                v21 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                if ( MatchUnitBase::isHostOnlyMatchWithPSPlayer(v21)
                  && (v22 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
                      HostPlatfromType = MatchUnitBase::getHostPlatfromType(v22),
                      !TxtConfigMgr::isPsnPlatform(HostPlatfromType)) )
                {
                  v5 = -1;
                }
                else
                {
                  v25 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                  param_set = GeneralMatchUnit::getParamSet(v25);
                  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 240));
                  __for_range = &this->param_set_;
                  __for_begin._M_node = std::set<unsigned int>::begin(&this->param_set_)._M_node;
                  __for_end._M_node = std::set<unsigned int>::end(&this->param_set_)._M_node;
                  while ( std::operator!=(&__for_begin, &__for_end) )
                  {
                    v26 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
                    v27 = v26;
                    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v26);
                    }
                    *(_DWORD *)(v2 + 32) = *v27;
                    if ( std::set<unsigned int>::count(param_set, (const std::set<unsigned int>::key_type *)(v2 + 32)) )
                      std::set<unsigned int>::insert(
                        (std::set<unsigned int> *const)(v2 + 240),
                        (const std::set<unsigned int>::value_type *)(v2 + 32));
                    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
                  }
                  if ( !std::set<unsigned int>::empty(&this->param_set_)
                    && std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v2 + 240)) )
                  {
                    v5 = -1;
                  }
                  else
                  {
                    std::shared_ptr<MatchUnitBase>::shared_ptr<GeneralMatchUnit,void>(
                      &p_match_unit_ptr,
                      (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 48));
                    v29 = MatchTeam::addMatchUnit(this, &p_match_unit_ptr, MATCH_IDENTITY_GUEST) != 0;
                    std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
                    if ( v29 )
                    {
                      common::milog::MiLogStream::create(
                        &v54,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/service/match/general_match_team.cpp",
                        "addMatchUnit",
                        135);
                      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        &v54,
                        (const char (*)[22])off_1BA18740);
                      common::milog::MiLogStream::~MiLogStream(&v54);
                      v5 = -1;
                    }
                    else
                    {
                      v30 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                      v31 = MatchUnitBase::getWorldLevel(v30);
                      v32 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                      if ( v31 > MatchUnitBase::getWorldLevel(v32)
                        || (v33 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
                            v34 = MatchUnitBase::getWorldLevel(v33),
                            v35 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
                            v34 == MatchUnitBase::getWorldLevel(v35))
                        && (v36 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
                            MatchUnitBase::getHostPlatfromType(v36) != 3)
                        && (v37 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
                            MatchUnitBase::getHostPlatfromType(v37) == 3)
                        && (v38 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
                            !MatchUnitBase::isNeedBeHost(v38)) )
                      {
                        v40 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                        MatchUnitBase::setMatchIdentity(v40, MATCH_IDENTITY_GUEST);
                        v41 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                        MatchUnitBase::setMatchIdentity(v41, MATCH_IDENTITY_HOST);
                        common::milog::MiLogStream::create(
                          &v54,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/service/match/general_match_team.cpp",
                          "addMatchUnit",
                          145);
                        v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                                &v54,
                                (const char (*)[10])"unit_id: ");
                        v43 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                        *(_DWORD *)(v2 + 32) = MatchUnitBase::getUnitId(v43);
                        v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v42,
                                (const unsigned int *)(v2 + 32));
                        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                          v44,
                          (const char (*)[18])" changed to guest");
                        common::milog::MiLogStream::~MiLogStream(&v54);
                        common::milog::MiLogStream::create(
                          &v54,
                          &common::milog::MiLogDefault::default_log_obj_,
                          1u,
                          "./src/service/match/general_match_team.cpp",
                          "addMatchUnit",
                          146);
                        v45 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                                &v54,
                                (const char (*)[10])"unit_id: ");
                        v46 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
                        *(_DWORD *)(v2 + 32) = MatchUnitBase::getUnitId(v46);
                        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v45,
                                (const unsigned int *)(v2 + 32));
                        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v47,
                          (const char (*)[13])off_1BA199A0);
                        common::milog::MiLogStream::~MiLogStream(&v54);
                      }
                      std::set<unsigned int>::operator=(&this->param_set_, (const std::set<unsigned int> *)(v2 + 240));
                      if ( GeneralMatchTeam::isFull(this) )
                        GeneralMatchTeam::onMatchSucc(this);
                      v5 = 0;
                    }
                  }
                  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 240));
                }
              }
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 112));
        }
        else
        {
          v5 = -1;
        }
      }
    }
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 80));
  }
  std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)(v2 + 48));
  result = v5;
  if ( v55 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 158: range 000000000D79DC0C-000000000D79E049
void __fastcall GeneralMatchTeam::removeMatchUnit(GeneralMatchTeam *const this, uint32_t unit_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t WorldLevel; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  MatchUnitBase *v10; // rax
  std::less<unsigned int> __comp; // [rsp+22h] [rbp-10Eh] BYREF
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-10Dh] BYREF
  _DWORD __l[5]; // [rsp+24h] [rbp-10Ch] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+38h] [rbp-F8h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+40h] [rbp-F0h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_ptr; // [rsp+58h] [rbp-D8h]
  char v19[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 11 unit_id:157 48 16 17 candidate_ptr:168 80 48 11 uid_set:163";
  *(_QWORD *)(v2 + 16) = GeneralMatchTeam::removeMatchUnit;
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
  if ( GeneralMatchTeam::isInConfirm(this) )
  {
    __l[0] = *(_DWORD *)(v2 + 32);
    std::allocator<unsigned int>::allocator(&__a);
    std::set<unsigned int>::set(
      (std::set<unsigned int> *const)(v2 + 80),
      (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
      &__comp,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    GeneralMatchTeam::onTeamDismiss(this, (const std::set<unsigned int> *)(v2 + 80), MATCH_PLAYER_CANCEL);
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
          goto LABEL_20;
        if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 48))
          || (v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48)),
              WorldLevel = MatchUnitBase::getWorldLevel(v6),
              v8 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr),
              WorldLevel > MatchUnitBase::getWorldLevel(v8)) )
        {
          std::shared_ptr<MatchUnitBase>::operator=((std::shared_ptr<MatchUnitBase> *const)(v2 + 48), unit_ptr);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)&__l[1]);
    }
    if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 48)) )
    {
      GeneralMatchTeam::setStatusInvalid(this);
    }
    else
    {
      v10 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      MatchUnitBase::setMatchIdentity(v10, MATCH_IDENTITY_HOST);
    }
LABEL_20:
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 48));
  }
  if ( v19 == (char *)v2 )
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

// Line 193: range 000000000D79E04A-000000000D79E37A
void __cdecl GeneralMatchTeam::onMatchSucc(GeneralMatchTeam *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v5; // rax
  int v6; // eax
  std::vector<unsigned int>::size_type v7; // r14
  std::vector<unsigned int>::reference v8; // rax
  uint32_t *v9; // rdx
  uint32_t v10; // ecx
  uint32_t Now; // esi
  std::allocator<unsigned int> __a; // [rsp+1Bh] [rbp-95h] BYREF
  uint32_t idx; // [rsp+1Ch] [rbp-94h]
  char v14[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 tmp_vec:200";
  *(_QWORD *)(v1 + 16) = GeneralMatchTeam::onMatchSucc;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( !std::set<unsigned int>::empty(&this->param_set_) )
  {
    std::allocator<unsigned int>::allocator(&__a);
    M_node = std::set<unsigned int>::end(&this->param_set_)._M_node;
    v5._M_node = std::set<unsigned int>::begin(&this->param_set_)._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      (std::vector<unsigned int> *const)(v1 + 32),
      v5,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      &__a);
    std::allocator<unsigned int>::~allocator(&__a);
    v6 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 32));
    idx = common::tools::RandomUtils::rand<unsigned int>(0, v6 - 1);
    v7 = idx;
    if ( v7 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 32)) )
    {
      v8 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 32), idx);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      if ( *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->target_param_);
      }
      this->target_param_ = v10;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->team_status_);
  }
  this->team_status_ = GENERAL_TEAM_CONFIRM;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->confirm_begin_time_);
  }
  this->confirm_begin_time_ = Now;
  GeneralMatchTeam::notifyMatchSuccToAll(this);
  if ( v14 == (char *)v1 )
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

// Line 217: range 000000000D79E37C-000000000D79E945
void __cdecl GeneralMatchTeam::notifyMatchSuccToAll(GeneralMatchTeam *const this)
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
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+10h] [rbp-170h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+18h] [rbp-168h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_begin_0; // [rsp+20h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator __for_end_0; // [rsp+28h] [rbp-158h] BYREF
  proto::GeneralMatchInfo *match_info; // [rsp+30h] [rbp-150h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+38h] [rbp-148h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+40h] [rbp-140h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+48h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *_; // [rsp+50h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+58h] [rbp-128h]
  std::unordered_map<unsigned int,proto::MatchPlayer> *player_map; // [rsp+60h] [rbp-120h]
  std::unordered_map<unsigned int,proto::MatchPlayer> *__for_range_0; // [rsp+68h] [rbp-118h]
  std::pair<unsigned int const,proto::MatchPlayer> *v23; // [rsp+70h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,proto::MatchPlayer> >::type *uid; // [rsp+78h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,proto::MatchPlayer> >::type *match_player; // [rsp+80h] [rbp-100h]
  proto::MatchPlayerInfo *player_info; // [rsp+88h] [rbp-F8h]
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 18 match_unit_ptr:218 64 64 10 notify:224";
  *(_QWORD *)(v1 + 16) = GeneralMatchTeam::notifyMatchSuccToAll;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862724] = -202116109;
  MatchTeam::getHostMatchUnit((const MatchTeam *const)(v1 + 32));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_team.cpp",
      "notifyMatchSuccToAll",
      221);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(&v27, (const char (*)[27])off_1BA18900);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    proto::PlayerMatchSuccNotify::PlayerMatchSuccNotify((proto::PlayerMatchSuccNotify *const)(v1 + 64));
    proto::PlayerMatchSuccNotify::set_match_type((proto::PlayerMatchSuccNotify *const)(v1 + 64), MATCH_TYPE_GENERAL);
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
      && *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->confirm_timeout_);
    }
    proto::PlayerMatchSuccNotify::set_confirm_end_time(
      (proto::PlayerMatchSuccNotify *const)(v1 + 64),
      confirm_begin_time + this->confirm_timeout_);
    match_info = proto::PlayerMatchSuccNotify::mutable_general_match_info((proto::PlayerMatchSuccNotify *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_id_);
    }
    proto::GeneralMatchInfo::set_match_id(match_info, this->match_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->target_param_);
    }
    proto::GeneralMatchInfo::set_match_param(match_info, this->target_param_);
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
          v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator*(&__for_begin_0);
          uid = std::get<0ul,unsigned int const,proto::MatchPlayer>(v23);
          match_player = std::get<1ul,unsigned int const,proto::MatchPlayer>(v23);
          player_info = proto::GeneralMatchInfo::add_player_list(match_info);
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
    MatchTeam::sendToAllPlayer<proto::PlayerMatchSuccNotify>(this, (proto::PlayerMatchSuccNotify *)(v1 + 64));
    proto::PlayerMatchSuccNotify::~PlayerMatchSuccNotify((proto::PlayerMatchSuccNotify *const)(v1 + 64));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 32));
  if ( v28 == (char *)v1 )
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

// Line 250: range 000000000D79E946-000000000D79EF72
void __cdecl GeneralMatchTeam::onTeamDismiss(
        GeneralMatchTeam *const this,
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
  *(_QWORD *)(v3 + 8) = "3 32 4 7 uid:278 48 24 15 tmp_uid_vec:272 112 48 10 notify:252";
  *(_QWORD *)(v3 + 16) = GeneralMatchTeam::onTeamDismiss;
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
  this->team_status_ = GENERAL_TEAM_DISMISS;
  proto::PlayerGeneralMatchDismissNotify::PlayerGeneralMatchDismissNotify((proto::PlayerGeneralMatchDismissNotify *const)(v3 + 112));
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_id_);
  }
  proto::PlayerGeneralMatchDismissNotify::set_match_id(
    (proto::PlayerGeneralMatchDismissNotify *const)(v3 + 112),
    this->match_id_);
  proto::PlayerGeneralMatchDismissNotify::set_reason((proto::PlayerGeneralMatchDismissNotify *const)(v3 + 112), reason);
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
    proto::PlayerGeneralMatchDismissNotify::add_uid_list((proto::PlayerGeneralMatchDismissNotify *const)(v3 + 112), *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  MatchTeam::sendToAllPlayer<proto::PlayerGeneralMatchDismissNotify>(
    this,
    (proto::PlayerGeneralMatchDismissNotify *)(v3 + 112));
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
              "./src/service/match/general_match_team.cpp",
              "onTeamDismiss",
              291);
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
  proto::PlayerGeneralMatchDismissNotify::~PlayerGeneralMatchDismissNotify((proto::PlayerGeneralMatchDismissNotify *const)(v3 + 112));
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

// Line 296: range 000000000D79EF74-000000000D79F022
bool __cdecl GeneralMatchTeam::isValid(GeneralMatchTeam *const this)
{
  bool v1; // r12
  std::shared_ptr<MatchUnitBase> __a; // [rsp+10h] [rbp-20h] BYREF

  MatchTeam::getHostMatchUnit((const MatchTeam *const)&__a);
  v1 = std::operator!=<MatchUnitBase>(0LL, &__a)
    && (GeneralMatchTeam::isInMatch(this) || GeneralMatchTeam::isInConfirm(this));
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&__a);
  return v1;
};

// Line 301: range 000000000D79F024-000000000D79F107
void __fastcall GeneralMatchTeam::addConfirmUid(GeneralMatchTeam *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:300";
  *(_QWORD *)(v2 + 16) = GeneralMatchTeam::addConfirmUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::set<unsigned int>::insert(&this->confirm_uid_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
  GeneralMatchTeam::refreshConfirm(this, 0);
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

// Line 307: range 000000000D79F108-000000000D79F456
void __cdecl GeneralMatchTeam::refreshConfirm(GeneralMatchTeam *const this, uint32_t now)
{
  std::set<unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t confirm_begin_time; // ecx
  uint32_t v7; // ecx
  uint32_t nowa; // [rsp+4h] [rbp-BCh]
  char v9[176]; // [rsp+10h] [rbp-B0h] BYREF

  nowa = now;
  v2 = (std::set<unsigned int> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::set<unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 11 uid_set:316";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)GeneralMatchTeam::refreshConfirm;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( GeneralMatchTeam::isInConfirm(this) )
  {
    if ( !now )
      goto LABEL_11;
    if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->confirm_begin_time_);
    }
    confirm_begin_time = this->confirm_begin_time_;
    if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->confirm_timeout_);
    }
    if ( now > confirm_begin_time + this->confirm_timeout_ )
    {
LABEL_11:
      std::set<unsigned int>::set(v2 + 1);
      if ( GeneralMatchTeam::getAllUnconfirmUid(this, v2 + 1) || !std::set<unsigned int>::empty(v2 + 1) )
      {
        if ( !now )
          nowa = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->confirm_begin_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->confirm_begin_time_);
        }
        v7 = this->confirm_begin_time_;
        if ( *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->confirm_timeout_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->confirm_timeout_);
        }
        if ( nowa > v7 + this->confirm_timeout_ )
          GeneralMatchTeam::onTeamDismiss(this, v2 + 1, MATCH_CONFIRM_TIMEOUT);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(&this->team_status_);
        }
        this->team_status_ = GENERAL_TEAM_FINISH;
        GeneralMatchTeam::notifyMatchFinish(this);
      }
      std::set<unsigned int>::~set(v2 + 1);
    }
  }
  if ( v9 == (char *)v2 )
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

// Line 338: range 000000000D79F458-000000000D79F73D
int32_t __cdecl GeneralMatchTeam::getAllUnconfirmUid(GeneralMatchTeam *const this, std::set<unsigned int> *uid_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:345 64 24 11 uid_vec:339";
  *(_QWORD *)(v2 + 16) = GeneralMatchTeam::getAllUnconfirmUid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
  if ( MatchTeam::getAllMatchUnitUids(this, (std::vector<unsigned int> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_team.cpp",
      "getAllUnconfirmUid",
      342);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v13,
           (const char (*)[38])"[Match] get all uids failed match_id=");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->match_id_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v6 = -1;
  }
  else
  {
    __for_range = (std::vector<unsigned int> *)(v2 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v2 + 48) = *v8;
      if ( !std::set<unsigned int>::count(&this->confirm_uid_set_, (const std::set<unsigned int>::key_type *)(v2 + 48)) )
        std::set<unsigned int>::insert(uid_set, (const std::set<unsigned int>::value_type *)(v2 + 48));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v6 = 0;
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v6;
  if ( v14 == (char *)v2 )
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

// Line 356: range 000000000D79F73E-000000000D79FD2A
void __cdecl GeneralMatchTeam::notifyMatchFinish(GeneralMatchTeam *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  std::remove_reference<google::protobuf::RepeatedPtrField<proto::MatchPlayer>&>::type *matched; // r14
  google::protobuf::RepeatedPtrField<proto::MatchPlayer> *v6; // rax
  common::minet::Packet *v7; // rax
  MatchService *v8; // r14
  unsigned __int64 v9; // rdx
  common::minet::Packet *v10; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t UnitId; // eax
  common::minet::Packet *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+10h] [rbp-160h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-150h] BYREF
  char v20[304]; // [rsp+40h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 16 18 match_unit_ptr:357 64 16 14 packet_ptr:369 96 24 24 repeated_player_list:367 160 56 10 notify:364";
  *(_QWORD *)(v1 + 16) = GeneralMatchTeam::notifyMatchFinish;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  MatchTeam::getHostMatchUnit((const MatchTeam *const)(v1 + 32));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_team.cpp",
      "notifyMatchFinish",
      360);
    v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v19,
           (const char (*)[45])"[Match] get host match unit failed match_id=");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->match_id_);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    proto::GeneralMatchFinishNotify::GeneralMatchFinishNotify((proto::GeneralMatchFinishNotify *const)(v1 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_id_);
    }
    proto::GeneralMatchFinishNotify::set_match_id((proto::GeneralMatchFinishNotify *const)(v1 + 160), this->match_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_param_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->target_param_);
    }
    proto::GeneralMatchFinishNotify::set_match_param(
      (proto::GeneralMatchFinishNotify *const)(v1 + 160),
      this->target_param_);
    MatchTeam::getMatchPlayerList((google::protobuf::RepeatedPtrField<proto::MatchPlayer> *)(v1 + 96), this);
    matched = std::move<google::protobuf::RepeatedPtrField<proto::MatchPlayer> &>((google::protobuf::RepeatedPtrField<proto::MatchPlayer> *)(v1 + 96));
    v6 = proto::GeneralMatchFinishNotify::mutable_match_player_list((proto::GeneralMatchFinishNotify *const)(v1 + 160));
    google::protobuf::RepeatedPtrField<proto::MatchPlayer>::operator=(v6, matched);
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/general_match_team.cpp",
        "notifyMatchFinish",
        372);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v19,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      common::minet::Packet::setProto<proto::GeneralMatchFinishNotify>(
        v7,
        (const proto::GeneralMatchFinishNotify *)(v1 + 160));
      v8 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
      ServiceBase::setPacketSource(v8, (common::minet::PacketPtr)__PAIR128__(v9, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v11 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      UnitId = MatchUnitBase::getUnitId(v11);
      common::minet::Packet::setUserId(v10, UnitId);
      v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      common::minet::Packet::setTargetService(v13, 3u);
      v14 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v14);
      v16 = (unsigned __int64)(v15->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v15->_vptr_NetworkMgrBase + 8);
      v17 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v16;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v1 + 64));
      v17(v15, &packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 64));
    google::protobuf::RepeatedPtrField<proto::MatchPlayer>::~RepeatedPtrField((google::protobuf::RepeatedPtrField<proto::MatchPlayer> *const)(v1 + 96));
    proto::GeneralMatchFinishNotify::~GeneralMatchFinishNotify((proto::GeneralMatchFinishNotify *const)(v1 + 160));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 32));
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 383: range 000000000D79FD2C-000000000D79FDAA
proto::MatchReason __cdecl GeneralMatchTeam::getMatchReasonByStatus(GeneralMatchTeam *const this)
{
  GeneralMatchTeam::GeneralTeamStatus team_status; // eax

  if ( *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->team_status_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->team_status_);
  }
  team_status = this->team_status_;
  if ( team_status == GENERAL_TEAM_DISMISS )
    return 2;
  if ( team_status <= GENERAL_TEAM_DISMISS )
  {
    if ( team_status == GENERAL_TEAM_INVALID )
      return 5;
    if ( team_status == GENERAL_TEAM_FINISH )
      return 4;
  }
  return 0;
};
