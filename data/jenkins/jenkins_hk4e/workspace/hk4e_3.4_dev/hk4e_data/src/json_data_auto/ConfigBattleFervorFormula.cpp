// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigBattleFervorFormula.cpp

// Line 19: range 0000000013AE70B6-0000000013AE7315
const char *__cdecl data::enumValToStr(data::BattleFervorStateIDTriggerType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rcx
  char v7; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::enumValToStr;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -202116109;
  if ( e == Enter )
  {
    result = "Enter";
  }
  else if ( e == EnterAndStay )
  {
    result = "EnterAndStay";
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "enumValToStr",
      27);
    v5 = "invalid e:";
    v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[11])"invalid e:");
    v7 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(v1 + 48, v5);
    }
    *(_DWORD *)(v1 + 48) = e;
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = byte_1ABBC960;
  }
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 33: range 0000000013AE7316-0000000013AE7B4D
bool __cdecl data::enumStrToVal(const std::string *s, data::BattleFervorStateIDTriggerType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::BattleFervorStateIDTriggerType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::BattleFervorStateIDTriggerType> >::pointer v11; // rax
  data::BattleFervorStateIDTriggerType second; // ecx
  char v13; // dl
  data::BattleFervorStateIDTriggerType *ea; // [rsp+10h] [rbp-1E0h]
  char v15[464]; // [rsp+20h] [rbp-1D0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 5 it:44 144 8 9 <unk"
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "enumStrToVal",
      36);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::BattleFervorStateIDTriggerType>::pair<char const(&)[6],data::BattleFervorStateIDTriggerType,true>(
        (std::pair<const std::string,data::BattleFervorStateIDTriggerType> *const)(v2 + 304),
        (const char (*)[6])"Enter",
        (data::BattleFervorStateIDTriggerType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Enter");
      *(_DWORD *)(v2 + 96) = 3;
      std::pair<std::string const,data::BattleFervorStateIDTriggerType>::pair<char const(&)[13],data::BattleFervorStateIDTriggerType,true>(
        (std::pair<const std::string,data::BattleFervorStateIDTriggerType> *const)(v2 + 344),
        (const char (*)[13])"EnterAndStay",
        (data::BattleFervorStateIDTriggerType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::BattleFervorStateIDTriggerType>>::allocator((std::allocator<std::pair<const std::string,data::BattleFervorStateIDTriggerType> > *const)(v2 + 64));
      std::map<std::string,data::BattleFervorStateIDTriggerType>::map(
        &data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m,
        (std::initializer_list<std::pair<const std::string,data::BattleFervorStateIDTriggerType> >)__PAIR128__(
                                                                                                     2LL,
                                                                                                     v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::BattleFervorStateIDTriggerType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m);
      e = (data::BattleFervorStateIDTriggerType *)&data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::BattleFervorStateIDTriggerType>::~map,
        &data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::BattleFervorStateIDTriggerType>>::~allocator((std::allocator<std::pair<const std::string,data::BattleFervorStateIDTriggerType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::BattleFervorStateIDTriggerType> *)(v2 + 384);
            i != (std::pair<const std::string,data::BattleFervorStateIDTriggerType> *)(v2 + 304);
            std::pair<std::string const,data::BattleFervorStateIDTriggerType>::~pair(i) )
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
      __asan_report_store8(v2 + 112, e);
    *(std::map<std::string,data::BattleFervorStateIDTriggerType>::iterator *)(v2 + 112) = std::map<std::string,data::BattleFervorStateIDTriggerType>::find(
                                                                                            &data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m,
                                                                                            s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::BattleFervorStateIDTriggerType>::iterator *)(v2 + 144) = std::map<std::string,data::BattleFervorStateIDTriggerType>::end(&data::enumStrToVal(std::string const&,data::BattleFervorStateIDTriggerType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BattleFervorStateIDTriggerType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::BattleFervorStateIDTriggerType> >::_Self *)(v2 + 144));
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "enumStrToVal",
        47);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::BattleFervorStateIDTriggerType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::BattleFervorStateIDTriggerType> > *const)(v2 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v11->second);
      }
      second = v11->second;
      v13 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v13 )
      {
        LOBYTE(v8) = v13 != 0;
        __asan_report_store4(ea, v8);
      }
      *ea = second;
      result = 1;
    }
  }
  if ( v15 == (char *)v2 )
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

// Line 55: range 0000000013AE7B4E-0000000013AE7B7D
const char *__cdecl data::getDescription(data::BattleFervorStateIDTriggerType e)
{
  if ( e == Enter )
    return (const char *)&unk_1AC7EE40;
  if ( e == EnterAndStay )
    return (const char *)&unk_1AC7EE80;
  return "unknown enum value!";
};

// Line 69: range 0000000013AE7B7E-0000000013AE7DB3
data::ConfigBattleFervorUpdatePredicatePtr __cdecl data::createConfigBattleFervorUpdatePredicate(
        const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBattleFervorUpdatePredicatePtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > >::_Base_ptr)"2 32 8 5 it:70 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > >::_Base_ptr)data::createConfigBattleFervorUpdatePredicate;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::find(
                    &data::g_ConfigBattleFervorUpdatePredicateMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::end(&data::g_ConfigBattleFervorUpdatePredicateMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 76: range 0000000013AE7DB4-0000000013AE7DC2
void __cdecl data::ConfigBattleFervorUpdatePredicate::foreachMember(
        data::ConfigBattleFervorUpdatePredicate *const this,
        std::function<void(std::any&)> *p_func)
{
  ;
};

// Line 80: range 0000000013AE7DC4-0000000013AE7E0E
std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> __cdecl data::ConfigBattleFervorUpdatePredicate::clone(
        data::ConfigBattleFervorUpdatePredicate *const this)
{
  data::ConfigBattleFervorUpdatePredicate *v1; // rsi
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate,data::ConfigBattleFervorUpdatePredicate&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdatePredicate,data::ConfigBattleFervorUpdatePredicate> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 84: range 0000000013AE7E10-0000000013AE7E61
bool __cdecl data::ConfigBattleFervorUpdatePredicate::fromJson(
        data::ConfigBattleFervorUpdatePredicate *const this,
        const Json::Value *jval)
{
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
  this->is_json_loaded = 1;
  return 1;
};

// Line 89: range 0000000013AE7E62-0000000013AE87B7
data::ConfigBattleFervorUpdatePredicatePtr __cdecl data::ConfigBattleFervorUpdatePredicate::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdatePredicatePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v14[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:102 96 32 9 <unknown> 160 32 9 <unknown> 224 32 12 type_name:96 2"
                        "88 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        99);
      common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[61])"fromJson for: ConfigBattleFervorUpdatePredicate $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdatePredicate((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdatePredicate>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          105);
        v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[59])"create ConfigBattleFervorUpdatePredicate fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
        {
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            110);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 24, v1, v12);
          *(_BYTE *)(v10 + 24) = 1;
          std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)jval,
            (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      93);
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[66])"jsonValueFind for: ConfigBattleFervorUpdatePredicate $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 118: range 0000000013AE87B8-0000000013AE87CB
int32_t __cdecl data::ConfigBattleFervorUpdatePredicate::getHashValue(
        const data::ConfigBattleFervorUpdatePredicate *const this)
{
  return 0;
};

// Line 124: range 0000000013AE87CC-0000000013AE8B2D
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigBattleFervorUpdatePredicateArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // r14d
  bool result; // al
  int v8; // [rsp+0h] [rbp-E0h]
  char v9; // [rsp+8h] [rbp-D8h]
  bool v10; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 elem_ptr:130 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v8, v9);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigBattleFervorUpdatePredicate::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigBattleFervorUpdatePredicate>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v2 + 32),
             0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
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
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "arrFromJson",
          133);
        common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[60])"elem_ptr is nullptr: ConfigBattleFervorUpdatePredicateArray");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)(v2 + 32));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_22;
  }
  v10 = 1;
LABEL_22:
  result = v10;
  if ( v13 == (char *)v2 )
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

// Line 143: range 0000000013AE8B2E-0000000013AE8DE9
int32_t __cdecl data::getArrHashValue(const data::ConfigBattleFervorUpdatePredicateArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:144 64 8 15 __for_begin:145 96 8 13 __for_end:145";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigBattleFervorUpdatePredicate>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 159: range 0000000013C0FDAA-0000000013C0FFEB
void __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRangeRegister::ConfigBattleFervorUpdatePredicate_FactorRangeRegister(
        data::ConfigBattleFervorUpdatePredicate_FactorRangeRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdatePredicate_FactorRangeRegister::ConfigBattleFervorUpdatePredicate_FactorRangeRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_FactorRange>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpdatePredicate_FactorRange",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::operator[](
         &data::g_ConfigBattleFervorUpdatePredicateMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::operator=<data::ConfigBattleFervorUpdatePredicate_FactorRange>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 162: range 0000000013AE8DEA-0000000013AE9040
void __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::foreachMember(
        data::ConfigBattleFervorUpdatePredicate_FactorRange *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 11 min_any:164 64 16 11 max_any:166 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_FactorRange::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigBattleFervorUpdatePredicate::foreachMember(
    (data::ConfigBattleFervorUpdatePredicate *const)this,
    (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->min);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->max);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 171: range 0000000013AE9042-0000000013AE9152
std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::clone(
        data::ConfigBattleFervorUpdatePredicate_FactorRange *const this)
{
  data::ConfigBattleFervorUpdatePredicate_FactorRange *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_FactorRange::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_FactorRange,data::ConfigBattleFervorUpdatePredicate_FactorRange&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdatePredicate_FactorRange,data::ConfigBattleFervorUpdatePredicate_FactorRange> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 175: range 0000000013AE9154-0000000013AE9197
data::ConfigBattleFervorUpdatePredicate_FactorRangePtr __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory::create(
        data::ConfigBattleFervorUpdatePredicate_FactorRangeFactory *const this)
{
  data::ConfigBattleFervorUpdatePredicate_FactorRangePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_FactorRange>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 177: range 0000000013AE9198-0000000013AE98A0
bool __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::fromJson(
        data::ConfigBattleFervorUpdatePredicate_FactorRange *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  float *p_max; // rsi
  const Json::Value *min_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *max_ptr; // [rsp+18h] [rbp-1A8h]
  char v10[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_FactorRange::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigBattleFervorUpdatePredicate::fromJson((data::ConfigBattleFervorUpdatePredicate *const)this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      180);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[55])"fromJson for: ConfigBattleFervorUpdatePredicate fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      off_1AC7F2C0,
      (const std::allocator<char> *)(v2 + 32));
    min_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( min_ptr && !fromJson<float>(min_ptr, &this->min) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        192);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[25])"fromJson for: min fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 256),
        off_1AC7F340,
        (const std::allocator<char> *)(v2 + 48));
      p_max = (float *)(v2 + 256);
      max_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( max_ptr && (p_max = &this->max, !fromJson<float>(max_ptr, &this->max)) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "fromJson",
          204);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[25])"fromJson for: max fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_max, &this->is_json_loaded);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 211: range 0000000013AE98A2-0000000013AEA3E8
data::ConfigBattleFervorUpdatePredicate_FactorRangePtr __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdatePredicate_FactorRangePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:224 96 16 7 ptr:230 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:218 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_FactorRange::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        221);
      common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[73])"fromJson for: ConfigBattleFervorUpdatePredicate_FactorRange $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdatePredicate((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdatePredicate>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          227);
        v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[59])"create ConfigBattleFervorUpdatePredicate fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpdatePredicate_FactorRange,data::ConfigBattleFervorUpdatePredicate>((const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpdatePredicate_FactorRange>(
               (const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            233);
          common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[64])"cast to ConfigBattleFervorUpdatePredicate_FactorRangePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_FactorRange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_FactorRange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              238);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_FactorRange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_FactorRange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      215);
    common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[78])"jsonValueFind for: ConfigBattleFervorUpdatePredicate_FactorRange $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate_FactorRange,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 246: range 0000000013AEA3EA-0000000013AEA5B0
int32_t __cdecl data::ConfigBattleFervorUpdatePredicate_FactorRange::getHashValue(
        const data::ConfigBattleFervorUpdatePredicate_FactorRange *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:247";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_FactorRange::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorUpdatePredicate::getHashValue((const data::ConfigBattleFervorUpdatePredicate *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->min);
  }
  common::tools::HashUtils::appendHash(this->min, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max);
  }
  common::tools::HashUtils::appendHash(this->max, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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

// Line 257: range 0000000013C10064-0000000013C102A5
void __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::operator[](
         &data::g_ConfigBattleFervorUpdatePredicateMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::operator=<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 260: range 0000000013AEA5B2-0000000013AEA782
void __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::foreachMember(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 27 is_update_in_battle_any:262 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBattleFervorUpdatePredicate::foreachMember(
    (data::ConfigBattleFervorUpdatePredicate *const)this,
    (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 32),
    &this->is_update_in_battle);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 267: range 0000000013AEA784-0000000013AEA894
std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::clone(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this)
{
  data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 271: range 0000000013AEA896-0000000013AEA8D9
data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattlePtr __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory::create(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattleFactory *const this)
{
  data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattlePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 273: range 0000000013AEA8DA-0000000013AEAD5E
bool __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::fromJson(
        data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool *p_is_update_in_battle; // rsi
  const Json::Value *is_update_in_battle_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBattleFervorUpdatePredicate::fromJson((data::ConfigBattleFervorUpdatePredicate *const)this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      276);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[55])"fromJson for: ConfigBattleFervorUpdatePredicate fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "isUpdateInBattle",
      (const std::allocator<char> *)(v2 + 48));
    p_is_update_in_battle = (bool *)(v2 + 128);
    is_update_in_battle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( is_update_in_battle_ptr
      && (p_is_update_in_battle = &this->is_update_in_battle,
          !fromJson<bool>(is_update_in_battle_ptr, &this->is_update_in_battle)) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        288);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[38])"fromJson for: isUpdateInBattle fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_is_update_in_battle, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 295: range 0000000013AEAD60-0000000013AEB8A6
data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattlePtr __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattlePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rax
  char v11; // dl
  _BOOL8 v12; // rdx
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v14[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:308 96 16 7 ptr:314 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:302 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        305);
      common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[81])"fromJson for: ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdatePredicate((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdatePredicate>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          311);
        v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[59])"create ConfigBattleFervorUpdatePredicate fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,data::ConfigBattleFervorUpdatePredicate>((const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>(
               (const std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            317);
          common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[72])"cast to ConfigBattleFervorUpdatePredicate_LocalAvatarInBattlePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              322);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdatePredicate> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      299);
    common::milog::MiLogStream::operator<<<char [86],(char *[86])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[86])"jsonValueFind for: ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle> *const)jval,
      0LL);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 330: range 0000000013AEB8A8-0000000013AEBA22
int32_t __cdecl data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::getHashValue(
        const data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  int32_t result; // eax
  char v10[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:331";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdatePredicate_LocalAvatarInBattle::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorUpdatePredicate::getHashValue((const data::ConfigBattleFervorUpdatePredicate *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  v7 = ((_BYTE)this + 25) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_update_in_battle >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_update_in_battle >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->is_update_in_battle, v7, v8);
  common::tools::HashUtils::appendHash(this->is_update_in_battle, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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

// Line 338: range 0000000013AEBA23-0000000013AEBC58
data::ConfigBattleFervorUpdateTriggerPtr __cdecl data::createConfigBattleFervorUpdateTrigger(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBattleFervorUpdateTriggerPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > >::_Base_ptr)"2 32 8 6 it:339 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > >::_Base_ptr)data::createConfigBattleFervorUpdateTrigger;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::find(
                    &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::end(&data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 345: range 0000000013AEBC5A-0000000013AEBDE3
void __cdecl data::ConfigBattleFervorUpdateTrigger::foreachMember(
        data::ConfigBattleFervorUpdateTrigger *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 18 predicates_any:346 64 16 19 delta_value_any:348";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::any::any<std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>> &,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigBattleFervorUpdatePredicate>>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->predicates);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 64),
    &this->delta_value);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 353: range 0000000013AEBDE4-0000000013AEBE2E
std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> __cdecl data::ConfigBattleFervorUpdateTrigger::clone(
        data::ConfigBattleFervorUpdateTrigger *const this)
{
  data::ConfigBattleFervorUpdateTrigger *v1; // rsi
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger,data::ConfigBattleFervorUpdateTrigger&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdateTrigger,data::ConfigBattleFervorUpdateTrigger> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 357: range 0000000013AEBE30-0000000013AEC41C
bool __cdecl data::ConfigBattleFervorUpdateTrigger::fromJson(
        data::ConfigBattleFervorUpdateTrigger *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *predicates_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *delta_value_ptr; // [rsp+18h] [rbp-168h]
  char v10[352]; // [rsp+20h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "predicates",
    (const std::allocator<char> *)(v2 + 32));
  predicates_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( predicates_ptr && !data::arrFromJson(predicates_ptr, &this->predicates) )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      367);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[32])"fromJson for: predicates fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "deltaValue",
      (const std::allocator<char> *)(v2 + 48));
    delta_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( delta_value_ptr && !fromJson<float>(delta_value_ptr, &this->delta_value) )
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        379);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[32])"fromJson for: deltaValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 52) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 386: range 0000000013AEC41E-0000000013AECD7A
data::ConfigBattleFervorUpdateTriggerPtr __cdecl data::ConfigBattleFervorUpdateTrigger::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdateTriggerPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v13[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:399 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:393 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        396);
      common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[59])"fromJson for: ConfigBattleFervorUpdateTrigger $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdateTrigger((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          402);
        v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[57])"create ConfigBattleFervorUpdateTrigger fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
        {
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            407);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)jval,
            0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 52) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)jval,
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      390);
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[64])"jsonValueFind for: ConfigBattleFervorUpdateTrigger $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 415: range 0000000013AECD7C-0000000013AECF05
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger::getHashValue(
        const data::ConfigBattleFervorUpdateTrigger *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:416";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->predicates);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->delta_value);
  }
  common::tools::HashUtils::appendHash(this->delta_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 423: range 0000000013AECF06-0000000013AED267
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigBattleFervorUpdateTriggerArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // r14d
  bool result; // al
  int v8; // [rsp+0h] [rbp-E0h]
  char v9; // [rsp+8h] [rbp-D8h]
  bool v10; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 elem_ptr:429 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v8, v9);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigBattleFervorUpdateTrigger::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 32),
             0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
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
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "arrFromJson",
          432);
        common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[58])"elem_ptr is nullptr: ConfigBattleFervorUpdateTriggerArray");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 32));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_22;
  }
  v10 = 1;
LABEL_22:
  result = v10;
  if ( v13 == (char *)v2 )
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

// Line 442: range 0000000013AED268-0000000013AED523
int32_t __cdecl data::getArrHashValue(const data::ConfigBattleFervorUpdateTriggerArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:443 64 8 15 __for_begin:444 96 8 13 __for_end:444";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigBattleFervorUpdateTrigger>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 458: range 0000000013C103A2-0000000013C105E3
void __cdecl data::ConfigBattleFervorUpateTrigger_ByTickRegister::ConfigBattleFervorUpateTrigger_ByTickRegister(
        data::ConfigBattleFervorUpateTrigger_ByTickRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpateTrigger_ByTickRegister::ConfigBattleFervorUpateTrigger_ByTickRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpateTrigger_ByTick>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpateTrigger_ByTick",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::operator[](
         &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::operator=<data::ConfigBattleFervorUpateTrigger_ByTick>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 461: range 0000000013AED524-0000000013AED657
void __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::foreachMember(
        data::ConfigBattleFervorUpateTrigger_ByTick *const this,
        std::function<void(std::any&)> *p_func)
{
  std::function<void(std::any&)> *v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (std::function<void(std::any&)> *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::function<void(std::any&)> *)v3;
  }
  v2->_M_functor._M_unused._M_object = (void *)1102416563;
  *(_QWORD *)&v2->_M_functor._M_pod_data[8] = "1 32 32 9 <unknown>";
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigBattleFervorUpateTrigger_ByTick::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigBattleFervorUpdateTrigger::foreachMember(this, v2 + 1);
  std::function<void ()(std::any &)>::~function(v2 + 1);
  if ( v5 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_functor._M_unused._M_object = (void *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 466: range 0000000013AED658-0000000013AED768
std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::clone(
        data::ConfigBattleFervorUpateTrigger_ByTick *const this)
{
  data::ConfigBattleFervorUpateTrigger_ByTick *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpateTrigger_ByTick::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpateTrigger_ByTick,data::ConfigBattleFervorUpateTrigger_ByTick&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpateTrigger_ByTick,data::ConfigBattleFervorUpateTrigger_ByTick> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 470: range 0000000013AED76A-0000000013AED7AD
data::ConfigBattleFervorUpateTrigger_ByTickPtr __cdecl data::ConfigBattleFervorUpateTrigger_ByTickFactory::create(
        data::ConfigBattleFervorUpateTrigger_ByTickFactory *const this)
{
  data::ConfigBattleFervorUpateTrigger_ByTickPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpateTrigger_ByTick>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 472: range 0000000013AED7AE-0000000013AED9C6
bool __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::fromJson(
        data::ConfigBattleFervorUpateTrigger_ByTick *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
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
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpateTrigger_ByTick::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigBattleFervorUpdateTrigger::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      475);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[53])"fromJson for: ConfigBattleFervorUpdateTrigger fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 52) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_json_loaded, v6, v7);
    this->is_json_loaded = 1;
    result = 1;
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

// Line 482: range 0000000013AED9C8-0000000013AEE515
data::ConfigBattleFervorUpateTrigger_ByTickPtr __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpateTrigger_ByTickPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorUpateTrigger_ByTick,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:495 96 16 7 ptr:501 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:489 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpateTrigger_ByTick::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        492);
      common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[65])"fromJson for: ConfigBattleFervorUpateTrigger_ByTick $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdateTrigger((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          498);
        v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[57])"create ConfigBattleFervorUpdateTrigger fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpateTrigger_ByTick,data::ConfigBattleFervorUpdateTrigger>((const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpateTrigger_ByTick>(
               (const std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            504);
          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[56])"cast to ConfigBattleFervorUpateTrigger_ByTickPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpateTrigger_ByTick,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpateTrigger_ByTick,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              509);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorUpateTrigger_ByTick,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpateTrigger_ByTick,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 52) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      486);
    common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[70])"jsonValueFind for: ConfigBattleFervorUpateTrigger_ByTick $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpateTrigger_ByTick,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 517: range 0000000013AEE516-0000000013AEE535
int32_t __cdecl data::ConfigBattleFervorUpateTrigger_ByTick::getHashValue(
        const data::ConfigBattleFervorUpateTrigger_ByTick *const this)
{
  return data::ConfigBattleFervorUpdateTrigger::getHashValue(this);
};

// Line 526: range 0000000013C1065C-0000000013C1089D
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister::ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister::ConfigBattleFervorUpdateTrigger_ByStateIDChangedRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpdateTrigger_ByStateIDChanged",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::operator[](
         &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::operator=<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 529: range 0000000013AEE536-0000000013AEE814
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::foreachMember(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 12 type_any:531 64 16 17 state_ids_any:533 96 16 10 cd_any:535 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 128), p_func);
  data::ConfigBattleFervorUpdateTrigger::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 128));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::BattleFervorStateIDTriggerType &,data::BattleFervorStateIDTriggerType,std::any::_Manager_internal<data::BattleFervorStateIDTriggerType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::string> &,std::vector<std::string>,std::any::_Manager_external<std::vector<std::string>>,true,true>(
    (std::any *const)(v2 + 64),
    &this->state_ids);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 96), &this->cd);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 540: range 0000000013AEE816-0000000013AEE926
std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::clone(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 544: range 0000000013AEE928-0000000013AEE96B
data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory::create(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedFactory *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 546: range 0000000013AEE96C-0000000013AEF435
bool __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::fromJson(
        data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *type_ptr; // [rsp+18h] [rbp-2A8h]
  const Json::Value *state_ids_ptr; // [rsp+20h] [rbp-2A0h]
  const Json::Value *cd_ptr; // [rsp+28h] [rbp-298h]
  char v12[656]; // [rsp+30h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  if ( !data::ConfigBattleFervorUpdateTrigger::fromJson(this, jval) )
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
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      549);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[53])"fromJson for: ConfigBattleFervorUpdateTrigger fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "type",
      (const std::allocator<char> *)(v2 + 48));
    type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 224), &this->type);
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        561);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[26])"fromJson for: type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "stateIDs",
        (const std::allocator<char> *)(v2 + 64));
      state_ids_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( state_ids_ptr && !data::arrFromJson(state_ids_ptr, &this->state_ids) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "fromJson",
          573);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[30])"fromJson for: stateIDs fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "cd",
          (const std::allocator<char> *)(v2 + 80));
        cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( cd_ptr && !fromJson<float>(cd_ptr, &this->cd) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "fromJson",
            585);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[24])"fromJson for: cd fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v7 = ((_BYTE)this + 52) & 7;
          v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v8 )
            __asan_report_store1(&this->is_json_loaded, v7, v8);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 592: range 0000000013AEF436-0000000013AEFF83
data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdateTrigger_ByStateIDChangedPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:605 96 16 7 ptr:611 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:599 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        602);
      common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[76])"fromJson for: ConfigBattleFervorUpdateTrigger_ByStateIDChanged $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdateTrigger((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          608);
        v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[57])"create ConfigBattleFervorUpdateTrigger fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,data::ConfigBattleFervorUpdateTrigger>((const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>(
               (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            614);
          common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[67])"cast to ConfigBattleFervorUpdateTrigger_ByStateIDChangedPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              619);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 52) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      596);
    common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[81])"jsonValueFind for: ConfigBattleFervorUpdateTrigger_ByStateIDChanged $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 627: range 0000000013AEFF84-0000000013AF0161
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::getHashValue(
        const data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:628";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByStateIDChanged::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorUpdateTrigger::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->type);
  }
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->state_ids);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cd);
  }
  common::tools::HashUtils::appendHash(this->cd, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v9 == (char *)v2 )
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

// Line 639: range 0000000013C10916-0000000013C10B57
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTagRegister::ConfigBattleFervorUpdateTrigger_ByAttackTagRegister(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTagRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByAttackTagRegister::ConfigBattleFervorUpdateTrigger_ByAttackTagRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpdateTrigger_ByAttackTag",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::operator[](
         &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::operator=<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 642: range 0000000013AF0162-0000000013AF03B8
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::foreachMember(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 19 attack_tags_any:644 64 16 10 cd_any:646 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByAttackTag::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigBattleFervorUpdateTrigger::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::string> &,std::vector<std::string>,std::any::_Manager_external<std::vector<std::string>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->attack_tags);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->cd);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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
};

// Line 651: range 0000000013AF03BA-0000000013AF04CA
std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::clone(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByAttackTag *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByAttackTag::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,data::ConfigBattleFervorUpdateTrigger_ByAttackTag&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 655: range 0000000013AF04CC-0000000013AF050F
data::ConfigBattleFervorUpdateTrigger_ByAttackTagPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory::create(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTagFactory *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByAttackTagPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 657: range 0000000013AF0510-0000000013AF0C1D
bool __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::fromJson(
        data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *attack_tags_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *cd_ptr; // [rsp+18h] [rbp-1A8h]
  char v10[416]; // [rsp+20h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByAttackTag::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigBattleFervorUpdateTrigger::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      660);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[53])"fromJson for: ConfigBattleFervorUpdateTrigger fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "attackTags",
      (const std::allocator<char> *)(v2 + 32));
    attack_tags_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( attack_tags_ptr && !data::arrFromJson(attack_tags_ptr, &this->attack_tags) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        672);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[32])"fromJson for: attackTags fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 256),
        "cd",
        (const std::allocator<char> *)(v2 + 48));
      cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( cd_ptr && !fromJson<float>(cd_ptr, &this->cd) )
      {
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "fromJson",
          684);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[24])"fromJson for: cd fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        result = 0;
      }
      else
      {
        v6 = ((_BYTE)this + 52) & 7;
        v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v7 )
          __asan_report_store1(&this->is_json_loaded, v6, v7);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 691: range 0000000013AF0C1E-0000000013AF176B
data::ConfigBattleFervorUpdateTrigger_ByAttackTagPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdateTrigger_ByAttackTagPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:704 96 16 7 ptr:710 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:698 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByAttackTag::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        701);
      common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[71])"fromJson for: ConfigBattleFervorUpdateTrigger_ByAttackTag $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdateTrigger((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          707);
        v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[57])"create ConfigBattleFervorUpdateTrigger fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,data::ConfigBattleFervorUpdateTrigger>((const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>(
               (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            713);
          common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[62])"cast to ConfigBattleFervorUpdateTrigger_ByAttackTagPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              718);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 52) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      695);
    common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[76])"jsonValueFind for: ConfigBattleFervorUpdateTrigger_ByAttackTag $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByAttackTag,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 726: range 0000000013AF176C-0000000013AF1900
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByAttackTag::getHashValue(
        const data::ConfigBattleFervorUpdateTrigger_ByAttackTag *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:727";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByAttackTag::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorUpdateTrigger::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  ArrHashValue = data::getArrHashValue(&this->attack_tags);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cd);
  }
  common::tools::HashUtils::appendHash(this->cd, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v9 == (char *)v2 )
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

// Line 737: range 0000000013C10BD0-0000000013C10E11
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArtRegister::ConfigBattleFervorUpdateTrigger_ByElementArtRegister(
        data::ConfigBattleFervorUpdateTrigger_ByElementArtRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementArtRegister::ConfigBattleFervorUpdateTrigger_ByElementArtRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementArt>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpdateTrigger_ByElementArt",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::operator[](
         &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::operator=<data::ConfigBattleFervorUpdateTrigger_ByElementArt>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 740: range 0000000013AF1902-0000000013AF1AD2
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::foreachMember(
        data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 cd_any:742 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementArt::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBattleFervorUpdateTrigger::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->cd);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 747: range 0000000013AF1AD4-0000000013AF1BE4
std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::clone(
        data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByElementArt *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementArt::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementArt,data::ConfigBattleFervorUpdateTrigger_ByElementArt&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdateTrigger_ByElementArt,data::ConfigBattleFervorUpdateTrigger_ByElementArt> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 751: range 0000000013AF1BE6-0000000013AF1C29
data::ConfigBattleFervorUpdateTrigger_ByElementArtPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory::create(
        data::ConfigBattleFervorUpdateTrigger_ByElementArtFactory *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByElementArtPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementArt>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 753: range 0000000013AF1C2A-0000000013AF20B3
bool __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::fromJson(
        data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *cd_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementArt::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBattleFervorUpdateTrigger::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      756);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[53])"fromJson for: ConfigBattleFervorUpdateTrigger fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "cd",
      (const std::allocator<char> *)(v2 + 48));
    cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( cd_ptr && !fromJson<float>(cd_ptr, &this->cd) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        768);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[24])"fromJson for: cd fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 52) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 775: range 0000000013AF20B4-0000000013AF2C01
data::ConfigBattleFervorUpdateTrigger_ByElementArtPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdateTrigger_ByElementArtPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementArt,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:788 96 16 7 ptr:794 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:782 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementArt::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        785);
      common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[72])"fromJson for: ConfigBattleFervorUpdateTrigger_ByElementArt $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdateTrigger((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          791);
        v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[57])"create ConfigBattleFervorUpdateTrigger fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpdateTrigger_ByElementArt,data::ConfigBattleFervorUpdateTrigger>((const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpdateTrigger_ByElementArt>(
               (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            797);
          common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[63])"cast to ConfigBattleFervorUpdateTrigger_ByElementArtPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementArt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementArt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              802);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementArt,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementArt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 52) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      779);
    common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[77])"jsonValueFind for: ConfigBattleFervorUpdateTrigger_ByElementArt $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementArt,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 810: range 0000000013AF2C02-0000000013AF2D75
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementArt::getHashValue(
        const data::ConfigBattleFervorUpdateTrigger_ByElementArt *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:811";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementArt::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorUpdateTrigger::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cd);
  }
  common::tools::HashUtils::appendHash(this->cd, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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

// Line 820: range 0000000013C10E8A-0000000013C110CB
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurstRegister::ConfigBattleFervorUpdateTrigger_ByElementBurstRegister(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurstRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementBurstRegister::ConfigBattleFervorUpdateTrigger_ByElementBurstRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpdateTrigger_ByElementBurst",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::operator[](
         &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::operator=<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 823: range 0000000013AF2D76-0000000013AF2F46
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::foreachMember(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 10 cd_any:825 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementBurst::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBattleFervorUpdateTrigger::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->cd);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 830: range 0000000013AF2F48-0000000013AF3058
std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::clone(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByElementBurst *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementBurst::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,data::ConfigBattleFervorUpdateTrigger_ByElementBurst&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 834: range 0000000013AF305A-0000000013AF309D
data::ConfigBattleFervorUpdateTrigger_ByElementBurstPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory::create(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurstFactory *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByElementBurstPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 836: range 0000000013AF309E-0000000013AF3527
bool __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::fromJson(
        data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *cd_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementBurst::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBattleFervorUpdateTrigger::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      839);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[53])"fromJson for: ConfigBattleFervorUpdateTrigger fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "cd",
      (const std::allocator<char> *)(v2 + 48));
    cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( cd_ptr && !fromJson<float>(cd_ptr, &this->cd) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        851);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[24])"fromJson for: cd fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 52) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 858: range 0000000013AF3528-0000000013AF4075
data::ConfigBattleFervorUpdateTrigger_ByElementBurstPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdateTrigger_ByElementBurstPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:871 96 16 7 ptr:877 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:865 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementBurst::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        868);
      common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[74])"fromJson for: ConfigBattleFervorUpdateTrigger_ByElementBurst $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdateTrigger((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          874);
        v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[57])"create ConfigBattleFervorUpdateTrigger fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,data::ConfigBattleFervorUpdateTrigger>((const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>(
               (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            880);
          common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[65])"cast to ConfigBattleFervorUpdateTrigger_ByElementBurstPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              885);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 52) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      862);
    common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[79])"jsonValueFind for: ConfigBattleFervorUpdateTrigger_ByElementBurst $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByElementBurst,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 893: range 0000000013AF4076-0000000013AF41E9
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByElementBurst::getHashValue(
        const data::ConfigBattleFervorUpdateTrigger_ByElementBurst *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:894";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByElementBurst::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorUpdateTrigger::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cd);
  }
  common::tools::HashUtils::appendHash(this->cd, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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

// Line 903: range 0000000013C11144-0000000013C11385
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonsterRegister::ConfigBattleFervorUpdateTrigger_ByMonsterRegister(
        data::ConfigBattleFervorUpdateTrigger_ByMonsterRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorUpdateTrigger_ByMonsterRegister::ConfigBattleFervorUpdateTrigger_ByMonsterRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByMonster>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorUpdateTrigger_ByMonster",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::operator[](
         &data::g_ConfigBattleFervorUpdateTriggerMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::operator=<data::ConfigBattleFervorUpdateTrigger_ByMonster>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 906: range 0000000013AF41EA-0000000013AF43BA
void __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::foreachMember(
        data::ConfigBattleFervorUpdateTrigger_ByMonster *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 23 combat_bgmlevel_any:908 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByMonster::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBattleFervorUpdateTrigger::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->combat_bgmlevel);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 913: range 0000000013AF43BC-0000000013AF44CC
std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::clone(
        data::ConfigBattleFervorUpdateTrigger_ByMonster *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByMonster *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByMonster::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByMonster,data::ConfigBattleFervorUpdateTrigger_ByMonster&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorUpdateTrigger_ByMonster,data::ConfigBattleFervorUpdateTrigger_ByMonster> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster,void>(
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 917: range 0000000013AF44CE-0000000013AF4511
data::ConfigBattleFervorUpdateTrigger_ByMonsterPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory::create(
        data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory *const this)
{
  data::ConfigBattleFervorUpdateTrigger_ByMonsterPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorUpdateTrigger_ByMonster>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 919: range 0000000013AF4512-0000000013AF499B
bool __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::fromJson(
        data::ConfigBattleFervorUpdateTrigger_ByMonster *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *combat_bgmlevel_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByMonster::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBattleFervorUpdateTrigger::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      922);
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[53])"fromJson for: ConfigBattleFervorUpdateTrigger fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "combatBGMLevel",
      (const std::allocator<char> *)(v2 + 48));
    combat_bgmlevel_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( combat_bgmlevel_ptr && !fromJson<int>(combat_bgmlevel_ptr, &this->combat_bgmlevel) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        934);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[36])"fromJson for: combatBGMLevel fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 52) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 941: range 0000000013AF499C-0000000013AF54E9
data::ConfigBattleFervorUpdateTrigger_ByMonsterPtr __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorUpdateTrigger_ByMonsterPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:954 96 16 7 ptr:960 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:948 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByMonster::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        951);
      common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[69])"fromJson for: ConfigBattleFervorUpdateTrigger_ByMonster $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorUpdateTrigger((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          957);
        v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[57])"create ConfigBattleFervorUpdateTrigger fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorUpdateTrigger_ByMonster,data::ConfigBattleFervorUpdateTrigger>((const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorUpdateTrigger_ByMonster>(
               (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            963);
          common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[60])"cast to ConfigBattleFervorUpdateTrigger_ByMonsterPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              968);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 52) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      945);
    common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[74])"jsonValueFind for: ConfigBattleFervorUpdateTrigger_ByMonster $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 976: range 0000000013AF54EA-0000000013AF565B
int32_t __cdecl data::ConfigBattleFervorUpdateTrigger_ByMonster::getHashValue(
        const data::ConfigBattleFervorUpdateTrigger_ByMonster *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:977";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorUpdateTrigger_ByMonster::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorUpdateTrigger::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_bgmlevel >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_bgmlevel >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->combat_bgmlevel);
  }
  common::tools::HashUtils::appendHash(this->combat_bgmlevel, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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

// Line 983: range 0000000013AF565C-0000000013AF5A09
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigBattleFervorUpdateTrigger_ByMonsterArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  unsigned __int64 v6; // rax
  void (__fastcall **v7)(unsigned __int64, unsigned __int64); // rdx
  void (__fastcall *v8)(unsigned __int64, unsigned __int64); // rcx
  int v9; // r14d
  bool result; // al
  int v11; // [rsp+0h] [rbp-E0h]
  char v12; // [rsp+8h] [rbp-D8h]
  bool v13; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v16[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 12 elem_ptr:989 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      v6 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const)&data::ConfigBattleFervorUpdateTrigger_ByMonsterFactory::instance_ptr);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6);
      v7 = *(void (__fastcall ***)(unsigned __int64, unsigned __int64))v6;
      if ( *(_BYTE *)((*(_QWORD *)v6 >> 3) + 0x7FFF8000LL) )
        v6 = __asan_report_load8(*(_QWORD *)v6);
      v8 = *v7;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_store16();
      v8(v2 + 32, v6);
      if ( std::operator==<data::ConfigBattleFervorUpdateTrigger_ByMonster>(
             (const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *)(v2 + 32),
             0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
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
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "arrFromJson",
          992);
        common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[68])"elem_ptr is nullptr: ConfigBattleFervorUpdateTrigger_ByMonsterArray");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v9 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::value_type *)(v2 + 32));
        v9 = 1;
      }
      std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *const)(v2 + 32));
      if ( v9 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_26;
  }
  v13 = 1;
LABEL_26:
  result = v13;
  if ( v16 == (char *)v2 )
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

// Line 1002: range 0000000013AF5A0A-0000000013AF5CC5
int32_t __cdecl data::getArrHashValue(const data::ConfigBattleFervorUpdateTrigger_ByMonsterArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1003 64 8 16 __for_begin:1004 96 8 14 __for_end:1004";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigBattleFervorUpdateTrigger_ByMonster>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorUpdateTrigger_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>*,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 1016: range 0000000013AF5CC6-0000000013AF5EFB
data::ConfigBattleFervorFactorPtr __cdecl data::createConfigBattleFervorFactor(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBattleFervorFactorPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > >::_Base_ptr)"2 32 8 7 it:1017 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > >::_Base_ptr)data::createConfigBattleFervorFactor;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::find(
                    &data::g_ConfigBattleFervorFactorMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::end(&data::g_ConfigBattleFervorFactorMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBattleFervorFactor>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 24LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 24LL);
    v9 = *(void (__fastcall **)(const std::string *, unsigned __int64))v8;
    if ( *(_WORD *)(((unsigned __int64)name >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store16();
    v9(name, v7);
  }
  else
  {
    std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorFactor> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBattleFervorFactor> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 1023: range 0000000013AF5EFC-0000000013AF60F0
void __cdecl data::ConfigBattleFervorFactor::foreachMember(
        data::ConfigBattleFervorFactor *const this,
        std::function<void(std::any&)> *p_func)
{
  std::any *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (std::any *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::any *)v3;
  }
  v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1102416563;
  v2->_M_storage._M_ptr = "3 32 16 25 factor_min_value_any:1024 64 16 25 factor_max_value_any:1026 96 16 26 factor_init_value_any:1028";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigBattleFervorFactor::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 2, &this->factor_min_value);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 4, &this->factor_max_value);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 6, &this->factor_init_value);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 6);
  std::any::~any(v2 + 6);
  std::any::~any(v2 + 4);
  std::any::~any(v2 + 2);
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    v2->_M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1033: range 0000000013AF60F2-0000000013AF613C
std::shared_ptr<data::ConfigBattleFervorFactor> __cdecl data::ConfigBattleFervorFactor::clone(
        data::ConfigBattleFervorFactor *const this)
{
  data::ConfigBattleFervorFactor *v1; // rsi
  std::shared_ptr<data::ConfigBattleFervorFactor> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorFactor,data::ConfigBattleFervorFactor&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorFactor,data::ConfigBattleFervorFactor> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 1037: range 0000000013AF613E-0000000013AF69D5
bool __cdecl data::ConfigBattleFervorFactor::fromJson(
        data::ConfigBattleFervorFactor *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *factor_min_value_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *factor_max_value_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *factor_init_value_ptr; // [rsp+28h] [rbp-208h]
  char v11[512]; // [rsp+30h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "factorMinValue",
    (const std::allocator<char> *)(v2 + 48));
  factor_min_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( factor_min_value_ptr && !fromJson<float>(factor_min_value_ptr, &this->factor_min_value) )
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      1047);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[36])"fromJson for: factorMinValue fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "factorMaxValue",
      (const std::allocator<char> *)(v2 + 64));
    factor_max_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( factor_max_value_ptr && !fromJson<float>(factor_max_value_ptr, &this->factor_max_value) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        1059);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[36])"fromJson for: factorMaxValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "factorInitValue",
        (const std::allocator<char> *)(v2 + 80));
      factor_init_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( factor_init_value_ptr && !fromJson<float>(factor_init_value_ptr, &this->factor_init_value) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "fromJson",
          1071);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[37])"fromJson for: factorInitValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        v6 = ((_BYTE)this + 36) & 7;
        v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v7 )
          __asan_report_store1(&this->is_json_loaded, v6, v7);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1078: range 0000000013AF69D6-0000000013AF7332
data::ConfigBattleFervorFactorPtr __cdecl data::ConfigBattleFervorFactor::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorFactorPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-208h]
  char v13[512]; // [rsp+20h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:1091 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:108"
                        "5 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 224);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 224)) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        1088);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[52])"fromJson for: ConfigBattleFervorFactor $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorFactor> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorFactor((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorFactor>(
             (const std::shared_ptr<data::ConfigBattleFervorFactor> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          1094);
        v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[50])"create ConfigBattleFervorFactor fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorFactor> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(v7);
        v8 = *(_QWORD *)v7 + 48LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
        {
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 416, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 416),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            1099);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorFactor> *const)jval,
            0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorFactor> *const)jval,
            (std::shared_ptr<data::ConfigBattleFervorFactor> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBattleFervorFactor>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 224));
  }
  else
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      1082);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[57])"jsonValueFind for: ConfigBattleFervorFactor $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorFactor> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1107: range 0000000013AF7334-0000000013AF753A
int32_t __cdecl data::ConfigBattleFervorFactor::getHashValue(const data::ConfigBattleFervorFactor *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1108";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_min_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_min_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->factor_min_value);
  }
  common::tools::HashUtils::appendHash(this->factor_min_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->factor_max_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->factor_max_value);
  }
  common::tools::HashUtils::appendHash(this->factor_max_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_init_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_init_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->factor_init_value);
  }
  common::tools::HashUtils::appendHash(this->factor_init_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v6 == (char *)v2 )
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

// Line 1116: range 0000000013AF753B-0000000013AF789C
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigBattleFervorFactorArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  int v6; // r14d
  bool result; // al
  int v8; // [rsp+0h] [rbp-E0h]
  char v9; // [rsp+8h] [rbp-D8h]
  bool v10; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 elem_ptr:1122 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v8, v9);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigBattleFervorFactor::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigBattleFervorFactor>(
             (const std::shared_ptr<data::ConfigBattleFervorFactor> *)(v2 + 32),
             0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
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
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "arrFromJson",
          1125);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[51])"elem_ptr is nullptr: ConfigBattleFervorFactorArray");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigBattleFervorFactor>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor> *const)(v2 + 32));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_22;
  }
  v10 = 1;
LABEL_22:
  result = v10;
  if ( v13 == (char *)v2 )
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

// Line 1135: range 0000000013AF789D-0000000013AF7B58
int32_t __cdecl data::getArrHashValue(const data::ConfigBattleFervorFactorArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigBattleFervorFactor> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1136 64 8 16 __for_begin:1137 96 8 14 __for_end:1137";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigBattleFervorFactor> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorFactor>*,std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorFactor>*,std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorFactor> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorFactor>*,std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigBattleFervorFactor>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigBattleFervorFactor> const*,std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigBattleFervorFactor>*,std::vector<std::shared_ptr<data::ConfigBattleFervorFactor>> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v10 == (char *)v2 )
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

// Line 1151: range 0000000013C11482-0000000013C116C3
void __cdecl data::ConfigBattleFervorFactor_ByTriggerRegister::ConfigBattleFervorFactor_ByTriggerRegister(
        data::ConfigBattleFervorFactor_ByTriggerRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorFactor> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorFactor_ByTriggerRegister::ConfigBattleFervorFactor_ByTriggerRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByTrigger>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorFactor_ByTrigger",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::operator[](
         &data::g_ConfigBattleFervorFactorMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorFactor>::operator=<data::ConfigBattleFervorFactor_ByTrigger>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1154: range 0000000013AF7B5A-0000000013AF7D2A
void __cdecl data::ConfigBattleFervorFactor_ByTrigger::foreachMember(
        data::ConfigBattleFervorFactor_ByTrigger *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 17 triggers_any:1156 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByTrigger::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBattleFervorFactor::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>> &,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger>>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->triggers);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 1161: range 0000000013AF7D2C-0000000013AF7E3C
std::shared_ptr<data::ConfigBattleFervorFactor> __cdecl data::ConfigBattleFervorFactor_ByTrigger::clone(
        data::ConfigBattleFervorFactor_ByTrigger *const this)
{
  data::ConfigBattleFervorFactor_ByTrigger *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorFactor> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByTrigger::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByTrigger,data::ConfigBattleFervorFactor_ByTrigger&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorFactor_ByTrigger,data::ConfigBattleFervorFactor_ByTrigger> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger,void>(
    (std::shared_ptr<data::ConfigBattleFervorFactor> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 1165: range 0000000013AF7E3E-0000000013AF7E81
data::ConfigBattleFervorFactor_ByTriggerPtr __cdecl data::ConfigBattleFervorFactor_ByTriggerFactory::create(
        data::ConfigBattleFervorFactor_ByTriggerFactory *const this)
{
  data::ConfigBattleFervorFactor_ByTriggerPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByTrigger>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorFactor_ByTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1167: range 0000000013AF7E82-0000000013AF830B
bool __cdecl data::ConfigBattleFervorFactor_ByTrigger::fromJson(
        data::ConfigBattleFervorFactor_ByTrigger *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *triggers_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByTrigger::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBattleFervorFactor::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      1170);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[46])"fromJson for: ConfigBattleFervorFactor fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "triggers",
      (const std::allocator<char> *)(v2 + 48));
    triggers_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( triggers_ptr && !data::arrFromJson(triggers_ptr, &this->triggers) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        1182);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[30])"fromJson for: triggers fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 36) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1189: range 0000000013AF830C-0000000013AF8E59
data::ConfigBattleFervorFactor_ByTriggerPtr __cdecl data::ConfigBattleFervorFactor_ByTrigger::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorFactor_ByTriggerPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1202 96 16 8 ptr:1208 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1196 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByTrigger::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        1199);
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[62])"fromJson for: ConfigBattleFervorFactor_ByTrigger $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorFactor((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorFactor>(
             (const std::shared_ptr<data::ConfigBattleFervorFactor> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          1205);
        v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[50])"create ConfigBattleFervorFactor fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorFactor_ByTrigger,data::ConfigBattleFervorFactor>((const std::shared_ptr<data::ConfigBattleFervorFactor> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorFactor_ByTrigger>(
               (const std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            1211);
          common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[53])"cast to ConfigBattleFervorFactor_ByTriggerPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              1216);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByTrigger,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByTrigger,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorFactor>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      1193);
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[67])"jsonValueFind for: ConfigBattleFervorFactor_ByTrigger $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorFactor_ByTrigger> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorFactor_ByTrigger,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1224: range 0000000013AF8E5A-0000000013AF8FA3
int32_t __cdecl data::ConfigBattleFervorFactor_ByTrigger::getHashValue(
        const data::ConfigBattleFervorFactor_ByTrigger *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1225";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByTrigger::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorFactor::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  ArrHashValue = data::getArrHashValue(&this->triggers);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v9 == (char *)v2 )
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

// Line 1234: range 0000000013C1173C-0000000013C1197D
void __cdecl data::ConfigBattleFervorFactor_ByMonsterRegister::ConfigBattleFervorFactor_ByMonsterRegister(
        data::ConfigBattleFervorFactor_ByMonsterRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBattleFervorFactor> *v4; // rax
  char v5[192]; // [rsp+10h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 1 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBattleFervorFactor_ByMonsterRegister::ConfigBattleFervorFactor_ByMonsterRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByMonster>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBattleFervorFactor_ByMonster",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::operator[](
         &data::g_ConfigBattleFervorFactorMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBattleFervorFactor>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBattleFervorFactor>::operator=<data::ConfigBattleFervorFactor_ByMonster>(
    v4,
    (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)(v1 + 64));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1237: range 0000000013AF8FA4-0000000013AF9174
void __cdecl data::ConfigBattleFervorFactor_ByMonster::foreachMember(
        data::ConfigBattleFervorFactor_ByMonster *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 17 triggers_any:1239 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByMonster::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBattleFervorFactor::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>> &,std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>,std::any::_Manager_external<std::vector<std::shared_ptr<data::ConfigBattleFervorUpdateTrigger_ByMonster>>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->triggers);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 1244: range 0000000013AF9176-0000000013AF9286
std::shared_ptr<data::ConfigBattleFervorFactor> __cdecl data::ConfigBattleFervorFactor_ByMonster::clone(
        data::ConfigBattleFervorFactor_ByMonster *const this)
{
  data::ConfigBattleFervorFactor_ByMonster *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBattleFervorFactor> result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByMonster::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByMonster,data::ConfigBattleFervorFactor_ByMonster&>(
    (common::tools::perf::allocator<data::ConfigBattleFervorFactor_ByMonster,data::ConfigBattleFervorFactor_ByMonster> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBattleFervorFactor>::shared_ptr<data::ConfigBattleFervorFactor_ByMonster,void>(
    (std::shared_ptr<data::ConfigBattleFervorFactor> *const)this,
    (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *)(v2 + 32));
  std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = this;
  return result;
};

// Line 1248: range 0000000013AF9288-0000000013AF92CB
data::ConfigBattleFervorFactor_ByMonsterPtr __cdecl data::ConfigBattleFervorFactor_ByMonsterFactory::create(
        data::ConfigBattleFervorFactor_ByMonsterFactory *const this)
{
  data::ConfigBattleFervorFactor_ByMonsterPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBattleFervorFactor_ByMonster>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorFactor_ByMonster,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1250: range 0000000013AF92CC-0000000013AF9755
bool __cdecl data::ConfigBattleFervorFactor_ByMonster::fromJson(
        data::ConfigBattleFervorFactor_ByMonster *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *triggers_ptr; // [rsp+18h] [rbp-128h]
  char v9[288]; // [rsp+20h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByMonster::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBattleFervorFactor::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      1253);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[46])"fromJson for: ConfigBattleFervorFactor fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "triggers",
      (const std::allocator<char> *)(v2 + 48));
    triggers_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( triggers_ptr && !data::arrFromJson(triggers_ptr, &this->triggers) )
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        1265);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[30])"fromJson for: triggers fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 36) & 7;
      v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store1(&this->is_json_loaded, v6, v7);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1272: range 0000000013AF9756-0000000013AFA2A3
data::ConfigBattleFervorFactor_ByMonsterPtr __cdecl data::ConfigBattleFervorFactor_ByMonster::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBattleFervorFactor_ByMonsterPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  const Json::Value *jval_ptr; // [rsp+18h] [rbp-268h]
  char v13[608]; // [rsp+20h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1285 96 16 8 ptr:1291 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1279 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByMonster::parseFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "$type",
    (const std::allocator<char> *)(v2 + 48));
  jval_ptr = jsonValueFind(v1, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( jval_ptr )
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 256);
    if ( !fromJson<std::string>(jval_ptr, (std::string *)(v2 + 256)) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "parseFromJson",
        1282);
      common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[62])"fromJson for: ConfigBattleFervorFactor_ByMonster $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::shared_ptr(
        (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBattleFervorFactor((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBattleFervorFactor>(
             (const std::shared_ptr<data::ConfigBattleFervorFactor> *)(v2 + 64),
             0LL) )
      {
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "parseFromJson",
          1288);
        v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[50])"create ConfigBattleFervorFactor fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::shared_ptr(
          (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBattleFervorFactor_ByMonster,data::ConfigBattleFervorFactor>((const std::shared_ptr<data::ConfigBattleFervorFactor> *)(v2 + 96));
        if ( std::operator==<data::ConfigBattleFervorFactor_ByMonster>(
               (const std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *)(v2 + 96),
               0LL) )
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
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "parseFromJson",
            1294);
          common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[53])"cast to ConfigBattleFervorFactor_ByMonsterPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::shared_ptr(
            (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(v7);
          v8 = *(_QWORD *)v7 + 48LL;
          if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8(*(_QWORD *)v7 + 48LL);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))v8)(v7) != 1 )
          {
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "parseFromJson",
              1299);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBattleFervorFactor_ByMonster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::shared_ptr(
              (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)jval,
              (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBattleFervorFactor>::~shared_ptr((std::shared_ptr<data::ConfigBattleFervorFactor> *const)(v2 + 64));
    }
    std::string::~string((void *)(v2 + 256));
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "parseFromJson",
      1276);
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[67])"jsonValueFind for: ConfigBattleFervorFactor_ByMonster $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster>::shared_ptr(
      (std::shared_ptr<data::ConfigBattleFervorFactor_ByMonster> *const)jval,
      0LL);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBattleFervorFactor_ByMonster,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1307: range 0000000013AFA2A4-0000000013AFA3ED
int32_t __cdecl data::ConfigBattleFervorFactor_ByMonster::getHashValue(
        const data::ConfigBattleFervorFactor_ByMonster *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1308";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFactor_ByMonster::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBattleFervorFactor::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  ArrHashValue = data::getArrHashValue(&this->triggers);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v9 == (char *)v2 )
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

// Line 1315: range 0000000013AFA3EE-0000000013AFA9D1
bool __cdecl data::ConfigBattleFervorGroup::fromJson(
        data::ConfigBattleFervorGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigBattleFervorFactorArray *p_factors; // rsi
  const Json::Value *weight_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *factors_ptr; // [rsp+18h] [rbp-168h]
  char v10[352]; // [rsp+20h] [rbp-160h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorGroup::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "weight",
    (const std::allocator<char> *)(v2 + 32));
  weight_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( weight_ptr && !fromJson<float>(weight_ptr, &this->weight) )
  {
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      1325);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[28])"fromJson for: weight fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "factors",
      (const std::allocator<char> *)(v2 + 48));
    p_factors = (data::ConfigBattleFervorFactorArray *)(v2 + 192);
    factors_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( factors_ptr && (p_factors = &this->factors, !data::arrFromJson(factors_ptr, &this->factors)) )
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
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        1337);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[29])"fromJson for: factors fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_factors, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1345: range 0000000013AFA9D2-0000000013AFAB56
int32_t __cdecl data::ConfigBattleFervorGroup::getHashValue(const data::ConfigBattleFervorGroup *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1346";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorGroup::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->weight, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->factors);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 1353: range 0000000013AFAB57-0000000013AFAF0B
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigBattleFervorGroupArray *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigBattleFervorGroup *v8; // rdx
  unsigned __int64 v9; // rdx
  bool result; // al
  int v11; // [rsp+0h] [rbp-120h]
  char v12; // [rsp+8h] [rbp-118h]
  bool v13; // [rsp+Fh] [rbp-111h]
  uint32_t i; // [rsp+24h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-F8h]
  char v16[240]; // [rsp+30h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 40 9 elem:1359";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 112) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_BYTE *)(v6 + 4) = 0;
      data::ConfigBattleFervorGroup::ConfigBattleFervorGroup((data::ConfigBattleFervorGroup *const)(v2 + 112));
      if ( !data::ConfigBattleFervorGroup::fromJson((data::ConfigBattleFervorGroup *const)(v2 + 112), elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "arrFromJson",
          1362);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::ConfigBattleFervorGroup &>((data::ConfigBattleFervorGroup *)(v2 + 112));
        std::vector<data::ConfigBattleFervorGroup>::emplace_back<data::ConfigBattleFervorGroup>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigBattleFervorGroup::~ConfigBattleFervorGroup((data::ConfigBattleFervorGroup *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_BYTE *)(v9 + 4) = -8;
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v13 = 1;
LABEL_20:
  result = v13;
  if ( v16 == (char *)v2 )
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

// Line 1372: range 0000000013AFAF0C-0000000013AFB158
int32_t __cdecl data::getArrHashValue(const data::ConfigBattleFervorGroupArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigBattleFervorGroup*,std::vector<data::ConfigBattleFervorGroup> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1373 64 8 16 __for_begin:1374 96 8 14 __for_end:1374";
  *(_QWORD *)(v2 + 16) = data::getArrHashValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<data::ConfigBattleFervorGroup>::const_iterator *)(v2 + 64) = std::vector<data::ConfigBattleFervorGroup>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigBattleFervorGroup>::const_iterator *)(v2 + 96) = std::vector<data::ConfigBattleFervorGroup>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigBattleFervorGroup const*,std::vector<data::ConfigBattleFervorGroup>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigBattleFervorGroup*,std::vector<data::ConfigBattleFervorGroup> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigBattleFervorGroup*,std::vector<data::ConfigBattleFervorGroup> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigBattleFervorGroup const*,std::vector<data::ConfigBattleFervorGroup>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigBattleFervorGroup*,std::vector<data::ConfigBattleFervorGroup> > *const)(v2 + 64));
    HashValue = data::ConfigBattleFervorGroup::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigBattleFervorGroup const*,std::vector<data::ConfigBattleFervorGroup>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigBattleFervorGroup*,std::vector<data::ConfigBattleFervorGroup> > *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v8 == (char *)v2 )
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

// Line 1383: range 0000000013AFB15A-0000000013AFC183
bool __cdecl data::ConfigBattleFervorFormula::fromJson(
        data::ConfigBattleFervorFormula *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *groups_ptr; // [rsp+10h] [rbp-3D0h]
  const Json::Value *battle_fervor_min_value_ptr; // [rsp+18h] [rbp-3C8h]
  const Json::Value *battle_fervor_max_value_ptr; // [rsp+20h] [rbp-3C0h]
  const Json::Value *battle_fervor_base_value_ptr; // [rsp+28h] [rbp-3B8h]
  const Json::Value *lerp_interval_ptr; // [rsp+30h] [rbp-3B0h]
  const Json::Value *lerp_coefficient_ptr; // [rsp+38h] [rbp-3A8h]
  char v14[928]; // [rsp+40h] [rbp-3A0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <"
                        "unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <u"
                        "nknown> 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFormula::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "groups",
    (const std::allocator<char> *)(v2 + 32));
  groups_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( groups_ptr && !data::arrFromJson(groups_ptr, &this->groups) )
  {
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
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
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      1393);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[28])"fromJson for: groups fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "battleFervorMinValue",
      (const std::allocator<char> *)(v2 + 48));
    battle_fervor_min_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( battle_fervor_min_value_ptr && !fromJson<float>(battle_fervor_min_value_ptr, &this->battle_fervor_min_value) )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        1405);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[42])"fromJson for: battleFervorMinValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        "battleFervorMaxValue",
        (const std::allocator<char> *)(v2 + 64));
      battle_fervor_max_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( battle_fervor_max_value_ptr && !fromJson<float>(battle_fervor_max_value_ptr, &this->battle_fervor_max_value) )
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
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "fromJson",
          1417);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[42])"fromJson for: battleFervorMaxValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          "battleFervorBaseValue",
          (const std::allocator<char> *)(v2 + 80));
        battle_fervor_base_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( battle_fervor_base_value_ptr
          && !fromJson<float>(battle_fervor_base_value_ptr, &this->battle_fervor_base_value) )
        {
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "fromJson",
            1429);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[43])"fromJson for: battleFervorBaseValue fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            "lerpInterval",
            (const std::allocator<char> *)(v2 + 96));
          lerp_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( lerp_interval_ptr && !fromJson<float>(lerp_interval_ptr, &this->lerp_interval) )
          {
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "fromJson",
              1441);
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[34])"fromJson for: lerpInterval fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 768),
              "lerpCoefficient",
              (const std::allocator<char> *)(v2 + 112));
            lerp_coefficient_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
            std::string::~string((void *)(v2 + 768));
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( lerp_coefficient_ptr && !fromJson<float>(lerp_coefficient_ptr, &this->lerp_coefficient) )
            {
              *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 832, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 832),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
                "fromJson",
                1453);
              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[37])"fromJson for: lerpCoefficient fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
              result = 0;
            }
            else
            {
              v6 = ((_BYTE)this + 44) & 7;
              v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
              if ( (_BYTE)v7 )
                __asan_report_store1(&this->is_json_loaded, v6, v7);
              this->is_json_loaded = 1;
              result = 1;
            }
          }
        }
      }
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1461: range 0000000013AFC184-0000000013AFC43E
int32_t __cdecl data::ConfigBattleFervorFormula::getHashValue(const data::ConfigBattleFervorFormula *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1462";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervorFormula::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->groups);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_fervor_min_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_fervor_min_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->battle_fervor_min_value);
  }
  common::tools::HashUtils::appendHash(this->battle_fervor_min_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_fervor_max_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_fervor_max_value >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->battle_fervor_max_value);
  }
  common::tools::HashUtils::appendHash(this->battle_fervor_max_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_fervor_base_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_fervor_base_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->battle_fervor_base_value);
  }
  common::tools::HashUtils::appendHash(this->battle_fervor_base_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->lerp_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lerp_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->lerp_interval);
  }
  common::tools::HashUtils::appendHash(this->lerp_interval, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->lerp_coefficient >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lerp_coefficient >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->lerp_coefficient);
  }
  common::tools::HashUtils::appendHash(this->lerp_coefficient, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v7 == (char *)v2 )
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

// Line 1474: range 0000000013AFC440-0000000013AFD690
bool __cdecl data::ConfigBattleFervor::fromJson(data::ConfigBattleFervor *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *rtpc_map_ptr; // [rsp+18h] [rbp-478h]
  const Json::Value *battle_fervor_switch_rtpc_key_ptr; // [rsp+20h] [rbp-470h]
  const Json::Value *battle_fervor_enable_rtpc_value_ptr; // [rsp+28h] [rbp-468h]
  const Json::Value *battle_fervor_disable_rtpc_value_ptr; // [rsp+30h] [rbp-460h]
  const Json::Value *mintlv_killed_max_ptr; // [rsp+38h] [rbp-458h]
  const Json::Value *death_zone_modifier_name_ptr; // [rsp+40h] [rbp-450h]
  const Json::Value *death_zone_get_max_hp_ratio_interval_ptr; // [rsp+48h] [rbp-448h]
  char v17[1088]; // [rsp+50h] [rbp-440h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "21 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <u"
                        "nknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervor::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "rtpcMap",
    (const std::allocator<char> *)(v2 + 48));
  rtpc_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( rtpc_map_ptr && !data::mapFromJson(rtpc_map_ptr, &this->rtpc_map) )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
      "fromJson",
      1484);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[29])"fromJson for: rtpcMap fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "battleFervorSwitchRtpcKey",
      (const std::allocator<char> *)(v2 + 64));
    battle_fervor_switch_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( battle_fervor_switch_rtpc_key_ptr
      && !data::ConfigWwiseString::fromJson(&this->battle_fervor_switch_rtpc_key, battle_fervor_switch_rtpc_key_ptr) )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
        "fromJson",
        1496);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[47])"fromJson for: battleFervorSwitchRtpcKey fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "battleFervorEnableRtpcValue",
        (const std::allocator<char> *)(v2 + 80));
      battle_fervor_enable_rtpc_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( battle_fervor_enable_rtpc_value_ptr
        && !fromJson<float>(battle_fervor_enable_rtpc_value_ptr, &this->battle_fervor_enable_rtpc_value) )
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
          "fromJson",
          1508);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[49])"fromJson for: battleFervorEnableRtpcValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          "battleFervorDisableRtpcValue",
          (const std::allocator<char> *)(v2 + 96));
        battle_fervor_disable_rtpc_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( battle_fervor_disable_rtpc_value_ptr
          && !fromJson<float>(battle_fervor_disable_rtpc_value_ptr, &this->battle_fervor_disable_rtpc_value) )
        {
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
            "fromJson",
            1520);
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            (common::milog::MiLogStream *const)(v2 + 608),
            (const char (*)[50])"fromJson for: battleFervorDisableRtpcValue fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 672),
            "mintlvKilledMax",
            (const std::allocator<char> *)(v2 + 112));
          mintlv_killed_max_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( mintlv_killed_max_ptr && !fromJson<float>(mintlv_killed_max_ptr, &this->mintlv_killed_max) )
          {
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
              "fromJson",
              1532);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[37])"fromJson for: mintlvKilledMax fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 800),
              "deathZoneModifierName",
              (const std::allocator<char> *)(v2 + 128));
            death_zone_modifier_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( death_zone_modifier_name_ptr
              && !fromJson<std::string>(death_zone_modifier_name_ptr, &this->death_zone_modifier_name) )
            {
              *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 864, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 864),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
                "fromJson",
                1544);
              common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[43])"fromJson for: deathZoneModifierName fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 928),
                "deathZoneGetMaxHpRatioInterval",
                (const std::allocator<char> *)(v2 + 144));
              death_zone_get_max_hp_ratio_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( death_zone_get_max_hp_ratio_interval_ptr
                && !fromJson<int>(death_zone_get_max_hp_ratio_interval_ptr, &this->death_zone_get_max_hp_ratio_interval) )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigBattleFervorFormula.cpp",
                  "fromJson",
                  1556);
                common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  (common::milog::MiLogStream *const)(v2 + 992),
                  (const char (*)[52])"fromJson for: deathZoneGetMaxHpRatioInterval fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                v5 = 0;
              }
              else
              {
                v6 = ((_BYTE)this - 108) & 7;
                v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                if ( (_BYTE)v7 )
                  __asan_report_store1(&this->is_json_loaded, v6, v7);
                this->is_json_loaded = 1;
                v5 = 1;
              }
            }
          }
        }
      }
    }
  }
  v8 = v5;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v17);
  }
  return v8;
};

// Line 1564: range 0000000013AFD692-0000000013AFD934
int32_t __cdecl data::ConfigBattleFervor::getHashValue(const data::ConfigBattleFervor *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
  int32_t HashValue; // eax
  int32_t result; // eax
  char v8[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1565";
  *(_QWORD *)(v2 + 16) = data::ConfigBattleFervor::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->rtpc_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  HashValue = data::ConfigWwiseString::getHashValue(&this->battle_fervor_switch_rtpc_key);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_fervor_enable_rtpc_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->battle_fervor_enable_rtpc_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->battle_fervor_enable_rtpc_value);
  }
  common::tools::HashUtils::appendHash(this->battle_fervor_enable_rtpc_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->battle_fervor_disable_rtpc_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->battle_fervor_disable_rtpc_value >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->battle_fervor_disable_rtpc_value);
  }
  common::tools::HashUtils::appendHash(this->battle_fervor_disable_rtpc_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mintlv_killed_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mintlv_killed_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mintlv_killed_max);
  }
  common::tools::HashUtils::appendHash(this->mintlv_killed_max, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->death_zone_modifier_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->death_zone_get_max_hp_ratio_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->death_zone_get_max_hp_ratio_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->death_zone_get_max_hp_ratio_interval);
  }
  common::tools::HashUtils::appendHash(this->death_zone_get_max_hp_ratio_interval, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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
