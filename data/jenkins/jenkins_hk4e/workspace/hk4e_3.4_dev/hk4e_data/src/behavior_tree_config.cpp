// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/behavior_tree_config.cpp

// Line 25: range 000000000CCAC57B-000000000CCACDB2
bool __cdecl data::enumStrToVal(const std::string *s, data::BehaviorConfigSortType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BehaviorConfigSortType> *i; // r14
  unsigned __int64 v7; // rax
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigSortType> >::pointer v10; // rax
  data::BehaviorConfigSortType second; // ecx
  char v12[464]; // [rsp+20h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 5 it:36 144 8 9 <unk"
                        "nown> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "enumStrToVal",
      28);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BehaviorConfigSortType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BehaviorConfigSortType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::BehaviorConfigSortType>::pair<char const(&)[40],data::BehaviorConfigSortType,true>(
        (std::pair<const std::string,data::BehaviorConfigSortType> *const)(v2 + 304),
        (const char (*)[40])"BEHAVIOR_CONFIG_SORT_TYPE_FETCHED_ORDER",
        (data::BehaviorConfigSortType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96);
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::BehaviorConfigSortType>::pair<char const(&)[37],data::BehaviorConfigSortType,true>(
        (std::pair<const std::string,data::BehaviorConfigSortType> *const)(v2 + 344),
        (const char (*)[37])"BEHAVIOR_CONFIG_SORT_TYPE_TOTAL_COST",
        (data::BehaviorConfigSortType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::BehaviorConfigSortType>>::allocator((std::allocator<std::pair<const std::string,data::BehaviorConfigSortType> > *const)(v2 + 64));
      std::map<std::string,data::BehaviorConfigSortType>::map(
        &data::enumStrToVal(std::string const&,data::BehaviorConfigSortType &)::m,
        (std::initializer_list<std::pair<const std::string,data::BehaviorConfigSortType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::BehaviorConfigSortType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BehaviorConfigSortType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BehaviorConfigSortType>::~map,
        &data::enumStrToVal(std::string const&,data::BehaviorConfigSortType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BehaviorConfigSortType>>::~allocator((std::allocator<std::pair<const std::string,data::BehaviorConfigSortType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BehaviorConfigSortType> *)(v2 + 384);
            i != (std::pair<const std::string,data::BehaviorConfigSortType> *)(v2 + 304);
            std::pair<std::string const,data::BehaviorConfigSortType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 304) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::BehaviorConfigSortType>::iterator *)(v2 + 112) = std::map<std::string,data::BehaviorConfigSortType>::find(
                                                                                    &data::enumStrToVal(std::string const&,data::BehaviorConfigSortType &)::m,
                                                                                    s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::BehaviorConfigSortType>::iterator *)(v2 + 144) = std::map<std::string,data::BehaviorConfigSortType>::end(&data::enumStrToVal(std::string const&,data::BehaviorConfigSortType &)::m);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigSortType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigSortType> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/behavior_tree_config.cpp",
        "enumStrToVal",
        39);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 240),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::BehaviorConfigSortType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigSortType> > *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(e);
      }
      *e = second;
      result = 1;
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 47: range 000000000CCACDB3-000000000CCAD8BB
bool __cdecl data::enumStrToVal(const std::string *s, data::ActionPlanPriorReviseType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ActionPlanPriorReviseType> *i; // r14
  unsigned __int64 v7; // rax
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPlanPriorReviseType> >::pointer v10; // rax
  data::ActionPlanPriorReviseType second; // ecx
  char v12[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 8 5 it:62 208 8 9 <unknown> 240 32 9 <unknown"
                        "> 304 32 9 <unknown> 368 240 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = 61956;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862739] = -202116109;
  v4[536862740] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 240, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 240),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "enumStrToVal",
      50);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 240),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ActionPlanPriorReviseType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionPlanPriorReviseType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ActionPlanPriorReviseType>::pair<char const(&)[5],data::ActionPlanPriorReviseType,true>(
        (std::pair<const std::string,data::ActionPlanPriorReviseType> *const)(v2 + 368),
        (const char (*)[5])"NONE",
        (data::ActionPlanPriorReviseType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ActionPlanPriorReviseType>::pair<char const(&)[8],data::ActionPlanPriorReviseType,true>(
        (std::pair<const std::string,data::ActionPlanPriorReviseType> *const)(v2 + 408),
        (const char (*)[8])"SPECIFY",
        (data::ActionPlanPriorReviseType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112);
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::ActionPlanPriorReviseType>::pair<char const(&)[9],data::ActionPlanPriorReviseType,true>(
        (std::pair<const std::string,data::ActionPlanPriorReviseType> *const)(v2 + 448),
        (const char (*)[9])"RECHARGE",
        (data::ActionPlanPriorReviseType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128);
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::ActionPlanPriorReviseType>::pair<char const(&)[5],data::ActionPlanPriorReviseType,true>(
        (std::pair<const std::string,data::ActionPlanPriorReviseType> *const)(v2 + 488),
        (const char (*)[5])"SAME",
        (data::ActionPlanPriorReviseType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144);
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::ActionPlanPriorReviseType>::pair<char const(&)[10],data::ActionPlanPriorReviseType,true>(
        (std::pair<const std::string,data::ActionPlanPriorReviseType> *const)(v2 + 528),
        (const char (*)[10])"COST_VOID",
        (data::ActionPlanPriorReviseType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160);
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::ActionPlanPriorReviseType>::pair<char const(&)[4],data::ActionPlanPriorReviseType,true>(
        (std::pair<const std::string,data::ActionPlanPriorReviseType> *const)(v2 + 568),
        (const char (*)[4])off_1A16FA80,
        (data::ActionPlanPriorReviseType *)(v2 + 160));
      std::allocator<std::pair<std::string const,data::ActionPlanPriorReviseType>>::allocator((std::allocator<std::pair<const std::string,data::ActionPlanPriorReviseType> > *const)(v2 + 64));
      std::map<std::string,data::ActionPlanPriorReviseType>::map(
        &data::enumStrToVal(std::string const&,data::ActionPlanPriorReviseType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ActionPlanPriorReviseType> >)__PAIR128__(6LL, v2 + 368),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ActionPlanPriorReviseType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ActionPlanPriorReviseType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ActionPlanPriorReviseType>::~map,
        &data::enumStrToVal(std::string const&,data::ActionPlanPriorReviseType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ActionPlanPriorReviseType>>::~allocator((std::allocator<std::pair<const std::string,data::ActionPlanPriorReviseType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ActionPlanPriorReviseType> *)(v2 + 608);
            i != (std::pair<const std::string,data::ActionPlanPriorReviseType> *)(v2 + 368);
            std::pair<std::string const,data::ActionPlanPriorReviseType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 368) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_DWORD *)(v7 + 24) = -117901064;
      *(_WORD *)(v7 + 28) = -1800;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::ActionPlanPriorReviseType>::iterator *)(v2 + 176) = std::map<std::string,data::ActionPlanPriorReviseType>::find(
                                                                                       &data::enumStrToVal(std::string const&,data::ActionPlanPriorReviseType &)::m,
                                                                                       s);
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::ActionPlanPriorReviseType>::iterator *)(v2 + 208) = std::map<std::string,data::ActionPlanPriorReviseType>::end(&data::enumStrToVal(std::string const&,data::ActionPlanPriorReviseType &)::m);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPlanPriorReviseType> >::_Self *)(v2 + 176),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPlanPriorReviseType> >::_Self *)(v2 + 208));
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/behavior_tree_config.cpp",
        "enumStrToVal",
        65);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 304),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ActionPlanPriorReviseType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ActionPlanPriorReviseType> > *const)(v2 + 176));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(e);
      }
      *e = second;
      result = 1;
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 73: range 000000000CCAD8BC-000000000CCAE0F3
bool __cdecl data::enumStrToVal(const std::string *s, data::BehaviorConfigChangeCharacterSortType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> *i; // r14
  unsigned __int64 v7; // rax
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> >::pointer v10; // rax
  data::BehaviorConfigChangeCharacterSortType second; // ecx
  char v12[464]; // [rsp+20h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 5 it:84 144 8 9 <unk"
                        "nown> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = 61956;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862732] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 47) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 176, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 176),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "enumStrToVal",
      76);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BehaviorConfigChangeCharacterSortType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BehaviorConfigChangeCharacterSortType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::BehaviorConfigChangeCharacterSortType>::pair<char const(&)[50],data::BehaviorConfigChangeCharacterSortType,true>(
        (std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> *const)(v2 + 304),
        (const char (*)[50])"BEHAVIOR_CONFIG_CHANGE_CHARACTER_SORT_TYPE_MAX_HP",
        (data::BehaviorConfigChangeCharacterSortType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96);
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::BehaviorConfigChangeCharacterSortType>::pair<char const(&)[59],data::BehaviorConfigChangeCharacterSortType,true>(
        (std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> *const)(v2 + 344),
        (const char (*)[59])"BEHAVIOR_CONFIG_CHANGE_CHARACTER_SORT_TYPE_PROTECTED_PRIOR",
        (data::BehaviorConfigChangeCharacterSortType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::BehaviorConfigChangeCharacterSortType>>::allocator((std::allocator<std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> > *const)(v2 + 64));
      std::map<std::string,data::BehaviorConfigChangeCharacterSortType>::map(
        &data::enumStrToVal(std::string const&,data::BehaviorConfigChangeCharacterSortType &)::m,
        (std::initializer_list<std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::BehaviorConfigChangeCharacterSortType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BehaviorConfigChangeCharacterSortType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BehaviorConfigChangeCharacterSortType>::~map,
        &data::enumStrToVal(std::string const&,data::BehaviorConfigChangeCharacterSortType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BehaviorConfigChangeCharacterSortType>>::~allocator((std::allocator<std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> *)(v2 + 384);
            i != (std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> *)(v2 + 304);
            std::pair<std::string const,data::BehaviorConfigChangeCharacterSortType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 304) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_WORD *)(v7 + 8) = -1800;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::BehaviorConfigChangeCharacterSortType>::iterator *)(v2 + 112) = std::map<std::string,data::BehaviorConfigChangeCharacterSortType>::find(
                                                                                                   &data::enumStrToVal(std::string const&,data::BehaviorConfigChangeCharacterSortType &)::m,
                                                                                                   s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::BehaviorConfigChangeCharacterSortType>::iterator *)(v2 + 144) = std::map<std::string,data::BehaviorConfigChangeCharacterSortType>::end(&data::enumStrToVal(std::string const&,data::BehaviorConfigChangeCharacterSortType &)::m);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 111) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/behavior_tree_config.cpp",
        "enumStrToVal",
        87);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 240),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::BehaviorConfigChangeCharacterSortType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BehaviorConfigChangeCharacterSortType> > *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(e);
      }
      *e = second;
      result = 1;
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 95: range 000000000CCAE0F4-000000000CCAEA78
bool __cdecl data::enumStrToVal(const std::string *s, data::CharacterOnstagePriorReviseType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CharacterOnstagePriorReviseType> *i; // r14
  _DWORD *v7; // rax
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CharacterOnstagePriorReviseType> >::pointer v10; // rax
  data::CharacterOnstagePriorReviseType second; // ecx
  char v12[592]; // [rsp+20h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 8 6 it:108 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862735] = -202116109;
  v4[536862736] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "enumStrToVal",
      98);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CharacterOnstagePriorReviseType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CharacterOnstagePriorReviseType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::CharacterOnstagePriorReviseType>::pair<char const(&)[5],data::CharacterOnstagePriorReviseType,true>(
        (std::pair<const std::string,data::CharacterOnstagePriorReviseType> *const)(v2 + 320),
        (const char (*)[5])"NONE",
        (data::CharacterOnstagePriorReviseType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::CharacterOnstagePriorReviseType>::pair<char const(&)[15],data::CharacterOnstagePriorReviseType,true>(
        (std::pair<const std::string,data::CharacterOnstagePriorReviseType> *const)(v2 + 360),
        (const char (*)[15])"AVAILABLE_COST",
        (data::CharacterOnstagePriorReviseType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96);
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::CharacterOnstagePriorReviseType>::pair<char const(&)[8],data::CharacterOnstagePriorReviseType,true>(
        (std::pair<const std::string,data::CharacterOnstagePriorReviseType> *const)(v2 + 400),
        (const char (*)[8])"REST_HP",
        (data::CharacterOnstagePriorReviseType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112);
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::CharacterOnstagePriorReviseType>::pair<char const(&)[16],data::CharacterOnstagePriorReviseType,true>(
        (std::pair<const std::string,data::CharacterOnstagePriorReviseType> *const)(v2 + 440),
        (const char (*)[16])"PROTECTED_PRIOR",
        (data::CharacterOnstagePriorReviseType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::CharacterOnstagePriorReviseType>>::allocator((std::allocator<std::pair<const std::string,data::CharacterOnstagePriorReviseType> > *const)(v2 + 48));
      std::map<std::string,data::CharacterOnstagePriorReviseType>::map(
        &data::enumStrToVal(std::string const&,data::CharacterOnstagePriorReviseType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CharacterOnstagePriorReviseType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::CharacterOnstagePriorReviseType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CharacterOnstagePriorReviseType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CharacterOnstagePriorReviseType>::~map,
        &data::enumStrToVal(std::string const&,data::CharacterOnstagePriorReviseType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CharacterOnstagePriorReviseType>>::~allocator((std::allocator<std::pair<const std::string,data::CharacterOnstagePriorReviseType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CharacterOnstagePriorReviseType> *)(v2 + 480);
            i != (std::pair<const std::string,data::CharacterOnstagePriorReviseType> *)(v2 + 320);
            std::pair<std::string const,data::CharacterOnstagePriorReviseType>::~pair(i) )
      {
        --i;
      }
      v7 = (_DWORD *)(((v2 + 320) >> 3) + 2147450880);
      *v7 = -117901064;
      v7[1] = -117901064;
      v7[2] = -117901064;
      v7[3] = -117901064;
      v7[4] = -117901064;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::CharacterOnstagePriorReviseType>::iterator *)(v2 + 128) = std::map<std::string,data::CharacterOnstagePriorReviseType>::find(
                                                                                             &data::enumStrToVal(std::string const&,data::CharacterOnstagePriorReviseType &)::m,
                                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::map<std::string,data::CharacterOnstagePriorReviseType>::iterator *)(v2 + 160) = std::map<std::string,data::CharacterOnstagePriorReviseType>::end(&data::enumStrToVal(std::string const&,data::CharacterOnstagePriorReviseType &)::m);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CharacterOnstagePriorReviseType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CharacterOnstagePriorReviseType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/behavior_tree_config.cpp",
        "enumStrToVal",
        111);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::CharacterOnstagePriorReviseType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CharacterOnstagePriorReviseType> > *const)(v2 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      if ( *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)e & 7) + 3) >= *(_BYTE *)(((unsigned __int64)e >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(e);
      }
      *e = second;
      result = 1;
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 124: range 000000000CCAEA7A-000000000CCAFF56
void __cdecl BehaviorTreeConfig::StaticRegisterConstructor::StaticRegisterConstructor(
        BehaviorTreeConfig::StaticRegisterConstructor *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  const char (*v4)[12]; // rcx
  std::shared_ptr<BTAssignInt32Config> *v5; // r8
  const char (*v6)[7]; // rcx
  std::shared_ptr<BTActionConfig> *v7; // r8
  const char (*v8)[10]; // rcx
  std::shared_ptr<BTConditionConfig> *v9; // r8
  const char (*v10)[7]; // rcx
  std::shared_ptr<BTSwitchConfig> *v11; // r8
  const char (*v12)[9]; // rcx
  std::shared_ptr<BTSelectorConfig> *v13; // r8
  const char (*v14)[9]; // rcx
  std::shared_ptr<BTSequenceConfig> *v15; // r8
  const char (*v16)[8]; // rcx
  std::shared_ptr<BTSubtreeConfig> *v17; // r8
  const char (*v18)[13]; // rcx
  std::shared_ptr<BTForceSuccessConfig> *v19; // r8
  const char (*v20)[13]; // rcx
  std::shared_ptr<BTBehaviorTreeConfig> *v21; // r8
  const char (*v22)[28]; // rcx
  std::shared_ptr<BTConditionCheckIsRerollPhaseConfig> *v23; // r8
  const char (*v24)[28]; // rcx
  std::shared_ptr<BTConditionCheckIsActionPhaseConfig> *v25; // r8
  const char (*v26)[44]; // rcx
  std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig> *v27; // r8
  const char (*v28)[26]; // rcx
  std::shared_ptr<BTConditionCheckIsDrawPhaseConfig> *v29; // r8
  const char (*v30)[11]; // rcx
  std::shared_ptr<BTDoPassNodeConfig> *v31; // r8
  const char (*v32)[17]; // rcx
  std::shared_ptr<BTActionRerollDiceConfig> *v33; // r8
  const char (*v34)[24]; // rcx
  std::shared_ptr<BTActionReserveDiceByRoleConfig> *v35; // r8
  const char (*v36)[24]; // rcx
  std::shared_ptr<BTActionReserveDiceByHandConfig> *v37; // r8
  const char (*v38)[23]; // rcx
  std::shared_ptr<BTActionGenCharacterPlanConfig> *v39; // r8
  const char (*v40)[22]; // rcx
  std::shared_ptr<BTActionSortAndExecPlanConfig> *v41; // r8
  const char (*v42)[20]; // rcx
  std::shared_ptr<BTActionGenRebootPlanConfig> *v43; // r8
  const char (*v44)[36]; // rcx
  std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> *v45; // r8
  const char (*v46)[22]; // rcx
  std::shared_ptr<BTActionGenPlayCardPlanConfig> *v47; // r8
  const char (*v48)[29]; // rcx
  std::shared_ptr<BTActionGenChangeCharacterPlanConfig> *v49; // r8
  const char (*v50)[27]; // rcx
  std::shared_ptr<BTActionReserveHandCardByTagConfig> *v51; // r8
  const char (*v52)[13]; // rcx
  std::shared_ptr<BTActionRedrawConfig> *v53; // r8
  const char (*v54)[35]; // rcx
  std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig> *v55; // r8
  const char (*v56)[20]; // rcx
  std::shared_ptr<BTActionSelectOnstageConfig> *v57; // r8
  char v58[928]; // [rsp+10h] [rbp-3A0h] BYREF

  v1 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(896LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "27 32 16 9 <unknown> 64 16 9 <unknown> 96 16 9 <unknown> 128 16 9 <unknown> 160 16 9 <unknown> 1"
                        "92 16 9 <unknown> 224 16 9 <unknown> 256 16 9 <unknown> 288 16 9 <unknown> 320 16 9 <unknown> 35"
                        "2 16 9 <unknown> 384 16 9 <unknown> 416 16 9 <unknown> 448 16 9 <unknown> 480 16 9 <unknown> 512"
                        " 16 9 <unknown> 544 16 9 <unknown> 576 16 9 <unknown> 608 16 9 <unknown> 640 16 9 <unknown> 672 "
                        "16 9 <unknown> 704 16 9 <unknown> 736 16 9 <unknown> 768 16 9 <unknown> 800 16 9 <unknown> 832 1"
                        "6 9 <unknown> 864 16 9 <unknown>";
  *(_QWORD *)(v1 + 16) = BehaviorTreeConfig::StaticRegisterConstructor::StaticRegisterConstructor;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = -219021312;
  v3[536862727] = -219021312;
  v3[536862728] = -219021312;
  v3[536862729] = -219021312;
  v3[536862730] = -219021312;
  v3[536862731] = -219021312;
  v3[536862732] = -219021312;
  v3[536862733] = -219021312;
  v3[536862734] = -219021312;
  v3[536862735] = -219021312;
  v3[536862736] = -219021312;
  v3[536862737] = -219021312;
  v3[536862738] = -219021312;
  v3[536862739] = -219021312;
  v3[536862740] = -219021312;
  v3[536862741] = -219021312;
  v3[536862742] = -219021312;
  v3[536862743] = -219021312;
  v3[536862744] = -219021312;
  v3[536862745] = -219021312;
  v3[536862746] = -219021312;
  v3[536862747] = -202178560;
  if ( *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 32);
  common::tools::perf::make_shared<BTAssignInt32Config>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[12],std::shared_ptr<BTAssignInt32Config>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[12])"AssignInt32",
    (std::shared_ptr<BTAssignInt32Config> *)(v1 + 32),
    v4,
    v5);
  std::shared_ptr<BTAssignInt32Config>::~shared_ptr((std::shared_ptr<BTAssignInt32Config> *const)(v1 + 32));
  *(_WORD *)(((v1 + 32) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 64);
  common::tools::perf::make_shared<BTActionConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[7],std::shared_ptr<BTActionConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[7])"Action",
    (std::shared_ptr<BTActionConfig> *)(v1 + 64),
    v6,
    v7);
  std::shared_ptr<BTActionConfig>::~shared_ptr((std::shared_ptr<BTActionConfig> *const)(v1 + 64));
  *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 96);
  common::tools::perf::make_shared<BTConditionConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[10],std::shared_ptr<BTConditionConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[10])"Condition",
    (std::shared_ptr<BTConditionConfig> *)(v1 + 96),
    v8,
    v9);
  std::shared_ptr<BTConditionConfig>::~shared_ptr((std::shared_ptr<BTConditionConfig> *const)(v1 + 96));
  *(_WORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 128);
  common::tools::perf::make_shared<BTSwitchConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[7],std::shared_ptr<BTSwitchConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[7])"Switch",
    (std::shared_ptr<BTSwitchConfig> *)(v1 + 128),
    v10,
    v11);
  std::shared_ptr<BTSwitchConfig>::~shared_ptr((std::shared_ptr<BTSwitchConfig> *const)(v1 + 128));
  *(_WORD *)(((v1 + 128) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 160);
  common::tools::perf::make_shared<BTSelectorConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[9],std::shared_ptr<BTSelectorConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[9])"Selector",
    (std::shared_ptr<BTSelectorConfig> *)(v1 + 160),
    v12,
    v13);
  std::shared_ptr<BTSelectorConfig>::~shared_ptr((std::shared_ptr<BTSelectorConfig> *const)(v1 + 160));
  *(_WORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 192);
  common::tools::perf::make_shared<BTSequenceConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[9],std::shared_ptr<BTSequenceConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[9])"Sequence",
    (std::shared_ptr<BTSequenceConfig> *)(v1 + 192),
    v14,
    v15);
  std::shared_ptr<BTSequenceConfig>::~shared_ptr((std::shared_ptr<BTSequenceConfig> *const)(v1 + 192));
  *(_WORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 224);
  common::tools::perf::make_shared<BTSubtreeConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[8],std::shared_ptr<BTSubtreeConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[8])"Subtree",
    (std::shared_ptr<BTSubtreeConfig> *)(v1 + 224),
    v16,
    v17);
  std::shared_ptr<BTSubtreeConfig>::~shared_ptr((std::shared_ptr<BTSubtreeConfig> *const)(v1 + 224));
  *(_WORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 256);
  common::tools::perf::make_shared<BTForceSuccessConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[13],std::shared_ptr<BTForceSuccessConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[13])"ForceSuccess",
    (std::shared_ptr<BTForceSuccessConfig> *)(v1 + 256),
    v18,
    v19);
  std::shared_ptr<BTForceSuccessConfig>::~shared_ptr((std::shared_ptr<BTForceSuccessConfig> *const)(v1 + 256));
  *(_WORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 288);
  common::tools::perf::make_shared<BTBehaviorTreeConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[13],std::shared_ptr<BTBehaviorTreeConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[13])"BehaviorTree",
    (std::shared_ptr<BTBehaviorTreeConfig> *)(v1 + 288),
    v20,
    v21);
  std::shared_ptr<BTBehaviorTreeConfig>::~shared_ptr((std::shared_ptr<BTBehaviorTreeConfig> *const)(v1 + 288));
  *(_WORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 320);
  common::tools::perf::make_shared<BTConditionCheckIsRerollPhaseConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[28],std::shared_ptr<BTConditionCheckIsRerollPhaseConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[28])"ConditionCheckIsRerollPhase",
    (std::shared_ptr<BTConditionCheckIsRerollPhaseConfig> *)(v1 + 320),
    v22,
    v23);
  std::shared_ptr<BTConditionCheckIsRerollPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsRerollPhaseConfig> *const)(v1 + 320));
  *(_WORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 352);
  common::tools::perf::make_shared<BTConditionCheckIsActionPhaseConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[28],std::shared_ptr<BTConditionCheckIsActionPhaseConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[28])"ConditionCheckIsActionPhase",
    (std::shared_ptr<BTConditionCheckIsActionPhaseConfig> *)(v1 + 352),
    v24,
    v25);
  std::shared_ptr<BTConditionCheckIsActionPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsActionPhaseConfig> *const)(v1 + 352));
  *(_WORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 384) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 384);
  common::tools::perf::make_shared<BTConditionCheckIsSelectOnstageCharacterPhaseConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[44],std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[44])"ConditionCheckIsSelectOnstageCharacterPhase",
    (std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig> *)(v1 + 384),
    v26,
    v27);
  std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsSelectOnstageCharacterPhaseConfig> *const)(v1 + 384));
  *(_WORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 416);
  common::tools::perf::make_shared<BTConditionCheckIsDrawPhaseConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[26],std::shared_ptr<BTConditionCheckIsDrawPhaseConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[26])"ConditionCheckIsDrawPhase",
    (std::shared_ptr<BTConditionCheckIsDrawPhaseConfig> *)(v1 + 416),
    v28,
    v29);
  std::shared_ptr<BTConditionCheckIsDrawPhaseConfig>::~shared_ptr((std::shared_ptr<BTConditionCheckIsDrawPhaseConfig> *const)(v1 + 416));
  *(_WORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 448) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 448);
  common::tools::perf::make_shared<BTDoPassNodeConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[11],std::shared_ptr<BTDoPassNodeConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[11])"DoPassNode",
    (std::shared_ptr<BTDoPassNodeConfig> *)(v1 + 448),
    v30,
    v31);
  std::shared_ptr<BTDoPassNodeConfig>::~shared_ptr((std::shared_ptr<BTDoPassNodeConfig> *const)(v1 + 448));
  *(_WORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 480) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 480);
  common::tools::perf::make_shared<BTActionRerollDiceConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[17],std::shared_ptr<BTActionRerollDiceConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[17])"ActionRerollDice",
    (std::shared_ptr<BTActionRerollDiceConfig> *)(v1 + 480),
    v32,
    v33);
  std::shared_ptr<BTActionRerollDiceConfig>::~shared_ptr((std::shared_ptr<BTActionRerollDiceConfig> *const)(v1 + 480));
  *(_WORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 512) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 512);
  common::tools::perf::make_shared<BTActionReserveDiceByRoleConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[24],std::shared_ptr<BTActionReserveDiceByRoleConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[24])"ActionReserveDiceByRole",
    (std::shared_ptr<BTActionReserveDiceByRoleConfig> *)(v1 + 512),
    v34,
    v35);
  std::shared_ptr<BTActionReserveDiceByRoleConfig>::~shared_ptr((std::shared_ptr<BTActionReserveDiceByRoleConfig> *const)(v1 + 512));
  *(_WORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 544) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 544);
  common::tools::perf::make_shared<BTActionReserveDiceByHandConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[24],std::shared_ptr<BTActionReserveDiceByHandConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[24])"ActionReserveDiceByHand",
    (std::shared_ptr<BTActionReserveDiceByHandConfig> *)(v1 + 544),
    v36,
    v37);
  std::shared_ptr<BTActionReserveDiceByHandConfig>::~shared_ptr((std::shared_ptr<BTActionReserveDiceByHandConfig> *const)(v1 + 544));
  *(_WORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 576) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 576);
  common::tools::perf::make_shared<BTActionGenCharacterPlanConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[23],std::shared_ptr<BTActionGenCharacterPlanConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[23])"ActionGenCharacterPlan",
    (std::shared_ptr<BTActionGenCharacterPlanConfig> *)(v1 + 576),
    v38,
    v39);
  std::shared_ptr<BTActionGenCharacterPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenCharacterPlanConfig> *const)(v1 + 576));
  *(_WORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 608) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 608);
  common::tools::perf::make_shared<BTActionSortAndExecPlanConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[22],std::shared_ptr<BTActionSortAndExecPlanConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[22])"ActionSortAndExecPlan",
    (std::shared_ptr<BTActionSortAndExecPlanConfig> *)(v1 + 608),
    v40,
    v41);
  std::shared_ptr<BTActionSortAndExecPlanConfig>::~shared_ptr((std::shared_ptr<BTActionSortAndExecPlanConfig> *const)(v1 + 608));
  *(_WORD *)(((v1 + 608) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 640) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 640);
  common::tools::perf::make_shared<BTActionGenRebootPlanConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[20],std::shared_ptr<BTActionGenRebootPlanConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[20])"ActionGenRebootPlan",
    (std::shared_ptr<BTActionGenRebootPlanConfig> *)(v1 + 640),
    v42,
    v43);
  std::shared_ptr<BTActionGenRebootPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenRebootPlanConfig> *const)(v1 + 640));
  *(_WORD *)(((v1 + 640) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 672) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 672) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 672);
  common::tools::perf::make_shared<BTActionGenChangeToCanAttackCharacterConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[36],std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[36])"ActionGenChangeToCanAttackCharacter",
    (std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> *)(v1 + 672),
    v44,
    v45);
  std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig>::~shared_ptr((std::shared_ptr<BTActionGenChangeToCanAttackCharacterConfig> *const)(v1 + 672));
  *(_WORD *)(((v1 + 672) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 704) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 704);
  common::tools::perf::make_shared<BTActionGenPlayCardPlanConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[22],std::shared_ptr<BTActionGenPlayCardPlanConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[22])"ActionGenPlayCardPlan",
    (std::shared_ptr<BTActionGenPlayCardPlanConfig> *)(v1 + 704),
    v46,
    v47);
  std::shared_ptr<BTActionGenPlayCardPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenPlayCardPlanConfig> *const)(v1 + 704));
  *(_WORD *)(((v1 + 704) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 736) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 736) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 736);
  common::tools::perf::make_shared<BTActionGenChangeCharacterPlanConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[29],std::shared_ptr<BTActionGenChangeCharacterPlanConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[29])"ActionGenChangeCharacterPlan",
    (std::shared_ptr<BTActionGenChangeCharacterPlanConfig> *)(v1 + 736),
    v48,
    v49);
  std::shared_ptr<BTActionGenChangeCharacterPlanConfig>::~shared_ptr((std::shared_ptr<BTActionGenChangeCharacterPlanConfig> *const)(v1 + 736));
  *(_WORD *)(((v1 + 736) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 768) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 768);
  common::tools::perf::make_shared<BTActionReserveHandCardByTagConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[27],std::shared_ptr<BTActionReserveHandCardByTagConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[27])"ActionReserveHandCardByTag",
    (std::shared_ptr<BTActionReserveHandCardByTagConfig> *)(v1 + 768),
    v50,
    v51);
  std::shared_ptr<BTActionReserveHandCardByTagConfig>::~shared_ptr((std::shared_ptr<BTActionReserveHandCardByTagConfig> *const)(v1 + 768));
  *(_WORD *)(((v1 + 768) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 800) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 800) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 800);
  common::tools::perf::make_shared<BTActionRedrawConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[13],std::shared_ptr<BTActionRedrawConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[13])"ActionRedraw",
    (std::shared_ptr<BTActionRedrawConfig> *)(v1 + 800),
    v52,
    v53);
  std::shared_ptr<BTActionRedrawConfig>::~shared_ptr((std::shared_ptr<BTActionRedrawConfig> *const)(v1 + 800));
  *(_WORD *)(((v1 + 800) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 832) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 832) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 832);
  common::tools::perf::make_shared<BTActionGenCandidateOnstageCharacterConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[35],std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[35])"ActionGenCandidateOnstageCharacter",
    (std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig> *)(v1 + 832),
    v54,
    v55);
  std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig>::~shared_ptr((std::shared_ptr<BTActionGenCandidateOnstageCharacterConfig> *const)(v1 + 832));
  *(_WORD *)(((v1 + 832) >> 3) + 0x7FFF8000) = -1800;
  *(_WORD *)(((v1 + 864) >> 3) + 0x7FFF8000) = 0;
  if ( *(_WORD *)(((v1 + 864) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v1 + 864);
  common::tools::perf::make_shared<BTActionSelectOnstageConfig>();
  std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::emplace<char const(&)[20],std::shared_ptr<BTActionSelectOnstageConfig>>(
    &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
    (const char (*)[20])"ActionSelectOnstage",
    (std::shared_ptr<BTActionSelectOnstageConfig> *)(v1 + 864),
    v56,
    v57);
  std::shared_ptr<BTActionSelectOnstageConfig>::~shared_ptr((std::shared_ptr<BTActionSelectOnstageConfig> *const)(v1 + 864));
  if ( v58 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 160: range 000000000CCAFF58-000000000CCB0B1C
int32_t __cdecl BehaviorTreeConfig::loadFromFile(BehaviorTreeConfig *const this, const std::string *filename)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rdx
  int32_t v6; // r14d
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  const char *v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r14
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  char v17[624]; // [rsp+30h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 8 14 root_ptree:168 96 8 9 <unknown> 128 24 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 23 full_path_file_name:169 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BehaviorTreeConfig::loadFromFile;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_loaded_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_loaded_);
  if ( this->is_loaded_ )
  {
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "loadFromFile",
      163);
    v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[62])"[BehaviorTree] cur config has loaded, dup load file filename:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, filename);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    v6 = -1;
  }
  else
  {
    std::unordered_set<std::string>::insert(&this->loaded_xml_file_set_, filename);
    common::tools::PTree::PTree((common::tools::PTree *const)(v2 + 64));
    v7 = (__int64)this;
    if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
    {
      v7 = 32LL;
      __asan_report_store_n(v2 + 256, 32LL);
    }
    std::operator+<char>((std::string *)(v2 + 256), (const std::string *)v7, filename);
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/behavior_tree_config.cpp",
      "loadFromFile",
      170);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           (common::milog::MiLogStream *const)(v2 + 320),
           (const char (*)[49])"[BehaviorTree] loadFromFile full_path_file_name:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 256));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    v9 = (const char *)std::string::c_str(v2 + 256);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      v9,
      (const std::allocator<char> *)(v2 + 48));
    common::tools::PTree::readXml((common::tools::PTree *const)(v2 + 64), (const std::string *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v10 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v10 = 0;
    *(_BYTE *)(v10 + 2) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 105) & 7) >= *(_BYTE *)(((v2 + 151) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 24LL);
    }
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v2 + 128),
      (const common::tools::PTree *const)(v2 + 64));
    v11 = std::list<std::pair<std::string,common::tools::PTree>>::empty((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 128));
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v2 + 128));
    v12 = ((v2 + 128) >> 3) + 2147450880;
    *(_WORD *)v12 = -1800;
    *(_BYTE *)(v12 + 2) = -8;
    if ( v11 )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/behavior_tree_config.cpp",
        "loadFromFile",
        176);
      v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[50])byte_1A170280);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v2 + 256));
      common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" err");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v6 = -1;
    }
    else if ( BehaviorTreeConfig::loadDocImpl(this, (const common::tools::PTree *)(v2 + 64), 0) )
    {
      v6 = -1;
    }
    else if ( BehaviorTreeConfig::parseDoc(this, &this->behavior_tree_entry_id_) )
    {
      v6 = -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_loaded_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_loaded_);
      this->is_loaded_ = 1;
      std::string::operator=(&this->config_file_name_, filename);
      v6 = 0;
    }
    std::string::~string((void *)(v2 + 256));
    common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 64));
  }
  result = v6;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 199: range 000000000CCB0B1E-000000000CCB3064
__int64 __fastcall BehaviorTreeConfig::loadDocImpl(
        BehaviorTreeConfig *const this,
        const common::tools::PTree *ptree,
        __int16 recursive_depth)
{
  unsigned int v3; // r15d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v8; // rax
  common::tools::PTree *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  common::tools::PTree *v14; // rsi
  int v15; // eax
  int v16; // r14d
  std::unordered_set<std::string> *v17; // rdx
  std::unordered_set<std::string> *v18; // rdx
  bool v19; // al
  common::milog::MiLogStream *v20; // rax
  __int64 v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // r14d
  int v25; // edx
  unsigned int v26; // edx
  common::milog::MiLogStream *v27; // rax
  common::tools::PTree *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::string v31; // [rsp+0h] [rbp-8A0h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+28h] [rbp-878h]
  std::_List_iterator<std::pair<std::string,common::tools::PTree> >::reference v33; // [rsp+30h] [rbp-870h]
  std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *child_name; // [rsp+38h] [rbp-868h]
  std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *child_ptree; // [rsp+40h] [rbp-860h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range_0; // [rsp+48h] [rbp-858h]
  std::_List_iterator<std::pair<std::string,common::tools::PTree> >::reference v37; // [rsp+50h] [rbp-850h]
  std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *child_name_0; // [rsp+58h] [rbp-848h]
  std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *child_ptree_0; // [rsp+60h] [rbp-840h]
  char v40[2096]; // [rsp+70h] [rbp-830h] BYREF

  *(&v31._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v31._anon_0._M_allocated_capacity = (std::string::size_type)ptree;
  WORD2(v31._M_string_length) = recursive_depth;
  v4 = (unsigned __int64)v40;
  v31._M_dataplus._M_p = v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(2048LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "42 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 2 19 recursive_depth:198 160 8 15 __for_begin:225 192 8 13 __for"
                        "_end:225 224 8 9 <unknown> 256 8 9 <unknown> 288 8 23 include_child_ptree:245 320 8 15 __for_beg"
                        "in:254 352 8 13 __for_end:254 384 8 9 <unknown> 416 16 15 pt_root_opt:203 448 24 20 child_ptree_"
                        "list:218 512 32 9 <unknown> 576 32 9 <unknown> 640 32 21 cur_tree_entry_id:209 704 32 9 <unknown"
                        "> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 21 include_file_path:231 1024 "
                        "32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 12 cur_path:2"
                        "44 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 13 tree_name:260 1536 32 28 child_behavior_tr"
                        "ee_name:261 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856"
                        " 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = BehaviorTreeConfig::loadDocImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753535;
  v6[536862722] = -234753535;
  v6[536862723] = -234753535;
  v6[536862724] = -234687999;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862732] = -218959360;
  v6[536862733] = -219021312;
  v6[536862734] = -234881024;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -218959118;
  v6[536862745] = -218959118;
  v6[536862747] = -218959118;
  v6[536862749] = -218959118;
  v6[536862751] = -218959118;
  v6[536862753] = -218959118;
  v6[536862755] = -218959118;
  v6[536862757] = -218959118;
  v6[536862759] = -218959118;
  v6[536862761] = -218959118;
  v6[536862763] = -218959118;
  v6[536862765] = -218959118;
  v6[536862767] = -218959118;
  v6[536862769] = -218959118;
  v6[536862771] = -218959118;
  v6[536862773] = -218959118;
  v6[536862775] = -218959118;
  v6[536862777] = -218959118;
  v6[536862779] = -218959118;
  v6[536862781] = -218959118;
  v6[536862783] = -202116109;
  *(_WORD *)(v4 + 144) = WORD2(v31._M_string_length);
  std::allocator<char>::allocator(v4 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v4 + 512),
    "root",
    (const std::allocator<char> *)(v4 + 32));
  if ( *(_WORD *)(((v4 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store16(v4 + 416);
  common::tools::PTree::getChildOptional(ptree, (const std::string *)(v4 + 512));
  std::string::~string((void *)(v4 + 512));
  *(_DWORD *)(((v4 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v4 + 32);
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v4 + 416))
    || *(_WORD *)(v4 + 144) > 0x4Fu )
  {
    *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "loadDocImpl",
      206);
    v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           (common::milog::MiLogStream *const)(v4 + 576),
           (const char (*)[62])"ptree is empty or recursive_depth too large, recursive_depth:");
    common::milog::MiLogStream::operator<<<unsigned short,(unsigned short *)0>(v8, (const unsigned __int16 *)(v4 + 144));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
    *(_DWORD *)(((v4 + 576) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    *(_DWORD *)(((v4 + 640) >> 3) + 0x7FFF8000) = 0;
    v9 = std::optional<common::tools::PTree>::value((std::optional<common::tools::PTree> *const)(v4 + 416));
    *(_DWORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v4 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 768),
      byte_1A0D8BA0,
      (const std::allocator<char> *)(v4 + 64));
    *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v4 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v4 + 704),
      "<xmlattr>.entry_id",
      (const std::allocator<char> *)(v4 + 48));
    if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 640, 32LL);
    }
    common::tools::PTree::get<std::string>((std::string *)(v4 + 640), v9, (const std::string *)(v4 + 704), v31);
    std::string::~string((void *)(v4 + 704));
    *(_DWORD *)(((v4 + 704) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 48);
    *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
    std::string::~string((void *)(v4 + 768));
    *(_DWORD *)(((v4 + 768) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v4 + 64);
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( (unsigned __int8)std::string::empty(*(&v31._anon_0._M_allocated_capacity + 1) + 72) )
    {
      std::string::operator=(*(&v31._anon_0._M_allocated_capacity + 1) + 72, v4 + 640);
    }
    else if ( (unsigned __int8)std::string::empty(v4 + 640) != 1 )
    {
      *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 832) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 832, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 832),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/behavior_tree_config.cpp",
        "loadDocImpl",
        216);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v4 + 832),
              (const char (*)[28])"multiple cur_tree_entry_id:");
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v4 + 640));
      v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])",exist:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v12,
        (const std::string *)(*(&v31._anon_0._M_allocated_capacity + 1) + 72));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 832));
      *(_DWORD *)(((v4 + 832) >> 3) + 0x7FFF8000) = -117901064;
    }
    v13 = ((v4 + 448) >> 3) + 2147450880;
    *(_WORD *)v13 = 0;
    *(_BYTE *)(v13 + 2) = 0;
    v14 = std::optional<common::tools::PTree>::value((std::optional<common::tools::PTree> *const)(v4 + 416));
    if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 471) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 64 + 23) & 7) >= *(_BYTE *)(((v4 + 471) >> 3) + 0x7FFF8000) )
    {
      v14 = (common::tools::PTree *)24;
      __asan_report_store_n(v4 + 448, 24LL);
    }
    common::tools::PTree::getAllChild[abi:cxx11](
      (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 448),
      v14);
    if ( std::list<std::pair<std::string,common::tools::PTree>>::empty((const std::list<std::pair<std::string,common::tools::PTree>> *const)(v4 + 448)) )
    {
      *(_DWORD *)(((v4 + 896) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 896) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 896, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 896),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/behavior_tree_config.cpp",
        "loadDocImpl",
        221);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v4 + 896),
        (const char (*)[26])"child_ptree_list is empty");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 896));
      *(_DWORD *)(((v4 + 896) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
    else
    {
      __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 448);
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 160) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8();
      *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 192) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
      while ( std::operator!=(
                (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 160),
                (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 192)) )
      {
        v33 = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 160));
        child_name = (std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *)std::get<0ul,std::string,common::tools::PTree>(v33);
        child_ptree = (std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *)std::get<1ul,std::string,common::tools::PTree>(v33);
        if ( std::operator!=<char>(child_name, "include") )
        {
          v15 = 0;
        }
        else
        {
          *(_DWORD *)(((v4 + 960) >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)(((v4 + 1088) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v4 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v4 + 1088),
            byte_1A0D8BA0,
            (const std::allocator<char> *)(v4 + 96));
          *(_DWORD *)(((v4 + 1024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v4 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v4 + 1024),
            "<xmlattr>.path",
            (const std::allocator<char> *)(v4 + 80));
          if ( *(char *)(((v4 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 960, 32LL);
          }
          common::tools::PTree::get<std::string>(
            (std::string *)(v4 + 960),
            child_ptree,
            (const std::string *)(v4 + 1024),
            v31);
          std::string::~string((void *)(v4 + 1024));
          *(_DWORD *)(((v4 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v4 + 80);
          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
          std::string::~string((void *)(v4 + 1088));
          *(_DWORD *)(((v4 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v4 + 96);
          *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( (unsigned __int8)std::string::empty(v4 + 960) )
          {
            *(_DWORD *)(((v4 + 1152) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 1152) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 1152, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 1152),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/behavior_tree_config.cpp",
              "loadDocImpl",
              234);
            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)(v4 + 1152),
              (const char (*)[44])"loadDocImpl find include attr path is empty");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1152));
            *(_DWORD *)(((v4 + 1152) >> 3) + 0x7FFF8000) = -117901064;
            v16 = 0;
          }
          else
          {
            *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
            v17 = (std::unordered_set<std::string> *)(*(&v31._anon_0._M_allocated_capacity + 1) + 104);
            if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_set<std::string>::iterator *)(v4 + 256) = std::unordered_set<std::string>::end(v17);
            *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
            v18 = (std::unordered_set<std::string> *)(*(&v31._anon_0._M_allocated_capacity + 1) + 104);
            if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
              __asan_report_store8();
            *(std::unordered_set<std::string>::iterator *)(v4 + 224) = std::unordered_set<std::string>::find(
                                                                         v18,
                                                                         (const std::unordered_set<std::string>::key_type *)(v4 + 960));
            v19 = std::__detail::operator!=<std::string,true>(
                    (const std::__detail::_Node_iterator_base<std::string,true> *)(v4 + 224),
                    (const std::__detail::_Node_iterator_base<std::string,true> *)(v4 + 256));
            *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
            if ( v19 )
            {
              *(_DWORD *)(((v4 + 1216) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v4 + 1216) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 1216, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 1216),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/behavior_tree_config.cpp",
                "loadDocImpl",
                239);
              v20 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v4 + 1216),
                      (const char (*)[22])"loadDocImpl dup file:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v4 + 960));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1216));
              *(_DWORD *)(((v4 + 1216) >> 3) + 0x7FFF8000) = -117901064;
              v16 = 0;
            }
            else
            {
              std::unordered_set<std::string>::insert(
                (std::unordered_set<std::string> *const)(*(&v31._anon_0._M_allocated_capacity + 1) + 104),
                (const std::unordered_set<std::string>::value_type *)(v4 + 960));
              *(_DWORD *)(((v4 + 1280) >> 3) + 0x7FFF8000) = 0;
              *(_DWORD *)(((v4 + 1344) >> 3) + 0x7FFF8000) = 0;
              v21 = *(&v31._anon_0._M_allocated_capacity + 1);
              if ( *(char *)(((v4 + 1344) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) )
              {
                v21 = 32LL;
                __asan_report_store_n(v4 + 1344, 32LL);
              }
              std::operator+<char>((std::string *)(v4 + 1344), (const std::string *)v21, "/");
              if ( *(char *)(((v4 + 1280) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 1280, 32LL);
              }
              std::operator+<char>(
                (std::string *)(v4 + 1280),
                (std::string *)(v4 + 1344),
                (const std::string *)(v4 + 960));
              std::string::~string((void *)(v4 + 1344));
              *(_DWORD *)(((v4 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
              common::tools::PTree::PTree((common::tools::PTree *const)(v4 + 288));
              common::tools::PTree::readXml((common::tools::PTree *const)(v4 + 288), (const std::string *)(v4 + 1280));
              if ( BehaviorTreeConfig::loadDocImpl(
                     *((BehaviorTreeConfig *const *)&v31._anon_0._M_allocated_capacity + 1),
                     (const common::tools::PTree *)(v4 + 288),
                     *(_WORD *)(v4 + 144) + 1) )
              {
                *(_DWORD *)(((v4 + 1408) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v4 + 1408) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v4 + 1439) >> 3) + 0x7FFF8000) != 0
                  && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1439) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v4 + 1408, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 1408),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/behavior_tree_config.cpp",
                  "loadDocImpl",
                  249);
                v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        (common::milog::MiLogStream *const)(v4 + 1408),
                        (const char (*)[19])"load include file:");
                v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v22,
                        (const std::string *)(v4 + 1280));
                common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])" fail");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1408));
                *(_DWORD *)(((v4 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                v3 = -1;
                v24 = 0;
              }
              else
              {
                v24 = 1;
              }
              common::tools::PTree::~PTree((common::tools::PTree *const)(v4 + 288));
              std::string::~string((void *)(v4 + 1280));
              if ( v24 == 1 )
                v16 = 2;
              else
                v16 = 1;
            }
          }
          std::string::~string((void *)(v4 + 960));
          if ( v16 )
          {
            if ( v16 == 2 )
              v15 = 2;
            else
              v15 = 1;
          }
          else
          {
            v15 = 0;
          }
        }
        *(_DWORD *)(((v4 + 960) >> 3) + 0x7FFF8000) = -117901064;
        *(_DWORD *)(((v4 + 1280) >> 3) + 0x7FFF8000) = -117901064;
        *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v15 && v15 != 2 )
        {
          v25 = 0;
          goto LABEL_72;
        }
        std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 160));
      }
      v25 = 1;
LABEL_72:
      *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v25 == 1 )
      {
        __for_range_0 = (std::list<std::pair<std::string,common::tools::PTree>> *)(v4 + 448);
        *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 320) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range_0);
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(std::list<std::pair<std::string,common::tools::PTree>>::iterator *)(v4 + 352) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range_0);
        while ( std::operator!=(
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 320),
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v4 + 352)) )
        {
          v37 = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 320));
          child_name_0 = (std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *)std::get<0ul,std::string,common::tools::PTree>(v37);
          child_ptree_0 = (std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *)std::get<1ul,std::string,common::tools::PTree>(v37);
          if ( !std::operator!=<char>(child_name_0, "BehaviorTree") )
          {
            *(_DWORD *)(((v4 + 1472) >> 3) + 0x7FFF8000) = 0;
            std::string::basic_string(v4 + 1472);
            *(_DWORD *)(((v4 + 1536) >> 3) + 0x7FFF8000) = 0;
            *(_DWORD *)(((v4 + 1664) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v4 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v4 + 1664),
              byte_1A0D8BA0,
              (const std::allocator<char> *)(v4 + 128));
            *(_DWORD *)(((v4 + 1600) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v4 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v4 + 1600),
              "<xmlattr>.ID",
              (const std::allocator<char> *)(v4 + 112));
            if ( *(char *)(((v4 + 1536) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 1567) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 1567) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 1536, 32LL);
            }
            common::tools::PTree::get<std::string>(
              (std::string *)(v4 + 1536),
              child_ptree_0,
              (const std::string *)(v4 + 1600),
              v31);
            std::string::~string((void *)(v4 + 1600));
            *(_DWORD *)(((v4 + 1600) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v4 + 112);
            *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000) = -8;
            std::string::~string((void *)(v4 + 1664));
            *(_DWORD *)(((v4 + 1664) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v4 + 128);
            *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( (unsigned __int8)std::string::empty(v4 + 1536) )
            {
              *(_DWORD *)(((v4 + 1792) >> 3) + 0x7FFF8000) = 0;
              *(_DWORD *)(((v4 + 1728) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1) + 36) >> 3) + 0x7FFF8000) != 0
                && (char)(((v31._anon_0._M_local_buf[8] + 36) & 7) + 3) >= *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity
                                                                                        + 1)
                                                                                      + 36) >> 3)
                                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4(*(&v31._anon_0._M_allocated_capacity + 1) + 36);
              }
              v26 = *(_DWORD *)(*(&v31._anon_0._M_allocated_capacity + 1) + 36);
              *(_DWORD *)(*(&v31._anon_0._M_allocated_capacity + 1) + 36) = v26 + 1;
              if ( *(char *)(((v4 + 1728) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 1759) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 1759) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 1728, 32LL);
              }
              std::to_string((std::string *)(v4 + 1728), v26);
              if ( *(char *)(((v4 + 1792) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 1823) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 1823) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 1792, 32LL);
              }
              std::operator+<char>((std::string *)(v4 + 1792), "BehaviorTree_", (std::string *)(v4 + 1728));
              std::string::operator=(v4 + 1472, v4 + 1792);
              std::string::~string((void *)(v4 + 1792));
              *(_DWORD *)(((v4 + 1792) >> 3) + 0x7FFF8000) = -117901064;
              std::string::~string((void *)(v4 + 1728));
              *(_DWORD *)(((v4 + 1728) >> 3) + 0x7FFF8000) = -117901064;
              *(_DWORD *)(((v4 + 1856) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v4 + 1856) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 1887) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1887) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 1856, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 1856),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/behavior_tree_config.cpp",
                "loadDocImpl",
                265);
              v27 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                      (common::milog::MiLogStream *const)(v4 + 1856),
                      (const char (*)[59])"BehaviorTree node not config ID attibute auto assign name:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v4 + 1472));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1856));
              *(_DWORD *)(((v4 + 1856) >> 3) + 0x7FFF8000) = -117901064;
            }
            else
            {
              std::string::operator=(v4 + 1472, v4 + 1536);
            }
            v28 = std::unordered_map<std::string,common::tools::PTree>::operator[](
                    (std::unordered_map<std::string,common::tools::PTree> *const)(*(&v31._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 160),
                    (const std::unordered_map<std::string,common::tools::PTree>::key_type *)(v4 + 1472));
            common::tools::PTree::operator=(v28, child_ptree_0);
            *(_DWORD *)(((v4 + 1920) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 1920) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 1951) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1951) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 1920, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 1920),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/behavior_tree_config.cpp",
              "loadDocImpl",
              272);
            v29 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)(v4 + 1920),
                    (const char (*)[28])"register BehaviorTree name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)(v4 + 1472));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1920));
            *(_DWORD *)(((v4 + 1920) >> 3) + 0x7FFF8000) = -117901064;
            std::string::~string((void *)(v4 + 1536));
            std::string::~string((void *)(v4 + 1472));
          }
          *(_DWORD *)(((v4 + 1472) >> 3) + 0x7FFF8000) = -117901064;
          *(_DWORD *)(((v4 + 1536) >> 3) + 0x7FFF8000) = -117901064;
          std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)(v4 + 320));
        }
        *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = -8;
        v3 = 0;
      }
    }
    std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v4 + 448));
    std::string::~string((void *)(v4 + 640));
  }
  std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v4 + 416));
  if ( v31._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80F8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 256) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 2048LL, v31._M_dataplus._M_p);
  }
  return v3;
};

// Line 285: range 000000000CCB3066-000000000CCB3426
int32_t __cdecl BehaviorTreeConfig::parseDoc(BehaviorTreeConfig *const this, const std::string *tree_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  std::string *p_tree_id; // rdx
  std::shared_ptr<BTBehaviorTreeConfig> *v10; // rax
  std::unordered_map<std::string,common::tools::PTree>::mapped_type *v11; // rdi
  int32_t result; // eax
  char v14[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 21 behavior_tree_ptr:291 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BehaviorTreeConfig::parseDoc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  if ( std::unordered_map<std::string,common::tools::PTree>::count(&this->ptree_map_, tree_id) )
  {
    if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store16(v2 + 32);
    common::tools::perf::make_shared<BTBehaviorTreeConfig>();
    p_tree_id = &std::__shared_ptr_access<BTBehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTBehaviorTreeConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->tree_id;
    std::string::operator=(p_tree_id, tree_id);
    v10 = std::unordered_map<std::string,std::shared_ptr<BTBehaviorTreeConfig>>::operator[](
            &this->tree_config_map_,
            tree_id);
    std::shared_ptr<BTBehaviorTreeConfig>::operator=(v10, (const std::shared_ptr<BTBehaviorTreeConfig> *)(v2 + 32));
    std::shared_ptr<BTNodeConfigBase>::shared_ptr<BTBehaviorTreeConfig,void>(
      (std::shared_ptr<BTNodeConfigBase> *const)(v2 + 64),
      (const std::shared_ptr<BTBehaviorTreeConfig> *)(v2 + 32));
    v11 = std::unordered_map<std::string,common::tools::PTree>::operator[](&this->ptree_map_, tree_id);
    v8 = BehaviorTreeConfig::parseTree(this, tree_id, v11, (BTNodeConfigBasePtr *)(v2 + 64), 0);
    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    std::shared_ptr<BTBehaviorTreeConfig>::~shared_ptr((std::shared_ptr<BTBehaviorTreeConfig> *const)(v2 + 32));
  }
  else
  {
    if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/behavior_tree_config.cpp",
      "parseDoc",
      288);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"behaviore file:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &this->config_file_name_);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])", not find tree id:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, tree_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    v8 = -1;
  }
  result = v8;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
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

// Line 298: range 000000000CCB3428-000000000CCB3B41
int32_t __cdecl BehaviorTreeConfig::parseTree(
        BehaviorTreeConfig *const this,
        const std::string *tree_id,
        const common::tools::PTree *tree_element,
        BTNodeConfigBasePtr *p_parent_ptr,
        uint16_t recursive_depth)
{
  int32_t v5; // r15d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rdx
  unsigned __int64 v10; // rax
  bool v11; // r14
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int32_t result; // eax
  const std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+40h] [rbp-190h]
  std::_List_const_iterator<std::pair<std::string,common::tools::PTree> >::reference v22; // [rsp+48h] [rbp-188h]
  std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *child_name; // [rsp+50h] [rbp-180h]
  std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *child_tree; // [rsp+58h] [rbp-178h]
  char v25[368]; // [rsp+60h] [rbp-170h] BYREF

  v6 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(320LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 32 8 15 __for_begin:301 64 8 13 __for_end:301 96 16 9 <unknown> 128 24 9 <unknown> 192 32 9 <u"
                        "nknown> 256 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = BehaviorTreeConfig::parseTree;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -218959360;
  v8[536862722] = -218959360;
  v8[536862723] = -219021312;
  v8[536862724] = -234881024;
  v8[536862725] = -218959118;
  v8[536862727] = -218959118;
  v8[536862729] = -202116109;
  if ( *(char *)(((v6 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v6 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/behavior_tree_config.cpp",
    "parseTree",
    299);
  v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
         (common::milog::MiLogStream *const)(v6 + 192),
         (const char (*)[19])"parseTree tree_id:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, tree_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 192));
  *(_DWORD *)(((v6 + 192) >> 3) + 0x7FFF8000) = -117901064;
  v10 = ((v6 + 128) >> 3) + 2147450880;
  *(_WORD *)v10 = 0;
  *(_BYTE *)(v10 + 2) = 0;
  if ( *(char *)(((v6 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v6 + 151) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 - 105) & 7) >= *(_BYTE *)(((v6 + 151) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6 + 128, 24LL);
  }
  common::tools::PTree::getAllChild[abi:cxx11](
    (std::list<std::pair<std::string,common::tools::PTree>> *)(v6 + 128),
    tree_element);
  __for_range = (const std::list<std::pair<std::string,common::tools::PTree>> *)(v6 + 128);
  *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::const_iterator *)(v6 + 32) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
  *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8();
  *(std::list<std::pair<std::string,common::tools::PTree>>::const_iterator *)(v6 + 64) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::operator!=(
            (const std::_List_const_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v6 + 32),
            (const std::_List_const_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v6 + 64)) )
    {
      v16 = 1;
      goto LABEL_20;
    }
    v22 = std::_List_const_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_const_iterator<std::pair<std::string,common::tools::PTree> > *const)(v6 + 32));
    child_name = (std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *)std::get<0ul,std::string,common::tools::PTree>(v22);
    child_tree = (std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *)std::get<1ul,std::string,common::tools::PTree>(v22);
    *(_WORD *)(((v6 + 96) >> 3) + 0x7FFF8000) = 0;
    std::shared_ptr<BTNodeConfigBase>::shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v6 + 96), p_parent_ptr);
    v11 = BehaviorTreeConfig::parseNode(
            this,
            child_name,
            child_tree,
            (BTNodeConfigBasePtr *)(v6 + 96),
            recursive_depth + 1) != 0;
    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v6 + 96));
    *(_WORD *)(((v6 + 96) >> 3) + 0x7FFF8000) = -1800;
    if ( v11 )
      break;
    std::_List_const_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_const_iterator<std::pair<std::string,common::tools::PTree> > *const)(v6 + 32));
  }
  *(_DWORD *)(((v6 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v6 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v6 + 256, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v6 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/behavior_tree_config.cpp",
    "parseTree",
    305);
  v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
          (common::milog::MiLogStream *const)(v6 + 256),
          (const char (*)[19])"parseTree tree_id:");
  v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, tree_id);
  v14 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" child:");
  v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, child_name);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" failed");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 256));
  *(_DWORD *)(((v6 + 256) >> 3) + 0x7FFF8000) = -117901064;
  v5 = -1;
  v16 = 0;
LABEL_20:
  *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v16 == 1 )
    v5 = 0;
  std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v6 + 128));
  result = v5;
  if ( v25 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 313: range 000000000CCB3B42-000000000CCB686F
int32_t __cdecl BehaviorTreeConfig::parseNode(
        BehaviorTreeConfig *const this,
        const std::string *node_name,
        const common::tools::PTree *tree_element,
        BTNodeConfigBasePtr *p_parent_ptr,
        uint16_t recursive_depth)
{
  int32_t v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  void (__fastcall *v20)(unsigned __int64, unsigned __int64); // rcx
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  unsigned __int64 v23; // rax
  int v24; // esi
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  unsigned __int64 v35; // rax
  __int64 (__fastcall **v36)(unsigned __int64); // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdi
  BTNodeConfigType v42; // ecx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rdx
  void (__fastcall *v53)(unsigned __int64, unsigned __int64); // rcx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v67; // rax
  std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  std::unordered_map<std::string,common::tools::PTree>::mapped_type *v70; // r14
  std::string *p_subtree_id; // rsi
  std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  unsigned __int64 v73; // rax
  common::milog::MiLogStream *v74; // rdx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rdx
  common::milog::MiLogStream *v77; // rax
  int v78; // edx
  unsigned __int64 v79; // rax
  std::string v81; // [rsp+0h] [rbp-920h]
  bool v82; // [rsp+8h] [rbp-918h]
  _BOOL4 v83; // [rsp+8h] [rbp-918h]
  uint16_t recursive_deptha; // [rsp+Ch] [rbp-914h]
  uint16_t param_index; // [rsp+32h] [rbp-8EEh]
  BTNodeConfigType cur_node_type; // [rsp+34h] [rbp-8ECh]
  std::shared_ptr<BTNodeConfigBase> *register_config_ptr; // [rsp+38h] [rbp-8E8h]
  const std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+48h] [rbp-8D8h]
  std::_List_const_iterator<std::pair<std::string,common::tools::PTree> >::reference v90; // [rsp+50h] [rbp-8D0h]
  std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *child_name; // [rsp+58h] [rbp-8C8h]
  std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *child_tree; // [rsp+60h] [rbp-8C0h]
  std::shared_ptr<BTNodeConfigBase> *register_logic_config_ptr; // [rsp+68h] [rbp-8B8h]
  char v94[2224]; // [rsp+70h] [rbp-8B0h] BYREF

  *(&v81._anon_0._M_allocated_capacity + 1) = (std::string::size_type)tree_element;
  v81._anon_0._M_allocated_capacity = (std::string::size_type)p_parent_ptr;
  WORD2(v81._M_string_length) = recursive_depth;
  v6 = (unsigned __int64)v94;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_6(2176LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "42 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 4 9 "
                        "<unknown> 128 8 15 __for_begin:410 160 8 13 __for_end:410 192 16 14 config_ptr:332 224 16 15 con"
                        "trol_ptr:350 256 16 20 logic_config_ptr:379 288 16 15 subtree_ptr:396 320 16 9 <unknown> 352 16 "
                        "9 <unknown> 384 24 13 param_vec:338 448 24 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640"
                        " 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 14 param_name:341 896 32 9 <unknown"
                        "> 960 32 15 param_value:342 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 "
                        "9 <unknown> 1280 32 9 <unknown> 1344 32 14 logic_name:366 1408 32 9 <unknown> 1472 32 9 <unknown"
                        "> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unk"
                        "nown> 1856 32 14 subtree_id:395 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = BehaviorTreeConfig::parseNode;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753535;
  v8[536862722] = -234753535;
  v8[536862723] = -234556927;
  v8[536862724] = -218959360;
  v8[536862725] = -218959360;
  v8[536862726] = -219021312;
  v8[536862727] = -219021312;
  v8[536862728] = -219021312;
  v8[536862729] = -219021312;
  v8[536862730] = -219021312;
  v8[536862731] = -219021312;
  v8[536862732] = -234881024;
  v8[536862733] = -218959118;
  v8[536862734] = -234881024;
  v8[536862735] = -218959118;
  v8[536862737] = -218959118;
  v8[536862739] = -218959118;
  v8[536862741] = -218959118;
  v8[536862743] = -218959118;
  v8[536862745] = -218959118;
  v8[536862747] = -218959118;
  v8[536862749] = -218959118;
  v8[536862751] = -218959118;
  v8[536862753] = -218959118;
  v8[536862755] = -218959118;
  v8[536862757] = -218959118;
  v8[536862759] = -218959118;
  v8[536862761] = -218959118;
  v8[536862763] = -218959118;
  v8[536862765] = -218959118;
  v8[536862767] = -218959118;
  v8[536862769] = -218959118;
  v8[536862771] = -218959118;
  v8[536862773] = -218959118;
  v8[536862775] = -218959118;
  v8[536862777] = -218959118;
  v8[536862779] = -218959118;
  v8[536862781] = -218959118;
  v8[536862783] = -218959118;
  v8[536862785] = -218959118;
  v8[536862787] = -202116109;
  if ( std::operator==<BTNodeConfigBase>(
         (const std::shared_ptr<BTNodeConfigBase> *)v81._anon_0._M_allocated_capacity,
         0LL) )
  {
    if ( *(char *)(((v6 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/behavior_tree_config.cpp",
      "parseNode",
      316);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v6 + 512),
           (const char (*)[16])"parseNode node:");
    v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, node_name);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v10, (const char (*)[23])" parent_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 512));
    v5 = -1;
  }
  else if ( std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::count(
              &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
              node_name) )
  {
    if ( *(char *)(((v6 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 671) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 671) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 640, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 640),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/behavior_tree_config.cpp",
      "parseNode",
      325);
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
            (common::milog::MiLogStream *const)(v6 + 640),
            (const char (*)[10])"paseNode:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, node_name);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 640));
    *(_DWORD *)(((v6 + 640) >> 3) + 0x7FFF8000) = -117901064;
    register_config_ptr = std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::at(
                            &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
                            node_name);
    if ( std::operator==<BTNodeConfigBase>(register_config_ptr, 0LL) )
    {
      *(_DWORD *)(((v6 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v6 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/behavior_tree_config.cpp",
        "parseNode",
        329);
      v16 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v6 + 704),
              (const char (*)[37])"register_config_node_map_ node_name:");
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, node_name);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        v17,
        (const char (*)[32])" register_config_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 704));
      v5 = -1;
    }
    else
    {
      *(_WORD *)(((v6 + 192) >> 3) + 0x7FFF8000) = 0;
      v18 = (unsigned __int64)std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)register_config_ptr);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(v18);
      v19 = *(_QWORD *)v18 + 24LL;
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8(*(_QWORD *)v18 + 24LL);
      v20 = *(void (__fastcall **)(unsigned __int64, unsigned __int64))v19;
      if ( *(_WORD *)(((v6 + 192) >> 3) + 0x7FFF8000) )
        v18 = __asan_report_store16(v6 + 192);
      v20(v6 + 192, v18);
      if ( std::operator==<BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v6 + 192), 0LL) )
      {
        *(_DWORD *)(((v6 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 768) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 799) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 799) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 768, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 768),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/behavior_tree_config.cpp",
          "parseNode",
          335);
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                (common::milog::MiLogStream *const)(v6 + 768),
                (const char (*)[11])"node_name:");
        v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, node_name);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v22, (const char (*)[21])" config clone failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 768));
        *(_DWORD *)(((v6 + 768) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v23 = ((v6 + 384) >> 3) + 2147450880;
        *(_WORD *)v23 = 0;
        *(_BYTE *)(v23 + 2) = 0;
        std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 384));
        for ( param_index = 1; param_index <= 6u; ++param_index )
        {
          *(_DWORD *)(((v6 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)(((v6 + 896) >> 3) + 0x7FFF8000) = 0;
          v24 = param_index;
          if ( *(char *)(((v6 + 896) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 927) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 927) >> 3) + 0x7FFF8000) )
          {
            v24 = 32;
            __asan_report_store_n(v6 + 896, 32LL);
          }
          std::to_string((std::string *)(v6 + 896), v24);
          if ( *(char *)(((v6 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 832, 32LL);
          }
          std::operator+<char>((std::string *)(v6 + 832), "param", (std::string *)(v6 + 896));
          std::string::~string((void *)(v6 + 896));
          *(_DWORD *)(((v6 + 896) >> 3) + 0x7FFF8000) = -117901064;
          *(_DWORD *)(((v6 + 960) >> 3) + 0x7FFF8000) = 0;
          *(_DWORD *)(((v6 + 1088) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v6 + 32);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v6 + 1088),
            byte_1A0D8BA0,
            (const std::allocator<char> *)(v6 + 32));
          *(_DWORD *)(((v6 + 1024) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v6 + 1024) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 1055) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 1055) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 1024, 32LL);
          }
          std::operator+<char>((std::string *)(v6 + 1024), "<xmlattr>.", (const std::string *)(v6 + 832));
          if ( *(char *)(((v6 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 960, 32LL);
          }
          common::tools::PTree::get<std::string>(
            (std::string *)(v6 + 960),
            *((const common::tools::PTree *const *)&v81._anon_0._M_allocated_capacity + 1),
            (const std::string *)(v6 + 1024),
            v81);
          std::string::~string((void *)(v6 + 1024));
          *(_DWORD *)(((v6 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::string::~string((void *)(v6 + 1088));
          *(_DWORD *)(((v6 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v6 + 32);
          *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
          std::vector<std::string>::push_back(
            (std::vector<std::string> *const)(v6 + 384),
            (const std::vector<std::string>::value_type *)(v6 + 960));
          std::string::~string((void *)(v6 + 960));
          std::string::~string((void *)(v6 + 832));
          *(_DWORD *)(((v6 + 832) >> 3) + 0x7FFF8000) = -117901064;
          *(_DWORD *)(((v6 + 960) >> 3) + 0x7FFF8000) = -117901064;
        }
        v25 = (unsigned __int64)std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8(v25);
        v26 = *(_QWORD *)v25 + 8LL;
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8(*(_QWORD *)v25 + 8LL);
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v26)(v25, v6 + 384) )
        {
          *(_DWORD *)(((v6 + 1152) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v6 + 1152) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 1183) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 1183) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 1152, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 1152),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/behavior_tree_config.cpp",
            "parseNode",
            347);
          v27 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  (common::milog::MiLogStream *const)(v6 + 1152),
                  (const char (*)[15])"behavior file:");
          v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, &this->config_file_name_);
          v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" node:");
          v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, node_name);
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v30, (const char (*)[17])" param not valid");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1152));
          *(_DWORD *)(((v6 + 1152) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          *(_WORD *)(((v6 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_WORD *)(((v6 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store16(v6 + 224);
          std::dynamic_pointer_cast<BTControlConfig,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v6 + 224));
          if ( std::operator==<BTControlConfig>((const std::shared_ptr<BTControlConfig> *)(v6 + 224), 0LL) )
          {
            *(_DWORD *)(((v6 + 1216) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v6 + 1216) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 1247) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 1247) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 1216, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 1216),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/behavior_tree_config.cpp",
              "parseNode",
              353);
            v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    (common::milog::MiLogStream *const)(v6 + 1216),
                    (const char (*)[15])"behavior file:");
            v32 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &this->config_file_name_);
            v33 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])" node:");
            v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, node_name);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v34,
              (const char (*)[29])" parent not not control node");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1216));
            *(_DWORD *)(((v6 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
          }
          else
          {
            v35 = (unsigned __int64)std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 192));
            if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
              v35 = __asan_report_load8(v35);
            v36 = *(__int64 (__fastcall ***)(unsigned __int64))v35;
            if ( *(_BYTE *)((*(_QWORD *)v35 >> 3) + 0x7FFF8000LL) )
              v35 = __asan_report_load8(*(_QWORD *)v35);
            cur_node_type = (unsigned int)(*v36)(v35);
            if ( (unsigned int)cur_node_type > TREE )
            {
              if ( cur_node_type == ACTION || cur_node_type == CONDITION )
              {
                *(_DWORD *)(((v6 + 1344) >> 3) + 0x7FFF8000) = 0;
                *(_DWORD *)(((v6 + 1472) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v6 + 64);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v6 + 1472),
                  byte_1A0D8BA0,
                  (const std::allocator<char> *)(v6 + 64));
                *(_DWORD *)(((v6 + 1408) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v6 + 48);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v6 + 1408),
                  "<xmlattr>.name",
                  (const std::allocator<char> *)(v6 + 48));
                if ( *(char *)(((v6 + 1344) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 1375) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 1375) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 1344, 32LL);
                }
                common::tools::PTree::get<std::string>(
                  (std::string *)(v6 + 1344),
                  *((const common::tools::PTree *const *)&v81._anon_0._M_allocated_capacity + 1),
                  (const std::string *)(v6 + 1408),
                  v81);
                std::string::~string((void *)(v6 + 1408));
                *(_DWORD *)(((v6 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v6 + 48);
                *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
                std::string::~string((void *)(v6 + 1472));
                *(_DWORD *)(((v6 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v6 + 64);
                *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
                if ( std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::count(
                       &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
                       (const std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::key_type *)(v6 + 1344)) )
                {
                  *(_DWORD *)(((v6 + 1600) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v6 + 1600) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v6 + 1631) >> 3) + 0x7FFF8000) != 0
                    && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 1631) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v6 + 1600, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v6 + 1600),
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/behavior_tree_config.cpp",
                    "parseNode",
                    372);
                  v48 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                          (common::milog::MiLogStream *const)(v6 + 1600),
                          (const char (*)[10])"paseNode:");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v48,
                    (const std::string *)(v6 + 1344));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1600));
                  *(_DWORD *)(((v6 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                  register_logic_config_ptr = std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::at(
                                                &BehaviorTreeConfig::register_config_node_map_[abi:cxx11],
                                                (const std::map<std::string,std::shared_ptr<BTNodeConfigBase>>::key_type *)(v6 + 1344));
                  if ( std::operator==<BTNodeConfigBase>(register_logic_config_ptr, 0LL) )
                  {
                    *(_DWORD *)(((v6 + 1664) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v6 + 1664) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v6 + 1695) >> 3) + 0x7FFF8000) != 0
                      && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 1695) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v6 + 1664, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v6 + 1664),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/behavior_tree_config.cpp",
                      "parseNode",
                      376);
                    v49 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                            (common::milog::MiLogStream *const)(v6 + 1664),
                            (const char (*)[37])"register_config_node_map_ node_name:");
                    v50 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                            v49,
                            (const std::string *)(v6 + 1344));
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v50,
                      (const char (*)[32])" register_config_ptr is nullptr");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1664));
                    *(_DWORD *)(((v6 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                    v5 = -1;
                  }
                  else
                  {
                    *(_WORD *)(((v6 + 256) >> 3) + 0x7FFF8000) = 0;
                    v51 = (unsigned __int64)std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)register_logic_config_ptr);
                    if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
                      v51 = __asan_report_load8(v51);
                    v52 = *(_QWORD *)v51 + 24LL;
                    if ( *(_BYTE *)((v52 >> 3) + 0x7FFF8000) )
                      v51 = __asan_report_load8(*(_QWORD *)v51 + 24LL);
                    v53 = *(void (__fastcall **)(unsigned __int64, unsigned __int64))v52;
                    if ( *(_WORD *)(((v6 + 256) >> 3) + 0x7FFF8000) )
                      v51 = __asan_report_store16(v6 + 256);
                    v53(v6 + 256, v51);
                    if ( std::operator==<BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v6 + 256), 0LL) )
                    {
                      *(_DWORD *)(((v6 + 1728) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v6 + 1728) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v6 + 1759) >> 3) + 0x7FFF8000) != 0
                        && (char)((v6 - 33) & 7) >= *(_BYTE *)(((v6 + 1759) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v6 + 1728, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v6 + 1728),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/behavior_tree_config.cpp",
                        "parseNode",
                        382);
                      v54 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              (common::milog::MiLogStream *const)(v6 + 1728),
                              (const char (*)[11])"node_name:");
                      v55 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                              v54,
                              (const std::string *)(v6 + 1344));
                      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                        v55,
                        (const char (*)[21])" config clone failed");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1728));
                      *(_DWORD *)(((v6 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                      v5 = -1;
                    }
                    else
                    {
                      v56 = (unsigned __int64)std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTNodeConfigBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 256));
                      if ( *(_BYTE *)((v56 >> 3) + 0x7FFF8000) )
                        v56 = __asan_report_load8(v56);
                      v57 = *(_QWORD *)v56 + 8LL;
                      if ( *(_BYTE *)((v57 >> 3) + 0x7FFF8000) )
                        v56 = __asan_report_load8(*(_QWORD *)v56 + 8LL);
                      if ( (*(unsigned int (__fastcall **)(unsigned __int64, unsigned __int64))v57)(v56, v6 + 384) )
                      {
                        *(_DWORD *)(((v6 + 1792) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v6 + 1792) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v6 + 1823) >> 3) + 0x7FFF8000) != 0
                          && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 1823) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v6 + 1792, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v6 + 1792),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/behavior_tree_config.cpp",
                          "parseNode",
                          387);
                        v58 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                                (common::milog::MiLogStream *const)(v6 + 1792),
                                (const char (*)[15])"behavior file:");
                        v59 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                v58,
                                &this->config_file_name_);
                        v60 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                v59,
                                (const char (*)[7])" node:");
                        v61 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                                v60,
                                (const std::string *)(v6 + 1344));
                        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v61,
                          (const char (*)[17])" param not valid");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1792));
                        *(_DWORD *)(((v6 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                        v5 = -1;
                      }
                      else
                      {
                        v62 = std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
                        std::vector<std::shared_ptr<BTNodeConfigBase>>::push_back(
                          &v62->child_vec,
                          (const std::vector<std::shared_ptr<BTNodeConfigBase>>::value_type *)(v6 + 256));
                        v5 = 0;
                      }
                    }
                    std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v6 + 256));
                  }
                }
                else
                {
                  *(_DWORD *)(((v6 + 1536) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v6 + 1536) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v6 + 1567) >> 3) + 0x7FFF8000) != 0
                    && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 1567) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v6 + 1536, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v6 + 1536),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/behavior_tree_config.cpp",
                    "parseNode",
                    369);
                  v44 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          (common::milog::MiLogStream *const)(v6 + 1536),
                          (const char (*)[15])"behavior file:");
                  v45 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v44,
                          &this->config_file_name_);
                  v46 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v45, (const char (*)[8])", node:");
                  v47 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v46,
                          (const std::string *)(v6 + 1344));
                  common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v47,
                    (const char (*)[15])" not implement");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1536));
                  *(_DWORD *)(((v6 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                  v5 = -1;
                }
                std::string::~string((void *)(v6 + 1344));
                *(_DWORD *)(((v6 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                *(_WORD *)(((v6 + 256) >> 3) + 0x7FFF8000) = -1800;
              }
              else if ( cur_node_type == SUBTREE )
              {
                *(_DWORD *)(((v6 + 1856) >> 3) + 0x7FFF8000) = 0;
                *(_DWORD *)(((v6 + 1984) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v6 + 96);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v6 + 1984),
                  byte_1A0D8BA0,
                  (const std::allocator<char> *)(v6 + 96));
                *(_DWORD *)(((v6 + 1920) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v6 + 80);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v6 + 1920),
                  "<xmlattr>.ID",
                  (const std::allocator<char> *)(v6 + 80));
                if ( *(char *)(((v6 + 1856) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 1887) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 1887) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 1856, 32LL);
                }
                common::tools::PTree::get<std::string>(
                  (std::string *)(v6 + 1856),
                  *((const common::tools::PTree *const *)&v81._anon_0._M_allocated_capacity + 1),
                  (const std::string *)(v6 + 1920),
                  v81);
                std::string::~string((void *)(v6 + 1920));
                *(_DWORD *)(((v6 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v6 + 80);
                *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) = -8;
                std::string::~string((void *)(v6 + 1984));
                *(_DWORD *)(((v6 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v6 + 96);
                *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
                *(_WORD *)(((v6 + 288) >> 3) + 0x7FFF8000) = 0;
                if ( *(_WORD *)(((v6 + 288) >> 3) + 0x7FFF8000) )
                  __asan_report_store16(v6 + 288);
                std::dynamic_pointer_cast<BTSubtreeConfig,BTNodeConfigBase>((const std::shared_ptr<BTNodeConfigBase> *)(v6 + 288));
                if ( std::operator==<BTSubtreeConfig>((const std::shared_ptr<BTSubtreeConfig> *)(v6 + 288), 0LL) )
                {
                  *(_DWORD *)(((v6 + 2048) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v6 + 2048) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v6 + 2079) >> 3) + 0x7FFF8000) != 0
                    && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 2079) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v6 + 2048, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v6 + 2048),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/behavior_tree_config.cpp",
                    "parseNode",
                    399);
                  v63 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                          (common::milog::MiLogStream *const)(v6 + 2048),
                          (const char (*)[15])"behavior file:");
                  v64 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                          v63,
                          &this->config_file_name_);
                  v65 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v64, (const char (*)[7])" node:");
                  v66 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v65, node_name);
                  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    v66,
                    (const char (*)[24])" not valid subtree node");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2048));
                  *(_DWORD *)(((v6 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                  v5 = -1;
                }
                else
                {
                  v67 = std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288));
                  std::string::operator=(&v67->subtree_id, v6 + 1856);
                  v68 = std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
                  std::vector<std::shared_ptr<BTNodeConfigBase>>::push_back(
                    &v68->child_vec,
                    (const std::vector<std::shared_ptr<BTNodeConfigBase>>::value_type *)(v6 + 192));
                  *(_WORD *)(((v6 + 320) >> 3) + 0x7FFF8000) = 0;
                  std::shared_ptr<BTNodeConfigBase>::shared_ptr(
                    (std::shared_ptr<BTNodeConfigBase> *const)(v6 + 320),
                    (const std::shared_ptr<BTNodeConfigBase> *)(v6 + 192));
                  v69 = std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288));
                  v70 = std::unordered_map<std::string,common::tools::PTree>::operator[](
                          &this->ptree_map_,
                          &v69->subtree_id);
                  p_subtree_id = &std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTSubtreeConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 288))->subtree_id;
                  v5 = BehaviorTreeConfig::parseTree(
                         this,
                         p_subtree_id,
                         v70,
                         (BTNodeConfigBasePtr *)(v6 + 320),
                         recursive_deptha + 1);
                  std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v6 + 320));
                  *(_WORD *)(((v6 + 320) >> 3) + 0x7FFF8000) = -1800;
                }
                std::shared_ptr<BTSubtreeConfig>::~shared_ptr((std::shared_ptr<BTSubtreeConfig> *const)(v6 + 288));
                std::string::~string((void *)(v6 + 1856));
                *(_DWORD *)(((v6 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                *(_WORD *)(((v6 + 288) >> 3) + 0x7FFF8000) = -1800;
              }
              else
              {
                v72 = std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BTControlConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 224));
                std::vector<std::shared_ptr<BTNodeConfigBase>>::push_back(
                  &v72->child_vec,
                  (const std::vector<std::shared_ptr<BTNodeConfigBase>>::value_type *)(v6 + 192));
                v73 = ((v6 + 448) >> 3) + 2147450880;
                *(_WORD *)v73 = 0;
                *(_BYTE *)(v73 + 2) = 0;
                if ( *(char *)(((v6 + 448) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 471) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 - 41) & 7) >= *(_BYTE *)(((v6 + 471) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 448, 24LL);
                }
                common::tools::PTree::getAllChild[abi:cxx11](
                  (std::list<std::pair<std::string,common::tools::PTree>> *)(v6 + 448),
                  *((const common::tools::PTree *const *)&v81._anon_0._M_allocated_capacity + 1));
                __for_range = (const std::list<std::pair<std::string,common::tools::PTree>> *)(v6 + 448);
                *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(std::list<std::pair<std::string,common::tools::PTree>>::const_iterator *)(v6 + 128) = std::list<std::pair<std::string,common::tools::PTree>>::begin(__for_range);
                *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8();
                *(std::list<std::pair<std::string,common::tools::PTree>>::const_iterator *)(v6 + 160) = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range);
                while ( 1 )
                {
                  if ( !std::operator!=(
                          (const std::_List_const_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v6 + 128),
                          (const std::_List_const_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)(v6 + 160)) )
                  {
                    v78 = 1;
                    goto LABEL_123;
                  }
                  v90 = std::_List_const_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_const_iterator<std::pair<std::string,common::tools::PTree> > *const)(v6 + 128));
                  child_name = (std::tuple_element<0,const std::pair<std::string,common::tools::PTree> >::type *)std::get<0ul,std::string,common::tools::PTree>(v90);
                  child_tree = (std::tuple_element<1,const std::pair<std::string,common::tools::PTree> >::type *)std::get<1ul,std::string,common::tools::PTree>(v90);
                  *(_WORD *)(((v6 + 352) >> 3) + 0x7FFF8000) = 0;
                  std::shared_ptr<BTNodeConfigBase>::shared_ptr(
                    (std::shared_ptr<BTNodeConfigBase> *const)(v6 + 352),
                    (const std::shared_ptr<BTNodeConfigBase> *)(v6 + 192));
                  v82 = BehaviorTreeConfig::parseNode(
                          this,
                          child_name,
                          child_tree,
                          (BTNodeConfigBasePtr *)(v6 + 352),
                          WORD2(v81._M_string_length) + 1) != 0;
                  std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v6 + 352));
                  *(_WORD *)(((v6 + 352) >> 3) + 0x7FFF8000) = -1800;
                  if ( v82 )
                    break;
                  std::_List_const_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_const_iterator<std::pair<std::string,common::tools::PTree> > *const)(v6 + 128));
                }
                *(_DWORD *)(((v6 + 2112) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v6 + 2112) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 2143) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 2143) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 2112, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v6 + 2112),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/behavior_tree_config.cpp",
                  "parseNode",
                  414);
                v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v6 + 2112),
                        (const char (*)[16])"parseTree node:");
                v75 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v74, node_name);
                v76 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v75, (const char (*)[8])" child:");
                v77 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v76, child_name);
                common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v77, (const char (*)[8])" failed");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2112));
                *(_DWORD *)(((v6 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                v5 = -1;
                v78 = 0;
LABEL_123:
                *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) = -8;
                v83 = v78 == 1;
                std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v6 + 448));
                v79 = ((v6 + 448) >> 3) + 2147450880;
                *(_WORD *)v79 = -1800;
                *(_BYTE *)(v79 + 2) = -8;
                if ( v83 )
                  v5 = 0;
              }
            }
            else
            {
              *(_DWORD *)(((v6 + 1280) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v6 + 1280) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v6 + 1311) >> 3) + 0x7FFF8000) != 0
                && (char)((v6 + 31) & 7) >= *(_BYTE *)(((v6 + 1311) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v6 + 1280, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v6 + 1280),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/behavior_tree_config.cpp",
                "parseNode",
                360);
              v37 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      (common::milog::MiLogStream *const)(v6 + 1280),
                      (const char (*)[15])"behavior file:");
              v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &this->config_file_name_);
              v39 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])" node:");
              v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, node_name);
              v41 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v40, (const char (*)[7])" type:");
              *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) = 4;
              v42 = cur_node_type;
              if ( *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) <= 3 )
              {
                v41 = (common::milog::MiLogStream *)(v6 + 112);
                __asan_report_store4(v6 + 112);
              }
              *(_DWORD *)(v6 + 112) = v42;
              v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v41,
                      (const unsigned int *)(v6 + 112));
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v43, (const char (*)[11])" not valid");
              *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1280));
              *(_DWORD *)(((v6 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
            }
          }
          std::shared_ptr<BTControlConfig>::~shared_ptr((std::shared_ptr<BTControlConfig> *const)(v6 + 224));
        }
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 384));
      }
      std::shared_ptr<BTNodeConfigBase>::~shared_ptr((std::shared_ptr<BTNodeConfigBase> *const)(v6 + 192));
    }
  }
  else
  {
    if ( *(char *)(((v6 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 607) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 95) & 7) >= *(_BYTE *)(((v6 + 607) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 576, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 576),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/behavior_tree_config.cpp",
      "parseNode",
      322);
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
            (common::milog::MiLogStream *const)(v6 + 576),
            (const char (*)[15])"behavior file:");
    v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &this->config_file_name_);
    v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])", node name:");
    v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, node_name);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v14, (const char (*)[15])" not implement");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 576));
    v5 = -1;
  }
  if ( v94 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8108) = 0LL;
    memset(
      (void *)((unsigned __int64)(v8 + 536862745) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v8 + 2147450972 - (((_DWORD)v8 + 2147450980) & 0xFFFFFFF8) + 180) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    __asan_stack_free_6(v6, 2176LL, v94);
  }
  return v5;
};

// Line 425: range 000000000CCB6870-000000000CCB689D
int32_t __cdecl BTNodeParamStr::parseFrom(BTNodeParamStr *const this, const std::string *source)
{
  std::string::operator=(&this->value, source);
  return 0;
};

// Line 431: range 000000000CCB689E-000000000CCB6B65
int32_t __cdecl BTNodeParamBool::parseFrom(BTNodeParamBool *const this, const std::string *source)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int v8; // eax
  bool v9; // cl
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 num:432 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTNodeParamBool::parseFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  if ( common::tools::StringUtils::strToNum<unsigned int>(source, (unsigned int *)(v2 + 48), 1) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      435);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[18])"parseFrom source:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, source);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" to num failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  else
  {
    v8 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
      __asan_report_load4(v2 + 48);
    v9 = *(_DWORD *)(v2 + 48) != 0;
    if ( *(char *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->value);
    this->value = v9;
    result = 0;
  }
  if ( v10 == (char *)v2 )
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
  return result;
};

// Line 443: range 000000000CCB6B66-000000000CCB6E28
int32_t __cdecl BTNodeParamInteger::parseFrom(BTNodeParamInteger *const this, const std::string *source)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int v8; // eax
  int32_t v9; // ecx
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 num:444 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTNodeParamInteger::parseFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  if ( common::tools::StringUtils::strToNum<int>(source, (int *)(v2 + 48), 1) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      447);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[18])"parseFrom source:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, source);
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" to num failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  else
  {
    v8 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
      __asan_report_load4(v2 + 48);
    v9 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->value);
    }
    this->value = v9;
    result = 0;
  }
  if ( v10 == (char *)v2 )
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
  return result;
};

// Line 455: range 000000000CCB6E2A-000000000CCB70EC
int32_t __cdecl BTNodeParamUint32::parseFrom(BTNodeParamUint32 *const this, const std::string *source)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int v8; // eax
  uint32_t v9; // ecx
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 num:456 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTNodeParamUint32::parseFrom;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  if ( common::tools::StringUtils::strToNum<unsigned int>(source, (unsigned int *)(v2 + 48), 1) )
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      459);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[18])"parseFrom source:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, source);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v6, (const char (*)[18])" to uint32 failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  else
  {
    v8 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
      __asan_report_load4(v2 + 48);
    v9 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->value);
    }
    this->value = v9;
    result = 0;
  }
  if ( v10 == (char *)v2 )
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
  return result;
};

// Line 467: range 000000000CCB70EE-000000000CCB72E8
int32_t __cdecl BTNodeParamBehaviorConfigSortType::parseFrom(
        BTNodeParamBehaviorConfigSortType *const this,
        const std::string *source)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTNodeParamBehaviorConfigSortType::parseFrom;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::enumStrToVal(source, &this->value) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      470);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[18])"parseFrom source:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, source);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v6,
      (const char (*)[39])" to enum BehaviorConfigSortType failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 477: range 000000000CCB72EA-000000000CCB74E4
int32_t __cdecl BTNodeParamBehaviorConfigChangeCharacterSortType::parseFrom(
        BTNodeParamBehaviorConfigChangeCharacterSortType *const this,
        const std::string *source)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = BTNodeParamBehaviorConfigChangeCharacterSortType::parseFrom;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::enumStrToVal(source, &this->value) )
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      480);
    v5 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[18])"parseFrom source:");
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, source);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      v6,
      (const char (*)[54])" to enum BehaviorConfigChangeCharacterSortType failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 487: range 000000000CCB74E6-000000000CCB7E0E
int32_t __cdecl BTNodeParamGCGSkillTagTypeArray::parseFrom(
        BTNodeParamGCGSkillTagTypeArray *const this,
        const std::string *source)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r15
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference v9; // rax
  bool v10; // r15
  int v11; // r15d
  int v12; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+28h] [rbp-258h]
  char v15[592]; // [rsp+30h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 4 13 skill_tag:496 96 8 15 __for_begin:494 128 8 13 __fo"
                        "r_end:494 160 24 11 str_vec:488 224 32 9 <unknown> 288 32 9 <unknown> 352 32 7 str:494 416 32 9 "
                        "<unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BTNodeParamGCGSkillTagTypeArray::parseFrom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 160));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    ";",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::StringUtils::splitToList(
         source,
         (const std::string *)(v3 + 224),
         (std::vector<std::string> *)(v3 + 160),
         0) != 0;
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      491);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           (common::milog::MiLogStream *const)(v3 + 288),
           (const char (*)[20])"splitToList source:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, source);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v3 + 160);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 96) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128)) )
    {
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      v9 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 96));
      std::string::basic_string(v3 + 352, v9);
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = 0;
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 416),
        off_1A0D87E0,
        (const std::allocator<char> *)(v3 + 64));
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::tools::StringUtils::trim(
        (std::string *)(v3 + 480),
        (const std::string *)(v3 + 352),
        (const std::string *)(v3 + 416),
        1);
      v10 = !data::enumStrToVal((const std::string *)(v3 + 480), (data::GCGSkillTagType *)(v3 + 80));
      std::string::~string((void *)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::string::~string((void *)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 64);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        v2 = -1;
        v11 = 0;
      }
      else
      {
        std::set<data::GCGSkillTagType>::insert(
          &this->value,
          (const std::set<data::GCGSkillTagType>::value_type *)(v3 + 80));
        v11 = 1;
      }
      std::string::~string((void *)(v3 + 352));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v11 != 1 )
      {
        v12 = 0;
        goto LABEL_25;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 96));
    }
    v12 = 1;
LABEL_25:
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 == 1 )
      v2 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 160));
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 507: range 000000000CCB7E10-000000000CCB90BC
int32_t __cdecl BTNodeParamActionPlanReviseList::parseFrom(
        BTNodeParamActionPlanReviseList *const this,
        const std::string *source)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r15
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference v9; // rax
  unsigned __int64 v10; // rax
  bool v11; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  common::milog::MiLogStream *v15; // r14
  std::vector<std::string>::size_type v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const std::string *v19; // rsi
  bool v20; // r15
  common::milog::MiLogStream *v21; // r14
  const std::string *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const std::string *v24; // rax
  common::milog::MiLogStream *v25; // r14
  const std::string *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  int v29; // r15d
  std::map<data::ActionPlanPriorReviseType,int>::mapped_type *v30; // rax
  _DWORD *v31; // rdx
  unsigned __int64 v32; // rax
  int v33; // edx
  std::vector<std::string> *__for_range; // [rsp+28h] [rbp-418h]
  char v36[1040]; // [rsp+30h] [rbp-410h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(992LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "20 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 15 revise_type:527 112 4 14 revise_nu"
                        "m:533 128 8 15 __for_begin:514 160 8 13 __for_end:514 192 8 9 <unknown> 224 24 11 str_vec:508 28"
                        "8 24 22 key_value_pair_vec:516 352 32 9 <unknown> 416 32 9 <unknown> 480 32 7 str:514 544 32 9 <"
                        "unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <u"
                        "nknown> 928 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BTNodeParamActionPlanReviseList::parseFrom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 224));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 352),
    ";",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::StringUtils::splitToList(
         source,
         (const std::string *)(v3 + 352),
         (std::vector<std::string> *)(v3 + 224),
         0) != 0;
  std::string::~string((void *)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      511);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           (common::milog::MiLogStream *const)(v3 + 416),
           (const char (*)[20])"splitToList source:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, source);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v3 + 224);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 160) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 160)) )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      v9 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
      std::string::basic_string(v3 + 480, v9);
      v10 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v10 = 0;
      *(_BYTE *)(v10 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 288));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 544),
        ":",
        (const std::allocator<char> *)(v3 + 64));
      v11 = common::tools::StringUtils::splitToList(
              (const std::string *)(v3 + 480),
              (const std::string *)(v3 + 544),
              (std::vector<std::string> *)(v3 + 288),
              0) != 0;
      std::string::~string((void *)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 64);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
      {
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/behavior_tree_config.cpp",
          "parseFrom",
          519);
        v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[17])"splitToList str:");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v3 + 480));
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 288)) == 2 )
      {
        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 96);
        *(_DWORD *)(v3 + 96) = 0;
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 736),
          off_1A0D87E0,
          (const std::allocator<char> *)(v3 + 80));
        v19 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 0LL);
        if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
        {
          v19 = (const std::string *)32;
          __asan_report_store_n(v3 + 800, 32LL);
        }
        common::tools::StringUtils::trim((std::string *)(v3 + 800), v19, (const std::string *)(v3 + 736), 1);
        v20 = !data::enumStrToVal((const std::string *)(v3 + 800), (data::ActionPlanPriorReviseType *)(v3 + 96));
        std::string::~string((void *)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 80);
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v20 )
        {
          *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 864, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 864),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/behavior_tree_config.cpp",
            "parseFrom",
            530);
          v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)(v3 + 864),
                  (const char (*)[33])"key_value_pair_vec[0] not valid:");
          v22 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 0LL);
          v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v22);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            v23,
            (const char (*)[44])" cannnot parse to ActionPlanPriorReviseType");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
          *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 112);
          *(_DWORD *)(v3 + 112) = 0;
          v24 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 1uLL);
          if ( common::tools::StringUtils::strToNum<int>(v24, (int *)(v3 + 112), 1) )
          {
            *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/behavior_tree_config.cpp",
              "parseFrom",
              536);
            v25 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    (common::milog::MiLogStream *const)(v3 + 928),
                    (const char (*)[33])"key_value_pair_vec[1] not valid:");
            v26 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 1uLL);
            v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, v26);
            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v27,
              (const char (*)[24])" cannnot parse to int32");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
            *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
          }
          else
          {
            v28 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v28 != 0 && (char)v28 <= 3 )
              __asan_report_load4(v3 + 112);
            v29 = *(_DWORD *)(v3 + 112);
            v30 = std::map<data::ActionPlanPriorReviseType,int>::operator[](
                    &this->value,
                    (const std::map<data::ActionPlanPriorReviseType,int>::key_type *)(v3 + 96));
            v31 = v30;
            if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v30);
            }
            *v31 = v29;
            v14 = 1;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/behavior_tree_config.cpp",
          "parseFrom",
          524);
        v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)(v3 + 672),
                (const char (*)[35])"key_value_pair_vec size not valid:");
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        v16 = std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 288));
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(v3 + 192) = v16;
        v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v15,
                (const unsigned __int64 *)(v3 + 192));
        v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v17,
                (const char (*)[21])" key_value_pair_vec:");
        common::milog::MiLogStream::operator<<<std::string>(v18, (const std::vector<std::string> *)(v3 + 288));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 288));
      std::string::~string((void *)(v3 + 480));
      v32 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v32 = -1800;
      *(_BYTE *)(v32 + 2) = -8;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( v14 != 1 )
      {
        v33 = 0;
        goto LABEL_47;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
    }
    v33 = 1;
LABEL_47:
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v33 == 1 )
      v2 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 224));
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = -168430091;
  }
  return v2;
};

// Line 545: range 000000000CCB90BE-000000000CCB99E6
int32_t __cdecl BTNodeParamGCGCardTagTypeArray::parseFrom(
        BTNodeParamGCGCardTagTypeArray *const this,
        const std::string *source)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r15
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference v9; // rax
  bool v10; // r15
  int v11; // r15d
  int v12; // edx
  int32_t result; // eax
  std::vector<std::string> *__for_range; // [rsp+28h] [rbp-258h]
  char v15[592]; // [rsp+30h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 4 12 card_tag:554 96 8 15 __for_begin:552 128 8 13 __for"
                        "_end:552 160 24 11 str_vec:546 224 32 9 <unknown> 288 32 9 <unknown> 352 32 7 str:552 416 32 9 <"
                        "unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BTNodeParamGCGCardTagTypeArray::parseFrom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556927;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 160));
  std::allocator<char>::allocator(v3 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 224),
    ";",
    (const std::allocator<char> *)(v3 + 48));
  v6 = common::tools::StringUtils::splitToList(
         source,
         (const std::string *)(v3 + 224),
         (std::vector<std::string> *)(v3 + 160),
         0) != 0;
  std::string::~string((void *)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 48);
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      549);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           (common::milog::MiLogStream *const)(v3 + 288),
           (const char (*)[20])"splitToList source:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, source);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v3 + 160);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 96) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128)) )
    {
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      v9 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 96));
      std::string::basic_string(v3 + 352, v9);
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80);
      *(_DWORD *)(v3 + 80) = 0;
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 416),
        off_1A0D87E0,
        (const std::allocator<char> *)(v3 + 64));
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::tools::StringUtils::trim(
        (std::string *)(v3 + 480),
        (const std::string *)(v3 + 352),
        (const std::string *)(v3 + 416),
        1);
      v10 = !data::enumStrToVal((const std::string *)(v3 + 480), (data::GCGTagType *)(v3 + 80));
      std::string::~string((void *)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::string::~string((void *)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 64);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        v2 = -1;
        v11 = 0;
      }
      else
      {
        std::set<data::GCGTagType>::insert(&this->value, (const std::set<data::GCGTagType>::value_type *)(v3 + 80));
        v11 = 1;
      }
      std::string::~string((void *)(v3 + 352));
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v11 != 1 )
      {
        v12 = 0;
        goto LABEL_25;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 96));
    }
    v12 = 1;
LABEL_25:
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 == 1 )
      v2 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 160));
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 565: range 000000000CCB99E8-000000000CCBAEFE
int32_t __cdecl BTNodeParamCharacterOnstageReviseList::parseFrom(
        BTNodeParamCharacterOnstageReviseList *const this,
        const std::string *source)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // r15
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  bool v10; // r15
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  common::milog::MiLogStream *v14; // r14
  std::vector<std::string>::size_type v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::string *v18; // rsi
  bool v19; // r15
  common::milog::MiLogStream *v20; // r14
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // rax
  const std::string *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const std::string *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  int v28; // edi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // r15d
  std::map<data::CharacterOnstagePriorReviseType,int>::mapped_type *v32; // rax
  _DWORD *v33; // rdx
  unsigned __int64 v34; // rax
  int v35; // edx
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-460h]
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference str; // [rsp+28h] [rbp-458h]
  char v40[1104]; // [rsp+30h] [rbp-450h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1056LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 4 15 revise_type:585 96 4 14 revise_num"
                        ":597 112 4 9 <unknown> 128 8 15 __for_begin:572 160 8 13 __for_end:572 192 8 9 <unknown> 224 24 "
                        "11 str_vec:566 288 24 22 key_value_pair_vec:574 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <"
                        "unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <u"
                        "nknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BTNodeParamCharacterOnstageReviseList::parseFrom;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556927;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 224));
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 352),
    ";",
    (const std::allocator<char> *)(v3 + 32));
  v6 = common::tools::StringUtils::splitToList(
         source,
         (const std::string *)(v3 + 352),
         (std::vector<std::string> *)(v3 + 224),
         0) != 0;
  std::string::~string((void *)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( v6 )
  {
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/behavior_tree_config.cpp",
      "parseFrom",
      569);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           (common::milog::MiLogStream *const)(v3 + 416),
           (const char (*)[20])"splitToList source:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, source);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
  }
  else
  {
    __for_range = (std::vector<std::string> *)(v3 + 224);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 128) = std::vector<std::string>::begin(__for_range);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8();
    *(std::vector<std::string>::iterator *)(v3 + 160) = std::vector<std::string>::end(__for_range);
    while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 160)) )
    {
      str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
      v9 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v9 = 0;
      *(_BYTE *)(v9 + 2) = 0;
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 288));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 480),
        ":",
        (const std::allocator<char> *)(v3 + 48));
      v10 = common::tools::StringUtils::splitToList(
              str,
              (const std::string *)(v3 + 480),
              (std::vector<std::string> *)(v3 + 288),
              0) != 0;
      std::string::~string((void *)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 48);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v10 )
      {
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/behavior_tree_config.cpp",
          "parseFrom",
          577);
        v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[17])"splitToList str:");
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, str);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
      else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 288)) == 2 )
      {
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80);
        *(_DWORD *)(v3 + 80) = 0;
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 672),
          off_1A0D87E0,
          (const std::allocator<char> *)(v3 + 64));
        v18 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 0LL);
        if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
        {
          v18 = (const std::string *)32;
          __asan_report_store_n(v3 + 736, 32LL);
        }
        common::tools::StringUtils::trim((std::string *)(v3 + 736), v18, (const std::string *)(v3 + 672), 1);
        v19 = !data::enumStrToVal((const std::string *)(v3 + 736), (data::CharacterOnstagePriorReviseType *)(v3 + 80));
        std::string::~string((void *)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::string::~string((void *)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 64);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v19 )
        {
          *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 800, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 800),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/behavior_tree_config.cpp",
            "parseFrom",
            588);
          v20 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)(v3 + 800),
                  (const char (*)[33])"key_value_pair_vec[0] not valid:");
          v21 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 0LL);
          v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, v21);
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            v22,
            (const char (*)[50])" cannnot parse to CharacterOnstagePriorReviseType");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
          *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 80);
          if ( *(_DWORD *)(v3 + 80) )
          {
            *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 96);
            *(_DWORD *)(v3 + 96) = 0;
            v23 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 1uLL);
            if ( common::tools::StringUtils::strToNum<int>(v23, (int *)(v3 + 96), 1) )
            {
              *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 928, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 928),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/behavior_tree_config.cpp",
                "parseFrom",
                600);
              v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      (common::milog::MiLogStream *const)(v3 + 928),
                      (const char (*)[33])"key_value_pair_vec[1] not valid:");
              v25 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 288), 1uLL);
              v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, v25);
              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v26,
                (const char (*)[24])" cannnot parse to int32");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
              *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v13 = 0;
            }
            else
            {
              *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 992, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 992),
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/behavior_tree_config.cpp",
                "parseFrom",
                604);
              v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      (common::milog::MiLogStream *const)(v3 + 992),
                      (const char (*)[14])"revise_type: ");
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 80);
              v28 = *(_DWORD *)(v3 + 80);
              if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
              {
                v28 = v3 + 112;
                __asan_report_store4(v3 + 112);
              }
              *(_DWORD *)(v3 + 112) = v28;
              v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v27,
                      (const unsigned int *)(v3 + 112));
              v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v29,
                      (const char (*)[15])" ,revise_num: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v30, (const int *)(v3 + 96));
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
              *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
              if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 96);
              v31 = *(_DWORD *)(v3 + 96);
              v32 = std::map<data::CharacterOnstagePriorReviseType,int>::operator[](
                      &this->value,
                      (const std::map<data::CharacterOnstagePriorReviseType,int>::key_type *)(v3 + 80));
              v33 = v32;
              if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v32);
              }
              *v33 = v31;
              v13 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 864, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 864),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/behavior_tree_config.cpp",
              "parseFrom",
              593);
            common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)(v3 + 864),
              (const char (*)[20])"revise_type is NONE");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
            *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 608, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 608),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/behavior_tree_config.cpp",
          "parseFrom",
          582);
        v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[35])"key_value_pair_vec size not valid:");
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        v15 = std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 288));
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8();
        *(_QWORD *)(v3 + 192) = v15;
        v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v14,
                (const unsigned __int64 *)(v3 + 192));
        v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v16,
                (const char (*)[21])" key_value_pair_vec:");
        common::milog::MiLogStream::operator<<<std::string>(v17, (const std::vector<std::string> *)(v3 + 288));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 288));
      v34 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v34 = -1800;
      *(_BYTE *)(v34 + 2) = -8;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v13 != 1 )
      {
        v35 = 0;
        goto LABEL_59;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 128));
    }
    v35 = 1;
LABEL_59:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v35 == 1 )
      v2 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 224));
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1056LL, v40);
  }
  return v2;
};
