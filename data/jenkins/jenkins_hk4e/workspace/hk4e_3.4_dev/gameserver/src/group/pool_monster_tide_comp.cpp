// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/group/pool_monster_tide_comp.cpp

// Line 20: range 00000000168D7362-00000000168D76F6
void __cdecl PoolMonsterTideComp::start(PoolMonsterTideComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<Group> __r; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<Scene> v5; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-B0h] BYREF
  char v7[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 scene_ptr:21 64 16 12 group_wtr:27";
  *(_QWORD *)(v1 + 16) = PoolMonsterTideComp::start;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Group::getScene((const Group *const)(v1 + 32));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/pool_monster_tide_comp.cpp",
      "start",
      24);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v6, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Group>((Group *)&__r);
    std::weak_ptr<Group>::weak_ptr<Group,void>((std::weak_ptr<Group> *const)(v1 + 64), &__r);
    std::shared_ptr<Group>::~shared_ptr(&__r);
    std::weak_ptr<Group>::weak_ptr((std::weak_ptr<Group> *const)&__r, (const std::weak_ptr<Group> *)(v1 + 64));
    common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene> &,PoolMonsterTideComp::start(void)::{lambda(unsigned long)#1}>(
      &v5,
      (PoolMonsterTideComp::start::<lambda(uint64_t)> *)(v1 + 32),
      (std::shared_ptr<Scene> *)&__r,
      (PoolMonsterTideComp::start::<lambda(uint64_t)> *)(v1 + 32));
    std::shared_ptr<SceneTimer>::operator=(&this->timer_ptr_, (std::shared_ptr<SceneTimer> *)&v5);
    std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)&v5);
    PoolMonsterTideComp::start(void)::{lambda(unsigned long)#1}::~start((PoolMonsterTideComp::start::<lambda(uint64_t)> *const)&__r);
    if ( std::operator==<SceneTimer>(0LL, &this->timer_ptr_) )
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/group/pool_monster_tide_comp.cpp",
        "start",
        40);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v6, (const char (*)[23])"init timer_ptr_ failed");
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
    std::weak_ptr<Group>::~weak_ptr((std::weak_ptr<Group> *const)(v1 + 64));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 28: range 00000000168D718C-00000000168D7345
void __cdecl PoolMonsterTideComp::start(void)::{lambda(unsigned long)#1}::operator()(
        const PoolMonsterTideComp::start::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Group *v5; // rax
  PoolMonsterTideComp *PoolMonsterTideComp; // rdx
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-90h] BYREF
  char v8[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 group_ptr:30";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::start(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 32));
  if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/pool_monster_tide_comp.cpp",
      "operator()",
      33);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"group_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v5 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PoolMonsterTideComp = Group::getPoolMonsterTideComp(v5);
    PoolMonsterTideComp::onTimer(PoolMonsterTideComp, now_ms);
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 28: range 00000000168FCE12-00000000168FCE37
void __cdecl PoolMonsterTideComp::start(void)::{lambda(unsigned long)#1}::start(
        PoolMonsterTideComp::start::<lambda(uint64_t)> *const this,
        PoolMonsterTideComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Group>::weak_ptr(&this->__group_wtr, &a2->__group_wtr);
};

// Line 28: range 00000000168FD484-00000000168FD4A9
void __cdecl PoolMonsterTideComp::start(void)::{lambda(unsigned long)#1}::start(
        PoolMonsterTideComp::start::<lambda(uint64_t)> *const this,
        const PoolMonsterTideComp::start::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<Group>::weak_ptr(&this->__group_wtr, &a2->__group_wtr);
};

// Line 28: range 00000000168D7346-00000000168D7360
void __cdecl PoolMonsterTideComp::start(void)::{lambda(unsigned long)#1}::~start(
        PoolMonsterTideComp::start::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<Group>::~weak_ptr(&this->__group_wtr);
};

// Line 46: range 00000000168D76F8-00000000168D7C6A
void __cdecl PoolMonsterTideComp::onTimer(PoolMonsterTideComp *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false,false>::pointer v6; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rdx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint64_t now_msa; // [rsp+0h] [rbp-120h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false> __y; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-F8h]
  char v20[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 tide_index:49 64 8 7 iter:51 96 16 11 tide_ptr:56 128 24 11 tide_vec:48";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::onTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  now_msa = common::tools::TimeUtils::getNowMs();
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>>(
    (std::vector<unsigned int> *)(v2 + 128),
    &this->monster_tide_map_);
  __for_range = (std::vector<unsigned int> *)(v2 + 128);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 128))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    *(std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::find(
                                                                                                  &this->monster_tide_map_,
                                                                                                  (const std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::key_type *)(v2 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::end(&this->monster_tide_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false> *)(v2 + 64),
            &__y) )
    {
      v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false,false> *const)(v2 + 64));
      std::shared_ptr<PoolMonsterTide>::shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 96), &v6->second);
      if ( !std::operator==<PoolMonsterTide>((const std::shared_ptr<PoolMonsterTide> *)(v2 + 96), 0LL) )
      {
        v7 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v7->fill_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v7->fill_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v7->fill_type == POOL_MONSTER_TIDE_FILL_ON_TIMER )
        {
          v8 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v8 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v8->state == POOL_MONSTER_TIDE_NORMAL )
          {
            v9 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&v9->fill_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v9 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->fill_time >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( v9->fill_time )
            {
              v10 = (__int64)std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              if ( *(_BYTE *)(((unsigned __int64)(v10 + 312) >> 3) + 0x7FFF8000) )
                v10 = __asan_report_load8();
              v11 = *(_QWORD *)(v10 + 312);
              v12 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&v12->fill_time >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)v12 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->fill_time >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( now_msa >= v11 + 1000 * (unsigned __int64)v12->fill_time )
              {
                v13 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                if ( *(_BYTE *)(((unsigned __int64)&v13->last_fill_time >> 3) + 0x7FFF8000) )
                  v13 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v13->last_fill_time);
                v13->last_fill_time = now_msa;
                v14 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                if ( *(_BYTE *)(((unsigned __int64)&v14->tide_index >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v14->tide_index >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                PoolMonsterTideComp::checkAndAddTideMonster(this, v14->tide_index);
              }
            }
          }
        }
      }
      std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 96));
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  if ( v20 == (char *)v2 )
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
};

// Line 83: range 00000000168D7C6C-00000000168D7ECF
PoolMonsterTideComp *__fastcall PoolMonsterTideComp::findPoolMonsterTide(
        PoolMonsterTideComp *const this,
        __int64 tide_index,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false,false>::pointer v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 tide_index:82 64 8 7 iter:84";
  *(_QWORD *)(v3 + 16) = PoolMonsterTideComp::findPoolMonsterTide;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::find(
                                                                                                (std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>> *const)(tide_index + 24),
                                                                                                (const std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::end((std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>> *const)(tide_index + 24))._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "findPoolMonsterTide",
      87);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v13,
           (const char (*)[28])"tide not found, tide_index:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v7, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)(tide_index + 16) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, *(const Group **)(tide_index + 16));
    common::milog::MiLogStream::~MiLogStream(&v13);
    std::shared_ptr<PoolMonsterTide>::shared_ptr((std::shared_ptr<PoolMonsterTide> *const)this, 0LL);
  }
  else
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false,false> *const)(v3 + 64));
    std::shared_ptr<PoolMonsterTide>::shared_ptr((std::shared_ptr<PoolMonsterTide> *const)this, &v9->second);
  }
  if ( v14 == (char *)v3 )
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

// Line 98: range 00000000168D7F64-00000000168D8EED
__int64 __fastcall PoolMonsterTideComp::addMonsterTide(
        PoolMonsterTideComp *const this,
        uint32_t tide_index,
        uint32_t monster_pool_id,
        const PlatformRouteParam *route_param,
        const std::vector<MonsterScriptConfig> *monster_config_vec,
        const std::set<unsigned int> *affix_set,
        uint32_t total_monster_count,
        uint32_t min_monster_count,
        uint32_t max_monster_count,
        uint32_t fill_count,
        uint32_t fill_time,
        const std::map<std::string,float> *server_global_value_map)
{
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  _DWORD *v14; // r12
  unsigned int v15; // r14d
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  Scene *v24; // r14
  uint32_t v25; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t v30; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rdx
  uint32_t *p_total_monster_count; // rax
  uint32_t v33; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t v35; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rdx
  uint32_t *p_max_monster_count; // rax
  uint32_t v38; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  uint32_t v41; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  uint32_t v43; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rdx
  uint32_t monster_id; // r14d
  std::map<unsigned int,unsigned int>::key_type v46; // eax
  std::map<unsigned int,unsigned int>::mapped_type *v47; // rax
  uint32_t *v48; // rdx
  _BOOL4 v49; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // rdx
  PoolMonsterTideState *p_state; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  bool v54; // al
  SceneTimer *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rcx
  std::shared_ptr<PoolMonsterTide> *v60; // rax
  uint64_t NowMs; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rcx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+34h] [rbp-1BCh] BYREF
  int32_t i; // [rsp+38h] [rbp-1B8h]
  int32_t ret; // [rsp+3Ch] [rbp-1B4h]
  std::vector<MonsterScriptConfig>::iterator __for_begin; // [rsp+40h] [rbp-1B0h] BYREF
  std::vector<MonsterScriptConfig>::iterator __for_end; // [rsp+48h] [rbp-1A8h] BYREF
  std::vector<MonsterScriptConfig> *__for_range; // [rsp+50h] [rbp-1A0h]
  const MonsterScriptConfig *monster_config; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v96; // [rsp+60h] [rbp-190h] BYREF
  char v97[368]; // [rsp+80h] [rbp-170h] BYREF

  v12 = (unsigned __int64)v97;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v13 = __asan_stack_malloc_3(320LL);
    if ( v13 )
      v12 = v13;
  }
  *(_QWORD *)v12 = 1102416563LL;
  *(_QWORD *)(v12 + 8) = "11 48 1 17 is_press_mode:126 64 4 13 tide_index:94 80 4 18 monster_pool_id:94 96 4 22 total_mon"
                         "ster_count:96 112 4 20 min_monster_count:96 128 4 20 max_monster_count:96 144 4 13 fill_count:9"
                         "7 160 4 12 fill_time:97 176 16 12 scene_ptr:99 208 16 20 monster_tide_ptr:141 240 48 15 monster_map:153";
  *(_QWORD *)(v12 + 16) = PoolMonsterTideComp::addMonsterTide;
  v14 = (_DWORD *)(v12 >> 3);
  v14[536862720] = -235802127;
  v14[536862721] = -234753551;
  v14[536862722] = -234556924;
  v14[536862723] = -234556924;
  v14[536862724] = -234556924;
  v14[536862725] = 61956;
  v14[536862726] = 62194;
  v14[536862727] = 62194;
  v14[536862729] = -202116109;
  *(_DWORD *)(v12 + 64) = tide_index;
  *(_DWORD *)(v12 + 80) = monster_pool_id;
  *(_DWORD *)(v12 + 96) = total_monster_count;
  *(_DWORD *)(v12 + 112) = min_monster_count;
  *(_DWORD *)(v12 + 128) = max_monster_count;
  *(_DWORD *)(v12 + 144) = fill_count;
  *(_DWORD *)(v12 + 160) = fill_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Group::getScene((const Group *const)(v12 + 176));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v12 + 176), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/pool_monster_tide_comp.cpp",
      "addMonsterTide",
      102);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v96, (const char (*)[18])"scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v96);
    v15 = -1;
    goto LABEL_65;
  }
  if ( std::vector<MonsterScriptConfig>::empty(monster_config_vec) )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/group/pool_monster_tide_comp.cpp",
      "addMonsterTide",
      108);
    v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v96,
            (const char (*)[30])"empty monster configs. group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = operator<<(v16, this->group_);
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" tide_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v12 + 64));
    common::milog::MiLogStream::~MiLogStream(&v96);
    v15 = -1;
    goto LABEL_65;
  }
  if ( *(_DWORD *)(v12 + 160) && !*(_DWORD *)(v12 + 144) )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/group/pool_monster_tide_comp.cpp",
      "addMonsterTide",
      114);
    v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v96,
            (const char (*)[41])"fill count can NOT be 0 while fill_time:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v12 + 160));
    v21 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v20, (const char (*)[3])", ");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_16:
    operator<<(v21, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v96);
    v15 = -1;
    goto LABEL_65;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>,unsigned int>(
         &this->monster_tide_map_,
         (const unsigned int *)(v12 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/pool_monster_tide_comp.cpp",
      "addMonsterTide",
      120);
    v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v96,
            (const char (*)[38])"already has monster tide, tide_index:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v12 + 64));
    v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v12 + 160) )
  {
    *(_BYTE *)(v12 + 48) = 0;
    v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 176));
    std::function<ForeachPolicy ()(Player &)>::function<PoolMonsterTideComp::addMonsterTide(unsigned int,unsigned int,PlatformRouteParam const&,std::vector<MonsterScriptConfig> const&,std::set<unsigned int> const&,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,std::map<std::string,float> const&)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v96,
      (PoolMonsterTideComp::addMonsterTide::<lambda(Player&)>)(v12 + 48));
    Scene::foreachPlayer(v24, (std::function<ForeachPolicy(Player&)> *)&v96);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v96);
    if ( *(_BYTE *)(v12 + 48) )
      *(_DWORD *)(v12 + 160) = 1;
  }
  common::tools::perf::make_shared<PoolMonsterTide>();
  v25 = *(_DWORD *)(v12 + 64);
  v26 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&v26->tide_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->tide_index >> 3) + 0x7FFF8000) <= 3 )
  {
    v26 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v26->tide_index);
  }
  v26->tide_index = v25;
  v27 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  std::set<unsigned int>::operator=(&v27->affix_set, affix_set);
  v28 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  std::map<std::string,float>::operator=(&v28->server_global_value_map, server_global_value_map);
  v29 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  PlatformRouteParam::operator=(&v29->platform_route_param, route_param);
  v30 = *(_DWORD *)(v12 + 96);
  v31 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  p_total_monster_count = &v31->total_monster_count;
  if ( *(_BYTE *)(((unsigned __int64)p_total_monster_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_total_monster_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_total_monster_count >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_store4(p_total_monster_count);
  }
  v31->total_monster_count = v30;
  v33 = *(_DWORD *)(v12 + 112);
  v34 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&v34->min_monster_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v34->min_monster_count >> 3) + 0x7FFF8000) <= 3 )
  {
    v34 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v34->min_monster_count);
  }
  v34->min_monster_count = v33;
  v35 = *(_DWORD *)(v12 + 128);
  v36 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  p_max_monster_count = &v36->max_monster_count;
  if ( *(_BYTE *)(((unsigned __int64)p_max_monster_count >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_max_monster_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_monster_count >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_store4(p_max_monster_count);
  }
  v36->max_monster_count = v35;
  v38 = *(_DWORD *)(v12 + 80);
  v39 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&v39->monster_pool_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v39->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
  {
    v39 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v39->monster_pool_id);
  }
  v39->monster_pool_id = v38;
  v40 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  std::vector<MonsterScriptConfig>::operator=(&v40->monster_config_vec, monster_config_vec);
  v41 = *(_DWORD *)(v12 + 144);
  v42 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&v42->fill_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v42->fill_count >> 3) + 0x7FFF8000) <= 3 )
  {
    v42 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v42->fill_count);
  }
  v42->fill_count = v41;
  v43 = *(_DWORD *)(v12 + 160);
  v44 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&v44->fill_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v44 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v44->fill_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&v44->fill_time);
  }
  v44->fill_time = v43;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v12 + 240));
  i = 0;
  __for_range = &std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208))->monster_config_vec;
  __for_begin._M_current = std::vector<MonsterScriptConfig>::begin(__for_range)._M_current;
  __for_end._M_current = std::vector<MonsterScriptConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<MonsterScriptConfig *,std::vector<MonsterScriptConfig>>(&__for_begin, &__for_end) )
  {
    monster_config = __gnu_cxx::__normal_iterator<MonsterScriptConfig *,std::vector<MonsterScriptConfig>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&monster_config->monster_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)monster_config + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config->monster_id >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    monster_id = monster_config->monster_id;
    v46 = i++;
    __k = v46;
    v47 = std::map<unsigned int,unsigned int>::operator[]((std::map<unsigned int,unsigned int> *const)(v12 + 240), &__k);
    v48 = v47;
    if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v47);
    }
    *v48 = monster_id;
    __gnu_cxx::__normal_iterator<MonsterScriptConfig *,std::vector<MonsterScriptConfig>>::operator++(&__for_begin);
  }
  v49 = *(_DWORD *)(v12 + 160) != 0;
  v50 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  if ( *(_BYTE *)(((unsigned __int64)&v50->fill_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v50->fill_type >> 3) + 0x7FFF8000) <= 3 )
  {
    v50 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v50->fill_type);
  }
  v50->fill_type = v49;
  v51 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
  p_state = &v51->state;
  if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_state);
  }
  v51->state = POOL_MONSTER_TIDE_NORMAL;
  v54 = 0;
  if ( *(_DWORD *)(v12 + 160) )
  {
    if ( std::operator!=<SceneTimer>(&this->timer_ptr_, 0LL) )
    {
      v53 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
      if ( !common::tools::MiTimer::isActive(v53) )
        v54 = 1;
    }
  }
  if ( v54
    && (v55 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_),
        (ret = SceneTimer::startS(v55, 1u, 1, "./src/group/pool_monster_tide_comp.cpp", "addMonsterTide", 164)) != 0) )
  {
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/pool_monster_tide_comp.cpp",
      "addMonsterTide",
      167);
    v56 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v96,
            (const char (*)[19])"start timer fail, ");
    v57 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v56, (const char (*)[13])" tide_index:");
    v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v12 + 64));
    v59 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v58, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v59, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v96);
    v15 = -1;
  }
  else
  {
    v60 = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::operator[](
            &this->monster_tide_map_,
            (const std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::key_type *)(v12 + 64));
    std::shared_ptr<PoolMonsterTide>::operator=(v60, (const std::shared_ptr<PoolMonsterTide> *)(v12 + 208));
    NowMs = common::tools::TimeUtils::getNowMs();
    v62 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v12 + 208));
    if ( *(_BYTE *)(((unsigned __int64)&v62->last_fill_time >> 3) + 0x7FFF8000) )
      v62 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v62->last_fill_time);
    v62->last_fill_time = NowMs;
    common::milog::MiLogStream::create(
      &v96,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "addMonsterTide",
      175);
    v63 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v96, (const char (*)[12])"tide_index:");
    v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, (const unsigned int *)(v12 + 64));
    v65 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v64, (const char (*)[19])" created. pool_id:");
    v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, (const unsigned int *)(v12 + 80));
    v67 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v66, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v68 = operator<<(v67, this->group_);
    v69 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v68, (const char (*)[11])" monsters:");
    v70 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v69,
            (const std::map<unsigned int,unsigned int> *)(v12 + 240));
    v71 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v70, (const char (*)[12])" fill time:");
    v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, (const unsigned int *)(v12 + 160));
    v73 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v72, (const char (*)[13])" fill count:");
    v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, (const unsigned int *)(v12 + 144));
    v75 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])" affix:");
    v76 = common::milog::MiLogStream::operator<<<unsigned int>(v75, affix_set);
    v77 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v76, (const char (*)[8])" total:");
    v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, (const unsigned int *)(v12 + 96));
    v79 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v78, (const char (*)[12])" min_count:");
    v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, (const unsigned int *)(v12 + 112));
    v81 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v80, (const char (*)[12])" max_count:");
    v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, (const unsigned int *)(v12 + 128));
    v83 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v82, (const char (*)[17])" point_array_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, &route_param->point_array_id);
    common::milog::MiLogStream::~MiLogStream(&v96);
    v15 = PoolMonsterTideComp::checkAndAddTideMonster(this, *(_DWORD *)(v12 + 64));
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v12 + 240));
  std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v12 + 208));
LABEL_65:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v12 + 176));
  result = v15;
  if ( v97 == (char *)v12 )
  {
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v12 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v12 = 1172321806LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v12 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 127: range 00000000168D7ED0-00000000168D7F62
ForeachPolicy __cdecl PoolMonsterTideComp::addMonsterTide(unsigned int,unsigned int,PlatformRouteParam const&,std::vector<MonsterScriptConfig> const&,std::set<unsigned int> const&,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,std::map<std::string,float> const&)::{lambda(Player &)#1}::operator()(
        const PoolMonsterTideComp::addMonsterTide::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerGmComp *GmComp; // rax
  bool *is_press_mode; // rdx

  GmComp = Player::getGmComp(player);
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 8u) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_press_mode = __closure->__is_press_mode;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__is_press_mode >> 3) + 0x7FFF8000) != 0
      && ((__int64)__closure->__is_press_mode & 7) >= *(_BYTE *)(((unsigned __int64)__closure->__is_press_mode >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_store1(__closure->__is_press_mode);
    }
    *is_press_mode = 1;
  }
  return 0;
};

// Line 183: range 00000000168D8EEE-00000000168D9288
void __cdecl PoolMonsterTideComp::clear(PoolMonsterTideComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t *v4; // rdx
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>> *__for_range; // [rsp+28h] [rbp-D8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > *v11; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > >::type *tide_index; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > >::type *_; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 18 tide_index_vec:184";
  *(_QWORD *)(v1 + 16) = PoolMonsterTideComp::clear;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
  __for_range = &this->monster_tide_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::begin(&this->monster_tide_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::end(&this->monster_tide_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false,false>::operator*(&__for_begin);
    tide_index = std::get<0ul,unsigned int const,std::shared_ptr<PoolMonsterTide>>(v11);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<PoolMonsterTide>>(v11);
    std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 32), tide_index);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 32);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 32))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PoolMonsterTideComp::delMonsterTide(this, *v4);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::clear(&this->monster_tide_map_);
  if ( std::operator!=<SceneTimer>(0LL, &this->timer_ptr_) )
  {
    v5 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
    common::tools::MiTimer::cancel(v5);
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "clear",
      202);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v14, (const char (*)[16])"clear all tide:");
    common::milog::MiLogStream::operator<<<unsigned int>(v6, (const std::vector<unsigned int> *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  if ( v15 == (char *)v1 )
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

// Line 207: range 00000000168D928A-00000000168D99B0
__int64 __fastcall PoolMonsterTideComp::delMonsterTide(PoolMonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v12; // rax
  std::pair<unsigned int const,unsigned int> *v13; // rdx
  uint32_t v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  __int64 result; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *monster_config_id; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *entity_id; // [rsp+30h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 14 tide_index:206 64 16 13 scene_ptr:208 96 16 20 monster_tide_ptr:215 128 16 15 monster_ptr:224";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::delMonsterTide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = tide_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Group::getScene((const Group *const)(v2 + 64));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "delMonsterTide",
      211);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v28,
           (const char (*)[27])"scene is null, tide_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v8 = -1;
  }
  else
  {
    PoolMonsterTideComp::findPoolMonsterTide((PoolMonsterTideComp *const)(v2 + 96), (__int64)this, *(_DWORD *)(v2 + 48));
    if ( std::operator==<PoolMonsterTide>(0LL, (const std::shared_ptr<PoolMonsterTide> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/pool_monster_tide_comp.cpp",
        "delMonsterTide",
        218);
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v28,
             (const char (*)[38])"monster_tide_ptr is null, tide_index:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v11, this->group_);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v8 = 0;
    }
    else
    {
      __for_range = &std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->cur_point_to_monster_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v12, 8LL);
        }
        __in = *v13;
        monster_config_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
        entity_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
        v14 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        Scene::findEntity<Monster>((const Scene *const)(v2 + 128), v14);
        if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 128)) )
        {
          v15 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          v16 = *(_QWORD *)v15 + 128LL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v15 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, VisionContext *))v16)(v15, &VisionContext::miss_context);
        }
        std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 128));
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::erase(
        &this->monster_tide_map_,
        (const std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::key_type *)(v2 + 48));
      if ( std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::empty(&this->monster_tide_map_)
        && std::operator!=<SceneTimer>(0LL, &this->timer_ptr_) )
      {
        v17 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->timer_ptr_);
        common::tools::MiTimer::cancel(v17);
      }
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/pool_monster_tide_comp.cpp",
        "delMonsterTide",
        240);
      v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v28,
              (const char (*)[27])"removed pool monster tide:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v20, this->group_);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v8 = 0;
    }
    std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 96));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  result = v8;
  if ( v29 == (char *)v2 )
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

// Line 246: range 00000000168D99B2-00000000168DB19B
__int64 __fastcall PoolMonsterTideComp::checkAndAddTideMonster(PoolMonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  unsigned int v8; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::map<unsigned int,unsigned int>::size_type v12; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::map<unsigned int,unsigned int>::size_type v17; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  uint32_t monster_count; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::vector<MonsterScriptConfig>::reference v25; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  bool v27; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::map<std::string,float> *p_server_global_value_map; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rcx
  int v44; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  Monster *v46; // rax
  common::milog::MiLogStream *v47; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  Monster *v49; // rcx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rcx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  std::map<unsigned int,unsigned int> *p_cur_point_to_monster_map; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // rax
  unsigned int *v74; // r8
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v76; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v78; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rdx
  int32_t v83; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rax
  int32_t tide_count; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v89; // rax
  data::MonsterType MonsterType; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rax
  __int64 result; // rax
  uint32_t max_fill_count; // [rsp+14h] [rbp-32Ch]
  uint32_t add_monster_count; // [rsp+18h] [rbp-328h]
  uint32_t delta_index; // [rsp+1Ch] [rbp-324h]
  uint32_t config_id_vec_size; // [rsp+20h] [rbp-320h]
  unsigned int idx; // [rsp+24h] [rbp-31Ch]
  const MonsterScriptConfig *monster_config_ptr; // [rsp+28h] [rbp-318h]
  common::milog::MiLogStream v99; // [rsp+30h] [rbp-310h] BYREF
  char v100[752]; // [rsp+50h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v100;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 4 13 config_id:297 64 4 14 tide_index:245 80 16 20 monster_tide_ptr:247 112 16 15 monster_p"
                        "tr:339 144 16 11 evt_ptr:367 176 80 15 route_param:346 288 352 17 monster_param:317";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::checkAndAddTideMonster;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862728] = -218959118;
  v4[536862740] = -202116109;
  v4[536862741] = -202116109;
  *(_DWORD *)(v2 + 64) = tide_index;
  PoolMonsterTideComp::findPoolMonsterTide((PoolMonsterTideComp *const)(v2 + 80), (__int64)this, *(_DWORD *)(v2 + 64));
  if ( std::operator==<PoolMonsterTide>(0LL, (const std::shared_ptr<PoolMonsterTide> *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v99,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/group/pool_monster_tide_comp.cpp",
      "checkAndAddTideMonster",
      250);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v99,
           (const char (*)[38])"monster_tide_ptr is null, tide_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v99);
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
    config_id_vec_size = std::vector<MonsterScriptConfig>::size(&v9->monster_config_vec);
    if ( config_id_vec_size )
    {
      v10 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v10->fill_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->fill_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v10->fill_type == POOL_MONSTER_TIDE_FILL_ON_TIMER )
        goto LABEL_17;
      v11 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      v12 = std::map<unsigned int,unsigned int>::size(&v11->cur_point_to_monster_map);
      v13 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
      if ( *(_BYTE *)(((unsigned __int64)&v13->min_monster_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v13->min_monster_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v12 < v13->min_monster_count )
      {
LABEL_17:
        v14 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v14->fill_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v14->fill_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        max_fill_count = v14->fill_count;
        v15 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v15->fill_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v15->fill_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( v15->fill_type == POOL_MONSTER_TIDE_FILL_ON_DEATH )
          max_fill_count = 32;
        for ( add_monster_count = 0; add_monster_count < max_fill_count; ++add_monster_count )
        {
          v16 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          v17 = std::map<unsigned int,unsigned int>::size(&v16->cur_point_to_monster_map);
          v18 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v18->max_monster_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->max_monster_count >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v17 >= v18->max_monster_count )
            break;
          v19 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v19->monster_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v19 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->monster_count >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          monster_count = v19->monster_count;
          v21 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v21->total_monster_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->total_monster_count >> 3)
                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( monster_count >= v21->total_monster_count )
          {
            PoolMonsterTideComp::finishPoolMonsterTide(this, *(_DWORD *)(v2 + 64));
            v8 = 0;
            goto LABEL_120;
          }
          monster_config_ptr = 0LL;
          for ( delta_index = 0; delta_index < config_id_vec_size; ++delta_index )
          {
            v22 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v22->index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v22->index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            idx = (v22->index + delta_index) % config_id_vec_size;
            v23 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( idx >= std::vector<MonsterScriptConfig>::size(&v23->monster_config_vec) )
              break;
            v24 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            v25 = std::vector<MonsterScriptConfig>::operator[](&v24->monster_config_vec, idx);
            if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 48) = v25->config_id;
            v26 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                    &v26->cur_point_to_monster_map,
                    (const unsigned int *)(v2 + 48)) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Group::findEntityByConfigId<Monster>((Group *const)(v2 + 144), (uint32_t)this->group_);
              v27 = std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 144));
              std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 144));
              if ( v27 )
              {
                v28 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                monster_config_ptr = std::vector<MonsterScriptConfig>::operator[](&v28->monster_config_vec, idx);
                v29 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                if ( *(_BYTE *)(((unsigned __int64)&v29->index >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v29->index >> 3) + 0x7FFF8000) <= 3 )
                {
                  v29 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v29->index);
                }
                v29->index = (idx + 1) % config_id_vec_size;
                break;
              }
            }
          }
          if ( !monster_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v99,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/group/pool_monster_tide_comp.cpp",
              "checkAndAddTideMonster",
              312);
            v30 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v99,
                    (const char (*)[47])"cannot found valid monster config, tide_index:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    (const unsigned int *)(v2 + 64));
            v32 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v31, (const char (*)[8])" group:");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v32, this->group_);
            common::milog::MiLogStream::~MiLogStream(&v99);
            break;
          }
          MonsterParam::MonsterParam((MonsterParam *const)(v2 + 288));
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->title_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->title_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 488) = monster_config_ptr->title_id;
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->special_name_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_ptr - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->special_name_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 492) = monster_config_ptr->special_name_id;
          v33 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&v33->monster_pool_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v33->monster_pool_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 528) = v33->monster_pool_id;
          if ( *(_BYTE *)(((unsigned __int64)monster_config_ptr >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)monster_config_ptr >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 292) = monster_config_ptr->config_id;
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->monster_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->monster_id >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 288) = monster_config_ptr->monster_id;
          if ( *(char *)(((unsigned __int64)&monster_config_ptr->pos >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&monster_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)monster_config_ptr + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&monster_config_ptr->pos.z
                                                                              + 3) >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load_n(&monster_config_ptr->pos, 12LL);
          }
          *(_QWORD *)(v2 + 300) = *(_QWORD *)&monster_config_ptr->pos.x;
          *(float *)(v2 + 308) = monster_config_ptr->pos.z;
          if ( (((unsigned __int8)monster_config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->rot >> 3)
                                                                            + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&monster_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)monster_config_ptr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&monster_config_ptr->rot.z
                                                                              + 3) >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load_n(&monster_config_ptr->rot, 12LL);
          }
          *(_QWORD *)(v2 + 312) = *(_QWORD *)&monster_config_ptr->rot.x;
          *(float *)(v2 + 320) = monster_config_ptr->rot.z;
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 328) = monster_config_ptr->level;
          v34 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( !std::set<unsigned int>::empty(&v34->affix_set) )
          {
            v35 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v2 + 384), &v35->affix_set);
          }
          else
          {
            std::set<unsigned int>::operator=((std::set<unsigned int> *const)(v2 + 384), &monster_config_ptr->affix_set);
          }
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->pose_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->pose_id >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 496) = monster_config_ptr->pose_id;
          if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->ai_config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)monster_config_ptr - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->ai_config_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 532) = monster_config_ptr->ai_config_id;
          v36 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
          if ( std::map<std::string,float>::empty(&v36->server_global_value_map) )
            p_server_global_value_map = &monster_config_ptr->server_global_value_map;
          else
            p_server_global_value_map = &std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->server_global_value_map;
          std::map<std::string,float>::operator=(
            (std::map<std::string,float> *const)(v2 + 536),
            p_server_global_value_map);
          if ( *(char *)(((unsigned __int64)&monster_config_ptr->is_light_config >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&monster_config_ptr->is_light_config);
          *(_BYTE *)(v2 + 616) = monster_config_ptr->is_light_config;
          if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Group::createMonster((Group *const)(v2 + 112), (MonsterParam *)this->group_);
          if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v2 + 112)) )
          {
            common::milog::MiLogStream::create(
              &v99,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/group/pool_monster_tide_comp.cpp",
              "checkAndAddTideMonster",
              342);
            v38 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v99,
                    (const char (*)[37])"failed to create monster config_id: ");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v2 + 292));
            v40 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v39,
                    (const char (*)[13])" from pool: ");
            v41 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &v41->monster_pool_id);
            v43 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v42, (const char (*)[8])" group:");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v43, this->group_);
            common::milog::MiLogStream::~MiLogStream(&v99);
            v44 = 0;
          }
          else
          {
            v45 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            PlatformRouteParam::PlatformRouteParam((PlatformRouteParam *const)(v2 + 176), &v45->platform_route_param);
            if ( *(_DWORD *)(v2 + 176) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->speed_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&monster_config_ptr->speed_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 248) = monster_config_ptr->speed_level;
              v46 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              if ( Monster::setupMonsterRoute(v46, (PlatformRouteParam *)(v2 + 176), 1) )
              {
                common::milog::MiLogStream::create(
                  &v99,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/group/pool_monster_tide_comp.cpp",
                  "checkAndAddTideMonster",
                  352);
                v47 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        &v99,
                        (const char (*)[40])"setupMonsterRoute fail, point_array_id:");
                v48 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v47,
                  &v48->platform_route_param.point_array_id);
                common::milog::MiLogStream::~MiLogStream(&v99);
              }
            }
            v49 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            if ( *(_BYTE *)(((unsigned __int64)&monster_config_ptr->kill_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)monster_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&monster_config_ptr->kill_score >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            Monster::setKillScore(v49, monster_config_ptr->kill_score);
            common::milog::MiLogStream::create(
              &v99,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/group/pool_monster_tide_comp.cpp",
              "checkAndAddTideMonster",
              357);
            v50 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v99,
                    (const char (*)[26])"create monster_config_id:");
            v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v50,
                    (const unsigned int *)(v2 + 292));
            v52 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v51, (const char (*)[6])" map:");
            v53 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            v54 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v52, &v53->cur_point_to_monster_map);
            v55 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v54,
                    (const char (*)[14])" monster_id: ");
            v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v55,
                    (const unsigned int *)(v2 + 288));
            v57 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v56,
                    (const char (*)[13])" tide_index:");
            v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v57,
                    (const unsigned int *)(v2 + 64));
            v59 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v58, (const char (*)[8])" group:");
            if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v60 = operator<<(v59, this->group_);
            v61 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v60,
                    (const char (*)[13])" kill_score:");
            v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v61,
                    &monster_config_ptr->kill_score);
            v63 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v62, (const char (*)[5])" AI:");
            v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v63,
                    (const unsigned int *)(v2 + 532));
            v65 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v64, (const char (*)[10])" pool_id:");
            v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v65,
                    (const unsigned int *)(v2 + 528));
            v67 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v66,
                    (const char (*)[12])" affix_set:");
            v68 = common::milog::MiLogStream::operator<<<unsigned int>(v67, (const std::set<unsigned int> *)(v2 + 384));
            v69 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v68, (const char (*)[10])" sgv_map:");
            v70 = common::milog::MiLogStream::operator<<<std::string,float>(
                    v69,
                    (const std::map<std::string,float> *)(v2 + 536));
            v71 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v70,
                    (const char (*)[18])" is_light_config:");
            common::milog::MiLogStream::operator<<(v71, *(_BYTE *)(v2 + 616));
            common::milog::MiLogStream::~MiLogStream(&v99);
            p_cur_point_to_monster_map = &std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80))->cur_point_to_monster_map;
            v73 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
            *(_DWORD *)(v2 + 48) = Entity::getEntityId((const Entity *const)v73);
            std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int>(
              p_cur_point_to_monster_map,
              (unsigned int *)(v2 + 292),
              (unsigned int *)(v2 + 48),
              (unsigned int *)(v2 + 292),
              v74);
            v75 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v75->monster_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)v75 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v75->monster_count >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++v75->monster_count;
            v76 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
            if ( *(_BYTE *)(((unsigned __int64)&v76->tide_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&v76->tide_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            v76->tide_count += add_monster_count == 0;
            EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 144), 67);
            if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 144), 0LL) )
            {
              std::to_string((std::string *)&v99, *(_DWORD *)(v2 + 64));
              v77 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              std::string::operator=(&v77->source_name, &v99);
              std::string::~string(&v99);
              v78 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              EntityId = Entity::getEntityId((const Entity *const)v78);
              v80 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              p_source_entity_id = &v80->source_entity_id;
              if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                                     + 0x7FFF8000) )
              {
                __asan_report_store4(p_source_entity_id);
              }
              v80->source_entity_id = EntityId;
              v82 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&v82->monster_count >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)v82 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v82->monster_count >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v83 = v82->monster_count;
              v84 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              p_param1 = &v84->param1;
              if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store4(p_param1);
              }
              v84->param1 = v83;
              v86 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&v86->tide_count >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v86->tide_count >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              tide_count = v86->tide_count;
              v88 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              if ( *(_BYTE *)(((unsigned __int64)&v88->param2 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v88->param2 >> 3) + 0x7FFF8000) <= 3 )
              {
                v88 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v88->param2);
              }
              v88->param2 = tide_count;
              v89 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
              MonsterType = Monster::getMonsterType(v89);
              v91 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
              if ( *(_BYTE *)(((unsigned __int64)&v91->param4 >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v91->param4 >> 3) + 0x7FFF8000) <= 3 )
              {
                v91 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v91->param4);
              }
              v91->param4 = MonsterType;
              if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Group::handleEvent(this->group_, (EventPtr *)(v2 + 144));
            }
            std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 144));
            PlatformRouteParam::~PlatformRouteParam((PlatformRouteParam *const)(v2 + 176));
            v44 = 1;
          }
          std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v2 + 112));
          MonsterParam::~MonsterParam((MonsterParam *const)(v2 + 288));
          if ( v44 != 1 )
            break;
        }
        v8 = 0;
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = -1;
    }
  }
LABEL_120:
  std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 80));
  result = v8;
  if ( v100 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 384: range 00000000168DB19C-00000000168DB939
void __cdecl PoolMonsterTideComp::onGroupMonsterDie(PoolMonsterTideComp *const this, Monster *monster)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t EntityId; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rdx
  uint32_t *p_source_entity_id; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  uint32_t monster_count; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t v22; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  int32_t *p_param1; // rax
  data::MonsterType MonsterType; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rdx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  char v29; // al
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rdx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > *v36; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > >::type *cur_tide_index; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > >::type *monster_tide_ptr; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v39; // [rsp+40h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 21 monster_config_id:385 48 4 14 tide_index:386 64 16 20 monster_tide_ptr:400 96 16 11 evt_ptr:411";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::onGroupMonsterDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 32) = Entity::getConfigId((const Entity *const)monster);
  *(_DWORD *)(v2 + 48) = 0;
  __for_range = &this->monster_tide_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::begin(&this->monster_tide_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PoolMonsterTide>>::end(&this->monster_tide_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false,false>::operator*(&__for_begin);
    cur_tide_index = std::get<0ul,unsigned int const,std::shared_ptr<PoolMonsterTide>>(v36);
    monster_tide_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<PoolMonsterTide>>(v36);
    if ( !std::operator==<PoolMonsterTide>(0LL, monster_tide_ptr) )
    {
      v5 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)monster_tide_ptr);
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
             &v5->cur_point_to_monster_map,
             (const unsigned int *)(v2 + 32)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)cur_tide_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)cur_tide_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cur_tide_index >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *cur_tide_index;
        break;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PoolMonsterTide>>,false,false>::operator++(&__for_begin);
  }
  PoolMonsterTideComp::findPoolMonsterTide((PoolMonsterTideComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( !std::operator==<PoolMonsterTide>(0LL, (const std::shared_ptr<PoolMonsterTide> *)(v2 + 64)) )
  {
    v6 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    std::map<unsigned int,unsigned int>::erase(
      &v6->cur_point_to_monster_map,
      (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "onGroupMonsterDie",
      407);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v39,
           (const char (*)[25])"erase monster_config_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" map:");
    v10 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v11 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v9, &v10->cur_point_to_monster_map);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" tide_index:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v14, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v39);
    EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 96), 68);
    if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 96), 0LL) )
    {
      std::to_string((std::string *)&v39, *(_DWORD *)(v2 + 48));
      v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      std::string::operator=(&v15->source_name, &v39);
      std::string::~string(&v39);
      EntityId = Entity::getEntityId((const Entity *const)monster);
      v17 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_source_entity_id = &v17->source_entity_id;
      if ( *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_source_entity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_source_entity_id >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(p_source_entity_id);
      }
      v17->source_entity_id = EntityId;
      v19 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v19->monster_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v19 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->monster_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      monster_count = v19->monster_count;
      v21 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v22 = monster_count - std::map<unsigned int,unsigned int>::size(&v21->cur_point_to_monster_map);
      v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      p_param1 = &v23->param1;
      if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_param1);
      }
      v23->param1 = v22;
      MonsterType = Monster::getMonsterType(monster);
      v26 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v26->param4 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v26->param4 >> 3) + 0x7FFF8000) <= 3 )
      {
        v26 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v26->param4);
      }
      v26->param4 = MonsterType;
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Group::handleEvent(this->group_, (EventPtr *)(v2 + 96));
    }
    v27 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v27->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v27 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v27->state != POOL_MONSTER_TIDE_NORMAL )
      goto LABEL_34;
    v28 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v28->fill_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v28->fill_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v28->fill_type )
LABEL_34:
      v29 = 0;
    else
      v29 = 1;
    if ( v29 )
      PoolMonsterTideComp::checkAndAddTideMonster(this, *(_DWORD *)(v2 + 48));
    v30 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v30->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v30 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v30->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v30->state == POOL_MONSTER_TIDE_FINISHED )
    {
      v31 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( std::map<unsigned int,unsigned int>::empty(&v31->cur_point_to_monster_map) )
        PoolMonsterTideComp::delMonsterTide(this, *(_DWORD *)(v2 + 48));
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 96));
  }
  std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 64));
  if ( v40 == (char *)v2 )
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

// Line 434: range 00000000168DB93A-00000000168DBF93
__int64 __fastcall PoolMonsterTideComp::finishPoolMonsterTide(PoolMonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  PoolMonsterTideState *p_state; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rdx
  uint32_t monster_count; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  int32_t v17; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rcx
  __int64 result; // rax
  common::milog::MiLogStream v25; // [rsp+10h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 tide_index:433 64 16 20 monster_tide_ptr:435 96 16 11 evt_ptr:450";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::finishPoolMonsterTide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = tide_index;
  PoolMonsterTideComp::findPoolMonsterTide((PoolMonsterTideComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<PoolMonsterTide>(0LL, (const std::shared_ptr<PoolMonsterTide> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "finishPoolMonsterTide",
      438);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v25,
           (const char (*)[38])"monster_tide_ptr is null, tide_index:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v6, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v7, this->group_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_29;
  }
  v8 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( v8->state == POOL_MONSTER_TIDE_FINISHED )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "finishPoolMonsterTide",
      444);
    v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v25,
           (const char (*)[43])"monster_tide already finished, tide_index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" group:");
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  v11 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  p_state = &v11->state;
  if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(p_state);
  }
  v11->state = POOL_MONSTER_TIDE_FINISHED;
  EventUtil::createEvent((std::shared_ptr<Event> *)(v2 + 96), 66);
  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v2 + 96), 0LL) )
  {
    std::to_string((std::string *)&v25, *(_DWORD *)(v2 + 48));
    v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    std::string::operator=(&v13->source_name, &v25);
    std::string::~string(&v25);
    v14 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v14->monster_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->monster_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    monster_count = v14->monster_count;
    v16 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v17 = monster_count - std::map<unsigned int,unsigned int>::size(&v16->cur_point_to_monster_map);
    v18 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    p_param1 = &v18->param1;
    if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(p_param1);
    }
    v18->param1 = v17;
    if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Group::handleEvent(this->group_, (EventPtr *)(v2 + 96));
  }
  v20 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( std::map<unsigned int,unsigned int>::empty(&v20->cur_point_to_monster_map) )
    PoolMonsterTideComp::delMonsterTide(this, *(_DWORD *)(v2 + 48));
  common::milog::MiLogStream::create(
    &v25,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/group/pool_monster_tide_comp.cpp",
    "finishPoolMonsterTide",
    463);
  v21 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          &v25,
          (const char (*)[26])"finish pool monster tide:");
  v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
  v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v22, (const char (*)[8])" group:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v23, this->group_);
  common::milog::MiLogStream::~MiLogStream(&v25);
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 96));
LABEL_29:
  std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 64));
  result = 0LL;
  if ( v26 == (char *)v2 )
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

// Line 470: range 00000000168DBF94-00000000168DC448
__int64 __fastcall PoolMonsterTideComp::pauseMonsterTide(PoolMonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  PoolMonsterTideState *p_state; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint64_t NowMs; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  __int64 result; // rax
  common::milog::MiLogStream v22; // [rsp+10h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 tide_index:469 64 16 20 monster_tide_ptr:471";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::pauseMonsterTide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = tide_index;
  PoolMonsterTideComp::findPoolMonsterTide((PoolMonsterTideComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<PoolMonsterTide>(0LL, (const std::shared_ptr<PoolMonsterTide> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "pauseMonsterTide",
      474);
    v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v22, (const char (*)[13])"tide_index: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" not found.");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v8->state == POOL_MONSTER_TIDE_NORMAL )
    {
      v15 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_state = &v15->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_state);
      }
      v15->state = POOL_MONSTER_TIDE_PAUSED;
      v17 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v17->fill_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->fill_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v17->fill_type == POOL_MONSTER_TIDE_FILL_ON_TIMER )
      {
        NowMs = common::tools::TimeUtils::getNowMs();
        v19 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v19->pause_time >> 3) + 0x7FFF8000) )
          v19 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v19->pause_time);
        v19->pause_time = NowMs;
      }
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/pool_monster_tide_comp.cpp",
        "pauseMonsterTide",
        489);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v22, (const char (*)[14])"paused tide: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        0x10u,
        "./src/group/pool_monster_tide_comp.cpp",
        "pauseMonsterTide",
        480);
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v22,
             (const char (*)[20])"monster tide state:");
      v10 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v11 = common::milog::MiLogStream::operator<<<PoolMonsterTideState,(PoolMonsterTideState*)0>(v9, &v10->state);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" tide_index:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v14, this->group_);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v7 = -1;
    }
  }
  std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 64));
  result = v7;
  if ( v23 == (char *)v2 )
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

// Line 495: range 00000000168DC44A-00000000168DCAAE
__int64 __fastcall PoolMonsterTideComp::resumeMonsterTide(PoolMonsterTideComp *const this, uint32_t tide_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rdx
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  PoolMonsterTideState *p_state; // rax
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  uint64_t v20; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rdx
  std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // rax
  __int64 result; // rax
  bool is_need_check; // [rsp+17h] [rbp-B9h]
  uint64_t now_ms; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v30; // [rsp+20h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 tide_index:494 64 16 20 monster_tide_ptr:496";
  *(_QWORD *)(v2 + 16) = PoolMonsterTideComp::resumeMonsterTide;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = tide_index;
  PoolMonsterTideComp::findPoolMonsterTide((PoolMonsterTideComp *const)(v2 + 64), (__int64)this, *(_DWORD *)(v2 + 48));
  if ( std::operator==<PoolMonsterTide>(0LL, (const std::shared_ptr<PoolMonsterTide> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/group/pool_monster_tide_comp.cpp",
      "resumeMonsterTide",
      499);
    v5 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v30, (const char (*)[13])"tide_index: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" not found.");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v8 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v8->state == POOL_MONSTER_TIDE_PAUSED )
    {
      is_need_check = 1;
      v15 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_state = &v15->state;
      if ( *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_state >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_state);
      }
      v15->state = POOL_MONSTER_TIDE_NORMAL;
      v17 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v17->fill_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->fill_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( v17->fill_type == POOL_MONSTER_TIDE_FILL_ON_TIMER )
      {
        now_ms = common::tools::TimeUtils::getNowMs();
        v18 = (__int64)std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)(v18 + 328) >> 3) + 0x7FFF8000) )
          v18 = __asan_report_load8();
        if ( now_ms >= *(_QWORD *)(v18 + 328) )
        {
          v19 = (__int64)std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)(v19 + 328) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8();
          v20 = now_ms - *(_QWORD *)(v19 + 328);
          v21 = (__int64)std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)(v21 + 312) >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8();
          *(_QWORD *)(v21 + 312) += v20;
        }
        v22 = (__int64)std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)(v22 + 312) >> 3) + 0x7FFF8000) )
          v22 = __asan_report_load8();
        v23 = *(_QWORD *)(v22 + 312);
        v24 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v24->fill_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v24 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->fill_time >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( now_ms >= v23 + 1000 * (unsigned __int64)v24->fill_time )
        {
          v25 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v25->last_fill_time >> 3) + 0x7FFF8000) )
            v25 = (std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store8(&v25->last_fill_time);
          v25->last_fill_time = now_ms;
        }
        else
        {
          is_need_check = 0;
        }
      }
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/group/pool_monster_tide_comp.cpp",
        "resumeMonsterTide",
        528);
      v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v30, (const char (*)[14])"resume tide: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      if ( is_need_check )
        v7 = PoolMonsterTideComp::checkAndAddTideMonster(this, *(_DWORD *)(v2 + 48));
      else
        v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        0x10u,
        "./src/group/pool_monster_tide_comp.cpp",
        "resumeMonsterTide",
        505);
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             &v30,
             (const char (*)[20])"monster tide state:");
      v10 = std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PoolMonsterTide,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v11 = common::milog::MiLogStream::operator<<<PoolMonsterTideState,(PoolMonsterTideState*)0>(v9, &v10->state);
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" tide_index:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" group:");
      if ( *(_BYTE *)(((unsigned __int64)&this->group_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v14, this->group_);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v7 = -1;
    }
  }
  std::shared_ptr<PoolMonsterTide>::~shared_ptr((std::shared_ptr<PoolMonsterTide> *const)(v2 + 64));
  result = v7;
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
  return result;
};

// Line 534: range 00000000168FDBDC-00000000168FDBF0
void __cdecl GLOBAL__sub_I_merge_merge_home_picture_frame_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 534: range 00000000168FD5D0-00000000168FDBDB
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  const char *v17; // rcx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  const char *v24; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_home_picture_frame_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::system_category);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::netdb_category);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::addrinfo_category);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(&boost::asio::error::misc_category);
      boost::asio::error::misc_category = misc_category;
      v11 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v11 )
      {
        v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v12 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v13 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v14 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v15 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v15 )
      {
        v16 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v16 = 1;
        v17 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v17;
      }
      v18 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v19 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v20 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v21 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v23 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v24;
      }
    }
    __asan_after_dynamic_init();
  }
};
