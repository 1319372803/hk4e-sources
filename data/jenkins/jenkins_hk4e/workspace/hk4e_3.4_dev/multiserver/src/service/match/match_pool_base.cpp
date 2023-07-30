// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/match_pool_base.cpp

// Line 22: range 000000000D7A180A-000000000D7A18DC
int32_t __cdecl MatchPoolBase::start(MatchPoolBase *const this)
{
  MatchPoolBase *v2; // [rsp+10h] [rbp-50h] BYREF
  std::thread __t; // [rsp+18h] [rbp-48h] BYREF
  void (*__f[2])(MatchPoolBase *); // [rsp+20h] [rbp-40h] BYREF
  std::_Bind_helper<false,void (MatchPoolBase::*)(),MatchPoolBase*>::type v5; // [rsp+30h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_run_);
  this->is_run_ = 1;
  v2 = this;
  __f[0] = (void (*)(MatchPoolBase *))MatchPoolBase::workThread;
  __f[1] = 0LL;
  std::bind<void (MatchPoolBase::*)(void),MatchPoolBase*>(&v5, __f, &v2, (MatchPoolBase **)__f);
  ZNSt6threadC2ISt5_BindIFM13MatchPoolBaseFvvEPS2_EEJEvEEOT_DpOT0_(&__t, &v5);
  std::thread::operator=(&this->pool_thread_, &__t);
  std::thread::~thread(&__t);
  return 0;
};

// Line 30: range 000000000D7A18DE-000000000D7A194F
int32_t __cdecl MatchPoolBase::stop(MatchPoolBase *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_run_);
  this->is_run_ = 0;
  if ( std::thread::joinable(&this->pool_thread_) )
    std::thread::join(&this->pool_thread_);
  return 0;
};

// Line 41: range 000000000D7A1950-000000000D7A1A08
int32_t __cdecl MatchPoolBase::pushPacket(MatchPoolBase *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "pushPacket",
      44);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v3, (const char (*)[23])"[MATCH] packet is null");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
  else
  {
    common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>::push(&this->packet_ptr_queue_, p_packet_ptr);
    return 0;
  }
};

// Line 54: range 000000000D7A1A0A-000000000D7A1AC2
uint32_t __cdecl MatchPoolBase::doCalEstimateMatchCostTime(
        const MatchPoolBase *const this,
        const MatchCostTimeInfo *match_cost_time_info)
{
  unsigned __int64 total_cost_time; // rbx
  uint32_t estimate_match_cost_time; // [rsp+1Ch] [rbp-14h]

  if ( std::queue<unsigned int>::empty(&match_cost_time_info->cost_time_que) )
    return 1800;
  if ( std::queue<unsigned int>::size(&match_cost_time_info->cost_time_que) <= 0x31 )
    return 1800;
  if ( *(_BYTE *)(((unsigned __int64)&match_cost_time_info->total_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&match_cost_time_info->total_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&match_cost_time_info->total_cost_time);
  }
  total_cost_time = match_cost_time_info->total_cost_time;
  estimate_match_cost_time = total_cost_time / std::queue<unsigned int>::size(&match_cost_time_info->cost_time_que);
  if ( !estimate_match_cost_time )
    return 1;
  return estimate_match_cost_time;
};

// Line 75: range 000000000D7A1AC4-000000000D7A1CAA
void __fastcall MatchPoolBase::doUpdatMatchCostTimeInfo(
        MatchPoolBase *const this,
        MatchCostTimeInfo *match_cost_time_info,
        uint32_t cost_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::queue<unsigned int>::reference v6; // rax
  uint32_t *v7; // rdx
  uint32_t sub_cost_time; // [rsp+2Ch] [rbp-64h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 cost_time:74";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::doUpdatMatchCostTimeInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = cost_time;
  if ( std::queue<unsigned int>::size(&match_cost_time_info->cost_time_que) > 0x63 )
  {
    v6 = std::queue<unsigned int>::front(&match_cost_time_info->cost_time_que);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    sub_cost_time = *v7;
    if ( *(_BYTE *)(((unsigned __int64)&match_cost_time_info->total_cost_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&match_cost_time_info->total_cost_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&match_cost_time_info->total_cost_time);
    }
    if ( sub_cost_time <= match_cost_time_info->total_cost_time )
      match_cost_time_info->total_cost_time -= sub_cost_time;
    std::queue<unsigned int>::pop(&match_cost_time_info->cost_time_que);
  }
  std::queue<unsigned int>::push(
    &match_cost_time_info->cost_time_que,
    (const std::queue<unsigned int>::value_type *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&match_cost_time_info->total_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&match_cost_time_info->total_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&match_cost_time_info->total_cost_time);
  }
  match_cost_time_info->total_cost_time += *(_DWORD *)(v3 + 32);
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 90: range 000000000D7A1CAC-000000000D7A1D4B
void __cdecl MatchPoolBase::fillMatchStartNotify(
        MatchPoolBase *const this,
        MatchUnitPtr *p_match_unit_ptr,
        proto::MatchStartNotify *notify)
{
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t MatchBeginTime; // edx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t EstimateMatchCostTime; // edx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  bool v8; // dl

  if ( !std::operator==<MatchUnitBase>(0LL, p_match_unit_ptr) )
  {
    v3 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    MatchBeginTime = MatchUnitBase::getMatchBeginTime(v3);
    proto::MatchStartNotify::set_match_begin_time(notify, MatchBeginTime);
    v5 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    EstimateMatchCostTime = MatchUnitBase::getEstimateMatchCostTime(v5);
    proto::MatchStartNotify::set_estimate_match_cost_time(notify, EstimateMatchCostTime);
    v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    v8 = MatchUnitBase::getRematchCount(v7) != 0;
    proto::MatchStartNotify::set_is_rematch(notify, v8);
  }
};

// Line 102: range 000000000D7A1D4C-000000000D7A1D72
void __cdecl MatchPoolBase::fillMatchUnitRemovedNotify(
        MatchPoolBase *const this,
        proto::MatchReason reason,
        proto::MatchUnitRemovedNotify *notify)
{
  proto::MatchUnitRemovedNotify::set_reason(notify, reason);
};

// Line 107: range 000000000D7A1D74-000000000D7A1DAE
void __cdecl MatchPoolBase::fillGuestUnitAgreedResultNotify(
        MatchPoolBase *const this,
        uint32_t host_unit_id,
        proto::GuestUnitAgreedResultNotify::Reason reason,
        proto::GuestUnitAgreedResultNotify *notify)
{
  proto::GuestUnitAgreedResultNotify::set_host_unit_id(notify, host_unit_id);
  proto::GuestUnitAgreedResultNotify::set_reason(notify, reason);
};

// Line 113: range 000000000D7A1DB0-000000000D7A1E16
void __cdecl MatchPoolBase::fillGuestUnitMatchSuccNotify(
        MatchPoolBase *const this,
        MatchUnitPtr *p_match_unit_ptr,
        uint32_t host_unit_id,
        proto::GuestUnitMatchSuccNotify *notify)
{
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  google::protobuf::uint32 v5; // edx

  if ( !std::operator==<MatchUnitBase>(0LL, p_match_unit_ptr) )
  {
    proto::GuestUnitMatchSuccNotify::set_host_unit_id(notify, host_unit_id);
    v4 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    v5 = MatchUnitBase::getJoinTeamTime(v4) + 30;
    proto::GuestUnitMatchSuccNotify::set_confirm_end_time(notify, v5);
  }
};

// Line 124: range 000000000D7A1E64-000000000D7A2A39
void __cdecl MatchPoolBase::processMatchTeamVec(
        MatchPoolBase *const this,
        std::vector<std::shared_ptr<MatchTeam>> *wait_match_team_vec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::shared_ptr<MatchTeam> *v5; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  MatchUnitBase *v14; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  uint32_t PlayerCount; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  unsigned __int64 v29; // rax
  void (__fastcall *v30)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  common::milog::MiLogStream *v31; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rdx
  unsigned __int64 v36; // rax
  void (__fastcall *v37)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r8
  std::shared_ptr<MatchTeam> *M_current; // r14
  std::vector<std::shared_ptr<MatchTeam>>::iterator v39; // rax
  MatchPoolBase::processMatchTeamVec::<lambda(MatchTeamPtr)> v40; // dl
  proto::MatchReason reason; // [rsp+10h] [rbp-190h]
  uint32_t now; // [rsp+14h] [rbp-18Ch]
  std::vector<std::shared_ptr<MatchTeam>>::iterator __for_begin; // [rsp+18h] [rbp-188h] BYREF
  std::vector<std::shared_ptr<MatchTeam>>::iterator __for_end; // [rsp+20h] [rbp-180h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_begin_0; // [rsp+28h] [rbp-178h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator __for_end_0; // [rsp+30h] [rbp-170h] BYREF
  std::vector<std::shared_ptr<MatchTeam>> *__for_range; // [rsp+38h] [rbp-168h]
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *__for_range_0; // [rsp+40h] [rbp-160h]
  std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *__in; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *unit_id; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > >::type *match_unit_ptr; // [rsp+58h] [rbp-148h]
  std::shared_ptr<MatchUnitBase> p_match_unit_ptr; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v53; // [rsp+70h] [rbp-130h] BYREF
  char v54[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 18 match_team_ptr:131 64 24 25 random_match_team_vec:127 128 56 18 match_unit_map:136";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::processMatchTeamVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  std::vector<std::shared_ptr<MatchTeam>>::vector((std::vector<std::shared_ptr<MatchTeam>> *const)(v2 + 64));
  common::tools::RandomUtils::quickRandomSelect<std::shared_ptr<MatchTeam>>(
    wait_match_team_vec,
    (std::vector<std::shared_ptr<MatchTeam>> *)(v2 + 64),
    0x64u);
  now = common::tools::TimeUtils::getNow();
  __for_range = (std::vector<std::shared_ptr<MatchTeam>> *)(v2 + 64);
  __for_begin._M_current = std::vector<std::shared_ptr<MatchTeam>>::begin((std::vector<std::shared_ptr<MatchTeam>> *const)(v2 + 64))._M_current;
  __for_end._M_current = std::vector<std::shared_ptr<MatchTeam>>::end((std::vector<std::shared_ptr<MatchTeam>> *const)(v2 + 64))._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<MatchTeam> *,std::vector<std::shared_ptr<MatchTeam>>>(
            &__for_begin,
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> *,std::vector<std::shared_ptr<MatchTeam>>>::operator*(&__for_begin);
    std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)(v2 + 32), v5);
    if ( std::operator!=<MatchTeam>(0LL, (const std::shared_ptr<MatchTeam> *)(v2 + 32)) )
    {
      v6 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::unordered_map(
        (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v2 + 128),
        &v6->match_unit_map_);
      __for_range_0 = (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *)(v2 + 128);
      __for_begin_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v2 + 128))._M_cur;
      __for_end_0._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
                &__for_begin_0,
                &__for_end_0) )
      {
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator*(&__for_begin_0);
        unit_id = std::get<0ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
        match_unit_ptr = std::get<1ul,unsigned int const,std::shared_ptr<MatchUnitBase>>(__in);
        v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
        if ( now <= MatchUnitBase::getLastSyncTime(v7) + 20 )
        {
          reason = MATCH_NONE;
          v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
          if ( MatchUnitBase::getMatchIdentity(v13) == MATCH_IDENTITY_HOST )
          {
            v14 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
            MatchUnitBase::removeExpiredSlotUid(v14);
            v15 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
            if ( MatchUnitBase::isMatchFinish(v15) )
            {
              common::milog::MiLogStream::create(
                &v53,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/service/match/match_pool_base.cpp",
                "processMatchTeamVec",
                157);
              v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      &v53,
                      (const char (*)[32])"[MATCH] match finish, unit id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, unit_id);
              common::milog::MiLogStream::~MiLogStream(&v53);
              reason = MATCH_FINISH;
            }
            else
            {
              v17 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
              if ( MatchUnitBase::isMatchTimeout(v17) )
              {
                v18 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                if ( MatchTeam::getMatchUnitCount(v18) == 1 )
                {
                  v19 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
                  PlayerCount = MatchUnitBase::getPlayerCount(v19);
                  v21 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
                  if ( PlayerCount == MatchUnitBase::getPossiblePlayerCount(v21) )
                  {
                    common::milog::MiLogStream::create(
                      &v53,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/service/match/match_pool_base.cpp",
                      "processMatchTeamVec",
                      165);
                    v23 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            &v53,
                            (const char (*)[33])"[MATCH] match timeout, unit id: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, unit_id);
                    common::milog::MiLogStream::~MiLogStream(&v53);
                    reason = MATCH_TIMEOUT;
                  }
                }
              }
            }
          }
          else
          {
            v24 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
            if ( MatchUnitBase::getMatchIdentity(v24) == MATCH_IDENTITY_GUEST )
            {
              v25 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
              if ( MatchUnitBase::isMatchConfirmTimeout(v25) )
              {
                v26 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
                if ( MatchUnitBase::getRematchCount(v26) > 4 )
                {
                  common::milog::MiLogStream::create(
                    &v53,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/service/match/match_pool_base.cpp",
                    "processMatchTeamVec",
                    185);
                  v33 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          &v53,
                          (const char (*)[45])"[MATCH] rematch count reach limit, unit id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, unit_id);
                  common::milog::MiLogStream::~MiLogStream(&v53);
                  reason = MATCH_FAILED;
                }
                else
                {
                  v27 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
                  v28 = v27;
                  if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v27);
                  v29 = (unsigned __int64)(v28->_vptr_DescribalBase + 2);
                  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
                    __asan_report_load8(v28->_vptr_DescribalBase + 2);
                  v30 = *(void (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v29;
                  if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4(unit_id);
                  }
                  v30(v28, *unit_id);
                  std::shared_ptr<MatchUnitBase>::shared_ptr(&p_match_unit_ptr, match_unit_ptr);
                  MatchPoolBase::rematch(this, &p_match_unit_ptr);
                  std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
                  if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3)
                                                                              + 0x7FFF8000) )
                  {
                    __asan_report_load4(unit_id);
                  }
                  MatchPoolBase::notifyMatchStart(this, *unit_id);
                  common::milog::MiLogStream::create(
                    &v53,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/service/match/match_pool_base.cpp",
                    "processMatchTeamVec",
                    180);
                  v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          &v53,
                          (const char (*)[35])"[MATCH] confirm timeout, rematch: ");
                  v32 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_unit_ptr);
                  common::milog::MiLogStream::operator<<<MatchUnitBase,(MatchUnitBase*)0>(v31, v32);
                  common::milog::MiLogStream::~MiLogStream(&v53);
                }
              }
            }
          }
          if ( reason )
          {
            v34 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
            v35 = v34;
            if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v34);
            v36 = (unsigned __int64)(v35->_vptr_DescribalBase + 2);
            if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v35->_vptr_DescribalBase + 2);
            v37 = *(void (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v36;
            if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit_id);
            }
            v37(v35, *unit_id);
            std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
              &this->total_match_unit_map_,
              unit_id);
            if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(unit_id);
            }
            MatchPoolBase::notifyMatchUnitRemoved(this, *unit_id, reason);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v53,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/match/match_pool_base.cpp",
            "processMatchTeamVec",
            142);
          v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                 &v53,
                 (const char (*)[45])"[MATCH] sync interval is too long, unit_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, unit_id);
          common::milog::MiLogStream::~MiLogStream(&v53);
          v9 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          v10 = v9;
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v9);
          v11 = (unsigned __int64)(v10->_vptr_DescribalBase + 2);
          if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
            __asan_report_load8(v10->_vptr_DescribalBase + 2);
          v12 = *(void (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v11;
          if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(unit_id);
          }
          v12(v10, *unit_id);
          std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(&this->total_match_unit_map_, unit_id);
          if ( *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)unit_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)unit_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(unit_id);
          }
          MatchPoolBase::notifyMatchUnitRemoved(this, *unit_id, MATCH_FAILED);
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++(&__for_begin_0);
      }
      std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::~unordered_map((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(v2 + 128));
    }
    std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v2 + 32));
    __gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> *,std::vector<std::shared_ptr<MatchTeam>>>::operator++(&__for_begin);
  }
  __for_end._M_current = std::vector<std::shared_ptr<MatchTeam>>::end(wait_match_team_vec)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>::__normal_iterator<std::shared_ptr<MatchTeam>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *const)&__for_end_0,
    &__for_end);
  M_current = std::vector<std::shared_ptr<MatchTeam>>::end(wait_match_team_vec)._M_current;
  v39._M_current = std::vector<std::shared_ptr<MatchTeam>>::begin(wait_match_team_vec)._M_current;
  __for_begin._M_current = std::remove_if<__gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> *,std::vector<std::shared_ptr<MatchTeam>>>,MatchPoolBase::processMatchTeamVec(std::vector<std::shared_ptr<MatchTeam>>&)::{lambda(std::shared_ptr<MatchTeam>)#1}>(
                             v39,
                             (__gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> >)M_current,
                             v40)._M_current;
  __gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>::__normal_iterator<std::shared_ptr<MatchTeam>*>(
    (__gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *const)&__for_begin_0,
    &__for_begin);
  std::vector<std::shared_ptr<MatchTeam>>::erase(
    wait_match_team_vec,
    (std::vector<std::shared_ptr<MatchTeam>>::const_iterator)__for_begin_0._M_cur,
    (std::vector<std::shared_ptr<MatchTeam>>::const_iterator)__for_end_0._M_cur);
  std::vector<std::shared_ptr<MatchTeam>>::~vector((std::vector<std::shared_ptr<MatchTeam>> *const)(v2 + 64));
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 202: range 000000000D7A1E18-000000000D7A1E62
bool __cdecl MatchPoolBase::processMatchTeamVec(std::vector<std::shared_ptr<MatchTeam>> &)::{lambda(std::shared_ptr<MatchTeam>)#1}::operator()(
        const MatchPoolBase::processMatchTeamVec::<lambda(MatchTeamPtr)> *const __closure,
        MatchTeamPtr *p_match_team_ptr)
{
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool result; // al

  result = 1;
  if ( !std::operator==<MatchTeam>(0LL, p_match_team_ptr) )
  {
    v2 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_team_ptr);
    if ( MatchTeam::getPlayerCount(v2) )
      return 0;
  }
  return result;
};

// Line 211: range 000000000D7A2A3A-000000000D7A31CE
void __cdecl MatchPoolBase::workThread(MatchPoolBase *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  void (__fastcall **v4)(common::milog::MiLogStream *, MatchPoolBase *const); // rax
  const char *v5; // r14
  pthread_t v6; // rax
  int v7; // r14d
  const std::shared_ptr<common::minet::Packet> *v8; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint16_t CmdId; // ax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  int val; // [rsp+10h] [rbp-150h] BYREF
  uint32_t cmd_id; // [rsp+14h] [rbp-14Ch]
  uint64_t cur_time_ms; // [rsp+18h] [rbp-148h]
  std::shared_ptr<common::minet::Packet> p_packet_ptr; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-130h] BYREF
  char v19[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 12 que_size:240 48 16 13 timer_cmd:213 80 16 14 packet_ptr:243 112 80 14 packet_que:225";
  *(_QWORD *)(v1 + 16) = MatchPoolBase::workThread;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862723] = 62194;
  v3[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = (void (__fastcall **)(common::milog::MiLogStream *, MatchPoolBase *const))(this->_vptr_MatchPoolBase + 9);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_MatchPoolBase + 9);
  (*v4)(&v18, this);
  v5 = (const char *)std::string::c_str(&v18);
  v6 = pthread_self();
  pthread_setname_np(v6, v5);
  std::string::~string(&v18);
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 48));
  do
  {
    cur_time_ms = common::tools::TimeUtils::getNowMs();
    if ( *(_BYTE *)(((unsigned __int64)&this->last_deal_match_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->last_deal_match_time_ms_);
    if ( cur_time_ms > this->last_deal_match_time_ms_ + 100 )
    {
      MatchPoolBase::dealMatch(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_deal_match_time_ms_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->last_deal_match_time_ms_);
      this->last_deal_match_time_ms_ = cur_time_ms;
    }
    std::queue<std::shared_ptr<common::minet::Packet>>::queue<std::deque<std::shared_ptr<common::minet::Packet>>,void>((std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 112));
    common::tools::SafeQueue<std::shared_ptr<common::minet::Packet>>::popBatch(
      &this->packet_ptr_queue_,
      (std::queue<std::shared_ptr<common::minet::Packet>> *)(v1 + 112),
      0x3E8u);
    if ( std::queue<std::shared_ptr<common::minet::Packet>>::empty((const std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 112)) )
    {
      if ( *(char *)(((unsigned __int64)&this->is_run_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_run_);
      if ( !this->is_run_ )
      {
        v7 = 0;
        goto LABEL_35;
      }
      usleep(0x3E8u);
    }
    common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 48));
    *(_DWORD *)(v1 + 32) = std::queue<std::shared_ptr<common::minet::Packet>>::size((const std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 112));
    while ( !std::queue<std::shared_ptr<common::minet::Packet>>::empty((const std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 112)) )
    {
      v8 = std::queue<std::shared_ptr<common::minet::Packet>>::front((std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 112));
      std::shared_ptr<common::minet::Packet>::shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 80), v8);
      std::queue<std::shared_ptr<common::minet::Packet>>::pop((std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 112));
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
      CmdId = common::minet::Packet::getCmdId(v9);
      cmd_id = CmdId;
      switch ( CmdId )
      {
        case 0x2A9Bu:
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          MatchPoolBase::onRemoveMatchUnitReq(this, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          break;
        case 0x2AA8u:
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          MatchPoolBase::onMatchPlayerQuitNotify(this, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          break;
        case 0x2AAAu:
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          MatchPoolBase::onConfirmGuestUnitReq(this, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          break;
        case 0x2AAEu:
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          MatchPoolBase::onAddMatchUnitReq(this, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          break;
        case 0x2AB9u:
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          MatchPoolBase::onMatchPlayerUpdateNotify(this, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          break;
        case 0x2ABEu:
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          MatchPoolBase::onSyncMatchUnitReq(this, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          break;
        case 0x2AC5u:
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &p_packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v1 + 80));
          MatchPoolBase::onMatchPlayerJoinNotify(this, &p_packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_packet_ptr);
          break;
        default:
          break;
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 80));
    }
    if ( *(_DWORD *)(v1 + 32) > 0x1F4u )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/service/match/match_pool_base.cpp",
        "workThread",
        293);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v18,
              (const char (*)[19])"[MATCH] que size: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" ,cost time: ");
      val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 48));
      common::milog::MiLogStream::operator<<<int,(int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    v7 = 1;
LABEL_35:
    std::queue<std::shared_ptr<common::minet::Packet>>::~queue((std::queue<std::shared_ptr<common::minet::Packet>> *const)(v1 + 112));
  }
  while ( v7 == 1 );
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 48));
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 299: range 000000000D7A31D0-000000000D7A34DC
void __cdecl MatchPoolBase::dealMatch(MatchPoolBase *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  void (__fastcall **v4)(MatchPoolBase *const); // rax
  common::milog::MiLogStream *v5; // rax
  void (__fastcall **v6)(MatchPoolBase *const); // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-A0h] BYREF
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 14 time_cost1:303 48 4 14 time_cost2:311 64 16 9 timer:301";
  *(_QWORD *)(v1 + 16) = MatchPoolBase::dealMatch;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v4 = (void (__fastcall **)(MatchPoolBase *const))(this->_vptr_MatchPoolBase + 7);
  if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_MatchPoolBase + 7);
  (*v4)(this);
  *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 64));
  if ( *(_DWORD *)(v1 + 32) > 0x2710u )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/service/match/match_pool_base.cpp",
      "dealMatch",
      306);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v8,
           (const char (*)[29])"[MATCH] process time cost1: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (void (__fastcall **)(MatchPoolBase *const))(this->_vptr_MatchPoolBase + 8);
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_MatchPoolBase + 8);
  (*v6)(this);
  *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 64));
  if ( *(_DWORD *)(v1 + 48) > 0x7530u )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/service/match/match_pool_base.cpp",
      "dealMatch",
      314);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v8,
           (const char (*)[29])"[MATCH] process time cost2: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 64));
  if ( v9 == (char *)v1 )
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

// Line 319: range 000000000D7A34DE-000000000D7A421F
void __cdecl MatchPoolBase::processMatchUnitWithoutTeam(MatchPoolBase *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>::pointer v4; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::vector<std::shared_ptr<MatchUnitBase>>::size_type v9; // r14
  int v10; // r14d
  const std::shared_ptr<MatchUnitBase> *v11; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rax
  unsigned int (__fastcall *v14)(MatchPoolBase *const, unsigned __int64); // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const std::shared_ptr<MatchUnitBase> *v17; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  MatchTeam *v19; // r14
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  void (__fastcall *v22)(MatchPoolBase *const, unsigned __int64); // r14
  unsigned __int64 v23; // rax
  unsigned int (__fastcall *v24)(MatchPoolBase *const, unsigned __int64); // r14
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::vector<std::shared_ptr<MatchUnitBase>>::iterator __for_end; // [rsp+18h] [rbp-1C8h] BYREF
  std::vector<std::shared_ptr<MatchUnitBase>> *__for_range; // [rsp+20h] [rbp-1C0h]
  std::vector<std::shared_ptr<MatchUnitBase>> *__for_range_0; // [rsp+28h] [rbp-1B8h]
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-1B0h] BYREF
  char v31[400]; // [rsp+50h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 4 11 unit_id:377 64 8 8 iter:328 96 16 18 match_unit_ptr:373 128 16 25 select_match_team_pt"
                        "r:379 160 16 18 match_unit_ptr:353 192 16 18 match_unit_ptr:330 224 24 37 single_player_wait_mat"
                        "ch_unit_vec:323 288 24 36 multi_player_wait_match_unit_vec:325";
  *(_QWORD *)(v1 + 16) = MatchPoolBase::processMatchUnitWithoutTeam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -219021312;
  v3[536862727] = -234881024;
  v3[536862728] = -218959118;
  v3[536862729] = -218103808;
  v3[536862730] = -202116109;
  std::vector<std::shared_ptr<MatchUnitBase>>::vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 224));
  std::vector<std::shared_ptr<MatchUnitBase>>::vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 288));
  *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(&this->total_match_unit_map_);
  while ( 1 )
  {
    __for_end._M_current = (std::shared_ptr<MatchUnitBase> *)std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(&this->total_match_unit_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)(v1 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false> *)&__for_end) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v1 + 64));
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192), &v4->second);
    if ( !std::operator!=<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 192)) )
      goto LABEL_17;
    v5 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
    if ( MatchUnitBase::getMatchIdentity(v5) == MATCH_IDENTITY_NONE )
    {
      v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192));
      if ( MatchUnitBase::getPlayerCount(v6) == 1
        && (v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 192)),
            MatchUnitBase::getExpectIdentity(v7) != MATCH_IDENTITY_HOST) )
      {
        std::vector<std::shared_ptr<MatchUnitBase>>::push_back(
          (std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 224),
          (const std::vector<std::shared_ptr<MatchUnitBase>>::value_type *)(v1 + 192));
      }
      else
      {
        std::vector<std::shared_ptr<MatchUnitBase>>::push_back(
          (std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 288),
          (const std::vector<std::shared_ptr<MatchUnitBase>>::value_type *)(v1 + 192));
      }
    }
    v9 = std::vector<std::shared_ptr<MatchUnitBase>>::size((const std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 224));
    if ( v9
       + std::vector<std::shared_ptr<MatchUnitBase>>::size((const std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 288)) > 0x7CF )
      v10 = 0;
    else
LABEL_17:
      v10 = 1;
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
    if ( v10 != 1 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false> *const)(v1 + 64));
  }
  __for_range = (std::vector<std::shared_ptr<MatchUnitBase>> *)(v1 + 288);
  *(std::vector<std::shared_ptr<MatchUnitBase>>::iterator *)(v1 + 64) = std::vector<std::shared_ptr<MatchUnitBase>>::begin((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 288));
  __for_end._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase>*,std::vector<std::shared_ptr<MatchUnitBase>> > *)(v1 + 64),
            &__for_end) )
  {
    v11 = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase>*,std::vector<std::shared_ptr<MatchUnitBase>> > *const)(v1 + 64));
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 160), v11);
    if ( std::operator!=<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 160)) )
    {
      v12 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      *(_DWORD *)(v1 + 48) = MatchUnitBase::getUnitId(v12);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v13 = (unsigned __int64)(this->_vptr_MatchPoolBase + 12);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_MatchPoolBase + 12);
      v14 = *(unsigned int (__fastcall **)(MatchPoolBase *const, unsigned __int64))v13;
      std::shared_ptr<MatchUnitBase>::shared_ptr(
        (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
        (const std::shared_ptr<MatchUnitBase> *)(v1 + 160));
      LOBYTE(v14) = v14(this, v1 + 192) != 0;
      std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
      if ( (_BYTE)v14 )
      {
        std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
          &this->total_match_unit_map_,
          (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v1 + 48));
        MatchPoolBase::notifyMatchUnitRemoved(this, *(_DWORD *)(v1 + 48), MATCH_FAILED);
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/match_pool_base.cpp",
          "processMatchUnitWithoutTeam",
          362);
        v15 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v30,
                (const char (*)[42])"[MATCH] createMatchTeam failed, unit id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/match_pool_base.cpp",
          "processMatchUnitWithoutTeam",
          366);
        v16 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v30,
                (const char (*)[39])"[MATCH] notifyMatchIdentity, unit id; ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        std::shared_ptr<MatchUnitBase>::shared_ptr(
          (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
          (const std::shared_ptr<MatchUnitBase> *)(v1 + 160));
        MatchPoolBase::notifyMatchIdentity(this, (MatchUnitPtr *)(v1 + 192));
        std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
      }
    }
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 160));
    __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase>*,std::vector<std::shared_ptr<MatchUnitBase>> > *const)(v1 + 64));
  }
  __for_range_0 = (std::vector<std::shared_ptr<MatchUnitBase>> *)(v1 + 224);
  *(std::vector<std::shared_ptr<MatchUnitBase>>::iterator *)(v1 + 64) = std::vector<std::shared_ptr<MatchUnitBase>>::begin((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 224));
  __for_end._M_current = std::vector<std::shared_ptr<MatchUnitBase>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase>*,std::vector<std::shared_ptr<MatchUnitBase>> > *)(v1 + 64),
            &__for_end) )
  {
    v17 = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase>*,std::vector<std::shared_ptr<MatchUnitBase>> > *const)(v1 + 64));
    std::shared_ptr<MatchUnitBase>::shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 96), v17);
    if ( std::operator!=<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v1 + 96)) )
    {
      v18 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      *(_DWORD *)(v1 + 48) = MatchUnitBase::getUnitId(v18);
      std::shared_ptr<MatchUnitBase>::shared_ptr(
        (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
        (const std::shared_ptr<MatchUnitBase> *)(v1 + 96));
      MatchPoolBase::selectSuitableMatchTeam((MatchPoolBase *const)(v1 + 128), (MatchUnitPtr *)this);
      std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
      if ( std::operator!=<MatchTeam>(0LL, (const std::shared_ptr<MatchTeam> *)(v1 + 128)) )
      {
        v19 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
        std::shared_ptr<MatchUnitBase>::shared_ptr(
          (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
          (const std::shared_ptr<MatchUnitBase> *)(v1 + 96));
        LOBYTE(v19) = MatchTeam::addMatchUnit(v19, (MatchUnitPtr *)(v1 + 192), MATCH_IDENTITY_GUEST) != 0;
        std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
        if ( (_BYTE)v19 )
        {
          std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
            &this->total_match_unit_map_,
            (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v1 + 48));
          MatchPoolBase::notifyMatchUnitRemoved(this, *(_DWORD *)(v1 + 48), MATCH_FAILED);
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/match/match_pool_base.cpp",
            "processMatchUnitWithoutTeam",
            386);
          v20 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v30,
                  (const char (*)[39])"[MATCH] addMatchUnit failed, unit id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v21 = (unsigned __int64)(this->_vptr_MatchPoolBase + 13);
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            __asan_report_load8(this->_vptr_MatchPoolBase + 13);
          v22 = *(void (__fastcall **)(MatchPoolBase *const, unsigned __int64))v21;
          std::shared_ptr<MatchUnitBase>::shared_ptr(
            (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
            (const std::shared_ptr<MatchUnitBase> *)(v1 + 96));
          v22(this, v1 + 192);
          std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
          std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
          MatchTeam::getHostMatchUnit((const MatchTeam *const)(v1 + 160));
          std::shared_ptr<MatchUnitBase>::shared_ptr(
            (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
            (const std::shared_ptr<MatchUnitBase> *)(v1 + 96));
          MatchPoolBase::notifyUnitMatchSucc(this, (MatchUnitPtr *)(v1 + 192), (MatchUnitPtr *)(v1 + 160));
          std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
          std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 160));
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v23 = (unsigned __int64)(this->_vptr_MatchPoolBase + 12);
        if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
          __asan_report_load8(this->_vptr_MatchPoolBase + 12);
        v24 = *(unsigned int (__fastcall **)(MatchPoolBase *const, unsigned __int64))v23;
        std::shared_ptr<MatchUnitBase>::shared_ptr(
          (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
          (const std::shared_ptr<MatchUnitBase> *)(v1 + 96));
        LOBYTE(v24) = v24(this, v1 + 192) != 0;
        std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
        if ( (_BYTE)v24 )
        {
          std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
            &this->total_match_unit_map_,
            (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v1 + 48));
          MatchPoolBase::notifyMatchUnitRemoved(this, *(_DWORD *)(v1 + 48), MATCH_FAILED);
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/match/match_pool_base.cpp",
            "processMatchUnitWithoutTeam",
            403);
          v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v30,
                  (const char (*)[42])"[MATCH] createMatchTeam failed, unit id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/service/match/match_pool_base.cpp",
            "processMatchUnitWithoutTeam",
            407);
          v26 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v30,
                  (const char (*)[39])"[MATCH] notifyMatchIdentity, unit id; ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v30);
          std::shared_ptr<MatchUnitBase>::shared_ptr(
            (std::shared_ptr<MatchUnitBase> *const)(v1 + 192),
            (const std::shared_ptr<MatchUnitBase> *)(v1 + 96));
          MatchPoolBase::notifyMatchIdentity(this, (MatchUnitPtr *)(v1 + 192));
          std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 192));
        }
      }
      std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v1 + 128));
    }
    std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v1 + 96));
    __gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase> *,std::vector<std::shared_ptr<MatchUnitBase>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<MatchUnitBase>*,std::vector<std::shared_ptr<MatchUnitBase>> > *const)(v1 + 64));
  }
  std::vector<std::shared_ptr<MatchUnitBase>>::~vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 288));
  std::vector<std::shared_ptr<MatchUnitBase>>::~vector((std::vector<std::shared_ptr<MatchUnitBase>> *const)(v1 + 224));
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 416: range 000000000D7A42F0-000000000D7A4488
MatchTeamPtr __cdecl MatchPoolBase::computeBestMatchTeam(
        const MatchPoolBase *const this,
        const MatchUnitPtr *match_unit_ptr,
        const std::vector<std::shared_ptr<MatchTeam>> *match_team_vec)
{
  const std::vector<std::shared_ptr<MatchTeam>> *v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  MatchTeamPtr result; // rax
  const std::shared_ptr<MatchTeam> *M_current; // r14
  std::vector<std::shared_ptr<MatchTeam>>::const_iterator v9; // rax
  MatchPoolBase::computeBestMatchTeam::<lambda(MatchTeamPtr, MatchTeamPtr)> v10; // dl
  const std::shared_ptr<MatchTeam> *v11; // rdx
  const std::vector<std::shared_ptr<MatchTeam>> *match_team_veca; // [rsp+0h] [rbp-A0h]
  __gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > __rhs; // [rsp+28h] [rbp-78h] BYREF
  char v15[112]; // [rsp+30h] [rbp-70h] BYREF

  match_team_veca = v3;
  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 12 min_iter:439";
  *(_QWORD *)(v4 + 16) = MatchPoolBase::computeBestMatchTeam;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( std::operator==<MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)match_team_vec, 0LL) )
  {
    std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
  }
  else
  {
    M_current = std::vector<std::shared_ptr<MatchTeam>>::end(match_team_veca)._M_current;
    v9._M_current = std::vector<std::shared_ptr<MatchTeam>>::begin(match_team_veca)._M_current;
    *(__gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *)(v4 + 32) = std::min_element<__gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>,MatchPoolBase::computeBestMatchTeam(std::shared_ptr const&<MatchUnitBase>,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::shared_ptr<MatchTeam>,std::shared_ptr<MatchTeam>)#1}>(v9, (__gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> >)M_current, v10);
    __rhs._M_current = std::vector<std::shared_ptr<MatchTeam>>::end(match_team_veca)._M_current;
    if ( __gnu_cxx::operator==<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>(
           (const __gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *)(v4 + 32),
           &__rhs) )
    {
      std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
    }
    else
    {
      v11 = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *const)(v4 + 32));
      std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, v11);
    }
  }
  if ( v15 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<MatchTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 419: range 000000000D7A4220-000000000D7A42EE
bool __cdecl MatchPoolBase::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)const::{lambda(std::shared_ptr<MatchTeam>,std::shared_ptr<MatchTeam>)#1}::operator()(
        const MatchPoolBase::computeBestMatchTeam::<lambda(MatchTeamPtr, MatchTeamPtr)> *const __closure,
        MatchTeamPtr *p_lhs,
        MatchTeamPtr *p_rhs)
{
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t lhs_world_level; // [rsp+20h] [rbp-10h]
  uint32_t rhs_world_level; // [rsp+24h] [rbp-Ch]
  uint32_t lhs_possible_player_count; // [rsp+28h] [rbp-8h]
  uint32_t rhs_possible_player_count; // [rsp+2Ch] [rbp-4h]

  if ( std::operator==<MatchTeam>(0LL, p_lhs) || std::operator==<MatchTeam>(0LL, p_rhs) )
    return 0;
  v5 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_lhs);
  lhs_world_level = MatchTeam::getWorldLevel(v5);
  v6 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_rhs);
  rhs_world_level = MatchTeam::getWorldLevel(v6);
  v7 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_lhs);
  lhs_possible_player_count = MatchTeam::getPossiblePlayerCount(v7);
  v8 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_rhs);
  rhs_possible_player_count = MatchTeam::getPossiblePlayerCount(v8);
  if ( lhs_world_level == rhs_world_level )
    return lhs_possible_player_count < rhs_possible_player_count;
  else
    return lhs_world_level > rhs_world_level;
};

// Line 446: range 000000000D7A48C8-000000000D7A4CC4
MatchTeamPtr __cdecl MatchPoolBase::selectSuitableMatchTeam(MatchPoolBase *const this, MatchUnitPtr *p_match_unit_ptr)
{
  MatchUnitPtr *v2; // rdx
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Hashtable<unsigned int,std::pair<unsigned int const,proto::MatchPlayer>,std::allocator<std::pair<unsigned int const,proto::MatchPlayer> >,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *p_M_element_count; // rax
  __int64 (__fastcall *v7)(MatchUnitPtr *, std::shared_ptr<MatchUnitBase> *); // r14
  MatchTeamPtr result; // rax
  std::vector<std::shared_ptr<MatchTeam>> *container; // r15
  std::shared_ptr<MatchTeam> *M_current; // r14
  std::vector<std::shared_ptr<MatchTeam>>::iterator v12; // rax
  uint32_t *p_rematch_count; // rax
  void (__fastcall *v14)(MatchPoolBase *const, MatchUnitPtr *, MatchUnitPtr *, unsigned __int64); // r8
  MatchUnitPtr *p_match_unit_ptra; // [rsp+8h] [rbp-108h]
  std::vector<std::shared_ptr<MatchTeam>> *candidate_match_team_vec_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<MatchUnitBase> v17; // [rsp+30h] [rbp-E0h] BYREF
  char v18[208]; // [rsp+40h] [rbp-D0h] BYREF

  p_match_unit_ptra = v2;
  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 24 24 random_candidate_vec:455 96 24 25 filter_match_team_vec:459";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::selectSuitableMatchTeam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)p_match_unit_ptr >> 3) + 0x7FFF8000) )
    __asan_report_load8(p_match_unit_ptr);
  p_M_element_count = &p_match_unit_ptr->_M_ptr->match_player_map_._M_h._M_element_count;
  if ( *(_BYTE *)(((unsigned __int64)p_M_element_count >> 3) + 0x7FFF8000) )
    __asan_report_load8(&p_match_unit_ptr->_M_ptr->match_player_map_._M_h._M_element_count);
  v7 = (__int64 (__fastcall *)(MatchUnitPtr *, std::shared_ptr<MatchUnitBase> *))*p_M_element_count;
  std::shared_ptr<MatchUnitBase>::shared_ptr(&v17, p_match_unit_ptra);
  candidate_match_team_vec_ptr = (std::vector<std::shared_ptr<MatchTeam>> *)v7(p_match_unit_ptr, &v17);
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&v17);
  if ( !candidate_match_team_vec_ptr || std::vector<std::shared_ptr<MatchTeam>>::empty(candidate_match_team_vec_ptr) )
  {
    std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
  }
  else
  {
    std::vector<std::shared_ptr<MatchTeam>>::vector((std::vector<std::shared_ptr<MatchTeam>> *const)(v3 + 32));
    common::tools::RandomUtils::quickRandomSelect<std::shared_ptr<MatchTeam>>(
      candidate_match_team_vec_ptr,
      (std::vector<std::shared_ptr<MatchTeam>> *)(v3 + 32),
      0x14u);
    std::vector<std::shared_ptr<MatchTeam>>::vector((std::vector<std::shared_ptr<MatchTeam>> *const)(v3 + 96));
    std::shared_ptr<MatchUnitBase>::shared_ptr(&v17, p_match_unit_ptra);
    container = std::back_inserter<std::vector<std::shared_ptr<MatchTeam>>>((std::vector<std::shared_ptr<MatchTeam>> *)(v3 + 96)).container;
    M_current = std::vector<std::shared_ptr<MatchTeam>>::end((std::vector<std::shared_ptr<MatchTeam>> *const)(v3 + 32))._M_current;
    v12._M_current = std::vector<std::shared_ptr<MatchTeam>>::begin((std::vector<std::shared_ptr<MatchTeam>> *const)(v3 + 32))._M_current;
    std::copy_if<__gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> *,std::vector<std::shared_ptr<MatchTeam>>>,std::back_insert_iterator<std::vector<std::shared_ptr<MatchTeam>>>,MatchPoolBase::selectSuitableMatchTeam(std::shared_ptr<MatchUnitBase>)::{lambda(std::shared_ptr<MatchTeam>)#1}>(
      v12,
      (__gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> >)M_current,
      (std::back_insert_iterator<std::vector<std::shared_ptr<MatchTeam>> >)container,
      (MatchPoolBase::selectSuitableMatchTeam::<lambda(MatchTeamPtr)> *)&v17);
    MatchPoolBase::selectSuitableMatchTeam(std::shared_ptr<MatchUnitBase>)::{lambda(std::shared_ptr<MatchTeam>)#1}::~shared_ptr((MatchPoolBase::selectSuitableMatchTeam::<lambda(MatchTeamPtr)> *const)&v17);
    if ( std::vector<std::shared_ptr<MatchTeam>>::empty((const std::vector<std::shared_ptr<MatchTeam>> *const)(v3 + 96)) )
    {
      std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)p_match_unit_ptr >> 3) + 0x7FFF8000) )
        __asan_report_load8(p_match_unit_ptr);
      p_rematch_count = &p_match_unit_ptr->_M_ptr->rematch_count_;
      if ( *(_BYTE *)(((unsigned __int64)p_rematch_count >> 3) + 0x7FFF8000) )
        __asan_report_load8(&p_match_unit_ptr->_M_ptr->rematch_count_);
      v14 = *(void (__fastcall **)(MatchPoolBase *const, MatchUnitPtr *, MatchUnitPtr *, unsigned __int64))p_rematch_count;
      if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_store16(this, M_current);
      v14(this, p_match_unit_ptr, p_match_unit_ptra, v3 + 96);
    }
    std::vector<std::shared_ptr<MatchTeam>>::~vector((std::vector<std::shared_ptr<MatchTeam>> *const)(v3 + 96));
    std::vector<std::shared_ptr<MatchTeam>>::~vector((std::vector<std::shared_ptr<MatchTeam>> *const)(v3 + 32));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<MatchTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 460: range 000000000D7A448A-000000000D7A48AB
bool __cdecl MatchPoolBase::selectSuitableMatchTeam(std::shared_ptr<MatchUnitBase>)::{lambda(std::shared_ptr<MatchTeam>)#1}::operator()(
        const MatchPoolBase::selectSuitableMatchTeam::<lambda(MatchTeamPtr)> *const __closure,
        MatchTeamPtr *p_match_team_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t WorldLevel; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t PossiblePlayerCount; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool v12; // r14
  MatchUnitBase *v13; // rax
  MatchTeam *v14; // rax
  MatchTeam *v15; // rax
  MatchUnitBase *v16; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // eax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  uint32_t HostPlatfromType; // eax
  bool v24; // al
  bool result; // al
  char v26[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 23 host_match_unit_ptr:484 64 24 22 match_unit_uid_vec:470 128 24 22 match_team_uid_vec:477";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::selectSuitableMatchTeam(std::shared_ptr<MatchUnitBase>)::{lambda(std::shared_ptr<MatchTeam>)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  if ( std::operator==<MatchTeam>(0LL, p_match_team_ptr)
    || std::operator==<MatchUnitBase>(0LL, &__closure->__match_unit_ptr)
    || (v5 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_team_ptr),
        WorldLevel = MatchTeam::getWorldLevel(v5),
        v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure),
        WorldLevel > MatchUnitBase::getWorldLevel(v7))
    || (v8 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_team_ptr),
        PossiblePlayerCount = MatchTeam::getPossiblePlayerCount(v8),
        v10 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure),
        PossiblePlayerCount >= MatchUnitBase::getMaxPlayers(v10)) )
  {
    v12 = 0;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
    MatchUnitBase::getAllMatchPlayerUids(v13, (std::vector<unsigned int> *)(v2 + 64));
    v14 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_team_ptr);
    if ( MatchTeam::isPlayerInMatchUnitBlacklist(v14, (const std::vector<unsigned int> *)(v2 + 64)) )
    {
      v12 = 0;
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
      v15 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_team_ptr);
      MatchTeam::getAllMatchUnitUids(v15, (std::vector<unsigned int> *)(v2 + 128));
      v16 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
      if ( MatchUnitBase::isPlayerInBlacklist(v16, (const std::vector<unsigned int> *)(v2 + 128)) )
      {
        v12 = 0;
      }
      else
      {
        std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_team_ptr);
        MatchTeam::getHostMatchUnit((const MatchTeam *const)(v2 + 32));
        if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 32)) )
        {
          v12 = 0;
        }
        else
        {
          v17 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          if ( MatchUnitBase::isHostOnlyMatchWithPSPlayer(v17)
            && (v18 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure),
                v19 = MatchUnitBase::getHostPlatfromType(v18),
                !TxtConfigMgr::isPsnPlatform(v19)) )
          {
            v12 = 0;
          }
          else
          {
            v21 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
            v24 = 0;
            if ( MatchUnitBase::isHostOnlyMatchWithPSPlayer(v21) )
            {
              v22 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              HostPlatfromType = MatchUnitBase::getHostPlatfromType(v22);
              if ( !TxtConfigMgr::isPsnPlatform(HostPlatfromType) )
                v24 = 1;
            }
            v12 = !v24;
          }
        }
        std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 32));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  }
  result = v12;
  if ( v26 == (char *)v2 )
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
  return result;
};

// Line 460: range 000000000D7A48AC-000000000D7A48C6
void __cdecl MatchPoolBase::selectSuitableMatchTeam(std::shared_ptr<MatchUnitBase>)::{lambda(std::shared_ptr<MatchTeam>)#1}::~shared_ptr(
        MatchPoolBase::selectSuitableMatchTeam::<lambda(MatchTeamPtr)> *const this)
{
  std::shared_ptr<MatchUnitBase>::~shared_ptr(&this->__match_unit_ptr);
};

// Line 512: range 000000000D7A4CC6-000000000D7A4DA7
void __cdecl MatchPoolBase::rematch(MatchPoolBase *const this, MatchUnitPtr *p_match_unit_ptr)
{
  MatchUnitBase *v2; // rax
  unsigned __int64 v3; // rax
  void (__fastcall *v4)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *); // rbx
  std::shared_ptr<MatchUnitBase> v5; // [rsp+10h] [rbp-20h] BYREF

  if ( !std::operator==<MatchUnitBase>(0LL, p_match_unit_ptr) )
  {
    v2 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    MatchUnitBase::rematch(v2);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v3 = (unsigned __int64)(this->_vptr_MatchPoolBase + 14);
    if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_MatchPoolBase + 14);
    v4 = *(void (__fastcall **)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *))v3;
    std::shared_ptr<MatchUnitBase>::shared_ptr(&v5, p_match_unit_ptr);
    v4(this, &v5);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v5);
  }
};

// Line 522: range 000000000D7A4DA8-000000000D7A4F30
MatchPoolBase *__fastcall MatchPoolBase::findMatchUnit(MatchPoolBase *const this, __int64 unit_id, int a3)
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
  *(_QWORD *)(v3 + 8) = "2 48 4 11 unit_id:521 64 8 8 iter:523";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::findMatchUnit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::find(
                                                                                              (std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(unit_id + 8),
                                                                                              (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end((std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *const)(unit_id + 8))._M_cur;
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

// Line 533: range 000000000D7A4F32-000000000D7A52DB
int32_t __cdecl MatchPoolBase::onAddMatchUnitReq(MatchPoolBase *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t matched; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  MatchService *v8; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::AddMatchUnitReq *req; // [rsp+20h] [rbp-E0h]
  proto::AddMatchUnitRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::AddMatchUnitRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:534 64 16 11 rsp_ptr:534";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::onAddMatchUnitReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::AddMatchUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::AddMatchUnitReq const>(
         (const std::shared_ptr<const proto::AddMatchUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "onAddMatchUnitReq",
      534);
    common::milog::MiLogStream::operator()(&v15, off_1BA1AEC0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    matched = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::AddMatchUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::AddMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::AddMatchUnitRsp>();
    rsp_0 = std::__shared_ptr_access<proto::AddMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::AddMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::AddMatchUnitRsp::set_retcode(rsp_0, -1);
    proto::AddMatchUnitRsp::set_retcode(rsp_0, -1);
    if ( MatchPoolBase::addMatchUnit(this, req, rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/match/match_pool_base.cpp",
        "onAddMatchUnitReq",
        539);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v15,
             (const char (*)[35])"[MATCH] addMatchUnit failed, uid: ");
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      matched = -1;
    }
    else
    {
      v8 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
      std::shared_ptr<proto::AddMatchUnitRsp>::shared_ptr(
        &p_rsp_ptr,
        (const std::shared_ptr<proto::AddMatchUnitRsp> *)(v2 + 64));
      matched = ServiceBase::sendRsp<proto::AddMatchUnitRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
      std::shared_ptr<proto::AddMatchUnitRsp>::~shared_ptr(&p_rsp_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    }
    std::shared_ptr<proto::AddMatchUnitRsp>::~shared_ptr((std::shared_ptr<proto::AddMatchUnitRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::AddMatchUnitReq const>::~shared_ptr((std::shared_ptr<const proto::AddMatchUnitReq> *const)(v2 + 32));
  result = matched;
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

// Line 547: range 000000000D7A52DC-000000000D7A5685
int32_t __cdecl MatchPoolBase::onRemoveMatchUnitReq(MatchPoolBase *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  MatchService *v8; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::RemoveMatchUnitReq *req; // [rsp+20h] [rbp-E0h]
  proto::RemoveMatchUnitRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::RemoveMatchUnitRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:548 64 16 11 rsp_ptr:548";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::onRemoveMatchUnitReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::RemoveMatchUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::RemoveMatchUnitReq const>(
         (const std::shared_ptr<const proto::RemoveMatchUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "onRemoveMatchUnitReq",
      548);
    common::milog::MiLogStream::operator()(&v15, off_1BA1AEC0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::RemoveMatchUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::RemoveMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::RemoveMatchUnitRsp>();
    rsp_0 = std::__shared_ptr_access<proto::RemoveMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::RemoveMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::RemoveMatchUnitRsp::set_retcode(rsp_0, -1);
    proto::RemoveMatchUnitRsp::set_retcode(rsp_0, -1);
    if ( MatchPoolBase::removeMatchUnit(this, req, rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/match/match_pool_base.cpp",
        "onRemoveMatchUnitReq",
        553);
      v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v15,
             (const char (*)[38])"[MATCH] removeMatchUnit failed, uid: ");
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v5 = -1;
    }
    else
    {
      v8 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
      std::shared_ptr<proto::RemoveMatchUnitRsp>::shared_ptr(
        &p_rsp_ptr,
        (const std::shared_ptr<proto::RemoveMatchUnitRsp> *)(v2 + 64));
      v5 = ServiceBase::sendRsp<proto::RemoveMatchUnitRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
      std::shared_ptr<proto::RemoveMatchUnitRsp>::~shared_ptr(&p_rsp_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    }
    std::shared_ptr<proto::RemoveMatchUnitRsp>::~shared_ptr((std::shared_ptr<proto::RemoveMatchUnitRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::RemoveMatchUnitReq const>::~shared_ptr((std::shared_ptr<const proto::RemoveMatchUnitReq> *const)(v2 + 32));
  result = v5;
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

// Line 561: range 000000000D7A5686-000000000D7A5AE9
int32_t __cdecl MatchPoolBase::onConfirmGuestUnitReq(MatchPoolBase *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  proto::MatchType matched; // eax
  bool is_agreed; // al
  google::protobuf::uint32 v8; // eax
  unsigned int (__fastcall **v9)(MatchPoolBase *const, const proto::ConfirmGuestUnitReq *, proto::ConfirmGuestUnitRsp *); // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  MatchService *v12; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::ConfirmGuestUnitReq *req; // [rsp+20h] [rbp-E0h]
  proto::ConfirmGuestUnitRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::ConfirmGuestUnitRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:562 64 16 11 rsp_ptr:562";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::onConfirmGuestUnitReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::ConfirmGuestUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::ConfirmGuestUnitReq const>(
         (const std::shared_ptr<const proto::ConfirmGuestUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "onConfirmGuestUnitReq",
      562);
    common::milog::MiLogStream::operator()(&v19, off_1BA1AEC0);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::ConfirmGuestUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::ConfirmGuestUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::ConfirmGuestUnitRsp>();
    rsp_0 = std::__shared_ptr_access<proto::ConfirmGuestUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::ConfirmGuestUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::ConfirmGuestUnitRsp::set_retcode(rsp_0, -1);
    proto::ConfirmGuestUnitRsp::set_retcode(rsp_0, -1);
    matched = proto::ConfirmGuestUnitReq::match_type(req);
    proto::ConfirmGuestUnitRsp::set_match_type(rsp_0, matched);
    is_agreed = proto::ConfirmGuestUnitReq::is_agreed(req);
    proto::ConfirmGuestUnitRsp::set_is_agreed(rsp_0, is_agreed);
    v8 = proto::ConfirmGuestUnitReq::match_id(req);
    proto::ConfirmGuestUnitRsp::set_match_id(rsp_0, v8);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v9 = (unsigned int (__fastcall **)(MatchPoolBase *const, const proto::ConfirmGuestUnitReq *, proto::ConfirmGuestUnitRsp *))(this->_vptr_MatchPoolBase + 15);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_MatchPoolBase + 15);
    if ( (*v9)(this, req, rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/service/match/match_pool_base.cpp",
        "onConfirmGuestUnitReq",
        570);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v19,
              (const char (*)[39])"[MATCH] confirmGuestUnit failed, uid: ");
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v11);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      v5 = -1;
    }
    else
    {
      v12 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
      std::shared_ptr<proto::ConfirmGuestUnitRsp>::shared_ptr(
        &p_rsp_ptr,
        (const std::shared_ptr<proto::ConfirmGuestUnitRsp> *)(v2 + 64));
      v5 = ServiceBase::sendRsp<proto::ConfirmGuestUnitRsp>(v12, &p_rsp_ptr, &p_req_packet_ptr);
      std::shared_ptr<proto::ConfirmGuestUnitRsp>::~shared_ptr(&p_rsp_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    }
    std::shared_ptr<proto::ConfirmGuestUnitRsp>::~shared_ptr((std::shared_ptr<proto::ConfirmGuestUnitRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::ConfirmGuestUnitReq const>::~shared_ptr((std::shared_ptr<const proto::ConfirmGuestUnitReq> *const)(v2 + 32));
  result = v5;
  if ( v20 == (char *)v2 )
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

// Line 578: range 000000000D7A5AEA-000000000D7A5DBF
int32_t __cdecl MatchPoolBase::onMatchPlayerJoinNotify(
        MatchPoolBase *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  unsigned int (__fastcall **v6)(MatchPoolBase *const, const proto::MatchPlayerJoinNotify *); // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const proto::MatchPlayerJoinNotify *notify; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:579";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::onMatchPlayerJoinNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchPlayerJoinNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchPlayerJoinNotify const>(
         (const std::shared_ptr<const proto::MatchPlayerJoinNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "onMatchPlayerJoinNotify",
      579);
    common::milog::MiLogStream::operator()(&v12, off_1BA1B180);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchPlayerJoinNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchPlayerJoinNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = (unsigned int (__fastcall **)(MatchPoolBase *const, const proto::MatchPlayerJoinNotify *))(this->_vptr_MatchPoolBase
                                                                                                  + 16);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_MatchPoolBase + 16);
    if ( (*v6)(this, notify) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "onMatchPlayerJoinNotify",
        583);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v12,
             (const char (*)[37])"[MATCH] addMatchPlayer failed, uid: ");
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<proto::MatchPlayerJoinNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchPlayerJoinNotify> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 590: range 000000000D7A5DC0-000000000D7A6097
int32_t __cdecl MatchPoolBase::onMatchPlayerQuitNotify(
        MatchPoolBase *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  unsigned int (__fastcall **v6)(MatchPoolBase *const, const proto::MatchPlayerQuitNotify *); // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const proto::MatchPlayerQuitNotify *notify; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:591";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::onMatchPlayerQuitNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchPlayerQuitNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchPlayerQuitNotify const>(
         (const std::shared_ptr<const proto::MatchPlayerQuitNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "onMatchPlayerQuitNotify",
      591);
    common::milog::MiLogStream::operator()(&v12, off_1BA1B2A0);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchPlayerQuitNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchPlayerQuitNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = (unsigned int (__fastcall **)(MatchPoolBase *const, const proto::MatchPlayerQuitNotify *))(this->_vptr_MatchPoolBase
                                                                                                  + 17);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_MatchPoolBase + 17);
    if ( (*v6)(this, notify) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "onMatchPlayerQuitNotify",
        595);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v12,
             (const char (*)[40])"[MATCH] removeMatchPlayer failed, uid: ");
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v8);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v12);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<proto::MatchPlayerQuitNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchPlayerQuitNotify> *const)(v2 + 32));
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 602: range 000000000D7A6098-000000000D7A6425
int32_t __cdecl MatchPoolBase::onSyncMatchUnitReq(MatchPoolBase *const this, common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t matched; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  MatchService *v8; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::SyncMatchUnitReq *req; // [rsp+20h] [rbp-E0h]
  proto::SyncMatchUnitRsp *rsp_0; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<proto::SyncMatchUnitRsp> p_rsp_ptr; // [rsp+30h] [rbp-D0h] BYREF
  std::shared_ptr<common::minet::Packet> p_req_packet_ptr; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 req_ptr:603 64 16 11 rsp_ptr:603";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::onSyncMatchUnitReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::SyncMatchUnitReq>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::SyncMatchUnitReq const>(
         (const std::shared_ptr<const proto::SyncMatchUnitReq> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "onSyncMatchUnitReq",
      603);
    common::milog::MiLogStream::operator()(&v15, off_1BA1AEC0);
    common::milog::MiLogStream::~MiLogStream(&v15);
    matched = -1;
  }
  else
  {
    req = std::__shared_ptr_access<proto::SyncMatchUnitReq const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::SyncMatchUnitReq,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    common::tools::perf::make_shared<proto::SyncMatchUnitRsp>();
    rsp_0 = std::__shared_ptr_access<proto::SyncMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::SyncMatchUnitRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::SyncMatchUnitRsp::set_retcode(rsp_0, -1);
    if ( MatchPoolBase::syncMatchUnit(this, req, rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "onSyncMatchUnitReq",
        607);
      v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v15,
             (const char (*)[36])"[MATCH] syncMatchUnit failed, uid: ");
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    v8 = ServiceBox::findService<MatchService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(&p_req_packet_ptr, p_packet_ptr);
    std::shared_ptr<proto::SyncMatchUnitRsp>::shared_ptr(
      &p_rsp_ptr,
      (const std::shared_ptr<proto::SyncMatchUnitRsp> *)(v2 + 64));
    matched = ServiceBase::sendRsp<proto::SyncMatchUnitRsp>(v8, &p_rsp_ptr, &p_req_packet_ptr);
    std::shared_ptr<proto::SyncMatchUnitRsp>::~shared_ptr(&p_rsp_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&p_req_packet_ptr);
    std::shared_ptr<proto::SyncMatchUnitRsp>::~shared_ptr((std::shared_ptr<proto::SyncMatchUnitRsp> *const)(v2 + 64));
  }
  std::shared_ptr<proto::SyncMatchUnitReq const>::~shared_ptr((std::shared_ptr<const proto::SyncMatchUnitReq> *const)(v2 + 32));
  result = matched;
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

// Line 614: range 000000000D7A6426-000000000D7A66A9
int32_t __cdecl MatchPoolBase::onMatchPlayerUpdateNotify(
        MatchPoolBase *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const proto::MatchPlayerUpdateNotify *notify; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:615";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::onMatchPlayerUpdateNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  common::minet::Packet::getConstProto<proto::MatchPlayerUpdateNotify>((common::minet::Packet *const)(v2 + 32));
  if ( std::operator==<proto::MatchPlayerUpdateNotify const>(
         (const std::shared_ptr<const proto::MatchPlayerUpdateNotify> *)(v2 + 32),
         0LL) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "onMatchPlayerUpdateNotify",
      615);
    common::milog::MiLogStream::operator()(&v11, off_1BA1B4A0);
    common::milog::MiLogStream::~MiLogStream(&v11);
    v5 = -1;
  }
  else
  {
    notify = std::__shared_ptr_access<proto::MatchPlayerUpdateNotify const,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<const proto::MatchPlayerUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( MatchPoolBase::updateMatchPlayer(this, notify) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "onMatchPlayerUpdateNotify",
        619);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v11,
             (const char (*)[40])"[Match] updateMatchPlayer failed, uid: ");
      v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
      val = common::minet::Packet::getUserId(v7);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  std::shared_ptr<proto::MatchPlayerUpdateNotify const>::~shared_ptr((std::shared_ptr<const proto::MatchPlayerUpdateNotify> *const)(v2 + 32));
  result = v5;
  if ( v12 == (char *)v2 )
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

// Line 626: range 000000000D7A66AA-000000000D7A6A55
void __cdecl MatchPoolBase::notifyUnitMatchSucc(
        MatchPoolBase *const this,
        MatchUnitPtr *p_guest_unit_ptr,
        MatchUnitPtr *p_host_unit_ptr)
{
  proto::GuestUnitMatchSuccNotify *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v10; // rax
  void (__fastcall *v11)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *, _QWORD, proto::GuestUnitMatchSuccNotify *); // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  uint32_t UnitId; // r15d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t v15; // ecx
  std::shared_ptr<MatchUnitBase> v17; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (proto::GuestUnitMatchSuccNotify *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (proto::GuestUnitMatchSuccNotify *)v4;
  }
  v3->_vptr_MessageLite = (int (**)(...))1102416563;
  v3->_internal_metadata_.ptr_ = "1 48 48 16 guest_notify:640";
  *(_QWORD *)&v3->host_unit_id_ = MatchPoolBase::notifyUnitMatchSucc;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  if ( std::operator==<MatchUnitBase>(0LL, p_guest_unit_ptr)
    || (v6 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_guest_unit_ptr),
        MatchUnitBase::getMatchIdentity(v6) != MATCH_IDENTITY_GUEST) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "notifyUnitMatchSucc",
      629);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v18,
      (const char (*)[34])"[Match] guest_unit_ptr is invalid");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else if ( std::operator==<MatchUnitBase>(0LL, p_host_unit_ptr)
         || (v8 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_host_unit_ptr),
             MatchUnitBase::getMatchIdentity(v8) != MATCH_IDENTITY_HOST) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "notifyUnitMatchSucc",
      635);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v18,
      (const char (*)[33])"[Match] host_unit_ptr is invalid");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    proto::GuestUnitMatchSuccNotify::GuestUnitMatchSuccNotify(v3 + 1);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v10 = (unsigned __int64)(this->_vptr_MatchPoolBase + 5);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_MatchPoolBase + 5);
    v11 = *(void (__fastcall **)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *, _QWORD, proto::GuestUnitMatchSuccNotify *))v10;
    v12 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_host_unit_ptr);
    UnitId = MatchUnitBase::getUnitId(v12);
    std::shared_ptr<MatchUnitBase>::shared_ptr(&v17, p_guest_unit_ptr);
    v11(this, &v17, UnitId, v3 + 1);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v17);
    v14 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_guest_unit_ptr);
    v15 = MatchUnitBase::getUnitId(v14);
    MatchPoolBase::notifyGuestUnitMatchSucc(this, v15, v3 + 1);
    proto::GuestUnitMatchSuccNotify::~GuestUnitMatchSuccNotify(v3 + 1);
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v3->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 646: range 000000000D7A6A56-000000000D7A6D49
void __cdecl MatchPoolBase::notifyGuestUnitMatchSucc(
        MatchPoolBase *const this,
        uint32_t guest_unit_id,
        const proto::GuestUnitMatchSuccNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::minet::Packet *v6; // rdx
  MatchService *v7; // r14
  unsigned __int64 v8; // rdx
  common::minet::Packet *v9; // rax
  common::minet::Packet *v10; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  void (__fastcall *v14)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 packet_ptr:647";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::notifyGuestUnitMatchSucc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "notifyGuestUnitMatchSucc",
      650);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v17,
      (const char (*)[28])"[Match] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    common::minet::Packet::setProto<proto::GuestUnitMatchSuccNotify>(v6, notify);
    v7 = ServiceBox::findService<MatchService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    common::minet::Packet::setUserId(v9, guest_unit_id);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    common::minet::Packet::setTargetService(v10, 3u);
    v11 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v12 = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v11);
    v13 = (unsigned __int64)(v12->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12->_vptr_NetworkMgrBase + 8);
    v14 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v13;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    v14(v12, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 32));
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 662: range 000000000D7A6D4A-000000000D7A72BE
void __fastcall MatchPoolBase::notifyMatchStart(MatchPoolBase *const this, uint32_t unit_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *, unsigned __int64); // r14
  common::minet::Packet *v8; // rax
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *); // r15
  std::shared_ptr<MatchUnitBase> v17; // [rsp+20h] [rbp-140h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-130h] BYREF
  char v19[272]; // [rsp+50h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 11 unit_id:661 48 16 18 match_unit_ptr:663 80 16 14 packet_ptr:673 112 72 10 notify:670";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::notifyMatchStart;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 32) = unit_id;
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v2 + 48), (__int64)this, *(_DWORD *)(v2 + 32));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "notifyMatchStart",
      666);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v18,
           (const char (*)[37])"[Match] unit_id not exist, unit_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    proto::MatchStartNotify::MatchStartNotify((proto::MatchStartNotify *const)(v2 + 112));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v6 = (unsigned __int64)(this->_vptr_MatchPoolBase + 2);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      __asan_report_load8(this->_vptr_MatchPoolBase + 2);
    v7 = *(void (__fastcall **)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *, unsigned __int64))v6;
    std::shared_ptr<MatchUnitBase>::shared_ptr(&v17, (const std::shared_ptr<MatchUnitBase> *)(v2 + 48));
    v7(this, &v17, v2 + 112);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v17);
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "notifyMatchStart",
        676);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v18,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      common::minet::Packet::setProto<proto::MatchStartNotify>(v8, (const proto::MatchStartNotify *)(v2 + 112));
      v9 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&v17,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 80));
      ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &v17));
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v17);
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      common::minet::Packet::setUserId(v11, *(_DWORD *)(v2 + 32));
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      common::minet::Packet::setTargetService(v12, 3u);
      v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v13);
      v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
      v16 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *))v15;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        (std::shared_ptr<common::minet::Packet> *const)&v17,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 80));
      v16(v14, &v17);
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&v17);
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 80));
    proto::MatchStartNotify::~MatchStartNotify((proto::MatchStartNotify *const)(v2 + 112));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 48));
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 688: range 000000000D7A72C0-000000000D7A768A
void __cdecl MatchPoolBase::notifyMatchUnitRemoved(
        MatchPoolBase *const this,
        uint32_t unit_id,
        proto::MatchReason reason)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  common::minet::Packet *v7; // rax
  MatchService *v8; // r14
  unsigned __int64 v9; // rdx
  common::minet::Packet *v10; // rax
  common::minet::Packet *v11; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  unsigned __int64 v14; // rax
  void (__fastcall *v15)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 14 packet_ptr:692 64 32 10 notify:689";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::notifyMatchUnitRemoved;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862723] = -202116109;
  proto::MatchUnitRemovedNotify::MatchUnitRemovedNotify((proto::MatchUnitRemovedNotify *const)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = (unsigned __int64)(this->_vptr_MatchPoolBase + 3);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_MatchPoolBase + 3);
  (*(void (__fastcall **)(MatchPoolBase *const, _QWORD, unsigned __int64))v6)(this, (unsigned int)reason, v3 + 64);
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "notifyMatchUnitRemoved",
      695);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v18,
      (const char (*)[28])"[Match] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    common::minet::Packet::setProto<proto::MatchUnitRemovedNotify>(v7, (const proto::MatchUnitRemovedNotify *)(v3 + 64));
    v8 = ServiceBox::findService<MatchService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    ServiceBase::setPacketSource(v8, (common::minet::PacketPtr)__PAIR128__(v9, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    common::minet::Packet::setUserId(v10, unit_id);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    common::minet::Packet::setTargetService(v11, 3u);
    v12 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v12);
    v14 = (unsigned __int64)(v13->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13->_vptr_NetworkMgrBase + 8);
    v15 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v14;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v3 + 32));
    v15(v13, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 32));
  proto::MatchUnitRemovedNotify::~MatchUnitRemovedNotify((proto::MatchUnitRemovedNotify *const)(v3 + 64));
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 707: range 000000000D7A768C-000000000D7A7A60
void __cdecl MatchPoolBase::notifyGuestUnitAgreedResult(
        MatchPoolBase *const this,
        uint32_t guest_unit_id,
        uint32_t host_unit_id,
        proto::GuestUnitAgreedResultNotify::Reason reason)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned __int64 v7; // rax
  common::minet::Packet *v8; // rax
  MatchService *v9; // r14
  unsigned __int64 v10; // rdx
  common::minet::Packet *v11; // rax
  common::minet::Packet *v12; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  unsigned __int64 v15; // rax
  void (__fastcall *v16)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 14 packet_ptr:711 64 32 10 notify:708";
  *(_QWORD *)(v4 + 16) = MatchPoolBase::notifyGuestUnitAgreedResult;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862723] = -202116109;
  proto::GuestUnitAgreedResultNotify::GuestUnitAgreedResultNotify((proto::GuestUnitAgreedResultNotify *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v7 = (unsigned __int64)(this->_vptr_MatchPoolBase + 4);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    __asan_report_load8(this->_vptr_MatchPoolBase + 4);
  (*(void (__fastcall **)(MatchPoolBase *const, _QWORD, _QWORD, unsigned __int64))v7)(
    this,
    host_unit_id,
    (unsigned int)reason,
    v4 + 64);
  common::minet::PacketUtils::createPacket();
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "notifyGuestUnitAgreedResult",
      714);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v20,
      (const char (*)[28])"[Match] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    common::minet::Packet::setProto<proto::GuestUnitAgreedResultNotify>(
      v8,
      (const proto::GuestUnitAgreedResultNotify *)(v4 + 64));
    v9 = ServiceBox::findService<MatchService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 32));
    ServiceBase::setPacketSource(v9, (common::minet::PacketPtr)__PAIR128__(v10, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    common::minet::Packet::setUserId(v11, guest_unit_id);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    common::minet::Packet::setTargetService(v12, 3u);
    v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v13);
    v15 = (unsigned __int64)(v14->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v14->_vptr_NetworkMgrBase + 8);
    v16 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v15;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v4 + 32));
    v16(v14, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v4 + 32));
  proto::GuestUnitAgreedResultNotify::~GuestUnitAgreedResultNotify((proto::GuestUnitAgreedResultNotify *const)(v4 + 64));
  if ( v21 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 726: range 000000000D7A7A62-000000000D7A7EA7
void __cdecl MatchPoolBase::notifyMatchIdentity(MatchPoolBase *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  proto::MatchType MatchType; // eax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::MatchIdentity MatchIdentity; // eax
  common::minet::Packet *v9; // rax
  MatchService *v10; // r14
  unsigned __int64 v11; // rdx
  common::minet::Packet *v12; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t UnitId; // eax
  common::minet::Packet *v15; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  unsigned __int64 v18; // rax
  void (__fastcall *v19)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 packet_ptr:736 64 32 10 notify:732";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::notifyMatchIdentity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  if ( std::operator==<MatchUnitBase>(0LL, p_match_unit_ptr) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "notifyMatchIdentity",
      729);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v21,
      (const char (*)[27])"[MATCH] match unit is null");
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    proto::MatchIdentityNotify::MatchIdentityNotify((proto::MatchIdentityNotify *const)(v2 + 64));
    v5 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    MatchType = MatchUnitBase::getMatchType(v5);
    proto::MatchIdentityNotify::set_match_type((proto::MatchIdentityNotify *const)(v2 + 64), MatchType);
    v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
    MatchIdentity = MatchUnitBase::getMatchIdentity(v7);
    proto::MatchIdentityNotify::set_match_identity((proto::MatchIdentityNotify *const)(v2 + 64), MatchIdentity);
    common::minet::PacketUtils::createPacket();
    if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "notifyMatchIdentity",
        739);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v21,
        (const char (*)[28])"[Match] createPacket failed");
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      v9 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setProto<proto::MatchIdentityNotify>(v9, (const proto::MatchIdentityNotify *)(v2 + 64));
      v10 = ServiceBox::findService<MatchService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v10, (common::minet::PacketPtr)__PAIR128__(v11, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_match_unit_ptr);
      UnitId = MatchUnitBase::getUnitId(v13);
      common::minet::Packet::setUserId(v12, UnitId);
      v15 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      common::minet::Packet::setTargetService(v15, 3u);
      v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v16);
      v18 = (unsigned __int64)(v17->_vptr_NetworkMgrBase + 8);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v17->_vptr_NetworkMgrBase + 8);
      v19 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v18;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      v19(v17, &packet_ptr);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
    proto::MatchIdentityNotify::~MatchIdentityNotify((proto::MatchIdentityNotify *const)(v2 + 64));
  }
  if ( v22 == (char *)v2 )
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
};

// Line 751: range 000000000D7A7EA8-000000000D7A841D
int32_t __cdecl MatchPoolBase::addMatchUnit(
        MatchPoolBase *const this,
        const proto::AddMatchUnitReq *req,
        proto::AddMatchUnitRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t v6; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  unsigned __int64 v9; // rax
  unsigned int (__fastcall *v10)(std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const proto::MatchUnit *); // r15
  const proto::MatchUnit *matched; // rax
  MatchUnitBase *v12; // rax
  MatchUnitBase *v13; // rax
  MatchUnitBase *v14; // r14
  proto::MatchIdentity v15; // eax
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *); // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::shared_ptr<MatchUnitBase> *v19; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  proto::MatchType v22; // edx
  proto::MatchUnit *v23; // r14
  const proto::MatchUnit *v24; // rax
  google::protobuf::uint32 v25; // edx
  google::protobuf::uint32 v26; // edx
  google::protobuf::uint32 v27; // edx
  int32_t result; // eax
  uint32_t now; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<MatchUnitBase> v31; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+40h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 unit_id:775 64 16 18 match_unit_ptr:752";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::addMatchUnit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  MatchUnitFactory::createMatchUnit((const proto::AddMatchUnitReq *)(v3 + 64));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "addMatchUnit",
      755);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v32,
      (const char (*)[27])"[MATCH] match unit is null");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    v9 = (unsigned __int64)(v8->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8->_vptr_DescribalBase + 3);
    v10 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, const proto::MatchUnit *))v9;
    matched = proto::AddMatchUnitReq::match_unit(req);
    if ( v10(v8, matched) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "addMatchUnit",
        761);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        &v32,
        (const char (*)[40])"[MATCH] match unit initFromProto failed");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v6 = -1;
    }
    else
    {
      now = common::tools::TimeUtils::getNow();
      v12 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      MatchUnitBase::setMatchBeginTime(v12, now);
      v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      MatchUnitBase::setLastSyncTime(v13, now);
      v14 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v15 = proto::AddMatchUnitReq::expect_identity(req);
      MatchUnitBase::setExpectIdentity(v14, v15);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v16 = (unsigned __int64)(this->_vptr_MatchPoolBase + 14);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8(this->_vptr_MatchPoolBase + 14);
      v17 = *(void (__fastcall **)(MatchPoolBase *const, std::shared_ptr<MatchUnitBase> *))v16;
      std::shared_ptr<MatchUnitBase>::shared_ptr(&v31, (const std::shared_ptr<MatchUnitBase> *)(v3 + 64));
      v17(this, &v31);
      std::shared_ptr<MatchUnitBase>::~shared_ptr(&v31);
      v18 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      *(_DWORD *)(v3 + 48) = MatchUnitBase::getUnitId(v18);
      v20 = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::emplace<unsigned int const&,std::shared_ptr<MatchUnitBase>&>(
              &this->total_match_unit_map_,
              (const unsigned int *)(v3 + 48),
              (std::shared_ptr<MatchUnitBase> *)(v3 + 64),
              (const unsigned int *)&this->total_match_unit_map_,
              v19);
      if ( !v20.second )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/match_pool_base.cpp",
          "addMatchUnit",
          778);
        v21 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v32,
                (const char (*)[41])"[Match] unit_id already exist, unit_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v6 = -1;
      }
      else
      {
        MatchPoolBase::notifyMatchStart(this, *(_DWORD *)(v3 + 48));
        proto::AddMatchUnitRsp::set_retcode(rsp_0, 0);
        v22 = proto::AddMatchUnitReq::match_type(req);
        proto::AddMatchUnitRsp::set_match_type(rsp_0, v22);
        v23 = proto::AddMatchUnitRsp::mutable_match_unit(rsp_0);
        v24 = proto::AddMatchUnitReq::match_unit(req);
        proto::MatchUnit::CopyFrom(v23, v24);
        v25 = proto::AddMatchUnitReq::dungeon_id(req);
        proto::AddMatchUnitRsp::set_dungeon_id(rsp_0, v25);
        v26 = proto::AddMatchUnitReq::mp_play_id(req);
        proto::AddMatchUnitRsp::set_mp_play_id(rsp_0, v26);
        v27 = proto::AddMatchUnitReq::mechanicus_tag(req);
        proto::AddMatchUnitRsp::set_mechanicus_tag(rsp_0, v27);
        v6 = 0;
      }
    }
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v3 + 64));
  result = v6;
  if ( v33 == (char *)v3 )
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

// Line 798: range 000000000D7A841E-000000000D7A885F
int32_t __cdecl MatchPoolBase::removeMatchUnit(
        MatchPoolBase *const this,
        const proto::RemoveMatchUnitReq *req,
        proto::RemoveMatchUnitRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD); // r15
  google::protobuf::uint32 v13; // eax
  uint32_t v14; // ecx
  uint32_t v15; // ecx
  uint32_t v16; // ecx
  proto::MatchType matched; // edx
  google::protobuf::uint32 v18; // edx
  proto::MatchUnitRemoveOpType v19; // edx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 18 match_unit_ptr:799 64 16 18 match_team_ptr:806";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::removeMatchUnit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  v6 = proto::RemoveMatchUnitReq::unit_id(req);
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v3 + 32), (__int64)this, v6);
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_pool_base.cpp",
      "removeMatchUnit",
      802);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v23,
           (const char (*)[37])"[Match] unit_id not exist, unit_id: ");
    val = proto::RemoveMatchUnitReq::unit_id(req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = -1;
  }
  else
  {
    std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    MatchUnitBase::getMatchTeam((const MatchUnitBase *const)(v3 + 64));
    if ( std::operator!=<MatchTeam>(0LL, (const std::shared_ptr<MatchTeam> *)(v3 + 64)) )
    {
      v9 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v9);
      v11 = (unsigned __int64)(v10->_vptr_DescribalBase + 2);
      if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v10->_vptr_DescribalBase + 2);
      v12 = *(void (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v11;
      v13 = proto::RemoveMatchUnitReq::unit_id(req);
      v12(v10, v13);
    }
    val = proto::RemoveMatchUnitReq::unit_id(req);
    std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(&this->total_match_unit_map_, &val);
    if ( proto::RemoveMatchUnitReq::op_type(req) == MATCH_UNIT_REMOVE_OP_PLAYER_CANCEL )
    {
      v14 = proto::RemoveMatchUnitReq::unit_id(req);
      MatchPoolBase::notifyMatchUnitRemoved(this, v14, MATCH_PLAYER_CANCEL);
    }
    else if ( proto::RemoveMatchUnitReq::op_type(req) == MATCH_UNIT_REMOVE_OP_INTERRUPTED )
    {
      v15 = proto::RemoveMatchUnitReq::unit_id(req);
      MatchPoolBase::notifyMatchUnitRemoved(this, v15, MATCH_INTERRUPTED);
    }
    else if ( proto::RemoveMatchUnitReq::op_type(req) == MATCH_UNIT_REMOVE_OP_MP_UNAVAILABLE )
    {
      v16 = proto::RemoveMatchUnitReq::unit_id(req);
      MatchPoolBase::notifyMatchUnitRemoved(this, v16, MATCH_MP_UNAVAILABLE);
    }
    proto::RemoveMatchUnitRsp::set_retcode(rsp_0, 0);
    matched = proto::RemoveMatchUnitReq::match_type(req);
    proto::RemoveMatchUnitRsp::set_match_type(rsp_0, matched);
    v18 = proto::RemoveMatchUnitReq::unit_id(req);
    proto::RemoveMatchUnitRsp::set_unit_id(rsp_0, v18);
    v19 = proto::RemoveMatchUnitReq::op_type(req);
    proto::RemoveMatchUnitRsp::set_op_type(rsp_0, v19);
    v8 = 0;
    std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v3 + 64));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v3 + 32));
  result = v8;
  if ( v24 == (char *)v3 )
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

// Line 837: range 000000000D7A8860-000000000D7A91BB
int32_t __cdecl MatchPoolBase::confirmGuestUnit(
        MatchPoolBase *const this,
        const proto::ConfirmGuestUnitReq *req,
        proto::ConfirmGuestUnitRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  MatchUnitBase *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rdx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t UnitId; // edx
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 v20; // rdx
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  unsigned __int64 v24; // rdx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  uint32_t v26; // ecx
  proto::MatchType matched; // edx
  google::protobuf::uint32 v28; // edx
  bool is_agreed; // dl
  int32_t result; // eax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // [rsp+10h] [rbp-140h]
  unsigned int player_level; // [rsp+34h] [rbp-11Ch]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false> v34; // [rsp+38h] [rbp-118h] BYREF
  const std::unordered_map<unsigned int,proto::MatchPlayer> *player_map; // [rsp+40h] [rbp-110h]
  const proto::MatchPlayer *player; // [rsp+48h] [rbp-108h]
  std::shared_ptr<MatchUnitBase> p_match_unit_ptr; // [rsp+50h] [rbp-100h] BYREF
  common::milog::MiLogStream v38; // [rsp+60h] [rbp-F0h] BYREF
  char v39[208]; // [rsp+80h] [rbp-D0h] BYREF
  SlotContext v40; // 0:rdx.12

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 unit_id:838 64 16 18 match_unit_ptr:839 96 16 18 match_team_ptr:847 128 16 23 host_match_unit_ptr:880";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::confirmGuestUnit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::ConfirmGuestUnitReq::unit_id(req);
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "confirmGuestUnit",
      842);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v38,
           (const char (*)[37])"[Match] unit_id not exist, unit_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v38);
    v7 = -1;
  }
  else
  {
    std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    MatchUnitBase::getMatchTeam((const MatchUnitBase *const)(v3 + 96));
    if ( std::operator==<MatchTeam>(0LL, (const std::shared_ptr<MatchTeam> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "confirmGuestUnit",
        850);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v38,
             (const char (*)[42])"[Match] match unit not in team, unit_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
      v7 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( MatchUnitBase::getMatchIdentity(v9) == MATCH_IDENTITY_GUEST )
      {
        v11 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( MatchUnitBase::getPossiblePlayerCount(v11) == 1 )
        {
          v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          player_map = MatchUnitBase::getPlayerMap(v13);
          if ( std::unordered_map<unsigned int,proto::MatchPlayer>::empty(player_map) )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/service/match/match_pool_base.cpp",
              "confirmGuestUnit",
              871);
            v14 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v38,
                    (const char (*)[39])"[MATCH] player map is empty, unit_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v38);
            v7 = -1;
          }
          else
          {
            v34._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(player_map)._M_cur;
            player = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>::operator->(&v34)->second;
            player_level = proto::MatchPlayer::player_level(player);
            if ( proto::ConfirmGuestUnitReq::is_agreed(req) )
            {
              std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              MatchTeam::getHostMatchUnit((const MatchTeam *const)(v3 + 128));
              if ( std::operator!=<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v3 + 128)) )
              {
                v15 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v15);
                v16 = (unsigned __int64)(v15->_vptr_DescribalBase + 2);
                if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v15->_vptr_DescribalBase + 2);
                (*(void (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v16)(
                  v15,
                  *(unsigned int *)(v3 + 48));
                std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
                  &this->total_match_unit_map_,
                  (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v3 + 48));
                MatchPoolBase::notifyMatchUnitRemoved(this, *(_DWORD *)(v3 + 48), MATCH_PLAYER_CONFIRM);
                v31 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                v40.join_time = common::tools::TimeUtils::getNow();
                v40.player_level = player_level;
                MatchUnitBase::addSlot(v31, *(_DWORD *)(v3 + 48), v40);
                v17 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                UnitId = MatchUnitBase::getUnitId(v17);
                MatchPoolBase::notifyGuestUnitAgreedResult(
                  this,
                  *(_DWORD *)(v3 + 48),
                  UnitId,
                  GuestUnitAgreedResultNotify_Reason_SUCC);
              }
              else
              {
                MatchPoolBase::notifyGuestUnitAgreedResult(
                  this,
                  *(_DWORD *)(v3 + 48),
                  0,
                  GuestUnitAgreedResultNotify_Reason_HOST_UNIT_QUIT);
                v19 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v19);
                v20 = (unsigned __int64)(v19->_vptr_DescribalBase + 2);
                if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v19->_vptr_DescribalBase + 2);
                (*(void (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v20)(
                  v19,
                  *(unsigned int *)(v3 + 48));
                std::shared_ptr<MatchUnitBase>::shared_ptr(
                  &p_match_unit_ptr,
                  (const std::shared_ptr<MatchUnitBase> *)(v3 + 64));
                MatchPoolBase::rematch(this, &p_match_unit_ptr);
                std::shared_ptr<MatchUnitBase>::~shared_ptr(&p_match_unit_ptr);
                MatchPoolBase::notifyMatchStart(this, *(_DWORD *)(v3 + 48));
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/service/match/match_pool_base.cpp",
                  "confirmGuestUnit",
                  899);
                v21 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v38,
                        (const char (*)[34])"[MATCH] host unit quit, rematch: ");
                v22 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
                common::milog::MiLogStream::operator<<<MatchUnitBase,(MatchUnitBase*)0>(v21, v22);
                common::milog::MiLogStream::~MiLogStream(&v38);
              }
              std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v3 + 128));
            }
            else
            {
              v23 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v23);
              v24 = (unsigned __int64)(v23->_vptr_DescribalBase + 2);
              if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
                __asan_report_load8(v23->_vptr_DescribalBase + 2);
              (*(void (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD))v24)(
                v23,
                *(unsigned int *)(v3 + 48));
              std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::erase(
                &this->total_match_unit_map_,
                (const std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::key_type *)(v3 + 48));
              v25 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              v26 = MatchUnitBase::getUnitId(v25);
              MatchPoolBase::notifyMatchUnitRemoved(this, v26, MATCH_PLAYER_CONFIRM);
            }
            matched = proto::ConfirmGuestUnitReq::match_type(req);
            proto::ConfirmGuestUnitRsp::set_match_type(rsp_0, matched);
            v28 = proto::ConfirmGuestUnitReq::unit_id(req);
            proto::ConfirmGuestUnitRsp::set_unit_id(rsp_0, v28);
            is_agreed = proto::ConfirmGuestUnitReq::is_agreed(req);
            proto::ConfirmGuestUnitRsp::set_is_agreed(rsp_0, is_agreed);
            proto::ConfirmGuestUnitRsp::set_retcode(rsp_0, 0);
            v7 = 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v38,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/service/match/match_pool_base.cpp",
            "confirmGuestUnit",
            864);
          v12 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v38,
                  (const char (*)[62])"[MATCH] match unit has more than 1 possible player, unit_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v38);
          v7 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/match_pool_base.cpp",
          "confirmGuestUnit",
          857);
        v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v38,
                (const char (*)[43])"[Match] match unit is not guest, unit_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v38);
        v7 = -1;
      }
    }
    std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v3 + 96));
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v3 + 64));
  result = v7;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 919: range 000000000D7A91BC-000000000D7A95C5
int32_t __cdecl MatchPoolBase::addMatchPlayer(MatchPoolBase *const this, const proto::MatchPlayerJoinNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  MatchUnitBase *v9; // r14
  const proto::MatchPlayer *matched; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const proto::MatchPlayer *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 unit_id:920 64 16 18 match_unit_ptr:921";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::addMatchPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::MatchPlayerJoinNotify::unit_id(notify);
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "addMatchPlayer",
      924);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v19,
           (const char (*)[37])"[Match] unit_id not exist, unit_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( MatchUnitBase::getMatchIdentity(v7) == MATCH_IDENTITY_HOST )
    {
      v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      matched = proto::MatchPlayerJoinNotify::match_player(notify);
      if ( MatchUnitBase::addMatchPlayer(v9, matched) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/match_pool_base.cpp",
          "addMatchPlayer",
          937);
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v19,
                (const char (*)[41])"[MATCH] addMatchPlayer failed, unit_id: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" ,player_uid: ");
        v14 = proto::MatchPlayerJoinNotify::match_player(notify);
        val = proto::MatchPlayer::uid(v14);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v6 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/match_pool_base.cpp",
          "addMatchPlayer",
          941);
        v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v19,
                (const char (*)[27])"[MATCH] add match player: ");
        v16 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        common::milog::MiLogStream::operator<<<MatchUnitBase,(MatchUnitBase*)0>(v15, v16);
        common::milog::MiLogStream::~MiLogStream(&v19);
        v6 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "addMatchPlayer",
        931);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v19,
             (const char (*)[42])"[Match] match unit is not host, unit_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      v6 = -1;
    }
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64));
  result = v6;
  if ( v20 == (char *)v2 )
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

// Line 947: range 000000000D7A95C6-000000000D7A99C6
int32_t __cdecl MatchPoolBase::removeMatchPlayer(MatchPoolBase *const this, const proto::MatchPlayerQuitNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  MatchUnitBase *v9; // r14
  uint32_t v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-B4h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 unit_id:948 64 16 18 match_unit_ptr:949";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::removeMatchPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::MatchPlayerQuitNotify::unit_id(notify);
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "removeMatchPlayer",
      952);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v18,
           (const char (*)[37])"[Match] unit_id not exist, unit_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( MatchUnitBase::getMatchIdentity(v7) == MATCH_IDENTITY_HOST )
    {
      v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v10 = proto::MatchPlayerQuitNotify::player_uid(notify);
      if ( MatchUnitBase::removeMatchPlayer(v9, v10) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/service/match/match_pool_base.cpp",
          "removeMatchPlayer",
          965);
        v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v18,
                (const char (*)[44])"[MATCH] removeMatchPlayer failed, unit_id: ");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" ,player_uid: ");
        val = proto::MatchPlayerQuitNotify::player_uid(notify);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v6 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/match_pool_base.cpp",
          "removeMatchPlayer",
          969);
        v14 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v18,
                (const char (*)[30])"[MATCH] remove match player: ");
        v15 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        common::milog::MiLogStream::operator<<<MatchUnitBase,(MatchUnitBase*)0>(v14, v15);
        common::milog::MiLogStream::~MiLogStream(&v18);
        v6 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "removeMatchPlayer",
        959);
      v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v18,
             (const char (*)[42])"[MATCH] match unit is not host, unit_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      v6 = -1;
    }
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64));
  result = v6;
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

// Line 975: range 000000000D7A99C8-000000000D7A9C99
int32_t __cdecl MatchPoolBase::syncMatchUnit(
        MatchPoolBase *const this,
        const proto::SyncMatchUnitReq *req,
        proto::SyncMatchUnitRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t PlayerCount; // r14d
  MatchUnitBase *v9; // r14
  uint32_t Now; // eax
  int32_t result; // eax
  const proto::MatchUnit *proto_match_unit; // [rsp+28h] [rbp-B8h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 11 unit_id:977 64 16 18 match_unit_ptr:978";
  *(_QWORD *)(v3 + 16) = MatchPoolBase::syncMatchUnit;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  proto_match_unit = proto::SyncMatchUnitReq::match_unit(req);
  *(_DWORD *)(v3 + 48) = proto::MatchUnit::unit_id(proto_match_unit);
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 48));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/match/match_pool_base.cpp",
      "syncMatchUnit",
      982);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v14,
           (const char (*)[51])"[Match] syncMatchUnit unit_id not exist, unit_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    PlayerCount = MatchUnitBase::getPlayerCount(v7);
    if ( PlayerCount != proto::MatchUnit::match_player_list_size(proto_match_unit) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/match_pool_base.cpp",
        "syncMatchUnit",
        988);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        &v14,
        (const char (*)[31])"[MATCH] player count not equal");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    v9 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Now = common::tools::TimeUtils::getNow();
    MatchUnitBase::setLastSyncTime(v9, Now);
    proto::SyncMatchUnitRsp::set_retcode(rsp_0, 0);
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v3 + 64));
  result = 0;
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

// Line 998: range 000000000D7A9C9A-000000000D7A9EA8
int32_t __cdecl MatchPoolBase::updateMatchPlayer(
        MatchPoolBase *const this,
        const proto::MatchPlayerUpdateNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  MatchUnitBase *v7; // r14
  const proto::MatchPlayer *matched; // rax
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 11 unit_id:999 64 16 19 match_unit_ptr:1000";
  *(_QWORD *)(v2 + 16) = MatchPoolBase::updateMatchPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = proto::MatchPlayerUpdateNotify::unit_id(notify);
  MatchPoolBase::findMatchUnit((MatchPoolBase *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<MatchUnitBase>(0LL, (const std::shared_ptr<MatchUnitBase> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/match_pool_base.cpp",
      "updateMatchPlayer",
      1003);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[Match] unit_id not exist, unit_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    matched = proto::MatchPlayerUpdateNotify::match_player(notify);
    MatchUnitBase::updateMatchPlayer(v7, matched);
    v6 = 0;
  }
  std::shared_ptr<MatchUnitBase>::~shared_ptr((std::shared_ptr<MatchUnitBase> *const)(v2 + 64));
  result = v6;
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
  return result;
};
