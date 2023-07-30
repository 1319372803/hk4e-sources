// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/match/dungeon_match_pool.cpp

// Line 20: range 000000000DE9033E-000000000DE903E2
void __cdecl DungeonMatchPool::processMatchUnitWithTeam(DungeonMatchPool *const this)
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

// Line 28: range 000000000DE903E4-000000000DE90781
int32_t __cdecl DungeonMatchPool::createMatchTeam(DungeonMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "4 32 4 10 unit_id:36 48 4 13 dungeon_id:37 64 16 25 dungeon_match_unit_ptr:29 96 16 17 match_team_ptr:38";
  *(_QWORD *)(v2 + 16) = DungeonMatchPool::createMatchTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( std::operator==<DungeonMatchUnit>(0LL, (const std::shared_ptr<DungeonMatchUnit> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/dungeon_match_pool.cpp",
      "createMatchTeam",
      32);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v19,
      (const char (*)[39])"[MATCH] dungeon_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v19);
    v5 = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 32) = MatchUnitBase::getUnitId(v6);
    v7 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    *(_DWORD *)(v2 + 48) = DungeonMatchUnit::getDungeonId(v7);
    common::tools::perf::make_shared<MatchTeam>();
    v8 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v8);
    v10 = (unsigned __int64)(v9->_vptr_DescribalBase + 1);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v9->_vptr_DescribalBase + 1);
    v11 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<MatchUnitBase> *))v10;
    std::shared_ptr<MatchUnitBase>::shared_ptr<DungeonMatchUnit,void>(
      &v18,
      (const std::shared_ptr<DungeonMatchUnit> *)(v2 + 64));
    v12 = v11(v9, &v18) != 0;
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v18);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/dungeon_match_pool.cpp",
        "createMatchTeam",
        41);
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
  std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v2 + 64));
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

// Line 51: range 000000000DE909E6-000000000DE90A6D
uint32_t __cdecl DungeonMatchPool::computeOldPlayerCount(
        const MatchTeamPtr *match_team_ptr,
        uint32_t player_level_boundary)
{
  MatchTeam *v3; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *MatchUnitMap; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false>::__node_type *M_cur; // r12
  MatchTeam *v6; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *v7; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator v8; // rax

  if ( std::operator==<MatchTeam>(match_team_ptr, 0LL) )
    return 0;
  v3 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
  MatchUnitMap = MatchTeam::getMatchUnitMap(v3);
  M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(MatchUnitMap)._M_cur;
  v6 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_ptr);
  v7 = MatchTeam::getMatchUnitMap(v6);
  v8._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(v7)._M_cur;
  return std::accumulate<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>,unsigned int,DungeonMatchPool::computeOldPlayerCount(std::shared_ptr const&<MatchTeam>,unsigned int)::{lambda(unsigned int,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#1}>(
           v8,
           (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>)M_cur,
           0,
           (DungeonMatchPool::computeOldPlayerCount::<lambda(uint32_t, const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>)player_level_boundary);
};

// Line 54: range 000000000DE9087A-000000000DE909E5
uint32_t __cdecl DungeonMatchPool::computeOldPlayerCount(std::shared_ptr<MatchTeam> const&,unsigned int)::{lambda(unsigned int,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#1}::operator()(
        const DungeonMatchPool::computeOldPlayerCount::<lambda(uint32_t, const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)> *const __closure,
        uint32_t cur,
        const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *p)
{
  uint32_t player_level_boundary; // r12d
  MatchUnitBase *v5; // rax
  std::unordered_map<unsigned int,proto::MatchPlayer> *PlayerMap; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false>::__node_type *M_cur; // rbx
  MatchUnitBase *v8; // rax
  std::unordered_map<unsigned int,proto::MatchPlayer> *v9; // rax
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator v10; // rax
  int v11; // r12d
  uint32_t v12; // r13d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const std::unordered_map<unsigned int,SlotContext> *SlotUidMap; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false>::__node_type *v15; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  const std::unordered_map<unsigned int,SlotContext> *v17; // rax
  std::unordered_map<unsigned int,SlotContext>::const_iterator v18; // rax
  std::shared_ptr<MatchUnitBase> *unit_ptr; // [rsp+28h] [rbp-28h]

  unit_ptr = &p->second;
  if ( std::operator==<MatchUnitBase>(&p->second, 0LL) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  player_level_boundary = __closure->__player_level_boundary;
  v5 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  PlayerMap = MatchUnitBase::getPlayerMap(v5);
  M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(PlayerMap)._M_cur;
  v8 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  v9 = MatchUnitBase::getPlayerMap(v8);
  v10._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(v9)._M_cur;
  v11 = std::count_if<std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>,DungeonMatchPool::computeOldPlayerCount(std::shared_ptr<MatchTeam> const&,unsigned int)::{lambda(unsigned int,std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)#1}::operator() const(unsigned int,std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)::{lambda(std::pair<unsigned int const,proto::MatchPlayer> const&)#1}>(
          v10,
          (std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>)M_cur,
          (DungeonMatchPool::computeOldPlayerCount::<lambda(uint32_t, const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, proto::MatchPlayer>&)>)player_level_boundary)
      + cur;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  v12 = __closure->__player_level_boundary;
  v13 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  SlotUidMap = MatchUnitBase::getSlotUidMap(v13);
  v15 = std::unordered_map<unsigned int,SlotContext>::end(SlotUidMap)._M_cur;
  v16 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  v17 = MatchUnitBase::getSlotUidMap(v16);
  v18._M_cur = std::unordered_map<unsigned int,SlotContext>::begin(v17)._M_cur;
  return v11
       + std::count_if<std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false>,DungeonMatchPool::computeOldPlayerCount(std::shared_ptr<MatchTeam> const&,unsigned int)::{lambda(unsigned int,std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)#1}::operator() const(unsigned int,std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)::{lambda(std::pair<unsigned int const,SlotContext> const&)#2}>(
           v18,
           (std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false>)v15,
           (DungeonMatchPool::computeOldPlayerCount::<lambda(uint32_t, const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, SlotContext>&)>)v12);
};

// Line 60: range 000000000DE90782-000000000DE907E8
bool __cdecl DungeonMatchPool::computeOldPlayerCount(std::shared_ptr<MatchTeam> const&,unsigned int)::{lambda(unsigned int,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#1}::operator() const(unsigned int,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)::{lambda(std::pair const&<unsigned int const,proto::MatchPlayer>)#1}::operator()(
        const DungeonMatchPool::computeOldPlayerCount::<lambda(uint32_t, const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, proto::MatchPlayer>&)> *const __closure,
        const std::pair<unsigned int const,proto::MatchPlayer> *p)
{
  google::protobuf::uint32 v2; // ecx

  v2 = proto::MatchPlayer::player_level(&p->second);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 >= __closure->__player_level_boundary;
};

// Line 64: range 000000000DE907EA-000000000DE90878
bool __cdecl DungeonMatchPool::computeOldPlayerCount(std::shared_ptr<MatchTeam> const&,unsigned int)::{lambda(unsigned int,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#1}::operator() const(unsigned int,std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)::{lambda(std::pair const&<unsigned int const,SlotContext>)#2}::operator()(
        const DungeonMatchPool::computeOldPlayerCount::<lambda(uint32_t, const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, SlotContext>&)> *const __closure,
        const std::pair<unsigned int const,SlotContext> *p)
{
  uint32_t player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&p->second.player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&p->second.player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&p->second.player_level);
  }
  player_level = p->second.player_level;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return player_level >= __closure->__player_level_boundary;
};

// Line 146: range 000000000DE9153E-000000000DE91FCB
MatchTeamPtr __cdecl DungeonMatchPool::computeBestMatchTeam(
        const DungeonMatchPool *const this,
        const MatchUnitPtr *match_unit_ptr,
        const std::vector<std::shared_ptr<MatchTeam>> *match_team_vec)
{
  const std::vector<std::shared_ptr<MatchTeam>> *v3; // rcx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  MatchTeamPtr result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isMatchRuleOptimizeClosed; // r14
  MatchExcelConfigMgr *p_match_config_mgr; // r14
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  const std::shared_ptr<MatchTeam> *M_current; // r14
  std::vector<std::shared_ptr<MatchTeam>>::const_iterator v26; // rax
  const std::shared_ptr<MatchTeam> *v27; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  uint32_t PossiblePlayerCount; // eax
  bool v30; // al
  DungeonMatchPool::computeBestMatchTeam::<lambda(const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)> v31; // r15d
  MatchTeam *v32; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *MatchUnitMap; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false>::__node_type *M_cur; // r14
  MatchTeam *v35; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>> *v36; // rax
  std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::iterator v37; // rax
  common::milog::MiLogStream *v38; // r14
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  const std::vector<std::shared_ptr<MatchTeam>> *match_team_veca; // [rsp+10h] [rbp-1B0h]
  bool is_old_player; // [rsp+36h] [rbp-18Ah]
  unsigned int val; // [rsp+38h] [rbp-188h] BYREF
  unsigned int max_player_count; // [rsp+3Ch] [rbp-184h]
  __gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > __rhs; // [rsp+40h] [rbp-180h] BYREF
  const MatchNewRuleConfig *match_new_rule_config_ptr; // [rsp+48h] [rbp-178h]
  common::milog::MiLogStream v47; // [rsp+50h] [rbp-170h] BYREF
  char v48[336]; // [rsp+70h] [rbp-150h] BYREF

  match_team_veca = v3;
  v4 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 25 player_level_boundary:182 64 4 17 time_boundary:184 80 4 20 cur_player_level:188 96 8 "
                        "7 now:186 128 8 12 min_iter:260 160 16 26 dungeon_match_unit_ptr:156 192 16 17 best_team_ptr:263"
                        " 224 24 19 team_comparator:196";
  *(_QWORD *)(v4 + 16) = DungeonMatchPool::computeBestMatchTeam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -218103808;
  v6[536862728] = -202116109;
  if ( std::vector<std::shared_ptr<MatchTeam>>::empty(match_team_veca) )
  {
    std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
  }
  else if ( std::operator==<MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)match_team_vec, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/match/dungeon_match_pool.cpp",
      "computeBestMatchTeam",
      153);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v47, (const char (*)[22])"match unit is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v47);
    std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
  }
  else
  {
    std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v4 + 160));
    if ( std::operator==<DungeonMatchUnit>((const std::shared_ptr<DungeonMatchUnit> *)(v4 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/match/dungeon_match_pool.cpp",
        "computeBestMatchTeam",
        159);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        &v47,
        (const char (*)[37])"match unit is not dungeon match unit");
      common::milog::MiLogStream::~MiLogStream(&v47);
      std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
    }
    else
    {
      Config::getConfig();
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
      isMatchRuleOptimizeClosed = FeatureSwitchMgr::isMatchRuleOptimizeClosed(&v8->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
      if ( isMatchRuleOptimizeClosed )
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/service/match/dungeon_match_pool.cpp",
          "computeBestMatchTeam",
          166);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          &v47,
          (const char (*)[41])"[MATCH_OPT] match rule optimize disabled");
        common::milog::MiLogStream::~MiLogStream(&v47);
        if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_store16(this, match_unit_ptr);
        MatchPoolBase::computeBestMatchTeam(this, match_unit_ptr, match_team_vec);
      }
      else
      {
        Config::getConfig();
        p_match_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192))->design_config_.txt_config_mgr.match_config_mgr;
        v11 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        DungeonId = DungeonMatchUnit::getDungeonId(v11);
        match_new_rule_config_ptr = MatchExcelConfigMgr::findMatchNewRuleConfig(p_match_config_mgr, DungeonId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 192));
        if ( !match_new_rule_config_ptr )
          goto LABEL_47;
        if ( *(_BYTE *)(((unsigned __int64)&match_new_rule_config_ptr->is_enable >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)match_new_rule_config_ptr + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&match_new_rule_config_ptr->is_enable >> 3)
                                                                                + 0x7FFF8000) )
        {
          __asan_report_load1(&match_new_rule_config_ptr->is_enable);
        }
        if ( match_new_rule_config_ptr->is_enable )
        {
          v13 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          max_player_count = MatchUnitBase::getMaxPlayers(v13);
          if ( max_player_count > 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)match_new_rule_config_ptr >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)match_new_rule_config_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)match_new_rule_config_ptr >> 3)
                                                                                          + 0x7FFF8000) )
            {
              __asan_report_load4(match_new_rule_config_ptr);
            }
            *(_DWORD *)(v4 + 48) = match_new_rule_config_ptr->player_level_boundary;
            if ( *(_BYTE *)(((unsigned __int64)&match_new_rule_config_ptr->time_boundary >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)match_new_rule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_new_rule_config_ptr->time_boundary >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&match_new_rule_config_ptr->time_boundary);
            }
            *(_DWORD *)(v4 + 64) = match_new_rule_config_ptr->time_boundary;
            *(_QWORD *)(v4 + 96) = common::tools::TimeUtils::getNow();
            v14 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            *(_DWORD *)(v4 + 80) = MatchUnitBase::getHostPlayerLevel(v14);
            is_old_player = *(_DWORD *)(v4 + 80) >= *(_DWORD *)(v4 + 48);
            common::milog::MiLogStream::create(
              &v47,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/service/match/dungeon_match_pool.cpp",
              "computeBestMatchTeam",
              193);
            v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v47,
                    (const char (*)[18])"[MATCH_OPT] now: ");
            v16 = common::milog::MiLogStream::operator<<<long,(long *)0>(v15, (const __int64 *)(v4 + 96));
            v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v16,
                    (const char (*)[18])", time_boundary: ");
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v17,
                    (const unsigned int *)(v4 + 64));
            v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    v18,
                    (const char (*)[26])", player_level_boundary: ");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v4 + 48));
            v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])off_1BB4A9A0);
            v22 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)match_team_vec);
            val = MatchUnitBase::getUnitId(v22);
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v23,
                    (const char (*)[17])", player_level: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v47);
            *(_QWORD *)(v4 + 224) = *(_QWORD *)(v4 + 96);
            *(_BYTE *)(v4 + 232) = is_old_player;
            *(_DWORD *)(v4 + 236) = max_player_count;
            *(_DWORD *)(v4 + 240) = *(_DWORD *)(v4 + 48);
            *(_DWORD *)(v4 + 244) = *(_DWORD *)(v4 + 64);
            M_current = std::vector<std::shared_ptr<MatchTeam>>::end(match_team_veca)._M_current;
            v26._M_current = std::vector<std::shared_ptr<MatchTeam>>::begin(match_team_veca)._M_current;
            *(__gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *)(v4 + 128) = std::min_element<__gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>,DungeonMatchPool::computeBestMatchTeam(std::shared_ptr const&<MatchUnitBase>,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}>(v26, (__gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> >)M_current, *(DungeonMatchPool::computeBestMatchTeam::<lambda(const MatchTeamPtr&, const MatchTeamPtr&)> *)(v4 + 224));
            __rhs._M_current = std::vector<std::shared_ptr<MatchTeam>>::end(match_team_veca)._M_current;
            if ( __gnu_cxx::operator==<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>(
                   (const __gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *)(v4 + 128),
                   &__rhs) )
            {
              std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
            }
            else
            {
              v27 = __gnu_cxx::__normal_iterator<std::shared_ptr<MatchTeam> const*,std::vector<std::shared_ptr<MatchTeam>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<MatchTeam>*,std::vector<std::shared_ptr<MatchTeam>> > *const)(v4 + 128));
              std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)(v4 + 192), v27);
              if ( std::operator==<MatchTeam>((const std::shared_ptr<MatchTeam> *)(v4 + 192), 0LL) )
              {
                std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
              }
              else
              {
                v30 = 0;
                if ( !is_old_player )
                {
                  v28 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                  PossiblePlayerCount = MatchTeam::getPossiblePlayerCount(v28);
                  if ( PossiblePlayerCount == max_player_count - 1 )
                    v30 = 1;
                }
                if ( v30
                  && (v31.__player_level_boundary = *(_DWORD *)(v4 + 48),
                      v32 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192)),
                      MatchUnitMap = MatchTeam::getMatchUnitMap(v32),
                      M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::end(MatchUnitMap)._M_cur,
                      v35 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192)),
                      v36 = MatchTeam::getMatchUnitMap(v35),
                      v37._M_cur = std::unordered_map<unsigned int,std::shared_ptr<MatchUnitBase>>::begin(v36)._M_cur,
                      std::all_of<std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>>,false,false>,DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#2}>(
                        v37,
                        (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> >,false,false>)M_cur,
                        v31)) )
                {
                  common::milog::MiLogStream::create(
                    &v47,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/service/match/dungeon_match_pool.cpp",
                    "computeBestMatchTeam",
                    290);
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v47,
                    (const char (*)[28])"[MATCH_OPT] create new team");
                  common::milog::MiLogStream::~MiLogStream(&v47);
                  std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v47,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/service/match/dungeon_match_pool.cpp",
                    "computeBestMatchTeam",
                    294);
                  v38 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          &v47,
                          (const char (*)[26])"[MATCH_OPT] select team: ");
                  v39 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                  val = MatchTeam::getHostMatchUnitId(v39);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &val);
                  common::milog::MiLogStream::~MiLogStream(&v47);
                  std::shared_ptr<MatchTeam>::shared_ptr(
                    (std::shared_ptr<MatchTeam> *const)this,
                    (std::shared_ptr<MatchTeam> *)(v4 + 192));
                }
              }
              std::shared_ptr<MatchTeam>::~shared_ptr((std::shared_ptr<MatchTeam> *const)(v4 + 192));
            }
          }
          else
          {
            std::shared_ptr<MatchTeam>::shared_ptr((std::shared_ptr<MatchTeam> *const)this, 0LL);
          }
        }
        else
        {
LABEL_47:
          if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_store16(this, match_unit_ptr);
          MatchPoolBase::computeBestMatchTeam(this, match_unit_ptr, match_team_vec);
        }
      }
    }
    std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v4 + 160));
  }
  if ( v48 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<MatchTeam,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 196: range 000000000DE90CFE-000000000DE912D3
bool __cdecl DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)const::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}::operator()(
        const DungeonMatchPool::computeBestMatchTeam::<lambda(const MatchTeamPtr&, const MatchTeamPtr&)> *const __closure,
        const MatchTeamPtr *lhs,
        const MatchTeamPtr *rhs)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __int64 Time; // rcx
  __int64 now; // r14
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 v12; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  __int64 v17; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned int lhs_player_count; // [rsp+30h] [rbp-F0h]
  unsigned int rhs_player_count; // [rsp+34h] [rbp-ECh]
  unsigned int lhs_old_player_count; // [rsp+38h] [rbp-E8h]
  unsigned int rhs_old_player_count; // [rsp+3Ch] [rbp-E4h]
  __int64 lhs_wait_time; // [rsp+40h] [rbp-E0h]
  __int64 rhs_wait_time; // [rsp+48h] [rbp-D8h]
  char v27[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 12 31 compare_by_old_player_count:213 80 40 17 final_compare:227";
  *(_QWORD *)(v3 + 16) = DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)const::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = 0x4000000;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( std::operator==<MatchTeam>(lhs, 0LL) || std::operator==<MatchTeam>(rhs, 0LL) )
  {
    result = 0;
    goto LABEL_50;
  }
  v8 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)lhs);
  Time = MatchTeam::getCreateTime(v8);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( Time > __closure->__now )
  {
    v12 = 0LL;
  }
  else
  {
    now = __closure->__now;
    v11 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)lhs);
    v12 = now - MatchTeam::getCreateTime(v11);
  }
  lhs_wait_time = v12;
  v13 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)rhs);
  v14 = MatchTeam::getCreateTime(v13);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  if ( v14 > __closure->__now )
  {
    v17 = 0LL;
  }
  else
  {
    v15 = __closure->__now;
    v16 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)rhs);
    v17 = v15 - MatchTeam::getCreateTime(v16);
  }
  rhs_wait_time = v17;
  v18 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)lhs);
  lhs_player_count = MatchTeam::getPossiblePlayerCount(v18);
  v19 = std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)rhs);
  rhs_player_count = MatchTeam::getPossiblePlayerCount(v19);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__player_level_boundary >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__player_level_boundary >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__player_level_boundary);
  }
  lhs_old_player_count = DungeonMatchPool::computeOldPlayerCount(lhs, __closure->__player_level_boundary);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__player_level_boundary >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__player_level_boundary >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__player_level_boundary);
  }
  rhs_old_player_count = DungeonMatchPool::computeOldPlayerCount(rhs, __closure->__player_level_boundary);
  *(_DWORD *)(v3 + 48) = lhs_old_player_count;
  *(_DWORD *)(v3 + 52) = rhs_old_player_count;
  if ( *(char *)(((unsigned __int64)&__closure->__is_old_player >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&__closure->__is_old_player);
  *(_BYTE *)(v3 + 56) = __closure->__is_old_player;
  *(_QWORD *)(v3 + 80) = *(_QWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 88) = *(_DWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 96) = lhs_wait_time;
  *(_QWORD *)(v3 + 104) = rhs_wait_time;
  *(_DWORD *)(v3 + 112) = lhs_player_count;
  *(_DWORD *)(v3 + 116) = rhs_player_count;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__time_boundary >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__time_boundary >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__time_boundary);
  }
  if ( lhs_wait_time >= __closure->__time_boundary && rhs_wait_time < __closure->__time_boundary )
  {
    result = 1;
    goto LABEL_50;
  }
  if ( rhs_wait_time >= __closure->__time_boundary && lhs_wait_time < __closure->__time_boundary )
  {
    result = 0;
    goto LABEL_50;
  }
  if ( lhs_wait_time >= __closure->__time_boundary && rhs_wait_time >= __closure->__time_boundary )
    goto LABEL_49;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__max_player_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__max_player_count >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__max_player_count);
  }
  if ( lhs_player_count < __closure->__max_player_count - 1 && rhs_player_count >= __closure->__max_player_count - 1 )
  {
    result = 1;
    goto LABEL_50;
  }
  if ( rhs_player_count < __closure->__max_player_count - 1 && lhs_player_count >= __closure->__max_player_count - 1 )
  {
    result = 0;
    goto LABEL_50;
  }
  if ( lhs_player_count < __closure->__max_player_count - 1 && rhs_player_count < __closure->__max_player_count - 1
    || lhs_old_player_count == rhs_old_player_count )
  {
LABEL_49:
    result = DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}::operator() const(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)::{lambda(void)#2}::operator()((const DungeonMatchPool::computeBestMatchTeam::<lambda(const MatchTeamPtr&, const MatchTeamPtr&)>::operator()::<lambda()>_0 *const)(v3 + 80));
  }
  else
  {
    result = DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}::operator() const(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)::{lambda(void)#1}::operator()((const DungeonMatchPool::computeBestMatchTeam::<lambda(const MatchTeamPtr&, const MatchTeamPtr&)>::operator()::<lambda()> *const)(v3 + 48));
  }
LABEL_50:
  if ( v27 == (char *)v3 )
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

// Line 213: range 000000000DE90A6E-000000000DE90BD2
bool __cdecl DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}::operator() const(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)::{lambda(void)#1}::operator()(
        const DungeonMatchPool::computeBestMatchTeam::<lambda(const MatchTeamPtr&, const MatchTeamPtr&)>::operator()::<lambda()> *const __closure)
{
  unsigned int lhs_old_player_count; // ecx
  unsigned int v3; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__is_old_player >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)__closure + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&__closure->__is_old_player >> 3)
                                                          + 0x7FFF8000) )
  {
    __asan_report_load1(&__closure->__is_old_player);
  }
  if ( __closure->__is_old_player )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure);
    }
    lhs_old_player_count = __closure->__lhs_old_player_count;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__rhs_old_player_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__rhs_old_player_count >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&__closure->__rhs_old_player_count);
    }
    return lhs_old_player_count < __closure->__rhs_old_player_count;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure);
    }
    v3 = __closure->__lhs_old_player_count;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__rhs_old_player_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)__closure + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__rhs_old_player_count >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&__closure->__rhs_old_player_count);
    }
    return v3 > __closure->__rhs_old_player_count;
  }
};

// Line 227: range 000000000DE90BD4-000000000DE90CFD
bool __cdecl DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}::operator() const(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)::{lambda(void)#2}::operator()(
        const DungeonMatchPool::computeBestMatchTeam::<lambda(const MatchTeamPtr&, const MatchTeamPtr&)>::operator()::<lambda()>_0 *const __closure)
{
  __int64 lhs_wait_time; // rcx
  unsigned int lhs_player_count; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__lhs_wait_time >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__lhs_wait_time);
  lhs_wait_time = __closure->__lhs_wait_time;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__rhs_wait_time >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__rhs_wait_time);
  if ( lhs_wait_time != __closure->__rhs_wait_time )
    return __closure->__lhs_wait_time > __closure->__rhs_wait_time;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__lhs_player_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__lhs_player_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__lhs_player_count);
  }
  lhs_player_count = __closure->__lhs_player_count;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__rhs_player_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)__closure + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&__closure->__rhs_player_count >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(&__closure->__rhs_player_count);
  }
  if ( lhs_player_count == __closure->__rhs_player_count )
    return DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)#1}::operator() const(std::shared_ptr<MatchTeam> const&,std::shared_ptr<MatchTeam> const&)::{lambda(void)#1}::operator()(&__closure->__compare_by_old_player_count);
  else
    return __closure->__lhs_player_count < __closure->__rhs_player_count;
};

// Line 276: range 000000000DE913CC-000000000DE9153D
bool __cdecl DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)const::{lambda(std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#2}::operator()(
        const DungeonMatchPool::computeBestMatchTeam::<lambda(const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)> *const __closure,
        const std::pair<unsigned int const,std::shared_ptr<MatchUnitBase> > *p)
{
  unsigned int player_level_boundary; // r12d
  MatchUnitBase *v4; // rax
  std::unordered_map<unsigned int,proto::MatchPlayer> *PlayerMap; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,proto::MatchPlayer>,false>::__node_type *M_cur; // rbx
  MatchUnitBase *v7; // rax
  std::unordered_map<unsigned int,proto::MatchPlayer> *v8; // rax
  std::unordered_map<unsigned int,proto::MatchPlayer>::iterator v9; // rax
  unsigned int v10; // r12d
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const std::unordered_map<unsigned int,SlotContext> *SlotUidMap; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SlotContext>,false>::__node_type *v13; // rbx
  std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  const std::unordered_map<unsigned int,SlotContext> *v15; // rax
  std::unordered_map<unsigned int,SlotContext>::const_iterator v16; // rax
  std::shared_ptr<MatchUnitBase> *unit_ptr; // [rsp+18h] [rbp-18h]

  unit_ptr = &p->second;
  if ( std::operator==<MatchUnitBase>(&p->second, 0LL) )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  player_level_boundary = __closure->__player_level_boundary;
  v4 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  PlayerMap = MatchUnitBase::getPlayerMap(v4);
  M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::end(PlayerMap)._M_cur;
  v7 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  v8 = MatchUnitBase::getPlayerMap(v7);
  v9._M_cur = std::unordered_map<unsigned int,proto::MatchPlayer>::begin(v8)._M_cur;
  if ( !std::all_of<std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>,DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)#2}::operator() const(std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)::{lambda(std::pair<unsigned int const,proto::MatchPlayer> const&)#1}>(
          v9,
          (std::__detail::_Node_iterator<std::pair<unsigned int const,proto::MatchPlayer>,false,false>)M_cur,
          (DungeonMatchPool::computeBestMatchTeam::<lambda(const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, proto::MatchPlayer>&)>)player_level_boundary) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  v10 = __closure->__player_level_boundary;
  v11 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  SlotUidMap = MatchUnitBase::getSlotUidMap(v11);
  v13 = std::unordered_map<unsigned int,SlotContext>::end(SlotUidMap)._M_cur;
  v14 = std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MatchUnitBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)unit_ptr);
  v15 = MatchUnitBase::getSlotUidMap(v14);
  v16._M_cur = std::unordered_map<unsigned int,SlotContext>::begin(v15)._M_cur;
  return std::all_of<std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false>,DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)#2}::operator() const(std::pair const&<unsigned int const,std::shared_ptr<MatchUnitBase>>)::{lambda(std::pair<unsigned int const,SlotContext> const&)#2}>(
           v16,
           (std::__detail::_Node_const_iterator<std::pair<unsigned int const,SlotContext>,false,false>)v13,
           (DungeonMatchPool::computeBestMatchTeam::<lambda(const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, SlotContext>&)>)v10);
};

// Line 282: range 000000000DE912D4-000000000DE9133A
bool __cdecl DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#2}::operator() const(std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)::{lambda(std::pair const&<unsigned int const,proto::MatchPlayer>)#1}::operator()(
        const DungeonMatchPool::computeBestMatchTeam::<lambda(const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, proto::MatchPlayer>&)> *const __closure,
        const std::pair<unsigned int const,proto::MatchPlayer> *p)
{
  google::protobuf::uint32 v2; // ecx

  v2 = proto::MatchPlayer::player_level(&p->second);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return v2 < __closure->__player_level_boundary;
};

// Line 285: range 000000000DE9133C-000000000DE913CA
bool __cdecl DungeonMatchPool::computeBestMatchTeam(std::shared_ptr<MatchUnitBase> const&,std::vector<std::shared_ptr<MatchTeam>> const&)::{lambda(std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)#2}::operator() const(std::pair<unsigned int const,std::shared_ptr<MatchUnitBase>> const&)::{lambda(std::pair const&<unsigned int const,SlotContext>)#2}::operator()(
        const DungeonMatchPool::computeBestMatchTeam::<lambda(const std::pair<unsigned int const, std::shared_ptr<MatchUnitBase> >&)>::operator()::<lambda(const std::pair<unsigned int const, SlotContext>&)> *const __closure,
        const std::pair<unsigned int const,SlotContext> *p)
{
  uint32_t player_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&p->second.player_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&p->second.player_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&p->second.player_level);
  }
  player_level = p->second.player_level;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return player_level < __closure->__player_level_boundary;
};

// Line 299: range 000000000DE91FCC-000000000DE92397
std::vector<std::shared_ptr<MatchTeam>> *__cdecl DungeonMatchPool::findCandidateMatchTeamVec(
        std::vector<std::shared_ptr<MatchTeam>> *retstr,
        DungeonMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
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
  *(_QWORD *)(v3 + 8) = "2 32 8 8 iter:309 64 16 26 dungeon_match_unit_ptr:300";
  *(_QWORD *)(v3 + 16) = DungeonMatchPool::findCandidateMatchTeamVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v3 + 64));
  if ( std::operator!=<DungeonMatchUnit>(0LL, (const std::shared_ptr<DungeonMatchUnit> *)(v3 + 64)) )
  {
    v6 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( MatchUnitBase::getMatchIdentity(v6)
      || (v7 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
          MatchUnitBase::getPlayerCount(v7) != 1) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/match/dungeon_match_pool.cpp",
        "findCandidateMatchTeamVec",
        306);
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
    v9 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    __x = DungeonMatchUnit::getDungeonId(v9);
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
  std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v3 + 64));
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

// Line 320: range 000000000DE92398-000000000DE92623
std::vector<std::shared_ptr<MatchTeam>> *__cdecl DungeonMatchPool::findCandidateMatchTeamVecPtr(
        DungeonMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::vector<std::shared_ptr<MatchTeam>> *p_second; // r14
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
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
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:330 64 16 26 dungeon_match_unit_ptr:321";
  *(_QWORD *)(v2 + 16) = DungeonMatchPool::findCandidateMatchTeamVecPtr;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 64));
  if ( !std::operator!=<DungeonMatchUnit>(0LL, (const std::shared_ptr<DungeonMatchUnit> *)(v2 + 64)) )
    goto LABEL_13;
  v5 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( MatchUnitBase::getMatchIdentity(v5)
    || (v6 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
        MatchUnitBase::getPlayerCount(v6) != 1) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/dungeon_match_pool.cpp",
      "findCandidateMatchTeamVecPtr",
      327);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v13,
      (const char (*)[30])"[MATCH] match unit is invalid");
    common::milog::MiLogStream::~MiLogStream(&v13);
    p_second = 0LL;
    goto LABEL_14;
  }
  v9 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  __x = DungeonMatchUnit::getDungeonId(v9);
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
  std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v2 + 64));
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

// Line 341: range 000000000DE92624-000000000DE92874
void __cdecl DungeonMatchPool::updatMatchCostTimeInfo(DungeonMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 26 dungeon_match_unit_ptr:342";
  *(_QWORD *)(v2 + 16) = DungeonMatchPool::updatMatchCostTimeInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<DungeonMatchUnit>(0LL, (const std::shared_ptr<DungeonMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/dungeon_match_pool.cpp",
      "updatMatchCostTimeInfo",
      345);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v13,
      (const char (*)[39])"[MATCH] dungeon_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    join_team_time = MatchUnitBase::getJoinTeamTime(v5);
    v6 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    match_begin_time = MatchUnitBase::getMatchBeginTime(v6);
    if ( join_team_time >= match_begin_time )
    {
      cost_time = join_team_time - match_begin_time;
      v7 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __k = DungeonMatchUnit::getDungeonId(v7);
      match_cost_time_info = std::unordered_map<unsigned int,MatchCostTimeInfo>::operator[](
                               &this->match_cost_time_info_map_,
                               &__k);
      MatchPoolBase::doUpdatMatchCostTimeInfo(this, match_cost_time_info, cost_time);
    }
  }
  std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v2 + 32));
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

// Line 360: range 000000000DE92876-000000000DE92A48
void __cdecl DungeonMatchPool::setEstimateMatchCostTime(DungeonMatchPool *const this, MatchUnitPtr *p_match_unit_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DungeonId; // edx
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
  *(_QWORD *)(v2 + 8) = "1 32 16 26 dungeon_match_unit_ptr:361";
  *(_QWORD *)(v2 + 16) = DungeonMatchPool::setEstimateMatchCostTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v2 + 32));
  if ( std::operator==<DungeonMatchUnit>(0LL, (const std::shared_ptr<DungeonMatchUnit> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/dungeon_match_pool.cpp",
      "setEstimateMatchCostTime",
      364);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v9,
      (const char (*)[39])"[MATCH] dungeon_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    DungeonId = DungeonMatchUnit::getDungeonId(v6);
    matched = DungeonMatchPool::calEstimateMatchCostTime(this, DungeonId);
    MatchUnitBase::setEstimateMatchCostTime(v5, matched);
  }
  std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v2 + 32));
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

// Line 372: range 000000000DE92A4A-000000000DE92C80
void __cdecl DungeonMatchPool::fillMatchStartNotify(
        DungeonMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        proto::MatchStartNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t DungeonId; // edx
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
  *(_QWORD *)(v3 + 8) = "1 32 16 26 dungeon_match_unit_ptr:373";
  *(_QWORD *)(v3 + 16) = DungeonMatchPool::fillMatchStartNotify;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v3 + 32));
  if ( std::operator==<DungeonMatchUnit>(0LL, (const std::shared_ptr<DungeonMatchUnit> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/dungeon_match_pool.cpp",
      "fillMatchStartNotify",
      376);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v10,
      (const char (*)[39])"[MATCH] dungeon_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr<DungeonMatchUnit,void>(
      &v9,
      (const std::shared_ptr<DungeonMatchUnit> *)(v3 + 32));
    MatchPoolBase::fillMatchStartNotify(this, &v9, notify);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v9);
    proto::MatchStartNotify::set_match_type(notify, MATCH_TYPE_DUNGEON);
    v6 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    DungeonId = DungeonMatchUnit::getDungeonId(v6);
    proto::MatchStartNotify::set_dungeon_id(notify, DungeonId);
  }
  std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v3 + 32));
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

// Line 386: range 000000000DE92C82-000000000DE92CBD
void __cdecl DungeonMatchPool::fillMatchUnitRemovedNotify(
        DungeonMatchPool *const this,
        proto::MatchReason reason,
        proto::MatchUnitRemovedNotify *notify)
{
  MatchPoolBase::fillMatchUnitRemovedNotify(this, reason, notify);
  proto::MatchUnitRemovedNotify::set_match_type(notify, MATCH_TYPE_DUNGEON);
};

// Line 392: range 000000000DE92CBE-000000000DE92CFD
void __cdecl DungeonMatchPool::fillGuestUnitAgreedResultNotify(
        DungeonMatchPool *const this,
        uint32_t host_unit_id,
        proto::GuestUnitAgreedResultNotify::Reason reason,
        proto::GuestUnitAgreedResultNotify *notify)
{
  MatchPoolBase::fillGuestUnitAgreedResultNotify(this, host_unit_id, reason, notify);
  proto::GuestUnitAgreedResultNotify::set_match_type(notify, MATCH_TYPE_DUNGEON);
};

// Line 398: range 000000000DE92CFE-000000000DE92F41
void __cdecl DungeonMatchPool::fillGuestUnitMatchSuccNotify(
        DungeonMatchPool *const this,
        MatchUnitPtr *p_match_unit_ptr,
        uint32_t host_unit_id,
        proto::GuestUnitMatchSuccNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // edx
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
  *(_QWORD *)(v4 + 8) = "1 32 16 26 dungeon_match_unit_ptr:399";
  *(_QWORD *)(v4 + 16) = DungeonMatchPool::fillGuestUnitMatchSuccNotify;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::dynamic_pointer_cast<DungeonMatchUnit,MatchUnitBase>((const std::shared_ptr<MatchUnitBase> *)(v4 + 32));
  if ( std::operator==<DungeonMatchUnit>(0LL, (const std::shared_ptr<DungeonMatchUnit> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/match/dungeon_match_pool.cpp",
      "fillGuestUnitMatchSuccNotify",
      402);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v12,
      (const char (*)[39])"[MATCH] dungeon_match_unit_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    std::shared_ptr<MatchUnitBase>::shared_ptr(&v11, p_match_unit_ptr);
    MatchPoolBase::fillGuestUnitMatchSuccNotify(this, &v11, host_unit_id, notify);
    std::shared_ptr<MatchUnitBase>::~shared_ptr(&v11);
    proto::GuestUnitMatchSuccNotify::set_match_type(notify, 1u);
    v7 = std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonMatchUnit,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    DungeonId = DungeonMatchUnit::getDungeonId(v7);
    proto::GuestUnitMatchSuccNotify::set_dungeon_id(notify, DungeonId);
  }
  std::shared_ptr<DungeonMatchUnit>::~shared_ptr((std::shared_ptr<DungeonMatchUnit> *const)(v4 + 32));
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

// Line 412: range 000000000DE92F42-000000000DE930BA
uint32_t __fastcall DungeonMatchPool::calEstimateMatchCostTime(const DungeonMatchPool *const this, uint32_t dungeon_id)
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
  *(_QWORD *)(v2 + 8) = "2 48 4 14 dungeon_id:411 64 8 8 iter:413";
  *(_QWORD *)(v2 + 16) = DungeonMatchPool::calEstimateMatchCostTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
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
