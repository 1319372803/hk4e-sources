// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigShape.cpp

// Line 19: range 00000000120BDC75-00000000120BDED4
const char *__cdecl data::enumValToStr(data::CenterPosType e)
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
  if ( e )
  {
    if ( e == Center_2 )
    {
      result = "Center";
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
        "./src/json_data_auto/ConfigShape.cpp",
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
      result = (const char *)&unk_1A891C40;
    }
  }
  else
  {
    result = "BottomCenter";
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

// Line 33: range 00000000120BDED5-00000000120BE70C
bool __cdecl data::enumStrToVal(const std::string *s, data::CenterPosType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::CenterPosType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::CenterPosType> >::pointer v11; // rax
  data::CenterPosType second; // ecx
  char v13; // dl
  data::CenterPosType *ea; // [rsp+10h] [rbp-1E0h]
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
      "./src/json_data_auto/ConfigShape.cpp",
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::CenterPosType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::CenterPosType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::CenterPosType>::pair<char const(&)[13],data::CenterPosType,true>(
        (std::pair<const std::string,data::CenterPosType> *const)(v2 + 304),
        (const char (*)[13])"BottomCenter",
        (data::CenterPosType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "BottomCenter");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::CenterPosType>::pair<char const(&)[7],data::CenterPosType,true>(
        (std::pair<const std::string,data::CenterPosType> *const)(v2 + 344),
        (const char (*)[7])"Center",
        (data::CenterPosType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::CenterPosType>>::allocator((std::allocator<std::pair<const std::string,data::CenterPosType> > *const)(v2 + 64));
      std::map<std::string,data::CenterPosType>::map(
        &data::enumStrToVal(std::string const&,data::CenterPosType &)::m,
        (std::initializer_list<std::pair<const std::string,data::CenterPosType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::CenterPosType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::CenterPosType &)::m);
      e = (data::CenterPosType *)&data::enumStrToVal(std::string const&,data::CenterPosType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::CenterPosType>::~map,
        &data::enumStrToVal(std::string const&,data::CenterPosType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::CenterPosType>>::~allocator((std::allocator<std::pair<const std::string,data::CenterPosType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::CenterPosType> *)(v2 + 384);
            i != (std::pair<const std::string,data::CenterPosType> *)(v2 + 304);
            std::pair<std::string const,data::CenterPosType>::~pair(i) )
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
    *(std::map<std::string,data::CenterPosType>::iterator *)(v2 + 112) = std::map<std::string,data::CenterPosType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::CenterPosType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::CenterPosType>::iterator *)(v2 + 144) = std::map<std::string,data::CenterPosType>::end(&data::enumStrToVal(std::string const&,data::CenterPosType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CenterPosType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::CenterPosType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigShape.cpp",
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
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::CenterPosType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::CenterPosType> > *const)(v2 + 112));
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

// Line 55: range 00000000120BE70D-00000000120BE73C
const char *__cdecl data::getDescription(data::CenterPosType e)
{
  if ( e == BottomCenter )
    return (const char *)&unk_1A8FE860;
  if ( e == Center_2 )
    return (const char *)&unk_1A8FE8A0;
  return "unknown enum value!";
};

// Line 68: range 00000000120BE73D-00000000120BE99C
const char *__cdecl data::enumValToStr(data::HeightPosType e)
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
  if ( e )
  {
    if ( e == Center_1 )
    {
      result = "Center";
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
        "./src/json_data_auto/ConfigShape.cpp",
        "enumValToStr",
        76);
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
      result = (const char *)&unk_1A891C40;
    }
  }
  else
  {
    result = "Bottom";
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

// Line 82: range 00000000120BE99D-00000000120BF1D4
bool __cdecl data::enumStrToVal(const std::string *s, data::HeightPosType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::HeightPosType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::HeightPosType> >::pointer v11; // rax
  data::HeightPosType second; // ecx
  char v13; // dl
  data::HeightPosType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 5 it:93 144 8 9 <unk"
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
      "./src/json_data_auto/ConfigShape.cpp",
      "enumStrToVal",
      85);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::HeightPosType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::HeightPosType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::HeightPosType>::pair<char const(&)[7],data::HeightPosType,true>(
        (std::pair<const std::string,data::HeightPosType> *const)(v2 + 304),
        (const char (*)[7])"Bottom",
        (data::HeightPosType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Bottom");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::HeightPosType>::pair<char const(&)[7],data::HeightPosType,true>(
        (std::pair<const std::string,data::HeightPosType> *const)(v2 + 344),
        (const char (*)[7])"Center",
        (data::HeightPosType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::HeightPosType>>::allocator((std::allocator<std::pair<const std::string,data::HeightPosType> > *const)(v2 + 64));
      std::map<std::string,data::HeightPosType>::map(
        &data::enumStrToVal(std::string const&,data::HeightPosType &)::m,
        (std::initializer_list<std::pair<const std::string,data::HeightPosType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::HeightPosType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::HeightPosType &)::m);
      e = (data::HeightPosType *)&data::enumStrToVal(std::string const&,data::HeightPosType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::HeightPosType>::~map,
        &data::enumStrToVal(std::string const&,data::HeightPosType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::HeightPosType>>::~allocator((std::allocator<std::pair<const std::string,data::HeightPosType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::HeightPosType> *)(v2 + 384);
            i != (std::pair<const std::string,data::HeightPosType> *)(v2 + 304);
            std::pair<std::string const,data::HeightPosType>::~pair(i) )
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
    *(std::map<std::string,data::HeightPosType>::iterator *)(v2 + 112) = std::map<std::string,data::HeightPosType>::find(
                                                                           &data::enumStrToVal(std::string const&,data::HeightPosType &)::m,
                                                                           s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::HeightPosType>::iterator *)(v2 + 144) = std::map<std::string,data::HeightPosType>::end(&data::enumStrToVal(std::string const&,data::HeightPosType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::HeightPosType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::HeightPosType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigShape.cpp",
        "enumStrToVal",
        96);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::HeightPosType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::HeightPosType> > *const)(v2 + 112));
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

// Line 104: range 00000000120BF1D5-00000000120BF204
const char *__cdecl data::getDescription(data::HeightPosType e)
{
  if ( e == Bottom )
    return (const char *)&unk_1A8FE860;
  if ( e == Center_1 )
    return (const char *)&unk_1A8FE8A0;
  return "unknown enum value!";
};

// Line 118: range 00000000120BF205-00000000120BF43A
data::ConfigBaseShapePtr __cdecl data::createConfigBaseShape(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigBaseShapePtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::_Base_ptr)"2 32 8 6 it:119 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::_Base_ptr)data::createConfigBaseShape;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::find(
                    &data::g_ConfigBaseShapeMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::end(&data::g_ConfigBaseShapeMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigBaseShape>::shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 125: range 00000000120BF43C-00000000120BF630
void __cdecl data::ConfigBaseShape::foreachMember(
        data::ConfigBaseShape *const this,
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
  v2->_M_storage._M_ptr = "3 32 16 18 use_height_any:126 64 16 14 height_any:128 96 16 19 height_type_any:130";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigBaseShape::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(v2 + 2, &this->use_height);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(v2 + 4, &this->height);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<data::HeightPosType &,data::HeightPosType,std::any::_Manager_internal<data::HeightPosType>,true,true>(
    v2 + 6,
    &this->height_type);
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

// Line 135: range 00000000120BF632-00000000120BF67C
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigBaseShape::clone(data::ConfigBaseShape *const this)
{
  data::ConfigBaseShape *v1; // rsi
  std::shared_ptr<data::ConfigBaseShape> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBaseShape,data::ConfigBaseShape&>(
    (common::tools::perf::allocator<data::ConfigBaseShape,data::ConfigBaseShape> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 139: range 00000000120BF67E-00000000120C0012
bool __cdecl data::ConfigBaseShape::fromJson(data::ConfigBaseShape *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  const Json::Value *use_height_ptr; // [rsp+18h] [rbp-268h]
  const Json::Value *height_ptr; // [rsp+20h] [rbp-260h]
  Json::Value *height_type_ptr; // [rsp+28h] [rbp-258h]
  char v12[592]; // [rsp+30h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseShape::fromJson;
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
  v4[536862736] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "useHeight",
    (const std::allocator<char> *)(v2 + 48));
  use_height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( use_height_ptr && !fromJson<bool>(use_height_ptr, &this->use_height) )
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      149);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[31])"fromJson for: useHeight fails!");
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
      "height",
      (const std::allocator<char> *)(v2 + 64));
    height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( height_ptr && !fromJson<float>(height_ptr, &this->height) )
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        161);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[28])"fromJson for: height fails!");
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
        "heightType",
        (const std::allocator<char> *)(v2 + 80));
      height_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !height_type_ptr )
        goto LABEL_21;
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 416), (Json::Value_0 *)height_type_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 416), &this->height_type);
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "fromJson",
          173);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[32])"fromJson for: heightType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
LABEL_21:
        v7 = ((_BYTE)this + 36) & 7;
        v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v8 )
          __asan_report_store1(&this->is_json_loaded, v7, v8);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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

// Line 180: range 00000000120C0014-00000000120C0970
data::ConfigBaseShapePtr __cdecl data::ConfigBaseShape::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBaseShapePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:193 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:187 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseShape::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        190);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[43])"fromJson for: ConfigBaseShape $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBaseShape>::shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          196);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBaseShape>::shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            201);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBaseShape>::shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)jval, 0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigBaseShape>::shared_ptr(
            (std::shared_ptr<data::ConfigBaseShape> *const)jval,
            (std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      184);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[48])"jsonValueFind for: ConfigBaseShape $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBaseShape>::shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 209: range 00000000120C0972-00000000120C0B78
int32_t __cdecl data::ConfigBaseShape::getHashValue(const data::ConfigBaseShape *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:210";
  *(_QWORD *)(v2 + 16) = data::ConfigBaseShape::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(char *)(((unsigned __int64)&this->use_height >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_height, v1, &this->use_height);
  common::tools::HashUtils::appendHash(this->use_height, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->height);
  }
  common::tools::HashUtils::appendHash(this->height, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->height_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->height_type);
  }
  common::tools::HashUtils::appendHash(this->height_type, (int32_t *)(v2 + 32));
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

// Line 221: range 000000001217DECA-000000001217E10B
void __cdecl data::ConfigShapeCircleRegister::ConfigShapeCircleRegister(data::ConfigShapeCircleRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseShape> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeCircleRegister::ConfigShapeCircleRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeCircle>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigShapeCircle",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::operator[](
         &data::g_ConfigBaseShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseShape>::operator=<data::ConfigShapeCircle>(
    v4,
    (std::shared_ptr<data::ConfigShapeCircle> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigShapeCircle>::~shared_ptr((std::shared_ptr<data::ConfigShapeCircle> *const)(v1 + 64));
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

// Line 224: range 00000000120C0B7A-00000000120C0D4A
void __cdecl data::ConfigShapeCircle::foreachMember(
        data::ConfigShapeCircle *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 14 radius_any:226 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCircle::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBaseShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->radius);
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

// Line 231: range 00000000120C0D4C-00000000120C0E5C
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigShapeCircle::clone(data::ConfigShapeCircle *const this)
{
  data::ConfigShapeCircle *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseShape> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCircle::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeCircle,data::ConfigShapeCircle&>(
    (common::tools::perf::allocator<data::ConfigShapeCircle,data::ConfigShapeCircle> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr<data::ConfigShapeCircle,void>(
    (std::shared_ptr<data::ConfigBaseShape> *const)this,
    (std::shared_ptr<data::ConfigShapeCircle> *)(v2 + 32));
  std::shared_ptr<data::ConfigShapeCircle>::~shared_ptr((std::shared_ptr<data::ConfigShapeCircle> *const)(v2 + 32));
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

// Line 235: range 00000000120C0E5E-00000000120C0EA1
data::ConfigShapeCirclePtr __cdecl data::ConfigShapeCircleFactory::create(data::ConfigShapeCircleFactory *const this)
{
  data::ConfigShapeCirclePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigShapeCircle>();
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeCircle,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 237: range 00000000120C0EA2-00000000120C132B
bool __cdecl data::ConfigShapeCircle::fromJson(data::ConfigShapeCircle *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *radius_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCircle::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBaseShape::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      240);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[37])"fromJson for: ConfigBaseShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "radius",
      (const std::allocator<char> *)(v2 + 48));
    radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( radius_ptr && !fromJson<float>(radius_ptr, &this->radius) )
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        252);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[28])"fromJson for: radius fails!");
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

// Line 259: range 00000000120C132C-00000000120C1E79
data::ConfigShapeCirclePtr __cdecl data::ConfigShapeCircle::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigShapeCirclePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigShapeCircle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:272 96 16 7 ptr:278 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:266 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCircle::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        269);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[45])"fromJson for: ConfigShapeCircle $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigShapeCircle>::shared_ptr((std::shared_ptr<data::ConfigShapeCircle> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          275);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigShapeCircle>::shared_ptr((std::shared_ptr<data::ConfigShapeCircle> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigShapeCircle,data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigShapeCircle>((const std::shared_ptr<data::ConfigShapeCircle> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            281);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[36])"cast to ConfigShapeCirclePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigShapeCircle>::shared_ptr(
            (std::shared_ptr<data::ConfigShapeCircle> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigShapeCircle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeCircle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigShape.cpp",
              "parseFromJson",
              286);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigShapeCircle>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeCircle> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigShapeCircle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeCircle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigShapeCircle>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeCircle> *const)jval,
              (std::shared_ptr<data::ConfigShapeCircle> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigShapeCircle>::~shared_ptr((std::shared_ptr<data::ConfigShapeCircle> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      263);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[50])"jsonValueFind for: ConfigShapeCircle $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigShapeCircle>::shared_ptr((std::shared_ptr<data::ConfigShapeCircle> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeCircle,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 294: range 00000000120C1E7A-00000000120C1FED
int32_t __cdecl data::ConfigShapeCircle::getHashValue(const data::ConfigShapeCircle *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:295";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCircle::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius);
  }
  common::tools::HashUtils::appendHash(this->radius, (int32_t *)(v2 + 32));
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

// Line 304: range 000000001217E184-000000001217E3C5
void __cdecl data::ConfigShapeRectRegister::ConfigShapeRectRegister(data::ConfigShapeRectRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseShape> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeRectRegister::ConfigShapeRectRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeRect>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigShapeRect",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::operator[](
         &data::g_ConfigBaseShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseShape>::operator=<data::ConfigShapeRect>(
    v4,
    (std::shared_ptr<data::ConfigShapeRect> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigShapeRect>::~shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)(v1 + 64));
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

// Line 307: range 00000000120C1FEE-00000000120C22CC
void __cdecl data::ConfigShapeRect::foreachMember(
        data::ConfigShapeRect *const this,
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
  *(_QWORD *)(v2 + 8) = "4 32 16 19 center_type_any:309 64 16 13 width_any:311 96 16 14 length_any:313 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeRect::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 128), p_func);
  data::ConfigBaseShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 128));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::CenterPosType &,data::CenterPosType,std::any::_Manager_internal<data::CenterPosType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->center_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->width);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 96), &this->length);
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

// Line 318: range 00000000120C22CE-00000000120C23DE
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigShapeRect::clone(data::ConfigShapeRect *const this)
{
  data::ConfigShapeRect *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseShape> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeRect::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeRect,data::ConfigShapeRect&>(
    (common::tools::perf::allocator<data::ConfigShapeRect,data::ConfigShapeRect> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr<data::ConfigShapeRect,void>(
    (std::shared_ptr<data::ConfigBaseShape> *const)this,
    (std::shared_ptr<data::ConfigShapeRect> *)(v2 + 32));
  std::shared_ptr<data::ConfigShapeRect>::~shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)(v2 + 32));
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

// Line 322: range 00000000120C23E0-00000000120C2423
data::ConfigShapeRectPtr __cdecl data::ConfigShapeRectFactory::create(data::ConfigShapeRectFactory *const this)
{
  data::ConfigShapeRectPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigShapeRect>();
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeRect,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 324: range 00000000120C2424-00000000120C2EED
bool __cdecl data::ConfigShapeRect::fromJson(data::ConfigShapeRect *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *center_type_ptr; // [rsp+18h] [rbp-2A8h]
  const Json::Value *width_ptr; // [rsp+20h] [rbp-2A0h]
  const Json::Value *length_ptr; // [rsp+28h] [rbp-298h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeRect::fromJson;
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
  if ( !data::ConfigBaseShape::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      327);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[37])"fromJson for: ConfigBaseShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "centerType",
      (const std::allocator<char> *)(v2 + 48));
    center_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !center_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)center_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 224), &this->center_type);
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        339);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[32])"fromJson for: centerType fails!");
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
        "width",
        (const std::allocator<char> *)(v2 + 64));
      width_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( width_ptr && !fromJson<float>(width_ptr, &this->width) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "fromJson",
          351);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[27])"fromJson for: width fails!");
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
          "length",
          (const std::allocator<char> *)(v2 + 80));
        length_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( length_ptr && !fromJson<float>(length_ptr, &this->length) )
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
            "./src/json_data_auto/ConfigShape.cpp",
            "fromJson",
            363);
          common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[28])"fromJson for: length fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v7 = ((_BYTE)this + 36) & 7;
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

// Line 370: range 00000000120C2EEE-00000000120C3A3B
data::ConfigShapeRectPtr __cdecl data::ConfigShapeRect::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigShapeRectPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigShapeRect,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:383 96 16 7 ptr:389 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:377 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeRect::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        380);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[43])"fromJson for: ConfigShapeRect $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigShapeRect>::shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          386);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigShapeRect>::shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigShapeRect,data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigShapeRect>((const std::shared_ptr<data::ConfigShapeRect> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            392);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[34])"cast to ConfigShapeRectPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigShapeRect>::shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigShapeRect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeRect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigShape.cpp",
              "parseFromJson",
              397);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigShapeRect>::shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)jval, 0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigShapeRect,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeRect,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigShapeRect>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeRect> *const)jval,
              (std::shared_ptr<data::ConfigShapeRect> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigShapeRect>::~shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      374);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[48])"jsonValueFind for: ConfigShapeRect $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigShapeRect>::shared_ptr((std::shared_ptr<data::ConfigShapeRect> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeRect,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 405: range 00000000120C3A3C-00000000120C3C4B
int32_t __cdecl data::ConfigShapeRect::getHashValue(const data::ConfigShapeRect *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:406";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeRect::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->center_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->center_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->center_type);
  }
  common::tools::HashUtils::appendHash(this->center_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->width);
  }
  common::tools::HashUtils::appendHash(this->width, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->length);
  }
  common::tools::HashUtils::appendHash(this->length, (int32_t *)(v2 + 32));
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

// Line 417: range 000000001217E43E-000000001217E67F
void __cdecl data::ConfigShapeSectorRegister::ConfigShapeSectorRegister(data::ConfigShapeSectorRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseShape> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeSectorRegister::ConfigShapeSectorRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeSector>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigShapeSector",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::operator[](
         &data::g_ConfigBaseShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseShape>::operator=<data::ConfigShapeSector>(
    v4,
    (std::shared_ptr<data::ConfigShapeSector> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigShapeSector>::~shared_ptr((std::shared_ptr<data::ConfigShapeSector> *const)(v1 + 64));
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

// Line 420: range 00000000120C3C4C-00000000120C3EA2
void __cdecl data::ConfigShapeSector::foreachMember(
        data::ConfigShapeSector *const this,
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
  *(_QWORD *)(v2 + 8) = "3 32 16 14 radius_any:422 64 16 19 full_degree_any:424 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSector::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigBaseShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->radius);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 64),
    &this->full_degree);
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

// Line 429: range 00000000120C3EA4-00000000120C3FB4
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigShapeSector::clone(data::ConfigShapeSector *const this)
{
  data::ConfigShapeSector *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseShape> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSector::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeSector,data::ConfigShapeSector&>(
    (common::tools::perf::allocator<data::ConfigShapeSector,data::ConfigShapeSector> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr<data::ConfigShapeSector,void>(
    (std::shared_ptr<data::ConfigBaseShape> *const)this,
    (std::shared_ptr<data::ConfigShapeSector> *)(v2 + 32));
  std::shared_ptr<data::ConfigShapeSector>::~shared_ptr((std::shared_ptr<data::ConfigShapeSector> *const)(v2 + 32));
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

// Line 433: range 00000000120C3FB6-00000000120C3FF9
data::ConfigShapeSectorPtr __cdecl data::ConfigShapeSectorFactory::create(data::ConfigShapeSectorFactory *const this)
{
  data::ConfigShapeSectorPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigShapeSector>();
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeSector,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 435: range 00000000120C3FFA-00000000120C4707
bool __cdecl data::ConfigShapeSector::fromJson(data::ConfigShapeSector *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *radius_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *full_degree_ptr; // [rsp+18h] [rbp-1A8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSector::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigBaseShape::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      438);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[37])"fromJson for: ConfigBaseShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "radius",
      (const std::allocator<char> *)(v2 + 32));
    radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( radius_ptr && !fromJson<float>(radius_ptr, &this->radius) )
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        450);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[28])"fromJson for: radius fails!");
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
        "fullDegree",
        (const std::allocator<char> *)(v2 + 48));
      full_degree_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( full_degree_ptr && !fromJson<float>(full_degree_ptr, &this->full_degree) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "fromJson",
          462);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[32])"fromJson for: fullDegree fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
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

// Line 469: range 00000000120C4708-00000000120C5255
data::ConfigShapeSectorPtr __cdecl data::ConfigShapeSector::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigShapeSectorPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigShapeSector,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:482 96 16 7 ptr:488 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:476 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSector::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        479);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[45])"fromJson for: ConfigShapeSector $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigShapeSector>::shared_ptr((std::shared_ptr<data::ConfigShapeSector> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          485);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigShapeSector>::shared_ptr((std::shared_ptr<data::ConfigShapeSector> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigShapeSector,data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigShapeSector>((const std::shared_ptr<data::ConfigShapeSector> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            491);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[36])"cast to ConfigShapeSectorPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigShapeSector>::shared_ptr(
            (std::shared_ptr<data::ConfigShapeSector> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigShapeSector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeSector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigShape.cpp",
              "parseFromJson",
              496);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigShapeSector>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeSector> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigShapeSector,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeSector,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigShapeSector>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeSector> *const)jval,
              (std::shared_ptr<data::ConfigShapeSector> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigShapeSector>::~shared_ptr((std::shared_ptr<data::ConfigShapeSector> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      473);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[50])"jsonValueFind for: ConfigShapeSector $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigShapeSector>::shared_ptr((std::shared_ptr<data::ConfigShapeSector> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeSector,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 504: range 00000000120C5256-00000000120C541C
int32_t __cdecl data::ConfigShapeSector::getHashValue(const data::ConfigShapeSector *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:505";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSector::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius);
  }
  common::tools::HashUtils::appendHash(this->radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->full_degree >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->full_degree >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->full_degree);
  }
  common::tools::HashUtils::appendHash(this->full_degree, (int32_t *)(v2 + 32));
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

// Line 515: range 000000001217E6F8-000000001217E939
void __cdecl data::ConfigShapePolygonRegister::ConfigShapePolygonRegister(data::ConfigShapePolygonRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseShape> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapePolygonRegister::ConfigShapePolygonRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapePolygon>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigShapePolygon",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::operator[](
         &data::g_ConfigBaseShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseShape>::operator=<data::ConfigShapePolygon>(
    v4,
    (std::shared_ptr<data::ConfigShapePolygon> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigShapePolygon>::~shared_ptr((std::shared_ptr<data::ConfigShapePolygon> *const)(v1 + 64));
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

// Line 518: range 00000000120C541E-00000000120C55EE
void __cdecl data::ConfigShapePolygon::foreachMember(
        data::ConfigShapePolygon *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 27 polygon_config_path_any:520 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapePolygon::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBaseShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->polygon_config_path);
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

// Line 525: range 00000000120C55F0-00000000120C5700
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigShapePolygon::clone(data::ConfigShapePolygon *const this)
{
  data::ConfigShapePolygon *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseShape> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapePolygon::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapePolygon,data::ConfigShapePolygon&>(
    (common::tools::perf::allocator<data::ConfigShapePolygon,data::ConfigShapePolygon> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr<data::ConfigShapePolygon,void>(
    (std::shared_ptr<data::ConfigBaseShape> *const)this,
    (std::shared_ptr<data::ConfigShapePolygon> *)(v2 + 32));
  std::shared_ptr<data::ConfigShapePolygon>::~shared_ptr((std::shared_ptr<data::ConfigShapePolygon> *const)(v2 + 32));
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

// Line 529: range 00000000120C5702-00000000120C5745
data::ConfigShapePolygonPtr __cdecl data::ConfigShapePolygonFactory::create(
        data::ConfigShapePolygonFactory *const this)
{
  data::ConfigShapePolygonPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigShapePolygon>();
  result._M_ptr = (std::__shared_ptr<data::ConfigShapePolygon,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 531: range 00000000120C5746-00000000120C5BCF
bool __cdecl data::ConfigShapePolygon::fromJson(data::ConfigShapePolygon *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *polygon_config_path_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapePolygon::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBaseShape::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      534);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[37])"fromJson for: ConfigBaseShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "polygonConfigPath",
      (const std::allocator<char> *)(v2 + 48));
    polygon_config_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( polygon_config_path_ptr && !fromJson<std::string>(polygon_config_path_ptr, &this->polygon_config_path) )
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        546);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[39])"fromJson for: polygonConfigPath fails!");
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

// Line 553: range 00000000120C5BD0-00000000120C671D
data::ConfigShapePolygonPtr __cdecl data::ConfigShapePolygon::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigShapePolygonPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigShapePolygon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:566 96 16 7 ptr:572 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:560 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapePolygon::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        563);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[46])"fromJson for: ConfigShapePolygon $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigShapePolygon>::shared_ptr((std::shared_ptr<data::ConfigShapePolygon> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          569);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigShapePolygon>::shared_ptr(
          (std::shared_ptr<data::ConfigShapePolygon> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigShapePolygon,data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigShapePolygon>(
               (const std::shared_ptr<data::ConfigShapePolygon> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            575);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[37])"cast to ConfigShapePolygonPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigShapePolygon>::shared_ptr(
            (std::shared_ptr<data::ConfigShapePolygon> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigShapePolygon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapePolygon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigShape.cpp",
              "parseFromJson",
              580);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigShapePolygon>::shared_ptr(
              (std::shared_ptr<data::ConfigShapePolygon> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigShapePolygon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapePolygon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigShapePolygon>::shared_ptr(
              (std::shared_ptr<data::ConfigShapePolygon> *const)jval,
              (std::shared_ptr<data::ConfigShapePolygon> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigShapePolygon>::~shared_ptr((std::shared_ptr<data::ConfigShapePolygon> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      557);
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[51])"jsonValueFind for: ConfigShapePolygon $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigShapePolygon>::shared_ptr((std::shared_ptr<data::ConfigShapePolygon> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigShapePolygon,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 588: range 00000000120C671E-00000000120C685E
int32_t __cdecl data::ConfigShapePolygon::getHashValue(const data::ConfigShapePolygon *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:589";
  *(_QWORD *)(v2 + 16) = data::ConfigShapePolygon::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->polygon_config_path, (int32_t *)(v2 + 32));
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

// Line 598: range 000000001217E9B2-000000001217EBF3
void __cdecl data::ConfigShapeSphereRegister::ConfigShapeSphereRegister(data::ConfigShapeSphereRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseShape> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeSphereRegister::ConfigShapeSphereRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeSphere>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigShapeSphere",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::operator[](
         &data::g_ConfigBaseShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseShape>::operator=<data::ConfigShapeSphere>(
    v4,
    (std::shared_ptr<data::ConfigShapeSphere> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigShapeSphere>::~shared_ptr((std::shared_ptr<data::ConfigShapeSphere> *const)(v1 + 64));
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

// Line 601: range 00000000120C6860-00000000120C6A30
void __cdecl data::ConfigShapeSphere::foreachMember(
        data::ConfigShapeSphere *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 14 radius_any:603 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSphere::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBaseShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->radius);
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

// Line 608: range 00000000120C6A32-00000000120C6B42
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigShapeSphere::clone(data::ConfigShapeSphere *const this)
{
  data::ConfigShapeSphere *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseShape> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSphere::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeSphere,data::ConfigShapeSphere&>(
    (common::tools::perf::allocator<data::ConfigShapeSphere,data::ConfigShapeSphere> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr<data::ConfigShapeSphere,void>(
    (std::shared_ptr<data::ConfigBaseShape> *const)this,
    (std::shared_ptr<data::ConfigShapeSphere> *)(v2 + 32));
  std::shared_ptr<data::ConfigShapeSphere>::~shared_ptr((std::shared_ptr<data::ConfigShapeSphere> *const)(v2 + 32));
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

// Line 612: range 00000000120C6B44-00000000120C6B87
data::ConfigShapeSpherePtr __cdecl data::ConfigShapeSphereFactory::create(data::ConfigShapeSphereFactory *const this)
{
  data::ConfigShapeSpherePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigShapeSphere>();
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeSphere,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 614: range 00000000120C6B88-00000000120C7011
bool __cdecl data::ConfigShapeSphere::fromJson(data::ConfigShapeSphere *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *radius_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSphere::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBaseShape::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      617);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[37])"fromJson for: ConfigBaseShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "radius",
      (const std::allocator<char> *)(v2 + 48));
    radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( radius_ptr && !fromJson<float>(radius_ptr, &this->radius) )
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        629);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[28])"fromJson for: radius fails!");
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

// Line 636: range 00000000120C7012-00000000120C7B5F
data::ConfigShapeSpherePtr __cdecl data::ConfigShapeSphere::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigShapeSpherePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigShapeSphere,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:649 96 16 7 ptr:655 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:643 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSphere::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        646);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[45])"fromJson for: ConfigShapeSphere $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigShapeSphere>::shared_ptr((std::shared_ptr<data::ConfigShapeSphere> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          652);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigShapeSphere>::shared_ptr((std::shared_ptr<data::ConfigShapeSphere> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigShapeSphere,data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigShapeSphere>((const std::shared_ptr<data::ConfigShapeSphere> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            658);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[36])"cast to ConfigShapeSpherePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigShapeSphere>::shared_ptr(
            (std::shared_ptr<data::ConfigShapeSphere> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigShapeSphere,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeSphere,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigShape.cpp",
              "parseFromJson",
              663);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigShapeSphere>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeSphere> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigShapeSphere,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeSphere,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigShapeSphere>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeSphere> *const)jval,
              (std::shared_ptr<data::ConfigShapeSphere> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigShapeSphere>::~shared_ptr((std::shared_ptr<data::ConfigShapeSphere> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      640);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[50])"jsonValueFind for: ConfigShapeSphere $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigShapeSphere>::shared_ptr((std::shared_ptr<data::ConfigShapeSphere> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeSphere,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 671: range 00000000120C7B60-00000000120C7CD3
int32_t __cdecl data::ConfigShapeSphere::getHashValue(const data::ConfigShapeSphere *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:672";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeSphere::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius);
  }
  common::tools::HashUtils::appendHash(this->radius, (int32_t *)(v2 + 32));
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

// Line 681: range 000000001217EC6C-000000001217EEAD
void __cdecl data::ConfigShapeCubeRegister::ConfigShapeCubeRegister(data::ConfigShapeCubeRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseShape> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeCubeRegister::ConfigShapeCubeRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeCube>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigShapeCube",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::operator[](
         &data::g_ConfigBaseShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseShape>::operator=<data::ConfigShapeCube>(
    v4,
    (std::shared_ptr<data::ConfigShapeCube> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigShapeCube>::~shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)(v1 + 64));
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

// Line 684: range 00000000120C7CD4-00000000120C7F2A
void __cdecl data::ConfigShapeCube::foreachMember(
        data::ConfigShapeCube *const this,
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
  *(_QWORD *)(v2 + 8) = "3 32 16 13 width_any:686 64 16 14 length_any:688 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCube::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigBaseShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->width);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->length);
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

// Line 693: range 00000000120C7F2C-00000000120C803C
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigShapeCube::clone(data::ConfigShapeCube *const this)
{
  data::ConfigShapeCube *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseShape> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCube::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeCube,data::ConfigShapeCube&>(
    (common::tools::perf::allocator<data::ConfigShapeCube,data::ConfigShapeCube> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr<data::ConfigShapeCube,void>(
    (std::shared_ptr<data::ConfigBaseShape> *const)this,
    (std::shared_ptr<data::ConfigShapeCube> *)(v2 + 32));
  std::shared_ptr<data::ConfigShapeCube>::~shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)(v2 + 32));
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

// Line 697: range 00000000120C803E-00000000120C8081
data::ConfigShapeCubePtr __cdecl data::ConfigShapeCubeFactory::create(data::ConfigShapeCubeFactory *const this)
{
  data::ConfigShapeCubePtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigShapeCube>();
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeCube,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 699: range 00000000120C8082-00000000120C878F
bool __cdecl data::ConfigShapeCube::fromJson(data::ConfigShapeCube *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *width_ptr; // [rsp+10h] [rbp-1B0h]
  const Json::Value *length_ptr; // [rsp+18h] [rbp-1A8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCube::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( !data::ConfigBaseShape::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      702);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[37])"fromJson for: ConfigBaseShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "width",
      (const std::allocator<char> *)(v2 + 32));
    width_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( width_ptr && !fromJson<float>(width_ptr, &this->width) )
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        714);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[27])"fromJson for: width fails!");
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
        "length",
        (const std::allocator<char> *)(v2 + 48));
      length_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
      std::string::~string((void *)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( length_ptr && !fromJson<float>(length_ptr, &this->length) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "fromJson",
          726);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v2 + 320),
          (const char (*)[28])"fromJson for: length fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
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

// Line 733: range 00000000120C8790-00000000120C92DD
data::ConfigShapeCubePtr __cdecl data::ConfigShapeCube::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigShapeCubePtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigShapeCube,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:746 96 16 7 ptr:752 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:740 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCube::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        743);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[43])"fromJson for: ConfigShapeCube $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigShapeCube>::shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          749);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigShapeCube>::shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)jval, 0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigShapeCube,data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigShapeCube>((const std::shared_ptr<data::ConfigShapeCube> *)(v2 + 96), 0LL) )
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            755);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[34])"cast to ConfigShapeCubePtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigShapeCube>::shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)jval, 0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigShapeCube,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeCube,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigShape.cpp",
              "parseFromJson",
              760);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigShapeCube>::shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)jval, 0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigShapeCube,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeCube,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigShapeCube>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeCube> *const)jval,
              (std::shared_ptr<data::ConfigShapeCube> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigShapeCube>::~shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      737);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[48])"jsonValueFind for: ConfigShapeCube $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigShapeCube>::shared_ptr((std::shared_ptr<data::ConfigShapeCube> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeCube,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 768: range 00000000120C92DE-00000000120C94A4
int32_t __cdecl data::ConfigShapeCube::getHashValue(const data::ConfigShapeCube *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:769";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCube::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->width >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->width);
  }
  common::tools::HashUtils::appendHash(this->width, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->length >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->length);
  }
  common::tools::HashUtils::appendHash(this->length, (int32_t *)(v2 + 32));
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

// Line 779: range 000000001217EF26-000000001217F167
void __cdecl data::ConfigShapeCylinderRegister::ConfigShapeCylinderRegister(
        data::ConfigShapeCylinderRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigBaseShape> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigShapeCylinderRegister::ConfigShapeCylinderRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeCylinder>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigShapeCylinder",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::operator[](
         &data::g_ConfigBaseShapeMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigBaseShape>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigBaseShape>::operator=<data::ConfigShapeCylinder>(
    v4,
    (std::shared_ptr<data::ConfigShapeCylinder> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigShapeCylinder>::~shared_ptr((std::shared_ptr<data::ConfigShapeCylinder> *const)(v1 + 64));
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

// Line 782: range 00000000120C94A6-00000000120C9676
void __cdecl data::ConfigShapeCylinder::foreachMember(
        data::ConfigShapeCylinder *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 14 radius_any:784 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCylinder::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigBaseShape::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 32), &this->radius);
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

// Line 789: range 00000000120C9678-00000000120C9788
std::shared_ptr<data::ConfigBaseShape> __cdecl data::ConfigShapeCylinder::clone(data::ConfigShapeCylinder *const this)
{
  data::ConfigShapeCylinder *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigBaseShape> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCylinder::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigShapeCylinder,data::ConfigShapeCylinder&>(
    (common::tools::perf::allocator<data::ConfigShapeCylinder,data::ConfigShapeCylinder> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigBaseShape>::shared_ptr<data::ConfigShapeCylinder,void>(
    (std::shared_ptr<data::ConfigBaseShape> *const)this,
    (std::shared_ptr<data::ConfigShapeCylinder> *)(v2 + 32));
  std::shared_ptr<data::ConfigShapeCylinder>::~shared_ptr((std::shared_ptr<data::ConfigShapeCylinder> *const)(v2 + 32));
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

// Line 793: range 00000000120C978A-00000000120C97CD
data::ConfigShapeCylinderPtr __cdecl data::ConfigShapeCylinderFactory::create(
        data::ConfigShapeCylinderFactory *const this)
{
  data::ConfigShapeCylinderPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigShapeCylinder>();
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeCylinder,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 795: range 00000000120C97CE-00000000120C9C57
bool __cdecl data::ConfigShapeCylinder::fromJson(data::ConfigShapeCylinder *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *radius_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCylinder::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigBaseShape::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigShape.cpp",
      "fromJson",
      798);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[37])"fromJson for: ConfigBaseShape fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "radius",
      (const std::allocator<char> *)(v2 + 48));
    radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( radius_ptr && !fromJson<float>(radius_ptr, &this->radius) )
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
        "./src/json_data_auto/ConfigShape.cpp",
        "fromJson",
        810);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[28])"fromJson for: radius fails!");
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

// Line 817: range 00000000120C9C58-00000000120CA7A5
data::ConfigShapeCylinderPtr __cdecl data::ConfigShapeCylinder::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigShapeCylinderPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigShapeCylinder,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:830 96 16 7 ptr:836 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:824 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCylinder::parseFromJson;
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
        "./src/json_data_auto/ConfigShape.cpp",
        "parseFromJson",
        827);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[47])"fromJson for: ConfigShapeCylinder $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigShapeCylinder>::shared_ptr(
        (std::shared_ptr<data::ConfigShapeCylinder> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigBaseShape((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ConfigShape.cpp",
          "parseFromJson",
          833);
        v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[41])"create ConfigBaseShape fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigShapeCylinder>::shared_ptr(
          (std::shared_ptr<data::ConfigShapeCylinder> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigShapeCylinder,data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v2 + 96));
        if ( std::operator==<data::ConfigShapeCylinder>(
               (const std::shared_ptr<data::ConfigShapeCylinder> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigShape.cpp",
            "parseFromJson",
            839);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[38])"cast to ConfigShapeCylinderPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigShapeCylinder>::shared_ptr(
            (std::shared_ptr<data::ConfigShapeCylinder> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigShapeCylinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeCylinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigShape.cpp",
              "parseFromJson",
              844);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigShapeCylinder>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeCylinder> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigShapeCylinder,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigShapeCylinder,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 36) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigShapeCylinder>::shared_ptr(
              (std::shared_ptr<data::ConfigShapeCylinder> *const)jval,
              (std::shared_ptr<data::ConfigShapeCylinder> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigShapeCylinder>::~shared_ptr((std::shared_ptr<data::ConfigShapeCylinder> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigShape.cpp",
      "parseFromJson",
      821);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[52])"jsonValueFind for: ConfigShapeCylinder $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigShapeCylinder>::shared_ptr((std::shared_ptr<data::ConfigShapeCylinder> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigShapeCylinder,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 852: range 00000000120CA7A6-00000000120CA919
int32_t __cdecl data::ConfigShapeCylinder::getHashValue(const data::ConfigShapeCylinder *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:853";
  *(_QWORD *)(v2 + 16) = data::ConfigShapeCylinder::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigBaseShape::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->radius);
  }
  common::tools::HashUtils::appendHash(this->radius, (int32_t *)(v2 + 32));
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

// Line 859: range 00000000120CA91A-00000000120CB50F
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigShapeMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  unsigned __int64 v10; // rax
  const Json::Value *v11; // rax
  std::shared_ptr<data::ConfigBaseShape> *v12; // r8
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> >,false,true>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // edx
  char v21[752]; // [rsp+20h] [rbp-2F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(704LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 7 cit:861 80 16 9 <unknown> 112 16 9 value:871 144 32 7 key:864 208 32 9 <unknown> 272 "
                        "32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 40 12 tmp_jval:860 544 40 12 key_jval:8"
                        "63 624 40 14 value_jval:870";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862738] = -218959360;
  v5[536862739] = 62194;
  v5[536862740] = -218103808;
  v5[536862741] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 464), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 464));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 464));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 583) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 71) & 7) >= *(_BYTE *)(((v3 + 583) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 544, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 544));
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 144);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 544), (std::string *)(v3 + 144)) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigShape.cpp",
        "mapFromJson",
        867);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 272), (Json::Value_0 *)(v3 + 544));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 272));
      std::string::~string((void *)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 624) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 624), v11);
      *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigBaseShape::parseFromJson((const Json::Value *)(v3 + 112));
      if ( std::operator==<data::ConfigBaseShape>((const std::shared_ptr<data::ConfigBaseShape> *)(v3 + 112), 0LL) )
      {
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 336, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 336),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigShape.cpp",
          "mapFromJson",
          874);
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 336),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 144));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
        *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v14 = 0;
      }
      else
      {
        v15 = std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseShape>>::emplace<std::string&,std::shared_ptr<data::ConfigBaseShape>&>(
                m,
                (std::string *)(v3 + 144),
                (std::shared_ptr<data::ConfigBaseShape> *)(v3 + 112),
                (std::string *)(v3 + 144),
                v12);
        if ( !v15.second )
        {
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 400, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigShape.cpp",
            "mapFromJson",
            879);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 400),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v3 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
          *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
      std::shared_ptr<data::ConfigBaseShape>::~shared_ptr((std::shared_ptr<data::ConfigBaseShape> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
      v9 = v14 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 544));
    v17 = ((v3 + 544) >> 3) + 2147450880;
    *(_DWORD *)v17 = -117901064;
    *(_BYTE *)(v17 + 4) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v18 = ((v3 + 624) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v9 )
    {
      v19 = 0;
      goto LABEL_34;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v19 = 1;
LABEL_34:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v19 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 464));
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 888: range 00000000120CB510-00000000120CB81F
int32_t __cdecl data::getMapHashValue(const data::ConfigShapeMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> >,false,true>::reference v9; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:889 64 8 15 __for_begin:890 96 8 13 __for_end:890";
  *(_QWORD *)(v2 + 16) = data::getMapHashValue;
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
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseShape>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseShape>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseShape>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseShape>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> >,true> *)(v2 + 96)) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::shared_ptr<data::ConfigBaseShape>>(v9);
    val = (std::tuple_element<1,const std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> > >::type *)std::get<1ul,std::string const,std::shared_ptr<data::ConfigBaseShape>>(v9);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    if ( std::operator!=<data::ConfigBaseShape>(0LL, val) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseShape,(__gnu_cxx::_Lock_policy)2,false,false> *const)val);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigBaseShape>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigBaseShape> >,false,true> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
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
  return result;
};
