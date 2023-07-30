// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/tothemoon/Internal/AStarPathFinding/Player/player_manager.cpp

// Line 4: range 000000000CBFEE28-000000000CBFEFB1
void __cdecl PlayerManager::Init(PlayerManager *const this, bool performanceCheck)
{
  StatisticsCollector *v2; // rax
  StatisticsCollector *v3; // rax
  StatisticsCollector *v4; // rax
  StatisticsCollector *v5; // rax
  StatisticsCollector *v6; // rax
  StatisticsCollector *v7; // rax
  StatisticsCollector *v8; // rax
  std::shared_ptr<StatisticsCollector> __r; // [rsp+10h] [rbp-10h] BYREF

  if ( performanceCheck )
    std::make_shared<StatisticsCollector>();
  else
    std::shared_ptr<StatisticsCollector>::shared_ptr(&__r, 0LL);
  std::shared_ptr<StatisticsCollector>::operator=(&this->performanceDataCollector, &__r);
  std::shared_ptr<StatisticsCollector>::~shared_ptr(&__r);
  if ( std::operator!=<StatisticsCollector>(&this->performanceDataCollector, 0LL) )
  {
    v2 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::CreateItem(v2, TIME_PATH, Int, AvgMinMax);
    v3 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::CreateItem(v3, TIME_OBS_ADD, Int, AvgMax);
    v4 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::CreateItem(v4, TIME_OBS_RM, Int, AvgMax);
    v5 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::CreateItem(v5, MEM_OBS_ADD, Int, AvgMax);
    v6 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::CreateItem(v6, NODE_NUM_0, Int, AvgMinMax);
    v7 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::CreateItem(v7, TIME_OBS_MOD, Int, AvgMax);
    v8 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::CreateItem(v8, MEM_OBS_MOD, Int, AvgMax);
  }
};

// Line 19: range 000000000CBFEFB2-000000000CBFEFF4
void __cdecl PlayerManager::Uninit(PlayerManager *const this)
{
  std::shared_ptr<StatisticsCollector> __r; // [rsp+10h] [rbp-10h] BYREF

  std::shared_ptr<StatisticsCollector>::shared_ptr(&__r, 0LL);
  std::shared_ptr<StatisticsCollector>::operator=(&this->performanceDataCollector, &__r);
  std::shared_ptr<StatisticsCollector>::~shared_ptr(&__r);
};

// Line 24: range 000000000CBFEFF6-000000000CBFF137
const PlayerManager *__fastcall PlayerManager::GetPlayer(
        const PlayerManager *const this,
        const std::unordered_map<int,std::shared_ptr<Player>> *token,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  const std::shared_ptr<Player> *v6; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __x; // [rsp+20h] [rbp-70h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __y; // [rsp+28h] [rbp-68h] BYREF
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 token:23";
  *(_QWORD *)(v3 + 16) = PlayerManager::GetPlayer;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  __y._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::end(token)._M_cur;
  __x._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::find(
                 token,
                 (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32))._M_cur;
  if ( std::__detail::operator==<std::pair<int const,std::shared_ptr<Player>>,false>(&__x, &__y) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    v6 = std::unordered_map<int,std::shared_ptr<Player>>::at(
           token,
           (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32));
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, v6);
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 31: range 000000000CBFF138-000000000CBFF2E1
PlayerManager *__fastcall PlayerManager::AdaptiveGetPlayer(
        PlayerManager *const this,
        std::unordered_map<int,std::shared_ptr<Player>> *token,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::shared_ptr<Player> *v6; // rax
  std::unordered_map<int,std::shared_ptr<Player>>::mapped_type *v7; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __x; // [rsp+20h] [rbp-80h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __y; // [rsp+28h] [rbp-78h] BYREF
  std::shared_ptr<Player> __r; // [rsp+30h] [rbp-70h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 token:30";
  *(_QWORD *)(v3 + 16) = PlayerManager::AdaptiveGetPlayer;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  __y._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::end(token)._M_cur;
  __x._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::find(
                 token,
                 (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32))._M_cur;
  if ( std::__detail::operator==<std::pair<int const,std::shared_ptr<Player>>,false>(&__x, &__y) )
  {
    std::make_shared<Player,int &>((int *)&__r, (int *)(v3 + 32));
    v6 = std::unordered_map<int,std::shared_ptr<Player>>::operator[](
           token,
           (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32));
    std::shared_ptr<Player>::operator=(v6, &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
  }
  v7 = std::unordered_map<int,std::shared_ptr<Player>>::at(
         token,
         (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32));
  std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, v7);
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 38: range 000000000CBFF2E2-000000000CBFF4A4
PlayerManager *__fastcall PlayerManager::AddPlayer(
        PlayerManager *const this,
        std::unordered_map<int,std::shared_ptr<Player>> *token,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::shared_ptr<Player> *v6; // rax
  std::unordered_map<int,std::shared_ptr<Player>>::mapped_type *v7; // rax
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __x; // [rsp+20h] [rbp-80h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __y; // [rsp+28h] [rbp-78h] BYREF
  std::shared_ptr<Player> __r; // [rsp+30h] [rbp-70h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 8 token:37";
  *(_QWORD *)(v3 + 16) = PlayerManager::AddPlayer;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  __y._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::end(token)._M_cur;
  __x._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::find(
                 token,
                 (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32))._M_cur;
  if ( std::__detail::operator!=<std::pair<int const,std::shared_ptr<Player>>,false>(&__x, &__y) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    std::make_shared<Player,int &>((int *)&__r, (int *)(v3 + 32));
    v6 = std::unordered_map<int,std::shared_ptr<Player>>::operator[](
           token,
           (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32));
    std::shared_ptr<Player>::operator=(v6, &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
    v7 = std::unordered_map<int,std::shared_ptr<Player>>::operator[](
           token,
           (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v3 + 32));
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, v7);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 47: range 000000000CBFF4A6-000000000CBFF6C8
PlayerManager *__fastcall PlayerManager::AddPlayer(
        PlayerManager *const this,
        std::unordered_map<int,std::shared_ptr<Player>> *token,
        int sceneId,
        ConfigPtr *p_configPtr,
        int *a5)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r12
  int *v8; // r8
  std::shared_ptr<Config> *v9; // r9
  std::shared_ptr<Player> *v10; // rax
  std::unordered_map<int,std::shared_ptr<Player>>::mapped_type *v11; // rax
  int v14; // [rsp+8h] [rbp-B8h]
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __x; // [rsp+20h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<int const,std::shared_ptr<Player> >,false> __y; // [rsp+28h] [rbp-98h] BYREF
  std::shared_ptr<Player> __r; // [rsp+30h] [rbp-90h] BYREF
  char v19[128]; // [rsp+40h] [rbp-80h] BYREF

  v14 = (int)p_configPtr;
  v5 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 4 8 token:46 64 4 10 sceneId:46";
  *(_QWORD *)(v5 + 16) = PlayerManager::AddPlayer;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 48) = sceneId;
  *(_DWORD *)(v5 + 64) = v14;
  __y._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::end(token)._M_cur;
  __x._M_cur = std::unordered_map<int,std::shared_ptr<Player>>::find(
                 token,
                 (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v5 + 48))._M_cur;
  if ( std::__detail::operator!=<std::pair<int const,std::shared_ptr<Player>>,false>(&__x, &__y) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    std::make_shared<Player,int &,int &,std::shared_ptr<Config> &>(
      (int *)&__r,
      (int *)(v5 + 48),
      (std::shared_ptr<Config> *)(v5 + 64),
      a5,
      v8,
      v9);
    v10 = std::unordered_map<int,std::shared_ptr<Player>>::operator[](
            token,
            (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v5 + 48));
    std::shared_ptr<Player>::operator=(v10, &__r);
    std::shared_ptr<Player>::~shared_ptr(&__r);
    v11 = std::unordered_map<int,std::shared_ptr<Player>>::operator[](
            token,
            (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v5 + 48));
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, v11);
  }
  if ( v19 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 56: range 000000000CBFF6CA-000000000CBFF796
void __fastcall PlayerManager::RemovePlayer(PlayerManager *const this, int token)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 8 token:55";
  *(_QWORD *)(v2 + 16) = PlayerManager::RemovePlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = token;
  std::unordered_map<int,std::shared_ptr<Player>>::erase(
    &this->playerMap,
    (const std::unordered_map<int,std::shared_ptr<Player>>::key_type *)(v2 + 32));
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

// Line 61: range 000000000CBFF798-000000000CBFF7B1
int __cdecl PlayerManager::GetPlayerNum(const PlayerManager *const this)
{
  return std::unordered_map<int,std::shared_ptr<Player>>::size(&this->playerMap);
};

// Line 66: range 000000000CBFF7B2-000000000CBFF7DE
std::shared_ptr<StatisticsCollector> __cdecl PlayerManager::GetPerformanceDataCollector(
        const PlayerManager *const this)
{
  __int64 v1; // rsi
  std::shared_ptr<StatisticsCollector> result; // rax

  std::shared_ptr<StatisticsCollector>::shared_ptr(
    (std::shared_ptr<StatisticsCollector> *const)this,
    (const std::shared_ptr<StatisticsCollector> *)(v1 + 56));
  result._M_ptr = (std::__shared_ptr<StatisticsCollector,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 71: range 000000000CBFF7E0-000000000CBFF830
void __cdecl PlayerManager::AddPerformanceDataInt(PlayerManager *const this, MoonStatFlag flag, int data)
{
  StatisticsCollector *v3; // rax

  if ( std::operator!=<StatisticsCollector>(&this->performanceDataCollector, 0LL) )
  {
    v3 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::AddIntRecord(v3, flag, data);
  }
};

// Line 79: range 000000000CBFF832-000000000CBFF888
void __cdecl PlayerManager::AddPerformanceDataFloat(PlayerManager *const this, MoonStatFlag flag, float data)
{
  StatisticsCollector *v3; // rax

  if ( std::operator!=<StatisticsCollector>(&this->performanceDataCollector, 0LL) )
  {
    v3 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->performanceDataCollector);
    StatisticsCollector::AddFloatRecord(v3, flag, data);
  }
};
