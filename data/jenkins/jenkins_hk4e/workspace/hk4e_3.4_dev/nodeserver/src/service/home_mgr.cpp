// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/nodeserver/src/service/home_mgr.cpp

// Line 18: range 0000000003857108-000000000385730F
uint32_t __cdecl HomeMgr::findHomeGameserverId(HomeMgr *const this, uint32_t home_uid)
{
  uint32_t gameserver_id; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::shared_ptr<Home> *v6; // rax
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rdx
  uint32_t *p_gameserver_id; // rax
  int v9; // r15d
  uint32_t result; // eax
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 11 home_ptr:23 64 24 11 home_opt:19";
  *(_QWORD *)(v3 + 16) = HomeMgr::findHomeGameserverId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  common::tools::SafeMap<std::shared_ptr<Home>,1229u>::find(
    (std::optional<std::shared_ptr<Home> > *)(v3 + 64),
    &this->home_map_,
    home_uid);
  if ( !std::optional<std::shared_ptr<Home>>::has_value((const std::optional<std::shared_ptr<Home> > *const)(v3 + 64)) )
    goto LABEL_11;
  v6 = std::optional<std::shared_ptr<Home>>::value((std::optional<std::shared_ptr<Home> > *const)(v3 + 64));
  std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v3 + 32), v6);
  if ( std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2> *const)(v3 + 32)) )
  {
    v7 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    p_gameserver_id = &v7->gameserver_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gameserver_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_gameserver_id);
    }
    gameserver_id = v7->gameserver_id;
    v9 = 0;
  }
  else
  {
    v9 = 1;
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
  if ( v9 == 1 )
LABEL_11:
    gameserver_id = 0;
  std::optional<std::shared_ptr<Home>>::~optional((std::optional<std::shared_ptr<Home> > *const)(v3 + 64));
  result = gameserver_id;
  if ( v11 == (char *)v3 )
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

// Line 33: range 0000000003857310-0000000003857323
void __cdecl HomeMgr::onHomeNumChange(HomeMgr *const this, bool is_add, Home *home)
{
  ;
};

// Line 38: range 0000000003857370-00000000038578B6
int32_t __cdecl HomeMgr::addHome(HomeMgr *const this, HomePtr *p_home_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  _DWORD *v6; // rdx
  char v7; // al
  int32_t v8; // r14d
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t *v10; // rdx
  std::shared_ptr<Home> *v11; // rax
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  uint32_t *p_gameserver_id; // rax
  Home *v14; // rdx
  std::shared_ptr<Home> *v15; // rdx
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  uint32_t *v17; // rax
  uint32_t gameserver_id; // eax
  __int64 v19; // rsi
  std::atomic<unsigned int> *p_total_home_num_per_time; // rdx
  char v21; // cl
  Home *v22; // rdx
  int32_t result; // eax
  HomeMgr::addHome::<lambda(std::set<unsigned int>&)> home_uid; // [rsp+1Ch] [rbp-E4h]
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 home_ptr_old:50 64 24 11 home_opt:47";
  *(_QWORD *)(v2 + 16) = HomeMgr::addHome;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( std::operator==<Home>(0LL, p_home_ptr) )
    goto LABEL_8;
  v5 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
  v6 = v5;
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v5);
  }
  if ( *v6 )
    v7 = 0;
  else
LABEL_8:
    v7 = 1;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/home_mgr.cpp",
      "addHome",
      42);
    common::milog::MiLogStream::operator()(&v26, "can not add empty home");
    common::milog::MiLogStream::~MiLogStream(&v26);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    v10 = (uint32_t *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v9);
    }
    home_uid.__home_uid = *v10;
    common::tools::SafeMap<std::shared_ptr<Home>,1229u>::find(
      (std::optional<std::shared_ptr<Home> > *)(v2 + 64),
      &this->home_map_,
      *v10);
    if ( std::optional<std::shared_ptr<Home>>::has_value((const std::optional<std::shared_ptr<Home> > *const)(v2 + 64)) )
    {
      v11 = std::optional<std::shared_ptr<Home>>::value((std::optional<std::shared_ptr<Home> > *const)(v2 + 64));
      std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v2 + 32), v11);
      if ( std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32)) )
      {
        std::function<void ()(std::set<unsigned int> &)>::function<HomeMgr::addHome(std::shared_ptr<Home>)::{lambda(std::set<unsigned int> &)#1},void,void>(
          (std::function<void(std::set<unsigned int>&)> *const)&v26,
          home_uid);
        v12 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        p_gameserver_id = &v12->gameserver_id;
        if ( *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_gameserver_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(p_gameserver_id);
        }
        common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
          &this->gameserver_home_home_uid_map_,
          v12->gameserver_id,
          (std::function<void(std::set<unsigned int>&)> *)&v26);
        std::function<void ()(std::set<unsigned int> &)>::~function((std::function<void(std::set<unsigned int>&)> *const)&v26);
        v14 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        HomeMgr::onHomeNumChange(this, 0, v14);
      }
      std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 32));
    }
    v15 = common::tools::SafeMap<std::shared_ptr<Home>,1229u>::operator[](&this->home_map_, home_uid.__home_uid);
    std::shared_ptr<Home>::operator=(v15, p_home_ptr);
    std::function<void ()(std::set<unsigned int> &)>::function<HomeMgr::addHome(std::shared_ptr<Home>)::{lambda(std::set<unsigned int> &)#2},void,void>(
      (std::function<void(std::set<unsigned int>&)> *const)&v26,
      home_uid);
    v16 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    v17 = &v16->gameserver_id;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    gameserver_id = v16->gameserver_id;
    v19 = gameserver_id;
    common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
      &this->gameserver_home_home_uid_map_,
      gameserver_id,
      (std::function<void(std::set<unsigned int>&)> *)&v26);
    std::function<void ()(std::set<unsigned int> &)>::~function((std::function<void(std::set<unsigned int>&)> *const)&v26);
    if ( !std::optional<std::shared_ptr<Home>>::has_value((const std::optional<std::shared_ptr<Home> > *const)(v2 + 64)) )
    {
      p_total_home_num_per_time = &this->total_home_num_per_time_;
      v21 = *(_BYTE *)(((unsigned __int64)&this->total_home_num_per_time_ >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)((((_BYTE)this - 60) & 7) + 3) >= v21 )
      {
        LOBYTE(v19) = v21 != 0;
        __asan_report_store4(&this->total_home_num_per_time_, v19);
      }
      _InterlockedExchangeAdd((volatile signed __int32 *)p_total_home_num_per_time, 1u);
    }
    v22 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_home_ptr);
    HomeMgr::onHomeNumChange(this, 1, v22);
    v8 = 0;
    std::optional<std::shared_ptr<Home>>::~optional((std::optional<std::shared_ptr<Home> > *const)(v2 + 64));
  }
  result = v8;
  if ( v27 == (char *)v2 )
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

// Line 53: range 0000000003857324-0000000003857349
void __cdecl HomeMgr::addHome(std::shared_ptr<Home>)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const HomeMgr::addHome::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *home_uid_set)
{
  std::set<unsigned int>::erase(home_uid_set, &__closure->__home_uid);
};

// Line 63: range 000000000385734A-000000000385736F
void __cdecl HomeMgr::addHome(std::shared_ptr<Home>)::{lambda(std::set<unsigned int> &)#2}::operator()(
        const HomeMgr::addHome::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *home_uid_set)
{
  std::set<unsigned int>::insert(home_uid_set, &__closure->__home_uid);
};

// Line 80: range 00000000038578DE-0000000003857BF9
int32_t __cdecl HomeMgr::delHome(HomeMgr *const this, uint32_t home_uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::shared_ptr<Home> *v5; // rax
  std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_gameserver_id; // rax
  Home *v8; // rdx
  int32_t result; // eax
  std::function<void(std::set<unsigned int>&)> p_func; // [rsp+10h] [rbp-110h] BYREF
  char v11[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 home_ptr:85 64 24 7 iter:81 128 24 11 home_opt:82";
  *(_QWORD *)(v2 + 16) = HomeMgr::delHome;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  common::tools::SafeMap<std::shared_ptr<Home>,1229u>::find(
    (std::optional<std::shared_ptr<Home> > *)(v2 + 64),
    &this->home_map_,
    home_uid);
  common::tools::SafeMap<std::shared_ptr<Home>,1229u>::find(
    (std::optional<std::shared_ptr<Home> > *)(v2 + 128),
    &this->home_map_,
    home_uid);
  if ( std::optional<std::shared_ptr<Home>>::has_value((const std::optional<std::shared_ptr<Home> > *const)(v2 + 128)) )
  {
    v5 = std::optional<std::shared_ptr<Home>>::value((std::optional<std::shared_ptr<Home> > *const)(v2 + 128));
    std::shared_ptr<Home>::shared_ptr((std::shared_ptr<Home> *const)(v2 + 32), v5);
    if ( std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<Home,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 32)) )
    {
      std::function<void ()(std::set<unsigned int> &)>::function<HomeMgr::delHome(unsigned int)::{lambda(std::set<unsigned int> &)#1},void,void>(
        &p_func,
        (HomeMgr::delHome::<lambda(std::set<unsigned int>&)>)home_uid);
      v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      p_gameserver_id = &v6->gameserver_id;
      if ( *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gameserver_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gameserver_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(p_gameserver_id);
      }
      common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
        &this->gameserver_home_home_uid_map_,
        v6->gameserver_id,
        &p_func);
      std::function<void ()(std::set<unsigned int> &)>::~function(&p_func);
      v8 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      HomeMgr::onHomeNumChange(this, 0, v8);
    }
    common::tools::SafeMap<std::shared_ptr<Home>,1229u>::erase(&this->home_map_, home_uid);
    std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v2 + 32));
  }
  std::optional<std::shared_ptr<Home>>::~optional((std::optional<std::shared_ptr<Home> > *const)(v2 + 128));
  std::optional<std::shared_ptr<Home>>::~optional((std::optional<std::shared_ptr<Home> > *const)(v2 + 64));
  result = 0;
  if ( v11 == (char *)v2 )
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

// Line 88: range 00000000038578B8-00000000038578DD
void __cdecl HomeMgr::delHome(unsigned int)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const HomeMgr::delHome::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *home_uid_set)
{
  std::set<unsigned int>::erase(home_uid_set, &__closure->__home_uid);
};

// Line 102: range 0000000003857D4A-0000000003857DB8
void __cdecl HomeMgr::getGameserverHomeNum(
        HomeMgr *const this,
        google::protobuf::Map<unsigned int,unsigned int> *proto_home_num_map)
{
  std::function<void(unsigned int,std::set<unsigned int>&)> p_func; // [rsp+10h] [rbp-30h] BYREF

  std::function<void ()(unsigned int,std::set<unsigned int> &)>::function<HomeMgr::getGameserverHomeNum(google::protobuf::Map<unsigned int,unsigned int> &)::{lambda(unsigned int,std::set<unsigned int> &)#1},void,void>(
    &p_func,
    (HomeMgr::getGameserverHomeNum::<lambda(uint32_t, std::set<unsigned int>&)>)proto_home_num_map);
  common::tools::SafeMap<std::set<unsigned int>,1229u>::foreach(&this->gameserver_home_home_uid_map_, &p_func);
  std::function<void ()(unsigned int,std::set<unsigned int> &)>::~function(&p_func);
};

// Line 103: range 0000000003857BFA-0000000003857D49
void __fastcall HomeMgr::getGameserverHomeNum(google::protobuf::Map<unsigned int,unsigned int> &)::{lambda(unsigned int,std::set<unsigned int> &)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t gameserver_app_id,
        std::set<unsigned int> *home_uid_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r14d
  char *v7; // rsi
  unsigned int *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 gameserver_app_id:103";
  *(_QWORD *)(v3 + 16) = HomeMgr::getGameserverHomeNum(google::protobuf::Map<unsigned int,unsigned int> &)::{lambda(unsigned int,std::set<unsigned int> &)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = gameserver_app_id;
  v6 = std::set<unsigned int>::size(home_uid_set);
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v7 = (char *)(v3 + 32);
  v8 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
         *(google::protobuf::Map<unsigned int,unsigned int> *const *)__closure,
         (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 32));
  v9 = v8;
  v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
  {
    LOBYTE(v7) = v10 != 0;
    __asan_report_store4(v8, v7);
  }
  *v9 = v6;
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 112: range 0000000003857DDA-0000000003857E4C
void __cdecl HomeMgr::onServiceSessionConnect(HomeMgr *const this, uint32_t service_type, uint32_t service_app_id)
{
  std::function<void(std::set<unsigned int>&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  if ( service_type == 3 )
  {
    std::function<void ()(std::set<unsigned int> &)>::function<HomeMgr::onServiceSessionConnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1},void,void>(
      &p_func,
      (HomeMgr::onServiceSessionConnect::<lambda(std::set<unsigned int>&)>)3);
    common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
      &this->gameserver_home_home_uid_map_,
      service_app_id,
      &p_func);
    std::function<void ()(std::set<unsigned int> &)>::~function(&p_func);
  }
};

// Line 117: range 0000000003857DBA-0000000003857DD8
void __cdecl HomeMgr::onServiceSessionConnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const HomeMgr::onServiceSessionConnect::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *home_uid_set)
{
  std::set<unsigned int>::clear(home_uid_set);
};

// Line 126: range 0000000003857E6E-0000000003858108
void __cdecl HomeMgr::onServiceSessionDisconnect(HomeMgr *const this, uint32_t service_type, uint32_t service_app_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  std::function<void(std::set<unsigned int>&)> p_func; // [rsp+30h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 20 home_uid_set_opt:131";
  *(_QWORD *)(v3 + 16) = HomeMgr::onServiceSessionDisconnect;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( service_type == 3 )
  {
    common::tools::SafeMap<std::set<unsigned int>,1229u>::find(
      (std::optional<std::set<unsigned int> > *)(v3 + 32),
      &this->gameserver_home_home_uid_map_,
      service_app_id);
    if ( std::optional<std::set<unsigned int>>::has_value((const std::optional<std::set<unsigned int> > *const)(v3 + 32)) )
    {
      __for_range = std::optional<std::set<unsigned int>>::value((std::optional<std::set<unsigned int> > *const)(v3 + 32));
      __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v7 = v6;
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v6);
        }
        HomeMgr::delHome(this, *v7);
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      std::function<void ()(std::set<unsigned int> &)>::function<HomeMgr::onServiceSessionDisconnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1},void,void>(
        &p_func,
        (HomeMgr::onServiceSessionDisconnect::<lambda(std::set<unsigned int>&)>)&__for_end);
      common::tools::SafeMap<std::set<unsigned int>,1229u>::get(
        &this->gameserver_home_home_uid_map_,
        service_app_id,
        &p_func);
      std::function<void ()(std::set<unsigned int> &)>::~function(&p_func);
    }
    std::optional<std::set<unsigned int>>::~optional((std::optional<std::set<unsigned int> > *const)(v3 + 32));
  }
  if ( v13 == (char *)v3 )
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

// Line 139: range 0000000003857E4E-0000000003857E6C
void __cdecl HomeMgr::onServiceSessionDisconnect(unsigned int,unsigned int)::{lambda(std::set<unsigned int> &)#1}::operator()(
        const HomeMgr::onServiceSessionDisconnect::<lambda(std::set<unsigned int>&)> *const __closure,
        std::set<unsigned int> *home_uid_set)
{
  std::set<unsigned int>::clear(home_uid_set);
};

// Line 148: range 000000000385810A-0000000003858129
uint32_t __cdecl HomeMgr::getHomeLoadPerSecond(HomeMgr *const this)
{
  return std::__atomic_base<unsigned int>::operator unsigned int(&this->load_per_second_);
};

// Line 153: range 000000000385812A-0000000003858312
void __cdecl HomeMgr::update(HomeMgr *const this, uint32_t now)
{
  std::__atomic_base<unsigned int>::__int_type v2; // eax
  common::milog::MiLogStream *v3; // rbx
  std::atomic<unsigned int> *v4; // rdx
  unsigned int val; // [rsp+18h] [rbp-48h] BYREF
  int32_t second; // [rsp+1Ch] [rbp-44h]
  std::memory_order_0 __m; // [rsp+20h] [rbp-40h]
  std::memory_order_0 v8; // [rsp+24h] [rbp-3Ch]
  std::atomic<unsigned int> *p_load_per_second; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  second = now - std::__atomic_base<unsigned int>::operator unsigned int(&this->last_load_report_time_);
  if ( second > 0 )
  {
    v2 = std::__atomic_base<unsigned int>::operator unsigned int(&this->total_home_num_per_time_);
    std::__atomic_base<unsigned int>::operator=(&this->load_per_second_, v2 / second);
    std::__atomic_base<unsigned int>::operator=(&this->total_home_num_per_time_, 0);
    std::__atomic_base<unsigned int>::operator=(&this->last_load_report_time_, now);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/service/home_mgr.cpp",
      "update",
      165);
    v3 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v10, (const char (*)[18])"load_per_second_:");
    p_load_per_second = &this->load_per_second_;
    __m = memory_order_seq_cst;
    v8 = std::operator&(memory_order_seq_cst, __memory_order_mask);
    v4 = &this->load_per_second_;
    if ( *(_BYTE *)(((unsigned __int64)&this->load_per_second_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->load_per_second_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_load_per_second);
    }
    val = v4->_M_i;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/service/home_mgr.cpp",
      "update",
      157);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v10, (const char (*)[16])"update too fast");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
};
