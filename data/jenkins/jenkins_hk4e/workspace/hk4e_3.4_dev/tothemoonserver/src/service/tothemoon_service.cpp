// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/tothemoonserver/src/service/tothemoon_service.cpp

// Line 23: range 000000000CBB79D8-000000000CBB7B09
void __cdecl TothemoonService::TothemoonService(TothemoonService *const this)
{
  int (**v1)(...); // rdx

  ServiceBase::ServiceBase(this);
  v1 = (int (**)(...))(&`vtable for'TothemoonService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
  std::shared_ptr<ToTheMoonPathFinding>::shared_ptr(&this->tothemoon_processor);
  std::vector<TothemoonThreadLocal>::vector(&this->thread_local_vec_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->uid_to_thread_index_);
  boost::shared_mutex::shared_mutex(&this->uid_to_thread_index_mutex_);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->uid_offset_);
  }
  this->uid_offset_ = 0;
};

// Line 29: range 000000000CBB7B0A-000000000CBB7B9F
void __cdecl TothemoonService::~TothemoonService(TothemoonService *const this)
{
  int (**v1)(...); // rdx

  v1 = (int (**)(...))(&`vtable for'TothemoonService + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  this->_vptr_ServiceBase = v1;
  boost::shared_mutex::~shared_mutex(&this->uid_to_thread_index_mutex_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->uid_to_thread_index_);
  std::vector<TothemoonThreadLocal>::~vector(&this->thread_local_vec_);
  std::shared_ptr<ToTheMoonPathFinding>::~shared_ptr(&this->tothemoon_processor);
  ServiceBase::~ServiceBase(this);
};

// Line 29: range 000000000CBB7BA0-000000000CBB7BCA
void __cdecl TothemoonService::~TothemoonService(TothemoonService *const this)
{
  TothemoonService::~TothemoonService(this);
  operator delete(this, 0x4A8uLL);
};

// Line 35: range 000000000CBB7BCC-000000000CBB7F62
int32_t __cdecl TothemoonService::init(TothemoonService *const this, common::tools::PTree *pt)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::__shared_ptr_access<ToTheMoonPathFinding,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::vector<TothemoonThreadLocal> *p_thread_local_vec; // rcx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-A1h] BYREF
  std::shared_ptr<ToTheMoonPathFinding> __r; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 ms_pt:39";
  *(_QWORD *)(v2 + 16) = TothemoonService::init;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/service/tothemoon_service.cpp",
    "init",
    36);
  common::milog::MiLogStream::operator()(&v11, "[TothemoonService] Initing ToTheMoon Service");
  common::milog::MiLogStream::~MiLogStream(&v11);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v11, "Root.ServiceList.Tothemoonserver", &__a);
  common::tools::PTree::getChild(pt, (const std::string *)&v11);
  std::string::~string(&v11);
  std::allocator<char>::~allocator(&__a);
  if ( ServiceBase::init(this, (common::tools::PTree *)(v2 + 32)) )
  {
    v5 = -1;
  }
  else
  {
    common::tools::perf::make_shared<ToTheMoonPathFinding>();
    std::shared_ptr<ToTheMoonPathFinding>::operator=(&this->tothemoon_processor, &__r);
    std::shared_ptr<ToTheMoonPathFinding>::~shared_ptr(&__r);
    v6 = std::__shared_ptr_access<ToTheMoonPathFinding,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonPathFinding,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tothemoon_processor);
    ToTheMoonPathFinding::Init(v6);
    p_thread_local_vec = &this->thread_local_vec_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    std::vector<TothemoonThreadLocal>::resize(p_thread_local_vec, this->thread_num_);
    std::unordered_map<unsigned int,unsigned int>::clear(&this->uid_to_thread_index_);
    if ( ServiceBase::addHandler<ToTheMoonHandler>(this) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/service/tothemoon_service.cpp",
        "init",
        54);
      common::milog::MiLogStream::operator()(&v11, "add handler<ToTheMoonHandler> failed");
      common::milog::MiLogStream::~MiLogStream(&v11);
      v5 = -1;
    }
    else
    {
      v5 = 0;
    }
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

// Line 60: range 000000000CBB7F64-000000000CBB80E7
int32_t __cdecl TothemoonService::fini(TothemoonService *const this)
{
  std::__shared_ptr_access<ToTheMoonPathFinding,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::vector<TothemoonThreadLocal>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<TothemoonThreadLocal>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<TothemoonThreadLocal> *__for_range; // [rsp+20h] [rbp-40h]
  TothemoonThreadLocal *tl; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( ServiceBase::fini(this) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/tothemoon_service.cpp",
      "fini",
      63);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v8, (const char (*)[24])"ServiceBase::fini fails");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  if ( std::operator!=<ToTheMoonPathFinding>(&this->tothemoon_processor, 0LL) )
  {
    v1 = std::__shared_ptr_access<ToTheMoonPathFinding,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ToTheMoonPathFinding,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->tothemoon_processor);
    ToTheMoonPathFinding::Fini(v1);
  }
  __for_range = &this->thread_local_vec_;
  __for_begin._M_current = std::vector<TothemoonThreadLocal>::begin(&this->thread_local_vec_)._M_current;
  __for_end._M_current = std::vector<TothemoonThreadLocal>::end(&this->thread_local_vec_)._M_current;
  while ( __gnu_cxx::operator!=<TothemoonThreadLocal *,std::vector<TothemoonThreadLocal>>(&__for_begin, &__for_end) )
  {
    tl = __gnu_cxx::__normal_iterator<TothemoonThreadLocal *,std::vector<TothemoonThreadLocal>>::operator*(&__for_begin);
    if ( std::operator!=<PlayerManager>(&tl->player_mgr, 0LL) )
    {
      v2 = std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->player_mgr);
      PlayerManager::Uninit(v2);
    }
    __gnu_cxx::__normal_iterator<TothemoonThreadLocal *,std::vector<TothemoonThreadLocal>>::operator++(&__for_begin);
  }
  std::vector<TothemoonThreadLocal>::clear(&this->thread_local_vec_);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->uid_to_thread_index_);
  return 0;
};

// Line 86: range 000000000CBB80E8-000000000CBB81A4
int32_t __cdecl TothemoonService::defaultProcessPacketFunc(
        TothemoonService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  const std::string *v3; // rax
  const char *v4; // rax
  uint32_t cmd_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  v2 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  cmd_id = common::minet::Packet::getCmdId(v2);
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/service/tothemoon_service.cpp",
    "defaultProcessPacketFunc",
    88);
  v3 = ProtoUtils::getCmdName[abi:cxx11](cmd_id);
  v4 = (const char *)std::string::c_str(v3);
  common::milog::MiLogStream::operator()(&v7, "can not find func for cmd_id=%u, name=%s", cmd_id, v4);
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 93: range 000000000CBB81A6-000000000CBB8482
int32_t __cdecl TothemoonService::getPacketQueueIndex(
        TothemoonService *const this,
        common::minet::PacketPtr *p_packet_ptr)
{
  int32_t second; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v7; // rdx
  unsigned int *p_second; // rax
  int v9; // r15d
  int32_t result; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 6 uid:99 64 8 6 it:102 96 16 8 lock:101";
  *(_QWORD *)(v3 + 16) = TothemoonService::getPacketQueueIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  if ( std::operator==<common::minet::Packet>(0LL, p_packet_ptr) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/tothemoon_service.cpp",
      "getPacketQueueIndex",
      96);
    common::milog::MiLogStream::operator()(&v12, "packet_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
    second = 0;
  }
  else
  {
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    *(_DWORD *)(v3 + 48) = common::minet::Packet::getUserId(v6);
    boost::shared_lock<boost::shared_mutex>::shared_lock(
      (boost::shared_lock<boost::shared_mutex> *const)(v3 + 96),
      &this->uid_to_thread_index_mutex_);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &this->uid_to_thread_index_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->uid_to_thread_index_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
           &__y) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v7->second;
      v9 = 0;
    }
    else
    {
      v9 = 1;
    }
    boost::shared_lock<boost::shared_mutex>::~shared_lock((boost::shared_lock<boost::shared_mutex> *const)(v3 + 96));
    if ( v9 == 1 )
      second = TothemoonService::addPlayer(this, *(_DWORD *)(v3 + 48));
  }
  result = second;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 114: range 000000000CBB8484-000000000CBB8656
ConfigPtr __cdecl TothemoonService::getConfig(TothemoonService *const this)
{
  std::shared_ptr<ConfigBase> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const std::shared_ptr<ConfigBase> *v4; // rax
  std::shared_ptr<ConfigBase> *p_r; // rsi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rsi
  ConfigPtr result; // rax
  std::shared_ptr<ConfigBase> *v10; // [rsp+8h] [rbp-78h]
  std::shared_ptr<ConfigBase> __r; // [rsp+10h] [rbp-70h] BYREF
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v10 = (std::shared_ptr<ConfigBase> *)this;
  v1 = (std::shared_ptr<ConfigBase> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (TothemoonService *const)64;
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<ConfigBase> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 12 base_ptr:116";
  v1[1]._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)TothemoonService::getConfig;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  v4 = (const std::shared_ptr<ConfigBase> *)ZTWN11ThreadLocal15config_base_ptrE(this);
  std::shared_ptr<ConfigBase>::shared_ptr(v1 + 2, v4);
  p_r = v1 + 2;
  if ( std::operator==<ConfigBase>(0LL, v1 + 2) )
  {
    v6 = (unsigned __int64)std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ConfigMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::config_mgr_ptr);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8(v6, p_r);
    v7 = *(_QWORD *)v6 + 32LL;
    v8 = *(unsigned __int8 *)((v7 >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      v6 = __asan_report_load8(*(_QWORD *)v6 + 32LL, v8);
    (*(void (__fastcall **)(std::shared_ptr<ConfigBase> *, unsigned __int64))v7)(&__r, v6);
    p_r = &__r;
    std::shared_ptr<ConfigBase>::operator=(v1 + 2, &__r);
    std::shared_ptr<ConfigBase>::~shared_ptr(&__r);
  }
  if ( *(_WORD *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    __asan_report_store16(v10, p_r);
  std::dynamic_pointer_cast<Config,ConfigBase>(v10);
  std::shared_ptr<ConfigBase>::~shared_ptr(v1 + 2);
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<Config,(__gnu_cxx::_Lock_policy)2>::element_type *)v10;
  return result;
};

// Line 128: range 000000000CBB8658-000000000CBB8B01
__int64 __fastcall TothemoonService::addPlayer(TothemoonService *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int *v5; // r8
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // r14d
  uint32_t v13; // ecx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 7 uid:127 64 8 6 it:130 96 16 8 lock:129 128 16 7 ret:141";
  *(_QWORD *)(v2 + 16) = TothemoonService::addPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  boost::unique_lock<boost::shared_mutex>::unique_lock(
    (boost::unique_lock<boost::shared_mutex> *const)(v2 + 96),
    &this->uid_to_thread_index_mutex_);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                            &this->uid_to_thread_index_,
                                                                            (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->uid_to_thread_index_)._M_cur;
  if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/tothemoon_service.cpp",
      "addPlayer",
      133);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v19,
           (const char (*)[27])"[PlayerModify] player uid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" add thread repeat:");
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &v9->second);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_offset_);
    }
    v13 = ++this->uid_offset_;
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->thread_num_);
    }
    if ( v13 == this->thread_num_ )
      this->uid_offset_ = 0;
    *(std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> *)(v2 + 128) = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(&this->uid_to_thread_index_, (unsigned int *)(v2 + 48), &this->uid_offset_, (unsigned int *)&this->uid_to_thread_index_, v5);
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/tothemoon_service.cpp",
      "addPlayer",
      142);
    v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v19,
            (const char (*)[27])"[PlayerModify] player uid:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
    v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" add thread:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->uid_offset_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->uid_offset_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->uid_offset_);
    }
    second = this->uid_offset_;
  }
  boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v2 + 96));
  result = second;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 147: range 000000000CBB8B02-000000000CBB8D34
void __fastcall TothemoonService::deletePlayer(TothemoonService *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  common::milog::MiLogStream *v9; // rdi
  common::milog::MiLogStream *v10; // r14
  const unsigned int *v11; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:146 64 16 8 lock:148";
  *(_QWORD *)(v2 + 16) = TothemoonService::deletePlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  boost::unique_lock<boost::shared_mutex>::unique_lock(
    (boost::unique_lock<boost::shared_mutex> *const)(v2 + 64),
    &this->uid_to_thread_index_mutex_);
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/service/tothemoon_service.cpp",
    "deletePlayer",
    149);
  v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v13, (const char (*)[12])"player uid:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" remove thread:");
  v8 = std::unordered_map<unsigned int,unsigned int>::operator[](
         &this->uid_to_thread_index_,
         (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, v8);
  v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" current thread:");
  v11 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(v9);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, v11);
  common::milog::MiLogStream::~MiLogStream(&v13);
  std::unordered_map<unsigned int,unsigned int>::erase(
    &this->uid_to_thread_index_,
    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  boost::unique_lock<boost::shared_mutex>::~unique_lock((boost::unique_lock<boost::shared_mutex> *const)(v2 + 64));
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
};

// Line 154: range 000000000CBB8D36-000000000CBB8F87
void __fastcall TothemoonService::updateOnlinePlayerNum(TothemoonService *const this, uint32_t num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rdx
  common::milog::MiLogStream *v7; // r14
  const unsigned int *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    this = (TothemoonService *const)64;
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 num:153";
  *(_QWORD *)(v2 + 16) = TothemoonService::updateOnlinePlayerNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = num;
  v5 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v6 = (_BYTE *)v5;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)(v5 & 7) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    __asan_report_load1(v5);
  if ( *v6 != 1 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/tothemoon_service.cpp",
      "updateOnlinePlayerNum",
      157);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v12,
      (const char (*)[27])"need called in work thread");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/tothemoon_service.cpp",
      "updateOnlinePlayerNum",
      161);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v12, (const char (*)[14])"thread index:");
    v8 = (const unsigned int *)ZTWN11ThreadLocal17work_thread_indexE(&v12);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, v8);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" online player num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    v11 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
    MonitorReport::addValue(v11, MONITOR_ONLINE_PLAYER_NUM, *(_DWORD *)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 166: range 000000000CBB8F88-000000000CBB9379
void __cdecl TothemoonService::onMonitorReport(TothemoonService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<TothemoonThreadLocal>::reference v5; // rax
  std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t LastIntItemValue; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int32_t v14; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // r14
  std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t v17; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  int32_t v20; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  int32_t v23; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // r14
  std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  int32_t v26; // eax
  std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  int32_t v29; // eax
  int num; // [rsp+1Ch] [rbp-94h]
  char v31[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 player_mgr:169 64 16 24 performanceCollector:178";
  *(_QWORD *)(v2 + 16) = TothemoonService::onMonitorReport;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( thread_index < std::vector<TothemoonThreadLocal>::size(&this->thread_local_vec_) )
  {
    v5 = std::vector<TothemoonThreadLocal>::operator[](&this->thread_local_vec_, thread_index);
    std::shared_ptr<PlayerManager>::shared_ptr((std::shared_ptr<PlayerManager> *const)(v2 + 32), &v5->player_mgr);
    if ( !std::operator==<PlayerManager>((const std::shared_ptr<PlayerManager> *)(v2 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      num = PlayerManager::GetPlayerNum(v6);
      v7 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
      MonitorReport::addValue(v7, MONITOR_ONLINE_PLAYER_NUM, num);
      std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      PlayerManager::GetPerformanceDataCollector((const PlayerManager *const)(v2 + 64));
      if ( std::operator!=<MonitorReport>(&ResourceBox::monitor_report_ptr, 0LL)
        && std::operator!=<StatisticsCollector>((const std::shared_ptr<StatisticsCollector> *)(v2 + 64), 0LL) )
      {
        v9 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        v10 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        LastIntItemValue = StatisticsCollector::GetLastIntItemValue(v10, TIME_PATH);
        MonitorReport::addValue(v9, MONITOR_TOTHEMOON_TIME_PATH, LastIntItemValue);
        v12 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        v13 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v14 = StatisticsCollector::GetLastIntItemValue(v13, TIME_OBS_ADD);
        MonitorReport::addValue(v12, MONITOR_TOTHEMOON_TIME_OBS, v14);
        v15 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        v16 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v17 = StatisticsCollector::GetLastIntItemValue(v16, TIME_OBS_RM);
        MonitorReport::addValue(v15, MONITOR_TOTHEMOON_TIME_OBS_RM, v17);
        v18 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        v19 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v20 = StatisticsCollector::GetLastIntItemValue(v19, MEM_OBS_ADD);
        MonitorReport::addValue(v18, MONITOR_TOTHEMOON_MEM_OBS, v20);
        v21 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        v22 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v23 = StatisticsCollector::GetLastIntItemValue(v22, NODE_NUM_0);
        MonitorReport::addValue(v21, MONITOR_TOTHEMOON_NODE_NUM, v23);
        v24 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        v25 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v26 = StatisticsCollector::GetLastIntItemValue(v25, TIME_OBS_MOD);
        MonitorReport::addValue(v24, MONITOR_TOTHEMOON_TIME_OBS_MOD, v26);
        v27 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
        v28 = std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<StatisticsCollector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v29 = StatisticsCollector::GetLastIntItemValue(v28, MEM_OBS_MOD);
        MonitorReport::addValue(v27, MONITOR_TOTHEMOON_MEM_OBS_MOD, v29);
      }
      std::shared_ptr<StatisticsCollector>::~shared_ptr((std::shared_ptr<StatisticsCollector> *const)(v2 + 64));
    }
    std::shared_ptr<PlayerManager>::~shared_ptr((std::shared_ptr<PlayerManager> *const)(v2 + 32));
  }
  if ( v31 == (char *)v2 )
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

// Line 193: range 000000000CBB937A-000000000CBB95A4
int32_t __cdecl TothemoonService::onWorkThreadStart(TothemoonService *const this, uint32_t thread_index)
{
  std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  TothemoonThreadLocal *tl; // [rsp+18h] [rbp-48h]
  std::shared_ptr<common::tools::TimerMgr> __r; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/service/tothemoon_service.cpp",
    "onWorkThreadStart",
    194);
  common::milog::MiLogStream::operator()(&v6, "[TothemoonService] onWorkThreadStart");
  common::milog::MiLogStream::~MiLogStream(&v6);
  tl = std::vector<TothemoonThreadLocal>::operator[](&this->thread_local_vec_, thread_index);
  common::tools::perf::make_shared<common::tools::TimerMgr>();
  std::shared_ptr<common::tools::TimerMgr>::operator=(&tl->timer_mgr_ptr, &__r);
  std::shared_ptr<common::tools::TimerMgr>::~shared_ptr(&__r);
  if ( std::operator==<common::tools::TimerMgr>(&tl->timer_mgr_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/tothemoon_service.cpp",
      "onWorkThreadStart",
      203);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v6,
      (const char (*)[29])"make_shared<TimerMgr> failed");
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    common::tools::perf::make_shared<PlayerManager>();
    std::shared_ptr<PlayerManager>::operator=(&tl->player_mgr, (std::shared_ptr<PlayerManager> *)&__r);
    std::shared_ptr<PlayerManager>::~shared_ptr((std::shared_ptr<PlayerManager> *const)&__r);
    if ( std::operator==<PlayerManager>(&tl->player_mgr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/service/tothemoon_service.cpp",
        "onWorkThreadStart",
        211);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v6,
        (const char (*)[39])"make_shared<DynamicNodeManager> failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
      return -1;
    }
    else
    {
      v3 = std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->player_mgr);
      PlayerManager::Init(v3, 1);
      return 0;
    }
  }
};

// Line 220: range 000000000CBB95A6-000000000CBB9609
int32_t __cdecl TothemoonService::onWorkThreadStop(TothemoonService *const this, uint32_t thread_index)
{
  std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  TothemoonThreadLocal *tl; // [rsp+18h] [rbp-8h]

  tl = std::vector<TothemoonThreadLocal>::operator[](&this->thread_local_vec_, thread_index);
  if ( std::operator!=<PlayerManager>(&tl->player_mgr, 0LL) )
  {
    v2 = std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerManager,(__gnu_cxx::_Lock_policy)2,false,false> *const)&tl->player_mgr);
    PlayerManager::Uninit(v2);
  }
  return 0;
};

// Line 233: range 000000000CBB960A-000000000CBB97E0
_BOOL8 __fastcall TothemoonService::workThreadProc(TothemoonService *const this, uint32_t thread_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  _BOOL8 result; // rax
  common::tools::TimerMgr *v7; // rax
  std::vector<TothemoonThreadLocal>::reference timer_mgr_ptr; // [rsp+20h] [rbp-90h]
  uint64_t cur_tick; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 thread_index:232";
  *(_QWORD *)(v2 + 16) = TothemoonService::workThreadProc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = thread_index;
  timer_mgr_ptr = std::vector<TothemoonThreadLocal>::operator[](&this->thread_local_vec_, *(unsigned int *)(v2 + 32));
  if ( std::operator==<common::tools::TimerMgr>(&timer_mgr_ptr->timer_mgr_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/tothemoon_service.cpp",
      "workThreadProc",
      241);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v10,
           (const char (*)[40])"timer_mgr_ptr is nullptr, thread_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
  }
  else
  {
    cur_tick = common::tools::TimeUtils::getNowMs();
    v7 = std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2,false,false> *const)timer_mgr_ptr);
    result = common::tools::TimerMgr::update(v7, cur_tick);
  }
  if ( v11 == (char *)v2 )
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

// Line 256: range 000000000CBB97E2-000000000CBB991D
common::tools::TimerMgrPtr __cdecl TothemoonService::getTimerMgrPtr(TothemoonService *const this)
{
  TothemoonService *v1; // rsi
  unsigned __int64 v2; // rax
  _BYTE *v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rax
  uint32_t *v6; // rdx
  TothemoonThreadLocal *ThreadLocal; // rdx
  common::tools::TimerMgrPtr result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-30h] BYREF

  v2 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v3 = (_BYTE *)v2;
  v4 = v2 & 7;
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)v4 >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
  {
    v4 = v2;
    __asan_report_load1(v2);
  }
  if ( *v3 )
  {
    v5 = ZTWN11ThreadLocal17work_thread_indexE(v4);
    v6 = (uint32_t *)v5;
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v5);
    ThreadLocal = TothemoonService::getThreadLocal(v1, *v6);
    std::shared_ptr<common::tools::TimerMgr>::shared_ptr(
      (std::shared_ptr<common::tools::TimerMgr> *const)this,
      &ThreadLocal->timer_mgr_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/tothemoon_service.cpp",
      "getTimerMgrPtr",
      261);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v10,
      (const char (*)[26])"cannot find timer_mgr_ptr");
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::shared_ptr<common::tools::TimerMgr>::shared_ptr((std::shared_ptr<common::tools::TimerMgr> *const)this, 0LL);
  }
  result._M_ptr = (std::__shared_ptr<common::tools::TimerMgr,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 266: range 000000000CBB991E-000000000CBB9A83
TothemoonThreadLocal *__cdecl TothemoonService::getThreadLocal(TothemoonService *const this)
{
  unsigned __int64 v1; // rax
  _BYTE *v2; // rdx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rax
  uint32_t *v5; // rdx
  TothemoonService *thisa; // [rsp+8h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  thisa = this;
  if ( !(_BYTE)`guard variable for'TothemoonService::getThreadLocal(void)::empty_thread_local )
  {
    this = (TothemoonService *const)&`guard variable for'TothemoonService::getThreadLocal(void)::empty_thread_local;
    if ( __cxa_guard_acquire(&`guard variable for'TothemoonService::getThreadLocal(void)::empty_thread_local) )
    {
      __cxa_guard_release(&`guard variable for'TothemoonService::getThreadLocal(void)::empty_thread_local);
      this = (TothemoonService *const)TothemoonThreadLocal::~TothemoonThreadLocal;
      __cxa_atexit(
        (void (__fastcall *)(void *))TothemoonThreadLocal::~TothemoonThreadLocal,
        &TothemoonService::getThreadLocal(void)::empty_thread_local,
        &_dso_handle);
    }
  }
  v1 = ZTWN11ThreadLocal17is_in_work_threadE(this);
  v2 = (_BYTE *)v1;
  v3 = v1 & 7;
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) != 0 && (char)v3 >= *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
  {
    v3 = v1;
    __asan_report_load1(v1);
  }
  if ( *v2 )
  {
    v4 = ZTWN11ThreadLocal17work_thread_indexE(v3);
    v5 = (uint32_t *)v4;
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && (char)((v4 & 7) + 3) >= *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v4);
    return TothemoonService::getThreadLocal(thisa, *v5);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/tothemoon_service.cpp",
      "getThreadLocal",
      272);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v8,
      (const char (*)[28])"thread is not a work thread");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return &TothemoonService::getThreadLocal(void)::empty_thread_local;
  }
};

// Line 278: range 000000000CBB9A84-000000000CBB9CAE
std::vector<TothemoonThreadLocal>::reference __fastcall TothemoonService::getThreadLocal(
        TothemoonService *const this,
        uint32_t thread_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::vector<TothemoonThreadLocal>::reference result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 thread_index:277";
  *(_QWORD *)(v2 + 16) = TothemoonService::getThreadLocal;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = thread_index;
  if ( !(_BYTE)`guard variable for'TothemoonService::getThreadLocal(unsigned int)::empty_thread_local
    && __cxa_guard_acquire(&`guard variable for'TothemoonService::getThreadLocal(unsigned int)::empty_thread_local) )
  {
    __cxa_guard_release(&`guard variable for'TothemoonService::getThreadLocal(unsigned int)::empty_thread_local);
    __cxa_atexit(
      (void (__fastcall *)(void *))TothemoonThreadLocal::~TothemoonThreadLocal,
      &TothemoonService::getThreadLocal(unsigned int)::empty_thread_local,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->thread_num_);
  }
  if ( this->thread_num_ > *(_DWORD *)(v2 + 32) )
  {
    result = std::vector<TothemoonThreadLocal>::operator[](&this->thread_local_vec_, *(unsigned int *)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/service/tothemoon_service.cpp",
      "getThreadLocal",
      282);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v9, (const char (*)[14])"thread index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v6,
           (const char (*)[28])" is larget than thread num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->thread_num_);
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = &TothemoonService::getThreadLocal(unsigned int)::empty_thread_local;
  }
  if ( v10 == (char *)v2 )
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
