// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/gcg_match_pool.cpp

// Line 20: range 000000000DE930BC-000000000DE9328E
void __cdecl GCGMatchPool::setEstimateMatchCostTime(GCGMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 21 gcg_match_unit_ptr:21";
  *(_QWORD *)(v2 + 16) = GCGMatchPool::setEstimateMatchCostTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_pool.cpp",
      "setEstimateMatchCostTime",
      24);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v9,
      (const char (*)[35])"[MATCH] gcg_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    MatchId = GCGMatchUnit::getMatchId(v6);
    matched = GCGMatchPool::calEstimateMatchCostTime(this, MatchId);
    MatchUnitBase::setEstimateMatchCostTime(v5, matched);
  }
  std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v2 + 32));
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

// Line 31: range 000000000DE93290-000000000DE934C7
void __cdecl GCGMatchPool::fillMatchStartNotify(
        GCGMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        proto::MatchStartNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t MatchId; // edx
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
  *(_QWORD *)(v3 + 8) = "1 32 16 21 gcg_match_unit_ptr:32";
  *(_QWORD *)(v3 + 16) = GCGMatchPool::fillMatchStartNotify;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v3 + 32));
  if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_pool.cpp",
      "fillMatchStartNotify",
      35);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v10,
      (const char (*)[35])"[MATCH] gcg_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr(&v9, p_match_unit_ptr);
    MatchPoolBase::fillMatchStartNotify(this, &v9, notify);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v9);
    proto::MatchStartNotify::set_match_type(notify, MATCH_TYPE_GCG);
    v6 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    MatchId = GCGMatchUnit::getMatchId(v6);
    proto::MatchStartNotify::set_match_id(notify, MatchId);
  }
  std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v3 + 32));
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

// Line 44: range 000000000DE934C8-000000000DE93503
void __cdecl GCGMatchPool::fillMatchUnitRemovedNotify(
        GCGMatchPool *const this,
        proto::MatchReason reason,
        proto::MatchUnitRemovedNotify *notify)
{
  MatchPoolBase::fillMatchUnitRemovedNotify(this, reason, notify);
  proto::MatchUnitRemovedNotify::set_match_type(notify, MATCH_TYPE_GCG);
};

// Line 50: range 000000000DE93504-000000000DE93543
void __cdecl GCGMatchPool::fillGuestUnitAgreedResultNotify(
        GCGMatchPool *const this,
        uint32_t host_unit_id,
        proto::GuestUnitAgreedResultNotify::Reason reason,
        proto::GuestUnitAgreedResultNotify *notify)
{
  MatchPoolBase::fillGuestUnitAgreedResultNotify(this, host_unit_id, reason, notify);
  proto::GuestUnitAgreedResultNotify::set_match_type(notify, MATCH_TYPE_GCG);
};

// Line 56: range 000000000DE93544-000000000DE9375A
void __cdecl GCGMatchPool::fillGuestUnitMatchSuccNotify(
        GCGMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        uint32_t host_unit_id,
        proto::GuestUnitMatchSuccNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::shared_ptr<MatchUnitBase> v9; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-90h] BYREF
  char v11[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 21 gcg_match_unit_ptr:57";
  *(_QWORD *)(v4 + 16) = GCGMatchPool::fillGuestUnitMatchSuccNotify;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v4 + 32));
  if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_pool.cpp",
      "fillGuestUnitMatchSuccNotify",
      60);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v10,
      (const char (*)[35])"[MATCH] gcg_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr<GCGMatchUnit,void>(&v9, (const std::shared_ptr<GCGMatchUnit> *)(v4 + 32));
    MatchPoolBase::fillGuestUnitMatchSuccNotify(this, &v9, host_unit_id, notify);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v9);
    proto::GuestUnitMatchSuccNotify::set_match_type(notify, 5u);
  }
  std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v4 + 32));
  if ( v11 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 68: range 000000000DE9375C-000000000DE93AF9
int32_t __cdecl GCGMatchPool::createMatchTeam(GCGMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  unsigned int (__fastcall *v11)(std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *); // r15
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::vector<std::shared_ptr<GCGMatchTeam>> *v14; // r14
  std::shared_ptr<GCGMatchTeam> *v15; // rax
  std::shared_ptr<GCGMatchTeam> *v16; // rdx
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
  *(_QWORD *)(v2 + 8) = "4 32 4 10 unit_id:76 48 4 11 match_id:77 64 16 21 gcg_match_unit_ptr:69 96 16 17 match_team_ptr:78";
  *(_QWORD *)(v2 + 16) = GCGMatchPool::createMatchTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_pool.cpp",
      "createMatchTeam",
      72);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v19,
      (const char (*)[35])"[MATCH] gcg_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 32) = MatchUnitBase::getUnitId(v6);
    v7 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = GCGMatchUnit::getMatchId(v7);
    common::tools::perf::make_shared<GCGMatchTeam>();
    v8 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_DescribalBase + 1);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9->_vptr_DescribalBase + 1);
    v11 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *))v10;
    std::shared_ptr<MatchUnitBase>::shared_ptr<GCGMatchUnit,void>(
      &v18,
      (const std::shared_ptr<GCGMatchUnit> *)(v2 + 64));
    v12 = v11(v9, &v18) != 0;
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v18);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/gcg_match_pool.cpp",
        "createMatchTeam",
        81);
      v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v19,
              (const char (*)[44])"[MATCH] initWithMatchUnit failed, unit id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      v14 = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::operator[](
              &this->wait_match_team_vec_map_,
              (const std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::key_type *)(v2 + 48));
      v15 = std::move<std::shared_ptr<GCGMatchTeam> &>((std::shared_ptr<GCGMatchTeam> *)(v2 + 96));
      std::vector<std::shared_ptr<GCGMatchTeam>>::emplace_back<std::shared_ptr<GCGMatchTeam>>(v14, v15, v16);
      v5 = 0;
    }
    std::shared_ptr<GCGMatchTeam>::~shared_ptr((std::shared_ptr<GCGMatchTeam> *const)(v2 + 96));
  }
  std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v2 + 64));
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

// Line 89: range 000000000DE93AFA-000000000DE93DAF
std::vector<std::shared_ptr<GCGMatchTeam>> *__cdecl GCGMatchPool::findGCGCandidateMatchTeamVecPtr(
        GCGMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<std::shared_ptr<GCGMatchTeam>> *p_second; // r14
  GCGMatchUnit *v6; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::vector<std::shared_ptr<GCGMatchTeam>> *result; // rax
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::key_type __x; // [rsp+14h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>> >,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:105 64 16 21 gcg_match_unit_ptr:90";
  *(_QWORD *)(v2 + 16) = GCGMatchPool::findGCGCandidateMatchTeamVecPtr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v2 + 64)) )
  {
    p_second = 0LL;
  }
  else
  {
    v6 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( GCGMatchUnit::isMatchAI(v6) )
    {
      p_second = 0LL;
    }
    else
    {
      v7 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( MatchUnitBase::getMatchIdentity(v7)
        || (v8 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
            MatchUnitBase::getPlayerCount(v8) != 1) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/gcg_match_pool.cpp",
          "findGCGCandidateMatchTeamVecPtr",
          102);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v14,
          (const char (*)[30])"[MATCH] match unit is invalid");
        common::milog::MiLogStream::~MiLogStream(&v14);
        p_second = 0LL;
      }
      else
      {
        v10 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        __x = GCGMatchUnit::getMatchId(v10);
        *(std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::find(&this->wait_match_team_vec_map_, &__x);
        __y._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::end(&this->wait_match_team_vec_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>>>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>> >,false> *)(v2 + 32),
               &__y) )
        {
          p_second = 0LL;
        }
        else
        {
          p_second = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>> >,false,false> *const)(v2 + 32))->second;
        }
      }
    }
  }
  std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v2 + 64));
  result = p_second;
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
  return result;
};

// Line 114: range 000000000DE93DB0-000000000DE93E6E
void __cdecl GCGMatchPool::processMatchUnitWithTeam(GCGMatchPool *const this)
{
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>> > >::type *wait_match_team_vec; // [rsp+38h] [rbp-8h]

  __for_range = &this->wait_match_team_vec_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::begin(&this->wait_match_team_vec_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<std::shared_ptr<GCGMatchTeam>>>::end(&this->wait_match_team_vec_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>>>(__in);
    wait_match_team_vec = std::get<1ul,unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>>>(__in);
    GCGMatchPool::refreshMatchTeamVec(this, wait_match_team_vec);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<std::shared_ptr<GCGMatchTeam>>>,false,false>::operator++(&__for_begin);
  }
  GCGMatchPool::refreshConfirmTeamVec(this, &this->wait_confirm_team_vec_);
};

// Line 123: range 000000000DE93E94-000000000DE942EF
void __cdecl GCGMatchPool::refreshMatchTeamVec(
        GCGMatchPool *const this,
        std::vector<std::shared_ptr<GCGMatchTeam>> *wait_match_team_vec)
{
  GCGMatchTeam *v2; // rcx
  GCGMatchTeam *v3; // rax
  GCGMatchTeam *v4; // rax
  std::vector<std::shared_ptr<GCGMatchTeam>>::value_type *v5; // rax
  std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  GCGMatchTeam *v7; // rax
  char v8; // r12
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // bl
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(GCGMatchPool *const, std::shared_ptr<MatchTeam> *); // rbx
  GCGMatchPool *v13; // rcx
  std::shared_ptr<GCGMatchTeam> *M_current; // rbx
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator v15; // rax
  GCGMatchPool::refreshMatchTeamVec::<lambda(const GCGMatchTeamPtr&)> v16; // dl
  uint32_t now; // [rsp+10h] [rbp-80h]
  proto::MatchReason reason; // [rsp+14h] [rbp-7Ch]
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  std::vector<std::shared_ptr<GCGMatchTeam>> *__for_range; // [rsp+38h] [rbp-58h]
  std::shared_ptr<GCGMatchTeam> *match_team_ptr; // [rsp+40h] [rbp-50h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+48h] [rbp-48h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range_0; // [rsp+50h] [rbp-40h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+58h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit; // [rsp+60h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+68h] [rbp-28h]
  std::shared_ptr<MatchTeam> __a; // [rsp+70h] [rbp-20h] BYREF

  now = common::tools::TimeUtils::getNow();
  __for_range = wait_match_team_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::begin(wait_match_team_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::end(wait_match_team_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>(
            &__for_begin,
            &__for_end) )
  {
    match_team_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>::operator*(&__for_begin);
    if ( !std::operator==<GCGMatchTeam>(0LL, match_team_ptr) )
    {
      v2 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
      GCGMatchPool::updateMatchTeam(this, v2, now);
      v3 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
      if ( GCGMatchTeam::isValid(v3) )
      {
        v4 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
        if ( GCGMatchTeam::isInConfirm(v4) )
        {
          v5 = std::move<std::shared_ptr<GCGMatchTeam> &>(match_team_ptr);
          std::vector<std::shared_ptr<GCGMatchTeam>>::push_back(&this->wait_confirm_team_vec_, v5);
        }
      }
      else
      {
        v6 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
        match_unit_map = MatchTeam::getMatchUnitMap(v6);
        v7 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
        reason = GCGMatchTeam::getMatchReasonByStatus(v7);
        __for_range_0 = match_unit_map;
        __for_begin_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(match_unit_map)._M_cur;
        __for_end_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin_0);
          unit = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
          match_unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
          v8 = 0;
          v10 = 0;
          if ( std::operator!=<MatchUnitBase>(0LL, match_unit_ptr) )
          {
            v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
            if ( MatchUnitBase::getMatchIdentity(v9) == MATCH_IDENTITY_NONE )
            {
              std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
              MatchUnitBase::getMatchTeam((const MatchUnitBase *const)&__a);
              v8 = 1;
              if ( std::operator==<MatchTeam>(0LL, &__a) )
                v10 = 1;
            }
          }
          if ( v8 )
            std::shared_ptr<MatchTeam>::~shared_ptr(&__a);
          if ( v10 )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v11 = (unsigned __int64)(this->_vptr_MatchPoolBase + 14);
            if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
              __asan_report_load8(this->_vptr_MatchPoolBase + 14);
            v12 = *(void (__fastcall **)(GCGMatchPool *const, std::shared_ptr<MatchTeam> *))v11;
            std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)&__a, match_unit_ptr);
            v12(this, &__a);
            std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)&__a);
            v13 = this;
            if ( *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit);
            }
            MatchPoolBase::notifyMatchStart(v13, *unit);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit);
            }
            GCGMatchPool::removeMatchUnit(this, *unit, reason);
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin_0);
        }
        std::__shared_ptr<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2>::reset(match_team_ptr);
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>::operator++(&__for_begin);
  }
  __for_end._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::end(wait_match_team_vec)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> const*,std::vector<std::shared_ptr<GCGMatchTeam>>>::__normal_iterator<std::shared_ptr<GCGMatchTeam>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMatchTeam>*,std::vector<std::shared_ptr<GCGMatchTeam>> > *const)&__for_end_0,
    &__for_end);
  M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::end(wait_match_team_vec)._M_current;
  v15._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::begin(wait_match_team_vec)._M_current;
  __for_begin._M_current = std::remove_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>,GCGMatchPool::refreshMatchTeamVec(std::vector<std::shared_ptr<GCGMatchTeam>>&)::{lambda(std::shared_ptr<GCGMatchTeam> const&)#1}>(
                             v15,
                             (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam>*,std::vector<std::shared_ptr<GCGMatchTeam>> >)M_current,
                             v16)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> const*,std::vector<std::shared_ptr<GCGMatchTeam>>>::__normal_iterator<std::shared_ptr<GCGMatchTeam>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMatchTeam>*,std::vector<std::shared_ptr<GCGMatchTeam>> > *const)&__for_begin_0,
    &__for_begin);
  std::vector<std::shared_ptr<GCGMatchTeam>>::erase(
    wait_match_team_vec,
    (std::vector<std::shared_ptr<GCGMatchTeam>>::const_iterator)__for_begin_0._M_cur,
    (std::vector<std::shared_ptr<GCGMatchTeam>>::const_iterator)__for_end_0._M_cur);
};

// Line 156: range 000000000DE93E70-000000000DE93E92
bool __cdecl GCGMatchPool::refreshMatchTeamVec(std::vector<std::shared_ptr<GCGMatchTeam>> &)::{lambda(std::shared_ptr<GCGMatchTeam> const&)#1}::operator()(
        const GCGMatchPool::refreshMatchTeamVec::<lambda(const GCGMatchTeamPtr&)> *const __closure,
        const GCGMatchTeamPtr *match_team_ptr)
{
  return std::operator==<GCGMatchTeam>(match_team_ptr, 0LL);
};

// Line 164: range 000000000DE94314-000000000DE94725
void __cdecl GCGMatchPool::refreshConfirmTeamVec(
        GCGMatchPool *const this,
        std::vector<std::shared_ptr<GCGMatchTeam>> *wait_confirm_team_vec)
{
  GCGMatchTeam *v2; // rax
  GCGMatchTeam *v3; // rax
  std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  GCGMatchTeam *v5; // rax
  char v6; // r12
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // bl
  unsigned __int64 v9; // rax
  void (__fastcall *v10)(GCGMatchPool *const, std::shared_ptr<MatchTeam> *); // rbx
  GCGMatchPool *v11; // rcx
  std::shared_ptr<GCGMatchTeam> *M_current; // rbx
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator v13; // rax
  GCGMatchPool::refreshConfirmTeamVec::<lambda(const GCGMatchTeamPtr&)> v14; // dl
  uint32_t now; // [rsp+10h] [rbp-80h]
  proto::MatchReason reason; // [rsp+14h] [rbp-7Ch]
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  std::vector<std::shared_ptr<GCGMatchTeam>> *__for_range; // [rsp+38h] [rbp-58h]
  std::shared_ptr<GCGMatchTeam> *match_team_ptr; // [rsp+40h] [rbp-50h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *match_unit_map; // [rsp+48h] [rbp-48h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range_0; // [rsp+50h] [rbp-40h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+58h] [rbp-38h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit; // [rsp+60h] [rbp-30h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+68h] [rbp-28h]
  std::shared_ptr<MatchTeam> __a; // [rsp+70h] [rbp-20h] BYREF

  now = common::tools::TimeUtils::getNow();
  __for_range = wait_confirm_team_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::begin(wait_confirm_team_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::end(wait_confirm_team_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>(
            &__for_begin,
            &__for_end) )
  {
    match_team_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>::operator*(&__for_begin);
    if ( !std::operator==<GCGMatchTeam>(0LL, match_team_ptr) )
    {
      v2 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
      GCGMatchTeam::refreshConfirm(v2, now);
      v3 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
      if ( !GCGMatchTeam::isValid(v3) )
      {
        v4 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
        match_unit_map = MatchTeam::getMatchUnitMap(v4);
        v5 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
        reason = GCGMatchTeam::getMatchReasonByStatus(v5);
        __for_range_0 = match_unit_map;
        __for_begin_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(match_unit_map)._M_cur;
        __for_end_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(__for_range_0)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin_0);
          unit = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
          match_unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
          v6 = 0;
          v8 = 0;
          if ( std::operator!=<MatchUnitBase>(0LL, match_unit_ptr) )
          {
            v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
            if ( MatchUnitBase::getMatchIdentity(v7) == MATCH_IDENTITY_NONE )
            {
              std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
              MatchUnitBase::getMatchTeam((const MatchUnitBase *const)&__a);
              v6 = 1;
              if ( std::operator==<MatchTeam>(0LL, &__a) )
                v8 = 1;
            }
          }
          if ( v6 )
            std::shared_ptr<MatchTeam>::~shared_ptr(&__a);
          if ( v8 )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v9 = (unsigned __int64)(this->_vptr_MatchPoolBase + 14);
            if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
              __asan_report_load8(this->_vptr_MatchPoolBase + 14);
            v10 = *(void (__fastcall **)(GCGMatchPool *const, std::shared_ptr<MatchTeam> *))v9;
            std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)&__a, match_unit_ptr);
            v10(this, &__a);
            std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)&__a);
            v11 = this;
            if ( *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit);
            }
            MatchPoolBase::notifyMatchStart(v11, *unit);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit);
            }
            GCGMatchPool::removeMatchUnit(this, *unit, reason);
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin_0);
        }
        std::__shared_ptr<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2>::reset(match_team_ptr);
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>::operator++(&__for_begin);
  }
  __for_end._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::end(wait_confirm_team_vec)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> const*,std::vector<std::shared_ptr<GCGMatchTeam>>>::__normal_iterator<std::shared_ptr<GCGMatchTeam>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMatchTeam>*,std::vector<std::shared_ptr<GCGMatchTeam>> > *const)&__for_end_0,
    &__for_end);
  M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::end(wait_confirm_team_vec)._M_current;
  v13._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::begin(wait_confirm_team_vec)._M_current;
  __for_begin._M_current = std::remove_if<__gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>,GCGMatchPool::refreshConfirmTeamVec(std::vector<std::shared_ptr<GCGMatchTeam>>&)::{lambda(std::shared_ptr<GCGMatchTeam> const&)#1}>(
                             v13,
                             (__gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam>*,std::vector<std::shared_ptr<GCGMatchTeam>> >)M_current,
                             v14)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> const*,std::vector<std::shared_ptr<GCGMatchTeam>>>::__normal_iterator<std::shared_ptr<GCGMatchTeam>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<GCGMatchTeam>*,std::vector<std::shared_ptr<GCGMatchTeam>> > *const)&__for_begin_0,
    &__for_begin);
  std::vector<std::shared_ptr<GCGMatchTeam>>::erase(
    wait_confirm_team_vec,
    (std::vector<std::shared_ptr<GCGMatchTeam>>::const_iterator)__for_begin_0._M_cur,
    (std::vector<std::shared_ptr<GCGMatchTeam>>::const_iterator)__for_end_0._M_cur);
};

// Line 193: range 000000000DE942F0-000000000DE94312
bool __cdecl GCGMatchPool::refreshConfirmTeamVec(std::vector<std::shared_ptr<GCGMatchTeam>> &)::{lambda(std::shared_ptr<GCGMatchTeam> const&)#1}::operator()(
        const GCGMatchPool::refreshConfirmTeamVec::<lambda(const GCGMatchTeamPtr&)> *const __closure,
        const GCGMatchTeamPtr *match_team_ptr)
{
  return std::operator==<GCGMatchTeam>(match_team_ptr, 0LL);
};

// Line 201: range 000000000DE94726-000000000DE94F7C
void __cdecl GCGMatchPool::updateMatchTeam(GCGMatchPool *const this, GCGMatchTeam *match_team, uint32_t now)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *MatchUnitMap; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(GCGMatchTeam *, _QWORD); // rcx
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  void (__fastcall **vptr_DescribalBase)(std::string *, std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  int (**v17)(...); // rax
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(GCGMatchTeam *, _QWORD); // rcx
  int v20; // r14d
  GCGMatchUnit *v21; // rax
  GCGMatchUnit *v22; // rax
  unsigned __int64 v24; // rax
  void (__fastcall *v25)(GCGMatchTeam *, _QWORD); // rcx
  GCGMatchUnit *v26; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+40h] [rbp-150h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_id; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+58h] [rbp-138h]
  common::milog::MiLogStream v34; // [rsp+60h] [rbp-130h] BYREF
  std::string val; // [rsp+80h] [rbp-110h] BYREF
  std::string v36; // [rsp+A0h] [rbp-F0h] BYREF
  char v37[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 22 gcg_match_unit_ptr:222 64 56 18 match_unit_map:208";
  *(_QWORD *)(v3 + 16) = GCGMatchPool::updateMatchTeam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  GCGMatchTeam::refreshConfirm(match_team, now);
  if ( GCGMatchTeam::isInMatch(match_team) )
  {
    MatchUnitMap = MatchTeam::getMatchUnitMap(match_team);
    std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::unordered_map(
      (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 64),
      MatchUnitMap);
    __for_range = (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *)(v3 + 64);
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 64))._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 64))._M_cur;
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
          v11 = *(void (__fastcall **)(GCGMatchTeam *, _QWORD))v10;
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
          GCGMatchPool::removeMatchUnit(this, *unit_id, MATCH_SYSTEM_ERROR);
        }
        else
        {
          std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v3 + 32));
          if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v3 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/service/match/gcg_match_pool.cpp",
              "updateMatchTeam",
              225);
            v12 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                    &v34,
                    (const char (*)[55])"dynamic_pointer_cast match_unit_ptr fail. match_unit: ");
            v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v13);
            vptr_DescribalBase = (void (__fastcall **)(std::string *, std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v13->_vptr_DescribalBase;
            if ( *(_BYTE *)(((unsigned __int64)v13->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
              __asan_report_load8(v13->_vptr_DescribalBase);
            (*vptr_DescribalBase)(&val, v13);
            v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, &val);
            v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v15,
                    (const char (*)[14])" match_team: ");
            if ( *(_BYTE *)(((unsigned __int64)match_team >> 3) + 0x7FFF8000) )
              __asan_report_load8(match_team);
            v17 = match_team->_vptr_DescribalBase;
            if ( *(_BYTE *)(((unsigned __int64)match_team->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
              __asan_report_load8(match_team->_vptr_DescribalBase);
            (*v17)(&v36, match_team);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &v36);
            std::string::~string(&v36);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v34);
            if ( *(_BYTE *)(((unsigned __int64)match_team >> 3) + 0x7FFF8000) )
              __asan_report_load8(match_team);
            v18 = (unsigned __int64)(match_team->_vptr_DescribalBase + 2);
            if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
              __asan_report_load8(match_team->_vptr_DescribalBase + 2);
            v19 = *(void (__fastcall **)(GCGMatchTeam *, _QWORD))v18;
            if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit_id);
            }
            v19(match_team, *unit_id);
            if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit_id);
            }
            GCGMatchPool::removeMatchUnit(this, *unit_id, MATCH_SYSTEM_ERROR);
            v20 = 0;
          }
          else
          {
            v21 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            if ( GCGMatchUnit::isMatchAI(v21) )
            {
              GCGMatchTeam::onMatchAISucc(match_team);
              v20 = 1;
            }
            else if ( !GCGMatchTeam::isInConfirm(match_team)
                   && (v22 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32)),
                       GCGMatchUnit::refreshMatchExtend(v22, now)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)match_team >> 3) + 0x7FFF8000) )
                __asan_report_load8(match_team);
              v24 = (unsigned __int64)(match_team->_vptr_DescribalBase + 2);
              if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                __asan_report_load8(match_team->_vptr_DescribalBase + 2);
              v25 = *(void (__fastcall **)(GCGMatchTeam *, _QWORD))v24;
              if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(unit_id);
              }
              v25(match_team, *unit_id);
              v26 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
              GCGMatchUnit::rematchByExtend(v26);
              v20 = 0;
            }
            else
            {
              v20 = 2;
            }
          }
          std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v3 + 32));
          if ( v20 && v20 != 2 )
            goto LABEL_60;
        }
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin);
    }
    if ( !MatchTeam::getPlayerCount(match_team) )
      GCGMatchTeam::setStatusInvalid(match_team);
LABEL_60:
    std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::~unordered_map((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v3 + 64));
  }
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 257: range 000000000DE94F7E-000000000DE952F1
void __cdecl GCGMatchPool::processMatchUnitWithoutTeam(GCGMatchPool *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>::pointer v4; // rax
  unsigned __int64 v5; // rax
  int v6; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v8[304]; // [rsp+10h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 8 8 iter:266 64 8 12 tmp_iter:268 96 16 18 match_unit_ptr:269 128 24 37 single_player_wait_"
                        "match_unit_vec:261 192 24 36 multi_player_wait_match_unit_vec:263";
  *(_QWORD *)(v1 + 16) = GCGMatchPool::processMatchUnitWithoutTeam;
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
      GCGMatchPool::removeMatchUnit(this, *(_DWORD *)v5, MATCH_FAILED);
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
        std::vector<std::shared_ptr<MatchUnitBase>>::push_back(
          (std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 128),
          (const std::vector<std::shared_ptr<MatchUnitBase>>::value_type *)(v1 + 96));
        v6 = std::vector<std::shared_ptr<MatchUnitBase>>::size((const std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 128)) <= 0x3E7
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
  GCGMatchPool::processSingleMatchUnit(this, (std::vector<std::shared_ptr<MatchUnitBase>> *)(v1 + 128));
  std::vector<std::shared_ptr<MatchUnitBase>>::~vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 192));
  std::vector<std::shared_ptr<MatchUnitBase>>::~vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 128));
  if ( v8 == (char *)v1 )
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

// Line 295: range 000000000DE952F2-000000000DE95564
void __cdecl GCGMatchPool::processSingleMatchUnit(
        GCGMatchPool *const this,
        std::vector<std::shared_ptr<MatchUnitBase>> *wait_match_unit_vec)
{
  bool v2; // bl
  unsigned __int64 v3; // rax
  unsigned int (__fastcall *v4)(GCGMatchPool *const, std::shared_ptr<MatchUnitBase> *); // r12
  bool v5; // r12
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t UnitId; // ecx
  common::milog::MiLogStream *v8; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-64h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+30h] [rbp-50h]
  std::shared_ptr<MatchUnitBase> *unit_ptr; // [rsp+38h] [rbp-48h]
  std::shared_ptr<MatchUnitBase> p_match_unit_ptr; // [rsp+40h] [rbp-40h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-30h] BYREF

  __for_range = wait_match_unit_vec;
  __for_begin._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::begin(wait_match_unit_vec)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::end(wait_match_unit_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>(
            &__for_begin,
            &__for_end) )
  {
    unit_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator*(&__for_begin);
    std::shared_ptr<MatchUnitBase>::shared_ptr(&p_match_unit_ptr, unit_ptr);
    v2 = GCGMatchPool::joinCandidateTeam(this, &p_match_unit_ptr) == 0;
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
    if ( !v2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v3 = (unsigned __int64)(this->_vptr_MatchPoolBase + 12);
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_MatchPoolBase + 12);
      v4 = *(unsigned int (__fastcall **)(GCGMatchPool *const, std::shared_ptr<MatchUnitBase> *))v3;
      std::shared_ptr<MatchUnitBase>::shared_ptr(&p_match_unit_ptr, unit_ptr);
      v5 = v4(this, &p_match_unit_ptr) && std::operator!=<MatchUnitBase>(0LL, unit_ptr);
      std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
      if ( v5 )
      {
        v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
        UnitId = MatchUnitBase::getUnitId(v6);
        GCGMatchPool::removeMatchUnit(this, UnitId, MATCH_FAILED);
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/gcg_match_pool.cpp",
          "processSingleMatchUnit",
          307);
        v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v16,
               (const char (*)[42])"[MATCH] createMatchTeam failed, unit id: ");
        v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
        val = MatchUnitBase::getUnitId(v9);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator++(&__for_begin);
  }
};

// Line 314: range 000000000DE95566-000000000DE956EA
int32_t __cdecl GCGMatchPool::joinCandidateTeam(GCGMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  GCGMatchTeam *v4; // rbx
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::vector<std::shared_ptr<GCGMatchTeam>>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  std::vector<std::shared_ptr<GCGMatchTeam>> *candidate_team_vec_ptr; // [rsp+28h] [rbp-38h]
  std::vector<std::shared_ptr<GCGMatchTeam>> *__for_range; // [rsp+30h] [rbp-30h]
  std::shared_ptr<GCGMatchTeam> *team_ptr; // [rsp+38h] [rbp-28h]
  std::shared_ptr<MatchUnitBase> p_unit_ptr; // [rsp+40h] [rbp-20h] BYREF

  std::shared_ptr<MatchUnitBase>::shared_ptr(&p_unit_ptr, p_match_unit_ptr);
  candidate_team_vec_ptr = GCGMatchPool::findGCGCandidateMatchTeamVecPtr(this, &p_unit_ptr);
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_unit_ptr);
  if ( !candidate_team_vec_ptr || std::vector<std::shared_ptr<GCGMatchTeam>>::empty(candidate_team_vec_ptr) )
    return -1;
  __for_range = candidate_team_vec_ptr;
  __for_begin._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::begin(candidate_team_vec_ptr)._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<GCGMatchTeam>>::end(candidate_team_vec_ptr)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>(
            &__for_begin,
            &__for_end) )
  {
    team_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>::operator*(&__for_begin);
    if ( !std::operator==<GCGMatchTeam>(0LL, team_ptr) )
    {
      v4 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)team_ptr);
      std::shared_ptr<MatchUnitBase>::shared_ptr(&p_unit_ptr, p_match_unit_ptr);
      LOBYTE(v4) = GCGMatchTeam::addMatchUnit(v4, &p_unit_ptr) == 0;
      std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_unit_ptr);
      if ( (_BYTE)v4 )
        return 0;
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<GCGMatchTeam> *,std::vector<std::shared_ptr<GCGMatchTeam>>>::operator++(&__for_begin);
  }
  return -1;
};

// Line 335: range 000000000DE956EC-000000000DE95DE5
int32_t __cdecl GCGMatchPool::confirmGuestUnit(
        GCGMatchPool *const this,
        const proto::ConfirmGuestUnitReq *req,
        proto::ConfirmGuestUnitRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  GCGMatchTeam *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  void (__fastcall **vptr_DescribalBase)(unsigned __int64, std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *); // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t MatchId; // eax
  bool is_agreed; // al
  std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  GCGMatchTeam *v20; // rax
  GCGMatchTeam *v21; // rax
  int32_t result; // eax
  std::less<unsigned int> __comp; // [rsp+2Ah] [rbp-176h] BYREF
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-175h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+2Ch] [rbp-174h] BYREF
  char v27[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 11 unit_id:336 48 16 18 match_unit_ptr:337 80 16 18 match_team_ptr:343 112 16 22 gcg_matc"
                        "h_team_ptr:344 144 32 10 notify:355 208 48 11 uid_set:363";
  *(_QWORD *)(v3 + 16) = GCGMatchPool::confirmGuestUnit;
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
      "./src/service/match/gcg_match_pool.cpp",
      "confirmGuestUnit",
      340);
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
    std::dynamic_pointer_cast<GCGMatchTeam,MatchTeam>((const std::shared_ptr<MatchTeam> *)(v3 + 112));
    if ( std::operator==<GCGMatchTeam>(0LL, (const std::shared_ptr<GCGMatchTeam> *)(v3 + 112)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 144),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/match/gcg_match_pool.cpp",
        "confirmGuestUnit",
        347);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             (common::milog::MiLogStream *const)(v3 + 144),
             (const char (*)[42])"[Match] match unit not in team, unit_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 144));
      v7 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( !GCGMatchTeam::isInConfirm(v9) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)((char *)&__l._M_array + 4),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/gcg_match_pool.cpp",
          "confirmGuestUnit",
          352);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)((char *)&__l._M_array + 4),
                (const char (*)[16])"[Match] match: ");
        v11 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8(v11);
        vptr_DescribalBase = (void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v11->_vptr_DescribalBase;
        if ( *(_BYTE *)(((unsigned __int64)v11->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
          __asan_report_load8(v11->_vptr_DescribalBase);
        (*vptr_DescribalBase)(v3 + 144, v11);
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 144));
        v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" unit_id: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" not in confirm");
        std::string::~string((void *)(v3 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)((char *)&__l._M_array + 4));
        v7 = -1;
      }
      else
      {
        proto::PlayerGCGMatchConfirmNotify::PlayerGCGMatchConfirmNotify((proto::PlayerGCGMatchConfirmNotify *const)(v3 + 144));
        v16 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        MatchId = GCGMatchTeam::getMatchId(v16);
        proto::PlayerGCGMatchConfirmNotify::set_match_id((proto::PlayerGCGMatchConfirmNotify *const)(v3 + 144), MatchId);
        proto::PlayerGCGMatchConfirmNotify::set_uid(
          (proto::PlayerGCGMatchConfirmNotify *const)(v3 + 144),
          *(_DWORD *)(v3 + 32));
        is_agreed = proto::ConfirmGuestUnitReq::is_agreed(req);
        proto::PlayerGCGMatchConfirmNotify::set_is_agree(
          (proto::PlayerGCGMatchConfirmNotify *const)(v3 + 144),
          is_agreed);
        v19 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        MatchTeam::sendToAllPlayer<proto::PlayerGCGMatchConfirmNotify>(
          v19,
          (proto::PlayerGCGMatchConfirmNotify *)(v3 + 144));
        proto::ConfirmGuestUnitRsp::set_retcode(rsp_0, 0);
        if ( !proto::ConfirmGuestUnitReq::is_agreed(req) )
        {
          LODWORD(__l._M_array) = *(_DWORD *)(v3 + 32);
          std::allocator<unsigned int>::allocator(&__a);
          std::set<unsigned int>::set(
            (std::set<unsigned int> *const)(v3 + 208),
            (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
            &__comp,
            &__a);
          std::allocator<unsigned int>::~allocator(&__a);
          v20 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          GCGMatchTeam::onTeamDismiss(v20, (const std::set<unsigned int> *)(v3 + 208), MATCH_PLAYER_CANCEL);
          v7 = 0;
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 208));
        }
        else
        {
          v21 = std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          GCGMatchTeam::addConfirmUid(v21, *(_DWORD *)(v3 + 32));
          v7 = 0;
        }
        proto::PlayerGCGMatchConfirmNotify::~PlayerGCGMatchConfirmNotify((proto::PlayerGCGMatchConfirmNotify *const)(v3 + 144));
      }
    }
    std::shared_ptr<GCGMatchTeam>::~shared_ptr((std::shared_ptr<GCGMatchTeam> *const)(v3 + 112));
    std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v3 + 80));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v3 + 48));
  result = v7;
  if ( v27 == (char *)v3 )
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

// Line 373: range 000000000DE95DE6-000000000DE95F36
int32_t __cdecl GCGMatchPool::addMatchPlayer(GCGMatchPool *const this, const proto::MatchPlayerJoinNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 unit_id:374";
  *(_QWORD *)(v2 + 16) = GCGMatchPool::addMatchPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::MatchPlayerJoinNotify::unit_id(notify);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/match/gcg_match_pool.cpp",
    "addMatchPlayer",
    375);
  v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
         &v7,
         (const char (*)[46])"[Match] match unit cant add player, unit_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v7);
  result = -1;
  if ( v8 == (char *)v2 )
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

// Line 380: range 000000000DE95F38-000000000DE96088
int32_t __cdecl GCGMatchPool::removeMatchPlayer(GCGMatchPool *const this, const proto::MatchPlayerQuitNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 unit_id:381";
  *(_QWORD *)(v2 + 16) = GCGMatchPool::removeMatchPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = proto::MatchPlayerQuitNotify::unit_id(notify);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/match/gcg_match_pool.cpp",
    "removeMatchPlayer",
    382);
  v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
         &v7,
         (const char (*)[49])"[Match] match unit cant remove player, unit_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v7);
  result = -1;
  if ( v8 == (char *)v2 )
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

// Line 387: range 000000000DE9608A-000000000DE96177
void __fastcall GCGMatchPool::removeMatchUnit(GCGMatchPool *const this, uint32_t unit_id, proto::MatchReason reason)
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
  *(_QWORD *)(v3 + 8) = "1 32 4 11 unit_id:386";
  *(_QWORD *)(v3 + 16) = GCGMatchPool::removeMatchUnit;
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

// Line 393: range 000000000DE96178-000000000DE963D0
void __cdecl GCGMatchPool::updatMatchCostTimeInfo(GCGMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 22 gcg_match_unit_ptr:394";
  *(_QWORD *)(v2 + 16) = GCGMatchPool::updatMatchCostTimeInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<GCGMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<GCGMatchUnit>(0LL, (const std::shared_ptr<GCGMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/gcg_match_pool.cpp",
      "updatMatchCostTimeInfo",
      397);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v13,
      (const char (*)[35])"[MATCH] gcg_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v5 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    join_team_time = MatchUnitBase::getJoinTeamTime(v5);
    v6 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    match_begin_time = MatchUnitBase::getMatchBeginTime(v6);
    if ( join_team_time >= match_begin_time )
    {
      cost_time = join_team_time - match_begin_time;
      v7 = std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<GCGMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __k = GCGMatchUnit::getMatchId(v7);
      match_cost_time_info = std::unordered_map<unsigned int,MatchCostTimeInfo>::operator[](
                               &this->match_cost_time_info_map_,
                               &__k);
      MatchPoolBase::doUpdatMatchCostTimeInfo(this, match_cost_time_info, cost_time);
    }
  }
  std::shared_ptr<GCGMatchUnit>::~shared_ptr((std::shared_ptr<GCGMatchUnit> *const)(v2 + 32));
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

// Line 412: range 000000000DE963D2-000000000DE9654A
uint32_t __fastcall GCGMatchPool::calEstimateMatchCostTime(const GCGMatchPool *const this, uint32_t match_id)
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
  *(_QWORD *)(v2 + 8) = "2 48 4 12 match_id:411 64 8 8 iter:413";
  *(_QWORD *)(v2 + 16) = GCGMatchPool::calEstimateMatchCostTime;
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
