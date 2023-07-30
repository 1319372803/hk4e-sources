// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/mp_play_match_pool.cpp

// Line 19: range 000000000D7D6960-000000000D7D6A04
void __cdecl MpPlayMatchPool::processMatchUnitWithTeam(MpPlayMatchPool *const this)
{
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> > >::type *wait_match_team_vec; // [rsp+38h] [rbp-8h]

  __for_range = &this->wait_match_team_vec_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::begin(&this->wait_match_team_vec_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::end(&this->wait_match_team_vec_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>(__in);
    wait_match_team_vec = std::get<1ul,unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>(__in);
    MatchPoolBase::processMatchTeamVec(this, wait_match_team_vec);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>,false,false>::operator++(&__for_begin);
  }
};

// Line 27: range 000000000D7D6A06-000000000D7D6DA3
int32_t __cdecl MpPlayMatchPool::createMatchTeam(MpPlayMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  unsigned int (__fastcall *v11)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *); // r15
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::vector<std::shared_ptr<MatchTeam>> *v14; // r14
  std::shared_ptr<MatchTeam> *matched; // rax
  std::shared_ptr<MatchTeam> *v16; // rdx
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
  *(_QWORD *)(v2 + 8) = "4 32 4 10 unit_id:35 48 4 13 mp_play_id:36 64 16 25 mp_play_match_unit_ptr:28 96 16 17 match_team_ptr:37";
  *(_QWORD *)(v2 + 16) = MpPlayMatchPool::createMatchTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::dynamic_pointer_cast<MpPlayMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( std::operator==<MpPlayMatchUnit>(0LL, (const std::shared_ptr<MpPlayMatchUnit> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/mp_play_match_pool.cpp",
      "createMatchTeam",
      31);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v19,
      (const char (*)[39])"[MATCH] mp_play_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 32) = MatchUnitBase::getUnitId(v6);
    v7 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = MpPlayMatchUnit::getMpPlayId(v7);
    common::tools::perf::make_shared<MatchTeam>();
    v8 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_DescribalBase + 1);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9->_vptr_DescribalBase + 1);
    v11 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *))v10;
    std::shared_ptr<MatchUnitBase>::shared_ptr<MpPlayMatchUnit,void>(
      &v18,
      (const std::shared_ptr<MpPlayMatchUnit> *)(v2 + 64));
    v12 = v11(v9, &v18) != 0;
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v18);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/mp_play_match_pool.cpp",
        "createMatchTeam",
        40);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v19,
              (const char (*)[44])"[MATCH] initWithMatchUnit failed, unit id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      v14 = std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::operator[](
              &this->wait_match_team_vec_map_,
              (const std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::key_type *)(v2 + 48));
      matched = std::move<std::shared_ptr<MatchTeam> &>((std::shared_ptr<MatchTeam> *)(v2 + 96));
      std::vector<std::shared_ptr<MatchTeam>>::emplace_back<std::shared_ptr<MatchTeam>>(v14, matched, v16);
      v5 = 0;
    }
    std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v2 + 96));
  }
  std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)(v2 + 64));
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

// Line 50: range 000000000D7D6DA4-000000000D7D716F
std::vector<std::shared_ptr<MatchTeam>> *__cdecl MpPlayMatchPool::findCandidateMatchTeamVec(
        std::vector<std::shared_ptr<MatchTeam>> *retstr,
        MpPlayMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::vector<std::shared_ptr<MatchTeam>> *p_second; // rdx
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::key_type __x; // [rsp+24h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> >,false> __y; // [rsp+28h] [rbp-B8h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 7 iter:61 64 16 25 mp_play_match_unit_ptr:51";
  *(_QWORD *)(v3 + 16) = MpPlayMatchPool::findCandidateMatchTeamVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  std::dynamic_pointer_cast<MpPlayMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v3 + 64));
  if ( std::operator!=<MpPlayMatchUnit>(0LL, (const std::shared_ptr<MpPlayMatchUnit> *)(v3 + 64)) )
  {
    v6 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( MatchUnitBase::getMatchIdentity(v6)
      || (v7 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
          MatchUnitBase::getPlayerCount(v7) != 1) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/mp_play_match_pool.cpp",
        "findCandidateMatchTeamVec",
        57);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        &v14,
        (const char (*)[30])"[MATCH] match unit is invalid");
      common::milog::MiLogStream::~MiLogStream(&v14);
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
      goto LABEL_18;
    }
    v9 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    __x = MpPlayMatchUnit::getMpPlayId(v9);
    *(std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::find(&this->wait_match_team_vec_map_, &__x);
    __y._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::end(&this->wait_match_team_vec_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> >,false> *)(v3 + 32),
           &__y) )
    {
      p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> >,false,false> *const)(v3 + 32))->second;
      std::vector<std::shared_ptr<MatchTeam>>::vector(retstr, p_second);
      goto LABEL_18;
    }
  }
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
LABEL_18:
  std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)(v3 + 64));
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
  return retstr;
};

// Line 72: range 000000000D7D7170-000000000D7D73FB
std::vector<std::shared_ptr<MatchTeam>> *__cdecl MpPlayMatchPool::findCandidateMatchTeamVecPtr(
        MpPlayMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::vector<std::shared_ptr<MatchTeam>> *p_second; // r14
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::vector<std::shared_ptr<MatchTeam>> *result; // rax
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::key_type __x; // [rsp+14h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> >,false> __y; // [rsp+18h] [rbp-B8h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 32 8 7 iter:83 64 16 25 mp_play_match_unit_ptr:73";
  *(_QWORD *)(v2 + 16) = MpPlayMatchPool::findCandidateMatchTeamVecPtr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::dynamic_pointer_cast<MpPlayMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( !std::operator!=<MpPlayMatchUnit>(0LL, (const std::shared_ptr<MpPlayMatchUnit> *)(v2 + 64)) )
    goto LABEL_13;
  v5 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( MatchUnitBase::getMatchIdentity(v5)
    || (v6 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
        MatchUnitBase::getPlayerCount(v6) != 1) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/mp_play_match_pool.cpp",
      "findCandidateMatchTeamVecPtr",
      79);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v13,
      (const char (*)[30])"[MATCH] match unit is invalid");
    common::milog::MiLogStream::~MiLogStream(&v13);
    p_second = 0LL;
    goto LABEL_14;
  }
  v9 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  __x = MpPlayMatchUnit::getMpPlayId(v9);
  *(std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::find(&this->wait_match_team_vec_map_, &__x);
  __y._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<MatchTeam>>>::end(&this->wait_match_team_vec_map_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> >,false> *)(v2 + 32),
         &__y) )
  {
    p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<MatchTeam>> >,false,false> *const)(v2 + 32))->second;
  }
  else
  {
LABEL_13:
    p_second = 0LL;
  }
LABEL_14:
  std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)(v2 + 64));
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

// Line 94: range 000000000D7D73FC-000000000D7D764C
void __cdecl MpPlayMatchPool::updatMatchCostTimeInfo(MpPlayMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 25 mp_play_match_unit_ptr:95";
  *(_QWORD *)(v2 + 16) = MpPlayMatchPool::updatMatchCostTimeInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<MpPlayMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<MpPlayMatchUnit>(0LL, (const std::shared_ptr<MpPlayMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/mp_play_match_pool.cpp",
      "updatMatchCostTimeInfo",
      98);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v13,
      (const char (*)[39])"[MATCH] mp_play_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v5 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    join_team_time = MatchUnitBase::getJoinTeamTime(v5);
    v6 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    match_begin_time = MatchUnitBase::getMatchBeginTime(v6);
    if ( join_team_time >= match_begin_time )
    {
      cost_time = join_team_time - match_begin_time;
      v7 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __k = MpPlayMatchUnit::getMpPlayId(v7);
      match_cost_time_info = std::unordered_map<unsigned int,MatchCostTimeInfo>::operator[](
                               &this->match_cost_time_info_map_,
                               &__k);
      MatchPoolBase::doUpdatMatchCostTimeInfo(this, match_cost_time_info, cost_time);
    }
  }
  std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)(v2 + 32));
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

// Line 113: range 000000000D7D764E-000000000D7D7820
void __cdecl MpPlayMatchPool::setEstimateMatchCostTime(MpPlayMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t MpPlayId; // edx
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
  *(_QWORD *)(v2 + 8) = "1 32 16 26 mp_play_match_unit_ptr:114";
  *(_QWORD *)(v2 + 16) = MpPlayMatchPool::setEstimateMatchCostTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<MpPlayMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<MpPlayMatchUnit>(0LL, (const std::shared_ptr<MpPlayMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/mp_play_match_pool.cpp",
      "setEstimateMatchCostTime",
      117);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v9,
      (const char (*)[39])"[MATCH] mp_play_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    MpPlayId = MpPlayMatchUnit::getMpPlayId(v6);
    matched = MpPlayMatchPool::calEstimateMatchCostTime(this, MpPlayId);
    MatchUnitBase::setEstimateMatchCostTime(v5, matched);
  }
  std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)(v2 + 32));
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

// Line 125: range 000000000D7D7822-000000000D7D7A58
void __cdecl MpPlayMatchPool::fillMatchStartNotify(
        MpPlayMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        proto::MatchStartNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t MpPlayId; // edx
  std::shared_ptr<MatchUnitBase> v9; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 26 mp_play_match_unit_ptr:126";
  *(_QWORD *)(v3 + 16) = MpPlayMatchPool::fillMatchStartNotify;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<MpPlayMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v3 + 32));
  if ( std::operator==<MpPlayMatchUnit>(0LL, (const std::shared_ptr<MpPlayMatchUnit> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/mp_play_match_pool.cpp",
      "fillMatchStartNotify",
      129);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v10,
      (const char (*)[39])"[MATCH] mp_play_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr<MpPlayMatchUnit,void>(
      &v9,
      (const std::shared_ptr<MpPlayMatchUnit> *)(v3 + 32));
    MatchPoolBase::fillMatchStartNotify(this, &v9, notify);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v9);
    proto::MatchStartNotify::set_match_type(notify, MATCH_TYPE_MP_PLAY);
    v6 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    MpPlayId = MpPlayMatchUnit::getMpPlayId(v6);
    proto::MatchStartNotify::set_mp_play_id(notify, MpPlayId);
  }
  std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)(v3 + 32));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 139: range 000000000D7D7A5A-000000000D7D7A95
void __cdecl MpPlayMatchPool::fillMatchUnitRemovedNotify(
        MpPlayMatchPool *const this,
        proto::MatchReason reason,
        proto::MatchUnitRemovedNotify *notify)
{
  MatchPoolBase::fillMatchUnitRemovedNotify(this, reason, notify);
  proto::MatchUnitRemovedNotify::set_match_type(notify, MATCH_TYPE_MP_PLAY);
};

// Line 145: range 000000000D7D7A96-000000000D7D7AD5
void __cdecl MpPlayMatchPool::fillGuestUnitAgreedResultNotify(
        MpPlayMatchPool *const this,
        uint32_t host_unit_id,
        proto::GuestUnitAgreedResultNotify::Reason reason,
        proto::GuestUnitAgreedResultNotify *notify)
{
  MatchPoolBase::fillGuestUnitAgreedResultNotify(this, host_unit_id, reason, notify);
  proto::GuestUnitAgreedResultNotify::set_match_type(notify, MATCH_TYPE_MP_PLAY);
};

// Line 151: range 000000000D7D7AD6-000000000D7D7D19
void __cdecl MpPlayMatchPool::fillGuestUnitMatchSuccNotify(
        MpPlayMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        uint32_t host_unit_id,
        proto::GuestUnitMatchSuccNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t MpPlayId; // edx
  std::shared_ptr<MatchUnitBase> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 26 mp_play_match_unit_ptr:152";
  *(_QWORD *)(v4 + 16) = MpPlayMatchPool::fillGuestUnitMatchSuccNotify;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<MpPlayMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v4 + 32));
  if ( std::operator==<MpPlayMatchUnit>(0LL, (const std::shared_ptr<MpPlayMatchUnit> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/mp_play_match_pool.cpp",
      "fillGuestUnitMatchSuccNotify",
      155);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v12,
      (const char (*)[39])"[MATCH] mp_play_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr(&v11, p_match_unit_ptr);
    MatchPoolBase::fillGuestUnitMatchSuccNotify(this, &v11, host_unit_id, notify);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v11);
    proto::GuestUnitMatchSuccNotify::set_match_type(notify, 2u);
    v7 = std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    MpPlayId = MpPlayMatchUnit::getMpPlayId(v7);
    proto::GuestUnitMatchSuccNotify::set_mp_play_id(notify, MpPlayId);
  }
  std::shared_ptr<MpPlayMatchUnit>::~shared_ptr((std::shared_ptr<MpPlayMatchUnit> *const)(v4 + 32));
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 165: range 000000000D7D7D1A-000000000D7D7E92
uint32_t __fastcall MpPlayMatchPool::calEstimateMatchCostTime(const MpPlayMatchPool *const this, uint32_t mp_play_id)
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
  *(_QWORD *)(v2 + 8) = "2 48 4 14 mp_play_id:164 64 8 8 iter:166";
  *(_QWORD *)(v2 + 16) = MpPlayMatchPool::calEstimateMatchCostTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = mp_play_id;
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

// Line 174: range 000000000D7FB52B-000000000D7FB53F
void __cdecl GLOBAL__sub_I_merge_merge_gcg_game_mode_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 174: range 000000000D7E188E-000000000D7FB52A
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority);
