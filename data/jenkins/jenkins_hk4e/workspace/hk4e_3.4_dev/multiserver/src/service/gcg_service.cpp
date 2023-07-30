// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/multiserver/src/service/gcg_service.cpp

// Line 22: range 000000000DE8CDDA-000000000DE8D1CE
int32_t __cdecl GCGService::init(GCGService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::deque<GCGGameMgr> *p_game_mgr_deque; // rcx
  std::vector<std::set<unsigned int>> *p_thread_load_vec; // rcx
  std::deque<std::atomic<unsigned int>> *p_thread_load_deque; // rcx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-91h] BYREF
  std::string child_name; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ms_pt:24";
  *(_QWORD *)(v2 + 16) = GCGService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ServiceList.GCGservice", &__a);
  common::tools::PTree::getChild(pt, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    v5 = -1;
  }
  else if ( ServiceBase::findStatLogMgr(this, 0x1Eu) )
  {
    p_game_mgr_deque = &this->game_mgr_deque_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    std::deque<GCGGameMgr>::resize(p_game_mgr_deque, this->thread_num_);
    p_thread_load_vec = &this->thread_load_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    std::vector<std::set<unsigned int>>::resize(p_thread_load_vec, this->thread_num_);
    p_thread_load_deque = &this->thread_load_deque_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    std::deque<std::atomic<unsigned int>>::resize(p_thread_load_deque, this->thread_num_);
    if ( ServiceBase::addHandler<GCGHandler>(this) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/gcg_service.cpp",
        "init",
        41);
      common::milog::MiLogStream::operator()((common::milog::MiLogStream *const)&child_name, off_1BB49760);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gcg_service.cpp",
      "init",
      33);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)&child_name,
      (const char (*)[21])"miss stat log config");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    v5 = -1;
  }
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
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

// Line 47: range 000000000DE8D1D0-000000000DE8D28D
int32_t __cdecl GCGService::onWorkThreadStart(GCGService *const this, uint32_t thread_index)
{
  std::deque<GCGGameMgr>::reference gcg_game_mgr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  gcg_game_mgr = std::deque<GCGGameMgr>::operator[](&this->game_mgr_deque_, thread_index);
  if ( !GCGGameMgr::init(gcg_game_mgr) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/service/gcg_service.cpp",
    "onWorkThreadStart",
    54);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v4, (const char (*)[24])"gcg_game_mgr init fail.");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 62: range 000000000DE8D28E-000000000DE8D2CC
int32_t __cdecl GCGService::onWorkThreadStop(GCGService *const this, uint32_t thread_index)
{
  std::deque<GCGGameMgr>::reference gcg_game_mgr; // [rsp+18h] [rbp-8h]

  gcg_game_mgr = std::deque<GCGGameMgr>::operator[](&this->game_mgr_deque_, thread_index);
  GCGGameMgr::destroy(gcg_game_mgr);
  return 0;
};

// Line 72: range 000000000DE8D2CE-000000000DE8D30D
int32_t __cdecl GCGService::getPacketQueueIndex(GCGService *const this, common::minet::PacketPtr *p_packet_ptr)
{
  common::minet::Packet *v2; // rax
  int32_t thread_index; // [rsp+1Ch] [rbp-4h]

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  thread_index = common::minet::Packet::getMultiThreadIndex(v2);
  if ( thread_index == -1 )
    return GCGService::getMinLoadThreadIndex(this);
  else
    return thread_index;
};

// Line 82: range 000000000DE8D30E-000000000DE8D39D
uint32_t __cdecl GCGService::getTotalLoadNum(GCGService *const this)
{
  uint32_t num; // [rsp+1Ch] [rbp-54h]
  std::atomic<unsigned int> *load; // [rsp+28h] [rbp-48h]
  std::deque<std::atomic<unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-40h] BYREF
  std::deque<std::atomic<unsigned int>>::iterator __for_end; // [rsp+50h] [rbp-20h] BYREF

  num = 0;
  std::deque<std::atomic<unsigned int>>::begin(&__for_begin, &this->thread_load_deque_);
  std::deque<std::atomic<unsigned int>>::end(&__for_end, &this->thread_load_deque_);
  while ( std::operator!=<std::atomic<unsigned int>,std::atomic<unsigned int>&,std::atomic<unsigned int>*>(
            &__for_begin,
            &__for_end) )
  {
    load = std::_Deque_iterator<std::atomic<unsigned int>,std::atomic<unsigned int>&,std::atomic<unsigned int>*>::operator*(&__for_begin);
    num += std::__atomic_base<unsigned int>::operator unsigned int(load);
    std::_Deque_iterator<std::atomic<unsigned int>,std::atomic<unsigned int>&,std::atomic<unsigned int>*>::operator++(&__for_begin);
  }
  return num;
};

// Line 92: range 000000000DE8D39E-000000000DE8D745
void __fastcall GCGService::increaseThreadLoad(GCGService *const this, uint32_t game_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned int *v8; // rdx
  std::set<unsigned int> *v9; // rdi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v10; // rax
  unsigned __int64 v11; // rax
  unsigned int *v12; // rdx
  std::vector<std::set<unsigned int>>::size_type v13; // rsi
  const std::set<unsigned int> *v14; // rdi
  std::__atomic_base<unsigned int>::__int_type v15; // r14d
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int *v18; // rdx
  std::deque<std::atomic<unsigned int>>::reference v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdi
  common::milog::MiLogStream *v22; // r13
  __int64 v23; // rdx
  const unsigned int *v24; // rax
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 num:100 64 4 11 game_uid:91";
  *(_QWORD *)(v2 + 16) = GCGService::increaseThreadLoad;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = game_uid;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gcg_service.cpp",
      "increaseThreadLoad",
      95);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v26,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    v7 = ((__int64 (*)(void))ZTWN11ThreadLocal17work_thread_indexE)();
    v8 = (unsigned int *)v7;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) != 0 && (char)((v7 & 7) + 3) >= *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v7);
    v9 = std::vector<std::set<unsigned int>>::operator[](&this->thread_load_vec_, *v8);
    v10 = std::set<unsigned int>::insert(v9, (const std::set<unsigned int>::value_type *)(v2 + 64));
    v11 = ZTWN11ThreadLocal17work_thread_indexE(v9, v2 + 64, *(_QWORD *)&v10.second);
    v12 = (unsigned int *)v11;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) != 0 && (char)((v11 & 7) + 3) >= *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v11);
    v13 = *v12;
    v14 = std::vector<std::set<unsigned int>>::operator[](&this->thread_load_vec_, v13);
    *(_DWORD *)(v2 + 48) = std::set<unsigned int>::size(v14);
    v15 = *(_DWORD *)(v2 + 48);
    v17 = ZTWN11ThreadLocal17work_thread_indexE(v14, v13, v16);
    v18 = (unsigned int *)v17;
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v17);
    v19 = std::deque<std::atomic<unsigned int>>::operator[](&this->thread_load_deque_, *v18);
    std::__atomic_base<unsigned int>::operator=(v19, v15);
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/gcg_service.cpp",
      "increaseThreadLoad",
      103);
    v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v26, (const char (*)[13])"thread load:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v21, (const char (*)[15])" thread index:");
    v24 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v21, " thread index:", v23);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, v24);
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  if ( v27 == (char *)v2 )
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

// Line 107: range 000000000DE8D746-000000000DE8DAED
void __fastcall GCGService::decreaseThreadLoad(GCGService *const this, __int64 game_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned int *v10; // rdx
  std::set<unsigned int> *v11; // rdi
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int *v14; // rdx
  std::vector<std::set<unsigned int>>::size_type v15; // rsi
  const std::set<unsigned int> *v16; // rdi
  std::__atomic_base<unsigned int>::__int_type v17; // r14d
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned int *v20; // rdx
  std::deque<std::atomic<unsigned int>>::reference v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdi
  common::milog::MiLogStream *v24; // r13
  __int64 v25; // rdx
  const unsigned int *v26; // rax
  common::milog::MiLogStream v28; // [rsp+20h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 num:115 64 4 12 game_uid:106";
  *(_QWORD *)(v2 + 16) = GCGService::decreaseThreadLoad;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = game_uid;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  v7 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
  LOBYTE(game_uid) = v7 != 0;
  v8 = v5 & 7;
  if ( v7 != 0 && (char)v8 >= v7 )
  {
    v8 = v5;
    __asan_report_load1(v5);
  }
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/gcg_service.cpp",
      "decreaseThreadLoad",
      110);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v28,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  else
  {
    v9 = ZTWN11ThreadLocal17work_thread_indexE(v8, game_uid, v6);
    v10 = (unsigned int *)v9;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v9);
    v11 = std::vector<std::set<unsigned int>>::operator[](&this->thread_load_vec_, *v10);
    std::set<unsigned int>::erase(v11, (const std::set<unsigned int>::key_type *)(v2 + 64));
    v13 = ZTWN11ThreadLocal17work_thread_indexE(v11, v2 + 64, v12);
    v14 = (unsigned int *)v13;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v13);
    v15 = *v14;
    v16 = std::vector<std::set<unsigned int>>::operator[](&this->thread_load_vec_, v15);
    *(_DWORD *)(v2 + 48) = std::set<unsigned int>::size(v16);
    v17 = *(_DWORD *)(v2 + 48);
    v19 = ZTWN11ThreadLocal17work_thread_indexE(v16, v15, v18);
    v20 = (unsigned int *)v19;
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v19);
    v21 = std::deque<std::atomic<unsigned int>>::operator[](&this->thread_load_deque_, *v20);
    std::__atomic_base<unsigned int>::operator=(v21, v17);
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/gcg_service.cpp",
      "decreaseThreadLoad",
      118);
    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v28, (const char (*)[13])"thread load:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 48));
    v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])" thread index:");
    v26 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v23, " thread index:", v25);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, v26);
    common::milog::MiLogStream::~MiLogStream(&v28);
  }
  if ( v29 == (char *)v2 )
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

// Line 122: range 000000000DE8DAEE-000000000DE8DD3A
int32_t __cdecl GCGService::getMinLoadThreadIndex(GCGService *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::deque<std::atomic<unsigned int>>::reference v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  uint32_t i; // [rsp+18h] [rbp-A8h]
  uint32_t load; // [rsp+1Ch] [rbp-A4h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 min_load:123 64 4 16 thread_index:124";
  *(_QWORD *)(v1 + 16) = GCGService::getMinLoadThreadIndex;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  *(_DWORD *)(v1 + 48) = -1;
  *(_DWORD *)(v1 + 64) = 0;
  for ( i = 0; ; ++i )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( this->thread_num_ <= i )
      break;
    v4 = std::deque<std::atomic<unsigned int>>::operator[](&this->thread_load_deque_, (int)i);
    load = std::__atomic_base<unsigned int>::operator unsigned int(v4);
    if ( load < *(_DWORD *)(v1 + 48) )
    {
      *(_DWORD *)(v1 + 48) = load;
      *(_DWORD *)(v1 + 64) = i;
    }
  }
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/gcg_service.cpp",
    "getMinLoadThreadIndex",
    134);
  v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v11, (const char (*)[18])off_1BB49A60);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" thread index:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 64));
  common::milog::MiLogStream::~MiLogStream(&v11);
  result = *(_DWORD *)(v1 + 64);
  if ( v12 == (char *)v1 )
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
  return result;
};

// Line 139: range 000000000DE8DD3C-000000000DE8DFEE
void __cdecl GCGService::onMonitorReport(GCGService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::deque<std::atomic<unsigned int>>::reference v5; // rax
  MonitorReport *v6; // rax
  std::allocator<char> v7; // [rsp+1Ah] [rbp-F6h] BYREF
  std::allocator<char> __a; // [rsp+1Bh] [rbp-F5h] BYREF
  uint32_t load; // [rsp+1Ch] [rbp-F4h]
  std::string label_key; // [rsp+20h] [rbp-F0h] BYREF
  std::string label_value; // [rsp+40h] [rbp-D0h] BYREF
  char v12[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 10 holder:144";
  *(_QWORD *)(v2 + 16) = GCGService::onMonitorReport;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( thread_index < std::deque<std::atomic<unsigned int>>::size(&this->thread_load_deque_) )
  {
    v5 = std::deque<std::atomic<unsigned int>>::operator[](&this->thread_load_deque_, thread_index);
    load = std::__atomic_base<unsigned int>::operator unsigned int(v5);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&label_value, "GCGGameMode", &__a);
    std::allocator<char>::allocator(&v7);
    std::string::basic_string<std::allocator<char>>(&label_key, "Name", &v7);
    MonitorReportUtils::ContextHolder::ContextHolder(
      (MonitorReportUtils::ContextHolder *const)(v2 + 48),
      &label_key,
      &label_value);
    std::string::~string(&label_key);
    std::allocator<char>::~allocator(&v7);
    std::string::~string(&label_value);
    std::allocator<char>::~allocator(&__a);
    v6 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v6, MONITOR_GCG_GAME_NUM, load);
    MonitorReportUtils::ContextHolder::~ContextHolder((MonitorReportUtils::ContextHolder *const)(v2 + 48));
  }
  if ( v12 == (char *)v2 )
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
};

// Line 151: range 000000000DE8DFF0-000000000DE8E2AD
GCGGameMgr *__cdecl GCGService::getThreadLocalGameMgr(GCGService *const this)
{
  GCGGameMgr *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rdi
  GCGGameMgr *result; // rax
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream v16; // [rsp+10h] [rbp-80h] BYREF
  char v17[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 thread_index:157";
  *(_QWORD *)(v2 + 16) = GCGService::getThreadLocalGameMgr;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( !(_BYTE)`guard variable for'GCGService::getThreadLocalGameMgr(void)::empty_game_mgr
    && __cxa_guard_acquire(&`guard variable for'GCGService::getThreadLocalGameMgr(void)::empty_game_mgr) )
  {
    GCGGameMgr::GCGGameMgr(&GCGService::getThreadLocalGameMgr(void)::empty_game_mgr);
    __cxa_guard_release(&`guard variable for'GCGService::getThreadLocalGameMgr(void)::empty_game_mgr);
    v1 = &GCGService::getThreadLocalGameMgr(void)::empty_game_mgr;
    __cxa_atexit(
      (void (__fastcall *)(void *))GCGGameMgr::~GCGGameMgr,
      &GCGService::getThreadLocalGameMgr(void)::empty_game_mgr,
      &_dso_handle);
  }
  v5 = ZTWN11ThreadLocal17is_in_work_threadE();
  v6 = (_BYTE *)v5;
  v7 = *(_BYTE *)((v5 >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v7 != 0;
  v8 = v5 & 7;
  if ( v7 != 0 && (char)v8 >= v7 )
  {
    v8 = v5;
    __asan_report_load1(v5);
  }
  if ( *v6 != 1 )
  {
    result = &GCGService::getThreadLocalGameMgr(void)::empty_game_mgr;
  }
  else
  {
    v10 = ZTWN11ThreadLocal17work_thread_indexE(v8, v1, v6);
    v11 = (_DWORD *)v10;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) != 0 && (char)((v10 & 7) + 3) >= *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v10);
    *(_DWORD *)(v2 + 32) = *v11;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( this->thread_num_ > *(_DWORD *)(v2 + 32) )
    {
      result = std::deque<GCGGameMgr>::operator[](&this->game_mgr_deque_, *(unsigned int *)(v2 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/gcg_service.cpp",
        "getThreadLocalGameMgr",
        160);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v16, (const char (*)[14])"thread index:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v13, (const char (*)[28])off_1BB49640);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->thread_num_);
      common::milog::MiLogStream::~MiLogStream(&v16);
      result = &GCGService::getThreadLocalGameMgr(void)::empty_game_mgr;
    }
  }
  if ( v17 == (char *)v2 )
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

// Line 169: range 000000000DE8E2AE-000000000DE8E2DC
int32_t __cdecl GCGService::fini(GCGService *const this)
{
  if ( ServiceBase::fini(this) )
    return -1;
  else
    return 0;
};
