// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Player/player.cpp

// Line 8: range 000000000CBFCA5C-000000000CBFCE25
void __cdecl Player::Player(Player *const this, int uid)
{
  Player **v2; // r8
  const std::_Placeholder<1> *v3; // r9
  Player *__args_0; // [rsp+18h] [rbp-B8h] BYREF
  std::shared_ptr<StaticDataWrapper> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<DynamicPlayerData> v6; // [rsp+30h] [rbp-A0h] BYREF
  std::shared_ptr<AStarPathFinder> v7; // [rsp+40h] [rbp-90h] BYREF
  std::shared_ptr<RefinedPathGenerator> v8; // [rsp+50h] [rbp-80h] BYREF
  std::_Bind<void (Player::*(Player*,std::_Placeholder<1>))(long unsigned int)> v9; // [rsp+60h] [rbp-70h] BYREF
  __int64 v10; // [rsp+78h] [rbp-58h]
  std::_Bind_helper<false,void (Player::*)(long unsigned int),Player*,const std::_Placeholder<1>&>::type v11; // [rsp+80h] [rbp-50h] BYREF
  common::milog::MiLogStream v12; // [rsp+A0h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = uid;
  std::shared_ptr<StaticDataWrapper>::shared_ptr(&this->_staticData);
  std::shared_ptr<DynamicPlayerData>::shared_ptr(&this->_dynamicData);
  std::shared_ptr<AStarPathFinder>::shared_ptr(&this->_pathFinder);
  std::shared_ptr<RefinedPathGenerator>::shared_ptr(&this->_pathGenerator);
  std::shared_ptr<VoxelCutter>::shared_ptr(&this->_voxelCutter);
  std::shared_ptr<ToTheMoonTimer>::shared_ptr(&this->_keepAliveTimerPtr);
  std::make_shared<StaticDataWrapper>();
  std::shared_ptr<StaticDataWrapper>::operator=(&this->_staticData, &__r);
  std::shared_ptr<StaticDataWrapper>::~shared_ptr(&__r);
  std::make_shared<DynamicPlayerData>();
  std::shared_ptr<DynamicPlayerData>::operator=(&this->_dynamicData, &v6);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr(&v6);
  __args_0 = this;
  std::make_shared<AStarPathFinder,Player *>((Player **)&v7, &__args_0);
  std::shared_ptr<AStarPathFinder>::operator=(&this->_pathFinder, &v7);
  std::shared_ptr<AStarPathFinder>::~shared_ptr(&v7);
  std::make_shared<RefinedPathGenerator>();
  std::shared_ptr<RefinedPathGenerator>::operator=(&this->_pathGenerator, &v8);
  std::shared_ptr<RefinedPathGenerator>::~shared_ptr(&v8);
  std::make_shared<VoxelCutter>();
  std::shared_ptr<VoxelCutter>::operator=(&this->_voxelCutter, (std::shared_ptr<VoxelCutter> *)&v9._M_bound_args);
  std::shared_ptr<VoxelCutter>::~shared_ptr((std::shared_ptr<VoxelCutter> *const)&v9._M_bound_args);
  if ( *(char *)(((unsigned __int64)&this->_isEditor >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_isEditor);
  this->_isEditor = 0;
  __args_0 = this;
  v9._M_bound_args._M_head_impl = (Player *)Player::ProcDeleteSelfInTimer;
  v10 = 0LL;
  std::bind<void (Player::*)(unsigned long),Player*,std::_Placeholder<1> const&>(
    &v11,
    (void (**)(Player *, unsigned __int64))&v9._M_bound_args,
    &__args_0,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v2,
    v3);
  common::tools::perf::make_shared<ToTheMoonTimer,std::_Bind<void (Player::*)(unsigned long) ()(Player*,std::_Placeholder<1>)>>(
    (common::tools::perf::allocator<ToTheMoonTimer,ToTheMoonTimer> *)&v9,
    &v11);
  std::shared_ptr<ToTheMoonTimer>::operator=(&this->_keepAliveTimerPtr, (std::shared_ptr<ToTheMoonTimer> *)&v9);
  std::shared_ptr<ToTheMoonTimer>::~shared_ptr((std::shared_ptr<ToTheMoonTimer> *const)&v9);
  if ( std::operator==<ToTheMoonTimer>(&this->_keepAliveTimerPtr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
      "Player",
      19);
    common::milog::MiLogStream::operator()(&v12, "create _keepAliveTimerPtr failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
};

// Line 24: range 000000000CBFCE26-000000000CBFD257
void __cdecl Player::Player(Player *const this, int uid, int sceneId, ConfigPtr *p_configPtr)
{
  Player **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  Player *__args_0; // [rsp+28h] [rbp-B8h] BYREF
  std::shared_ptr<StaticDataWrapper> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<DynamicPlayerData> v10; // [rsp+40h] [rbp-A0h] BYREF
  std::shared_ptr<AStarPathFinder> v11; // [rsp+50h] [rbp-90h] BYREF
  std::shared_ptr<RefinedPathGenerator> v12; // [rsp+60h] [rbp-80h] BYREF
  std::_Bind<void (Player::*(Player*,std::_Placeholder<1>))(long unsigned int)> v13; // [rsp+70h] [rbp-70h] BYREF
  __int64 v14; // [rsp+88h] [rbp-58h]
  std::_Bind_helper<false,void (Player::*)(long unsigned int),Player*,const std::_Placeholder<1>&>::type v15; // [rsp+90h] [rbp-50h] BYREF
  common::milog::MiLogStream v16; // [rsp+B0h] [rbp-30h] BYREF

  std::shared_ptr<StaticDataWrapper>::shared_ptr(&this->_staticData);
  std::shared_ptr<DynamicPlayerData>::shared_ptr(&this->_dynamicData);
  std::shared_ptr<AStarPathFinder>::shared_ptr(&this->_pathFinder);
  std::shared_ptr<RefinedPathGenerator>::shared_ptr(&this->_pathGenerator);
  std::shared_ptr<VoxelCutter>::shared_ptr(&this->_voxelCutter);
  std::shared_ptr<ToTheMoonTimer>::shared_ptr(&this->_keepAliveTimerPtr);
  std::make_shared<StaticDataWrapper>();
  std::shared_ptr<StaticDataWrapper>::operator=(&this->_staticData, &__r);
  std::shared_ptr<StaticDataWrapper>::~shared_ptr(&__r);
  std::make_shared<DynamicPlayerData>();
  std::shared_ptr<DynamicPlayerData>::operator=(&this->_dynamicData, &v10);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr(&v10);
  __args_0 = this;
  std::make_shared<AStarPathFinder,Player *>((Player **)&v11, &__args_0);
  std::shared_ptr<AStarPathFinder>::operator=(&this->_pathFinder, &v11);
  std::shared_ptr<AStarPathFinder>::~shared_ptr(&v11);
  std::make_shared<RefinedPathGenerator>();
  std::shared_ptr<RefinedPathGenerator>::operator=(&this->_pathGenerator, &v12);
  std::shared_ptr<RefinedPathGenerator>::~shared_ptr(&v12);
  std::make_shared<VoxelCutter>();
  std::shared_ptr<VoxelCutter>::operator=(&this->_voxelCutter, (std::shared_ptr<VoxelCutter> *)&v13._M_bound_args);
  std::shared_ptr<VoxelCutter>::~shared_ptr((std::shared_ptr<VoxelCutter> *const)&v13._M_bound_args);
  if ( *(char *)(((unsigned __int64)&this->_isEditor >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->_isEditor);
  this->_isEditor = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->curSceneId >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curSceneId >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->curSceneId);
  }
  this->curSceneId = sceneId;
  std::shared_ptr<Config>::shared_ptr((std::shared_ptr<Config> *const)&v13._M_bound_args, p_configPtr);
  Player::UpdateData(this, sceneId, (ConfigPtr *)&v13._M_bound_args);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v13._M_bound_args);
  __args_0 = this;
  v13._M_bound_args._M_head_impl = (Player *)Player::ProcDeleteSelfInTimer;
  v14 = 0LL;
  std::bind<void (Player::*)(unsigned long),Player*,std::_Placeholder<1> const&>(
    &v15,
    (void (**)(Player *, unsigned __int64))&v13._M_bound_args,
    &__args_0,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v4,
    v5);
  common::tools::perf::make_shared<ToTheMoonTimer,std::_Bind<void (Player::*)(unsigned long) ()(Player*,std::_Placeholder<1>)>>(
    (common::tools::perf::allocator<ToTheMoonTimer,ToTheMoonTimer> *)&v13,
    &v15);
  std::shared_ptr<ToTheMoonTimer>::operator=(&this->_keepAliveTimerPtr, (std::shared_ptr<ToTheMoonTimer> *)&v13);
  std::shared_ptr<ToTheMoonTimer>::~shared_ptr((std::shared_ptr<ToTheMoonTimer> *const)&v13);
  if ( std::operator==<ToTheMoonTimer>(&this->_keepAliveTimerPtr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
      "Player",
      39);
    common::milog::MiLogStream::operator()(&v16, "create _keepAliveTimerPtr failed");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
};

// Line 44: range 000000000CBFD258-000000000CBFD427
void __cdecl Player::~Player(Player *const this)
{
  std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::shared_ptr<StaticDataWrapper> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<StaticDataWrapper>::shared_ptr(&__r, 0LL);
  std::shared_ptr<StaticDataWrapper>::operator=(&this->_staticData, &__r);
  std::shared_ptr<StaticDataWrapper>::~shared_ptr(&__r);
  std::shared_ptr<DynamicPlayerData>::shared_ptr((std::shared_ptr<DynamicPlayerData> *const)&__r, 0LL);
  std::shared_ptr<DynamicPlayerData>::operator=(&this->_dynamicData, (std::shared_ptr<DynamicPlayerData> *)&__r);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr((std::shared_ptr<DynamicPlayerData> *const)&__r);
  std::shared_ptr<AStarPathFinder>::shared_ptr((std::shared_ptr<AStarPathFinder> *const)&__r, 0LL);
  std::shared_ptr<AStarPathFinder>::operator=(&this->_pathFinder, (std::shared_ptr<AStarPathFinder> *)&__r);
  std::shared_ptr<AStarPathFinder>::~shared_ptr((std::shared_ptr<AStarPathFinder> *const)&__r);
  std::shared_ptr<RefinedPathGenerator>::shared_ptr((std::shared_ptr<RefinedPathGenerator> *const)&__r, 0LL);
  std::shared_ptr<RefinedPathGenerator>::operator=(&this->_pathGenerator, (std::shared_ptr<RefinedPathGenerator> *)&__r);
  std::shared_ptr<RefinedPathGenerator>::~shared_ptr((std::shared_ptr<RefinedPathGenerator> *const)&__r);
  std::shared_ptr<VoxelCutter>::shared_ptr((std::shared_ptr<VoxelCutter> *const)&__r, 0LL);
  std::shared_ptr<VoxelCutter>::operator=(&this->_voxelCutter, (std::shared_ptr<VoxelCutter> *)&__r);
  std::shared_ptr<VoxelCutter>::~shared_ptr((std::shared_ptr<VoxelCutter> *const)&__r);
  if ( std::operator!=<ToTheMoonTimer>(&this->_keepAliveTimerPtr, 0LL) )
  {
    v1 = std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_keepAliveTimerPtr);
    if ( common::tools::MiTimer::isActive(v1) )
    {
      v3 = std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_keepAliveTimerPtr);
      common::tools::MiTimer::cancel(v3);
    }
  }
  std::shared_ptr<ToTheMoonTimer>::~shared_ptr(&this->_keepAliveTimerPtr);
  std::shared_ptr<VoxelCutter>::~shared_ptr(&this->_voxelCutter);
  std::shared_ptr<RefinedPathGenerator>::~shared_ptr(&this->_pathGenerator);
  std::shared_ptr<AStarPathFinder>::~shared_ptr(&this->_pathFinder);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr(&this->_dynamicData);
  std::shared_ptr<StaticDataWrapper>::~shared_ptr(&this->_staticData);
};

// Line 60: range 000000000CBFD428-000000000CBFD50C
void __cdecl Player::InitStaticData(
        Player *const this,
        std::shared_ptr<SVOBlock> *p_blockData,
        std::shared_ptr<SVOWorld> *p_worldData)
{
  std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rdx
  std::shared_ptr<SVOWorld> *p_currentWorld; // rdx
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<StaticDataWrapper>(&this->_staticData, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
      "InitStaticData",
      63);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v6,
      (const char (*)[36])"[InitStaticData] staticData is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v3 = std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_staticData);
    std::shared_ptr<SVOBlock>::operator=(&v3->currentBlock, p_blockData);
    p_currentWorld = &std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_staticData)->currentWorld;
    std::shared_ptr<SVOWorld>::operator=(p_currentWorld, p_worldData);
  }
};

// Line 71: range 000000000CBFD50E-000000000CBFD564
void __cdecl Player::ResetDynamicData(Player *const this)
{
  std::shared_ptr<DynamicPlayerData> __r; // [rsp+10h] [rbp-10h] BYREF

  if ( std::operator!=<DynamicPlayerData>(&this->_dynamicData, 0LL) )
  {
    std::make_shared<DynamicPlayerData>();
    std::shared_ptr<DynamicPlayerData>::operator=(&this->_dynamicData, &__r);
    std::shared_ptr<DynamicPlayerData>::~shared_ptr(&__r);
  }
};

// Line 79: range 000000000CBFD566-000000000CBFD78D
void __cdecl Player::UpdateData(Player *const this, int data_id, ConfigPtr *p_configPtr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int v6; // eax
  int v7; // eax
  std::shared_ptr<SVOBlock> p_blockData; // [rsp+20h] [rbp-A0h] BYREF
  std::shared_ptr<SVOWorld> p_worldData; // [rsp+30h] [rbp-90h] BYREF
  char v11[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 12 blockData:82 64 16 12 worldData:83";
  *(_QWORD *)(v3 + 16) = Player::UpdateData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( !std::operator==<Config>(p_configPtr, 0LL) )
  {
    v6 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_configPtr);
    Config::GetStaticBlockData((const Config *const)(v3 + 32), v6);
    v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_configPtr);
    Config::GetStaticWorldData((const Config *const)(v3 + 64), v7, data_id);
    std::shared_ptr<SVOWorld>::shared_ptr(&p_worldData, (const std::shared_ptr<SVOWorld> *)(v3 + 64));
    std::shared_ptr<SVOBlock>::shared_ptr(&p_blockData, (const std::shared_ptr<SVOBlock> *)(v3 + 32));
    Player::InitStaticData(this, &p_blockData, &p_worldData);
    std::shared_ptr<SVOBlock>::~shared_ptr(&p_blockData);
    std::shared_ptr<SVOWorld>::~shared_ptr(&p_worldData);
    std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)(v3 + 64));
    std::shared_ptr<SVOBlock>::~shared_ptr((std::shared_ptr<SVOBlock> *const)(v3 + 32));
  }
  if ( v11 == (char *)v3 )
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
};

// Line 88: range 000000000CBFD78E-000000000CBFD81D
bool __cdecl Player::SaveCurrentMemoryUsage(const Player *const this)
{
  int NodeCount; // ecx
  std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax

  if ( std::operator==<DynamicPlayerData>(&this->_dynamicData, 0LL) )
  {
    NodeCount = 0;
  }
  else
  {
    v2 = std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_dynamicData);
    NodeCount = DynamicPlayerData::GetNodeCount(v2);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->_tempMemoryCnt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_tempMemoryCnt >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->_tempMemoryCnt);
  }
  this->_tempMemoryCnt = NodeCount;
  return 1;
};

// Line 94: range 000000000CBFD81E-000000000CBFD8B5
int __cdecl Player::GetMemoryIncreasement(const Player *const this)
{
  std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  int curMemoryCnt; // [rsp+1Ch] [rbp-4h]

  if ( std::operator==<DynamicPlayerData>(&this->_dynamicData, 0LL) )
    return 0;
  v2 = std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_dynamicData);
  curMemoryCnt = DynamicPlayerData::GetNodeCount(v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->_tempMemoryCnt >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->_tempMemoryCnt >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->_tempMemoryCnt);
  }
  return 176 * (curMemoryCnt - this->_tempMemoryCnt);
};

// Line 106: range 000000000CBFD8B6-000000000CBFD933
bool __cdecl Player::OnEnterScene(Player *const this, int sceneId, ConfigPtr *p_configPtr)
{
  std::shared_ptr<Config> v4; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<Config>::shared_ptr(&v4, p_configPtr);
  Player::UpdateData(this, sceneId, &v4);
  std::shared_ptr<Config>::~shared_ptr(&v4);
  Player::ResetDynamicData(this);
  return 1;
};

// Line 113: range 000000000CBFD934-000000000CBFDCC3
// local variable allocation has failed, the output may be wrong!
PosListPtr __cdecl Player::GetPath(
        Player *const this,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        FilterType filterType,
        std::vector<int> *levelList,
        std::vector<long int> *indexList,
        bool inBlock)
{
  PosListPtr result; // rax
  char v8; // al
  AStarPathFinder *v9; // rbx
  std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const char *v12; // rsi
  FilterType filterTypea; // [rsp+Ch] [rbp-84h]
  ToTheMoonVector3 *endPosa; // [rsp+10h] [rbp-80h]
  SVONode *finishNode; // [rsp+38h] [rbp-58h]
  std::shared_ptr<SVOBlock> p_block; // [rsp+40h] [rbp-50h] BYREF
  std::shared_ptr<DynamicNodesInfo> p_dynamicData; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-30h] BYREF
  char v22; // [rsp+A8h] [rbp+18h]

  endPosa = *(ToTheMoonVector3 **)&filterType;
  filterTypea = (int)levelList;
  if ( !Player::CommonDataCheck((Player *const)startPos)
    || (!std::operator==<AStarPathFinder>((const std::shared_ptr<AStarPathFinder> *)&startPos[3].y, 0LL)
     && !std::operator==<RefinedPathGenerator>((const std::shared_ptr<RefinedPathGenerator> *)&startPos[4].z, 0LL)
     && !std::operator==<StaticDataWrapper>((const std::shared_ptr<StaticDataWrapper> *)&startPos->z, 0LL)
      ? (v8 = 0)
      : (v8 = 1),
        v8) )
  {
    std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
      (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
      0LL);
  }
  else
  {
    Player::ClearPathQueryInfo((Player *const)startPos);
    v9 = std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&startPos[3].y);
    if ( v22 )
    {
      std::shared_ptr<DynamicNodesInfo>::shared_ptr(&p_dynamicData, 0LL);
      v10 = std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false> *const)&startPos->z);
      std::shared_ptr<SVOBlock>::shared_ptr(&p_block, &v10->currentBlock);
      finishNode = AStarPathFinder::BlockPathFinding(v9, endPos, endPosa, &p_block, &p_dynamicData, filterTypea);
      std::shared_ptr<SVOBlock>::~shared_ptr(&p_block);
      std::shared_ptr<DynamicNodesInfo>::~shared_ptr(&p_dynamicData);
    }
    else
    {
      std::shared_ptr<DynamicPlayerData>::shared_ptr(
        (std::shared_ptr<DynamicPlayerData> *const)&p_dynamicData,
        (const std::shared_ptr<DynamicPlayerData> *)&startPos[2]);
      v11 = std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false> *const)&startPos->z);
      std::shared_ptr<SVOWorld>::shared_ptr((std::shared_ptr<SVOWorld> *const)&p_block, &v11->currentWorld);
      finishNode = AStarPathFinder::WorldPathFinding(
                     v9,
                     endPos,
                     endPosa,
                     (std::shared_ptr<SVOWorld> *)&p_block,
                     (const std::shared_ptr<DynamicPlayerData> *)&p_dynamicData,
                     filterTypea);
      std::shared_ptr<SVOWorld>::~shared_ptr((std::shared_ptr<SVOWorld> *const)&p_block);
      std::shared_ptr<DynamicPlayerData>::~shared_ptr((std::shared_ptr<DynamicPlayerData> *const)&p_dynamicData);
    }
    if ( finishNode )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
        "GetPath",
        129);
      v12 = "[MoonIsAStar] queryPath finish, finishNode is not null.";
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        &v21,
        (const char (*)[56])"[MoonIsAStar] queryPath finish, finishNode is not null.");
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
        "GetPath",
        133);
      v12 = "[MoonIsAStar] queryPath finish, finishNode is null.";
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        &v21,
        (const char (*)[52])"[MoonIsAStar] queryPath finish, finishNode is null.");
    }
    common::milog::MiLogStream::~MiLogStream(&v21);
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v12);
    result = Player::NodePathToPointPath(
               this,
               (SVONode *)startPos,
               (const ToTheMoonVector3 *)finishNode,
               endPos,
               (std::vector<int> *)endPosa,
               indexList);
  }
  result._M_ptr = (std::__shared_ptr<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 140: range 000000000CBFDCC4-000000000CBFE137
bool __cdecl Player::AddObstacle(
        Player *const this,
        int handle_id,
        NodeObstacleType type,
        const ToTheMoonVector3 *center,
        const ToTheMoonVector3 *halfExtents,
        const ToTheMoonQuaternion *rotation,
        bool useEdge)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  _DWORD *v9; // r12
  bool v10; // r14
  VoxelCutter *v12; // r14
  std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  bool result; // al
  std::shared_ptr<DynamicPlayerData> p_dynamicData; // [rsp+30h] [rbp-F0h] BYREF
  std::shared_ptr<SVOWorld> p_staticData; // [rsp+40h] [rbp-E0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v7 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "1 48 72 12 obstacle:151";
  *(_QWORD *)(v7 + 16) = Player::AddObstacle;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = 61937;
  v9[536862723] = -218103808;
  v9[536862724] = -202116109;
  if ( !Player::CommonDataCheck(this) )
  {
    v10 = 0;
  }
  else if ( std::operator==<VoxelCutter>(&this->_voxelCutter, 0LL)
         || std::operator==<StaticDataWrapper>(&this->_staticData, 0LL) )
  {
    v10 = 0;
  }
  else
  {
    Player::ClearObstacleInfo(this);
    if ( center && halfExtents && rotation )
    {
      if ( ((unsigned __int8)center & 7) >= *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)center >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)center + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&center->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(center, 12LL);
      }
      if ( ((unsigned __int8)halfExtents & 7) >= *(_BYTE *)(((unsigned __int64)halfExtents >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)halfExtents >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&halfExtents->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)halfExtents + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&halfExtents->z + 3) >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load_n(halfExtents, 12LL);
      }
      if ( ((unsigned __int8)rotation & 7) >= *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&rotation->w + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)rotation + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&rotation->w + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(rotation, 16LL);
      }
      NodeObstacle::NodeObstacle((NodeObstacle *const)(v7 + 48), type, *center, *halfExtents, *rotation);
      v12 = std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_voxelCutter);
      v13 = std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StaticDataWrapper,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_staticData);
      std::shared_ptr<SVOWorld>::shared_ptr(&p_staticData, &v13->currentWorld);
      std::shared_ptr<DynamicPlayerData>::shared_ptr(&p_dynamicData, &this->_dynamicData);
      v10 = VoxelCutter::AddObstacle(v12, (const NodeObstacle *)(v7 + 48), handle_id, &p_dynamicData, &p_staticData, 1);
      std::shared_ptr<DynamicPlayerData>::~shared_ptr(&p_dynamicData);
      std::shared_ptr<SVOWorld>::~shared_ptr(&p_staticData);
      NodeObstacle::~NodeObstacle((NodeObstacle *const)(v7 + 48));
    }
    else
    {
      v10 = 0;
    }
  }
  result = v10;
  if ( v21 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 156: range 000000000CBFE138-000000000CBFE203
bool __cdecl Player::RemoveObstacle(Player *const this, int handle_id)
{
  bool v2; // bl
  VoxelCutter *v3; // rbx
  std::shared_ptr<DynamicPlayerData> p_dynamicData; // [rsp+10h] [rbp-20h] BYREF

  if ( !Player::CommonDataCheck(this) )
    return 0;
  if ( std::operator==<VoxelCutter>(&this->_voxelCutter, 0LL) )
    return 0;
  Player::ClearObstacleInfo(this);
  v3 = std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_voxelCutter);
  std::shared_ptr<DynamicPlayerData>::shared_ptr(&p_dynamicData, &this->_dynamicData);
  v2 = VoxelCutter::RemoveObstacle(v3, &p_dynamicData, handle_id, 1);
  std::shared_ptr<DynamicPlayerData>::~shared_ptr(&p_dynamicData);
  return v2;
};

// Line 168: range 000000000CBFE204-000000000CBFE230
std::shared_ptr<DynamicPlayerData> __cdecl Player::GetDynamicData(const Player *const this)
{
  __int64 v1; // rsi
  std::shared_ptr<DynamicPlayerData> result; // rax

  std::shared_ptr<DynamicPlayerData>::shared_ptr(
    (std::shared_ptr<DynamicPlayerData> *const)this,
    (const std::shared_ptr<DynamicPlayerData> *)(v1 + 24));
  result._M_ptr = (std::__shared_ptr<DynamicPlayerData,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 173: range 000000000CBFE232-000000000CBFE2D3
bool __cdecl Player::CommonDataCheck(Player *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( !std::operator==<StaticDataWrapper>(&this->_staticData, 0LL) )
    return 1;
  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
    "CommonDataCheck",
    176);
  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
    &v2,
    (const char (*)[38])"[Player][GetPath] static data is null");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return 0;
};

// Line 183: range 000000000CBFE2D4-000000000CBFE344
void __cdecl Player::ClearPathQueryInfo(Player *const this)
{
  AStarPathFinder *v1; // rax
  RefinedPathGenerator *v2; // rax

  if ( std::operator!=<AStarPathFinder>(&this->_pathFinder, 0LL) )
  {
    v1 = std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_pathFinder);
    AStarPathFinder::Clear(v1);
  }
  if ( std::operator!=<RefinedPathGenerator>(&this->_pathGenerator, 0LL) )
  {
    v2 = std::__shared_ptr_access<RefinedPathGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RefinedPathGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_pathGenerator);
    RefinedPathGenerator::Clear(v2);
  }
};

// Line 195: range 000000000CBFE346-000000000CBFE385
void __cdecl Player::ClearObstacleInfo(Player *const this)
{
  VoxelCutter *v1; // rax

  if ( std::operator!=<VoxelCutter>(&this->_voxelCutter, 0LL) )
  {
    v1 = std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<VoxelCutter,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_voxelCutter);
    VoxelCutter::Clear(v1);
  }
};

// Line 203: range 000000000CBFE386-000000000CBFEA97
PosListPtr __cdecl Player::NodePathToPointPath(
        Player *const this,
        SVONode *finishNode,
        const ToTheMoonVector3 *startPos,
        const ToTheMoonVector3 *endPos,
        std::vector<int> *levelList,
        std::vector<long int> *indexList)
{
  unsigned __int64 p_M_single_bucket; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  PosListPtr result; // rax
  SVONode *v11; // rax
  std::vector<ToTheMoonVector3> *v12; // rdx
  std::vector<ToTheMoonVector3> *v13; // rdx
  int v14; // r14d
  RefinedPathGenerator *v15; // r14
  std::__shared_ptr<AStarPathFinder,(__gnu_cxx::_Lock_policy)2>::element_type *v16; // r9
  const std::vector<ToTheMoonVector3>::value_type *v17; // rsi
  std::vector<ToTheMoonVector3> *v18; // r14
  __int64 v19; // rax
  __int64 v20; // rax
  SVONode *v21; // rax
  std::vector<int>::value_type __x; // [rsp+38h] [rbp-138h] BYREF
  int i; // [rsp+3Ch] [rbp-134h]
  int cnt; // [rsp+40h] [rbp-130h]
  int maxcnt; // [rsp+44h] [rbp-12Ch]
  std::vector<long int>::value_type v31; // [rsp+48h] [rbp-128h] BYREF
  AStarPathFinder v32; // [rsp+50h] [rbp-120h] BYREF
  std::vector<long int> *indexLista; // [rsp+180h] [rbp+10h]

  p_M_single_bucket = (unsigned __int64)&v32._queryData.astarInfoMap._M_h._M_single_bucket;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      p_M_single_bucket = v7;
  }
  *(_QWORD *)p_M_single_bucket = 1102416563LL;
  *(_QWORD *)(p_M_single_bucket + 8) = "4 32 12 5 p:293 64 16 15 finishAstar:208 96 16 7 res:210 128 24 8 path:229";
  *(_QWORD *)(p_M_single_bucket + 16) = Player::NodePathToPointPath;
  v8 = (_DWORD *)(p_M_single_bucket >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -219020288;
  v8[536862722] = -219021312;
  v8[536862723] = -219021312;
  v8[536862724] = -218103808;
  v8[536862725] = -202116109;
  if ( !startPos
    || std::operator==<AStarPathFinder>((const std::shared_ptr<AStarPathFinder> *)&finishNode->children, 0LL)
    || !endPos
    || !levelList )
  {
    std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
      (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
      0LL);
  }
  else
  {
    v11 = (SVONode *)std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&finishNode->children);
    AStarPathFinder::GetAStarInfo((AStarPathFinder *const)(p_M_single_bucket + 64), v11);
    std::make_shared<std::vector<ToTheMoonVector3>>();
    if ( std::operator==<std::vector<ToTheMoonVector3>>(
           (const std::shared_ptr<std::vector<ToTheMoonVector3> > *)(p_M_single_bucket + 96),
           0LL) )
    {
      std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
        (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
        0LL);
    }
    else if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(p_M_single_bucket + 64), 0LL) )
    {
      v12 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 96));
      std::vector<ToTheMoonVector3>::push_back(v12, endPos);
      v13 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 96));
      std::vector<ToTheMoonVector3>::push_back(v13, (const std::vector<ToTheMoonVector3>::value_type *)levelList);
      __x = SVODataProcessor::GetNodeLevel((const SVONode *)startPos);
      std::vector<int>::push_back((std::vector<int> *const)indexList, &__x);
      if ( *(_BYTE *)(((unsigned __int64)&startPos[2] >> 3) + 0x7FFF8000) )
        __asan_report_load8(&startPos[2], &__x);
      v31 = *(_QWORD *)&startPos[2].x;
      std::vector<long>::push_back(indexLista, &v31);
      std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
        (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
        (std::shared_ptr<std::vector<ToTheMoonVector3> > *)(p_M_single_bucket + 96));
    }
    else
    {
      maxcnt = 0x10000;
      cnt = 0;
      std::vector<ToTheMoonVector3>::vector((std::vector<ToTheMoonVector3> *const)(p_M_single_bucket + 128));
      if ( std::operator==<RefinedPathGenerator>(
             (const std::shared_ptr<RefinedPathGenerator> *)&finishNode->neighbors,
             0LL) )
      {
        std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
          (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
          0LL);
        v14 = 0;
      }
      else
      {
        v15 = std::__shared_ptr_access<RefinedPathGenerator,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RefinedPathGenerator,(__gnu_cxx::_Lock_policy)2,false,false> *const)&finishNode->neighbors);
        v16 = std::__shared_ptr<AStarPathFinder,(__gnu_cxx::_Lock_policy)2>::get((const std::__shared_ptr<AStarPathFinder,(__gnu_cxx::_Lock_policy)2> *const)&finishNode->children);
        v17 = startPos;
        RefinedPathGenerator::GeneratePath(
          v15,
          (SVONode *)startPos,
          endPos,
          (const ToTheMoonVector3 *)levelList,
          (std::vector<ToTheMoonVector3> *)(p_M_single_bucket + 128),
          v16);
        for ( i = 0;
              i < std::vector<ToTheMoonVector3>::size((const std::vector<ToTheMoonVector3> *const)(p_M_single_bucket
                                                                                                 + 128));
              ++i )
        {
          v18 = std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 96));
          v17 = std::vector<ToTheMoonVector3>::operator[](
                  (std::vector<ToTheMoonVector3> *const)(p_M_single_bucket + 128),
                  i);
          std::vector<ToTheMoonVector3>::push_back(v18, v17);
        }
        do
        {
          v19 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
          if ( *(_BYTE *)(((unsigned __int64)(v19 + 40) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(v19 + 40, v17);
          if ( !*(_QWORD *)(v19 + 40) )
            break;
          ++cnt;
          __x = SVODataProcessor::GetNodeLevel((const SVONode *)startPos);
          std::vector<int>::push_back((std::vector<int> *const)indexList, &__x);
          if ( *(_BYTE *)(((unsigned __int64)&startPos[2] >> 3) + 0x7FFF8000) )
            __asan_report_load8(&startPos[2], &__x);
          v31 = *(_QWORD *)&startPos[2].x;
          std::vector<long>::push_back(indexLista, &v31);
          v20 = (__int64)std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarInfo,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_single_bucket + 64));
          if ( *(_BYTE *)(((unsigned __int64)(v20 + 40) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_load8(v20 + 40, &v31);
          startPos = *(const ToTheMoonVector3 **)(v20 + 40);
          v21 = (SVONode *)std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AStarPathFinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)&finishNode->children);
          AStarPathFinder::GetAStarInfo(&v32, v21);
          std::shared_ptr<AStarInfo>::operator=(
            (std::shared_ptr<AStarInfo> *const)(p_M_single_bucket + 64),
            (std::shared_ptr<AStarInfo> *)&v32);
          std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)&v32);
          v17 = 0LL;
          if ( std::operator==<AStarInfo>((const std::shared_ptr<AStarInfo> *)(p_M_single_bucket + 64), 0LL) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v32._queryData.astarInfoMap._M_h._M_before_begin,
              &common::milog::MiLogDefault::default_log_obj_,
              2u,
              "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
              "NodePathToPointPath",
              247);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)&v32._queryData.astarInfoMap._M_h._M_before_begin,
              (const char (*)[20])"finishAstar is null");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v32._queryData.astarInfoMap._M_h._M_before_begin);
            break;
          }
        }
        while ( cnt <= maxcnt );
        __x = SVODataProcessor::GetNodeLevel((const SVONode *)startPos);
        std::vector<int>::push_back((std::vector<int> *const)indexList, &__x);
        if ( *(_BYTE *)(((unsigned __int64)&startPos[2] >> 3) + 0x7FFF8000) )
          __asan_report_load8(&startPos[2], &__x);
        v31 = *(_QWORD *)&startPos[2].x;
        std::vector<long>::push_back(indexLista, &v31);
        v14 = 1;
      }
      std::vector<ToTheMoonVector3>::~vector((std::vector<ToTheMoonVector3> *const)(p_M_single_bucket + 128));
      if ( v14 == 1 )
        std::shared_ptr<std::vector<ToTheMoonVector3>>::shared_ptr(
          (std::shared_ptr<std::vector<ToTheMoonVector3> > *const)this,
          (std::shared_ptr<std::vector<ToTheMoonVector3> > *)(p_M_single_bucket + 96));
    }
    std::shared_ptr<std::vector<ToTheMoonVector3>>::~shared_ptr((std::shared_ptr<std::vector<ToTheMoonVector3> > *const)(p_M_single_bucket + 96));
    std::shared_ptr<AStarInfo>::~shared_ptr((std::shared_ptr<AStarInfo> *const)(p_M_single_bucket + 64));
  }
  if ( &v32._queryData.astarInfoMap._M_h._M_single_bucket == (std::_Hashtable<int,std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > >,std::allocator<std::pair<int const,std::shared_ptr<std::unordered_map<int,std::shared_ptr<AStarInfo>> > > >,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::__bucket_type *)p_M_single_bucket )
  {
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)p_M_single_bucket = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_single_bucket >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<std::vector<ToTheMoonVector3>,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 306: range 000000000CBFEA98-000000000CBFED6E
void __fastcall Player::RefreshAliveTimer(Player *const this, uint64_t delay_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(unsigned __int64, __int64, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD); // r10
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // rsi
  unsigned int retcode; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 delay_ms:305";
  *(_QWORD *)(v2 + 16) = Player::RefreshAliveTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = delay_ms;
  if ( !std::operator==<ToTheMoonTimer>(&this->_keepAliveTimerPtr, 0LL) )
  {
    v5 = std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_keepAliveTimerPtr);
    if ( common::tools::MiTimer::isActive(v5) )
      Player::CancelTimer(this);
    v6 = (unsigned __int64)std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_keepAliveTimerPtr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6, 0LL);
    v7 = *(_QWORD *)v6 + 24LL;
    v8 = *(unsigned __int8 *)((v7 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 24LL, v8);
    v9 = *(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD))v7;
    if ( *(char *)(((unsigned __int64)&this->_isEditor >> 3) + 0x7FFF8000) < 0 )
      v6 = __asan_report_load1(&this->_isEditor);
    if ( this->_isEditor )
    {
      v10 = 10800000LL;
    }
    else
    {
      v11 = (_QWORD *)(v2 + 32);
      v12 = *(unsigned __int8 *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v12 )
        v6 = __asan_report_load8(v2 + 32, v12);
      v10 = (unsigned int)*v11;
    }
    retcode = v9(
                v6,
                v10,
                0LL,
                "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
                "RefreshAliveTimer",
                313LL,
                0LL,
                0LL);
    if ( retcode )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/tothemoon/Internal/AStarPathFinding/Player/player.cpp",
        "RefreshAliveTimer",
        316);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(this);
      }
      common::milog::MiLogStream::operator()(
        &v14,
        "can't start _keepAliveTimerPtr, uid:%u, error:%d",
        (unsigned int)this->uid,
        retcode);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 321: range 000000000CBFED70-000000000CBFEDE6
void __cdecl Player::ProcDeleteSelfInTimer(Player *const this, uint64_t time_ms)
{
  TothemoonService *v2; // rax
  std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rcx
  TothemoonThreadLocal *tl; // [rsp+18h] [rbp-8h]

  v2 = ServiceBox::findService<TothemoonService>();
  tl = TothemoonService::getThreadLocal(v2);
  v3 = std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->player_mgr);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  PlayerManager::RemovePlayer(v3, this->uid);
};

// Line 329: range 000000000CBFEDE8-000000000CBFEE27
void __cdecl Player::CancelTimer(Player *const this)
{
  std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax

  if ( std::operator!=<ToTheMoonTimer>(&this->_keepAliveTimerPtr, 0LL) )
  {
    v1 = std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->_keepAliveTimerPtr);
    common::tools::MiTimer::cancel(v1);
  }
};
