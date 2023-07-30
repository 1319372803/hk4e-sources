// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/general_match_pool.cpp

// Line 20: range 000000000D79990C-000000000D799B74
void __cdecl GeneralMatchPool::fillMatchStartNotify(
        GeneralMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        proto::MatchStartNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t MatchId; // edx
  google::protobuf::RepeatedField<unsigned int> *matched; // r14
  GeneralMatchUnit *v9; // rax
  std::set<unsigned int> *ParamSet; // rax
  std::shared_ptr<MatchUnitBase> v12; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 25 general_match_unit_ptr:21";
  *(_QWORD *)(v3 + 16) = GeneralMatchPool::fillMatchStartNotify;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<GeneralMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v3 + 32));
  if ( std::operator==<GeneralMatchUnit>(0LL, (const std::shared_ptr<GeneralMatchUnit> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_pool.cpp",
      "fillMatchStartNotify",
      24);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v13,
      (const char (*)[39])"[MATCH] general_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr<GeneralMatchUnit,void>(
      &v12,
      (const std::shared_ptr<GeneralMatchUnit> *)(v3 + 32));
    MatchPoolBase::fillMatchStartNotify(this, &v12, notify);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v12);
    proto::MatchStartNotify::set_match_type(notify, MATCH_TYPE_GENERAL);
    v6 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    MatchId = GeneralMatchUnit::getMatchId(v6);
    proto::MatchStartNotify::set_match_id(notify, MatchId);
    matched = proto::MatchStartNotify::mutable_match_param_list(notify);
    v9 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ParamSet = GeneralMatchUnit::getParamSet(v9);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(ParamSet, matched);
  }
  std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)(v3 + 32));
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 35: range 000000000D799B76-000000000D799BB1
void __cdecl GeneralMatchPool::fillMatchUnitRemovedNotify(
        GeneralMatchPool *const this,
        proto::MatchReason reason,
        proto::MatchUnitRemovedNotify *notify)
{
  MatchPoolBase::fillMatchUnitRemovedNotify(this, reason, notify);
  proto::MatchUnitRemovedNotify::set_match_type(notify, MATCH_TYPE_GENERAL);
};

// Line 41: range 000000000D799BB2-000000000D799D84
void __cdecl GeneralMatchPool::setEstimateMatchCostTime(GeneralMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t MatchId; // edx
  uint32_t matched; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 25 general_match_unit_ptr:42";
  *(_QWORD *)(v2 + 16) = GeneralMatchPool::setEstimateMatchCostTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<GeneralMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<GeneralMatchUnit>(0LL, (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_pool.cpp",
      "setEstimateMatchCostTime",
      45);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v9,
      (const char (*)[39])"[MATCH] general_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    MatchId = GeneralMatchUnit::getMatchId(v6);
    matched = GeneralMatchPool::calEstimateMatchCostTime(this, MatchId);
    MatchUnitBase::setEstimateMatchCostTime(v5, matched);
  }
  std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)(v2 + 32));
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

// Line 52: range 000000000D799D86-000000000D79A123
int32_t __cdecl GeneralMatchPool::createMatchTeam(GeneralMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  unsigned int (__fastcall *v11)(std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *); // r15
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::vector<std::shared_ptr<GeneralMatchTeam>> *v14; // r14
  std::shared_ptr<GeneralMatchTeam> *matched; // rax
  std::shared_ptr<GeneralMatchTeam> *v16; // rdx
  int32_t result; // eax
  std::shared_ptr<MatchUnitBase> v18; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 10 unit_id:59 48 4 11 match_id:60 64 16 25 general_match_unit_ptr:53 96 16 17 match_team_ptr:61";
  *(_QWORD *)(v2 + 16) = GeneralMatchPool::createMatchTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::dynamic_pointer_cast<GeneralMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( std::operator==<GeneralMatchUnit>(0LL, (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_pool.cpp",
      "createMatchTeam",
      56);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v19,
      (const char (*)[43])"[MATCH] cast to GeneralMatchUnitPtr failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 32) = MatchUnitBase::getUnitId(v6);
    v7 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = GeneralMatchUnit::getMatchId(v7);
    common::tools::perf::make_shared<GeneralMatchTeam>();
    v8 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_DescribalBase + 1);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9->_vptr_DescribalBase + 1);
    v11 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *))v10;
    std::shared_ptr<MatchUnitBase>::shared_ptr<GeneralMatchUnit,void>(
      &v18,
      (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 64));
    v12 = v11(v9, &v18) != 0;
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v18);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/general_match_pool.cpp",
        "createMatchTeam",
        64);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v19,
              (const char (*)[44])"[MATCH] initWithMatchUnit failed, unit id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      v14 = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::operator[](
              &this->wait_match_team_vec_map_,
              (const std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::key_type *)(v2 + 48));
      matched = std::move<std::shared_ptr<GeneralMatchTeam> &>((std::shared_ptr<GeneralMatchTeam> *)(v2 + 96));
      std::vector<std::shared_ptr<GeneralMatchTeam>>::emplace_back<std::shared_ptr<GeneralMatchTeam>>(v14, matched, v16);
      v5 = 0;
    }
    std::shared_ptr<GeneralMatchTeam>::~shared_ptr((std::shared_ptr<GeneralMatchTeam> *const)(v2 + 96));
  }
  std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)(v2 + 64));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 74: range 000000000D79A124-000000000D79A1C8
std::vector<std::shared_ptr<MatchTeam>> *__cdecl GeneralMatchPool::findCandidateMatchTeamVec(
        std::vector<std::shared_ptr<MatchTeam>> *retstr,
        GeneralMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 24LL);
  }
  retstr->_M_impl._M_start = 0LL;
  retstr->_M_impl._M_finish = 0LL;
  retstr->_M_impl._M_end_of_storage = 0LL;
  std::vector<std::shared_ptr<MatchTeam>>::vector(retstr);
  return retstr;
};

// Line 79: range 000000000D79A1CA-000000000D79A45C
std::vector<std::shared_ptr<GeneralMatchTeam>> *__cdecl GeneralMatchPool::findGeneralCandidateMatchTeamVecPtr(
        GeneralMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<std::shared_ptr<GeneralMatchTeam>> *p_second; // r14
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::vector<std::shared_ptr<GeneralMatchTeam>> *result; // rax
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::key_type __x; // [rsp+14h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>> >,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 7 iter:91 64 16 25 general_match_unit_ptr:80";
  *(_QWORD *)(v2 + 16) = GeneralMatchPool::findGeneralCandidateMatchTeamVecPtr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::dynamic_pointer_cast<GeneralMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( std::operator==<GeneralMatchUnit>(0LL, (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 64)) )
  {
    p_second = 0LL;
  }
  else
  {
    v6 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( MatchUnitBase::getMatchIdentity(v6)
      || (v7 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          MatchUnitBase::getPlayerCount(v7) != 1) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/general_match_pool.cpp",
        "findGeneralCandidateMatchTeamVecPtr",
        88);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v13,
        (const char (*)[30])"[MATCH] match unit is invalid");
      common::milog::MiLogStream::~MiLogStream(&v13);
      p_second = 0LL;
    }
    else
    {
      v9 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      __x = GeneralMatchUnit::getMatchId(v9);
      *(std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::find(&this->wait_match_team_vec_map_, &__x);
      __y._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::end(&this->wait_match_team_vec_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>> >,false> *)(v2 + 32),
             &__y) )
      {
        p_second = 0LL;
      }
      else
      {
        p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>> >,false,false> *const)(v2 + 32))->second;
      }
    }
  }
  std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)(v2 + 64));
  result = p_second;
  if ( v14 == (char *)v2 )
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

// Line 100: range 000000000D79A45E-000000000D79A502
void __cdecl GeneralMatchPool::processMatchUnitWithTeam(GeneralMatchPool *const this)
{
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>> > >::type *wait_match_team_vec; // [rsp+38h] [rbp-8h]

  __for_range = &this->wait_match_team_vec_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::begin(&this->wait_match_team_vec_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GeneralMatchTeam>>>::end(&this->wait_match_team_vec_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>>>(__in);
    wait_match_team_vec = std::get<1ul,unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>>>(__in);
    GeneralMatchPool::refreshMatchTeamVec(this, wait_match_team_vec);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GeneralMatchTeam>>>,false,false>::operator++(&__for_begin);
  }
};

// Line 108: range 000000000D79A504-000000000D79AA69
void __cdecl GeneralMatchPool::refreshMatchTeamVec(
        GeneralMatchPool *const this,
        std::vector<std::shared_ptr<GeneralMatchTeam>> *wait_match_team_vec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::shared_ptr<GeneralMatchTeam> *v5; // rax
  GeneralMatchTeam *v6; // rcx
  GeneralMatchTeam *v7; // rax
  std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  GeneralMatchTeam *v9; // rax
  char v10; // r15
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(GeneralMatchPool *const, std::shared_ptr<MatchTeam> *); // r14
  GeneralMatchPool *v15; // rcx
  uint32_t now; // [rsp+20h] [rbp-E0h]
  proto::MatchReason reason; // [rsp+24h] [rbp-DCh]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+38h] [rbp-C8h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+40h] [rbp-C0h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+48h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit; // [rsp+50h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<MatchTeam> __a; // [rsp+60h] [rbp-A0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:110 64 16 18 match_team_ptr:112";
  *(_QWORD *)(v2 + 16) = GeneralMatchPool::refreshMatchTeamVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  now = common::tools::TimeUtils::getNow();
  *(std::vector<std::shared_ptr<GeneralMatchTeam>>::iterator *)(v2 + 32) = std::vector<std::shared_ptr<GeneralMatchTeam>>::begin(wait_match_team_vec);
  while ( 1 )
  {
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false>::__node_type *)std::vector<std::shared_ptr<GeneralMatchTeam>>::end(wait_match_team_vec)._M_current;
    if ( !__gnu_cxx::operator!=<std::shared_ptr<GeneralMatchTeam> *,std::vector<std::shared_ptr<GeneralMatchTeam>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *)&__for_end) )
      break;
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam> *,std::vector<std::shared_ptr<GeneralMatchTeam>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *const)(v2 + 32));
    std::shared_ptr<GeneralMatchTeam>::shared_ptr((std::shared_ptr<GeneralMatchTeam> *const)(v2 + 64), v5);
    if ( std::operator==<GeneralMatchTeam>(0LL, (const std::shared_ptr<GeneralMatchTeam> *)(v2 + 64)) )
    {
      __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam> const*,std::vector<std::shared_ptr<GeneralMatchTeam>>>::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*>(
        (__gnu_cxx::__normal_iterator<const std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *const)&__for_end,
        (const __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *)(v2 + 32));
      *(std::vector<std::shared_ptr<GeneralMatchTeam>>::iterator *)(v2 + 32) = std::vector<std::shared_ptr<GeneralMatchTeam>>::erase(
                                                                                 wait_match_team_vec,
                                                                                 (std::vector<std::shared_ptr<GeneralMatchTeam>>::const_iterator)__for_end._M_cur);
    }
    else
    {
      v6 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GeneralMatchPool::updateMatchTeam(this, v6, now);
      v7 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( GeneralMatchTeam::isValid(v7) )
      {
        __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam> *,std::vector<std::shared_ptr<GeneralMatchTeam>>>::operator++(
          (__gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *const)(v2 + 32),
          0);
      }
      else
      {
        __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam> const*,std::vector<std::shared_ptr<GeneralMatchTeam>>>::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*>(
          (__gnu_cxx::__normal_iterator<const std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *const)&__for_end,
          (const __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam>*,std::vector<std::shared_ptr<GeneralMatchTeam>> > *)(v2 + 32));
        *(std::vector<std::shared_ptr<GeneralMatchTeam>>::iterator *)(v2 + 32) = std::vector<std::shared_ptr<GeneralMatchTeam>>::erase(
                                                                                   wait_match_team_vec,
                                                                                   (std::vector<std::shared_ptr<GeneralMatchTeam>>::const_iterator)__for_end._M_cur);
        v8 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        match_unit_map = MatchTeam::getMatchUnitMap(v8);
        v9 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        reason = GeneralMatchTeam::getMatchReasonByStatus(v9);
        __for_range = match_unit_map;
        __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(match_unit_map)._M_cur;
        __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(__for_range)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
                  &__for_begin,
                  &__for_end) )
        {
          __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
          unit = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
          match_unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
          v10 = 0;
          v12 = 0;
          if ( std::operator!=<MatchUnitBase>(0LL, match_unit_ptr) )
          {
            v11 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
            if ( MatchUnitBase::getMatchIdentity(v11) == MATCH_IDENTITY_NONE )
            {
              std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
              MatchUnitBase::getMatchTeam((const MatchUnitBase *const)&__a);
              v10 = 1;
              if ( std::operator==<MatchTeam>(0LL, &__a) )
                v12 = 1;
            }
          }
          if ( v10 )
            std::shared_ptr<MatchTeam>::~shared_ptr(&__a);
          if ( v12 )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v13 = (unsigned __int64)(this->_vptr_MatchPoolBase + 14);
            if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
              __asan_report_load8(this->_vptr_MatchPoolBase + 14);
            v14 = *(void (__fastcall **)(GeneralMatchPool *const, std::shared_ptr<MatchTeam> *))v13;
            std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)&__a, match_unit_ptr);
            v14(this, &__a);
            std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)&__a);
            v15 = this;
            if ( *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit);
            }
            MatchPoolBase::notifyMatchStart(v15, *unit);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit);
            }
            GeneralMatchPool::removeMatchUnit(this, *unit, reason);
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
        }
      }
    }
    std::shared_ptr<GeneralMatchTeam>::~shared_ptr((std::shared_ptr<GeneralMatchTeam> *const)(v2 + 64));
  }
  if ( v26 == (char *)v2 )
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

// Line 144: range 000000000D79AA6A-000000000D79AE5E
void __cdecl GeneralMatchPool::updateMatchTeam(
        GeneralMatchPool *const this,
        GeneralMatchTeam *match_team,
        uint32_t now)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *MatchUnitMap; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(GeneralMatchTeam *, _QWORD); // rcx
  uint32_t player_count; // [rsp+2Ch] [rbp-D4h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+30h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+38h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+40h] [rbp-C0h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+48h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_id; // [rsp+50h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+58h] [rbp-A8h]
  char v20[160]; // [rsp+60h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 18 match_unit_map:153";
  *(_QWORD *)(v3 + 16) = GeneralMatchPool::updateMatchTeam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  GeneralMatchTeam::refreshConfirm(match_team, now);
  if ( GeneralMatchTeam::isInMatch(match_team) )
  {
    MatchUnitMap = MatchTeam::getMatchUnitMap(match_team);
    std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::unordered_map(
      (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 32),
      MatchUnitMap);
    __for_range = (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *)(v3 + 32);
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 32))._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 32))._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin);
      unit_id = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
      match_unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
      if ( !std::operator==<MatchUnitBase>(0LL, match_unit_ptr) )
      {
        v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
        if ( MatchUnitBase::isMatchTimeout(v7)
          || (v8 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr),
              now > MatchUnitBase::getLastSyncTime(v8) + 20) )
        {
          if ( *(_BYTE *)(((unsigned __int64)match_team >> 3) + 0x7FFF8000) )
            __asan_report_load8(match_team);
          v10 = (unsigned __int64)(match_team->_vptr_DescribalBase + 2);
          if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
            __asan_report_load8(match_team->_vptr_DescribalBase + 2);
          v11 = *(void (__fastcall **)(GeneralMatchTeam *, _QWORD))v10;
          if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(unit_id);
          }
          v11(match_team, *unit_id);
          if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(unit_id);
          }
          GeneralMatchPool::removeMatchUnit(this, *unit_id, MATCH_TIMEOUT);
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
    }
    player_count = MatchTeam::getPlayerCount(match_team);
    if ( player_count < GeneralMatchTeam::getMinPlayerNum(match_team) )
    {
      if ( !player_count )
        GeneralMatchTeam::setStatusInvalid(match_team);
    }
    else
    {
      GeneralMatchTeam::onMatchSucc(match_team);
    }
    std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::~unordered_map((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 32));
  }
  if ( v20 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 183: range 000000000D79AE60-000000000D79B261
void __cdecl GeneralMatchPool::processMatchUnitWithoutTeam(GeneralMatchPool *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>::pointer v4; // rax
  unsigned __int64 v5; // rax
  int v6; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::vector<std::shared_ptr<MatchUnitBase>>::size_type v11; // r14
  char v12[304]; // [rsp+10h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 8 8 iter:192 64 8 12 tmp_iter:194 96 16 18 match_unit_ptr:195 128 24 37 single_player_wait_"
                        "match_unit_vec:187 192 24 36 multi_player_wait_match_unit_vec:189";
  *(_QWORD *)(v1 + 16) = GeneralMatchPool::processMatchUnitWithoutTeam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  std::vector<std::shared_ptr<MatchUnitBase>>::vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 128));
  std::vector<std::shared_ptr<MatchUnitBase>>::vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 192));
  *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator *)(v1 + 32) = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(&this->total_match_unit_map_);
  while ( 1 )
  {
    *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(&this->total_match_unit_map_);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)(v1 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)(v1 + 64)) )
      break;
    *(std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *)(v1 + 64) = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v1 + 32), 0);
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v1 + 64));
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 96), &v4->second);
    if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 96)) )
    {
      v5 = (unsigned __int64)std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) <= 3 )
        v5 = __asan_report_load4(v5);
      GeneralMatchPool::removeMatchUnit(this, *(_DWORD *)v5, MATCH_FAILED);
      v6 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( MatchUnitBase::getMatchIdentity(v7) )
      {
        v6 = 0;
      }
      else
      {
        v8 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        if ( MatchUnitBase::getPlayerCount(v8) == 1
          && (v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96)),
              MatchUnitBase::getExpectIdentity(v9) != MATCH_IDENTITY_HOST) )
        {
          std::vector<std::shared_ptr<MatchUnitBase>>::push_back(
            (std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 128),
            (const std::vector<std::shared_ptr<MatchUnitBase>>::value_type *)(v1 + 96));
        }
        else
        {
          std::vector<std::shared_ptr<MatchUnitBase>>::push_back(
            (std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 192),
            (const std::vector<std::shared_ptr<MatchUnitBase>>::value_type *)(v1 + 96));
        }
        v11 = std::vector<std::shared_ptr<MatchUnitBase>>::size((const std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 128));
        v6 = v11
           + std::vector<std::shared_ptr<MatchUnitBase>>::size((const std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 192)) <= 0x3E7
           ? 2
           : 1;
      }
    }
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 96));
    if ( v6 )
    {
      if ( v6 != 2 )
        break;
    }
  }
  GeneralMatchPool::processMultiMatchUnit(this, (std::vector<std::shared_ptr<MatchUnitBase>> *)(v1 + 192));
  GeneralMatchPool::processSingleMatchUnit(this, (std::vector<std::shared_ptr<MatchUnitBase>> *)(v1 + 128));
  std::vector<std::shared_ptr<MatchUnitBase>>::~vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 192));
  std::vector<std::shared_ptr<MatchUnitBase>>::~vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 128));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 232: range 000000000D79B262-000000000D79B595
void __cdecl GeneralMatchPool::processMultiMatchUnit(
        GeneralMatchPool *const this,
        std::vector<std::shared_ptr<MatchUnitBase>> *multi_player_wait_match_unit_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::shared_ptr<MatchUnitBase> *v5; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int64 v7; // rax
  unsigned int (__fastcall *v8)(GeneralMatchPool *const, std::shared_ptr<MatchUnitBase> *); // r14
  common::milog::MiLogStream *v9; // rax
  std::vector<std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<MatchUnitBase> v13; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 unit_id:239 64 16 18 match_unit_ptr:233";
  *(_QWORD *)(v2 + 16) = GeneralMatchPool::processMultiMatchUnit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  __for_range = multi_player_wait_match_unit_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::begin(multi_player_wait_match_unit_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::end(multi_player_wait_match_unit_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator*(&__for_begin);
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64), v5);
    if ( !std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 64)) )
    {
      v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      *(_DWORD *)(v2 + 48) = MatchUnitBase::getUnitId(v6);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v7 = (unsigned __int64)(this->_vptr_MatchPoolBase + 12);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_MatchPoolBase + 12);
      v8 = *(unsigned int (__fastcall **)(GeneralMatchPool *const, std::shared_ptr<MatchUnitBase> *))v7;
      std::shared_ptr<MatchUnitBase>::shared_ptr(&v13, (const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
      LOBYTE(v8) = v8(this, &v13) != 0;
      std::shared_ptr<MatchUnitBase>::~shared_ptr(&v13);
      if ( (_BYTE)v8 )
      {
        GeneralMatchPool::removeMatchUnit(this, *(_DWORD *)(v2 + 48), MATCH_FAILED);
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/general_match_pool.cpp",
          "processMultiMatchUnit",
          243);
        v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v14,
               (const char (*)[42])"[MATCH] createMatchTeam failed, unit id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
    }
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64));
    __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator++(&__for_begin);
  }
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

// Line 250: range 000000000D79B596-000000000D79B92E
void __cdecl GeneralMatchPool::processSingleMatchUnit(
        GeneralMatchPool *const this,
        std::vector<std::shared_ptr<MatchUnitBase>> *wait_match_unit_vec)
{
  std::shared_ptr<MatchUnitBase> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const std::shared_ptr<MatchUnitBase> *v5; // rax
  bool v6; // r14
  unsigned __int64 v7; // rax
  unsigned int (__fastcall *v8)(GeneralMatchPool *const, std::shared_ptr<MatchUnitBase> *); // r15
  bool v9; // r15
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t UnitId; // ecx
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<MatchUnitBase> p_match_unit_ptr; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (std::shared_ptr<MatchUnitBase> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = (std::shared_ptr<MatchUnitBase> *)v3;
  }
  v2->_M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v2->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 unit_ptr:251";
  v2[1]._M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)GeneralMatchPool::processSingleMatchUnit;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  __for_range = wait_match_unit_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::begin(wait_match_unit_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::end(wait_match_unit_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator*(&__for_begin);
    std::shared_ptr<MatchUnitBase>::shared_ptr(v2 + 2, v5);
    std::shared_ptr<MatchUnitBase>::shared_ptr(&p_match_unit_ptr, v2 + 2);
    v6 = GeneralMatchPool::joinCandidateTeam(this, &p_match_unit_ptr) == 0;
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
    if ( !v6 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v7 = (unsigned __int64)(this->_vptr_MatchPoolBase + 12);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_MatchPoolBase + 12);
      v8 = *(unsigned int (__fastcall **)(GeneralMatchPool *const, std::shared_ptr<MatchUnitBase> *))v7;
      std::shared_ptr<MatchUnitBase>::shared_ptr(&p_match_unit_ptr, v2 + 2);
      v9 = v8(this, &p_match_unit_ptr) && std::operator!=<MatchUnitBase>(0LL, v2 + 2);
      std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
      if ( v9 )
      {
        v10 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        UnitId = MatchUnitBase::getUnitId(v10);
        GeneralMatchPool::removeMatchUnit(this, UnitId, MATCH_FAILED);
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/general_match_pool.cpp",
          "processSingleMatchUnit",
          262);
        v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v19,
                (const char (*)[42])"[MATCH] createMatchTeam failed, unit id: ");
        v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v2[2]);
        val = MatchUnitBase::getUnitId(v13);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
    }
    std::shared_ptr<MatchUnitBase>::~shared_ptr(v2 + 2);
    __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator++(&__for_begin);
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v2->_M_ptr = (std::__shared_ptr<MatchUnitBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 269: range 000000000D79B930-000000000D79BBE9
int32_t __cdecl GeneralMatchPool::joinCandidateTeam(GeneralMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  int32_t v2; // r15d
  std::shared_ptr<GeneralMatchTeam> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const std::shared_ptr<GeneralMatchTeam> *v7; // rax
  int v8; // r14d
  GeneralMatchTeam *v9; // r14
  int32_t result; // eax
  std::vector<std::shared_ptr<GeneralMatchTeam>>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<std::shared_ptr<GeneralMatchTeam>>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  std::vector<std::shared_ptr<GeneralMatchTeam>> *candidate_team_vec_ptr; // [rsp+30h] [rbp-90h]
  std::vector<std::shared_ptr<GeneralMatchTeam>> *__for_range; // [rsp+38h] [rbp-88h]
  std::shared_ptr<MatchUnitBase> p_unit_ptr; // [rsp+40h] [rbp-80h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (std::shared_ptr<GeneralMatchTeam> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<GeneralMatchTeam> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 team_ptr:275";
  v3[1]._M_ptr = (std::__shared_ptr<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)GeneralMatchPool::joinCandidateTeam;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::shared_ptr<MatchUnitBase>::shared_ptr(&p_unit_ptr, p_match_unit_ptr);
  candidate_team_vec_ptr = GeneralMatchPool::findGeneralCandidateMatchTeamVecPtr(this, &p_unit_ptr);
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_unit_ptr);
  if ( !candidate_team_vec_ptr || std::vector<std::shared_ptr<GeneralMatchTeam>>::empty(candidate_team_vec_ptr) )
  {
    v2 = -1;
  }
  else
  {
    __for_range = candidate_team_vec_ptr;
    __for_begin._M_current = std::vector<std::shared_ptr<GeneralMatchTeam>>::begin(candidate_team_vec_ptr)._M_current;
    __for_end._M_current = std::vector<std::shared_ptr<GeneralMatchTeam>>::end(candidate_team_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<std::shared_ptr<GeneralMatchTeam> *,std::vector<std::shared_ptr<GeneralMatchTeam>>>(
              &__for_begin,
              &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam> *,std::vector<std::shared_ptr<GeneralMatchTeam>>>::operator*(&__for_begin);
      std::shared_ptr<GeneralMatchTeam>::shared_ptr(v3 + 2, v7);
      if ( std::operator==<GeneralMatchTeam>(0LL, v3 + 2) )
      {
        v8 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
        std::shared_ptr<MatchUnitBase>::shared_ptr(&p_unit_ptr, p_match_unit_ptr);
        LOBYTE(v9) = GeneralMatchTeam::addMatchUnit(v9, &p_unit_ptr) == 0;
        std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_unit_ptr);
        if ( (_BYTE)v9 )
        {
          v2 = 0;
          v8 = 1;
        }
        else
        {
          v8 = 2;
        }
      }
      std::shared_ptr<GeneralMatchTeam>::~shared_ptr(v3 + 2);
      if ( v8 && v8 != 2 )
        goto LABEL_21;
      __gnu_cxx::__normal_iterator<std::shared_ptr<GeneralMatchTeam> *,std::vector<std::shared_ptr<GeneralMatchTeam>>>::operator++(&__for_begin);
    }
    v2 = -1;
  }
LABEL_21:
  result = v2;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 290: range 000000000D79BBEA-000000000D79C278
int32_t __cdecl GeneralMatchPool::confirmGuestUnit(
        GeneralMatchPool *const this,
        const proto::ConfirmGuestUnitReq *req,
        proto::ConfirmGuestUnitRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  GeneralMatchTeam *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t MatchId; // eax
  bool is_agreed; // al
  std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  GeneralMatchTeam *v19; // rax
  GeneralMatchTeam *v20; // rax
  int32_t result; // eax
  std::less<unsigned int> __comp; // [rsp+2Ah] [rbp-156h] BYREF
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-155h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-154h] BYREF
  char v26[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 11 unit_id:291 48 16 18 match_unit_ptr:292 80 16 18 match_team_ptr:298 112 16 26 general_"
                        "match_team_ptr:299 144 32 10 notify:310 208 48 11 uid_set:318";
  *(_QWORD *)(v3 + 16) = GeneralMatchPool::confirmGuestUnit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 32) = proto::ConfirmGuestUnitReq::unit_id(req);
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v3 + 48), (uint32_t)this);
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v3 + 48)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 144),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_pool.cpp",
      "confirmGuestUnit",
      295);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           (common::milog::MiLogStream *const)(v3 + 144),
           (const char (*)[37])"[Match] unit_id not exist, unit_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    MatchUnitBase::getMatchTeam((const MatchUnitBase *const)(v3 + 80));
    std::dynamic_pointer_cast<GeneralMatchTeam,MatchTeam>((const std::shared_ptr<MatchTeam> *)(v3 + 112));
    if ( std::operator==<GeneralMatchTeam>(0LL, (const std::shared_ptr<GeneralMatchTeam> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/match/general_match_pool.cpp",
        "confirmGuestUnit",
        302);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             (common::milog::MiLogStream *const)(v3 + 144),
             (const char (*)[42])"[Match] match unit not in team, unit_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
      v7 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( !GeneralMatchTeam::isInConfirm(v9) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 144),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/general_match_pool.cpp",
          "confirmGuestUnit",
          307);
        v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 144),
                (const char (*)[19])"[Match] match_id: ");
        v11 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        val = GeneralMatchTeam::getMatchId(v11);
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" unit_id: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])" not in confirm");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
        v7 = -1;
      }
      else
      {
        proto::PlayerGeneralMatchConfirmNotify::PlayerGeneralMatchConfirmNotify((proto::PlayerGeneralMatchConfirmNotify *const)(v3 + 144));
        v15 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        MatchId = GeneralMatchTeam::getMatchId(v15);
        proto::PlayerGeneralMatchConfirmNotify::set_match_id(
          (proto::PlayerGeneralMatchConfirmNotify *const)(v3 + 144),
          MatchId);
        proto::PlayerGeneralMatchConfirmNotify::set_uid(
          (proto::PlayerGeneralMatchConfirmNotify *const)(v3 + 144),
          *(_DWORD *)(v3 + 32));
        is_agreed = proto::ConfirmGuestUnitReq::is_agreed(req);
        proto::PlayerGeneralMatchConfirmNotify::set_is_agree(
          (proto::PlayerGeneralMatchConfirmNotify *const)(v3 + 144),
          is_agreed);
        v18 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        MatchTeam::sendToAllPlayer<proto::PlayerGeneralMatchConfirmNotify>(
          v18,
          (proto::PlayerGeneralMatchConfirmNotify *)(v3 + 144));
        proto::ConfirmGuestUnitRsp::set_retcode(rsp_0, 0);
        if ( !proto::ConfirmGuestUnitReq::is_agreed(req) )
        {
          val = *(_DWORD *)(v3 + 32);
          std::allocator<unsigned int>::allocator(&__a);
          std::set<unsigned int>::set(
            (std::set<unsigned int> *const)(v3 + 208),
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
            &__comp,
            &__a);
          std::allocator<unsigned int>::~allocator(&__a);
          v19 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          GeneralMatchTeam::onTeamDismiss(v19, (const std::set<unsigned int> *)(v3 + 208), MATCH_PLAYER_CANCEL);
          v7 = 0;
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 208));
        }
        else
        {
          v20 = std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          GeneralMatchTeam::addConfirmUid(v20, *(_DWORD *)(v3 + 32));
          v7 = 0;
        }
        proto::PlayerGeneralMatchConfirmNotify::~PlayerGeneralMatchConfirmNotify((proto::PlayerGeneralMatchConfirmNotify *const)(v3 + 144));
      }
    }
    std::shared_ptr<GeneralMatchTeam>::~shared_ptr((std::shared_ptr<GeneralMatchTeam> *const)(v3 + 112));
    std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v3 + 80));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v3 + 48));
  result = v7;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
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
  return result;
};

// Line 328: range 000000000D79C27A-000000000D79C367
void __fastcall GeneralMatchPool::removeMatchUnit(
        GeneralMatchPool *const this,
        uint32_t unit_id,
        proto::MatchReason reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 unit_id:327";
  *(_QWORD *)(v3 + 16) = GeneralMatchPool::removeMatchUnit;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = unit_id;
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
    &this->total_match_unit_map_,
    (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v3 + 32));
  MatchPoolBase::notifyMatchUnitRemoved(this, *(_DWORD *)(v3 + 32), reason);
  if ( v7 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 334: range 000000000D79C368-000000000D79C5C0
void __cdecl GeneralMatchPool::updatMatchCostTimeInfo(GeneralMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::unordered_map<unsigned int,MatchCostTimeInfo>::key_type __k; // [rsp+18h] [rbp-A8h] BYREF
  uint32_t join_team_time; // [rsp+1Ch] [rbp-A4h]
  uint32_t match_begin_time; // [rsp+20h] [rbp-A0h]
  uint32_t cost_time; // [rsp+24h] [rbp-9Ch]
  MatchCostTimeInfo *match_cost_time_info; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 26 general_match_unit_ptr:335";
  *(_QWORD *)(v2 + 16) = GeneralMatchPool::updatMatchCostTimeInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<GeneralMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<GeneralMatchUnit>(0LL, (const std::shared_ptr<GeneralMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/general_match_pool.cpp",
      "updatMatchCostTimeInfo",
      338);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v13,
      (const char (*)[39])"[MATCH] general_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v5 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    join_team_time = MatchUnitBase::getJoinTeamTime(v5);
    v6 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    match_begin_time = MatchUnitBase::getMatchBeginTime(v6);
    if ( join_team_time >= match_begin_time )
    {
      cost_time = join_team_time - match_begin_time;
      v7 = std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GeneralMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __k = GeneralMatchUnit::getMatchId(v7);
      match_cost_time_info = std::unordered_map<unsigned int,MatchCostTimeInfo>::operator[](
                               &this->match_cost_time_info_map_,
                               &__k);
      MatchPoolBase::doUpdatMatchCostTimeInfo(this, match_cost_time_info, cost_time);
    }
  }
  std::shared_ptr<GeneralMatchUnit>::~shared_ptr((std::shared_ptr<GeneralMatchUnit> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 353: range 000000000D79C5C2-000000000D79C73A
uint32_t __fastcall GeneralMatchPool::calEstimateMatchCostTime(const GeneralMatchPool *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,MatchCostTimeInfo>,false> __y; // [rsp+10h] [rbp-90h] BYREF
  const MatchCostTimeInfo *match_cost_time_info; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 match_id:352 64 8 8 iter:354";
  *(_QWORD *)(v2 + 16) = GeneralMatchPool::calEstimateMatchCostTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = match_id;
  *(std::unordered_map<unsigned int,MatchCostTimeInfo>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,MatchCostTimeInfo>::find(
                                                                                       &this->match_cost_time_info_map_,
                                                                                       (const std::unordered_map<unsigned int,MatchCostTimeInfo>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,MatchCostTimeInfo>::end(&this->match_cost_time_info_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,MatchCostTimeInfo>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,MatchCostTimeInfo>,false> *)(v2 + 64),
         &__y) )
  {
    result = 1800;
  }
  else
  {
    match_cost_time_info = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,MatchCostTimeInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,MatchCostTimeInfo>,false,false> *const)(v2 + 64))->second;
    result = MatchPoolBase::doCalEstimateMatchCostTime(this, match_cost_time_info);
  }
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
